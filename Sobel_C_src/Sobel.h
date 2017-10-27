#ifndef SOBEL_
#define SOBEL_

#include "../tile_size.h"

#define FIXED_32_16_0_2126 13932
#define FIXED_32_16_0_7152 46871
#define FIXED_32_16_0_0722 4731
#define FIXED_32_16_0_1146 7510
#define FIXED_32_16_0_3854 25257
#define FIXED_32_16_0_5000 32768
#define FIXED_32_16_0_4542 29766
#define FIXED_32_16_0_0458 3001

#define FIXED_16_8_0_2126 54
#define FIXED_16_8_0_7152 183
#define FIXED_16_8_0_0722 18
#define FIXED_16_8_0_1146 29
#define FIXED_16_8_0_3854 98
#define FIXED_16_8_0_5000 128
#define FIXED_16_8_0_4542 116
#define FIXED_16_8_0_0458 11

#define INT2FIXED(x) ((x) << 16)
#define FIXED2INT(x) ((x) >> 16)

#define SHORT2FIXED(x) ((x) << 8)
#define FIXED2SHORT(x) ((x) >> 8)

#include <assert.h>
#include <stdint.h>
#include <hls_stream.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <stdio.h>

#include <VX/vx.h>
#include <VX/vxu.h>
/* TODO: remove vx_compatibility.h after transition period */
#include <VX/vx_compatibility.h>

#include <VX/vx_lib_debug.h>
#include <VX/vx_lib_extras.h>
#include <VX/vx_lib_xyz.h>

#if defined(EXPERIMENTAL_USE_NODE_MEMORY)
#include <VX/vx_khr_node_memory.h>
#endif

#if defined(EXPERIMENTAL_USE_DOT)
#include <VX/vx_khr_dot.h>
#endif

#if defined(EXPERIMENTAL_USE_XML)
#include <VX/vx_khr_xml.h>
#endif

#if defined(EXPERIMENTAL_USE_TARGET)
#include <VX/vx_ext_target.h>
#endif

#if defined(EXPERIMENTAL_USE_VARIANTS)
#include <VX/vx_khr_variants.h>
#endif

#include <VX/vx_helper.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <assert.h>

typedef struct _rgb_pixel_t {
	vx_uint8 r;
	vx_uint8 g;
	vx_uint8 b;
} rgb_pixel_t;

typedef struct _yuv_pixel_t {
	vx_uint8 luma;
//	vx_uint8 cb;
//	vx_uint8 cr;
} yuv_pixel_t;

typedef struct _array_of_pixels_rgb_t {
        rgb_pixel_t pixel[TILE_HEIGHT];
} array_of_pixels_rgb_t;

typedef struct _array_of_pixels_rgb_t_div {
    rgb_pixel_t pixel[TILE_HEIGHT/N];
} array_of_pixels_rgb_t_div;

typedef struct _array_of_pixels_yuv_t{
	yuv_pixel_t pixel[TILE_HEIGHT];
} array_of_pixels_yuv_t;

typedef struct _array_of_pixels_yuv_t_div{
    yuv_pixel_t pixel[TILE_HEIGHT/N];
} array_of_pixels_yuv_t_div;

typedef short vx_fixed16_8;
typedef unsigned short vx_ufixed16_8;
typedef int vx_fixed32_16;
typedef unsigned int vx_ufixed32_16;

const vx_int16 gaussian[3][3] = {
    {1, 2, 1},
    {2, 4, 2},
    {1, 2, 1},
};

typedef struct _input_array_of_pixels_t {
	vx_uint8 pixel[TILE_HEIGHT+2];
} input_array_of_pixels_t;

typedef struct _input_array_of_pixels_t_div {
    vx_uint8 pixel[TILE_HEIGHT/N+2];
} input_array_of_pixels_t_div;

typedef struct _output_array_of_pixels_t {
	vx_uint8 pixel[TILE_HEIGHT];
} output_array_of_pixels_t;

typedef struct _output_array_of_pixels_t_div {
    vx_uint8 pixel[TILE_HEIGHT/N];
} output_array_of_pixels_t_div;

const vx_int16 sobel_x[3][3] = {
    {-1, 0, +1},
    {-2, 0, +2},
    {-1, 0, +1},
};

const vx_int16 sobel_y[3][3] = {
    {-1, -2, -1},
    { 0,  0,  0},
    {+1, +2, +1},
};

typedef unsigned char pixel_data_t;

typedef struct _array_of_pixels_t {
	vx_uint8 pixel[TILE_HEIGHT];
} array_of_pixels_t;

typedef struct _array_of_pixels_t_div {
    vx_uint8 pixel[TILE_HEIGHT/N];
} array_of_pixels_t_div;

typedef unsigned char pixel_data_t;

#define IN_BW   17
#define IN_IW   17
#define OUT_BW  9
#define OUT_IW  9 // ((IN_IW + 1) / 2)

// typedefs for top-level input and output fixed-point formats
typedef ap_ufixed<IN_BW,IN_IW>   sqrt_in_data_t;
typedef ap_ufixed<OUT_BW,OUT_IW> sqrt_out_data_t;



//typedef ap_fixed<18,9> coord_t;
//typedef ap_fixed<16,9> phase_t;
typedef ap_fixed<15,10> coord_t;
typedef ap_fixed<15,10> phase_t;
typedef ap_uint<6> uint6_t;

typedef unsigned char pixel_data_t;

#include <math.h>

#define P_ROT   8
#define P_SCALE 10

void Sobel(hls::stream<array_of_pixels_rgb_t> &src, hls::stream<array_of_pixels_t> &mag, hls::stream<array_of_pixels_t> &pha);



#endif
