#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_ap_sig_21() {
    ap_sig_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Sobel_phase_strm::thread_ap_sig_27851() {
    ap_sig_27851 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void Sobel_phase_strm::thread_ap_sig_3710() {
    ap_sig_3710 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Sobel_phase_strm::thread_ap_sig_538() {
    ap_sig_538 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void Sobel_phase_strm::thread_ap_sig_697() {
    ap_sig_697 = ((esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(grad_x_V_pixel_10_status.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(grad_y_V_pixel_10_status.read(), ap_const_logic_0)));
}

void Sobel_phase_strm::thread_ap_sig_702() {
    ap_sig_702 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()) && esl_seteq<1,1,1>(output_V_pixel_11_status.read(), ap_const_logic_0));
}

void Sobel_phase_strm::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_538.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_21.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_ap_sig_cseq_ST_st9_fsm_2() {
    if (ap_sig_27851.read()) {
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_dneg_0_1_fu_2103_p2() {
    dneg_0_1_fu_2103_p2 = (!p_Val2_7_fu_2097_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_fu_2097_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_0_2_fu_7021_p2() {
    dneg_0_2_fu_7021_p2 = (!y_V_1_0_1_fu_7012_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_0_1_fu_7012_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_0_3_fu_7103_p2() {
    dneg_0_3_fu_7103_p2 = (!y_V_1_0_2_fu_7095_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_2_fu_7095_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_4_fu_15155_p2() {
    dneg_0_4_fu_15155_p2 = (!y_V_1_0_3_reg_35844.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_3_reg_35844.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_5_fu_15205_p2() {
    dneg_0_5_fu_15205_p2 = (!y_V_1_0_4_fu_15197_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_4_fu_15197_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_6_fu_21418_p2() {
    dneg_0_6_fu_21418_p2 = (!y_V_1_0_5_reg_37272.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_5_reg_37272.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_7_fu_21460_p2() {
    dneg_0_7_fu_21460_p2 = (!y_V_1_0_6_fu_21452_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_6_fu_21452_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_8_fu_21518_p2() {
    dneg_0_8_fu_21518_p2 = (!y_V_1_0_7_fu_21510_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_7_fu_21510_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_1_fu_3283_p2() {
    dneg_10_1_fu_3283_p2 = (!p_Val2_7_s_fu_3277_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_s_fu_3277_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_10_2_fu_8961_p2() {
    dneg_10_2_fu_8961_p2 = (!y_V_1_10_1_fu_8952_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_10_1_fu_8952_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_10_3_fu_9043_p2() {
    dneg_10_3_fu_9043_p2 = (!y_V_1_10_2_fu_9035_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_2_fu_9035_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_4_fu_16635_p2() {
    dneg_10_4_fu_16635_p2 = (!y_V_1_10_3_reg_36184.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_3_reg_36184.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_5_fu_16685_p2() {
    dneg_10_5_fu_16685_p2 = (!y_V_1_10_4_fu_16677_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_4_fu_16677_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_6_fu_22948_p2() {
    dneg_10_6_fu_22948_p2 = (!y_V_1_10_5_reg_37612.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_5_reg_37612.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_7_fu_22990_p2() {
    dneg_10_7_fu_22990_p2 = (!y_V_1_10_6_fu_22982_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_6_fu_22982_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_8_fu_23048_p2() {
    dneg_10_8_fu_23048_p2 = (!y_V_1_10_7_fu_23040_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_7_fu_23040_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_1_fu_3401_p2() {
    dneg_11_1_fu_3401_p2 = (!p_Val2_7_10_fu_3395_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_10_fu_3395_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_11_2_fu_9155_p2() {
    dneg_11_2_fu_9155_p2 = (!y_V_1_11_1_fu_9146_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_11_1_fu_9146_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_11_3_fu_9237_p2() {
    dneg_11_3_fu_9237_p2 = (!y_V_1_11_2_fu_9229_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_2_fu_9229_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_4_fu_16783_p2() {
    dneg_11_4_fu_16783_p2 = (!y_V_1_11_3_reg_36218.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_3_reg_36218.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_5_fu_16833_p2() {
    dneg_11_5_fu_16833_p2 = (!y_V_1_11_4_fu_16825_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_4_fu_16825_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_6_fu_23101_p2() {
    dneg_11_6_fu_23101_p2 = (!y_V_1_11_5_reg_37646.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_5_reg_37646.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_7_fu_23143_p2() {
    dneg_11_7_fu_23143_p2 = (!y_V_1_11_6_fu_23135_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_6_fu_23135_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_8_fu_23201_p2() {
    dneg_11_8_fu_23201_p2 = (!y_V_1_11_7_fu_23193_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_7_fu_23193_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_1_fu_3519_p2() {
    dneg_12_1_fu_3519_p2 = (!p_Val2_7_11_fu_3513_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_11_fu_3513_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_12_2_fu_9349_p2() {
    dneg_12_2_fu_9349_p2 = (!y_V_1_12_1_fu_9340_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_12_1_fu_9340_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_12_3_fu_9431_p2() {
    dneg_12_3_fu_9431_p2 = (!y_V_1_12_2_fu_9423_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_2_fu_9423_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_4_fu_16931_p2() {
    dneg_12_4_fu_16931_p2 = (!y_V_1_12_3_reg_36252.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_3_reg_36252.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_5_fu_16981_p2() {
    dneg_12_5_fu_16981_p2 = (!y_V_1_12_4_fu_16973_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_4_fu_16973_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_6_fu_23254_p2() {
    dneg_12_6_fu_23254_p2 = (!y_V_1_12_5_reg_37680.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_5_reg_37680.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_7_fu_23296_p2() {
    dneg_12_7_fu_23296_p2 = (!y_V_1_12_6_fu_23288_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_6_fu_23288_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_8_fu_23354_p2() {
    dneg_12_8_fu_23354_p2 = (!y_V_1_12_7_fu_23346_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_7_fu_23346_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_1_fu_3637_p2() {
    dneg_13_1_fu_3637_p2 = (!p_Val2_7_12_fu_3631_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_12_fu_3631_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_13_2_fu_9543_p2() {
    dneg_13_2_fu_9543_p2 = (!y_V_1_13_1_fu_9534_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_13_1_fu_9534_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_13_3_fu_9625_p2() {
    dneg_13_3_fu_9625_p2 = (!y_V_1_13_2_fu_9617_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_2_fu_9617_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_4_fu_17079_p2() {
    dneg_13_4_fu_17079_p2 = (!y_V_1_13_3_reg_36286.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_3_reg_36286.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_5_fu_17129_p2() {
    dneg_13_5_fu_17129_p2 = (!y_V_1_13_4_fu_17121_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_4_fu_17121_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_6_fu_23407_p2() {
    dneg_13_6_fu_23407_p2 = (!y_V_1_13_5_reg_37714.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_5_reg_37714.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_7_fu_23449_p2() {
    dneg_13_7_fu_23449_p2 = (!y_V_1_13_6_fu_23441_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_6_fu_23441_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_8_fu_23507_p2() {
    dneg_13_8_fu_23507_p2 = (!y_V_1_13_7_fu_23499_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_7_fu_23499_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_1_fu_3755_p2() {
    dneg_14_1_fu_3755_p2 = (!p_Val2_7_13_fu_3749_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_13_fu_3749_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_14_2_fu_9737_p2() {
    dneg_14_2_fu_9737_p2 = (!y_V_1_14_1_fu_9728_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_14_1_fu_9728_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_14_3_fu_9819_p2() {
    dneg_14_3_fu_9819_p2 = (!y_V_1_14_2_fu_9811_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_2_fu_9811_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_4_fu_17227_p2() {
    dneg_14_4_fu_17227_p2 = (!y_V_1_14_3_reg_36320.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_3_reg_36320.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_5_fu_17277_p2() {
    dneg_14_5_fu_17277_p2 = (!y_V_1_14_4_fu_17269_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_4_fu_17269_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_6_fu_23560_p2() {
    dneg_14_6_fu_23560_p2 = (!y_V_1_14_5_reg_37748.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_5_reg_37748.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_7_fu_23602_p2() {
    dneg_14_7_fu_23602_p2 = (!y_V_1_14_6_fu_23594_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_6_fu_23594_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_8_fu_23660_p2() {
    dneg_14_8_fu_23660_p2 = (!y_V_1_14_7_fu_23652_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_7_fu_23652_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_1_fu_3873_p2() {
    dneg_15_1_fu_3873_p2 = (!p_Val2_7_14_fu_3867_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_14_fu_3867_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_15_2_fu_9931_p2() {
    dneg_15_2_fu_9931_p2 = (!y_V_1_15_1_fu_9922_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_15_1_fu_9922_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_15_3_fu_10013_p2() {
    dneg_15_3_fu_10013_p2 = (!y_V_1_15_2_fu_10005_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_2_fu_10005_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_4_fu_17375_p2() {
    dneg_15_4_fu_17375_p2 = (!y_V_1_15_3_reg_36354.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_3_reg_36354.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_5_fu_17425_p2() {
    dneg_15_5_fu_17425_p2 = (!y_V_1_15_4_fu_17417_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_4_fu_17417_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_6_fu_23713_p2() {
    dneg_15_6_fu_23713_p2 = (!y_V_1_15_5_reg_37782.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_5_reg_37782.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_7_fu_23755_p2() {
    dneg_15_7_fu_23755_p2 = (!y_V_1_15_6_fu_23747_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_6_fu_23747_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_8_fu_23813_p2() {
    dneg_15_8_fu_23813_p2 = (!y_V_1_15_7_fu_23805_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_7_fu_23805_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_1_fu_3991_p2() {
    dneg_16_1_fu_3991_p2 = (!p_Val2_7_15_fu_3985_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_15_fu_3985_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_16_2_fu_10125_p2() {
    dneg_16_2_fu_10125_p2 = (!y_V_1_16_1_fu_10116_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_16_1_fu_10116_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_16_3_fu_10207_p2() {
    dneg_16_3_fu_10207_p2 = (!y_V_1_16_2_fu_10199_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_2_fu_10199_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_4_fu_17523_p2() {
    dneg_16_4_fu_17523_p2 = (!y_V_1_16_3_reg_36388.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_3_reg_36388.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_5_fu_17573_p2() {
    dneg_16_5_fu_17573_p2 = (!y_V_1_16_4_fu_17565_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_4_fu_17565_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_6_fu_23866_p2() {
    dneg_16_6_fu_23866_p2 = (!y_V_1_16_5_reg_37816.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_5_reg_37816.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_7_fu_23908_p2() {
    dneg_16_7_fu_23908_p2 = (!y_V_1_16_6_fu_23900_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_6_fu_23900_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_8_fu_23966_p2() {
    dneg_16_8_fu_23966_p2 = (!y_V_1_16_7_fu_23958_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_7_fu_23958_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_1_fu_4109_p2() {
    dneg_17_1_fu_4109_p2 = (!p_Val2_7_16_fu_4103_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_16_fu_4103_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_17_2_fu_10319_p2() {
    dneg_17_2_fu_10319_p2 = (!y_V_1_17_1_fu_10310_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_17_1_fu_10310_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_17_3_fu_10401_p2() {
    dneg_17_3_fu_10401_p2 = (!y_V_1_17_2_fu_10393_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_2_fu_10393_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_4_fu_17671_p2() {
    dneg_17_4_fu_17671_p2 = (!y_V_1_17_3_reg_36422.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_3_reg_36422.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_5_fu_17721_p2() {
    dneg_17_5_fu_17721_p2 = (!y_V_1_17_4_fu_17713_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_4_fu_17713_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_6_fu_24019_p2() {
    dneg_17_6_fu_24019_p2 = (!y_V_1_17_5_reg_37850.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_5_reg_37850.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_7_fu_24061_p2() {
    dneg_17_7_fu_24061_p2 = (!y_V_1_17_6_fu_24053_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_6_fu_24053_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_8_fu_24119_p2() {
    dneg_17_8_fu_24119_p2 = (!y_V_1_17_7_fu_24111_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_7_fu_24111_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_1_fu_4227_p2() {
    dneg_18_1_fu_4227_p2 = (!p_Val2_7_17_fu_4221_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_17_fu_4221_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_18_2_fu_10513_p2() {
    dneg_18_2_fu_10513_p2 = (!y_V_1_18_1_fu_10504_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_18_1_fu_10504_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_18_3_fu_10595_p2() {
    dneg_18_3_fu_10595_p2 = (!y_V_1_18_2_fu_10587_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_2_fu_10587_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_4_fu_17819_p2() {
    dneg_18_4_fu_17819_p2 = (!y_V_1_18_3_reg_36456.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_3_reg_36456.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_5_fu_17869_p2() {
    dneg_18_5_fu_17869_p2 = (!y_V_1_18_4_fu_17861_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_4_fu_17861_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_6_fu_24172_p2() {
    dneg_18_6_fu_24172_p2 = (!y_V_1_18_5_reg_37884.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_5_reg_37884.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_7_fu_24214_p2() {
    dneg_18_7_fu_24214_p2 = (!y_V_1_18_6_fu_24206_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_6_fu_24206_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_8_fu_24272_p2() {
    dneg_18_8_fu_24272_p2 = (!y_V_1_18_7_fu_24264_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_7_fu_24264_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_1_fu_4345_p2() {
    dneg_19_1_fu_4345_p2 = (!p_Val2_7_18_fu_4339_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_18_fu_4339_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_19_2_fu_10707_p2() {
    dneg_19_2_fu_10707_p2 = (!y_V_1_19_1_fu_10698_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_19_1_fu_10698_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_19_3_fu_10789_p2() {
    dneg_19_3_fu_10789_p2 = (!y_V_1_19_2_fu_10781_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_2_fu_10781_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_4_fu_17967_p2() {
    dneg_19_4_fu_17967_p2 = (!y_V_1_19_3_reg_36490.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_3_reg_36490.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_5_fu_18017_p2() {
    dneg_19_5_fu_18017_p2 = (!y_V_1_19_4_fu_18009_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_4_fu_18009_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_6_fu_24325_p2() {
    dneg_19_6_fu_24325_p2 = (!y_V_1_19_5_reg_37918.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_5_reg_37918.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_7_fu_24367_p2() {
    dneg_19_7_fu_24367_p2 = (!y_V_1_19_6_fu_24359_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_6_fu_24359_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_8_fu_24425_p2() {
    dneg_19_8_fu_24425_p2 = (!y_V_1_19_7_fu_24417_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_7_fu_24417_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_1_fu_2221_p2() {
    dneg_1_1_fu_2221_p2 = (!p_Val2_7_1_fu_2215_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_1_fu_2215_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_1_2_fu_7215_p2() {
    dneg_1_2_fu_7215_p2 = (!y_V_1_1_1_fu_7206_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_1_1_fu_7206_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_1_3_fu_7297_p2() {
    dneg_1_3_fu_7297_p2 = (!y_V_1_1_2_fu_7289_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_2_fu_7289_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_4_fu_15303_p2() {
    dneg_1_4_fu_15303_p2 = (!y_V_1_1_3_reg_35878.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_3_reg_35878.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_5_fu_15353_p2() {
    dneg_1_5_fu_15353_p2 = (!y_V_1_1_4_fu_15345_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_4_fu_15345_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_6_fu_21571_p2() {
    dneg_1_6_fu_21571_p2 = (!y_V_1_1_5_reg_37306.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_5_reg_37306.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_7_fu_21613_p2() {
    dneg_1_7_fu_21613_p2 = (!y_V_1_1_6_fu_21605_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_6_fu_21605_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_8_fu_21671_p2() {
    dneg_1_8_fu_21671_p2 = (!y_V_1_1_7_fu_21663_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_7_fu_21663_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_1_fu_4463_p2() {
    dneg_20_1_fu_4463_p2 = (!p_Val2_7_19_fu_4457_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_19_fu_4457_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_20_2_fu_10901_p2() {
    dneg_20_2_fu_10901_p2 = (!y_V_1_20_1_fu_10892_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_20_1_fu_10892_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_20_3_fu_10983_p2() {
    dneg_20_3_fu_10983_p2 = (!y_V_1_20_2_fu_10975_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_2_fu_10975_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_4_fu_18115_p2() {
    dneg_20_4_fu_18115_p2 = (!y_V_1_20_3_reg_36524.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_3_reg_36524.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_5_fu_18165_p2() {
    dneg_20_5_fu_18165_p2 = (!y_V_1_20_4_fu_18157_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_4_fu_18157_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_6_fu_24478_p2() {
    dneg_20_6_fu_24478_p2 = (!y_V_1_20_5_reg_37952.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_5_reg_37952.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_7_fu_24520_p2() {
    dneg_20_7_fu_24520_p2 = (!y_V_1_20_6_fu_24512_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_6_fu_24512_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_8_fu_24578_p2() {
    dneg_20_8_fu_24578_p2 = (!y_V_1_20_7_fu_24570_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_7_fu_24570_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_1_fu_4581_p2() {
    dneg_21_1_fu_4581_p2 = (!p_Val2_7_20_fu_4575_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_20_fu_4575_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_21_2_fu_11095_p2() {
    dneg_21_2_fu_11095_p2 = (!y_V_1_21_1_fu_11086_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_21_1_fu_11086_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_21_3_fu_11177_p2() {
    dneg_21_3_fu_11177_p2 = (!y_V_1_21_2_fu_11169_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_2_fu_11169_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_4_fu_18263_p2() {
    dneg_21_4_fu_18263_p2 = (!y_V_1_21_3_reg_36558.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_3_reg_36558.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_5_fu_18313_p2() {
    dneg_21_5_fu_18313_p2 = (!y_V_1_21_4_fu_18305_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_4_fu_18305_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_6_fu_24631_p2() {
    dneg_21_6_fu_24631_p2 = (!y_V_1_21_5_reg_37986.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_5_reg_37986.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_7_fu_24673_p2() {
    dneg_21_7_fu_24673_p2 = (!y_V_1_21_6_fu_24665_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_6_fu_24665_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_8_fu_24731_p2() {
    dneg_21_8_fu_24731_p2 = (!y_V_1_21_7_fu_24723_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_7_fu_24723_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_1_fu_4699_p2() {
    dneg_22_1_fu_4699_p2 = (!p_Val2_7_21_fu_4693_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_21_fu_4693_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_22_2_fu_11289_p2() {
    dneg_22_2_fu_11289_p2 = (!y_V_1_22_1_fu_11280_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_22_1_fu_11280_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_22_3_fu_11371_p2() {
    dneg_22_3_fu_11371_p2 = (!y_V_1_22_2_fu_11363_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_2_fu_11363_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_4_fu_18411_p2() {
    dneg_22_4_fu_18411_p2 = (!y_V_1_22_3_reg_36592.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_3_reg_36592.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_5_fu_18461_p2() {
    dneg_22_5_fu_18461_p2 = (!y_V_1_22_4_fu_18453_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_4_fu_18453_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_6_fu_24784_p2() {
    dneg_22_6_fu_24784_p2 = (!y_V_1_22_5_reg_38020.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_5_reg_38020.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_7_fu_24826_p2() {
    dneg_22_7_fu_24826_p2 = (!y_V_1_22_6_fu_24818_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_6_fu_24818_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_8_fu_24884_p2() {
    dneg_22_8_fu_24884_p2 = (!y_V_1_22_7_fu_24876_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_7_fu_24876_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_1_fu_4817_p2() {
    dneg_23_1_fu_4817_p2 = (!p_Val2_7_22_fu_4811_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_22_fu_4811_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_23_2_fu_11483_p2() {
    dneg_23_2_fu_11483_p2 = (!y_V_1_23_1_fu_11474_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_23_1_fu_11474_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_23_3_fu_11565_p2() {
    dneg_23_3_fu_11565_p2 = (!y_V_1_23_2_fu_11557_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_2_fu_11557_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_4_fu_18559_p2() {
    dneg_23_4_fu_18559_p2 = (!y_V_1_23_3_reg_36626.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_3_reg_36626.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_5_fu_18609_p2() {
    dneg_23_5_fu_18609_p2 = (!y_V_1_23_4_fu_18601_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_4_fu_18601_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_6_fu_24937_p2() {
    dneg_23_6_fu_24937_p2 = (!y_V_1_23_5_reg_38054.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_5_reg_38054.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_7_fu_24979_p2() {
    dneg_23_7_fu_24979_p2 = (!y_V_1_23_6_fu_24971_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_6_fu_24971_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_8_fu_25037_p2() {
    dneg_23_8_fu_25037_p2 = (!y_V_1_23_7_fu_25029_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_7_fu_25029_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_1_fu_4935_p2() {
    dneg_24_1_fu_4935_p2 = (!p_Val2_7_23_fu_4929_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_23_fu_4929_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_24_2_fu_11677_p2() {
    dneg_24_2_fu_11677_p2 = (!y_V_1_24_1_fu_11668_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_24_1_fu_11668_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_24_3_fu_11759_p2() {
    dneg_24_3_fu_11759_p2 = (!y_V_1_24_2_fu_11751_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_2_fu_11751_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_4_fu_18707_p2() {
    dneg_24_4_fu_18707_p2 = (!y_V_1_24_3_reg_36660.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_3_reg_36660.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_5_fu_18757_p2() {
    dneg_24_5_fu_18757_p2 = (!y_V_1_24_4_fu_18749_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_4_fu_18749_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_6_fu_25090_p2() {
    dneg_24_6_fu_25090_p2 = (!y_V_1_24_5_reg_38088.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_5_reg_38088.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_7_fu_25132_p2() {
    dneg_24_7_fu_25132_p2 = (!y_V_1_24_6_fu_25124_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_6_fu_25124_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_8_fu_25190_p2() {
    dneg_24_8_fu_25190_p2 = (!y_V_1_24_7_fu_25182_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_7_fu_25182_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_1_fu_5053_p2() {
    dneg_25_1_fu_5053_p2 = (!p_Val2_7_24_fu_5047_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_24_fu_5047_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_25_2_fu_11871_p2() {
    dneg_25_2_fu_11871_p2 = (!y_V_1_25_1_fu_11862_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_25_1_fu_11862_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_25_3_fu_11953_p2() {
    dneg_25_3_fu_11953_p2 = (!y_V_1_25_2_fu_11945_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_2_fu_11945_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_4_fu_18855_p2() {
    dneg_25_4_fu_18855_p2 = (!y_V_1_25_3_reg_36694.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_3_reg_36694.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_5_fu_18905_p2() {
    dneg_25_5_fu_18905_p2 = (!y_V_1_25_4_fu_18897_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_4_fu_18897_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_6_fu_25243_p2() {
    dneg_25_6_fu_25243_p2 = (!y_V_1_25_5_reg_38122.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_5_reg_38122.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_7_fu_25285_p2() {
    dneg_25_7_fu_25285_p2 = (!y_V_1_25_6_fu_25277_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_6_fu_25277_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_8_fu_25343_p2() {
    dneg_25_8_fu_25343_p2 = (!y_V_1_25_7_fu_25335_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_7_fu_25335_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_1_fu_5171_p2() {
    dneg_26_1_fu_5171_p2 = (!p_Val2_7_25_fu_5165_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_25_fu_5165_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_26_2_fu_12065_p2() {
    dneg_26_2_fu_12065_p2 = (!y_V_1_26_1_fu_12056_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_26_1_fu_12056_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_26_3_fu_12147_p2() {
    dneg_26_3_fu_12147_p2 = (!y_V_1_26_2_fu_12139_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_2_fu_12139_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_4_fu_19003_p2() {
    dneg_26_4_fu_19003_p2 = (!y_V_1_26_3_reg_36728.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_3_reg_36728.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_5_fu_19053_p2() {
    dneg_26_5_fu_19053_p2 = (!y_V_1_26_4_fu_19045_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_4_fu_19045_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_6_fu_25396_p2() {
    dneg_26_6_fu_25396_p2 = (!y_V_1_26_5_reg_38156.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_5_reg_38156.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_7_fu_25438_p2() {
    dneg_26_7_fu_25438_p2 = (!y_V_1_26_6_fu_25430_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_6_fu_25430_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_8_fu_25496_p2() {
    dneg_26_8_fu_25496_p2 = (!y_V_1_26_7_fu_25488_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_7_fu_25488_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_1_fu_5289_p2() {
    dneg_27_1_fu_5289_p2 = (!p_Val2_7_26_fu_5283_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_26_fu_5283_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_27_2_fu_12259_p2() {
    dneg_27_2_fu_12259_p2 = (!y_V_1_27_1_fu_12250_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_27_1_fu_12250_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_27_3_fu_12341_p2() {
    dneg_27_3_fu_12341_p2 = (!y_V_1_27_2_fu_12333_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_2_fu_12333_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_4_fu_19151_p2() {
    dneg_27_4_fu_19151_p2 = (!y_V_1_27_3_reg_36762.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_3_reg_36762.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_5_fu_19201_p2() {
    dneg_27_5_fu_19201_p2 = (!y_V_1_27_4_fu_19193_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_4_fu_19193_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_6_fu_25549_p2() {
    dneg_27_6_fu_25549_p2 = (!y_V_1_27_5_reg_38190.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_5_reg_38190.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_7_fu_25591_p2() {
    dneg_27_7_fu_25591_p2 = (!y_V_1_27_6_fu_25583_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_6_fu_25583_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_8_fu_25649_p2() {
    dneg_27_8_fu_25649_p2 = (!y_V_1_27_7_fu_25641_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_7_fu_25641_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_1_fu_5407_p2() {
    dneg_28_1_fu_5407_p2 = (!p_Val2_7_27_fu_5401_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_27_fu_5401_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_28_2_fu_12453_p2() {
    dneg_28_2_fu_12453_p2 = (!y_V_1_28_1_fu_12444_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_28_1_fu_12444_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_28_3_fu_12535_p2() {
    dneg_28_3_fu_12535_p2 = (!y_V_1_28_2_fu_12527_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_2_fu_12527_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_4_fu_19299_p2() {
    dneg_28_4_fu_19299_p2 = (!y_V_1_28_3_reg_36796.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_3_reg_36796.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_5_fu_19349_p2() {
    dneg_28_5_fu_19349_p2 = (!y_V_1_28_4_fu_19341_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_4_fu_19341_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_6_fu_25702_p2() {
    dneg_28_6_fu_25702_p2 = (!y_V_1_28_5_reg_38224.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_5_reg_38224.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_7_fu_25744_p2() {
    dneg_28_7_fu_25744_p2 = (!y_V_1_28_6_fu_25736_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_6_fu_25736_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_8_fu_25802_p2() {
    dneg_28_8_fu_25802_p2 = (!y_V_1_28_7_fu_25794_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_7_fu_25794_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_1_fu_5525_p2() {
    dneg_29_1_fu_5525_p2 = (!p_Val2_7_28_fu_5519_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_28_fu_5519_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_29_2_fu_12647_p2() {
    dneg_29_2_fu_12647_p2 = (!y_V_1_29_1_fu_12638_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_29_1_fu_12638_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_29_3_fu_12729_p2() {
    dneg_29_3_fu_12729_p2 = (!y_V_1_29_2_fu_12721_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_2_fu_12721_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_4_fu_19447_p2() {
    dneg_29_4_fu_19447_p2 = (!y_V_1_29_3_reg_36830.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_3_reg_36830.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_5_fu_19497_p2() {
    dneg_29_5_fu_19497_p2 = (!y_V_1_29_4_fu_19489_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_4_fu_19489_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_6_fu_25855_p2() {
    dneg_29_6_fu_25855_p2 = (!y_V_1_29_5_reg_38258.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_5_reg_38258.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_7_fu_25897_p2() {
    dneg_29_7_fu_25897_p2 = (!y_V_1_29_6_fu_25889_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_6_fu_25889_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_8_fu_25955_p2() {
    dneg_29_8_fu_25955_p2 = (!y_V_1_29_7_fu_25947_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_7_fu_25947_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_1_fu_2339_p2() {
    dneg_2_1_fu_2339_p2 = (!p_Val2_7_2_fu_2333_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_2_fu_2333_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_2_2_fu_7409_p2() {
    dneg_2_2_fu_7409_p2 = (!y_V_1_2_1_fu_7400_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_2_1_fu_7400_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_2_3_fu_7491_p2() {
    dneg_2_3_fu_7491_p2 = (!y_V_1_2_2_fu_7483_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_2_fu_7483_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_4_fu_15451_p2() {
    dneg_2_4_fu_15451_p2 = (!y_V_1_2_3_reg_35912.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_3_reg_35912.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_5_fu_15501_p2() {
    dneg_2_5_fu_15501_p2 = (!y_V_1_2_4_fu_15493_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_4_fu_15493_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_6_fu_21724_p2() {
    dneg_2_6_fu_21724_p2 = (!y_V_1_2_5_reg_37340.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_5_reg_37340.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_7_fu_21766_p2() {
    dneg_2_7_fu_21766_p2 = (!y_V_1_2_6_fu_21758_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_6_fu_21758_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_8_fu_21824_p2() {
    dneg_2_8_fu_21824_p2 = (!y_V_1_2_7_fu_21816_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_7_fu_21816_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_1_fu_5643_p2() {
    dneg_30_1_fu_5643_p2 = (!p_Val2_7_29_fu_5637_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_29_fu_5637_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_30_2_fu_12841_p2() {
    dneg_30_2_fu_12841_p2 = (!y_V_1_30_1_fu_12832_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_30_1_fu_12832_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_30_3_fu_12923_p2() {
    dneg_30_3_fu_12923_p2 = (!y_V_1_30_2_fu_12915_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_2_fu_12915_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_4_fu_19595_p2() {
    dneg_30_4_fu_19595_p2 = (!y_V_1_30_3_reg_36864.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_3_reg_36864.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_5_fu_19645_p2() {
    dneg_30_5_fu_19645_p2 = (!y_V_1_30_4_fu_19637_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_4_fu_19637_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_6_fu_26008_p2() {
    dneg_30_6_fu_26008_p2 = (!y_V_1_30_5_reg_38292.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_5_reg_38292.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_7_fu_26050_p2() {
    dneg_30_7_fu_26050_p2 = (!y_V_1_30_6_fu_26042_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_6_fu_26042_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_8_fu_26108_p2() {
    dneg_30_8_fu_26108_p2 = (!y_V_1_30_7_fu_26100_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_7_fu_26100_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_1_fu_5761_p2() {
    dneg_31_1_fu_5761_p2 = (!p_Val2_7_30_fu_5755_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_30_fu_5755_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_31_2_fu_13035_p2() {
    dneg_31_2_fu_13035_p2 = (!y_V_1_31_1_fu_13026_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_31_1_fu_13026_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_31_3_fu_13117_p2() {
    dneg_31_3_fu_13117_p2 = (!y_V_1_31_2_fu_13109_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_2_fu_13109_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_4_fu_19743_p2() {
    dneg_31_4_fu_19743_p2 = (!y_V_1_31_3_reg_36898.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_3_reg_36898.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_5_fu_19793_p2() {
    dneg_31_5_fu_19793_p2 = (!y_V_1_31_4_fu_19785_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_4_fu_19785_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_6_fu_26161_p2() {
    dneg_31_6_fu_26161_p2 = (!y_V_1_31_5_reg_38326.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_5_reg_38326.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_7_fu_26203_p2() {
    dneg_31_7_fu_26203_p2 = (!y_V_1_31_6_fu_26195_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_6_fu_26195_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_8_fu_26261_p2() {
    dneg_31_8_fu_26261_p2 = (!y_V_1_31_7_fu_26253_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_7_fu_26253_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_1_fu_5879_p2() {
    dneg_32_1_fu_5879_p2 = (!p_Val2_7_31_fu_5873_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_31_fu_5873_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_32_2_fu_13229_p2() {
    dneg_32_2_fu_13229_p2 = (!y_V_1_32_1_fu_13220_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_32_1_fu_13220_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_32_3_fu_13311_p2() {
    dneg_32_3_fu_13311_p2 = (!y_V_1_32_2_fu_13303_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_2_fu_13303_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_4_fu_19891_p2() {
    dneg_32_4_fu_19891_p2 = (!y_V_1_32_3_reg_36932.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_3_reg_36932.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_5_fu_19941_p2() {
    dneg_32_5_fu_19941_p2 = (!y_V_1_32_4_fu_19933_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_4_fu_19933_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_6_fu_26314_p2() {
    dneg_32_6_fu_26314_p2 = (!y_V_1_32_5_reg_38360.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_5_reg_38360.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_7_fu_26356_p2() {
    dneg_32_7_fu_26356_p2 = (!y_V_1_32_6_fu_26348_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_6_fu_26348_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_8_fu_26414_p2() {
    dneg_32_8_fu_26414_p2 = (!y_V_1_32_7_fu_26406_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_7_fu_26406_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_1_fu_5997_p2() {
    dneg_33_1_fu_5997_p2 = (!p_Val2_7_32_fu_5991_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_32_fu_5991_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_33_2_fu_13423_p2() {
    dneg_33_2_fu_13423_p2 = (!y_V_1_33_1_fu_13414_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_33_1_fu_13414_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_33_3_fu_13505_p2() {
    dneg_33_3_fu_13505_p2 = (!y_V_1_33_2_fu_13497_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_2_fu_13497_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_4_fu_20039_p2() {
    dneg_33_4_fu_20039_p2 = (!y_V_1_33_3_reg_36966.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_3_reg_36966.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_5_fu_20089_p2() {
    dneg_33_5_fu_20089_p2 = (!y_V_1_33_4_fu_20081_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_4_fu_20081_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_6_fu_26467_p2() {
    dneg_33_6_fu_26467_p2 = (!y_V_1_33_5_reg_38394.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_5_reg_38394.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_7_fu_26509_p2() {
    dneg_33_7_fu_26509_p2 = (!y_V_1_33_6_fu_26501_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_6_fu_26501_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_8_fu_26567_p2() {
    dneg_33_8_fu_26567_p2 = (!y_V_1_33_7_fu_26559_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_7_fu_26559_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_1_fu_6115_p2() {
    dneg_34_1_fu_6115_p2 = (!p_Val2_7_33_fu_6109_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_33_fu_6109_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_34_2_fu_13617_p2() {
    dneg_34_2_fu_13617_p2 = (!y_V_1_34_1_fu_13608_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_34_1_fu_13608_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_34_3_fu_13699_p2() {
    dneg_34_3_fu_13699_p2 = (!y_V_1_34_2_fu_13691_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_2_fu_13691_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_4_fu_20187_p2() {
    dneg_34_4_fu_20187_p2 = (!y_V_1_34_3_reg_37000.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_3_reg_37000.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_5_fu_20237_p2() {
    dneg_34_5_fu_20237_p2 = (!y_V_1_34_4_fu_20229_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_4_fu_20229_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_6_fu_26620_p2() {
    dneg_34_6_fu_26620_p2 = (!y_V_1_34_5_reg_38428.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_5_reg_38428.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_7_fu_26662_p2() {
    dneg_34_7_fu_26662_p2 = (!y_V_1_34_6_fu_26654_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_6_fu_26654_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_8_fu_26720_p2() {
    dneg_34_8_fu_26720_p2 = (!y_V_1_34_7_fu_26712_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_7_fu_26712_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_1_fu_6233_p2() {
    dneg_35_1_fu_6233_p2 = (!p_Val2_7_34_fu_6227_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_34_fu_6227_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_35_2_fu_13811_p2() {
    dneg_35_2_fu_13811_p2 = (!y_V_1_35_1_fu_13802_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_35_1_fu_13802_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_35_3_fu_13893_p2() {
    dneg_35_3_fu_13893_p2 = (!y_V_1_35_2_fu_13885_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_2_fu_13885_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_4_fu_20335_p2() {
    dneg_35_4_fu_20335_p2 = (!y_V_1_35_3_reg_37034.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_3_reg_37034.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_5_fu_20385_p2() {
    dneg_35_5_fu_20385_p2 = (!y_V_1_35_4_fu_20377_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_4_fu_20377_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_6_fu_26773_p2() {
    dneg_35_6_fu_26773_p2 = (!y_V_1_35_5_reg_38462.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_5_reg_38462.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_7_fu_26815_p2() {
    dneg_35_7_fu_26815_p2 = (!y_V_1_35_6_fu_26807_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_6_fu_26807_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_8_fu_26873_p2() {
    dneg_35_8_fu_26873_p2 = (!y_V_1_35_7_fu_26865_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_7_fu_26865_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_1_fu_6351_p2() {
    dneg_36_1_fu_6351_p2 = (!p_Val2_7_35_fu_6345_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_35_fu_6345_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_36_2_fu_14005_p2() {
    dneg_36_2_fu_14005_p2 = (!y_V_1_36_1_fu_13996_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_36_1_fu_13996_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_36_3_fu_14087_p2() {
    dneg_36_3_fu_14087_p2 = (!y_V_1_36_2_fu_14079_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_2_fu_14079_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_4_fu_20483_p2() {
    dneg_36_4_fu_20483_p2 = (!y_V_1_36_3_reg_37068.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_3_reg_37068.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_5_fu_20533_p2() {
    dneg_36_5_fu_20533_p2 = (!y_V_1_36_4_fu_20525_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_4_fu_20525_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_6_fu_26926_p2() {
    dneg_36_6_fu_26926_p2 = (!y_V_1_36_5_reg_38496.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_5_reg_38496.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_7_fu_26968_p2() {
    dneg_36_7_fu_26968_p2 = (!y_V_1_36_6_fu_26960_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_6_fu_26960_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_8_fu_27026_p2() {
    dneg_36_8_fu_27026_p2 = (!y_V_1_36_7_fu_27018_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_7_fu_27018_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_1_fu_6469_p2() {
    dneg_37_1_fu_6469_p2 = (!p_Val2_7_36_fu_6463_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_36_fu_6463_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_37_2_fu_14199_p2() {
    dneg_37_2_fu_14199_p2 = (!y_V_1_37_1_fu_14190_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_37_1_fu_14190_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_37_3_fu_14281_p2() {
    dneg_37_3_fu_14281_p2 = (!y_V_1_37_2_fu_14273_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_2_fu_14273_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_4_fu_20631_p2() {
    dneg_37_4_fu_20631_p2 = (!y_V_1_37_3_reg_37102.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_3_reg_37102.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_5_fu_20681_p2() {
    dneg_37_5_fu_20681_p2 = (!y_V_1_37_4_fu_20673_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_4_fu_20673_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_6_fu_27079_p2() {
    dneg_37_6_fu_27079_p2 = (!y_V_1_37_5_reg_38530.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_5_reg_38530.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_7_fu_27121_p2() {
    dneg_37_7_fu_27121_p2 = (!y_V_1_37_6_fu_27113_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_6_fu_27113_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_8_fu_27179_p2() {
    dneg_37_8_fu_27179_p2 = (!y_V_1_37_7_fu_27171_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_7_fu_27171_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_1_fu_6587_p2() {
    dneg_38_1_fu_6587_p2 = (!p_Val2_7_37_fu_6581_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_37_fu_6581_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_38_2_fu_14393_p2() {
    dneg_38_2_fu_14393_p2 = (!y_V_1_38_1_fu_14384_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_38_1_fu_14384_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_38_3_fu_14475_p2() {
    dneg_38_3_fu_14475_p2 = (!y_V_1_38_2_fu_14467_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_2_fu_14467_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_4_fu_20779_p2() {
    dneg_38_4_fu_20779_p2 = (!y_V_1_38_3_reg_37136.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_3_reg_37136.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_5_fu_20829_p2() {
    dneg_38_5_fu_20829_p2 = (!y_V_1_38_4_fu_20821_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_4_fu_20821_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_6_fu_27232_p2() {
    dneg_38_6_fu_27232_p2 = (!y_V_1_38_5_reg_38564.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_5_reg_38564.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_7_fu_27274_p2() {
    dneg_38_7_fu_27274_p2 = (!y_V_1_38_6_fu_27266_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_6_fu_27266_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_8_fu_27332_p2() {
    dneg_38_8_fu_27332_p2 = (!y_V_1_38_7_fu_27324_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_7_fu_27324_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_1_fu_6705_p2() {
    dneg_39_1_fu_6705_p2 = (!p_Val2_7_38_fu_6699_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_38_fu_6699_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_39_2_fu_14587_p2() {
    dneg_39_2_fu_14587_p2 = (!y_V_1_39_1_fu_14578_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_39_1_fu_14578_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_39_3_fu_14669_p2() {
    dneg_39_3_fu_14669_p2 = (!y_V_1_39_2_fu_14661_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_2_fu_14661_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_4_fu_20927_p2() {
    dneg_39_4_fu_20927_p2 = (!y_V_1_39_3_reg_37170.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_3_reg_37170.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_5_fu_20977_p2() {
    dneg_39_5_fu_20977_p2 = (!y_V_1_39_4_fu_20969_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_4_fu_20969_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_6_fu_27385_p2() {
    dneg_39_6_fu_27385_p2 = (!y_V_1_39_5_reg_38598.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_5_reg_38598.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_7_fu_27427_p2() {
    dneg_39_7_fu_27427_p2 = (!y_V_1_39_6_fu_27419_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_6_fu_27419_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_8_fu_27485_p2() {
    dneg_39_8_fu_27485_p2 = (!y_V_1_39_7_fu_27477_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_7_fu_27477_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_1_fu_2457_p2() {
    dneg_3_1_fu_2457_p2 = (!p_Val2_7_3_fu_2451_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_3_fu_2451_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_3_2_fu_7603_p2() {
    dneg_3_2_fu_7603_p2 = (!y_V_1_3_1_fu_7594_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_3_1_fu_7594_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_3_3_fu_7685_p2() {
    dneg_3_3_fu_7685_p2 = (!y_V_1_3_2_fu_7677_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_2_fu_7677_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_4_fu_15599_p2() {
    dneg_3_4_fu_15599_p2 = (!y_V_1_3_3_reg_35946.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_3_reg_35946.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_5_fu_15649_p2() {
    dneg_3_5_fu_15649_p2 = (!y_V_1_3_4_fu_15641_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_4_fu_15641_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_6_fu_21877_p2() {
    dneg_3_6_fu_21877_p2 = (!y_V_1_3_5_reg_37374.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_5_reg_37374.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_7_fu_21919_p2() {
    dneg_3_7_fu_21919_p2 = (!y_V_1_3_6_fu_21911_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_6_fu_21911_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_8_fu_21977_p2() {
    dneg_3_8_fu_21977_p2 = (!y_V_1_3_7_fu_21969_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_7_fu_21969_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_1_fu_6823_p2() {
    dneg_40_1_fu_6823_p2 = (!p_Val2_7_39_fu_6817_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_39_fu_6817_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_40_2_fu_14781_p2() {
    dneg_40_2_fu_14781_p2 = (!y_V_1_40_1_fu_14772_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_40_1_fu_14772_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_40_3_fu_14863_p2() {
    dneg_40_3_fu_14863_p2 = (!y_V_1_40_2_fu_14855_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_2_fu_14855_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_4_fu_21075_p2() {
    dneg_40_4_fu_21075_p2 = (!y_V_1_40_3_reg_37204.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_3_reg_37204.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_5_fu_21125_p2() {
    dneg_40_5_fu_21125_p2 = (!y_V_1_40_4_fu_21117_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_4_fu_21117_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_6_fu_27538_p2() {
    dneg_40_6_fu_27538_p2 = (!y_V_1_40_5_reg_38632.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_5_reg_38632.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_7_fu_27580_p2() {
    dneg_40_7_fu_27580_p2 = (!y_V_1_40_6_fu_27572_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_6_fu_27572_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_8_fu_27638_p2() {
    dneg_40_8_fu_27638_p2 = (!y_V_1_40_7_fu_27630_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_7_fu_27630_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_1_fu_6941_p2() {
    dneg_41_1_fu_6941_p2 = (!p_Val2_7_40_fu_6935_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_40_fu_6935_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_41_2_fu_14975_p2() {
    dneg_41_2_fu_14975_p2 = (!y_V_1_41_1_fu_14966_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_41_1_fu_14966_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_41_3_fu_15057_p2() {
    dneg_41_3_fu_15057_p2 = (!y_V_1_41_2_fu_15049_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_2_fu_15049_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_4_fu_21223_p2() {
    dneg_41_4_fu_21223_p2 = (!y_V_1_41_3_reg_37238.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_3_reg_37238.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_5_fu_21273_p2() {
    dneg_41_5_fu_21273_p2 = (!y_V_1_41_4_fu_21265_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_4_fu_21265_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_6_fu_27691_p2() {
    dneg_41_6_fu_27691_p2 = (!y_V_1_41_5_reg_38666.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_5_reg_38666.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_7_fu_27733_p2() {
    dneg_41_7_fu_27733_p2 = (!y_V_1_41_6_fu_27725_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_6_fu_27725_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_8_fu_27791_p2() {
    dneg_41_8_fu_27791_p2 = (!y_V_1_41_7_fu_27783_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_7_fu_27783_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_1_fu_2575_p2() {
    dneg_4_1_fu_2575_p2 = (!p_Val2_7_4_fu_2569_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_4_fu_2569_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_4_2_fu_7797_p2() {
    dneg_4_2_fu_7797_p2 = (!y_V_1_4_1_fu_7788_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_4_1_fu_7788_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_4_3_fu_7879_p2() {
    dneg_4_3_fu_7879_p2 = (!y_V_1_4_2_fu_7871_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_2_fu_7871_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_4_fu_15747_p2() {
    dneg_4_4_fu_15747_p2 = (!y_V_1_4_3_reg_35980.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_3_reg_35980.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_5_fu_15797_p2() {
    dneg_4_5_fu_15797_p2 = (!y_V_1_4_4_fu_15789_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_4_fu_15789_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_6_fu_22030_p2() {
    dneg_4_6_fu_22030_p2 = (!y_V_1_4_5_reg_37408.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_5_reg_37408.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_7_fu_22072_p2() {
    dneg_4_7_fu_22072_p2 = (!y_V_1_4_6_fu_22064_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_6_fu_22064_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_8_fu_22130_p2() {
    dneg_4_8_fu_22130_p2 = (!y_V_1_4_7_fu_22122_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_7_fu_22122_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_1_fu_2693_p2() {
    dneg_5_1_fu_2693_p2 = (!p_Val2_7_5_fu_2687_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_5_fu_2687_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_5_2_fu_7991_p2() {
    dneg_5_2_fu_7991_p2 = (!y_V_1_5_1_fu_7982_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_5_1_fu_7982_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_5_3_fu_8073_p2() {
    dneg_5_3_fu_8073_p2 = (!y_V_1_5_2_fu_8065_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_2_fu_8065_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_4_fu_15895_p2() {
    dneg_5_4_fu_15895_p2 = (!y_V_1_5_3_reg_36014.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_3_reg_36014.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_5_fu_15945_p2() {
    dneg_5_5_fu_15945_p2 = (!y_V_1_5_4_fu_15937_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_4_fu_15937_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_6_fu_22183_p2() {
    dneg_5_6_fu_22183_p2 = (!y_V_1_5_5_reg_37442.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_5_reg_37442.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_7_fu_22225_p2() {
    dneg_5_7_fu_22225_p2 = (!y_V_1_5_6_fu_22217_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_6_fu_22217_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_8_fu_22283_p2() {
    dneg_5_8_fu_22283_p2 = (!y_V_1_5_7_fu_22275_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_7_fu_22275_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_1_fu_2811_p2() {
    dneg_6_1_fu_2811_p2 = (!p_Val2_7_6_fu_2805_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_6_fu_2805_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_6_2_fu_8185_p2() {
    dneg_6_2_fu_8185_p2 = (!y_V_1_6_1_fu_8176_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_6_1_fu_8176_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_6_3_fu_8267_p2() {
    dneg_6_3_fu_8267_p2 = (!y_V_1_6_2_fu_8259_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_2_fu_8259_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_4_fu_16043_p2() {
    dneg_6_4_fu_16043_p2 = (!y_V_1_6_3_reg_36048.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_3_reg_36048.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_5_fu_16093_p2() {
    dneg_6_5_fu_16093_p2 = (!y_V_1_6_4_fu_16085_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_4_fu_16085_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_6_fu_22336_p2() {
    dneg_6_6_fu_22336_p2 = (!y_V_1_6_5_reg_37476.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_5_reg_37476.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_7_fu_22378_p2() {
    dneg_6_7_fu_22378_p2 = (!y_V_1_6_6_fu_22370_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_6_fu_22370_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_8_fu_22436_p2() {
    dneg_6_8_fu_22436_p2 = (!y_V_1_6_7_fu_22428_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_7_fu_22428_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_1_fu_2929_p2() {
    dneg_7_1_fu_2929_p2 = (!p_Val2_7_7_fu_2923_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_7_fu_2923_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_7_2_fu_8379_p2() {
    dneg_7_2_fu_8379_p2 = (!y_V_1_7_1_fu_8370_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_7_1_fu_8370_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_7_3_fu_8461_p2() {
    dneg_7_3_fu_8461_p2 = (!y_V_1_7_2_fu_8453_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_2_fu_8453_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_4_fu_16191_p2() {
    dneg_7_4_fu_16191_p2 = (!y_V_1_7_3_reg_36082.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_3_reg_36082.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_5_fu_16241_p2() {
    dneg_7_5_fu_16241_p2 = (!y_V_1_7_4_fu_16233_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_4_fu_16233_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_6_fu_22489_p2() {
    dneg_7_6_fu_22489_p2 = (!y_V_1_7_5_reg_37510.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_5_reg_37510.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_7_fu_22531_p2() {
    dneg_7_7_fu_22531_p2 = (!y_V_1_7_6_fu_22523_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_6_fu_22523_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_8_fu_22589_p2() {
    dneg_7_8_fu_22589_p2 = (!y_V_1_7_7_fu_22581_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_7_fu_22581_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_1_fu_3047_p2() {
    dneg_8_1_fu_3047_p2 = (!p_Val2_7_8_fu_3041_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_8_fu_3041_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_8_2_fu_8573_p2() {
    dneg_8_2_fu_8573_p2 = (!y_V_1_8_1_fu_8564_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_8_1_fu_8564_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_8_3_fu_8655_p2() {
    dneg_8_3_fu_8655_p2 = (!y_V_1_8_2_fu_8647_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_2_fu_8647_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_4_fu_16339_p2() {
    dneg_8_4_fu_16339_p2 = (!y_V_1_8_3_reg_36116.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_3_reg_36116.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_5_fu_16389_p2() {
    dneg_8_5_fu_16389_p2 = (!y_V_1_8_4_fu_16381_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_4_fu_16381_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_6_fu_22642_p2() {
    dneg_8_6_fu_22642_p2 = (!y_V_1_8_5_reg_37544.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_5_reg_37544.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_7_fu_22684_p2() {
    dneg_8_7_fu_22684_p2 = (!y_V_1_8_6_fu_22676_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_6_fu_22676_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_8_fu_22742_p2() {
    dneg_8_8_fu_22742_p2 = (!y_V_1_8_7_fu_22734_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_7_fu_22734_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_1_fu_3165_p2() {
    dneg_9_1_fu_3165_p2 = (!p_Val2_7_9_fu_3159_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_9_fu_3159_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_9_2_fu_8767_p2() {
    dneg_9_2_fu_8767_p2 = (!y_V_1_9_1_fu_8758_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_9_1_fu_8758_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_9_3_fu_8849_p2() {
    dneg_9_3_fu_8849_p2 = (!y_V_1_9_2_fu_8841_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_2_fu_8841_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_4_fu_16487_p2() {
    dneg_9_4_fu_16487_p2 = (!y_V_1_9_3_reg_36150.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_3_reg_36150.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_5_fu_16537_p2() {
    dneg_9_5_fu_16537_p2 = (!y_V_1_9_4_fu_16529_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_4_fu_16529_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_6_fu_22795_p2() {
    dneg_9_6_fu_22795_p2 = (!y_V_1_9_5_reg_37578.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_5_reg_37578.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_7_fu_22837_p2() {
    dneg_9_7_fu_22837_p2 = (!y_V_1_9_6_fu_22829_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_6_fu_22829_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_8_fu_22895_p2() {
    dneg_9_8_fu_22895_p2 = (!y_V_1_9_7_fu_22887_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_7_fu_22887_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_exitcond1_fu_1703_p2() {
    exitcond1_fu_1703_p2 = (!x_reg_1692.read().is_01() || !ap_const_lv9_1E0.is_01())? sc_lv<1>(): sc_lv<1>(x_reg_1692.read() == ap_const_lv9_1E0);
}

void Sobel_phase_strm::thread_grad_x_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_0_blk_n = grad_x_V_pixel_0_empty_n.read();
    } else {
        grad_x_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_0_read() {
    grad_x_V_pixel_0_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_10_blk_n = grad_x_V_pixel_10_empty_n.read();
    } else {
        grad_x_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_read() {
    grad_x_V_pixel_10_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_status() {
    grad_x_V_pixel_10_status = (grad_x_V_pixel_0_empty_n.read() & grad_x_V_pixel_1_empty_n.read() & grad_x_V_pixel_2_empty_n.read() & grad_x_V_pixel_3_empty_n.read() & grad_x_V_pixel_4_empty_n.read() & grad_x_V_pixel_5_empty_n.read() & grad_x_V_pixel_6_empty_n.read() & grad_x_V_pixel_7_empty_n.read() & grad_x_V_pixel_8_empty_n.read() & grad_x_V_pixel_9_empty_n.read() & grad_x_V_pixel_10_empty_n.read() & grad_x_V_pixel_11_empty_n.read() & grad_x_V_pixel_12_empty_n.read() & grad_x_V_pixel_13_empty_n.read() & grad_x_V_pixel_14_empty_n.read() & grad_x_V_pixel_15_empty_n.read() & grad_x_V_pixel_16_empty_n.read() & grad_x_V_pixel_17_empty_n.read() & grad_x_V_pixel_18_empty_n.read() & grad_x_V_pixel_19_empty_n.read() & grad_x_V_pixel_20_empty_n.read() & grad_x_V_pixel_21_empty_n.read() & grad_x_V_pixel_22_empty_n.read() & grad_x_V_pixel_23_empty_n.read() & grad_x_V_pixel_24_empty_n.read() & grad_x_V_pixel_25_empty_n.read() & grad_x_V_pixel_26_empty_n.read() & grad_x_V_pixel_27_empty_n.read() & grad_x_V_pixel_28_empty_n.read() & grad_x_V_pixel_29_empty_n.read() & grad_x_V_pixel_30_empty_n.read() & grad_x_V_pixel_31_empty_n.read() & grad_x_V_pixel_32_empty_n.read() & grad_x_V_pixel_33_empty_n.read() & grad_x_V_pixel_34_empty_n.read() & grad_x_V_pixel_35_empty_n.read() & grad_x_V_pixel_36_empty_n.read() & grad_x_V_pixel_37_empty_n.read() & grad_x_V_pixel_38_empty_n.read() & grad_x_V_pixel_39_empty_n.read() & grad_x_V_pixel_40_empty_n.read() & grad_x_V_pixel_41_empty_n.read());
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_697.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_702.read())))) {
        grad_x_V_pixel_10_update = ap_const_logic_1;
    } else {
        grad_x_V_pixel_10_update = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_11_blk_n = grad_x_V_pixel_11_empty_n.read();
    } else {
        grad_x_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_11_read() {
    grad_x_V_pixel_11_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_12_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_12_blk_n = grad_x_V_pixel_12_empty_n.read();
    } else {
        grad_x_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_12_read() {
    grad_x_V_pixel_12_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_13_blk_n = grad_x_V_pixel_13_empty_n.read();
    } else {
        grad_x_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_13_read() {
    grad_x_V_pixel_13_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_14_blk_n = grad_x_V_pixel_14_empty_n.read();
    } else {
        grad_x_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_14_read() {
    grad_x_V_pixel_14_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_15_blk_n = grad_x_V_pixel_15_empty_n.read();
    } else {
        grad_x_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_15_read() {
    grad_x_V_pixel_15_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_16_blk_n = grad_x_V_pixel_16_empty_n.read();
    } else {
        grad_x_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_16_read() {
    grad_x_V_pixel_16_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_17_blk_n = grad_x_V_pixel_17_empty_n.read();
    } else {
        grad_x_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_17_read() {
    grad_x_V_pixel_17_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_18_blk_n = grad_x_V_pixel_18_empty_n.read();
    } else {
        grad_x_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_18_read() {
    grad_x_V_pixel_18_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_19_blk_n = grad_x_V_pixel_19_empty_n.read();
    } else {
        grad_x_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_19_read() {
    grad_x_V_pixel_19_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_1_blk_n = grad_x_V_pixel_1_empty_n.read();
    } else {
        grad_x_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_1_read() {
    grad_x_V_pixel_1_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_20_blk_n = grad_x_V_pixel_20_empty_n.read();
    } else {
        grad_x_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_20_read() {
    grad_x_V_pixel_20_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_21_blk_n = grad_x_V_pixel_21_empty_n.read();
    } else {
        grad_x_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_21_read() {
    grad_x_V_pixel_21_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_22_blk_n = grad_x_V_pixel_22_empty_n.read();
    } else {
        grad_x_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_22_read() {
    grad_x_V_pixel_22_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_23_blk_n = grad_x_V_pixel_23_empty_n.read();
    } else {
        grad_x_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_23_read() {
    grad_x_V_pixel_23_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_24_blk_n = grad_x_V_pixel_24_empty_n.read();
    } else {
        grad_x_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_24_read() {
    grad_x_V_pixel_24_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_25_blk_n = grad_x_V_pixel_25_empty_n.read();
    } else {
        grad_x_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_25_read() {
    grad_x_V_pixel_25_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_26_blk_n = grad_x_V_pixel_26_empty_n.read();
    } else {
        grad_x_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_26_read() {
    grad_x_V_pixel_26_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_27_blk_n = grad_x_V_pixel_27_empty_n.read();
    } else {
        grad_x_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_27_read() {
    grad_x_V_pixel_27_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_28_blk_n = grad_x_V_pixel_28_empty_n.read();
    } else {
        grad_x_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_28_read() {
    grad_x_V_pixel_28_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_29_blk_n = grad_x_V_pixel_29_empty_n.read();
    } else {
        grad_x_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_29_read() {
    grad_x_V_pixel_29_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_2_blk_n = grad_x_V_pixel_2_empty_n.read();
    } else {
        grad_x_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_2_read() {
    grad_x_V_pixel_2_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_30_blk_n = grad_x_V_pixel_30_empty_n.read();
    } else {
        grad_x_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_30_read() {
    grad_x_V_pixel_30_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_31_blk_n = grad_x_V_pixel_31_empty_n.read();
    } else {
        grad_x_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_31_read() {
    grad_x_V_pixel_31_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_32_blk_n = grad_x_V_pixel_32_empty_n.read();
    } else {
        grad_x_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_32_read() {
    grad_x_V_pixel_32_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_33_blk_n = grad_x_V_pixel_33_empty_n.read();
    } else {
        grad_x_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_33_read() {
    grad_x_V_pixel_33_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_34_blk_n = grad_x_V_pixel_34_empty_n.read();
    } else {
        grad_x_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_34_read() {
    grad_x_V_pixel_34_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_35_blk_n = grad_x_V_pixel_35_empty_n.read();
    } else {
        grad_x_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_35_read() {
    grad_x_V_pixel_35_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_36_blk_n = grad_x_V_pixel_36_empty_n.read();
    } else {
        grad_x_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_36_read() {
    grad_x_V_pixel_36_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_37_blk_n = grad_x_V_pixel_37_empty_n.read();
    } else {
        grad_x_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_37_read() {
    grad_x_V_pixel_37_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_38_blk_n = grad_x_V_pixel_38_empty_n.read();
    } else {
        grad_x_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_38_read() {
    grad_x_V_pixel_38_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_39_blk_n = grad_x_V_pixel_39_empty_n.read();
    } else {
        grad_x_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_39_read() {
    grad_x_V_pixel_39_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_3_blk_n = grad_x_V_pixel_3_empty_n.read();
    } else {
        grad_x_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_3_read() {
    grad_x_V_pixel_3_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_40_blk_n = grad_x_V_pixel_40_empty_n.read();
    } else {
        grad_x_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_40_read() {
    grad_x_V_pixel_40_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_41_blk_n = grad_x_V_pixel_41_empty_n.read();
    } else {
        grad_x_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_41_read() {
    grad_x_V_pixel_41_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_4_blk_n = grad_x_V_pixel_4_empty_n.read();
    } else {
        grad_x_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_4_read() {
    grad_x_V_pixel_4_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_5_blk_n = grad_x_V_pixel_5_empty_n.read();
    } else {
        grad_x_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_5_read() {
    grad_x_V_pixel_5_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_6_blk_n = grad_x_V_pixel_6_empty_n.read();
    } else {
        grad_x_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_6_read() {
    grad_x_V_pixel_6_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_7_blk_n = grad_x_V_pixel_7_empty_n.read();
    } else {
        grad_x_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_7_read() {
    grad_x_V_pixel_7_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_8_blk_n = grad_x_V_pixel_8_empty_n.read();
    } else {
        grad_x_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_8_read() {
    grad_x_V_pixel_8_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_9_blk_n = grad_x_V_pixel_9_empty_n.read();
    } else {
        grad_x_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_9_read() {
    grad_x_V_pixel_9_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_0_blk_n = grad_y_V_pixel_0_empty_n.read();
    } else {
        grad_y_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_0_read() {
    grad_y_V_pixel_0_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_10_blk_n = grad_y_V_pixel_10_empty_n.read();
    } else {
        grad_y_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_read() {
    grad_y_V_pixel_10_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_status() {
    grad_y_V_pixel_10_status = (grad_y_V_pixel_0_empty_n.read() & grad_y_V_pixel_1_empty_n.read() & grad_y_V_pixel_2_empty_n.read() & grad_y_V_pixel_3_empty_n.read() & grad_y_V_pixel_4_empty_n.read() & grad_y_V_pixel_5_empty_n.read() & grad_y_V_pixel_6_empty_n.read() & grad_y_V_pixel_7_empty_n.read() & grad_y_V_pixel_8_empty_n.read() & grad_y_V_pixel_9_empty_n.read() & grad_y_V_pixel_10_empty_n.read() & grad_y_V_pixel_11_empty_n.read() & grad_y_V_pixel_12_empty_n.read() & grad_y_V_pixel_13_empty_n.read() & grad_y_V_pixel_14_empty_n.read() & grad_y_V_pixel_15_empty_n.read() & grad_y_V_pixel_16_empty_n.read() & grad_y_V_pixel_17_empty_n.read() & grad_y_V_pixel_18_empty_n.read() & grad_y_V_pixel_19_empty_n.read() & grad_y_V_pixel_20_empty_n.read() & grad_y_V_pixel_21_empty_n.read() & grad_y_V_pixel_22_empty_n.read() & grad_y_V_pixel_23_empty_n.read() & grad_y_V_pixel_24_empty_n.read() & grad_y_V_pixel_25_empty_n.read() & grad_y_V_pixel_26_empty_n.read() & grad_y_V_pixel_27_empty_n.read() & grad_y_V_pixel_28_empty_n.read() & grad_y_V_pixel_29_empty_n.read() & grad_y_V_pixel_30_empty_n.read() & grad_y_V_pixel_31_empty_n.read() & grad_y_V_pixel_32_empty_n.read() & grad_y_V_pixel_33_empty_n.read() & grad_y_V_pixel_34_empty_n.read() & grad_y_V_pixel_35_empty_n.read() & grad_y_V_pixel_36_empty_n.read() & grad_y_V_pixel_37_empty_n.read() & grad_y_V_pixel_38_empty_n.read() & grad_y_V_pixel_39_empty_n.read() & grad_y_V_pixel_40_empty_n.read() & grad_y_V_pixel_41_empty_n.read());
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_697.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_702.read())))) {
        grad_y_V_pixel_10_update = ap_const_logic_1;
    } else {
        grad_y_V_pixel_10_update = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_11_blk_n = grad_y_V_pixel_11_empty_n.read();
    } else {
        grad_y_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_11_read() {
    grad_y_V_pixel_11_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_12_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_12_blk_n = grad_y_V_pixel_12_empty_n.read();
    } else {
        grad_y_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_12_read() {
    grad_y_V_pixel_12_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_13_blk_n = grad_y_V_pixel_13_empty_n.read();
    } else {
        grad_y_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_13_read() {
    grad_y_V_pixel_13_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_14_blk_n = grad_y_V_pixel_14_empty_n.read();
    } else {
        grad_y_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_14_read() {
    grad_y_V_pixel_14_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_15_blk_n = grad_y_V_pixel_15_empty_n.read();
    } else {
        grad_y_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_15_read() {
    grad_y_V_pixel_15_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_16_blk_n = grad_y_V_pixel_16_empty_n.read();
    } else {
        grad_y_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_16_read() {
    grad_y_V_pixel_16_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_17_blk_n = grad_y_V_pixel_17_empty_n.read();
    } else {
        grad_y_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_17_read() {
    grad_y_V_pixel_17_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_18_blk_n = grad_y_V_pixel_18_empty_n.read();
    } else {
        grad_y_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_18_read() {
    grad_y_V_pixel_18_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_19_blk_n = grad_y_V_pixel_19_empty_n.read();
    } else {
        grad_y_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_19_read() {
    grad_y_V_pixel_19_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_1_blk_n = grad_y_V_pixel_1_empty_n.read();
    } else {
        grad_y_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_1_read() {
    grad_y_V_pixel_1_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_20_blk_n = grad_y_V_pixel_20_empty_n.read();
    } else {
        grad_y_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_20_read() {
    grad_y_V_pixel_20_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_21_blk_n = grad_y_V_pixel_21_empty_n.read();
    } else {
        grad_y_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_21_read() {
    grad_y_V_pixel_21_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_22_blk_n = grad_y_V_pixel_22_empty_n.read();
    } else {
        grad_y_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_22_read() {
    grad_y_V_pixel_22_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_23_blk_n = grad_y_V_pixel_23_empty_n.read();
    } else {
        grad_y_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_23_read() {
    grad_y_V_pixel_23_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_24_blk_n = grad_y_V_pixel_24_empty_n.read();
    } else {
        grad_y_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_24_read() {
    grad_y_V_pixel_24_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_25_blk_n = grad_y_V_pixel_25_empty_n.read();
    } else {
        grad_y_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_25_read() {
    grad_y_V_pixel_25_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_26_blk_n = grad_y_V_pixel_26_empty_n.read();
    } else {
        grad_y_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_26_read() {
    grad_y_V_pixel_26_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_27_blk_n = grad_y_V_pixel_27_empty_n.read();
    } else {
        grad_y_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_27_read() {
    grad_y_V_pixel_27_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_28_blk_n = grad_y_V_pixel_28_empty_n.read();
    } else {
        grad_y_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_28_read() {
    grad_y_V_pixel_28_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_29_blk_n = grad_y_V_pixel_29_empty_n.read();
    } else {
        grad_y_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_29_read() {
    grad_y_V_pixel_29_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_2_blk_n = grad_y_V_pixel_2_empty_n.read();
    } else {
        grad_y_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_2_read() {
    grad_y_V_pixel_2_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_30_blk_n = grad_y_V_pixel_30_empty_n.read();
    } else {
        grad_y_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_30_read() {
    grad_y_V_pixel_30_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_31_blk_n = grad_y_V_pixel_31_empty_n.read();
    } else {
        grad_y_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_31_read() {
    grad_y_V_pixel_31_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_32_blk_n = grad_y_V_pixel_32_empty_n.read();
    } else {
        grad_y_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_32_read() {
    grad_y_V_pixel_32_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_33_blk_n = grad_y_V_pixel_33_empty_n.read();
    } else {
        grad_y_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_33_read() {
    grad_y_V_pixel_33_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_34_blk_n = grad_y_V_pixel_34_empty_n.read();
    } else {
        grad_y_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_34_read() {
    grad_y_V_pixel_34_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_35_blk_n = grad_y_V_pixel_35_empty_n.read();
    } else {
        grad_y_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_35_read() {
    grad_y_V_pixel_35_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_36_blk_n = grad_y_V_pixel_36_empty_n.read();
    } else {
        grad_y_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_36_read() {
    grad_y_V_pixel_36_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_37_blk_n = grad_y_V_pixel_37_empty_n.read();
    } else {
        grad_y_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_37_read() {
    grad_y_V_pixel_37_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_38_blk_n = grad_y_V_pixel_38_empty_n.read();
    } else {
        grad_y_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_38_read() {
    grad_y_V_pixel_38_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_39_blk_n = grad_y_V_pixel_39_empty_n.read();
    } else {
        grad_y_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_39_read() {
    grad_y_V_pixel_39_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_3_blk_n = grad_y_V_pixel_3_empty_n.read();
    } else {
        grad_y_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_3_read() {
    grad_y_V_pixel_3_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_40_blk_n = grad_y_V_pixel_40_empty_n.read();
    } else {
        grad_y_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_40_read() {
    grad_y_V_pixel_40_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_41_blk_n = grad_y_V_pixel_41_empty_n.read();
    } else {
        grad_y_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_41_read() {
    grad_y_V_pixel_41_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_4_blk_n = grad_y_V_pixel_4_empty_n.read();
    } else {
        grad_y_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_4_read() {
    grad_y_V_pixel_4_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_5_blk_n = grad_y_V_pixel_5_empty_n.read();
    } else {
        grad_y_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_5_read() {
    grad_y_V_pixel_5_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_6_blk_n = grad_y_V_pixel_6_empty_n.read();
    } else {
        grad_y_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_6_read() {
    grad_y_V_pixel_6_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_7_blk_n = grad_y_V_pixel_7_empty_n.read();
    } else {
        grad_y_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_7_read() {
    grad_y_V_pixel_7_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_8_blk_n = grad_y_V_pixel_8_empty_n.read();
    } else {
        grad_y_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_8_read() {
    grad_y_V_pixel_8_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_34223.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_9_blk_n = grad_y_V_pixel_9_empty_n.read();
    } else {
        grad_y_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_9_read() {
    grad_y_V_pixel_9_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_0_blk_n = output_V_pixel_0_full_n.read();
    } else {
        output_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_0_din() {
    output_V_pixel_0_din = (!tmp_20_fu_33131_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_20_fu_33131_p3.read()[0].to_bool())? p_i_fu_33143_p3.read(): tmp_19_reg_39529.read());
}

void Sobel_phase_strm::thread_output_V_pixel_0_write() {
    output_V_pixel_0_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_10_blk_n = output_V_pixel_10_full_n.read();
    } else {
        output_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_10_din() {
    output_V_pixel_10_din = (!tmp_221_fu_33391_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_221_fu_33391_p3.read()[0].to_bool())? p_i_s_fu_33403_p3.read(): tmp_220_reg_39699.read());
}

void Sobel_phase_strm::thread_output_V_pixel_10_write() {
    output_V_pixel_10_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_11_blk_n = output_V_pixel_11_full_n.read();
    } else {
        output_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_11_din() {
    output_V_pixel_11_din = (!tmp_241_fu_33417_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_241_fu_33417_p3.read()[0].to_bool())? p_i_10_fu_33429_p3.read(): tmp_240_reg_39716.read());
}

void Sobel_phase_strm::thread_output_V_pixel_11_status() {
    output_V_pixel_11_status = (output_V_pixel_0_full_n.read() & output_V_pixel_1_full_n.read() & output_V_pixel_2_full_n.read() & output_V_pixel_3_full_n.read() & output_V_pixel_4_full_n.read() & output_V_pixel_5_full_n.read() & output_V_pixel_6_full_n.read() & output_V_pixel_7_full_n.read() & output_V_pixel_8_full_n.read() & output_V_pixel_9_full_n.read() & output_V_pixel_10_full_n.read() & output_V_pixel_11_full_n.read() & output_V_pixel_12_full_n.read() & output_V_pixel_13_full_n.read() & output_V_pixel_14_full_n.read() & output_V_pixel_15_full_n.read() & output_V_pixel_16_full_n.read() & output_V_pixel_17_full_n.read() & output_V_pixel_18_full_n.read() & output_V_pixel_19_full_n.read() & output_V_pixel_20_full_n.read() & output_V_pixel_21_full_n.read() & output_V_pixel_22_full_n.read() & output_V_pixel_23_full_n.read() & output_V_pixel_24_full_n.read() & output_V_pixel_25_full_n.read() & output_V_pixel_26_full_n.read() & output_V_pixel_27_full_n.read() & output_V_pixel_28_full_n.read() & output_V_pixel_29_full_n.read() & output_V_pixel_30_full_n.read() & output_V_pixel_31_full_n.read() & output_V_pixel_32_full_n.read() & output_V_pixel_33_full_n.read() & output_V_pixel_34_full_n.read() & output_V_pixel_35_full_n.read() & output_V_pixel_36_full_n.read() & output_V_pixel_37_full_n.read() & output_V_pixel_38_full_n.read() & output_V_pixel_39_full_n.read() & output_V_pixel_40_full_n.read() & output_V_pixel_41_full_n.read());
}

void Sobel_phase_strm::thread_output_V_pixel_11_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_697.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_702.read())))) {
        output_V_pixel_11_update = ap_const_logic_1;
    } else {
        output_V_pixel_11_update = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_11_write() {
    output_V_pixel_11_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_12_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_12_blk_n = output_V_pixel_12_full_n.read();
    } else {
        output_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_12_din() {
    output_V_pixel_12_din = (!tmp_261_fu_33443_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_261_fu_33443_p3.read()[0].to_bool())? p_i_11_fu_33455_p3.read(): tmp_260_reg_39733.read());
}

void Sobel_phase_strm::thread_output_V_pixel_12_write() {
    output_V_pixel_12_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_13_blk_n = output_V_pixel_13_full_n.read();
    } else {
        output_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_13_din() {
    output_V_pixel_13_din = (!tmp_281_fu_33469_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_281_fu_33469_p3.read()[0].to_bool())? p_i_12_fu_33481_p3.read(): tmp_280_reg_39750.read());
}

void Sobel_phase_strm::thread_output_V_pixel_13_write() {
    output_V_pixel_13_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_14_blk_n = output_V_pixel_14_full_n.read();
    } else {
        output_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_14_din() {
    output_V_pixel_14_din = (!tmp_301_fu_33495_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_301_fu_33495_p3.read()[0].to_bool())? p_i_13_fu_33507_p3.read(): tmp_300_reg_39767.read());
}

void Sobel_phase_strm::thread_output_V_pixel_14_write() {
    output_V_pixel_14_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_15_blk_n = output_V_pixel_15_full_n.read();
    } else {
        output_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_15_din() {
    output_V_pixel_15_din = (!tmp_321_fu_33521_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_321_fu_33521_p3.read()[0].to_bool())? p_i_14_fu_33533_p3.read(): tmp_320_reg_39784.read());
}

void Sobel_phase_strm::thread_output_V_pixel_15_write() {
    output_V_pixel_15_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_16_blk_n = output_V_pixel_16_full_n.read();
    } else {
        output_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_16_din() {
    output_V_pixel_16_din = (!tmp_341_fu_33547_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_341_fu_33547_p3.read()[0].to_bool())? p_i_15_fu_33559_p3.read(): tmp_340_reg_39801.read());
}

void Sobel_phase_strm::thread_output_V_pixel_16_write() {
    output_V_pixel_16_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_17_blk_n = output_V_pixel_17_full_n.read();
    } else {
        output_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_17_din() {
    output_V_pixel_17_din = (!tmp_361_fu_33573_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_361_fu_33573_p3.read()[0].to_bool())? p_i_16_fu_33585_p3.read(): tmp_360_reg_39818.read());
}

void Sobel_phase_strm::thread_output_V_pixel_17_write() {
    output_V_pixel_17_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_18_blk_n = output_V_pixel_18_full_n.read();
    } else {
        output_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_18_din() {
    output_V_pixel_18_din = (!tmp_381_fu_33599_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_381_fu_33599_p3.read()[0].to_bool())? p_i_17_fu_33611_p3.read(): tmp_380_reg_39835.read());
}

void Sobel_phase_strm::thread_output_V_pixel_18_write() {
    output_V_pixel_18_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_19_blk_n = output_V_pixel_19_full_n.read();
    } else {
        output_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_19_din() {
    output_V_pixel_19_din = (!tmp_401_fu_33625_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_401_fu_33625_p3.read()[0].to_bool())? p_i_18_fu_33637_p3.read(): tmp_400_reg_39852.read());
}

void Sobel_phase_strm::thread_output_V_pixel_19_write() {
    output_V_pixel_19_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_1_blk_n = output_V_pixel_1_full_n.read();
    } else {
        output_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_1_din() {
    output_V_pixel_1_din = (!tmp_41_fu_33157_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_41_fu_33157_p3.read()[0].to_bool())? p_i_1_fu_33169_p3.read(): tmp_40_reg_39546.read());
}

void Sobel_phase_strm::thread_output_V_pixel_1_write() {
    output_V_pixel_1_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_20_blk_n = output_V_pixel_20_full_n.read();
    } else {
        output_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_20_din() {
    output_V_pixel_20_din = (!tmp_421_fu_33651_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_421_fu_33651_p3.read()[0].to_bool())? p_i_19_fu_33663_p3.read(): tmp_420_reg_39869.read());
}

void Sobel_phase_strm::thread_output_V_pixel_20_write() {
    output_V_pixel_20_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_21_blk_n = output_V_pixel_21_full_n.read();
    } else {
        output_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_21_din() {
    output_V_pixel_21_din = (!tmp_441_fu_33677_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_441_fu_33677_p3.read()[0].to_bool())? p_i_20_fu_33689_p3.read(): tmp_440_reg_39886.read());
}

void Sobel_phase_strm::thread_output_V_pixel_21_write() {
    output_V_pixel_21_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_22_blk_n = output_V_pixel_22_full_n.read();
    } else {
        output_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_22_din() {
    output_V_pixel_22_din = (!tmp_461_fu_33703_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_461_fu_33703_p3.read()[0].to_bool())? p_i_21_fu_33715_p3.read(): tmp_460_reg_39903.read());
}

void Sobel_phase_strm::thread_output_V_pixel_22_write() {
    output_V_pixel_22_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_23_blk_n = output_V_pixel_23_full_n.read();
    } else {
        output_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_23_din() {
    output_V_pixel_23_din = (!tmp_481_fu_33729_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_481_fu_33729_p3.read()[0].to_bool())? p_i_22_fu_33741_p3.read(): tmp_480_reg_39920.read());
}

void Sobel_phase_strm::thread_output_V_pixel_23_write() {
    output_V_pixel_23_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_24_blk_n = output_V_pixel_24_full_n.read();
    } else {
        output_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_24_din() {
    output_V_pixel_24_din = (!tmp_501_fu_33755_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_501_fu_33755_p3.read()[0].to_bool())? p_i_23_fu_33767_p3.read(): tmp_500_reg_39937.read());
}

void Sobel_phase_strm::thread_output_V_pixel_24_write() {
    output_V_pixel_24_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_25_blk_n = output_V_pixel_25_full_n.read();
    } else {
        output_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_25_din() {
    output_V_pixel_25_din = (!tmp_521_fu_33781_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_521_fu_33781_p3.read()[0].to_bool())? p_i_24_fu_33793_p3.read(): tmp_520_reg_39954.read());
}

void Sobel_phase_strm::thread_output_V_pixel_25_write() {
    output_V_pixel_25_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_26_blk_n = output_V_pixel_26_full_n.read();
    } else {
        output_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_26_din() {
    output_V_pixel_26_din = (!tmp_541_fu_33807_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_541_fu_33807_p3.read()[0].to_bool())? p_i_25_fu_33819_p3.read(): tmp_540_reg_39971.read());
}

void Sobel_phase_strm::thread_output_V_pixel_26_write() {
    output_V_pixel_26_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_27_blk_n = output_V_pixel_27_full_n.read();
    } else {
        output_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_27_din() {
    output_V_pixel_27_din = (!tmp_561_fu_33833_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_561_fu_33833_p3.read()[0].to_bool())? p_i_26_fu_33845_p3.read(): tmp_560_reg_39988.read());
}

void Sobel_phase_strm::thread_output_V_pixel_27_write() {
    output_V_pixel_27_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_28_blk_n = output_V_pixel_28_full_n.read();
    } else {
        output_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_28_din() {
    output_V_pixel_28_din = (!tmp_581_fu_33859_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_581_fu_33859_p3.read()[0].to_bool())? p_i_27_fu_33871_p3.read(): tmp_580_reg_40005.read());
}

void Sobel_phase_strm::thread_output_V_pixel_28_write() {
    output_V_pixel_28_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_29_blk_n = output_V_pixel_29_full_n.read();
    } else {
        output_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_29_din() {
    output_V_pixel_29_din = (!tmp_601_fu_33885_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_601_fu_33885_p3.read()[0].to_bool())? p_i_28_fu_33897_p3.read(): tmp_600_reg_40022.read());
}

void Sobel_phase_strm::thread_output_V_pixel_29_write() {
    output_V_pixel_29_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_2_blk_n = output_V_pixel_2_full_n.read();
    } else {
        output_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_2_din() {
    output_V_pixel_2_din = (!tmp_61_fu_33183_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_61_fu_33183_p3.read()[0].to_bool())? p_i_2_fu_33195_p3.read(): tmp_60_reg_39563.read());
}

void Sobel_phase_strm::thread_output_V_pixel_2_write() {
    output_V_pixel_2_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_30_blk_n = output_V_pixel_30_full_n.read();
    } else {
        output_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_30_din() {
    output_V_pixel_30_din = (!tmp_621_fu_33911_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_621_fu_33911_p3.read()[0].to_bool())? p_i_29_fu_33923_p3.read(): tmp_620_reg_40039.read());
}

void Sobel_phase_strm::thread_output_V_pixel_30_write() {
    output_V_pixel_30_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_31_blk_n = output_V_pixel_31_full_n.read();
    } else {
        output_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_31_din() {
    output_V_pixel_31_din = (!tmp_641_fu_33937_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_641_fu_33937_p3.read()[0].to_bool())? p_i_30_fu_33949_p3.read(): tmp_640_reg_40056.read());
}

void Sobel_phase_strm::thread_output_V_pixel_31_write() {
    output_V_pixel_31_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_32_blk_n = output_V_pixel_32_full_n.read();
    } else {
        output_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_32_din() {
    output_V_pixel_32_din = (!tmp_661_fu_33963_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_661_fu_33963_p3.read()[0].to_bool())? p_i_31_fu_33975_p3.read(): tmp_660_reg_40073.read());
}

void Sobel_phase_strm::thread_output_V_pixel_32_write() {
    output_V_pixel_32_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_33_blk_n = output_V_pixel_33_full_n.read();
    } else {
        output_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_33_din() {
    output_V_pixel_33_din = (!tmp_681_fu_33989_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_681_fu_33989_p3.read()[0].to_bool())? p_i_32_fu_34001_p3.read(): tmp_680_reg_40090.read());
}

void Sobel_phase_strm::thread_output_V_pixel_33_write() {
    output_V_pixel_33_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_34_blk_n = output_V_pixel_34_full_n.read();
    } else {
        output_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_34_din() {
    output_V_pixel_34_din = (!tmp_701_fu_34015_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_701_fu_34015_p3.read()[0].to_bool())? p_i_33_fu_34027_p3.read(): tmp_700_reg_40107.read());
}

void Sobel_phase_strm::thread_output_V_pixel_34_write() {
    output_V_pixel_34_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_35_blk_n = output_V_pixel_35_full_n.read();
    } else {
        output_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_35_din() {
    output_V_pixel_35_din = (!tmp_721_fu_34041_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_721_fu_34041_p3.read()[0].to_bool())? p_i_34_fu_34053_p3.read(): tmp_720_reg_40124.read());
}

void Sobel_phase_strm::thread_output_V_pixel_35_write() {
    output_V_pixel_35_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_36_blk_n = output_V_pixel_36_full_n.read();
    } else {
        output_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_36_din() {
    output_V_pixel_36_din = (!tmp_741_fu_34067_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_741_fu_34067_p3.read()[0].to_bool())? p_i_35_fu_34079_p3.read(): tmp_740_reg_40141.read());
}

void Sobel_phase_strm::thread_output_V_pixel_36_write() {
    output_V_pixel_36_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_37_blk_n = output_V_pixel_37_full_n.read();
    } else {
        output_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_37_din() {
    output_V_pixel_37_din = (!tmp_761_fu_34093_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_761_fu_34093_p3.read()[0].to_bool())? p_i_36_fu_34105_p3.read(): tmp_760_reg_40158.read());
}

void Sobel_phase_strm::thread_output_V_pixel_37_write() {
    output_V_pixel_37_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_38_blk_n = output_V_pixel_38_full_n.read();
    } else {
        output_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_38_din() {
    output_V_pixel_38_din = (!tmp_781_fu_34119_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_781_fu_34119_p3.read()[0].to_bool())? p_i_37_fu_34131_p3.read(): tmp_780_reg_40175.read());
}

void Sobel_phase_strm::thread_output_V_pixel_38_write() {
    output_V_pixel_38_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_39_blk_n = output_V_pixel_39_full_n.read();
    } else {
        output_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_39_din() {
    output_V_pixel_39_din = (!tmp_801_fu_34145_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_801_fu_34145_p3.read()[0].to_bool())? p_i_38_fu_34157_p3.read(): tmp_800_reg_40192.read());
}

void Sobel_phase_strm::thread_output_V_pixel_39_write() {
    output_V_pixel_39_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_3_blk_n = output_V_pixel_3_full_n.read();
    } else {
        output_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_3_din() {
    output_V_pixel_3_din = (!tmp_81_fu_33209_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_81_fu_33209_p3.read()[0].to_bool())? p_i_3_fu_33221_p3.read(): tmp_80_reg_39580.read());
}

void Sobel_phase_strm::thread_output_V_pixel_3_write() {
    output_V_pixel_3_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_40_blk_n = output_V_pixel_40_full_n.read();
    } else {
        output_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_40_din() {
    output_V_pixel_40_din = (!tmp_821_fu_34171_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_821_fu_34171_p3.read()[0].to_bool())? p_i_39_fu_34183_p3.read(): tmp_820_reg_40209.read());
}

void Sobel_phase_strm::thread_output_V_pixel_40_write() {
    output_V_pixel_40_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_41_blk_n = output_V_pixel_41_full_n.read();
    } else {
        output_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_41_din() {
    output_V_pixel_41_din = (!tmp_841_fu_34197_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_841_fu_34197_p3.read()[0].to_bool())? p_i_40_fu_34209_p3.read(): tmp_840_reg_40226.read());
}

void Sobel_phase_strm::thread_output_V_pixel_41_write() {
    output_V_pixel_41_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_4_blk_n = output_V_pixel_4_full_n.read();
    } else {
        output_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_4_din() {
    output_V_pixel_4_din = (!tmp_101_fu_33235_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_101_fu_33235_p3.read()[0].to_bool())? p_i_4_fu_33247_p3.read(): tmp_100_reg_39597.read());
}

void Sobel_phase_strm::thread_output_V_pixel_4_write() {
    output_V_pixel_4_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_5_blk_n = output_V_pixel_5_full_n.read();
    } else {
        output_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_5_din() {
    output_V_pixel_5_din = (!tmp_121_fu_33261_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_121_fu_33261_p3.read()[0].to_bool())? p_i_5_fu_33273_p3.read(): tmp_120_reg_39614.read());
}

void Sobel_phase_strm::thread_output_V_pixel_5_write() {
    output_V_pixel_5_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_6_blk_n = output_V_pixel_6_full_n.read();
    } else {
        output_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_6_din() {
    output_V_pixel_6_din = (!tmp_141_fu_33287_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_141_fu_33287_p3.read()[0].to_bool())? p_i_6_fu_33299_p3.read(): tmp_140_reg_39631.read());
}

void Sobel_phase_strm::thread_output_V_pixel_6_write() {
    output_V_pixel_6_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_7_blk_n = output_V_pixel_7_full_n.read();
    } else {
        output_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_7_din() {
    output_V_pixel_7_din = (!tmp_161_fu_33313_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_161_fu_33313_p3.read()[0].to_bool())? p_i_7_fu_33325_p3.read(): tmp_160_reg_39648.read());
}

void Sobel_phase_strm::thread_output_V_pixel_7_write() {
    output_V_pixel_7_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_8_blk_n = output_V_pixel_8_full_n.read();
    } else {
        output_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_8_din() {
    output_V_pixel_8_din = (!tmp_181_fu_33339_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_181_fu_33339_p3.read()[0].to_bool())? p_i_8_fu_33351_p3.read(): tmp_180_reg_39665.read());
}

void Sobel_phase_strm::thread_output_V_pixel_8_write() {
    output_V_pixel_8_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_34223_pp0_iter5.read()))) {
        output_V_pixel_9_blk_n = output_V_pixel_9_full_n.read();
    } else {
        output_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_9_din() {
    output_V_pixel_9_din = (!tmp_201_fu_33365_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_201_fu_33365_p3.read()[0].to_bool())? p_i_9_fu_33377_p3.read(): tmp_200_reg_39682.read());
}

void Sobel_phase_strm::thread_output_V_pixel_9_write() {
    output_V_pixel_9_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_p_Val2_10_0_3_cast_fu_21401_p1() {
    p_Val2_10_0_3_cast_fu_21401_p1 = esl_zext<13,12>(p_Val2_10_0_3_fu_21395_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_0_3_fu_21395_p2() {
    p_Val2_10_0_3_fu_21395_p2 = (!ap_const_lv12_E3.is_01() || !z_V_0_2_fu_21385_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_0_2_fu_21385_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_10_3_cast_fu_22931_p1() {
    p_Val2_10_10_3_cast_fu_22931_p1 = esl_zext<13,12>(p_Val2_10_10_3_fu_22925_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_10_3_fu_22925_p2() {
    p_Val2_10_10_3_fu_22925_p2 = (!ap_const_lv12_E3.is_01() || !z_V_10_2_fu_22915_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_10_2_fu_22915_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_11_3_cast_fu_23084_p1() {
    p_Val2_10_11_3_cast_fu_23084_p1 = esl_zext<13,12>(p_Val2_10_11_3_fu_23078_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_11_3_fu_23078_p2() {
    p_Val2_10_11_3_fu_23078_p2 = (!ap_const_lv12_E3.is_01() || !z_V_11_2_fu_23068_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_11_2_fu_23068_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_12_3_cast_fu_23237_p1() {
    p_Val2_10_12_3_cast_fu_23237_p1 = esl_zext<13,12>(p_Val2_10_12_3_fu_23231_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_12_3_fu_23231_p2() {
    p_Val2_10_12_3_fu_23231_p2 = (!ap_const_lv12_E3.is_01() || !z_V_12_2_fu_23221_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_12_2_fu_23221_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_13_3_cast_fu_23390_p1() {
    p_Val2_10_13_3_cast_fu_23390_p1 = esl_zext<13,12>(p_Val2_10_13_3_fu_23384_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_13_3_fu_23384_p2() {
    p_Val2_10_13_3_fu_23384_p2 = (!ap_const_lv12_E3.is_01() || !z_V_13_2_fu_23374_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_13_2_fu_23374_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_14_3_cast_fu_23543_p1() {
    p_Val2_10_14_3_cast_fu_23543_p1 = esl_zext<13,12>(p_Val2_10_14_3_fu_23537_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_14_3_fu_23537_p2() {
    p_Val2_10_14_3_fu_23537_p2 = (!ap_const_lv12_E3.is_01() || !z_V_14_2_fu_23527_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_14_2_fu_23527_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_15_3_cast_fu_23696_p1() {
    p_Val2_10_15_3_cast_fu_23696_p1 = esl_zext<13,12>(p_Val2_10_15_3_fu_23690_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_15_3_fu_23690_p2() {
    p_Val2_10_15_3_fu_23690_p2 = (!ap_const_lv12_E3.is_01() || !z_V_15_2_fu_23680_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_15_2_fu_23680_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_16_3_cast_fu_23849_p1() {
    p_Val2_10_16_3_cast_fu_23849_p1 = esl_zext<13,12>(p_Val2_10_16_3_fu_23843_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_16_3_fu_23843_p2() {
    p_Val2_10_16_3_fu_23843_p2 = (!ap_const_lv12_E3.is_01() || !z_V_16_2_fu_23833_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_16_2_fu_23833_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_17_3_cast_fu_24002_p1() {
    p_Val2_10_17_3_cast_fu_24002_p1 = esl_zext<13,12>(p_Val2_10_17_3_fu_23996_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_17_3_fu_23996_p2() {
    p_Val2_10_17_3_fu_23996_p2 = (!ap_const_lv12_E3.is_01() || !z_V_17_2_fu_23986_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_17_2_fu_23986_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_18_3_cast_fu_24155_p1() {
    p_Val2_10_18_3_cast_fu_24155_p1 = esl_zext<13,12>(p_Val2_10_18_3_fu_24149_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_18_3_fu_24149_p2() {
    p_Val2_10_18_3_fu_24149_p2 = (!ap_const_lv12_E3.is_01() || !z_V_18_2_fu_24139_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_18_2_fu_24139_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_19_3_cast_fu_24308_p1() {
    p_Val2_10_19_3_cast_fu_24308_p1 = esl_zext<13,12>(p_Val2_10_19_3_fu_24302_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_19_3_fu_24302_p2() {
    p_Val2_10_19_3_fu_24302_p2 = (!ap_const_lv12_E3.is_01() || !z_V_19_2_fu_24292_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_19_2_fu_24292_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_1_3_cast_fu_21554_p1() {
    p_Val2_10_1_3_cast_fu_21554_p1 = esl_zext<13,12>(p_Val2_10_1_3_fu_21548_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_1_3_fu_21548_p2() {
    p_Val2_10_1_3_fu_21548_p2 = (!ap_const_lv12_E3.is_01() || !z_V_1_2_fu_21538_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_1_2_fu_21538_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_20_3_cast_fu_24461_p1() {
    p_Val2_10_20_3_cast_fu_24461_p1 = esl_zext<13,12>(p_Val2_10_20_3_fu_24455_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_20_3_fu_24455_p2() {
    p_Val2_10_20_3_fu_24455_p2 = (!ap_const_lv12_E3.is_01() || !z_V_20_2_fu_24445_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_20_2_fu_24445_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_21_3_cast_fu_24614_p1() {
    p_Val2_10_21_3_cast_fu_24614_p1 = esl_zext<13,12>(p_Val2_10_21_3_fu_24608_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_21_3_fu_24608_p2() {
    p_Val2_10_21_3_fu_24608_p2 = (!ap_const_lv12_E3.is_01() || !z_V_21_2_fu_24598_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_21_2_fu_24598_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_22_3_cast_fu_24767_p1() {
    p_Val2_10_22_3_cast_fu_24767_p1 = esl_zext<13,12>(p_Val2_10_22_3_fu_24761_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_22_3_fu_24761_p2() {
    p_Val2_10_22_3_fu_24761_p2 = (!ap_const_lv12_E3.is_01() || !z_V_22_2_fu_24751_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_22_2_fu_24751_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_23_3_cast_fu_24920_p1() {
    p_Val2_10_23_3_cast_fu_24920_p1 = esl_zext<13,12>(p_Val2_10_23_3_fu_24914_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_23_3_fu_24914_p2() {
    p_Val2_10_23_3_fu_24914_p2 = (!ap_const_lv12_E3.is_01() || !z_V_23_2_fu_24904_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_23_2_fu_24904_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_24_3_cast_fu_25073_p1() {
    p_Val2_10_24_3_cast_fu_25073_p1 = esl_zext<13,12>(p_Val2_10_24_3_fu_25067_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_24_3_fu_25067_p2() {
    p_Val2_10_24_3_fu_25067_p2 = (!ap_const_lv12_E3.is_01() || !z_V_24_2_fu_25057_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_24_2_fu_25057_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_25_3_cast_fu_25226_p1() {
    p_Val2_10_25_3_cast_fu_25226_p1 = esl_zext<13,12>(p_Val2_10_25_3_fu_25220_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_25_3_fu_25220_p2() {
    p_Val2_10_25_3_fu_25220_p2 = (!ap_const_lv12_E3.is_01() || !z_V_25_2_fu_25210_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_25_2_fu_25210_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_26_3_cast_fu_25379_p1() {
    p_Val2_10_26_3_cast_fu_25379_p1 = esl_zext<13,12>(p_Val2_10_26_3_fu_25373_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_26_3_fu_25373_p2() {
    p_Val2_10_26_3_fu_25373_p2 = (!ap_const_lv12_E3.is_01() || !z_V_26_2_fu_25363_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_26_2_fu_25363_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_27_3_cast_fu_25532_p1() {
    p_Val2_10_27_3_cast_fu_25532_p1 = esl_zext<13,12>(p_Val2_10_27_3_fu_25526_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_27_3_fu_25526_p2() {
    p_Val2_10_27_3_fu_25526_p2 = (!ap_const_lv12_E3.is_01() || !z_V_27_2_fu_25516_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_27_2_fu_25516_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_28_3_cast_fu_25685_p1() {
    p_Val2_10_28_3_cast_fu_25685_p1 = esl_zext<13,12>(p_Val2_10_28_3_fu_25679_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_28_3_fu_25679_p2() {
    p_Val2_10_28_3_fu_25679_p2 = (!ap_const_lv12_E3.is_01() || !z_V_28_2_fu_25669_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_28_2_fu_25669_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_29_3_cast_fu_25838_p1() {
    p_Val2_10_29_3_cast_fu_25838_p1 = esl_zext<13,12>(p_Val2_10_29_3_fu_25832_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_29_3_fu_25832_p2() {
    p_Val2_10_29_3_fu_25832_p2 = (!ap_const_lv12_E3.is_01() || !z_V_29_2_fu_25822_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_29_2_fu_25822_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_2_3_cast_fu_21707_p1() {
    p_Val2_10_2_3_cast_fu_21707_p1 = esl_zext<13,12>(p_Val2_10_2_3_fu_21701_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_2_3_fu_21701_p2() {
    p_Val2_10_2_3_fu_21701_p2 = (!ap_const_lv12_E3.is_01() || !z_V_2_2_fu_21691_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_2_2_fu_21691_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_30_3_cast_fu_25991_p1() {
    p_Val2_10_30_3_cast_fu_25991_p1 = esl_zext<13,12>(p_Val2_10_30_3_fu_25985_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_30_3_fu_25985_p2() {
    p_Val2_10_30_3_fu_25985_p2 = (!ap_const_lv12_E3.is_01() || !z_V_30_2_fu_25975_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_30_2_fu_25975_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_31_3_cast_fu_26144_p1() {
    p_Val2_10_31_3_cast_fu_26144_p1 = esl_zext<13,12>(p_Val2_10_31_3_fu_26138_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_31_3_fu_26138_p2() {
    p_Val2_10_31_3_fu_26138_p2 = (!ap_const_lv12_E3.is_01() || !z_V_31_2_fu_26128_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_31_2_fu_26128_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_32_3_cast_fu_26297_p1() {
    p_Val2_10_32_3_cast_fu_26297_p1 = esl_zext<13,12>(p_Val2_10_32_3_fu_26291_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_32_3_fu_26291_p2() {
    p_Val2_10_32_3_fu_26291_p2 = (!ap_const_lv12_E3.is_01() || !z_V_32_2_fu_26281_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_32_2_fu_26281_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_33_3_cast_fu_26450_p1() {
    p_Val2_10_33_3_cast_fu_26450_p1 = esl_zext<13,12>(p_Val2_10_33_3_fu_26444_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_33_3_fu_26444_p2() {
    p_Val2_10_33_3_fu_26444_p2 = (!ap_const_lv12_E3.is_01() || !z_V_33_2_fu_26434_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_33_2_fu_26434_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_34_3_cast_fu_26603_p1() {
    p_Val2_10_34_3_cast_fu_26603_p1 = esl_zext<13,12>(p_Val2_10_34_3_fu_26597_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_34_3_fu_26597_p2() {
    p_Val2_10_34_3_fu_26597_p2 = (!ap_const_lv12_E3.is_01() || !z_V_34_2_fu_26587_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_34_2_fu_26587_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_35_3_cast_fu_26756_p1() {
    p_Val2_10_35_3_cast_fu_26756_p1 = esl_zext<13,12>(p_Val2_10_35_3_fu_26750_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_35_3_fu_26750_p2() {
    p_Val2_10_35_3_fu_26750_p2 = (!ap_const_lv12_E3.is_01() || !z_V_35_2_fu_26740_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_35_2_fu_26740_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_36_3_cast_fu_26909_p1() {
    p_Val2_10_36_3_cast_fu_26909_p1 = esl_zext<13,12>(p_Val2_10_36_3_fu_26903_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_36_3_fu_26903_p2() {
    p_Val2_10_36_3_fu_26903_p2 = (!ap_const_lv12_E3.is_01() || !z_V_36_2_fu_26893_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_36_2_fu_26893_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_37_3_cast_fu_27062_p1() {
    p_Val2_10_37_3_cast_fu_27062_p1 = esl_zext<13,12>(p_Val2_10_37_3_fu_27056_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_37_3_fu_27056_p2() {
    p_Val2_10_37_3_fu_27056_p2 = (!ap_const_lv12_E3.is_01() || !z_V_37_2_fu_27046_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_37_2_fu_27046_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_38_3_cast_fu_27215_p1() {
    p_Val2_10_38_3_cast_fu_27215_p1 = esl_zext<13,12>(p_Val2_10_38_3_fu_27209_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_38_3_fu_27209_p2() {
    p_Val2_10_38_3_fu_27209_p2 = (!ap_const_lv12_E3.is_01() || !z_V_38_2_fu_27199_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_38_2_fu_27199_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_39_3_cast_fu_27368_p1() {
    p_Val2_10_39_3_cast_fu_27368_p1 = esl_zext<13,12>(p_Val2_10_39_3_fu_27362_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_39_3_fu_27362_p2() {
    p_Val2_10_39_3_fu_27362_p2 = (!ap_const_lv12_E3.is_01() || !z_V_39_2_fu_27352_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_39_2_fu_27352_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_3_3_cast_fu_21860_p1() {
    p_Val2_10_3_3_cast_fu_21860_p1 = esl_zext<13,12>(p_Val2_10_3_3_fu_21854_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_3_3_fu_21854_p2() {
    p_Val2_10_3_3_fu_21854_p2 = (!ap_const_lv12_E3.is_01() || !z_V_3_2_fu_21844_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_3_2_fu_21844_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_40_3_cast_fu_27521_p1() {
    p_Val2_10_40_3_cast_fu_27521_p1 = esl_zext<13,12>(p_Val2_10_40_3_fu_27515_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_40_3_fu_27515_p2() {
    p_Val2_10_40_3_fu_27515_p2 = (!ap_const_lv12_E3.is_01() || !z_V_40_2_fu_27505_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_40_2_fu_27505_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_41_3_cast_fu_27674_p1() {
    p_Val2_10_41_3_cast_fu_27674_p1 = esl_zext<13,12>(p_Val2_10_41_3_fu_27668_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_41_3_fu_27668_p2() {
    p_Val2_10_41_3_fu_27668_p2 = (!ap_const_lv12_E3.is_01() || !z_V_41_2_fu_27658_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_41_2_fu_27658_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_4_3_cast_fu_22013_p1() {
    p_Val2_10_4_3_cast_fu_22013_p1 = esl_zext<13,12>(p_Val2_10_4_3_fu_22007_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_4_3_fu_22007_p2() {
    p_Val2_10_4_3_fu_22007_p2 = (!ap_const_lv12_E3.is_01() || !z_V_4_2_fu_21997_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_4_2_fu_21997_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_5_3_cast_fu_22166_p1() {
    p_Val2_10_5_3_cast_fu_22166_p1 = esl_zext<13,12>(p_Val2_10_5_3_fu_22160_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_5_3_fu_22160_p2() {
    p_Val2_10_5_3_fu_22160_p2 = (!ap_const_lv12_E3.is_01() || !z_V_5_2_fu_22150_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_5_2_fu_22150_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_6_3_cast_fu_22319_p1() {
    p_Val2_10_6_3_cast_fu_22319_p1 = esl_zext<13,12>(p_Val2_10_6_3_fu_22313_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_6_3_fu_22313_p2() {
    p_Val2_10_6_3_fu_22313_p2 = (!ap_const_lv12_E3.is_01() || !z_V_6_2_fu_22303_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_6_2_fu_22303_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_7_3_cast_fu_22472_p1() {
    p_Val2_10_7_3_cast_fu_22472_p1 = esl_zext<13,12>(p_Val2_10_7_3_fu_22466_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_7_3_fu_22466_p2() {
    p_Val2_10_7_3_fu_22466_p2 = (!ap_const_lv12_E3.is_01() || !z_V_7_2_fu_22456_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_7_2_fu_22456_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_8_3_cast_fu_22625_p1() {
    p_Val2_10_8_3_cast_fu_22625_p1 = esl_zext<13,12>(p_Val2_10_8_3_fu_22619_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_8_3_fu_22619_p2() {
    p_Val2_10_8_3_fu_22619_p2 = (!ap_const_lv12_E3.is_01() || !z_V_8_2_fu_22609_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_8_2_fu_22609_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_9_3_cast_fu_22778_p1() {
    p_Val2_10_9_3_cast_fu_22778_p1 = esl_zext<13,12>(p_Val2_10_9_3_fu_22772_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_9_3_fu_22772_p2() {
    p_Val2_10_9_3_fu_22772_p2 = (!ap_const_lv12_E3.is_01() || !z_V_9_2_fu_22762_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_9_2_fu_22762_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_11_0_1_fu_2153_p1() {
    p_Val2_11_0_1_fu_2153_p1 = esl_sext<15,13>(tmp_4_fu_2109_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_2_fu_7071_p1() {
    p_Val2_11_0_2_fu_7071_p1 = esl_sext<15,12>(tmp_8_fu_7027_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_3_fu_7149_p1() {
    p_Val2_11_0_3_fu_7149_p1 = esl_sext<15,12>(tmp_27_0_2_fu_7109_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_4_fu_15176_p1() {
    p_Val2_11_0_4_fu_15176_p1 = esl_sext<15,11>(tmp_27_0_3_reg_35851.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_5_fu_15251_p1() {
    p_Val2_11_0_5_fu_15251_p1 = esl_sext<15,10>(tmp_27_0_4_fu_15211_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_6_fu_21439_p1() {
    p_Val2_11_0_6_fu_21439_p1 = esl_sext<15,9>(tmp_27_0_5_reg_37279.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_1_fu_3333_p1() {
    p_Val2_11_10_1_fu_3333_p1 = esl_sext<15,13>(tmp_203_fu_3289_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_2_fu_9011_p1() {
    p_Val2_11_10_2_fu_9011_p1 = esl_sext<15,12>(tmp_206_fu_8967_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_3_fu_9089_p1() {
    p_Val2_11_10_3_fu_9089_p1 = esl_sext<15,12>(tmp_27_10_2_fu_9049_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_4_fu_16656_p1() {
    p_Val2_11_10_4_fu_16656_p1 = esl_sext<15,11>(tmp_27_10_3_reg_36191.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_5_fu_16731_p1() {
    p_Val2_11_10_5_fu_16731_p1 = esl_sext<15,10>(tmp_27_10_4_fu_16691_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_6_fu_22969_p1() {
    p_Val2_11_10_6_fu_22969_p1 = esl_sext<15,9>(tmp_27_10_5_reg_37619.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_1_fu_3451_p1() {
    p_Val2_11_11_1_fu_3451_p1 = esl_sext<15,13>(tmp_223_fu_3407_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_2_fu_9205_p1() {
    p_Val2_11_11_2_fu_9205_p1 = esl_sext<15,12>(tmp_226_fu_9161_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_3_fu_9283_p1() {
    p_Val2_11_11_3_fu_9283_p1 = esl_sext<15,12>(tmp_27_11_2_fu_9243_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_4_fu_16804_p1() {
    p_Val2_11_11_4_fu_16804_p1 = esl_sext<15,11>(tmp_27_11_3_reg_36225.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_5_fu_16879_p1() {
    p_Val2_11_11_5_fu_16879_p1 = esl_sext<15,10>(tmp_27_11_4_fu_16839_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_6_fu_23122_p1() {
    p_Val2_11_11_6_fu_23122_p1 = esl_sext<15,9>(tmp_27_11_5_reg_37653.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_1_fu_3569_p1() {
    p_Val2_11_12_1_fu_3569_p1 = esl_sext<15,13>(tmp_243_fu_3525_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_2_fu_9399_p1() {
    p_Val2_11_12_2_fu_9399_p1 = esl_sext<15,12>(tmp_246_fu_9355_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_3_fu_9477_p1() {
    p_Val2_11_12_3_fu_9477_p1 = esl_sext<15,12>(tmp_27_12_2_fu_9437_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_4_fu_16952_p1() {
    p_Val2_11_12_4_fu_16952_p1 = esl_sext<15,11>(tmp_27_12_3_reg_36259.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_5_fu_17027_p1() {
    p_Val2_11_12_5_fu_17027_p1 = esl_sext<15,10>(tmp_27_12_4_fu_16987_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_6_fu_23275_p1() {
    p_Val2_11_12_6_fu_23275_p1 = esl_sext<15,9>(tmp_27_12_5_reg_37687.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_1_fu_3687_p1() {
    p_Val2_11_13_1_fu_3687_p1 = esl_sext<15,13>(tmp_263_fu_3643_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_2_fu_9593_p1() {
    p_Val2_11_13_2_fu_9593_p1 = esl_sext<15,12>(tmp_266_fu_9549_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_3_fu_9671_p1() {
    p_Val2_11_13_3_fu_9671_p1 = esl_sext<15,12>(tmp_27_13_2_fu_9631_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_4_fu_17100_p1() {
    p_Val2_11_13_4_fu_17100_p1 = esl_sext<15,11>(tmp_27_13_3_reg_36293.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_5_fu_17175_p1() {
    p_Val2_11_13_5_fu_17175_p1 = esl_sext<15,10>(tmp_27_13_4_fu_17135_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_6_fu_23428_p1() {
    p_Val2_11_13_6_fu_23428_p1 = esl_sext<15,9>(tmp_27_13_5_reg_37721.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_1_fu_3805_p1() {
    p_Val2_11_14_1_fu_3805_p1 = esl_sext<15,13>(tmp_283_fu_3761_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_2_fu_9787_p1() {
    p_Val2_11_14_2_fu_9787_p1 = esl_sext<15,12>(tmp_286_fu_9743_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_3_fu_9865_p1() {
    p_Val2_11_14_3_fu_9865_p1 = esl_sext<15,12>(tmp_27_14_2_fu_9825_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_4_fu_17248_p1() {
    p_Val2_11_14_4_fu_17248_p1 = esl_sext<15,11>(tmp_27_14_3_reg_36327.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_5_fu_17323_p1() {
    p_Val2_11_14_5_fu_17323_p1 = esl_sext<15,10>(tmp_27_14_4_fu_17283_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_6_fu_23581_p1() {
    p_Val2_11_14_6_fu_23581_p1 = esl_sext<15,9>(tmp_27_14_5_reg_37755.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_1_fu_3923_p1() {
    p_Val2_11_15_1_fu_3923_p1 = esl_sext<15,13>(tmp_303_fu_3879_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_2_fu_9981_p1() {
    p_Val2_11_15_2_fu_9981_p1 = esl_sext<15,12>(tmp_306_fu_9937_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_3_fu_10059_p1() {
    p_Val2_11_15_3_fu_10059_p1 = esl_sext<15,12>(tmp_27_15_2_fu_10019_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_4_fu_17396_p1() {
    p_Val2_11_15_4_fu_17396_p1 = esl_sext<15,11>(tmp_27_15_3_reg_36361.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_5_fu_17471_p1() {
    p_Val2_11_15_5_fu_17471_p1 = esl_sext<15,10>(tmp_27_15_4_fu_17431_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_6_fu_23734_p1() {
    p_Val2_11_15_6_fu_23734_p1 = esl_sext<15,9>(tmp_27_15_5_reg_37789.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_1_fu_4041_p1() {
    p_Val2_11_16_1_fu_4041_p1 = esl_sext<15,13>(tmp_323_fu_3997_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_2_fu_10175_p1() {
    p_Val2_11_16_2_fu_10175_p1 = esl_sext<15,12>(tmp_326_fu_10131_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_3_fu_10253_p1() {
    p_Val2_11_16_3_fu_10253_p1 = esl_sext<15,12>(tmp_27_16_2_fu_10213_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_4_fu_17544_p1() {
    p_Val2_11_16_4_fu_17544_p1 = esl_sext<15,11>(tmp_27_16_3_reg_36395.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_5_fu_17619_p1() {
    p_Val2_11_16_5_fu_17619_p1 = esl_sext<15,10>(tmp_27_16_4_fu_17579_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_6_fu_23887_p1() {
    p_Val2_11_16_6_fu_23887_p1 = esl_sext<15,9>(tmp_27_16_5_reg_37823.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_1_fu_4159_p1() {
    p_Val2_11_17_1_fu_4159_p1 = esl_sext<15,13>(tmp_343_fu_4115_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_2_fu_10369_p1() {
    p_Val2_11_17_2_fu_10369_p1 = esl_sext<15,12>(tmp_346_fu_10325_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_3_fu_10447_p1() {
    p_Val2_11_17_3_fu_10447_p1 = esl_sext<15,12>(tmp_27_17_2_fu_10407_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_4_fu_17692_p1() {
    p_Val2_11_17_4_fu_17692_p1 = esl_sext<15,11>(tmp_27_17_3_reg_36429.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_5_fu_17767_p1() {
    p_Val2_11_17_5_fu_17767_p1 = esl_sext<15,10>(tmp_27_17_4_fu_17727_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_6_fu_24040_p1() {
    p_Val2_11_17_6_fu_24040_p1 = esl_sext<15,9>(tmp_27_17_5_reg_37857.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_1_fu_4277_p1() {
    p_Val2_11_18_1_fu_4277_p1 = esl_sext<15,13>(tmp_363_fu_4233_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_2_fu_10563_p1() {
    p_Val2_11_18_2_fu_10563_p1 = esl_sext<15,12>(tmp_366_fu_10519_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_3_fu_10641_p1() {
    p_Val2_11_18_3_fu_10641_p1 = esl_sext<15,12>(tmp_27_18_2_fu_10601_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_4_fu_17840_p1() {
    p_Val2_11_18_4_fu_17840_p1 = esl_sext<15,11>(tmp_27_18_3_reg_36463.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_5_fu_17915_p1() {
    p_Val2_11_18_5_fu_17915_p1 = esl_sext<15,10>(tmp_27_18_4_fu_17875_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_6_fu_24193_p1() {
    p_Val2_11_18_6_fu_24193_p1 = esl_sext<15,9>(tmp_27_18_5_reg_37891.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_1_fu_4395_p1() {
    p_Val2_11_19_1_fu_4395_p1 = esl_sext<15,13>(tmp_383_fu_4351_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_2_fu_10757_p1() {
    p_Val2_11_19_2_fu_10757_p1 = esl_sext<15,12>(tmp_386_fu_10713_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_3_fu_10835_p1() {
    p_Val2_11_19_3_fu_10835_p1 = esl_sext<15,12>(tmp_27_19_2_fu_10795_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_4_fu_17988_p1() {
    p_Val2_11_19_4_fu_17988_p1 = esl_sext<15,11>(tmp_27_19_3_reg_36497.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_5_fu_18063_p1() {
    p_Val2_11_19_5_fu_18063_p1 = esl_sext<15,10>(tmp_27_19_4_fu_18023_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_6_fu_24346_p1() {
    p_Val2_11_19_6_fu_24346_p1 = esl_sext<15,9>(tmp_27_19_5_reg_37925.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_1_fu_2271_p1() {
    p_Val2_11_1_1_fu_2271_p1 = esl_sext<15,13>(tmp_23_fu_2227_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_2_fu_7265_p1() {
    p_Val2_11_1_2_fu_7265_p1 = esl_sext<15,12>(tmp_26_fu_7221_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_3_fu_7343_p1() {
    p_Val2_11_1_3_fu_7343_p1 = esl_sext<15,12>(tmp_27_1_2_fu_7303_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_4_fu_15324_p1() {
    p_Val2_11_1_4_fu_15324_p1 = esl_sext<15,11>(tmp_27_1_3_reg_35885.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_5_fu_15399_p1() {
    p_Val2_11_1_5_fu_15399_p1 = esl_sext<15,10>(tmp_27_1_4_fu_15359_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_6_fu_21592_p1() {
    p_Val2_11_1_6_fu_21592_p1 = esl_sext<15,9>(tmp_27_1_5_reg_37313.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_1_fu_4513_p1() {
    p_Val2_11_20_1_fu_4513_p1 = esl_sext<15,13>(tmp_403_fu_4469_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_2_fu_10951_p1() {
    p_Val2_11_20_2_fu_10951_p1 = esl_sext<15,12>(tmp_406_fu_10907_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_3_fu_11029_p1() {
    p_Val2_11_20_3_fu_11029_p1 = esl_sext<15,12>(tmp_27_20_2_fu_10989_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_4_fu_18136_p1() {
    p_Val2_11_20_4_fu_18136_p1 = esl_sext<15,11>(tmp_27_20_3_reg_36531.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_5_fu_18211_p1() {
    p_Val2_11_20_5_fu_18211_p1 = esl_sext<15,10>(tmp_27_20_4_fu_18171_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_6_fu_24499_p1() {
    p_Val2_11_20_6_fu_24499_p1 = esl_sext<15,9>(tmp_27_20_5_reg_37959.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_1_fu_4631_p1() {
    p_Val2_11_21_1_fu_4631_p1 = esl_sext<15,13>(tmp_423_fu_4587_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_2_fu_11145_p1() {
    p_Val2_11_21_2_fu_11145_p1 = esl_sext<15,12>(tmp_426_fu_11101_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_3_fu_11223_p1() {
    p_Val2_11_21_3_fu_11223_p1 = esl_sext<15,12>(tmp_27_21_2_fu_11183_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_4_fu_18284_p1() {
    p_Val2_11_21_4_fu_18284_p1 = esl_sext<15,11>(tmp_27_21_3_reg_36565.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_5_fu_18359_p1() {
    p_Val2_11_21_5_fu_18359_p1 = esl_sext<15,10>(tmp_27_21_4_fu_18319_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_6_fu_24652_p1() {
    p_Val2_11_21_6_fu_24652_p1 = esl_sext<15,9>(tmp_27_21_5_reg_37993.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_1_fu_4749_p1() {
    p_Val2_11_22_1_fu_4749_p1 = esl_sext<15,13>(tmp_443_fu_4705_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_2_fu_11339_p1() {
    p_Val2_11_22_2_fu_11339_p1 = esl_sext<15,12>(tmp_446_fu_11295_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_3_fu_11417_p1() {
    p_Val2_11_22_3_fu_11417_p1 = esl_sext<15,12>(tmp_27_22_2_fu_11377_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_4_fu_18432_p1() {
    p_Val2_11_22_4_fu_18432_p1 = esl_sext<15,11>(tmp_27_22_3_reg_36599.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_5_fu_18507_p1() {
    p_Val2_11_22_5_fu_18507_p1 = esl_sext<15,10>(tmp_27_22_4_fu_18467_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_6_fu_24805_p1() {
    p_Val2_11_22_6_fu_24805_p1 = esl_sext<15,9>(tmp_27_22_5_reg_38027.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_1_fu_4867_p1() {
    p_Val2_11_23_1_fu_4867_p1 = esl_sext<15,13>(tmp_463_fu_4823_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_2_fu_11533_p1() {
    p_Val2_11_23_2_fu_11533_p1 = esl_sext<15,12>(tmp_466_fu_11489_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_3_fu_11611_p1() {
    p_Val2_11_23_3_fu_11611_p1 = esl_sext<15,12>(tmp_27_23_2_fu_11571_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_4_fu_18580_p1() {
    p_Val2_11_23_4_fu_18580_p1 = esl_sext<15,11>(tmp_27_23_3_reg_36633.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_5_fu_18655_p1() {
    p_Val2_11_23_5_fu_18655_p1 = esl_sext<15,10>(tmp_27_23_4_fu_18615_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_6_fu_24958_p1() {
    p_Val2_11_23_6_fu_24958_p1 = esl_sext<15,9>(tmp_27_23_5_reg_38061.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_1_fu_4985_p1() {
    p_Val2_11_24_1_fu_4985_p1 = esl_sext<15,13>(tmp_483_fu_4941_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_2_fu_11727_p1() {
    p_Val2_11_24_2_fu_11727_p1 = esl_sext<15,12>(tmp_486_fu_11683_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_3_fu_11805_p1() {
    p_Val2_11_24_3_fu_11805_p1 = esl_sext<15,12>(tmp_27_24_2_fu_11765_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_4_fu_18728_p1() {
    p_Val2_11_24_4_fu_18728_p1 = esl_sext<15,11>(tmp_27_24_3_reg_36667.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_5_fu_18803_p1() {
    p_Val2_11_24_5_fu_18803_p1 = esl_sext<15,10>(tmp_27_24_4_fu_18763_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_6_fu_25111_p1() {
    p_Val2_11_24_6_fu_25111_p1 = esl_sext<15,9>(tmp_27_24_5_reg_38095.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_1_fu_5103_p1() {
    p_Val2_11_25_1_fu_5103_p1 = esl_sext<15,13>(tmp_503_fu_5059_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_2_fu_11921_p1() {
    p_Val2_11_25_2_fu_11921_p1 = esl_sext<15,12>(tmp_506_fu_11877_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_3_fu_11999_p1() {
    p_Val2_11_25_3_fu_11999_p1 = esl_sext<15,12>(tmp_27_25_2_fu_11959_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_4_fu_18876_p1() {
    p_Val2_11_25_4_fu_18876_p1 = esl_sext<15,11>(tmp_27_25_3_reg_36701.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_5_fu_18951_p1() {
    p_Val2_11_25_5_fu_18951_p1 = esl_sext<15,10>(tmp_27_25_4_fu_18911_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_6_fu_25264_p1() {
    p_Val2_11_25_6_fu_25264_p1 = esl_sext<15,9>(tmp_27_25_5_reg_38129.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_1_fu_5221_p1() {
    p_Val2_11_26_1_fu_5221_p1 = esl_sext<15,13>(tmp_523_fu_5177_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_2_fu_12115_p1() {
    p_Val2_11_26_2_fu_12115_p1 = esl_sext<15,12>(tmp_526_fu_12071_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_3_fu_12193_p1() {
    p_Val2_11_26_3_fu_12193_p1 = esl_sext<15,12>(tmp_27_26_2_fu_12153_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_4_fu_19024_p1() {
    p_Val2_11_26_4_fu_19024_p1 = esl_sext<15,11>(tmp_27_26_3_reg_36735.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_5_fu_19099_p1() {
    p_Val2_11_26_5_fu_19099_p1 = esl_sext<15,10>(tmp_27_26_4_fu_19059_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_6_fu_25417_p1() {
    p_Val2_11_26_6_fu_25417_p1 = esl_sext<15,9>(tmp_27_26_5_reg_38163.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_1_fu_5339_p1() {
    p_Val2_11_27_1_fu_5339_p1 = esl_sext<15,13>(tmp_543_fu_5295_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_2_fu_12309_p1() {
    p_Val2_11_27_2_fu_12309_p1 = esl_sext<15,12>(tmp_546_fu_12265_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_3_fu_12387_p1() {
    p_Val2_11_27_3_fu_12387_p1 = esl_sext<15,12>(tmp_27_27_2_fu_12347_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_4_fu_19172_p1() {
    p_Val2_11_27_4_fu_19172_p1 = esl_sext<15,11>(tmp_27_27_3_reg_36769.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_5_fu_19247_p1() {
    p_Val2_11_27_5_fu_19247_p1 = esl_sext<15,10>(tmp_27_27_4_fu_19207_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_6_fu_25570_p1() {
    p_Val2_11_27_6_fu_25570_p1 = esl_sext<15,9>(tmp_27_27_5_reg_38197.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_1_fu_5457_p1() {
    p_Val2_11_28_1_fu_5457_p1 = esl_sext<15,13>(tmp_563_fu_5413_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_2_fu_12503_p1() {
    p_Val2_11_28_2_fu_12503_p1 = esl_sext<15,12>(tmp_566_fu_12459_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_3_fu_12581_p1() {
    p_Val2_11_28_3_fu_12581_p1 = esl_sext<15,12>(tmp_27_28_2_fu_12541_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_4_fu_19320_p1() {
    p_Val2_11_28_4_fu_19320_p1 = esl_sext<15,11>(tmp_27_28_3_reg_36803.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_5_fu_19395_p1() {
    p_Val2_11_28_5_fu_19395_p1 = esl_sext<15,10>(tmp_27_28_4_fu_19355_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_6_fu_25723_p1() {
    p_Val2_11_28_6_fu_25723_p1 = esl_sext<15,9>(tmp_27_28_5_reg_38231.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_1_fu_5575_p1() {
    p_Val2_11_29_1_fu_5575_p1 = esl_sext<15,13>(tmp_583_fu_5531_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_2_fu_12697_p1() {
    p_Val2_11_29_2_fu_12697_p1 = esl_sext<15,12>(tmp_586_fu_12653_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_3_fu_12775_p1() {
    p_Val2_11_29_3_fu_12775_p1 = esl_sext<15,12>(tmp_27_29_2_fu_12735_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_4_fu_19468_p1() {
    p_Val2_11_29_4_fu_19468_p1 = esl_sext<15,11>(tmp_27_29_3_reg_36837.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_5_fu_19543_p1() {
    p_Val2_11_29_5_fu_19543_p1 = esl_sext<15,10>(tmp_27_29_4_fu_19503_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_6_fu_25876_p1() {
    p_Val2_11_29_6_fu_25876_p1 = esl_sext<15,9>(tmp_27_29_5_reg_38265.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_1_fu_2389_p1() {
    p_Val2_11_2_1_fu_2389_p1 = esl_sext<15,13>(tmp_43_fu_2345_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_2_fu_7459_p1() {
    p_Val2_11_2_2_fu_7459_p1 = esl_sext<15,12>(tmp_46_fu_7415_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_3_fu_7537_p1() {
    p_Val2_11_2_3_fu_7537_p1 = esl_sext<15,12>(tmp_27_2_2_fu_7497_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_4_fu_15472_p1() {
    p_Val2_11_2_4_fu_15472_p1 = esl_sext<15,11>(tmp_27_2_3_reg_35919.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_5_fu_15547_p1() {
    p_Val2_11_2_5_fu_15547_p1 = esl_sext<15,10>(tmp_27_2_4_fu_15507_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_6_fu_21745_p1() {
    p_Val2_11_2_6_fu_21745_p1 = esl_sext<15,9>(tmp_27_2_5_reg_37347.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_1_fu_5693_p1() {
    p_Val2_11_30_1_fu_5693_p1 = esl_sext<15,13>(tmp_603_fu_5649_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_2_fu_12891_p1() {
    p_Val2_11_30_2_fu_12891_p1 = esl_sext<15,12>(tmp_606_fu_12847_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_3_fu_12969_p1() {
    p_Val2_11_30_3_fu_12969_p1 = esl_sext<15,12>(tmp_27_30_2_fu_12929_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_4_fu_19616_p1() {
    p_Val2_11_30_4_fu_19616_p1 = esl_sext<15,11>(tmp_27_30_3_reg_36871.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_5_fu_19691_p1() {
    p_Val2_11_30_5_fu_19691_p1 = esl_sext<15,10>(tmp_27_30_4_fu_19651_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_6_fu_26029_p1() {
    p_Val2_11_30_6_fu_26029_p1 = esl_sext<15,9>(tmp_27_30_5_reg_38299.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_1_fu_5811_p1() {
    p_Val2_11_31_1_fu_5811_p1 = esl_sext<15,13>(tmp_623_fu_5767_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_2_fu_13085_p1() {
    p_Val2_11_31_2_fu_13085_p1 = esl_sext<15,12>(tmp_626_fu_13041_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_3_fu_13163_p1() {
    p_Val2_11_31_3_fu_13163_p1 = esl_sext<15,12>(tmp_27_31_2_fu_13123_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_4_fu_19764_p1() {
    p_Val2_11_31_4_fu_19764_p1 = esl_sext<15,11>(tmp_27_31_3_reg_36905.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_5_fu_19839_p1() {
    p_Val2_11_31_5_fu_19839_p1 = esl_sext<15,10>(tmp_27_31_4_fu_19799_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_6_fu_26182_p1() {
    p_Val2_11_31_6_fu_26182_p1 = esl_sext<15,9>(tmp_27_31_5_reg_38333.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_1_fu_5929_p1() {
    p_Val2_11_32_1_fu_5929_p1 = esl_sext<15,13>(tmp_643_fu_5885_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_2_fu_13279_p1() {
    p_Val2_11_32_2_fu_13279_p1 = esl_sext<15,12>(tmp_646_fu_13235_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_3_fu_13357_p1() {
    p_Val2_11_32_3_fu_13357_p1 = esl_sext<15,12>(tmp_27_32_2_fu_13317_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_4_fu_19912_p1() {
    p_Val2_11_32_4_fu_19912_p1 = esl_sext<15,11>(tmp_27_32_3_reg_36939.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_5_fu_19987_p1() {
    p_Val2_11_32_5_fu_19987_p1 = esl_sext<15,10>(tmp_27_32_4_fu_19947_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_6_fu_26335_p1() {
    p_Val2_11_32_6_fu_26335_p1 = esl_sext<15,9>(tmp_27_32_5_reg_38367.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_1_fu_6047_p1() {
    p_Val2_11_33_1_fu_6047_p1 = esl_sext<15,13>(tmp_663_fu_6003_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_2_fu_13473_p1() {
    p_Val2_11_33_2_fu_13473_p1 = esl_sext<15,12>(tmp_666_fu_13429_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_3_fu_13551_p1() {
    p_Val2_11_33_3_fu_13551_p1 = esl_sext<15,12>(tmp_27_33_2_fu_13511_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_4_fu_20060_p1() {
    p_Val2_11_33_4_fu_20060_p1 = esl_sext<15,11>(tmp_27_33_3_reg_36973.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_5_fu_20135_p1() {
    p_Val2_11_33_5_fu_20135_p1 = esl_sext<15,10>(tmp_27_33_4_fu_20095_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_6_fu_26488_p1() {
    p_Val2_11_33_6_fu_26488_p1 = esl_sext<15,9>(tmp_27_33_5_reg_38401.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_1_fu_6165_p1() {
    p_Val2_11_34_1_fu_6165_p1 = esl_sext<15,13>(tmp_683_fu_6121_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_2_fu_13667_p1() {
    p_Val2_11_34_2_fu_13667_p1 = esl_sext<15,12>(tmp_686_fu_13623_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_3_fu_13745_p1() {
    p_Val2_11_34_3_fu_13745_p1 = esl_sext<15,12>(tmp_27_34_2_fu_13705_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_4_fu_20208_p1() {
    p_Val2_11_34_4_fu_20208_p1 = esl_sext<15,11>(tmp_27_34_3_reg_37007.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_5_fu_20283_p1() {
    p_Val2_11_34_5_fu_20283_p1 = esl_sext<15,10>(tmp_27_34_4_fu_20243_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_6_fu_26641_p1() {
    p_Val2_11_34_6_fu_26641_p1 = esl_sext<15,9>(tmp_27_34_5_reg_38435.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_1_fu_6283_p1() {
    p_Val2_11_35_1_fu_6283_p1 = esl_sext<15,13>(tmp_703_fu_6239_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_2_fu_13861_p1() {
    p_Val2_11_35_2_fu_13861_p1 = esl_sext<15,12>(tmp_706_fu_13817_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_3_fu_13939_p1() {
    p_Val2_11_35_3_fu_13939_p1 = esl_sext<15,12>(tmp_27_35_2_fu_13899_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_4_fu_20356_p1() {
    p_Val2_11_35_4_fu_20356_p1 = esl_sext<15,11>(tmp_27_35_3_reg_37041.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_5_fu_20431_p1() {
    p_Val2_11_35_5_fu_20431_p1 = esl_sext<15,10>(tmp_27_35_4_fu_20391_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_6_fu_26794_p1() {
    p_Val2_11_35_6_fu_26794_p1 = esl_sext<15,9>(tmp_27_35_5_reg_38469.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_1_fu_6401_p1() {
    p_Val2_11_36_1_fu_6401_p1 = esl_sext<15,13>(tmp_723_fu_6357_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_2_fu_14055_p1() {
    p_Val2_11_36_2_fu_14055_p1 = esl_sext<15,12>(tmp_726_fu_14011_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_3_fu_14133_p1() {
    p_Val2_11_36_3_fu_14133_p1 = esl_sext<15,12>(tmp_27_36_2_fu_14093_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_4_fu_20504_p1() {
    p_Val2_11_36_4_fu_20504_p1 = esl_sext<15,11>(tmp_27_36_3_reg_37075.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_5_fu_20579_p1() {
    p_Val2_11_36_5_fu_20579_p1 = esl_sext<15,10>(tmp_27_36_4_fu_20539_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_6_fu_26947_p1() {
    p_Val2_11_36_6_fu_26947_p1 = esl_sext<15,9>(tmp_27_36_5_reg_38503.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_1_fu_6519_p1() {
    p_Val2_11_37_1_fu_6519_p1 = esl_sext<15,13>(tmp_743_fu_6475_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_2_fu_14249_p1() {
    p_Val2_11_37_2_fu_14249_p1 = esl_sext<15,12>(tmp_746_fu_14205_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_3_fu_14327_p1() {
    p_Val2_11_37_3_fu_14327_p1 = esl_sext<15,12>(tmp_27_37_2_fu_14287_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_4_fu_20652_p1() {
    p_Val2_11_37_4_fu_20652_p1 = esl_sext<15,11>(tmp_27_37_3_reg_37109.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_5_fu_20727_p1() {
    p_Val2_11_37_5_fu_20727_p1 = esl_sext<15,10>(tmp_27_37_4_fu_20687_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_6_fu_27100_p1() {
    p_Val2_11_37_6_fu_27100_p1 = esl_sext<15,9>(tmp_27_37_5_reg_38537.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_1_fu_6637_p1() {
    p_Val2_11_38_1_fu_6637_p1 = esl_sext<15,13>(tmp_763_fu_6593_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_2_fu_14443_p1() {
    p_Val2_11_38_2_fu_14443_p1 = esl_sext<15,12>(tmp_766_fu_14399_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_3_fu_14521_p1() {
    p_Val2_11_38_3_fu_14521_p1 = esl_sext<15,12>(tmp_27_38_2_fu_14481_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_4_fu_20800_p1() {
    p_Val2_11_38_4_fu_20800_p1 = esl_sext<15,11>(tmp_27_38_3_reg_37143.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_5_fu_20875_p1() {
    p_Val2_11_38_5_fu_20875_p1 = esl_sext<15,10>(tmp_27_38_4_fu_20835_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_6_fu_27253_p1() {
    p_Val2_11_38_6_fu_27253_p1 = esl_sext<15,9>(tmp_27_38_5_reg_38571.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_1_fu_6755_p1() {
    p_Val2_11_39_1_fu_6755_p1 = esl_sext<15,13>(tmp_783_fu_6711_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_2_fu_14637_p1() {
    p_Val2_11_39_2_fu_14637_p1 = esl_sext<15,12>(tmp_786_fu_14593_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_3_fu_14715_p1() {
    p_Val2_11_39_3_fu_14715_p1 = esl_sext<15,12>(tmp_27_39_2_fu_14675_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_4_fu_20948_p1() {
    p_Val2_11_39_4_fu_20948_p1 = esl_sext<15,11>(tmp_27_39_3_reg_37177.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_5_fu_21023_p1() {
    p_Val2_11_39_5_fu_21023_p1 = esl_sext<15,10>(tmp_27_39_4_fu_20983_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_6_fu_27406_p1() {
    p_Val2_11_39_6_fu_27406_p1 = esl_sext<15,9>(tmp_27_39_5_reg_38605.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_1_fu_2507_p1() {
    p_Val2_11_3_1_fu_2507_p1 = esl_sext<15,13>(tmp_63_fu_2463_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_2_fu_7653_p1() {
    p_Val2_11_3_2_fu_7653_p1 = esl_sext<15,12>(tmp_66_fu_7609_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_3_fu_7731_p1() {
    p_Val2_11_3_3_fu_7731_p1 = esl_sext<15,12>(tmp_27_3_2_fu_7691_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_4_fu_15620_p1() {
    p_Val2_11_3_4_fu_15620_p1 = esl_sext<15,11>(tmp_27_3_3_reg_35953.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_5_fu_15695_p1() {
    p_Val2_11_3_5_fu_15695_p1 = esl_sext<15,10>(tmp_27_3_4_fu_15655_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_6_fu_21898_p1() {
    p_Val2_11_3_6_fu_21898_p1 = esl_sext<15,9>(tmp_27_3_5_reg_37381.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_1_fu_6873_p1() {
    p_Val2_11_40_1_fu_6873_p1 = esl_sext<15,13>(tmp_803_fu_6829_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_2_fu_14831_p1() {
    p_Val2_11_40_2_fu_14831_p1 = esl_sext<15,12>(tmp_806_fu_14787_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_3_fu_14909_p1() {
    p_Val2_11_40_3_fu_14909_p1 = esl_sext<15,12>(tmp_27_40_2_fu_14869_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_4_fu_21096_p1() {
    p_Val2_11_40_4_fu_21096_p1 = esl_sext<15,11>(tmp_27_40_3_reg_37211.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_5_fu_21171_p1() {
    p_Val2_11_40_5_fu_21171_p1 = esl_sext<15,10>(tmp_27_40_4_fu_21131_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_6_fu_27559_p1() {
    p_Val2_11_40_6_fu_27559_p1 = esl_sext<15,9>(tmp_27_40_5_reg_38639.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_1_fu_6991_p1() {
    p_Val2_11_41_1_fu_6991_p1 = esl_sext<15,13>(tmp_823_fu_6947_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_2_fu_15025_p1() {
    p_Val2_11_41_2_fu_15025_p1 = esl_sext<15,12>(tmp_826_fu_14981_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_3_fu_15103_p1() {
    p_Val2_11_41_3_fu_15103_p1 = esl_sext<15,12>(tmp_27_41_2_fu_15063_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_4_fu_21244_p1() {
    p_Val2_11_41_4_fu_21244_p1 = esl_sext<15,11>(tmp_27_41_3_reg_37245.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_5_fu_21319_p1() {
    p_Val2_11_41_5_fu_21319_p1 = esl_sext<15,10>(tmp_27_41_4_fu_21279_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_6_fu_27712_p1() {
    p_Val2_11_41_6_fu_27712_p1 = esl_sext<15,9>(tmp_27_41_5_reg_38673.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_1_fu_2625_p1() {
    p_Val2_11_4_1_fu_2625_p1 = esl_sext<15,13>(tmp_83_fu_2581_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_2_fu_7847_p1() {
    p_Val2_11_4_2_fu_7847_p1 = esl_sext<15,12>(tmp_86_fu_7803_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_3_fu_7925_p1() {
    p_Val2_11_4_3_fu_7925_p1 = esl_sext<15,12>(tmp_27_4_2_fu_7885_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_4_fu_15768_p1() {
    p_Val2_11_4_4_fu_15768_p1 = esl_sext<15,11>(tmp_27_4_3_reg_35987.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_5_fu_15843_p1() {
    p_Val2_11_4_5_fu_15843_p1 = esl_sext<15,10>(tmp_27_4_4_fu_15803_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_6_fu_22051_p1() {
    p_Val2_11_4_6_fu_22051_p1 = esl_sext<15,9>(tmp_27_4_5_reg_37415.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_1_fu_2743_p1() {
    p_Val2_11_5_1_fu_2743_p1 = esl_sext<15,13>(tmp_103_fu_2699_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_2_fu_8041_p1() {
    p_Val2_11_5_2_fu_8041_p1 = esl_sext<15,12>(tmp_106_fu_7997_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_3_fu_8119_p1() {
    p_Val2_11_5_3_fu_8119_p1 = esl_sext<15,12>(tmp_27_5_2_fu_8079_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_4_fu_15916_p1() {
    p_Val2_11_5_4_fu_15916_p1 = esl_sext<15,11>(tmp_27_5_3_reg_36021.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_5_fu_15991_p1() {
    p_Val2_11_5_5_fu_15991_p1 = esl_sext<15,10>(tmp_27_5_4_fu_15951_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_6_fu_22204_p1() {
    p_Val2_11_5_6_fu_22204_p1 = esl_sext<15,9>(tmp_27_5_5_reg_37449.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_1_fu_2861_p1() {
    p_Val2_11_6_1_fu_2861_p1 = esl_sext<15,13>(tmp_123_fu_2817_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_2_fu_8235_p1() {
    p_Val2_11_6_2_fu_8235_p1 = esl_sext<15,12>(tmp_126_fu_8191_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_3_fu_8313_p1() {
    p_Val2_11_6_3_fu_8313_p1 = esl_sext<15,12>(tmp_27_6_2_fu_8273_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_4_fu_16064_p1() {
    p_Val2_11_6_4_fu_16064_p1 = esl_sext<15,11>(tmp_27_6_3_reg_36055.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_5_fu_16139_p1() {
    p_Val2_11_6_5_fu_16139_p1 = esl_sext<15,10>(tmp_27_6_4_fu_16099_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_6_fu_22357_p1() {
    p_Val2_11_6_6_fu_22357_p1 = esl_sext<15,9>(tmp_27_6_5_reg_37483.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_1_fu_2979_p1() {
    p_Val2_11_7_1_fu_2979_p1 = esl_sext<15,13>(tmp_143_fu_2935_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_2_fu_8429_p1() {
    p_Val2_11_7_2_fu_8429_p1 = esl_sext<15,12>(tmp_146_fu_8385_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_3_fu_8507_p1() {
    p_Val2_11_7_3_fu_8507_p1 = esl_sext<15,12>(tmp_27_7_2_fu_8467_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_4_fu_16212_p1() {
    p_Val2_11_7_4_fu_16212_p1 = esl_sext<15,11>(tmp_27_7_3_reg_36089.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_5_fu_16287_p1() {
    p_Val2_11_7_5_fu_16287_p1 = esl_sext<15,10>(tmp_27_7_4_fu_16247_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_6_fu_22510_p1() {
    p_Val2_11_7_6_fu_22510_p1 = esl_sext<15,9>(tmp_27_7_5_reg_37517.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_1_fu_3097_p1() {
    p_Val2_11_8_1_fu_3097_p1 = esl_sext<15,13>(tmp_163_fu_3053_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_2_fu_8623_p1() {
    p_Val2_11_8_2_fu_8623_p1 = esl_sext<15,12>(tmp_166_fu_8579_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_3_fu_8701_p1() {
    p_Val2_11_8_3_fu_8701_p1 = esl_sext<15,12>(tmp_27_8_2_fu_8661_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_4_fu_16360_p1() {
    p_Val2_11_8_4_fu_16360_p1 = esl_sext<15,11>(tmp_27_8_3_reg_36123.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_5_fu_16435_p1() {
    p_Val2_11_8_5_fu_16435_p1 = esl_sext<15,10>(tmp_27_8_4_fu_16395_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_6_fu_22663_p1() {
    p_Val2_11_8_6_fu_22663_p1 = esl_sext<15,9>(tmp_27_8_5_reg_37551.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_1_fu_3215_p1() {
    p_Val2_11_9_1_fu_3215_p1 = esl_sext<15,13>(tmp_183_fu_3171_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_2_fu_8817_p1() {
    p_Val2_11_9_2_fu_8817_p1 = esl_sext<15,12>(tmp_186_fu_8773_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_3_fu_8895_p1() {
    p_Val2_11_9_3_fu_8895_p1 = esl_sext<15,12>(tmp_27_9_2_fu_8855_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_4_fu_16508_p1() {
    p_Val2_11_9_4_fu_16508_p1 = esl_sext<15,11>(tmp_27_9_3_reg_36157.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_5_fu_16583_p1() {
    p_Val2_11_9_5_fu_16583_p1 = esl_sext<15,10>(tmp_27_9_4_fu_16543_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_6_fu_22816_p1() {
    p_Val2_11_9_6_fu_22816_p1 = esl_sext<15,9>(tmp_27_9_5_reg_37585.read());
}

void Sobel_phase_strm::thread_p_Val2_12_0_1_fu_2157_p2() {
    p_Val2_12_0_1_fu_2157_p2 = (!p_Val2_4_0_cast_fu_2093_p1.read().is_01() || !p_Val2_11_0_1_fu_2153_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_0_cast_fu_2093_p1.read()) - sc_bigint<15>(p_Val2_11_0_1_fu_2153_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_2_fu_7075_p2() {
    p_Val2_12_0_2_fu_7075_p2 = (!x_V_1_0_1_fu_7007_p3.read().is_01() || !p_Val2_11_0_2_fu_7071_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_1_fu_7007_p3.read()) - sc_bigint<15>(p_Val2_11_0_2_fu_7071_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_3_fu_7153_p2() {
    p_Val2_12_0_3_fu_7153_p2 = (!x_V_1_0_2_fu_7087_p3.read().is_01() || !p_Val2_11_0_3_fu_7149_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_2_fu_7087_p3.read()) - sc_bigint<15>(p_Val2_11_0_3_fu_7149_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_4_fu_15179_p2() {
    p_Val2_12_0_4_fu_15179_p2 = (!x_V_1_0_3_reg_35838.read().is_01() || !p_Val2_11_0_4_fu_15176_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_3_reg_35838.read()) - sc_bigint<15>(p_Val2_11_0_4_fu_15176_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_5_fu_15255_p2() {
    p_Val2_12_0_5_fu_15255_p2 = (!x_V_1_0_4_fu_15189_p3.read().is_01() || !p_Val2_11_0_5_fu_15251_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_4_fu_15189_p3.read()) - sc_bigint<15>(p_Val2_11_0_5_fu_15251_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_6_fu_21442_p2() {
    p_Val2_12_0_6_fu_21442_p2 = (!x_V_1_0_5_reg_37266.read().is_01() || !p_Val2_11_0_6_fu_21439_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_5_reg_37266.read()) - sc_bigint<15>(p_Val2_11_0_6_fu_21439_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_1_fu_3337_p2() {
    p_Val2_12_10_1_fu_3337_p2 = (!p_Val2_4_10_cast_fu_3273_p1.read().is_01() || !p_Val2_11_10_1_fu_3333_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_10_cast_fu_3273_p1.read()) - sc_bigint<15>(p_Val2_11_10_1_fu_3333_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_2_fu_9015_p2() {
    p_Val2_12_10_2_fu_9015_p2 = (!x_V_1_10_1_fu_8947_p3.read().is_01() || !p_Val2_11_10_2_fu_9011_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_1_fu_8947_p3.read()) - sc_bigint<15>(p_Val2_11_10_2_fu_9011_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_3_fu_9093_p2() {
    p_Val2_12_10_3_fu_9093_p2 = (!x_V_1_10_2_fu_9027_p3.read().is_01() || !p_Val2_11_10_3_fu_9089_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_2_fu_9027_p3.read()) - sc_bigint<15>(p_Val2_11_10_3_fu_9089_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_4_fu_16659_p2() {
    p_Val2_12_10_4_fu_16659_p2 = (!x_V_1_10_3_reg_36178.read().is_01() || !p_Val2_11_10_4_fu_16656_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_3_reg_36178.read()) - sc_bigint<15>(p_Val2_11_10_4_fu_16656_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_5_fu_16735_p2() {
    p_Val2_12_10_5_fu_16735_p2 = (!x_V_1_10_4_fu_16669_p3.read().is_01() || !p_Val2_11_10_5_fu_16731_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_4_fu_16669_p3.read()) - sc_bigint<15>(p_Val2_11_10_5_fu_16731_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_6_fu_22972_p2() {
    p_Val2_12_10_6_fu_22972_p2 = (!x_V_1_10_5_reg_37606.read().is_01() || !p_Val2_11_10_6_fu_22969_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_5_reg_37606.read()) - sc_bigint<15>(p_Val2_11_10_6_fu_22969_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_1_fu_3455_p2() {
    p_Val2_12_11_1_fu_3455_p2 = (!p_Val2_4_11_cast_fu_3391_p1.read().is_01() || !p_Val2_11_11_1_fu_3451_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_11_cast_fu_3391_p1.read()) - sc_bigint<15>(p_Val2_11_11_1_fu_3451_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_2_fu_9209_p2() {
    p_Val2_12_11_2_fu_9209_p2 = (!x_V_1_11_1_fu_9141_p3.read().is_01() || !p_Val2_11_11_2_fu_9205_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_1_fu_9141_p3.read()) - sc_bigint<15>(p_Val2_11_11_2_fu_9205_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_3_fu_9287_p2() {
    p_Val2_12_11_3_fu_9287_p2 = (!x_V_1_11_2_fu_9221_p3.read().is_01() || !p_Val2_11_11_3_fu_9283_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_2_fu_9221_p3.read()) - sc_bigint<15>(p_Val2_11_11_3_fu_9283_p1.read()));
}

}

