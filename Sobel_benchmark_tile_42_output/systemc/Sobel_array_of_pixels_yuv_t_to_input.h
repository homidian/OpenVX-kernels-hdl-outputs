// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Sobel_array_of_pixels_yuv_t_to_input_HH_
#define _Sobel_array_of_pixels_yuv_t_to_input_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Sobel_array_of_pixels_yuv_t_to_input : public sc_module {
    // Port declarations 265
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > src_V_pixel_0_luma_dout;
    sc_in< sc_logic > src_V_pixel_0_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_0_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_1_luma_dout;
    sc_in< sc_logic > src_V_pixel_1_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_1_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_2_luma_dout;
    sc_in< sc_logic > src_V_pixel_2_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_2_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_3_luma_dout;
    sc_in< sc_logic > src_V_pixel_3_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_3_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_4_luma_dout;
    sc_in< sc_logic > src_V_pixel_4_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_4_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_5_luma_dout;
    sc_in< sc_logic > src_V_pixel_5_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_5_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_6_luma_dout;
    sc_in< sc_logic > src_V_pixel_6_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_6_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_7_luma_dout;
    sc_in< sc_logic > src_V_pixel_7_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_7_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_8_luma_dout;
    sc_in< sc_logic > src_V_pixel_8_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_8_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_9_luma_dout;
    sc_in< sc_logic > src_V_pixel_9_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_9_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_10_luma_dout;
    sc_in< sc_logic > src_V_pixel_10_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_10_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_11_luma_dout;
    sc_in< sc_logic > src_V_pixel_11_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_11_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_12_luma_dout;
    sc_in< sc_logic > src_V_pixel_12_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_12_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_13_luma_dout;
    sc_in< sc_logic > src_V_pixel_13_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_13_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_14_luma_dout;
    sc_in< sc_logic > src_V_pixel_14_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_14_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_15_luma_dout;
    sc_in< sc_logic > src_V_pixel_15_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_15_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_16_luma_dout;
    sc_in< sc_logic > src_V_pixel_16_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_16_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_17_luma_dout;
    sc_in< sc_logic > src_V_pixel_17_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_17_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_18_luma_dout;
    sc_in< sc_logic > src_V_pixel_18_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_18_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_19_luma_dout;
    sc_in< sc_logic > src_V_pixel_19_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_19_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_20_luma_dout;
    sc_in< sc_logic > src_V_pixel_20_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_20_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_21_luma_dout;
    sc_in< sc_logic > src_V_pixel_21_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_21_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_22_luma_dout;
    sc_in< sc_logic > src_V_pixel_22_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_22_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_23_luma_dout;
    sc_in< sc_logic > src_V_pixel_23_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_23_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_24_luma_dout;
    sc_in< sc_logic > src_V_pixel_24_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_24_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_25_luma_dout;
    sc_in< sc_logic > src_V_pixel_25_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_25_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_26_luma_dout;
    sc_in< sc_logic > src_V_pixel_26_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_26_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_27_luma_dout;
    sc_in< sc_logic > src_V_pixel_27_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_27_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_28_luma_dout;
    sc_in< sc_logic > src_V_pixel_28_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_28_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_29_luma_dout;
    sc_in< sc_logic > src_V_pixel_29_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_29_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_30_luma_dout;
    sc_in< sc_logic > src_V_pixel_30_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_30_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_31_luma_dout;
    sc_in< sc_logic > src_V_pixel_31_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_31_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_32_luma_dout;
    sc_in< sc_logic > src_V_pixel_32_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_32_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_33_luma_dout;
    sc_in< sc_logic > src_V_pixel_33_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_33_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_34_luma_dout;
    sc_in< sc_logic > src_V_pixel_34_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_34_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_35_luma_dout;
    sc_in< sc_logic > src_V_pixel_35_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_35_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_36_luma_dout;
    sc_in< sc_logic > src_V_pixel_36_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_36_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_37_luma_dout;
    sc_in< sc_logic > src_V_pixel_37_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_37_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_38_luma_dout;
    sc_in< sc_logic > src_V_pixel_38_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_38_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_39_luma_dout;
    sc_in< sc_logic > src_V_pixel_39_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_39_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_40_luma_dout;
    sc_in< sc_logic > src_V_pixel_40_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_40_luma_read;
    sc_in< sc_lv<8> > src_V_pixel_41_luma_dout;
    sc_in< sc_logic > src_V_pixel_41_luma_empty_n;
    sc_out< sc_logic > src_V_pixel_41_luma_read;
    sc_out< sc_lv<8> > dst_V_pixel_0_din;
    sc_in< sc_logic > dst_V_pixel_0_full_n;
    sc_out< sc_logic > dst_V_pixel_0_write;
    sc_out< sc_lv<8> > dst_V_pixel_1_din;
    sc_in< sc_logic > dst_V_pixel_1_full_n;
    sc_out< sc_logic > dst_V_pixel_1_write;
    sc_out< sc_lv<8> > dst_V_pixel_2_din;
    sc_in< sc_logic > dst_V_pixel_2_full_n;
    sc_out< sc_logic > dst_V_pixel_2_write;
    sc_out< sc_lv<8> > dst_V_pixel_3_din;
    sc_in< sc_logic > dst_V_pixel_3_full_n;
    sc_out< sc_logic > dst_V_pixel_3_write;
    sc_out< sc_lv<8> > dst_V_pixel_4_din;
    sc_in< sc_logic > dst_V_pixel_4_full_n;
    sc_out< sc_logic > dst_V_pixel_4_write;
    sc_out< sc_lv<8> > dst_V_pixel_5_din;
    sc_in< sc_logic > dst_V_pixel_5_full_n;
    sc_out< sc_logic > dst_V_pixel_5_write;
    sc_out< sc_lv<8> > dst_V_pixel_6_din;
    sc_in< sc_logic > dst_V_pixel_6_full_n;
    sc_out< sc_logic > dst_V_pixel_6_write;
    sc_out< sc_lv<8> > dst_V_pixel_7_din;
    sc_in< sc_logic > dst_V_pixel_7_full_n;
    sc_out< sc_logic > dst_V_pixel_7_write;
    sc_out< sc_lv<8> > dst_V_pixel_8_din;
    sc_in< sc_logic > dst_V_pixel_8_full_n;
    sc_out< sc_logic > dst_V_pixel_8_write;
    sc_out< sc_lv<8> > dst_V_pixel_9_din;
    sc_in< sc_logic > dst_V_pixel_9_full_n;
    sc_out< sc_logic > dst_V_pixel_9_write;
    sc_out< sc_lv<8> > dst_V_pixel_10_din;
    sc_in< sc_logic > dst_V_pixel_10_full_n;
    sc_out< sc_logic > dst_V_pixel_10_write;
    sc_out< sc_lv<8> > dst_V_pixel_11_din;
    sc_in< sc_logic > dst_V_pixel_11_full_n;
    sc_out< sc_logic > dst_V_pixel_11_write;
    sc_out< sc_lv<8> > dst_V_pixel_12_din;
    sc_in< sc_logic > dst_V_pixel_12_full_n;
    sc_out< sc_logic > dst_V_pixel_12_write;
    sc_out< sc_lv<8> > dst_V_pixel_13_din;
    sc_in< sc_logic > dst_V_pixel_13_full_n;
    sc_out< sc_logic > dst_V_pixel_13_write;
    sc_out< sc_lv<8> > dst_V_pixel_14_din;
    sc_in< sc_logic > dst_V_pixel_14_full_n;
    sc_out< sc_logic > dst_V_pixel_14_write;
    sc_out< sc_lv<8> > dst_V_pixel_15_din;
    sc_in< sc_logic > dst_V_pixel_15_full_n;
    sc_out< sc_logic > dst_V_pixel_15_write;
    sc_out< sc_lv<8> > dst_V_pixel_16_din;
    sc_in< sc_logic > dst_V_pixel_16_full_n;
    sc_out< sc_logic > dst_V_pixel_16_write;
    sc_out< sc_lv<8> > dst_V_pixel_17_din;
    sc_in< sc_logic > dst_V_pixel_17_full_n;
    sc_out< sc_logic > dst_V_pixel_17_write;
    sc_out< sc_lv<8> > dst_V_pixel_18_din;
    sc_in< sc_logic > dst_V_pixel_18_full_n;
    sc_out< sc_logic > dst_V_pixel_18_write;
    sc_out< sc_lv<8> > dst_V_pixel_19_din;
    sc_in< sc_logic > dst_V_pixel_19_full_n;
    sc_out< sc_logic > dst_V_pixel_19_write;
    sc_out< sc_lv<8> > dst_V_pixel_20_din;
    sc_in< sc_logic > dst_V_pixel_20_full_n;
    sc_out< sc_logic > dst_V_pixel_20_write;
    sc_out< sc_lv<8> > dst_V_pixel_21_din;
    sc_in< sc_logic > dst_V_pixel_21_full_n;
    sc_out< sc_logic > dst_V_pixel_21_write;
    sc_out< sc_lv<8> > dst_V_pixel_22_din;
    sc_in< sc_logic > dst_V_pixel_22_full_n;
    sc_out< sc_logic > dst_V_pixel_22_write;
    sc_out< sc_lv<8> > dst_V_pixel_23_din;
    sc_in< sc_logic > dst_V_pixel_23_full_n;
    sc_out< sc_logic > dst_V_pixel_23_write;
    sc_out< sc_lv<8> > dst_V_pixel_24_din;
    sc_in< sc_logic > dst_V_pixel_24_full_n;
    sc_out< sc_logic > dst_V_pixel_24_write;
    sc_out< sc_lv<8> > dst_V_pixel_25_din;
    sc_in< sc_logic > dst_V_pixel_25_full_n;
    sc_out< sc_logic > dst_V_pixel_25_write;
    sc_out< sc_lv<8> > dst_V_pixel_26_din;
    sc_in< sc_logic > dst_V_pixel_26_full_n;
    sc_out< sc_logic > dst_V_pixel_26_write;
    sc_out< sc_lv<8> > dst_V_pixel_27_din;
    sc_in< sc_logic > dst_V_pixel_27_full_n;
    sc_out< sc_logic > dst_V_pixel_27_write;
    sc_out< sc_lv<8> > dst_V_pixel_28_din;
    sc_in< sc_logic > dst_V_pixel_28_full_n;
    sc_out< sc_logic > dst_V_pixel_28_write;
    sc_out< sc_lv<8> > dst_V_pixel_29_din;
    sc_in< sc_logic > dst_V_pixel_29_full_n;
    sc_out< sc_logic > dst_V_pixel_29_write;
    sc_out< sc_lv<8> > dst_V_pixel_30_din;
    sc_in< sc_logic > dst_V_pixel_30_full_n;
    sc_out< sc_logic > dst_V_pixel_30_write;
    sc_out< sc_lv<8> > dst_V_pixel_31_din;
    sc_in< sc_logic > dst_V_pixel_31_full_n;
    sc_out< sc_logic > dst_V_pixel_31_write;
    sc_out< sc_lv<8> > dst_V_pixel_32_din;
    sc_in< sc_logic > dst_V_pixel_32_full_n;
    sc_out< sc_logic > dst_V_pixel_32_write;
    sc_out< sc_lv<8> > dst_V_pixel_33_din;
    sc_in< sc_logic > dst_V_pixel_33_full_n;
    sc_out< sc_logic > dst_V_pixel_33_write;
    sc_out< sc_lv<8> > dst_V_pixel_34_din;
    sc_in< sc_logic > dst_V_pixel_34_full_n;
    sc_out< sc_logic > dst_V_pixel_34_write;
    sc_out< sc_lv<8> > dst_V_pixel_35_din;
    sc_in< sc_logic > dst_V_pixel_35_full_n;
    sc_out< sc_logic > dst_V_pixel_35_write;
    sc_out< sc_lv<8> > dst_V_pixel_36_din;
    sc_in< sc_logic > dst_V_pixel_36_full_n;
    sc_out< sc_logic > dst_V_pixel_36_write;
    sc_out< sc_lv<8> > dst_V_pixel_37_din;
    sc_in< sc_logic > dst_V_pixel_37_full_n;
    sc_out< sc_logic > dst_V_pixel_37_write;
    sc_out< sc_lv<8> > dst_V_pixel_38_din;
    sc_in< sc_logic > dst_V_pixel_38_full_n;
    sc_out< sc_logic > dst_V_pixel_38_write;
    sc_out< sc_lv<8> > dst_V_pixel_39_din;
    sc_in< sc_logic > dst_V_pixel_39_full_n;
    sc_out< sc_logic > dst_V_pixel_39_write;
    sc_out< sc_lv<8> > dst_V_pixel_40_din;
    sc_in< sc_logic > dst_V_pixel_40_full_n;
    sc_out< sc_logic > dst_V_pixel_40_write;
    sc_out< sc_lv<8> > dst_V_pixel_41_din;
    sc_in< sc_logic > dst_V_pixel_41_full_n;
    sc_out< sc_logic > dst_V_pixel_41_write;
    sc_out< sc_lv<8> > dst_V_pixel_42_din;
    sc_in< sc_logic > dst_V_pixel_42_full_n;
    sc_out< sc_logic > dst_V_pixel_42_write;
    sc_out< sc_lv<8> > dst_V_pixel_43_din;
    sc_in< sc_logic > dst_V_pixel_43_full_n;
    sc_out< sc_logic > dst_V_pixel_43_write;


    // Module declarations
    Sobel_array_of_pixels_yuv_t_to_input(sc_module_name name);
    SC_HAS_PROCESS(Sobel_array_of_pixels_yuv_t_to_input);

    ~Sobel_array_of_pixels_yuv_t_to_input();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_logic > src_V_pixel_0_luma_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_377;
    sc_signal< sc_lv<1> > exitcond3_fu_1123_p2;
    sc_signal< sc_logic > src_V_pixel_1_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_2_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_3_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_4_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_5_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_6_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_7_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_8_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_9_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_10_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_11_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_12_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_13_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_14_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_15_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_16_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_17_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_18_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_19_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_20_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_21_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_22_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_23_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_24_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_25_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_26_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_27_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_28_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_29_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_30_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_31_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_32_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_33_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_34_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_35_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_36_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_37_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_38_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_39_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_40_luma_blk_n;
    sc_signal< sc_logic > src_V_pixel_41_luma_blk_n;
    sc_signal< sc_logic > dst_V_pixel_0_blk_n;
    sc_signal< sc_logic > dst_V_pixel_1_blk_n;
    sc_signal< sc_logic > dst_V_pixel_2_blk_n;
    sc_signal< sc_logic > dst_V_pixel_3_blk_n;
    sc_signal< sc_logic > dst_V_pixel_4_blk_n;
    sc_signal< sc_logic > dst_V_pixel_5_blk_n;
    sc_signal< sc_logic > dst_V_pixel_6_blk_n;
    sc_signal< sc_logic > dst_V_pixel_7_blk_n;
    sc_signal< sc_logic > dst_V_pixel_8_blk_n;
    sc_signal< sc_logic > dst_V_pixel_9_blk_n;
    sc_signal< sc_logic > dst_V_pixel_10_blk_n;
    sc_signal< sc_logic > dst_V_pixel_11_blk_n;
    sc_signal< sc_logic > dst_V_pixel_12_blk_n;
    sc_signal< sc_logic > dst_V_pixel_13_blk_n;
    sc_signal< sc_logic > dst_V_pixel_14_blk_n;
    sc_signal< sc_logic > dst_V_pixel_15_blk_n;
    sc_signal< sc_logic > dst_V_pixel_16_blk_n;
    sc_signal< sc_logic > dst_V_pixel_17_blk_n;
    sc_signal< sc_logic > dst_V_pixel_18_blk_n;
    sc_signal< sc_logic > dst_V_pixel_19_blk_n;
    sc_signal< sc_logic > dst_V_pixel_20_blk_n;
    sc_signal< sc_logic > dst_V_pixel_21_blk_n;
    sc_signal< sc_logic > dst_V_pixel_22_blk_n;
    sc_signal< sc_logic > dst_V_pixel_23_blk_n;
    sc_signal< sc_logic > dst_V_pixel_24_blk_n;
    sc_signal< sc_logic > dst_V_pixel_25_blk_n;
    sc_signal< sc_logic > dst_V_pixel_26_blk_n;
    sc_signal< sc_logic > dst_V_pixel_27_blk_n;
    sc_signal< sc_logic > dst_V_pixel_28_blk_n;
    sc_signal< sc_logic > dst_V_pixel_29_blk_n;
    sc_signal< sc_logic > dst_V_pixel_30_blk_n;
    sc_signal< sc_logic > dst_V_pixel_31_blk_n;
    sc_signal< sc_logic > dst_V_pixel_32_blk_n;
    sc_signal< sc_logic > dst_V_pixel_33_blk_n;
    sc_signal< sc_logic > dst_V_pixel_34_blk_n;
    sc_signal< sc_logic > dst_V_pixel_35_blk_n;
    sc_signal< sc_logic > dst_V_pixel_36_blk_n;
    sc_signal< sc_logic > dst_V_pixel_37_blk_n;
    sc_signal< sc_logic > dst_V_pixel_38_blk_n;
    sc_signal< sc_logic > dst_V_pixel_39_blk_n;
    sc_signal< sc_logic > dst_V_pixel_40_blk_n;
    sc_signal< sc_logic > dst_V_pixel_41_blk_n;
    sc_signal< sc_logic > dst_V_pixel_42_blk_n;
    sc_signal< sc_logic > dst_V_pixel_43_blk_n;
    sc_signal< sc_lv<9> > i_9_fu_1129_p2;
    sc_signal< sc_logic > src_V_pixel_1_luma0_status;
    sc_signal< sc_logic > dst_V_pixel_11_status;
    sc_signal< bool > ap_sig_477;
    sc_signal< sc_lv<9> > i_reg_1112;
    sc_signal< bool > ap_sig_486;
    sc_signal< sc_logic > src_V_pixel_1_luma0_update;
    sc_signal< sc_logic > dst_V_pixel_11_update;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<9> ap_const_lv9_1E0;
    static const sc_lv<9> ap_const_lv9_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_20();
    void thread_ap_sig_377();
    void thread_ap_sig_477();
    void thread_ap_sig_486();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_dst_V_pixel_0_blk_n();
    void thread_dst_V_pixel_0_din();
    void thread_dst_V_pixel_0_write();
    void thread_dst_V_pixel_10_blk_n();
    void thread_dst_V_pixel_10_din();
    void thread_dst_V_pixel_10_write();
    void thread_dst_V_pixel_11_blk_n();
    void thread_dst_V_pixel_11_din();
    void thread_dst_V_pixel_11_status();
    void thread_dst_V_pixel_11_update();
    void thread_dst_V_pixel_11_write();
    void thread_dst_V_pixel_12_blk_n();
    void thread_dst_V_pixel_12_din();
    void thread_dst_V_pixel_12_write();
    void thread_dst_V_pixel_13_blk_n();
    void thread_dst_V_pixel_13_din();
    void thread_dst_V_pixel_13_write();
    void thread_dst_V_pixel_14_blk_n();
    void thread_dst_V_pixel_14_din();
    void thread_dst_V_pixel_14_write();
    void thread_dst_V_pixel_15_blk_n();
    void thread_dst_V_pixel_15_din();
    void thread_dst_V_pixel_15_write();
    void thread_dst_V_pixel_16_blk_n();
    void thread_dst_V_pixel_16_din();
    void thread_dst_V_pixel_16_write();
    void thread_dst_V_pixel_17_blk_n();
    void thread_dst_V_pixel_17_din();
    void thread_dst_V_pixel_17_write();
    void thread_dst_V_pixel_18_blk_n();
    void thread_dst_V_pixel_18_din();
    void thread_dst_V_pixel_18_write();
    void thread_dst_V_pixel_19_blk_n();
    void thread_dst_V_pixel_19_din();
    void thread_dst_V_pixel_19_write();
    void thread_dst_V_pixel_1_blk_n();
    void thread_dst_V_pixel_1_din();
    void thread_dst_V_pixel_1_write();
    void thread_dst_V_pixel_20_blk_n();
    void thread_dst_V_pixel_20_din();
    void thread_dst_V_pixel_20_write();
    void thread_dst_V_pixel_21_blk_n();
    void thread_dst_V_pixel_21_din();
    void thread_dst_V_pixel_21_write();
    void thread_dst_V_pixel_22_blk_n();
    void thread_dst_V_pixel_22_din();
    void thread_dst_V_pixel_22_write();
    void thread_dst_V_pixel_23_blk_n();
    void thread_dst_V_pixel_23_din();
    void thread_dst_V_pixel_23_write();
    void thread_dst_V_pixel_24_blk_n();
    void thread_dst_V_pixel_24_din();
    void thread_dst_V_pixel_24_write();
    void thread_dst_V_pixel_25_blk_n();
    void thread_dst_V_pixel_25_din();
    void thread_dst_V_pixel_25_write();
    void thread_dst_V_pixel_26_blk_n();
    void thread_dst_V_pixel_26_din();
    void thread_dst_V_pixel_26_write();
    void thread_dst_V_pixel_27_blk_n();
    void thread_dst_V_pixel_27_din();
    void thread_dst_V_pixel_27_write();
    void thread_dst_V_pixel_28_blk_n();
    void thread_dst_V_pixel_28_din();
    void thread_dst_V_pixel_28_write();
    void thread_dst_V_pixel_29_blk_n();
    void thread_dst_V_pixel_29_din();
    void thread_dst_V_pixel_29_write();
    void thread_dst_V_pixel_2_blk_n();
    void thread_dst_V_pixel_2_din();
    void thread_dst_V_pixel_2_write();
    void thread_dst_V_pixel_30_blk_n();
    void thread_dst_V_pixel_30_din();
    void thread_dst_V_pixel_30_write();
    void thread_dst_V_pixel_31_blk_n();
    void thread_dst_V_pixel_31_din();
    void thread_dst_V_pixel_31_write();
    void thread_dst_V_pixel_32_blk_n();
    void thread_dst_V_pixel_32_din();
    void thread_dst_V_pixel_32_write();
    void thread_dst_V_pixel_33_blk_n();
    void thread_dst_V_pixel_33_din();
    void thread_dst_V_pixel_33_write();
    void thread_dst_V_pixel_34_blk_n();
    void thread_dst_V_pixel_34_din();
    void thread_dst_V_pixel_34_write();
    void thread_dst_V_pixel_35_blk_n();
    void thread_dst_V_pixel_35_din();
    void thread_dst_V_pixel_35_write();
    void thread_dst_V_pixel_36_blk_n();
    void thread_dst_V_pixel_36_din();
    void thread_dst_V_pixel_36_write();
    void thread_dst_V_pixel_37_blk_n();
    void thread_dst_V_pixel_37_din();
    void thread_dst_V_pixel_37_write();
    void thread_dst_V_pixel_38_blk_n();
    void thread_dst_V_pixel_38_din();
    void thread_dst_V_pixel_38_write();
    void thread_dst_V_pixel_39_blk_n();
    void thread_dst_V_pixel_39_din();
    void thread_dst_V_pixel_39_write();
    void thread_dst_V_pixel_3_blk_n();
    void thread_dst_V_pixel_3_din();
    void thread_dst_V_pixel_3_write();
    void thread_dst_V_pixel_40_blk_n();
    void thread_dst_V_pixel_40_din();
    void thread_dst_V_pixel_40_write();
    void thread_dst_V_pixel_41_blk_n();
    void thread_dst_V_pixel_41_din();
    void thread_dst_V_pixel_41_write();
    void thread_dst_V_pixel_42_blk_n();
    void thread_dst_V_pixel_42_din();
    void thread_dst_V_pixel_42_write();
    void thread_dst_V_pixel_43_blk_n();
    void thread_dst_V_pixel_43_din();
    void thread_dst_V_pixel_43_write();
    void thread_dst_V_pixel_4_blk_n();
    void thread_dst_V_pixel_4_din();
    void thread_dst_V_pixel_4_write();
    void thread_dst_V_pixel_5_blk_n();
    void thread_dst_V_pixel_5_din();
    void thread_dst_V_pixel_5_write();
    void thread_dst_V_pixel_6_blk_n();
    void thread_dst_V_pixel_6_din();
    void thread_dst_V_pixel_6_write();
    void thread_dst_V_pixel_7_blk_n();
    void thread_dst_V_pixel_7_din();
    void thread_dst_V_pixel_7_write();
    void thread_dst_V_pixel_8_blk_n();
    void thread_dst_V_pixel_8_din();
    void thread_dst_V_pixel_8_write();
    void thread_dst_V_pixel_9_blk_n();
    void thread_dst_V_pixel_9_din();
    void thread_dst_V_pixel_9_write();
    void thread_exitcond3_fu_1123_p2();
    void thread_i_9_fu_1129_p2();
    void thread_src_V_pixel_0_luma_blk_n();
    void thread_src_V_pixel_0_luma_read();
    void thread_src_V_pixel_10_luma_blk_n();
    void thread_src_V_pixel_10_luma_read();
    void thread_src_V_pixel_11_luma_blk_n();
    void thread_src_V_pixel_11_luma_read();
    void thread_src_V_pixel_12_luma_blk_n();
    void thread_src_V_pixel_12_luma_read();
    void thread_src_V_pixel_13_luma_blk_n();
    void thread_src_V_pixel_13_luma_read();
    void thread_src_V_pixel_14_luma_blk_n();
    void thread_src_V_pixel_14_luma_read();
    void thread_src_V_pixel_15_luma_blk_n();
    void thread_src_V_pixel_15_luma_read();
    void thread_src_V_pixel_16_luma_blk_n();
    void thread_src_V_pixel_16_luma_read();
    void thread_src_V_pixel_17_luma_blk_n();
    void thread_src_V_pixel_17_luma_read();
    void thread_src_V_pixel_18_luma_blk_n();
    void thread_src_V_pixel_18_luma_read();
    void thread_src_V_pixel_19_luma_blk_n();
    void thread_src_V_pixel_19_luma_read();
    void thread_src_V_pixel_1_luma0_status();
    void thread_src_V_pixel_1_luma0_update();
    void thread_src_V_pixel_1_luma_blk_n();
    void thread_src_V_pixel_1_luma_read();
    void thread_src_V_pixel_20_luma_blk_n();
    void thread_src_V_pixel_20_luma_read();
    void thread_src_V_pixel_21_luma_blk_n();
    void thread_src_V_pixel_21_luma_read();
    void thread_src_V_pixel_22_luma_blk_n();
    void thread_src_V_pixel_22_luma_read();
    void thread_src_V_pixel_23_luma_blk_n();
    void thread_src_V_pixel_23_luma_read();
    void thread_src_V_pixel_24_luma_blk_n();
    void thread_src_V_pixel_24_luma_read();
    void thread_src_V_pixel_25_luma_blk_n();
    void thread_src_V_pixel_25_luma_read();
    void thread_src_V_pixel_26_luma_blk_n();
    void thread_src_V_pixel_26_luma_read();
    void thread_src_V_pixel_27_luma_blk_n();
    void thread_src_V_pixel_27_luma_read();
    void thread_src_V_pixel_28_luma_blk_n();
    void thread_src_V_pixel_28_luma_read();
    void thread_src_V_pixel_29_luma_blk_n();
    void thread_src_V_pixel_29_luma_read();
    void thread_src_V_pixel_2_luma_blk_n();
    void thread_src_V_pixel_2_luma_read();
    void thread_src_V_pixel_30_luma_blk_n();
    void thread_src_V_pixel_30_luma_read();
    void thread_src_V_pixel_31_luma_blk_n();
    void thread_src_V_pixel_31_luma_read();
    void thread_src_V_pixel_32_luma_blk_n();
    void thread_src_V_pixel_32_luma_read();
    void thread_src_V_pixel_33_luma_blk_n();
    void thread_src_V_pixel_33_luma_read();
    void thread_src_V_pixel_34_luma_blk_n();
    void thread_src_V_pixel_34_luma_read();
    void thread_src_V_pixel_35_luma_blk_n();
    void thread_src_V_pixel_35_luma_read();
    void thread_src_V_pixel_36_luma_blk_n();
    void thread_src_V_pixel_36_luma_read();
    void thread_src_V_pixel_37_luma_blk_n();
    void thread_src_V_pixel_37_luma_read();
    void thread_src_V_pixel_38_luma_blk_n();
    void thread_src_V_pixel_38_luma_read();
    void thread_src_V_pixel_39_luma_blk_n();
    void thread_src_V_pixel_39_luma_read();
    void thread_src_V_pixel_3_luma_blk_n();
    void thread_src_V_pixel_3_luma_read();
    void thread_src_V_pixel_40_luma_blk_n();
    void thread_src_V_pixel_40_luma_read();
    void thread_src_V_pixel_41_luma_blk_n();
    void thread_src_V_pixel_41_luma_read();
    void thread_src_V_pixel_4_luma_blk_n();
    void thread_src_V_pixel_4_luma_read();
    void thread_src_V_pixel_5_luma_blk_n();
    void thread_src_V_pixel_5_luma_read();
    void thread_src_V_pixel_6_luma_blk_n();
    void thread_src_V_pixel_6_luma_read();
    void thread_src_V_pixel_7_luma_blk_n();
    void thread_src_V_pixel_7_luma_read();
    void thread_src_V_pixel_8_luma_blk_n();
    void thread_src_V_pixel_8_luma_read();
    void thread_src_V_pixel_9_luma_blk_n();
    void thread_src_V_pixel_9_luma_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
