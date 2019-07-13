// All included firmware files are
// INTEL CORPORATION PROPRIETARY INFORMATION
// Copyright(c) 2019 Intel Corporation. All Rights Reserved
const int fw_D4XX_FW_Image_version[4] = {5,11,6,250};
#ifndef _MSC_VER
__asm__(
    "#version 0f91ab8cce99e845c1dc9c270bbbefb12a6b1521\n"
#ifdef __APPLE__
    ".const_data\n"
#define _ "_"
#else
    ".section .rodata\n"
#define _ ""
#endif
    ".global "_"fw_D4XX_FW_Image_data\n"
    _"fw_D4XX_FW_Image_data:\n"
    ".incbin \"D:/Work/librealsense/build/common/fw/D4XX_FW_Image-5.11.6.250.bin\"\n"
    ".global "_"fw_D4XX_FW_Image_size\n"
    _"fw_D4XX_FW_Image_size:\n"
    "1:\n"
    ".int 1b - "_"fw_D4XX_FW_Image_data\n"
    ".previous"
);
#undef _
#endif
