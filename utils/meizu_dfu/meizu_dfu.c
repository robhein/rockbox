/*
  Copyright 2008 William Poetra Yoga Hadisoeseno <williampoetra@gmail.com>
                 Frank Gevaerts <frank@gevaerts.be>
  This file is licensed under GPL v2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <libgen.h>

#include <usb.h>

void usage()
{
  fprintf(stderr, "usage: meizu_dfu m3 <SST39VF800.dfu> <M3.EBN>\n");
  fprintf(stderr, "       meizu_dfu m6 <SST39VF800.dfu> <M6.EBN>\n");
  fprintf(stderr, "       meizu_dfu m6sl <updateNAND_BE_070831.dfu> <M6SL.EBN>\n");
  exit(1);
}

uint32_t crc32(char *data, int len, uint32_t poly, uint32_t init)
{
  uint32_t crc_table[256];
  uint32_t crc, t;
  int i, j;

  // generate the table
  for (i = 0; i < 256; ++i) {
    t = i;
    for (j = 0; j < 8; ++j)
      if (t & 1)
        t = (t >> 1) ^ poly;
      else
        t >>= 1;
    crc_table[i] = t;
  }

  // calculate the crc
  crc = init;
  for (i = 0; i < len; ++i)
    crc = (crc >> 8) ^ crc_table[(crc^data[i]) & 0xff];

  return crc;
}

#define BLOCK_SIZE 2048

typedef struct {
  char *name;
  char *data;
  int len;
} image_data_t;

typedef struct {
  int delay;
  int pre_off;
  uint32_t pre_sig;
  uint16_t suf_dev;
  uint16_t suf_prod;
  uint16_t suf_ven;
  uint16_t suf_dfu;
  char suf_sig[3];
  uint8_t suf_len;
} image_attr_t;

#define DFU_CRC_POLY 0xedb88320
#define DFU_INIT_CRC 0xffffffff

void init_img(image_data_t *img, const char *filename, image_attr_t *attr)
{
  int fd, len, i, readlen;
  struct stat statbuf;
  char buf[BLOCK_SIZE];
  uint32_t dfu_crc;

  printf("Reading %s...", filename);

  stat(filename, &statbuf);
  len = statbuf.st_size;

  img->name = basename(strdup(filename));
  img->data = malloc(len + 16);
  img->len = len + 16;

  fd = open(filename, O_RDONLY);
  for (i = 0; i < len; i += BLOCK_SIZE) {
    readlen = ((len - i) < BLOCK_SIZE) ? (len - i) : BLOCK_SIZE;
    read(fd, buf, readlen);
    memcpy(img->data + i, buf, readlen);
  }
  close(fd);

  // patch the data size in after the signature
  memcpy(img->data + attr->pre_off + 4, &img->len, 4);

  // append the suffix (excluding the checksum)
  memcpy(img->data + len, &attr->suf_dev, 2);
  memcpy(img->data + len + 2, &attr->suf_prod, 2);
  memcpy(img->data + len + 4, &attr->suf_ven, 2);
  memcpy(img->data + len + 6, &attr->suf_dfu, 2);
  memcpy(img->data + len + 8, &attr->suf_sig, 3);
  memcpy(img->data + len + 11, &attr->suf_len, 1);

  dfu_crc = crc32(img->data, len + 12, DFU_CRC_POLY, DFU_INIT_CRC);
  memcpy(img->data + len + 12, &dfu_crc, 4);

#if 0
  FILE *f = fopen(img->name, "w");
  fwrite(img->data, len + 16, 1, f);
  fclose(f);
#endif

  printf("OK\n");
}

#define DFU_VEN 0x0419
#define DFU_DEV 0x0141
usb_dev_handle *device;
int timeout = 0xa0000;

void usb_dev_open()
{
  struct usb_bus *bus;
  struct usb_device *dev;

  printf("USB initialization...");
  fflush(stdout);

  usb_init();
  usb_find_busses();
  usb_find_devices();

  for (bus = usb_get_busses(); bus != NULL; bus = bus->next)
    for (dev = bus->devices; dev != NULL; dev = dev->next)
      if (dev->descriptor.idVendor == DFU_VEN
          || dev->descriptor.idProduct == DFU_DEV)
        goto found;

  printf("\nNo device found, exiting.\n");
  exit(1);

found:
  printf(" Device found.\n");
  device = usb_open(dev);
  usb_claim_interface(device, 0);
}

void usb_mimic_windows()
{
  char data[1024];

  usb_control_msg(device, 0x80, 0x06, 0x0100, 0x0000, data, 0x0012, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0200, 0x0000, data, 0x0009, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0200, 0x0000, data, 0x001b, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0100, 0x0000, data, 0x0040, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0100, 0x0000, data, 0x0012, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0200, 0x0000, data, 0x0009, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0300, 0x0000, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0303, 0x0409, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0200, 0x0000, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0300, 0x0000, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0302, 0x0409, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0300, 0x0000, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0302, 0x0409, data, 0x00ff, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0100, 0x0000, data, 0x0012, timeout);
  usb_control_msg(device, 0x80, 0x06, 0x0200, 0x0000, data, 0x0209, timeout);
}

void usb_dev_close()
{
  printf("Releasing interface...");
  fflush(stdout);

  usb_release_interface(device, 0);

  printf(" OK\n");
}

#define DFU_DETACH      0
#define DFU_DOWNLOAD    1
#define DFU_UPLOAD      2
#define DFU_GETSTATUS   3
#define DFU_CLRSTATUS   4
#define DFU_GETSTATE    5
#define DFU_ABORT       6

void get_cpu()
{
  char data[64];
  int req_out_if = USB_ENDPOINT_IN | USB_TYPE_CLASS | USB_RECIP_INTERFACE;
  int len;

  printf("GET CPU");
  fflush(stdout);

  // check for "S5L8700 Rev.1"
  len = usb_control_msg(device, req_out_if, 0xff, 0x0002, 0, data, 0x003f, timeout);
  if (len < 0) {
    printf("\nError trying to get CPU model, exiting.\n");
    exit(1);
  }

  memset(data + len, 0, 64 - len);
  printf(", got: %s\n", data);
}

void send_file(image_data_t *img)
{
  char dfu_ret[6];
  char *data;
  int req_out_if = USB_ENDPOINT_OUT | USB_TYPE_CLASS | USB_RECIP_INTERFACE;
  int req_in_if = USB_ENDPOINT_IN | USB_TYPE_CLASS | USB_RECIP_INTERFACE;
  int len, idx, writelen, i;

  printf("Sending %s... ", img->name);
  fflush(stdout);

  len = img->len;
  data = img->data;

  // loop for the file
  for (i = 0, idx = 0; i < len; i += BLOCK_SIZE, ++idx) {
    writelen = ((len - i) < BLOCK_SIZE) ? (len - i) : BLOCK_SIZE;
    usb_control_msg(device, req_out_if, DFU_DOWNLOAD, idx, 0, data + i, writelen, timeout);
    dfu_ret[4] = 0x00;
    while (dfu_ret[4] != 0x05)
      usb_control_msg(device, req_in_if, DFU_GETSTATUS, 0, 0, dfu_ret, 6, timeout);
    printf("#");
    fflush(stdout);
  }

  usb_control_msg(device, req_out_if, DFU_DOWNLOAD, idx, 0, NULL, 0, timeout);
  dfu_ret[4] = 0x00;
  while (dfu_ret[4] != 0x07)
    usb_control_msg(device, req_in_if, DFU_GETSTATUS, 0, 0, dfu_ret, 6, timeout);

  printf(" OK\n");
  fflush(stdout);
}

void clear_status()
{
  char dfu_ret[6];
  int usb_in_if = USB_ENDPOINT_IN | USB_TYPE_CLASS | USB_RECIP_INTERFACE;
  int usb_out_if = USB_ENDPOINT_OUT | USB_TYPE_CLASS | USB_RECIP_INTERFACE;

  printf("Clearing status...");
  fflush(stdout);

  dfu_ret[4] = 0x00;
  while (dfu_ret[4] != 0x08)
    usb_control_msg(device, usb_in_if, DFU_GETSTATUS, 0, 0, dfu_ret, 6, timeout);
  usb_control_msg(device, usb_out_if, DFU_CLRSTATUS, 0, 0, NULL, 0, timeout);

  printf(" OK\n");
}

void dfu_detach()
{
  char usb_ret[4];
  int usb_in_oth = USB_ENDPOINT_IN | USB_TYPE_CLASS | USB_RECIP_OTHER;
  int usb_out_oth = USB_ENDPOINT_OUT | USB_TYPE_CLASS | USB_RECIP_OTHER;

  printf("Detaching...");
  fflush(stdout);

  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);
  usb_control_msg(device, usb_out_oth, DFU_DOWNLOAD, 0x0010, 3, NULL, 0, timeout);
  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);
  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);
  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);
  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);
  usb_control_msg(device, usb_in_oth, DFU_DETACH, 0x0000, 3, usb_ret, 4, timeout);

  printf(" OK\n");
}

void dfu_m3_m6(char *file1, char *file2)
{
  image_data_t img1, img2;
  image_attr_t attr1, attr2;

  attr1.delay = 1000;
  attr1.pre_off = 0x20;
  attr1.pre_sig = 0x44465543;
  attr1.suf_dev = 0x0100;
  attr1.suf_prod = 0x0140;
  attr1.suf_ven = 0x0419;
  attr1.suf_dfu = 0x0100;
  memcpy(attr1.suf_sig, "RON", 3);
  attr1.suf_len = 0x10;

  attr2.delay = 1000;
  attr2.pre_off = 0x20;
  attr2.pre_sig = 0x44465543;
  attr2.suf_dev = 0x0100;
  attr2.suf_prod = 0x0140;
  attr2.suf_ven = 0x0419;
  attr2.suf_dfu = 0x0100;
  memcpy(attr2.suf_sig, "UFD", 3);
  attr2.suf_len = 0x10;

  init_img(&img1, file1, &attr1);
  init_img(&img2, file2, &attr2);

  usb_dev_open();
//  usb_mimic_windows();
  get_cpu();
  get_cpu();
  send_file(&img1);

  printf("Wait a sec (literally)...");
  fflush(stdout);
  sleep(1);
  printf(" OK\n");

  clear_status();
  get_cpu();
  send_file(&img2);
  dfu_detach();
  usb_dev_close();
}

void dfu_m6sl(char *file1, char *file2)
{
  image_data_t img1, img2;
  image_attr_t attr1, attr2;

  attr1.delay = 1000;
  attr1.pre_off = 0x20;
  attr1.pre_sig = 0x44465543;
  attr1.suf_dev = 0x0100;
  attr1.suf_prod = 0x0140;
  attr1.suf_ven = 0x0419;
  attr1.suf_dfu = 0x0100;
  memcpy(attr1.suf_sig, "UFD", 3);
  attr1.suf_len = 0x10;

  attr2.delay = 1000;
  attr2.pre_off = 0x20;
  attr2.pre_sig = 0x44465543;
  attr2.suf_dev = 0x0100;
  attr2.suf_prod = 0x0140;
  attr2.suf_ven = 0x0419;
  attr2.suf_dfu = 0x0100;
  memcpy(attr2.suf_sig, "UFD", 3);
  attr2.suf_len = 0x10;

  init_img(&img1, file1, &attr1);
  init_img(&img2, file2, &attr2);

  usb_dev_open();
  get_cpu();
  get_cpu();
  send_file(&img1);

  printf("Wait a sec (literally)...");
  fflush(stdout);
  sleep(1);
  printf(" OK\n");
  usb_dev_close();

  usb_dev_open();
  get_cpu();
  get_cpu();
  send_file(&img2);
  dfu_detach();
  usb_dev_close();
}


int main(int argc, char **argv)
{
  if (argc != 4)
    usage();

  if (!strcmp(argv[1], "m3"))
    dfu_m3_m6(argv[2], argv[3]);
  else if (!strcmp(argv[1], "m6"))
    dfu_m3_m6(argv[2], argv[3]);
  else if (!strcmp(argv[1], "m6sl"))
    dfu_m6sl(argv[2], argv[3]);
  else
    usage();

  return 0;
}

