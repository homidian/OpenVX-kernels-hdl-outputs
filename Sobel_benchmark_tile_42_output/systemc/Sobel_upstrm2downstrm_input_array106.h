// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Sobel_upstrm2downstrm_input_array106_HH_
#define _Sobel_upstrm2downstrm_input_array106_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Sobel_upstrm2downstrm_input_array106 : public sc_module {
    // Port declarations 271
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > src_V_pixel_dout;
    sc_in< sc_logic > src_V_pixel_empty_n;
    sc_out< sc_logic > src_V_pixel_read;
    sc_in< sc_lv<8> > src_V_pixel1_dout;
    sc_in< sc_logic > src_V_pixel1_empty_n;
    sc_out< sc_logic > src_V_pixel1_read;
    sc_in< sc_lv<8> > src_V_pixel2_dout;
    sc_in< sc_logic > src_V_pixel2_empty_n;
    sc_out< sc_logic > src_V_pixel2_read;
    sc_in< sc_lv<8> > src_V_pixel3_dout;
    sc_in< sc_logic > src_V_pixel3_empty_n;
    sc_out< sc_logic > src_V_pixel3_read;
    sc_in< sc_lv<8> > src_V_pixel4_dout;
    sc_in< sc_logic > src_V_pixel4_empty_n;
    sc_out< sc_logic > src_V_pixel4_read;
    sc_in< sc_lv<8> > src_V_pixel5_dout;
    sc_in< sc_logic > src_V_pixel5_empty_n;
    sc_out< sc_logic > src_V_pixel5_read;
    sc_in< sc_lv<8> > src_V_pixel6_dout;
    sc_in< sc_logic > src_V_pixel6_empty_n;
    sc_out< sc_logic > src_V_pixel6_read;
    sc_in< sc_lv<8> > src_V_pixel7_dout;
    sc_in< sc_logic > src_V_pixel7_empty_n;
    sc_out< sc_logic > src_V_pixel7_read;
    sc_in< sc_lv<8> > src_V_pixel8_dout;
    sc_in< sc_logic > src_V_pixel8_empty_n;
    sc_out< sc_logic > src_V_pixel8_read;
    sc_in< sc_lv<8> > src_V_pixel9_dout;
    sc_in< sc_logic > src_V_pixel9_empty_n;
    sc_out< sc_logic > src_V_pixel9_read;
    sc_in< sc_lv<8> > src_V_pixel10_dout;
    sc_in< sc_logic > src_V_pixel10_empty_n;
    sc_out< sc_logic > src_V_pixel10_read;
    sc_in< sc_lv<8> > src_V_pixel11_dout;
    sc_in< sc_logic > src_V_pixel11_empty_n;
    sc_out< sc_logic > src_V_pixel11_read;
    sc_in< sc_lv<8> > src_V_pixel12_dout;
    sc_in< sc_logic > src_V_pixel12_empty_n;
    sc_out< sc_logic > src_V_pixel12_read;
    sc_in< sc_lv<8> > src_V_pixel13_dout;
    sc_in< sc_logic > src_V_pixel13_empty_n;
    sc_out< sc_logic > src_V_pixel13_read;
    sc_in< sc_lv<8> > src_V_pixel14_dout;
    sc_in< sc_logic > src_V_pixel14_empty_n;
    sc_out< sc_logic > src_V_pixel14_read;
    sc_in< sc_lv<8> > src_V_pixel15_dout;
    sc_in< sc_logic > src_V_pixel15_empty_n;
    sc_out< sc_logic > src_V_pixel15_read;
    sc_in< sc_lv<8> > src_V_pixel16_dout;
    sc_in< sc_logic > src_V_pixel16_empty_n;
    sc_out< sc_logic > src_V_pixel16_read;
    sc_in< sc_lv<8> > src_V_pixel17_dout;
    sc_in< sc_logic > src_V_pixel17_empty_n;
    sc_out< sc_logic > src_V_pixel17_read;
    sc_in< sc_lv<8> > src_V_pixel18_dout;
    sc_in< sc_logic > src_V_pixel18_empty_n;
    sc_out< sc_logic > src_V_pixel18_read;
    sc_in< sc_lv<8> > src_V_pixel19_dout;
    sc_in< sc_logic > src_V_pixel19_empty_n;
    sc_out< sc_logic > src_V_pixel19_read;
    sc_in< sc_lv<8> > src_V_pixel20_dout;
    sc_in< sc_logic > src_V_pixel20_empty_n;
    sc_out< sc_logic > src_V_pixel20_read;
    sc_in< sc_lv<8> > src_V_pixel21_dout;
    sc_in< sc_logic > src_V_pixel21_empty_n;
    sc_out< sc_logic > src_V_pixel21_read;
    sc_in< sc_lv<8> > src_V_pixel22_dout;
    sc_in< sc_logic > src_V_pixel22_empty_n;
    sc_out< sc_logic > src_V_pixel22_read;
    sc_in< sc_lv<8> > src_V_pixel23_dout;
    sc_in< sc_logic > src_V_pixel23_empty_n;
    sc_out< sc_logic > src_V_pixel23_read;
    sc_in< sc_lv<8> > src_V_pixel24_dout;
    sc_in< sc_logic > src_V_pixel24_empty_n;
    sc_out< sc_logic > src_V_pixel24_read;
    sc_in< sc_lv<8> > src_V_pixel25_dout;
    sc_in< sc_logic > src_V_pixel25_empty_n;
    sc_out< sc_logic > src_V_pixel25_read;
    sc_in< sc_lv<8> > src_V_pixel26_dout;
    sc_in< sc_logic > src_V_pixel26_empty_n;
    sc_out< sc_logic > src_V_pixel26_read;
    sc_in< sc_lv<8> > src_V_pixel27_dout;
    sc_in< sc_logic > src_V_pixel27_empty_n;
    sc_out< sc_logic > src_V_pixel27_read;
    sc_in< sc_lv<8> > src_V_pixel28_dout;
    sc_in< sc_logic > src_V_pixel28_empty_n;
    sc_out< sc_logic > src_V_pixel28_read;
    sc_in< sc_lv<8> > src_V_pixel29_dout;
    sc_in< sc_logic > src_V_pixel29_empty_n;
    sc_out< sc_logic > src_V_pixel29_read;
    sc_in< sc_lv<8> > src_V_pixel30_dout;
    sc_in< sc_logic > src_V_pixel30_empty_n;
    sc_out< sc_logic > src_V_pixel30_read;
    sc_in< sc_lv<8> > src_V_pixel31_dout;
    sc_in< sc_logic > src_V_pixel31_empty_n;
    sc_out< sc_logic > src_V_pixel31_read;
    sc_in< sc_lv<8> > src_V_pixel32_dout;
    sc_in< sc_logic > src_V_pixel32_empty_n;
    sc_out< sc_logic > src_V_pixel32_read;
    sc_in< sc_lv<8> > src_V_pixel33_dout;
    sc_in< sc_logic > src_V_pixel33_empty_n;
    sc_out< sc_logic > src_V_pixel33_read;
    sc_in< sc_lv<8> > src_V_pixel34_dout;
    sc_in< sc_logic > src_V_pixel34_empty_n;
    sc_out< sc_logic > src_V_pixel34_read;
    sc_in< sc_lv<8> > src_V_pixel35_dout;
    sc_in< sc_logic > src_V_pixel35_empty_n;
    sc_out< sc_logic > src_V_pixel35_read;
    sc_in< sc_lv<8> > src_V_pixel36_dout;
    sc_in< sc_logic > src_V_pixel36_empty_n;
    sc_out< sc_logic > src_V_pixel36_read;
    sc_in< sc_lv<8> > src_V_pixel37_dout;
    sc_in< sc_logic > src_V_pixel37_empty_n;
    sc_out< sc_logic > src_V_pixel37_read;
    sc_in< sc_lv<8> > src_V_pixel38_dout;
    sc_in< sc_logic > src_V_pixel38_empty_n;
    sc_out< sc_logic > src_V_pixel38_read;
    sc_in< sc_lv<8> > src_V_pixel39_dout;
    sc_in< sc_logic > src_V_pixel39_empty_n;
    sc_out< sc_logic > src_V_pixel39_read;
    sc_in< sc_lv<8> > src_V_pixel40_dout;
    sc_in< sc_logic > src_V_pixel40_empty_n;
    sc_out< sc_logic > src_V_pixel40_read;
    sc_in< sc_lv<8> > src_V_pixel41_dout;
    sc_in< sc_logic > src_V_pixel41_empty_n;
    sc_out< sc_logic > src_V_pixel41_read;
    sc_in< sc_lv<8> > src_V_pixel42_dout;
    sc_in< sc_logic > src_V_pixel42_empty_n;
    sc_out< sc_logic > src_V_pixel42_read;
    sc_in< sc_lv<8> > src_V_pixel43_dout;
    sc_in< sc_logic > src_V_pixel43_empty_n;
    sc_out< sc_logic > src_V_pixel43_read;
    sc_out< sc_lv<8> > dst_V_pixel_din;
    sc_in< sc_logic > dst_V_pixel_full_n;
    sc_out< sc_logic > dst_V_pixel_write;
    sc_out< sc_lv<8> > dst_V_pixel44_din;
    sc_in< sc_logic > dst_V_pixel44_full_n;
    sc_out< sc_logic > dst_V_pixel44_write;
    sc_out< sc_lv<8> > dst_V_pixel45_din;
    sc_in< sc_logic > dst_V_pixel45_full_n;
    sc_out< sc_logic > dst_V_pixel45_write;
    sc_out< sc_lv<8> > dst_V_pixel46_din;
    sc_in< sc_logic > dst_V_pixel46_full_n;
    sc_out< sc_logic > dst_V_pixel46_write;
    sc_out< sc_lv<8> > dst_V_pixel47_din;
    sc_in< sc_logic > dst_V_pixel47_full_n;
    sc_out< sc_logic > dst_V_pixel47_write;
    sc_out< sc_lv<8> > dst_V_pixel48_din;
    sc_in< sc_logic > dst_V_pixel48_full_n;
    sc_out< sc_logic > dst_V_pixel48_write;
    sc_out< sc_lv<8> > dst_V_pixel49_din;
    sc_in< sc_logic > dst_V_pixel49_full_n;
    sc_out< sc_logic > dst_V_pixel49_write;
    sc_out< sc_lv<8> > dst_V_pixel50_din;
    sc_in< sc_logic > dst_V_pixel50_full_n;
    sc_out< sc_logic > dst_V_pixel50_write;
    sc_out< sc_lv<8> > dst_V_pixel51_din;
    sc_in< sc_logic > dst_V_pixel51_full_n;
    sc_out< sc_logic > dst_V_pixel51_write;
    sc_out< sc_lv<8> > dst_V_pixel52_din;
    sc_in< sc_logic > dst_V_pixel52_full_n;
    sc_out< sc_logic > dst_V_pixel52_write;
    sc_out< sc_lv<8> > dst_V_pixel53_din;
    sc_in< sc_logic > dst_V_pixel53_full_n;
    sc_out< sc_logic > dst_V_pixel53_write;
    sc_out< sc_lv<8> > dst_V_pixel54_din;
    sc_in< sc_logic > dst_V_pixel54_full_n;
    sc_out< sc_logic > dst_V_pixel54_write;
    sc_out< sc_lv<8> > dst_V_pixel55_din;
    sc_in< sc_logic > dst_V_pixel55_full_n;
    sc_out< sc_logic > dst_V_pixel55_write;
    sc_out< sc_lv<8> > dst_V_pixel56_din;
    sc_in< sc_logic > dst_V_pixel56_full_n;
    sc_out< sc_logic > dst_V_pixel56_write;
    sc_out< sc_lv<8> > dst_V_pixel57_din;
    sc_in< sc_logic > dst_V_pixel57_full_n;
    sc_out< sc_logic > dst_V_pixel57_write;
    sc_out< sc_lv<8> > dst_V_pixel58_din;
    sc_in< sc_logic > dst_V_pixel58_full_n;
    sc_out< sc_logic > dst_V_pixel58_write;
    sc_out< sc_lv<8> > dst_V_pixel59_din;
    sc_in< sc_logic > dst_V_pixel59_full_n;
    sc_out< sc_logic > dst_V_pixel59_write;
    sc_out< sc_lv<8> > dst_V_pixel60_din;
    sc_in< sc_logic > dst_V_pixel60_full_n;
    sc_out< sc_logic > dst_V_pixel60_write;
    sc_out< sc_lv<8> > dst_V_pixel61_din;
    sc_in< sc_logic > dst_V_pixel61_full_n;
    sc_out< sc_logic > dst_V_pixel61_write;
    sc_out< sc_lv<8> > dst_V_pixel62_din;
    sc_in< sc_logic > dst_V_pixel62_full_n;
    sc_out< sc_logic > dst_V_pixel62_write;
    sc_out< sc_lv<8> > dst_V_pixel63_din;
    sc_in< sc_logic > dst_V_pixel63_full_n;
    sc_out< sc_logic > dst_V_pixel63_write;
    sc_out< sc_lv<8> > dst_V_pixel64_din;
    sc_in< sc_logic > dst_V_pixel64_full_n;
    sc_out< sc_logic > dst_V_pixel64_write;
    sc_out< sc_lv<8> > dst_V_pixel65_din;
    sc_in< sc_logic > dst_V_pixel65_full_n;
    sc_out< sc_logic > dst_V_pixel65_write;
    sc_out< sc_lv<8> > dst_V_pixel66_din;
    sc_in< sc_logic > dst_V_pixel66_full_n;
    sc_out< sc_logic > dst_V_pixel66_write;
    sc_out< sc_lv<8> > dst_V_pixel67_din;
    sc_in< sc_logic > dst_V_pixel67_full_n;
    sc_out< sc_logic > dst_V_pixel67_write;
    sc_out< sc_lv<8> > dst_V_pixel68_din;
    sc_in< sc_logic > dst_V_pixel68_full_n;
    sc_out< sc_logic > dst_V_pixel68_write;
    sc_out< sc_lv<8> > dst_V_pixel69_din;
    sc_in< sc_logic > dst_V_pixel69_full_n;
    sc_out< sc_logic > dst_V_pixel69_write;
    sc_out< sc_lv<8> > dst_V_pixel70_din;
    sc_in< sc_logic > dst_V_pixel70_full_n;
    sc_out< sc_logic > dst_V_pixel70_write;
    sc_out< sc_lv<8> > dst_V_pixel71_din;
    sc_in< sc_logic > dst_V_pixel71_full_n;
    sc_out< sc_logic > dst_V_pixel71_write;
    sc_out< sc_lv<8> > dst_V_pixel72_din;
    sc_in< sc_logic > dst_V_pixel72_full_n;
    sc_out< sc_logic > dst_V_pixel72_write;
    sc_out< sc_lv<8> > dst_V_pixel73_din;
    sc_in< sc_logic > dst_V_pixel73_full_n;
    sc_out< sc_logic > dst_V_pixel73_write;
    sc_out< sc_lv<8> > dst_V_pixel74_din;
    sc_in< sc_logic > dst_V_pixel74_full_n;
    sc_out< sc_logic > dst_V_pixel74_write;
    sc_out< sc_lv<8> > dst_V_pixel75_din;
    sc_in< sc_logic > dst_V_pixel75_full_n;
    sc_out< sc_logic > dst_V_pixel75_write;
    sc_out< sc_lv<8> > dst_V_pixel76_din;
    sc_in< sc_logic > dst_V_pixel76_full_n;
    sc_out< sc_logic > dst_V_pixel76_write;
    sc_out< sc_lv<8> > dst_V_pixel77_din;
    sc_in< sc_logic > dst_V_pixel77_full_n;
    sc_out< sc_logic > dst_V_pixel77_write;
    sc_out< sc_lv<8> > dst_V_pixel78_din;
    sc_in< sc_logic > dst_V_pixel78_full_n;
    sc_out< sc_logic > dst_V_pixel78_write;
    sc_out< sc_lv<8> > dst_V_pixel79_din;
    sc_in< sc_logic > dst_V_pixel79_full_n;
    sc_out< sc_logic > dst_V_pixel79_write;
    sc_out< sc_lv<8> > dst_V_pixel80_din;
    sc_in< sc_logic > dst_V_pixel80_full_n;
    sc_out< sc_logic > dst_V_pixel80_write;
    sc_out< sc_lv<8> > dst_V_pixel81_din;
    sc_in< sc_logic > dst_V_pixel81_full_n;
    sc_out< sc_logic > dst_V_pixel81_write;
    sc_out< sc_lv<8> > dst_V_pixel82_din;
    sc_in< sc_logic > dst_V_pixel82_full_n;
    sc_out< sc_logic > dst_V_pixel82_write;
    sc_out< sc_lv<8> > dst_V_pixel83_din;
    sc_in< sc_logic > dst_V_pixel83_full_n;
    sc_out< sc_logic > dst_V_pixel83_write;
    sc_out< sc_lv<8> > dst_V_pixel84_din;
    sc_in< sc_logic > dst_V_pixel84_full_n;
    sc_out< sc_logic > dst_V_pixel84_write;
    sc_out< sc_lv<8> > dst_V_pixel85_din;
    sc_in< sc_logic > dst_V_pixel85_full_n;
    sc_out< sc_logic > dst_V_pixel85_write;
    sc_out< sc_lv<8> > dst_V_pixel86_din;
    sc_in< sc_logic > dst_V_pixel86_full_n;
    sc_out< sc_logic > dst_V_pixel86_write;


    // Module declarations
    Sobel_upstrm2downstrm_input_array106(sc_module_name name);
    SC_HAS_PROCESS(Sobel_upstrm2downstrm_input_array106);

    ~Sobel_upstrm2downstrm_input_array106();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_logic > src_V_pixel_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_385;
    sc_signal< sc_lv<1> > exitcond4_fu_1147_p2;
    sc_signal< sc_logic > src_V_pixel1_blk_n;
    sc_signal< sc_logic > src_V_pixel2_blk_n;
    sc_signal< sc_logic > src_V_pixel3_blk_n;
    sc_signal< sc_logic > src_V_pixel4_blk_n;
    sc_signal< sc_logic > src_V_pixel5_blk_n;
    sc_signal< sc_logic > src_V_pixel6_blk_n;
    sc_signal< sc_logic > src_V_pixel7_blk_n;
    sc_signal< sc_logic > src_V_pixel8_blk_n;
    sc_signal< sc_logic > src_V_pixel9_blk_n;
    sc_signal< sc_logic > src_V_pixel10_blk_n;
    sc_signal< sc_logic > src_V_pixel11_blk_n;
    sc_signal< sc_logic > src_V_pixel12_blk_n;
    sc_signal< sc_logic > src_V_pixel13_blk_n;
    sc_signal< sc_logic > src_V_pixel14_blk_n;
    sc_signal< sc_logic > src_V_pixel15_blk_n;
    sc_signal< sc_logic > src_V_pixel16_blk_n;
    sc_signal< sc_logic > src_V_pixel17_blk_n;
    sc_signal< sc_logic > src_V_pixel18_blk_n;
    sc_signal< sc_logic > src_V_pixel19_blk_n;
    sc_signal< sc_logic > src_V_pixel20_blk_n;
    sc_signal< sc_logic > src_V_pixel21_blk_n;
    sc_signal< sc_logic > src_V_pixel22_blk_n;
    sc_signal< sc_logic > src_V_pixel23_blk_n;
    sc_signal< sc_logic > src_V_pixel24_blk_n;
    sc_signal< sc_logic > src_V_pixel25_blk_n;
    sc_signal< sc_logic > src_V_pixel26_blk_n;
    sc_signal< sc_logic > src_V_pixel27_blk_n;
    sc_signal< sc_logic > src_V_pixel28_blk_n;
    sc_signal< sc_logic > src_V_pixel29_blk_n;
    sc_signal< sc_logic > src_V_pixel30_blk_n;
    sc_signal< sc_logic > src_V_pixel31_blk_n;
    sc_signal< sc_logic > src_V_pixel32_blk_n;
    sc_signal< sc_logic > src_V_pixel33_blk_n;
    sc_signal< sc_logic > src_V_pixel34_blk_n;
    sc_signal< sc_logic > src_V_pixel35_blk_n;
    sc_signal< sc_logic > src_V_pixel36_blk_n;
    sc_signal< sc_logic > src_V_pixel37_blk_n;
    sc_signal< sc_logic > src_V_pixel38_blk_n;
    sc_signal< sc_logic > src_V_pixel39_blk_n;
    sc_signal< sc_logic > src_V_pixel40_blk_n;
    sc_signal< sc_logic > src_V_pixel41_blk_n;
    sc_signal< sc_logic > src_V_pixel42_blk_n;
    sc_signal< sc_logic > src_V_pixel43_blk_n;
    sc_signal< sc_logic > dst_V_pixel_blk_n;
    sc_signal< sc_logic > dst_V_pixel44_blk_n;
    sc_signal< sc_logic > dst_V_pixel45_blk_n;
    sc_signal< sc_logic > dst_V_pixel46_blk_n;
    sc_signal< sc_logic > dst_V_pixel47_blk_n;
    sc_signal< sc_logic > dst_V_pixel48_blk_n;
    sc_signal< sc_logic > dst_V_pixel49_blk_n;
    sc_signal< sc_logic > dst_V_pixel50_blk_n;
    sc_signal< sc_logic > dst_V_pixel51_blk_n;
    sc_signal< sc_logic > dst_V_pixel52_blk_n;
    sc_signal< sc_logic > dst_V_pixel53_blk_n;
    sc_signal< sc_logic > dst_V_pixel54_blk_n;
    sc_signal< sc_logic > dst_V_pixel55_blk_n;
    sc_signal< sc_logic > dst_V_pixel56_blk_n;
    sc_signal< sc_logic > dst_V_pixel57_blk_n;
    sc_signal< sc_logic > dst_V_pixel58_blk_n;
    sc_signal< sc_logic > dst_V_pixel59_blk_n;
    sc_signal< sc_logic > dst_V_pixel60_blk_n;
    sc_signal< sc_logic > dst_V_pixel61_blk_n;
    sc_signal< sc_logic > dst_V_pixel62_blk_n;
    sc_signal< sc_logic > dst_V_pixel63_blk_n;
    sc_signal< sc_logic > dst_V_pixel64_blk_n;
    sc_signal< sc_logic > dst_V_pixel65_blk_n;
    sc_signal< sc_logic > dst_V_pixel66_blk_n;
    sc_signal< sc_logic > dst_V_pixel67_blk_n;
    sc_signal< sc_logic > dst_V_pixel68_blk_n;
    sc_signal< sc_logic > dst_V_pixel69_blk_n;
    sc_signal< sc_logic > dst_V_pixel70_blk_n;
    sc_signal< sc_logic > dst_V_pixel71_blk_n;
    sc_signal< sc_logic > dst_V_pixel72_blk_n;
    sc_signal< sc_logic > dst_V_pixel73_blk_n;
    sc_signal< sc_logic > dst_V_pixel74_blk_n;
    sc_signal< sc_logic > dst_V_pixel75_blk_n;
    sc_signal< sc_logic > dst_V_pixel76_blk_n;
    sc_signal< sc_logic > dst_V_pixel77_blk_n;
    sc_signal< sc_logic > dst_V_pixel78_blk_n;
    sc_signal< sc_logic > dst_V_pixel79_blk_n;
    sc_signal< sc_logic > dst_V_pixel80_blk_n;
    sc_signal< sc_logic > dst_V_pixel81_blk_n;
    sc_signal< sc_logic > dst_V_pixel82_blk_n;
    sc_signal< sc_logic > dst_V_pixel83_blk_n;
    sc_signal< sc_logic > dst_V_pixel84_blk_n;
    sc_signal< sc_logic > dst_V_pixel85_blk_n;
    sc_signal< sc_logic > dst_V_pixel86_blk_n;
    sc_signal< sc_lv<9> > i_1_fu_1153_p2;
    sc_signal< sc_logic > src_V_pixel0_status;
    sc_signal< sc_logic > dst_V_pixel1_status;
    sc_signal< bool > ap_sig_487;
    sc_signal< sc_lv<9> > i_reg_1136;
    sc_signal< bool > ap_sig_496;
    sc_signal< sc_logic > src_V_pixel0_update;
    sc_signal< sc_logic > dst_V_pixel1_update;
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
    void thread_dst_V_pixel1_status();
    void thread_dst_V_pixel1_update();
    void thread_dst_V_pixel44_blk_n();
    void thread_dst_V_pixel44_din();
    void thread_dst_V_pixel44_write();
    void thread_dst_V_pixel45_blk_n();
    void thread_dst_V_pixel45_din();
    void thread_dst_V_pixel45_write();
    void thread_dst_V_pixel46_blk_n();
    void thread_dst_V_pixel46_din();
    void thread_dst_V_pixel46_write();
    void thread_dst_V_pixel47_blk_n();
    void thread_dst_V_pixel47_din();
    void thread_dst_V_pixel47_write();
    void thread_dst_V_pixel48_blk_n();
    void thread_dst_V_pixel48_din();
    void thread_dst_V_pixel48_write();
    void thread_dst_V_pixel49_blk_n();
    void thread_dst_V_pixel49_din();
    void thread_dst_V_pixel49_write();
    void thread_dst_V_pixel50_blk_n();
    void thread_dst_V_pixel50_din();
    void thread_dst_V_pixel50_write();
    void thread_dst_V_pixel51_blk_n();
    void thread_dst_V_pixel51_din();
    void thread_dst_V_pixel51_write();
    void thread_dst_V_pixel52_blk_n();
    void thread_dst_V_pixel52_din();
    void thread_dst_V_pixel52_write();
    void thread_dst_V_pixel53_blk_n();
    void thread_dst_V_pixel53_din();
    void thread_dst_V_pixel53_write();
    void thread_dst_V_pixel54_blk_n();
    void thread_dst_V_pixel54_din();
    void thread_dst_V_pixel54_write();
    void thread_dst_V_pixel55_blk_n();
    void thread_dst_V_pixel55_din();
    void thread_dst_V_pixel55_write();
    void thread_dst_V_pixel56_blk_n();
    void thread_dst_V_pixel56_din();
    void thread_dst_V_pixel56_write();
    void thread_dst_V_pixel57_blk_n();
    void thread_dst_V_pixel57_din();
    void thread_dst_V_pixel57_write();
    void thread_dst_V_pixel58_blk_n();
    void thread_dst_V_pixel58_din();
    void thread_dst_V_pixel58_write();
    void thread_dst_V_pixel59_blk_n();
    void thread_dst_V_pixel59_din();
    void thread_dst_V_pixel59_write();
    void thread_dst_V_pixel60_blk_n();
    void thread_dst_V_pixel60_din();
    void thread_dst_V_pixel60_write();
    void thread_dst_V_pixel61_blk_n();
    void thread_dst_V_pixel61_din();
    void thread_dst_V_pixel61_write();
    void thread_dst_V_pixel62_blk_n();
    void thread_dst_V_pixel62_din();
    void thread_dst_V_pixel62_write();
    void thread_dst_V_pixel63_blk_n();
    void thread_dst_V_pixel63_din();
    void thread_dst_V_pixel63_write();
    void thread_dst_V_pixel64_blk_n();
    void thread_dst_V_pixel64_din();
    void thread_dst_V_pixel64_write();
    void thread_dst_V_pixel65_blk_n();
    void thread_dst_V_pixel65_din();
    void thread_dst_V_pixel65_write();
    void thread_dst_V_pixel66_blk_n();
    void thread_dst_V_pixel66_din();
    void thread_dst_V_pixel66_write();
    void thread_dst_V_pixel67_blk_n();
    void thread_dst_V_pixel67_din();
    void thread_dst_V_pixel67_write();
    void thread_dst_V_pixel68_blk_n();
    void thread_dst_V_pixel68_din();
    void thread_dst_V_pixel68_write();
    void thread_dst_V_pixel69_blk_n();
    void thread_dst_V_pixel69_din();
    void thread_dst_V_pixel69_write();
    void thread_dst_V_pixel70_blk_n();
    void thread_dst_V_pixel70_din();
    void thread_dst_V_pixel70_write();
    void thread_dst_V_pixel71_blk_n();
    void thread_dst_V_pixel71_din();
    void thread_dst_V_pixel71_write();
    void thread_dst_V_pixel72_blk_n();
    void thread_dst_V_pixel72_din();
    void thread_dst_V_pixel72_write();
    void thread_dst_V_pixel73_blk_n();
    void thread_dst_V_pixel73_din();
    void thread_dst_V_pixel73_write();
    void thread_dst_V_pixel74_blk_n();
    void thread_dst_V_pixel74_din();
    void thread_dst_V_pixel74_write();
    void thread_dst_V_pixel75_blk_n();
    void thread_dst_V_pixel75_din();
    void thread_dst_V_pixel75_write();
    void thread_dst_V_pixel76_blk_n();
    void thread_dst_V_pixel76_din();
    void thread_dst_V_pixel76_write();
    void thread_dst_V_pixel77_blk_n();
    void thread_dst_V_pixel77_din();
    void thread_dst_V_pixel77_write();
    void thread_dst_V_pixel78_blk_n();
    void thread_dst_V_pixel78_din();
    void thread_dst_V_pixel78_write();
    void thread_dst_V_pixel79_blk_n();
    void thread_dst_V_pixel79_din();
    void thread_dst_V_pixel79_write();
    void thread_dst_V_pixel80_blk_n();
    void thread_dst_V_pixel80_din();
    void thread_dst_V_pixel80_write();
    void thread_dst_V_pixel81_blk_n();
    void thread_dst_V_pixel81_din();
    void thread_dst_V_pixel81_write();
    void thread_dst_V_pixel82_blk_n();
    void thread_dst_V_pixel82_din();
    void thread_dst_V_pixel82_write();
    void thread_dst_V_pixel83_blk_n();
    void thread_dst_V_pixel83_din();
    void thread_dst_V_pixel83_write();
    void thread_dst_V_pixel84_blk_n();
    void thread_dst_V_pixel84_din();
    void thread_dst_V_pixel84_write();
    void thread_dst_V_pixel85_blk_n();
    void thread_dst_V_pixel85_din();
    void thread_dst_V_pixel85_write();
    void thread_dst_V_pixel86_blk_n();
    void thread_dst_V_pixel86_din();
    void thread_dst_V_pixel86_write();
    void thread_dst_V_pixel_blk_n();
    void thread_dst_V_pixel_din();
    void thread_dst_V_pixel_write();
    void thread_exitcond4_fu_1147_p2();
    void thread_i_1_fu_1153_p2();
    void thread_src_V_pixel0_status();
    void thread_src_V_pixel0_update();
    void thread_src_V_pixel10_blk_n();
    void thread_src_V_pixel10_read();
    void thread_src_V_pixel11_blk_n();
    void thread_src_V_pixel11_read();
    void thread_src_V_pixel12_blk_n();
    void thread_src_V_pixel12_read();
    void thread_src_V_pixel13_blk_n();
    void thread_src_V_pixel13_read();
    void thread_src_V_pixel14_blk_n();
    void thread_src_V_pixel14_read();
    void thread_src_V_pixel15_blk_n();
    void thread_src_V_pixel15_read();
    void thread_src_V_pixel16_blk_n();
    void thread_src_V_pixel16_read();
    void thread_src_V_pixel17_blk_n();
    void thread_src_V_pixel17_read();
    void thread_src_V_pixel18_blk_n();
    void thread_src_V_pixel18_read();
    void thread_src_V_pixel19_blk_n();
    void thread_src_V_pixel19_read();
    void thread_src_V_pixel1_blk_n();
    void thread_src_V_pixel1_read();
    void thread_src_V_pixel20_blk_n();
    void thread_src_V_pixel20_read();
    void thread_src_V_pixel21_blk_n();
    void thread_src_V_pixel21_read();
    void thread_src_V_pixel22_blk_n();
    void thread_src_V_pixel22_read();
    void thread_src_V_pixel23_blk_n();
    void thread_src_V_pixel23_read();
    void thread_src_V_pixel24_blk_n();
    void thread_src_V_pixel24_read();
    void thread_src_V_pixel25_blk_n();
    void thread_src_V_pixel25_read();
    void thread_src_V_pixel26_blk_n();
    void thread_src_V_pixel26_read();
    void thread_src_V_pixel27_blk_n();
    void thread_src_V_pixel27_read();
    void thread_src_V_pixel28_blk_n();
    void thread_src_V_pixel28_read();
    void thread_src_V_pixel29_blk_n();
    void thread_src_V_pixel29_read();
    void thread_src_V_pixel2_blk_n();
    void thread_src_V_pixel2_read();
    void thread_src_V_pixel30_blk_n();
    void thread_src_V_pixel30_read();
    void thread_src_V_pixel31_blk_n();
    void thread_src_V_pixel31_read();
    void thread_src_V_pixel32_blk_n();
    void thread_src_V_pixel32_read();
    void thread_src_V_pixel33_blk_n();
    void thread_src_V_pixel33_read();
    void thread_src_V_pixel34_blk_n();
    void thread_src_V_pixel34_read();
    void thread_src_V_pixel35_blk_n();
    void thread_src_V_pixel35_read();
    void thread_src_V_pixel36_blk_n();
    void thread_src_V_pixel36_read();
    void thread_src_V_pixel37_blk_n();
    void thread_src_V_pixel37_read();
    void thread_src_V_pixel38_blk_n();
    void thread_src_V_pixel38_read();
    void thread_src_V_pixel39_blk_n();
    void thread_src_V_pixel39_read();
    void thread_src_V_pixel3_blk_n();
    void thread_src_V_pixel3_read();
    void thread_src_V_pixel40_blk_n();
    void thread_src_V_pixel40_read();
    void thread_src_V_pixel41_blk_n();
    void thread_src_V_pixel41_read();
    void thread_src_V_pixel42_blk_n();
    void thread_src_V_pixel42_read();
    void thread_src_V_pixel43_blk_n();
    void thread_src_V_pixel43_read();
    void thread_src_V_pixel4_blk_n();
    void thread_src_V_pixel4_read();
    void thread_src_V_pixel5_blk_n();
    void thread_src_V_pixel5_read();
    void thread_src_V_pixel6_blk_n();
    void thread_src_V_pixel6_read();
    void thread_src_V_pixel7_blk_n();
    void thread_src_V_pixel7_read();
    void thread_src_V_pixel8_blk_n();
    void thread_src_V_pixel8_read();
    void thread_src_V_pixel9_blk_n();
    void thread_src_V_pixel9_read();
    void thread_src_V_pixel_blk_n();
    void thread_src_V_pixel_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
