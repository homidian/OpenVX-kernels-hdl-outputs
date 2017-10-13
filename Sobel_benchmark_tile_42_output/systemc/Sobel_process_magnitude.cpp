// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Sobel_process_magnitude.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Sobel_process_magnitude::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Sobel_process_magnitude::ap_const_logic_0 = sc_dt::Log_0;
const bool Sobel_process_magnitude::ap_true = true;

Sobel_process_magnitude::Sobel_process_magnitude(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20 = new Sobel_fxp_sqrt_9_9_17_17_s("grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20");
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20->ap_clk(ap_clk);
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20->ap_rst(ap_rst);
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20->in_val_V(sum32_reg_59);
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20->ap_return(grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return);
    grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20->ap_ce(grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce);
    Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773 = new Sobel_mac_muladd_8ns_8ns_16ns_17_1<1,1,8,8,16,17>("Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773");
    Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773->din0(grp_fu_41_p0);
    Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773->din1(grp_fu_41_p1);
    Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773->din2(grp_fu_41_p2);
    Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773->dout(grp_fu_41_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_ce );
    sensitive << ( grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return );

    SC_METHOD(thread_grad_1_fu_29_p0);
    sensitive << ( real_data_cast_fu_25_p1 );

    SC_METHOD(thread_grad_1_fu_29_p1);
    sensitive << ( real_data_cast_fu_25_p1 );

    SC_METHOD(thread_grad_1_fu_29_p2);
    sensitive << ( grad_1_fu_29_p0 );
    sensitive << ( grad_1_fu_29_p1 );

    SC_METHOD(thread_grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce);
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_41_p0);
    sensitive << ( imag_data_cast_fu_35_p1 );

    SC_METHOD(thread_grp_fu_41_p1);
    sensitive << ( imag_data_cast_fu_35_p1 );

    SC_METHOD(thread_grp_fu_41_p2);
    sensitive << ( grp_fu_41_p20 );

    SC_METHOD(thread_grp_fu_41_p20);
    sensitive << ( grad_1_reg_54 );

    SC_METHOD(thread_imag_data_cast_fu_35_p1);
    sensitive << ( imag_data_read_reg_49 );

    SC_METHOD(thread_real_data_cast_fu_25_p1);
    sensitive << ( real_data );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Sobel_process_magnitude_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, real_data, "(port)real_data");
    sc_trace(mVcdFile, imag_data, "(port)imag_data");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, imag_data_read_reg_49, "imag_data_read_reg_49");
    sc_trace(mVcdFile, grad_1_fu_29_p2, "grad_1_fu_29_p2");
    sc_trace(mVcdFile, grad_1_reg_54, "grad_1_reg_54");
    sc_trace(mVcdFile, grp_fu_41_p3, "grp_fu_41_p3");
    sc_trace(mVcdFile, sum32_reg_59, "sum32_reg_59");
    sc_trace(mVcdFile, grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return, "grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return");
    sc_trace(mVcdFile, grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce, "grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce");
    sc_trace(mVcdFile, grad_1_fu_29_p0, "grad_1_fu_29_p0");
    sc_trace(mVcdFile, real_data_cast_fu_25_p1, "real_data_cast_fu_25_p1");
    sc_trace(mVcdFile, grad_1_fu_29_p1, "grad_1_fu_29_p1");
    sc_trace(mVcdFile, grp_fu_41_p0, "grp_fu_41_p0");
    sc_trace(mVcdFile, imag_data_cast_fu_35_p1, "imag_data_cast_fu_35_p1");
    sc_trace(mVcdFile, grp_fu_41_p1, "grp_fu_41_p1");
    sc_trace(mVcdFile, grp_fu_41_p2, "grp_fu_41_p2");
    sc_trace(mVcdFile, grp_fu_41_p20, "grp_fu_41_p20");
#endif

    }
}

Sobel_process_magnitude::~Sobel_process_magnitude() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20;
    delete Sobel_mac_muladd_8ns_8ns_16ns_17_1_U2773;
}

void Sobel_process_magnitude::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) {
        grad_1_reg_54 = grad_1_fu_29_p2.read();
        imag_data_read_reg_49 = imag_data.read();
        sum32_reg_59 = grp_fu_41_p3.read();
    }
}

void Sobel_process_magnitude::thread_ap_return() {
    ap_return = grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_return.read();
}

void Sobel_process_magnitude::thread_grad_1_fu_29_p0() {
    grad_1_fu_29_p0 =  (sc_lv<8>) (real_data_cast_fu_25_p1.read());
}

void Sobel_process_magnitude::thread_grad_1_fu_29_p1() {
    grad_1_fu_29_p1 =  (sc_lv<8>) (real_data_cast_fu_25_p1.read());
}

void Sobel_process_magnitude::thread_grad_1_fu_29_p2() {
    grad_1_fu_29_p2 = (!grad_1_fu_29_p0.read().is_01() || !grad_1_fu_29_p1.read().is_01())? sc_lv<16>(): sc_biguint<8>(grad_1_fu_29_p0.read()) * sc_biguint<8>(grad_1_fu_29_p1.read());
}

void Sobel_process_magnitude::thread_grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce() {
    if (!esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) {
        grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce = ap_const_logic_0;
    } else {
        grp_Sobel_fxp_sqrt_9_9_17_17_s_fu_20_ap_ce = ap_const_logic_1;
    }
}

void Sobel_process_magnitude::thread_grp_fu_41_p0() {
    grp_fu_41_p0 =  (sc_lv<8>) (imag_data_cast_fu_35_p1.read());
}

void Sobel_process_magnitude::thread_grp_fu_41_p1() {
    grp_fu_41_p1 =  (sc_lv<8>) (imag_data_cast_fu_35_p1.read());
}

void Sobel_process_magnitude::thread_grp_fu_41_p2() {
    grp_fu_41_p2 =  (sc_lv<16>) (grp_fu_41_p20.read());
}

void Sobel_process_magnitude::thread_grp_fu_41_p20() {
    grp_fu_41_p20 = esl_zext<17,16>(grad_1_reg_54.read());
}

void Sobel_process_magnitude::thread_imag_data_cast_fu_35_p1() {
    imag_data_cast_fu_35_p1 = esl_zext<16,8>(imag_data_read_reg_49.read());
}

void Sobel_process_magnitude::thread_real_data_cast_fu_25_p1() {
    real_data_cast_fu_25_p1 = esl_zext<16,8>(real_data.read());
}

}

