#ifndef ENUM_H
#define ENUM_H

typedef enum { // defined as arduino pins, not proc pins
  MAIN_M0 = 4,
  MAIN_M1 = 5,
  MAIN_M2 = 2,
  MAIN_M3 = 3,
  MAIN_M4 = 6,
  MAIN_M5 = 7,
  MAIN_M6 = 8,
  MAIN_M7 = 9,
  MAIN_VID0_0 = 22, // bit 0 of video feed 0 selection
  MAIN_VID0_1 = 23,
  MAIN_VID0_2 = 24,
  MAIN_VID1_0 = 25, // bit 0 of video feed 1 selection
  MAIN_VID1_1 = 26,
  MAIN_VID1_2 = 27
}PINS;

typedef enum {
  MAIN = 0x00,
  PWR,
  SURFACE,
  GMBL,
  ARM,
  GRPR,
  MINI_ROV
} ADDRESSES;

typedef enum {
  E_STOP = 0x00,
  WATER
} E_SIGNALS;

#endif