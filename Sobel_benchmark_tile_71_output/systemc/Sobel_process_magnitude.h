// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Sobel_process_magnitude_HH_
#define _Sobel_process_magnitude_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Sobel_fxp_sqrt_9_9_17_17_s.h"
#include "Sobel_mac_muladd_8ns_8ns_16ns_17_1.h"

namespace ap_rtl {

struct Sobel_process_magnitude : public sc_module {
    // Port declarations 6
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<8> > real_data;
    sc_in< sc_lv<8> > imag_data;
    sc_out< sc_lv<9> > ap_return;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    Sobel_process_magnitude(sc_module_name name);
    SC_HAS_PROCESS(Sobel_process_magnitude);

    ~Sobel_process_magnitude();

    sc_trace_file* mVcdFile;

    Sobel_fxp_sqrt_9_9_17_17_s* grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20;
    Sobel_mac_muladd_8ns_8ns_16ns_17_1<1,1,8,8,16,17>* Sobel_mac_muladd_8ns_8ns_16ns_17_1_U4659;
    sc_signal< sc_lv<8> > imag_data_read_reg_48;
    sc_signal< sc_lv<8> > ap_reg_ppstg_imag_data_read_reg_48_pp0_iter1;
    sc_signal< sc_lv<8> > real_data_read_reg_53;
    sc_signal< sc_lv<16> > grad_1_fu_28_p2;
    sc_signal< sc_lv<16> > grad_1_reg_58;
    sc_signal< sc_lv<17> > grp_fu_40_p3;
    sc_signal< sc_lv<17> > sum32_reg_63;
    sc_signal< sc_lv<9> > grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return;
    sc_signal< sc_logic > grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce;
    sc_signal< sc_lv<8> > grad_1_fu_28_p0;
    sc_signal< sc_lv<16> > real_data_cast_fu_25_p1;
    sc_signal< sc_lv<8> > grad_1_fu_28_p1;
    sc_signal< sc_lv<8> > grp_fu_40_p0;
    sc_signal< sc_lv<16> > imag_data_cast_fu_34_p1;
    sc_signal< sc_lv<8> > grp_fu_40_p1;
    sc_signal< sc_lv<16> > grp_fu_40_p2;
    sc_signal< sc_lv<17> > grp_fu_40_p20;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_true;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_return();
    void thread_grad_1_fu_28_p0();
    void thread_grad_1_fu_28_p1();
    void thread_grad_1_fu_28_p2();
    void thread_grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce();
    void thread_grp_fu_40_p0();
    void thread_grp_fu_40_p1();
    void thread_grp_fu_40_p2();
    void thread_grp_fu_40_p20();
    void thread_imag_data_cast_fu_34_p1();
    void thread_real_data_cast_fu_25_p1();
};

}

using namespace ap_rtl;

#endif