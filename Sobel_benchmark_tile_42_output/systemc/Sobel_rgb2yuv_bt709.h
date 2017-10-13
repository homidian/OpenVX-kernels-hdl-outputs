// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Sobel_rgb2yuv_bt709_HH_
#define _Sobel_rgb2yuv_bt709_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Sobel_mac_muladd_16ns_9ns_23ns_24_1.h"
#include "Sobel_mac_muladd_16ns_7ns_21ns_23_1.h"

namespace ap_rtl {

struct Sobel_rgb2yuv_bt709 : public sc_module {
    // Port declarations 7
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<8> > r;
    sc_in< sc_lv<8> > g;
    sc_in< sc_lv<8> > b;
    sc_out< sc_lv<8> > ap_return;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    Sobel_rgb2yuv_bt709(sc_module_name name);
    SC_HAS_PROCESS(Sobel_rgb2yuv_bt709);

    ~Sobel_rgb2yuv_bt709();

    sc_trace_file* mVcdFile;

    Sobel_mac_muladd_16ns_9ns_23ns_24_1<1,1,16,9,23,24>* Sobel_mac_muladd_16ns_9ns_23ns_24_1_U253;
    Sobel_mac_muladd_16ns_7ns_21ns_23_1<1,1,16,7,21,23>* Sobel_mac_muladd_16ns_7ns_21ns_23_1_U254;
    sc_signal< sc_lv<8> > b_read_reg_132;
    sc_signal< sc_lv<8> > g_read_reg_138;
    sc_signal< sc_lv<8> > r_read_reg_143;
    sc_signal< sc_lv<16> > f_r_fu_48_p3;
    sc_signal< sc_lv<16> > f_g_fu_55_p3;
    sc_signal< sc_lv<20> > p_shl_fu_70_p3;
    sc_signal< sc_lv<17> > p_shl1_fu_81_p3;
    sc_signal< sc_lv<21> > p_shl1_cast_fu_88_p1;
    sc_signal< sc_lv<21> > p_shl_cast_fu_77_p1;
    sc_signal< sc_lv<21> > tmp_5_fu_92_p2;
    sc_signal< sc_lv<23> > grp_fu_123_p3;
    sc_signal< sc_lv<24> > grp_fu_114_p3;
    sc_signal< sc_lv<16> > grp_fu_114_p0;
    sc_signal< sc_lv<9> > grp_fu_114_p1;
    sc_signal< sc_lv<23> > grp_fu_114_p2;
    sc_signal< sc_lv<16> > grp_fu_123_p0;
    sc_signal< sc_lv<7> > grp_fu_123_p1;
    sc_signal< sc_lv<21> > grp_fu_123_p2;
    sc_signal< sc_lv<24> > grp_fu_114_p00;
    sc_signal< sc_lv<24> > grp_fu_114_p20;
    sc_signal< sc_lv<23> > grp_fu_123_p00;
    sc_signal< sc_lv<23> > grp_fu_123_p20;
    static const sc_logic ap_const_logic_1;
    static const bool ap_true;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<24> ap_const_lv24_B7;
    static const sc_lv<23> ap_const_lv23_36;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_return();
    void thread_f_g_fu_55_p3();
    void thread_f_r_fu_48_p3();
    void thread_grp_fu_114_p0();
    void thread_grp_fu_114_p00();
    void thread_grp_fu_114_p1();
    void thread_grp_fu_114_p2();
    void thread_grp_fu_114_p20();
    void thread_grp_fu_123_p0();
    void thread_grp_fu_123_p00();
    void thread_grp_fu_123_p1();
    void thread_grp_fu_123_p2();
    void thread_grp_fu_123_p20();
    void thread_p_shl1_cast_fu_88_p1();
    void thread_p_shl1_fu_81_p3();
    void thread_p_shl_cast_fu_77_p1();
    void thread_p_shl_fu_70_p3();
    void thread_tmp_5_fu_92_p2();
};

}

using namespace ap_rtl;

#endif
