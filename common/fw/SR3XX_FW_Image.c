// All included firmware files are
// INTEL CORPORATION PROPRIETARY INFORMATION
// Copyright(c) 2019 Intel Corporation. All Rights Reserved
const int fw_SR3XX_FW_Image_version[4] = {3,27,3,0};
#ifndef _MSC_VER
__asm__(
    "#version ddc6d015ee3ec46f5e5587cc5ca17d343654ce85\n"
#ifdef __APPLE__
    ".const_data\n"
#define _ "_"
#else
    ".section .rodata\n"
#define _ ""
#endif
    ".global "_"fw_SR3XX_FW_Image_data\n"
    _"fw_SR3XX_FW_Image_data:\n"
    ".incbin \"D:/Work/librealsense/build/common/fw/SR3XX_FW_Image-3.27.3.0.bin\"\n"
    ".global "_"fw_SR3XX_FW_Image_size\n"
    _"fw_SR3XX_FW_Image_size:\n"
    "1:\n"
    ".int 1b - "_"fw_SR3XX_FW_Image_data\n"
    ".previous"
);
#undef _
#endif
