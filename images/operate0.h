#include <Arduino.h>

const unsigned short operate0[2880] PROGMEM = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0010 (16) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, // 0x0020 (32) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0030 (48) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0040 (64) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0050 (80) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0060 (96) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0070 (112) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0080 (128) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0090 (144) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00A0 (160) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00B0 (176) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00C0 (192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x0000, // 0x00D0 (208) pixels
    0x0000, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00E0 (224) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00F0 (240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0100 (256) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA9E0, 0x2040, 0x0000, 0x1020, 0xC200, // 0x0110 (272) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xCA20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0120 (288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6920, 0x38A0, 0x0000, 0x0000, 0x7940, 0xA1C0, // 0x0130 (304) pixels
    0xA1C0, 0x99A0, 0x0000, 0x0000, 0x0000, 0x50C0, 0x9180, 0x8960, 0x99A0, 0x8160, 0x99A0, 0x8960, 0x9180, 0x50C0, 0x0000, 0x0000, // 0x0140 (320) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6100, 0x58E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x3080, 0x6920, 0x6920, 0x6920, // 0x0150 (336) pixels
    0x3080, 0x58E0, 0x6920, 0x6920, 0x6920, 0x48C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2060, 0xA1A0, 0x0000, 0x0000, 0x0000, // 0x0160 (352) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6920, 0x6920, // 0x0170 (368) pixels
    0x6920, 0x6920, 0x6920, 0x6920, 0x6920, 0x6920, 0x38A0, 0x0000, 0x0000, 0x0000, 0x48C0, 0x8160, 0x0000, 0x0000, 0x0820, 0xC200, // 0x0180 (384) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA1C0, 0x1840, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0190 (400) pixels
    0x0800, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6100, // 0x01A0 (416) pixels
    0x6100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x91A0, 0x2040, 0x0000, 0x5900, 0x5900, 0x5900, 0x5900, 0x5900, 0x40A0, 0x0000, 0x0000, 0x9180, 0x2860, 0x0000, // 0x01C0 (448) pixels
    0x0000, 0xB9E0, 0x6920, 0x40C0, 0x1840, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01D0 (464) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01F0 (496) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2060, 0x6100, 0x8960, 0xA1A0, 0x6100, 0xA1C0, 0xA1A0, // 0x0200 (512) pixels
    0x6100, 0x2060, 0x0000, 0x0000, 0x38A0, 0x7940, 0x7940, 0x7940, 0xE260, 0x7940, 0x7940, 0x7940, 0x3880, 0x0000, 0x0000, 0x0000, // 0x0210 (528) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0xB1E0, 0x3880, 0x0000, 0xBA00, 0x0820, // 0x0220 (544) pixels
    0x0800, 0xC200, 0x0000, 0x0000, 0x0000, 0x7140, 0x6920, 0x40C0, 0xB1E0, 0x3080, 0xB1E0, 0x48C0, 0x6920, 0x7140, 0x0000, 0x0000, // 0x0230 (560) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xB9E0, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x2040, 0x40C0, 0x40C0, 0x7960, // 0x0240 (576) pixels
    0x6920, 0x7940, 0x7960, 0x40C0, 0x6100, 0x99A0, 0x0000, 0x0000, 0x5900, 0x7940, 0x7940, 0x9180, 0xCA20, 0x7940, 0x7940, 0x7940, // 0x0250 (592) pixels
    0x1840, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x48C0, 0x48C0, // 0x0260 (608) pixels
    0xD240, 0x48C0, 0x48C0, 0x58E0, 0xC220, 0x48C0, 0x2060, 0x0000, 0x0000, 0x0000, 0x0000, 0xB1E0, 0x2860, 0x0000, 0x7940, 0x5900, // 0x0270 (624) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1020, 0xA9E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0280 (640) pixels
    0x1020, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0x1020, 0x0000, 0x0000, 0x7940, 0x7940, 0x7940, 0xA9E0, // 0x0290 (656) pixels
    0xA9E0, 0x7940, 0x7940, 0x7940, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02A0 (672) pixels
    0x0000, 0x0000, 0xA1C0, 0x2060, 0x0000, 0x50E0, 0x50E0, 0xD240, 0x50E0, 0x6100, 0xA9C0, 0x0000, 0x1840, 0xA1A0, 0x40A0, 0x0800, // 0x02B0 (688) pixels
    0x7940, 0x8980, 0x58E0, 0xBA00, 0x38A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02C0 (704) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02D0 (720) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02E0 (736) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0x9180, 0x40A0, 0x40A0, 0xD240, 0x40A0, 0x40A0, // 0x02F0 (752) pixels
    0x9180, 0x50E0, 0x0000, 0x0000, 0x1840, 0x38A0, 0x38A0, 0x38A0, 0xD240, 0x38A0, 0x38A0, 0x38A0, 0x1840, 0x0000, 0x0000, 0x0000, // 0x0300 (768) pixels
    0x99A0, 0x38A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000, 0x1840, 0xB1E0, 0x0000, // 0x0310 (784) pixels
    0x0000, 0xC200, 0x0800, 0x0000, 0x0000, 0x2880, 0x58E0, 0x58E0, 0x58E0, 0xD240, 0x58E0, 0x58E0, 0x58E0, 0x2880, 0x0000, 0x0000, // 0x0320 (800) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2860, 0x9180, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2060, 0x48C0, 0x0000, 0x7940, // 0x0330 (816) pixels
    0x3880, 0x38A0, 0x7140, 0x0000, 0x7120, 0x6100, 0x0000, 0x0000, 0x2860, 0x38A0, 0x38A0, 0x58E0, 0xB9E0, 0x38A0, 0x38A0, 0x38A0, // 0x0340 (832) pixels
    0x0820, 0x0000, 0x0000, 0x0820, 0xB9E0, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0350 (848) pixels
    0xC220, 0x0000, 0x0000, 0x1020, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x99A0, 0xBA00, 0xC200, 0xBA00, 0xCA20, 0xDA40, 0xC200, // 0x0360 (864) pixels
    0xBA00, 0x38A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6920, 0x50E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0370 (880) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x38A0, 0x38A0, 0x38A0, 0x8960, // 0x0380 (896) pixels
    0x8960, 0x38A0, 0x38A0, 0x38A0, 0x0000, 0x0000, 0x0000, 0x3880, 0x99A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0390 (912) pixels
    0x0000, 0x0000, 0xA1C0, 0x6100, 0x7140, 0x48C0, 0x0000, 0xC200, 0x0000, 0x1840, 0xA9C0, 0x0000, 0x9180, 0xD240, 0xA9E0, 0x8980, // 0x03A0 (928) pixels
    0x8960, 0x1840, 0x3880, 0xA9C0, 0x1840, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03B0 (944) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03C0 (960) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03D0 (976) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0xB1E0, 0x7940, 0x7940, 0xDA60, 0x7940, 0x7940, // 0x03E0 (992) pixels
    0xB1E0, 0x50E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xCA20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03F0 (1008) pixels
    0x50E0, 0x1840, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5900, 0xBA00, 0x9180, 0x0800, 0xBA00, 0x2060, 0x0000, // 0x0400 (1024) pixels
    0x0000, 0x6920, 0xBA00, 0x40C0, 0x1840, 0x9180, 0x9180, 0x9180, 0x99A0, 0xDA40, 0x9180, 0x9180, 0x9180, 0x9180, 0x2040, 0x0000, // 0x0410 (1040) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8980, 0x3080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0xC200, 0x2860, 0xA1C0, // 0x0420 (1056) pixels
    0x0800, 0x1020, 0xA1C0, 0x0000, 0xCA20, 0x2060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2060, 0xA1C0, 0x0000, 0x0000, 0x0000, // 0x0430 (1072) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x6100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0440 (1088) pixels
    0xC220, 0x0000, 0x0000, 0x1020, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2860, 0x99A0, 0x0000, 0x0000, // 0x0450 (1104) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0460 (1120) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6100, // 0x0470 (1136) pixels
    0x6100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1840, 0x50E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0480 (1152) pixels
    0x0800, 0xCA20, 0xE260, 0x9180, 0x50C0, 0x1040, 0x0000, 0xBA00, 0x0000, 0x1840, 0xA9C0, 0x0000, 0x0000, 0x9180, 0x2860, 0x0000, // 0x0490 (1168) pixels
    0xCA20, 0x9180, 0xDA40, 0x99A0, 0xB1E0, 0x58E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04A0 (1184) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04B0 (1200) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04C0 (1216) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0x8160, 0x2880, 0x2880, 0xCA20, 0x2880, 0x2880, // 0x04D0 (1232) pixels
    0x8160, 0x50E0, 0x0000, 0x40A0, 0xC200, 0xC200, 0xC200, 0xC200, 0xEA80, 0xC200, 0xC200, 0xC200, 0xC200, 0x40C0, 0x0000, 0x0000, // 0x04E0 (1248) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x40A0, 0x6920, 0x6920, // 0x04F0 (1264) pixels
    0x6920, 0x6920, 0x40A0, 0x0000, 0x0000, 0x0000, 0x99A0, 0x8980, 0x9180, 0xB1E0, 0x8980, 0x8980, 0x99A0, 0x0000, 0x0000, 0x0000, // 0x0500 (1280) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2860, 0xC220, 0xB1E0, // 0x0510 (1296) pixels
    0x0000, 0x0000, 0xB1E0, 0x38A0, 0xBA00, 0x0000, 0x0000, 0x7140, 0xC200, 0xC200, 0xC200, 0xCA20, 0xE260, 0xC200, 0xC200, 0xC200, // 0x0520 (1312) pixels
    0xC200, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7120, 0xBA00, 0xBA00, // 0x0530 (1328) pixels
    0xEA80, 0xBA00, 0xBA00, 0xC200, 0xE260, 0xBA00, 0xBA00, 0x1040, 0x0000, 0x0000, 0x0000, 0x0000, 0x40A0, 0x8960, 0x0000, 0x0000, // 0x0540 (1344) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3080, 0x9180, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0550 (1360) pixels
    0x0000, 0x2880, 0x7120, 0x7120, 0x7120, 0x7120, 0x7120, 0x7120, 0x2880, 0x0000, 0x0000, 0xA1C0, 0xC200, 0xC200, 0xC200, 0xDA40, // 0x0560 (1376) pixels
    0xDA40, 0xC200, 0xC200, 0xC200, 0xA9C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0570 (1392) pixels
    0x0000, 0x0000, 0xA1C0, 0x2060, 0x0000, 0x0000, 0x1840, 0xA9C0, 0x0000, 0x1840, 0xA1C0, 0x0000, 0x0000, 0x9180, 0x6100, 0x3080, // 0x0580 (1408) pixels
    0xA9E0, 0x0000, 0xB1E0, 0x0000, 0x50E0, 0x58E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0590 (1424) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x05A0 (1440) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x05B0 (1456) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0xB1E0, 0x8160, 0x8160, 0xDA60, 0x8160, 0x8160, // 0x05C0 (1472) pixels
    0xB1E0, 0x50E0, 0x0000, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0xCA20, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, // 0x05D0 (1488) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x3080, 0xD240, 0x6100, // 0x05E0 (1504) pixels
    0x58E0, 0x9180, 0x7940, 0x0000, 0x0000, 0x0000, 0xC200, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0xC220, 0x0000, 0x0000, 0x0000, // 0x05F0 (1520) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0x7120, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7140, 0xB1E0, // 0x0600 (1536) pixels
    0x0000, 0x0000, 0x50E0, 0xDA40, 0x48C0, 0x0000, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0x2060, 0xA1C0, 0x0000, 0x0000, 0x1020, // 0x0610 (1552) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2860, // 0x0620 (1568) pixels
    0x99A0, 0x0000, 0x0000, 0x1840, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x58E0, 0xC200, 0xC200, 0xC200, 0xDA60, 0xF2A0, 0xC220, 0xC200, // 0x0630 (1584) pixels
    0xC200, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x9180, 0x3080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0640 (1600) pixels
    0x0000, 0x2040, 0x50E0, 0x50E0, 0x50E0, 0x50E0, 0x50E0, 0x50E0, 0x2060, 0x0000, 0x0000, 0x0000, 0x1020, 0x0000, 0x0000, 0x6100, // 0x0650 (1616) pixels
    0x6100, 0x0000, 0x0000, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0660 (1632) pixels
    0x0000, 0x0000, 0xA1C0, 0x2060, 0x0000, 0x0000, 0x58E0, 0x7120, 0x0000, 0x2060, 0xA1A0, 0x0000, 0x6920, 0xD240, 0x99A0, 0x1840, // 0x0670 (1648) pixels
    0xB1E0, 0x0000, 0xBA00, 0x0000, 0x58E0, 0x5900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0680 (1664) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0690 (1680) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06A0 (1696) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x2860, 0x2860, 0x2860, 0xCA20, 0x2860, 0x2860, // 0x06B0 (1712) pixels
    0x2860, 0x0820, 0x0000, 0x0000, 0x38A0, 0x7940, 0x0000, 0x0000, 0xCA20, 0x0000, 0x0000, 0x7940, 0x40A0, 0x0000, 0x0000, 0x0000, // 0x06C0 (1728) pixels
    0x8160, 0x2880, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x7120, 0x8160, // 0x06D0 (1744) pixels
    0x1020, 0xBA00, 0x0800, 0x0000, 0x0000, 0x0000, 0xC200, 0x40C0, 0x40C0, 0x40C0, 0x40C0, 0x40C0, 0xC200, 0x0000, 0x0000, 0x0000, // 0x06E0 (1760) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xA9C0, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0xCA20, 0xC200, // 0x06F0 (1776) pixels
    0x38A0, 0x0000, 0x3080, 0xF2A0, 0x1840, 0x0000, 0x0000, 0x0000, 0x7940, 0x38A0, 0x0000, 0x2060, 0xA1C0, 0x0000, 0x0000, 0xB9E0, // 0x0700 (1792) pixels
    0x0000, 0x0000, 0x0000, 0x0800, 0x99A0, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x58E0, // 0x0710 (1808) pixels
    0x6100, 0x0000, 0x0000, 0x1020, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC200, 0x7940, 0x7120, 0x0000, // 0x0720 (1824) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0730 (1840) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x6100, // 0x0740 (1856) pixels
    0x6100, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x2860, 0x8160, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0750 (1872) pixels
    0x0000, 0x0000, 0xA1C0, 0x3080, 0x7940, 0x1840, 0xA9C0, 0x2060, 0x0000, 0x2860, 0x99A0, 0x0000, 0x6100, 0xA1C0, 0x2860, 0x7140, // 0x0760 (1888) pixels
    0xB1E0, 0xC200, 0xF2A0, 0xCA20, 0xB1E0, 0xB1E0, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0770 (1904) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0780 (1920) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0790 (1936) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x40C0, 0xB1E0, 0xB1E0, 0xB1E0, 0xB1E0, 0xEA80, 0xB1E0, 0xB1E0, // 0x07A0 (1952) pixels
    0xB1E0, 0xB1E0, 0x40C0, 0x0000, 0x38A0, 0x7940, 0x0000, 0x0000, 0xCA20, 0x0000, 0x0000, 0x7940, 0x40A0, 0x0000, 0x0000, 0x0000, // 0x07B0 (1968) pixels
    0x7120, 0x2060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x58E0, 0x2060, 0x0000, 0xB1E0, // 0x07C0 (1984) pixels
    0xC200, 0x40A0, 0x0000, 0x0000, 0x0000, 0x0000, 0xC200, 0x40C0, 0x40C0, 0x40C0, 0x40C0, 0x40C0, 0xC200, 0x0000, 0x0000, 0x0000, // 0x07D0 (2000) pixels
    0x0000, 0x0000, 0x0000, 0x1840, 0xA9C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x91A0, 0x6920, 0x2040, // 0x07E0 (2016) pixels
    0xBA00, 0x1840, 0xCA20, 0x6100, 0xBA00, 0x0000, 0x0000, 0x0000, 0x7940, 0x38A0, 0x0000, 0x2060, 0xA1C0, 0x0000, 0x0000, 0xB9E0, // 0x07F0 (2032) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x8960, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA1C0, // 0x0800 (2048) pixels
    0x2860, 0x0000, 0x0000, 0x1020, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8160, 0x8160, 0x0000, 0xB1E0, 0x3080, // 0x0810 (2064) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0x6920, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0820 (2080) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x6100, // 0x0830 (2096) pixels
    0x6100, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x2060, 0x7120, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0840 (2112) pixels
    0x0000, 0x0000, 0xE260, 0xB1E0, 0x48C0, 0x40A0, 0xA9C0, 0x0000, 0x0000, 0x40A0, 0x8960, 0x0000, 0x0000, 0x9180, 0x2860, 0x0000, // 0x0850 (2128) pixels
    0x0000, 0x99A0, 0x48C0, 0xB1E0, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0860 (2144) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0870 (2160) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0880 (2176) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC220, 0x0000, 0x0000, // 0x0890 (2192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x38A0, 0x8980, 0x1840, 0x1840, 0xCA20, 0x1840, 0x1840, 0x8960, 0x40A0, 0x0000, 0x0000, 0x0000, // 0x08A0 (2208) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0xEA80, 0x9180, 0x0820, 0x6100, 0xC200, // 0x08B0 (2224) pixels
    0xA9C0, 0x99A0, 0x2040, 0x0000, 0x0000, 0x0000, 0xC200, 0x7140, 0x7140, 0x7140, 0x7140, 0x7140, 0xC220, 0x0000, 0x0000, 0x0000, // 0x08C0 (2240) pixels
    0x0000, 0x0000, 0x0000, 0x7140, 0x48C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0xA9C0, 0x0000, 0x0000, // 0x08D0 (2256) pixels
    0x2060, 0xC220, 0x38A0, 0x0000, 0x7120, 0x9180, 0x0000, 0x0000, 0x7940, 0x50E0, 0x1840, 0x38A0, 0xA9C0, 0x1840, 0x1840, 0xC200, // 0x08E0 (2272) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E0, 0xA9C0, // 0x08F0 (2288) pixels
    0x0000, 0x0000, 0x0000, 0x1020, 0xB1E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x2860, 0xA9C0, 0x8960, 0x0000, 0x0000, 0x1840, 0xB1E0, // 0x0900 (2304) pixels
    0x8980, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA9E0, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0910 (2320) pixels
    0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x40A0, 0x0000, 0x0000, 0xBA00, 0x1840, 0x1840, 0x7140, // 0x0920 (2336) pixels
    0x7140, 0x1840, 0x1840, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0930 (2352) pixels
    0x0000, 0x0000, 0x3080, 0x0000, 0x2040, 0xCA20, 0x1840, 0x0000, 0x0000, 0x99A0, 0x40A0, 0x0000, 0x0000, 0x99A0, 0x2860, 0x0000, // 0x0940 (2368) pixels
    0x8160, 0x9180, 0x0000, 0x40A0, 0xA9C0, 0x1040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0950 (2384) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0960 (2400) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0970 (2416) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC200, 0x0000, 0x0000, // 0x0980 (2432) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x2060, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0xC220, 0x40A0, 0x0000, 0x0000, 0x0000, // 0x0990 (2448) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x5900, 0x1840, 0xC220, 0x6920, 0x0800, // 0x09A0 (2464) pixels
    0x0000, 0x3080, 0xB1E0, 0x58E0, 0x40A0, 0x99A0, 0xC220, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0xC220, 0x99A0, 0x40A0, 0x0000, // 0x09B0 (2480) pixels
    0x0000, 0x0000, 0x0000, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x58E0, 0x1020, 0x0000, 0x0000, // 0x09C0 (2496) pixels
    0x6100, 0x50E0, 0x0000, 0x0000, 0x0000, 0x99A0, 0x1040, 0x0000, 0x48C0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0x99A0, 0xDA60, // 0x09D0 (2512) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3080, 0xB1E0, 0x1020, // 0x09E0 (2528) pixels
    0x0000, 0x0000, 0x0000, 0x1020, 0xA9E0, 0x0000, 0x0000, 0x0000, 0x6100, 0xA9C0, 0x38A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x09F0 (2544) pixels
    0x50E0, 0xCA20, 0x0820, 0x0000, 0x0000, 0x0000, 0x1840, 0xA1C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A00 (2560) pixels
    0x7940, 0x7960, 0x7960, 0x7960, 0x7960, 0x7960, 0x7960, 0x7960, 0x7960, 0x7940, 0x0000, 0x0000, 0x7120, 0x99A0, 0x99A0, 0x99A0, // 0x0A10 (2576) pixels
    0x99A0, 0x99A0, 0x99A0, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A20 (2592) pixels
    0x0000, 0x0000, 0x0000, 0x0820, 0xCA20, 0x3080, 0x0000, 0x6920, 0xB1E0, 0x7960, 0x0000, 0x0000, 0x8980, 0xD240, 0x0820, 0xA9C0, // 0x0A30 (2608) pixels
    0x6100, 0x0000, 0x0000, 0x0000, 0x3080, 0xBA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A40 (2624) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A50 (2640) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A60 (2656) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1840, 0x0000, 0x0000, // 0x0A70 (2672) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A80 (2688) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0A90 (2704) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0AA0 (2720) pixels
    0x0000, 0x0000, 0x0000, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0AB0 (2736) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1020, // 0x0AC0 (2752) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0AD0 (2768) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0AE0 (2784) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0AF0 (2800) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0B00 (2816) pixels
    0x0000, 0x0000, 0x0000, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0B10 (2832) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0B20 (2848) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0B30 (2864) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0B40 (2880) pixels
};
