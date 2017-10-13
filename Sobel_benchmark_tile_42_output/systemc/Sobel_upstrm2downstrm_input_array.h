// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Sobel_upstrm2downstrm_input_array_HH_
#define _Sobel_upstrm2downstrm_input_array_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Sobel_upstrm2downstrm_input_array : public sc_module {
    // Port declarations 271
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > src_V_pixel_0_dout;
    sc_in< sc_logic > src_V_pixel_0_empty_n;
    sc_out< sc_logic > src_V_pixel_0_read;
    sc_in< sc_lv<8> > src_V_pixel_1_dout;
    sc_in< sc_logic > src_V_pixel_1_empty_n;
    sc_out< sc_logic > src_V_pixel_1_read;
    sc_in< sc_lv<8> > src_V_pixel_2_dout;
    sc_in< sc_logic > src_V_pixel_2_empty_n;
    sc_out< sc_logic > src_V_pixel_2_read;
    sc_in< sc_lv<8> > src_V_pixel_3_dout;
    sc_in< sc_logic > src_V_pixel_3_empty_n;
    sc_out< sc_logic > src_V_pixel_3_read;
    sc_in< sc_lv<8> > src_V_pixel_4_dout;
    sc_in< sc_logic > src_V_pixel_4_empty_n;
    sc_out< sc_logic > src_V_pixel_4_read;
    sc_in< sc_lv<8> > src_V_pixel_5_dout;
    sc_in< sc_logic > src_V_pixel_5_empty_n;
    sc_out< sc_logic > src_V_pixel_5_read;
    sc_in< sc_lv<8> > src_V_pixel_6_dout;
    sc_in< sc_logic > src_V_pixel_6_empty_n;
    sc_out< sc_logic > src_V_pixel_6_read;
    sc_in< sc_lv<8> > src_V_pixel_7_dout;
    sc_in< sc_logic > src_V_pixel_7_empty_n;
    sc_out< sc_logic > src_V_pixel_7_read;
    sc_in< sc_lv<8> > src_V_pixel_8_dout;
    sc_in< sc_logic > src_V_pixel_8_empty_n;
    sc_out< sc_logic > src_V_pixel_8_read;
    sc_in< sc_lv<8> > src_V_pixel_9_dout;
    sc_in< sc_logic > src_V_pixel_9_empty_n;
    sc_out< sc_logic > src_V_pixel_9_read;
    sc_in< sc_lv<8> > src_V_pixel_10_dout;
    sc_in< sc_logic > src_V_pixel_10_empty_n;
    sc_out< sc_logic > src_V_pixel_10_read;
    sc_in< sc_lv<8> > src_V_pixel_11_dout;
    sc_in< sc_logic > src_V_pixel_11_empty_n;
    sc_out< sc_logic > src_V_pixel_11_read;
    sc_in< sc_lv<8> > src_V_pixel_12_dout;
    sc_in< sc_logic > src_V_pixel_12_empty_n;
    sc_out< sc_logic > src_V_pixel_12_read;
    sc_in< sc_lv<8> > src_V_pixel_13_dout;
    sc_in< sc_logic > src_V_pixel_13_empty_n;
    sc_out< sc_logic > src_V_pixel_13_read;
    sc_in< sc_lv<8> > src_V_pixel_14_dout;
    sc_in< sc_logic > src_V_pixel_14_empty_n;
    sc_out< sc_logic > src_V_pixel_14_read;
    sc_in< sc_lv<8> > src_V_pixel_15_dout;
    sc_in< sc_logic > src_V_pixel_15_empty_n;
    sc_out< sc_logic > src_V_pixel_15_read;
    sc_in< sc_lv<8> > src_V_pixel_16_dout;
    sc_in< sc_logic > src_V_pixel_16_empty_n;
    sc_out< sc_logic > src_V_pixel_16_read;
    sc_in< sc_lv<8> > src_V_pixel_17_dout;
    sc_in< sc_logic > src_V_pixel_17_empty_n;
    sc_out< sc_logic > src_V_pixel_17_read;
    sc_in< sc_lv<8> > src_V_pixel_18_dout;
    sc_in< sc_logic > src_V_pixel_18_empty_n;
    sc_out< sc_logic > src_V_pixel_18_read;
    sc_in< sc_lv<8> > src_V_pixel_19_dout;
    sc_in< sc_logic > src_V_pixel_19_empty_n;
    sc_out< sc_logic > src_V_pixel_19_read;
    sc_in< sc_lv<8> > src_V_pixel_20_dout;
    sc_in< sc_logic > src_V_pixel_20_empty_n;
    sc_out< sc_logic > src_V_pixel_20_read;
    sc_in< sc_lv<8> > src_V_pixel_21_dout;
    sc_in< sc_logic > src_V_pixel_21_empty_n;
    sc_out< sc_logic > src_V_pixel_21_read;
    sc_in< sc_lv<8> > src_V_pixel_22_dout;
    sc_in< sc_logic > src_V_pixel_22_empty_n;
    sc_out< sc_logic > src_V_pixel_22_read;
    sc_in< sc_lv<8> > src_V_pixel_23_dout;
    sc_in< sc_logic > src_V_pixel_23_empty_n;
    sc_out< sc_logic > src_V_pixel_23_read;
    sc_in< sc_lv<8> > src_V_pixel_24_dout;
    sc_in< sc_logic > src_V_pixel_24_empty_n;
    sc_out< sc_logic > src_V_pixel_24_read;
    sc_in< sc_lv<8> > src_V_pixel_25_dout;
    sc_in< sc_logic > src_V_pixel_25_empty_n;
    sc_out< sc_logic > src_V_pixel_25_read;
    sc_in< sc_lv<8> > src_V_pixel_26_dout;
    sc_in< sc_logic > src_V_pixel_26_empty_n;
    sc_out< sc_logic > src_V_pixel_26_read;
    sc_in< sc_lv<8> > src_V_pixel_27_dout;
    sc_in< sc_logic > src_V_pixel_27_empty_n;
    sc_out< sc_logic > src_V_pixel_27_read;
    sc_in< sc_lv<8> > src_V_pixel_28_dout;
    sc_in< sc_logic > src_V_pixel_28_empty_n;
    sc_out< sc_logic > src_V_pixel_28_read;
    sc_in< sc_lv<8> > src_V_pixel_29_dout;
    sc_in< sc_logic > src_V_pixel_29_empty_n;
    sc_out< sc_logic > src_V_pixel_29_read;
    sc_in< sc_lv<8> > src_V_pixel_30_dout;
    sc_in< sc_logic > src_V_pixel_30_empty_n;
    sc_out< sc_logic > src_V_pixel_30_read;
    sc_in< sc_lv<8> > src_V_pixel_31_dout;
    sc_in< sc_logic > src_V_pixel_31_empty_n;
    sc_out< sc_logic > src_V_pixel_31_read;
    sc_in< sc_lv<8> > src_V_pixel_32_dout;
    sc_in< sc_logic > src_V_pixel_32_empty_n;
    sc_out< sc_logic > src_V_pixel_32_read;
    sc_in< sc_lv<8> > src_V_pixel_33_dout;
    sc_in< sc_logic > src_V_pixel_33_empty_n;
    sc_out< sc_logic > src_V_pixel_33_read;
    sc_in< sc_lv<8> > src_V_pixel_34_dout;
    sc_in< sc_logic > src_V_pixel_34_empty_n;
    sc_out< sc_logic > src_V_pixel_34_read;
    sc_in< sc_lv<8> > src_V_pixel_35_dout;
    sc_in< sc_logic > src_V_pixel_35_empty_n;
    sc_out< sc_logic > src_V_pixel_35_read;
    sc_in< sc_lv<8> > src_V_pixel_36_dout;
    sc_in< sc_logic > src_V_pixel_36_empty_n;
    sc_out< sc_logic > src_V_pixel_36_read;
    sc_in< sc_lv<8> > src_V_pixel_37_dout;
    sc_in< sc_logic > src_V_pixel_37_empty_n;
    sc_out< sc_logic > src_V_pixel_37_read;
    sc_in< sc_lv<8> > src_V_pixel_38_dout;
    sc_in< sc_logic > src_V_pixel_38_empty_n;
    sc_out< sc_logic > src_V_pixel_38_read;
    sc_in< sc_lv<8> > src_V_pixel_39_dout;
    sc_in< sc_logic > src_V_pixel_39_empty_n;
    sc_out< sc_logic > src_V_pixel_39_read;
    sc_in< sc_lv<8> > src_V_pixel_40_dout;
    sc_in< sc_logic > src_V_pixel_40_empty_n;
    sc_out< sc_logic > src_V_pixel_40_read;
    sc_in< sc_lv<8> > src_V_pixel_41_dout;
    sc_in< sc_logic > src_V_pixel_41_empty_n;
    sc_out< sc_logic > src_V_pixel_41_read;
    sc_in< sc_lv<8> > src_V_pixel_42_dout;
    sc_in< sc_logic > src_V_pixel_42_empty_n;
    sc_out< sc_logic > src_V_pixel_42_read;
    sc_in< sc_lv<8> > src_V_pixel_43_dout;
    sc_in< sc_logic > src_V_pixel_43_empty_n;
    sc_out< sc_logic > src_V_pixel_43_read;
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
    Sobel_upstrm2downstrm_input_array(sc_module_name name);
    SC_HAS_PROCESS(Sobel_upstrm2downstrm_input_array);

    ~Sobel_upstrm2downstrm_input_array();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_logic > src_V_pixel_0_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_385;
    sc_signal< sc_lv<1> > exitcond4_fu_1147_p2;
    sc_signal< sc_logic > src_V_pixel_1_blk_n;
    sc_signal< sc_logic > src_V_pixel_2_blk_n;
    sc_signal< sc_logic > src_V_pixel_3_blk_n;
    sc_signal< sc_logic > src_V_pixel_4_blk_n;
    sc_signal< sc_logic > src_V_pixel_5_blk_n;
    sc_signal< sc_logic > src_V_pixel_6_blk_n;
    sc_signal< sc_logic > src_V_pixel_7_blk_n;
    sc_signal< sc_logic > src_V_pixel_8_blk_n;
    sc_signal< sc_logic > src_V_pixel_9_blk_n;
    sc_signal< sc_logic > src_V_pixel_10_blk_n;
    sc_signal< sc_logic > src_V_pixel_11_blk_n;
    sc_signal< sc_logic > src_V_pixel_12_blk_n;
    sc_signal< sc_logic > src_V_pixel_13_blk_n;
    sc_signal< sc_logic > src_V_pixel_14_blk_n;
    sc_signal< sc_logic > src_V_pixel_15_blk_n;
    sc_signal< sc_logic > src_V_pixel_16_blk_n;
    sc_signal< sc_logic > src_V_pixel_17_blk_n;
    sc_signal< sc_logic > src_V_pixel_18_blk_n;
    sc_signal< sc_logic > src_V_pixel_19_blk_n;
    sc_signal< sc_logic > src_V_pixel_20_blk_n;
    sc_signal< sc_logic > src_V_pixel_21_blk_n;
    sc_signal< sc_logic > src_V_pixel_22_blk_n;
    sc_signal< sc_logic > src_V_pixel_23_blk_n;
    sc_signal< sc_logic > src_V_pixel_24_blk_n;
    sc_signal< sc_logic > src_V_pixel_25_blk_n;
    sc_signal< sc_logic > src_V_pixel_26_blk_n;
    sc_signal< sc_logic > src_V_pixel_27_blk_n;
    sc_signal< sc_logic > src_V_pixel_28_blk_n;
    sc_signal< sc_logic > src_V_pixel_29_blk_n;
    sc_signal< sc_logic > src_V_pixel_30_blk_n;
    sc_signal< sc_logic > src_V_pixel_31_blk_n;
    sc_signal< sc_logic > src_V_pixel_32_blk_n;
    sc_signal< sc_logic > src_V_pixel_33_blk_n;
    sc_signal< sc_logic > src_V_pixel_34_blk_n;
    sc_signal< sc_logic > src_V_pixel_35_blk_n;
    sc_signal< sc_logic > src_V_pixel_36_blk_n;
    sc_signal< sc_logic > src_V_pixel_37_blk_n;
    sc_signal< sc_logic > src_V_pixel_38_blk_n;
    sc_signal< sc_logic > src_V_pixel_39_blk_n;
    sc_signal< sc_logic > src_V_pixel_40_blk_n;
    sc_signal< sc_logic > src_V_pixel_41_blk_n;
    sc_signal< sc_logic > src_V_pixel_42_blk_n;
    sc_signal< sc_logic > src_V_pixel_43_blk_n;
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
    sc_signal< sc_lv<9> > i_2_fu_1153_p2;
    sc_signal< sc_logic > src_V_pixel_10_status;
    sc_signal< sc_logic > dst_V_pixel_11_status;
    sc_signal< bool > ap_sig_487;
    sc_signal< sc_lv<9> > i_reg_1136;
    sc_signal< bool > ap_sig_496;
    sc_signal< sc_logic > src_V_pixel_10_update;
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
    static const sc_lv<9> ap_const_lv9_1E2;
    static const sc_lv<9> ap_const_lv9_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_20();
    void thread_ap_sig_385();
    void thread_ap_sig_487();
    void thread_ap_sig_496();
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
    void thread_exitcond4_fu_1147_p2();
    void thread_i_2_fu_1153_p2();
    void thread_src_V_pixel_0_blk_n();
    void thread_src_V_pixel_0_read();
    void thread_src_V_pixel_10_blk_n();
    void thread_src_V_pixel_10_read();
    void thread_src_V_pixel_10_status();
    void thread_src_V_pixel_10_update();
    void thread_src_V_pixel_11_blk_n();
    void thread_src_V_pixel_11_read();
    void thread_src_V_pixel_12_blk_n();
    void thread_src_V_pixel_12_read();
    void thread_src_V_pixel_13_blk_n();
    void thread_src_V_pixel_13_read();
    void thread_src_V_pixel_14_blk_n();
    void thread_src_V_pixel_14_read();
    void thread_src_V_pixel_15_blk_n();
    void thread_src_V_pixel_15_read();
    void thread_src_V_pixel_16_blk_n();
    void thread_src_V_pixel_16_read();
    void thread_src_V_pixel_17_blk_n();
    void thread_src_V_pixel_17_read();
    void thread_src_V_pixel_18_blk_n();
    void thread_src_V_pixel_18_read();
    void thread_src_V_pixel_19_blk_n();
    void thread_src_V_pixel_19_read();
    void thread_src_V_pixel_1_blk_n();
    void thread_src_V_pixel_1_read();
    void thread_src_V_pixel_20_blk_n();
    void thread_src_V_pixel_20_read();
    void thread_src_V_pixel_21_blk_n();
    void thread_src_V_pixel_21_read();
    void thread_src_V_pixel_22_blk_n();
    void thread_src_V_pixel_22_read();
    void thread_src_V_pixel_23_blk_n();
    void thread_src_V_pixel_23_read();
    void thread_src_V_pixel_24_blk_n();
    void thread_src_V_pixel_24_read();
    void thread_src_V_pixel_25_blk_n();
    void thread_src_V_pixel_25_read();
    void thread_src_V_pixel_26_blk_n();
    void thread_src_V_pixel_26_read();
    void thread_src_V_pixel_27_blk_n();
    void thread_src_V_pixel_27_read();
    void thread_src_V_pixel_28_blk_n();
    void thread_src_V_pixel_28_read();
    void thread_src_V_pixel_29_blk_n();
    void thread_src_V_pixel_29_read();
    void thread_src_V_pixel_2_blk_n();
    void thread_src_V_pixel_2_read();
    void thread_src_V_pixel_30_blk_n();
    void thread_src_V_pixel_30_read();
    void thread_src_V_pixel_31_blk_n();
    void thread_src_V_pixel_31_read();
    void thread_src_V_pixel_32_blk_n();
    void thread_src_V_pixel_32_read();
    void thread_src_V_pixel_33_blk_n();
    void thread_src_V_pixel_33_read();
    void thread_src_V_pixel_34_blk_n();
    void thread_src_V_pixel_34_read();
    void thread_src_V_pixel_35_blk_n();
    void thread_src_V_pixel_35_read();
    void thread_src_V_pixel_36_blk_n();
    void thread_src_V_pixel_36_read();
    void thread_src_V_pixel_37_blk_n();
    void thread_src_V_pixel_37_read();
    void thread_src_V_pixel_38_blk_n();
    void thread_src_V_pixel_38_read();
    void thread_src_V_pixel_39_blk_n();
    void thread_src_V_pixel_39_read();
    void thread_src_V_pixel_3_blk_n();
    void thread_src_V_pixel_3_read();
    void thread_src_V_pixel_40_blk_n();
    void thread_src_V_pixel_40_read();
    void thread_src_V_pixel_41_blk_n();
    void thread_src_V_pixel_41_read();
    void thread_src_V_pixel_42_blk_n();
    void thread_src_V_pixel_42_read();
    void thread_src_V_pixel_43_blk_n();
    void thread_src_V_pixel_43_read();
    void thread_src_V_pixel_4_blk_n();
    void thread_src_V_pixel_4_read();
    void thread_src_V_pixel_5_blk_n();
    void thread_src_V_pixel_5_read();
    void thread_src_V_pixel_6_blk_n();
    void thread_src_V_pixel_6_read();
    void thread_src_V_pixel_7_blk_n();
    void thread_src_V_pixel_7_read();
    void thread_src_V_pixel_8_blk_n();
    void thread_src_V_pixel_8_read();
    void thread_src_V_pixel_9_blk_n();
    void thread_src_V_pixel_9_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif