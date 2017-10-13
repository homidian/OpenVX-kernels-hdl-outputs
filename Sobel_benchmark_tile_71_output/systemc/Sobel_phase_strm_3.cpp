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

void Sobel_phase_strm::thread_ap_sig_1132() {
    ap_sig_1132 = ((esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(grad_x_V_pixel_10_status.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(grad_y_V_pixel_10_status.read(), ap_const_logic_0)));
}

void Sobel_phase_strm::thread_ap_sig_1137() {
    ap_sig_1137 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()) && esl_seteq<1,1,1>(output_V_pixel_11_status.read(), ap_const_logic_0));
}

void Sobel_phase_strm::thread_ap_sig_21() {
    ap_sig_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Sobel_phase_strm::thread_ap_sig_51080() {
    ap_sig_51080 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void Sobel_phase_strm::thread_ap_sig_6204() {
    ap_sig_6204 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Sobel_phase_strm::thread_ap_sig_886() {
    ap_sig_886 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void Sobel_phase_strm::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_886.read()) {
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
    if (ap_sig_51080.read()) {
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_dneg_0_1_fu_3408_p2() {
    dneg_0_1_fu_3408_p2 = (!p_Val2_7_fu_3402_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_fu_3402_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_0_2_fu_11748_p2() {
    dneg_0_2_fu_11748_p2 = (!y_V_1_0_1_fu_11739_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_0_1_fu_11739_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_0_3_fu_11830_p2() {
    dneg_0_3_fu_11830_p2 = (!y_V_1_0_2_fu_11822_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_2_fu_11822_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_4_fu_25508_p2() {
    dneg_0_4_fu_25508_p2 = (!y_V_1_0_3_reg_60465.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_3_reg_60465.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_5_fu_25558_p2() {
    dneg_0_5_fu_25558_p2 = (!y_V_1_0_4_fu_25550_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_4_fu_25550_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_6_fu_36063_p2() {
    dneg_0_6_fu_36063_p2 = (!y_V_1_0_5_reg_62879.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_5_reg_62879.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_7_fu_36105_p2() {
    dneg_0_7_fu_36105_p2 = (!y_V_1_0_6_fu_36097_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_6_fu_36097_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_0_8_fu_36163_p2() {
    dneg_0_8_fu_36163_p2 = (!y_V_1_0_7_fu_36155_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_0_7_fu_36155_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_1_fu_4588_p2() {
    dneg_10_1_fu_4588_p2 = (!p_Val2_7_s_fu_4582_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_s_fu_4582_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_10_2_fu_13688_p2() {
    dneg_10_2_fu_13688_p2 = (!y_V_1_10_1_fu_13679_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_10_1_fu_13679_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_10_3_fu_13770_p2() {
    dneg_10_3_fu_13770_p2 = (!y_V_1_10_2_fu_13762_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_2_fu_13762_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_4_fu_26988_p2() {
    dneg_10_4_fu_26988_p2 = (!y_V_1_10_3_reg_60805.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_3_reg_60805.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_5_fu_27038_p2() {
    dneg_10_5_fu_27038_p2 = (!y_V_1_10_4_fu_27030_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_4_fu_27030_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_6_fu_37593_p2() {
    dneg_10_6_fu_37593_p2 = (!y_V_1_10_5_reg_63219.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_5_reg_63219.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_7_fu_37635_p2() {
    dneg_10_7_fu_37635_p2 = (!y_V_1_10_6_fu_37627_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_6_fu_37627_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_10_8_fu_37693_p2() {
    dneg_10_8_fu_37693_p2 = (!y_V_1_10_7_fu_37685_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_10_7_fu_37685_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_1_fu_4706_p2() {
    dneg_11_1_fu_4706_p2 = (!p_Val2_7_10_fu_4700_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_10_fu_4700_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_11_2_fu_13882_p2() {
    dneg_11_2_fu_13882_p2 = (!y_V_1_11_1_fu_13873_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_11_1_fu_13873_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_11_3_fu_13964_p2() {
    dneg_11_3_fu_13964_p2 = (!y_V_1_11_2_fu_13956_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_2_fu_13956_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_4_fu_27136_p2() {
    dneg_11_4_fu_27136_p2 = (!y_V_1_11_3_reg_60839.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_3_reg_60839.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_5_fu_27186_p2() {
    dneg_11_5_fu_27186_p2 = (!y_V_1_11_4_fu_27178_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_4_fu_27178_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_6_fu_37746_p2() {
    dneg_11_6_fu_37746_p2 = (!y_V_1_11_5_reg_63253.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_5_reg_63253.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_7_fu_37788_p2() {
    dneg_11_7_fu_37788_p2 = (!y_V_1_11_6_fu_37780_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_6_fu_37780_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_11_8_fu_37846_p2() {
    dneg_11_8_fu_37846_p2 = (!y_V_1_11_7_fu_37838_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_11_7_fu_37838_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_1_fu_4824_p2() {
    dneg_12_1_fu_4824_p2 = (!p_Val2_7_11_fu_4818_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_11_fu_4818_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_12_2_fu_14076_p2() {
    dneg_12_2_fu_14076_p2 = (!y_V_1_12_1_fu_14067_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_12_1_fu_14067_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_12_3_fu_14158_p2() {
    dneg_12_3_fu_14158_p2 = (!y_V_1_12_2_fu_14150_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_2_fu_14150_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_4_fu_27284_p2() {
    dneg_12_4_fu_27284_p2 = (!y_V_1_12_3_reg_60873.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_3_reg_60873.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_5_fu_27334_p2() {
    dneg_12_5_fu_27334_p2 = (!y_V_1_12_4_fu_27326_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_4_fu_27326_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_6_fu_37899_p2() {
    dneg_12_6_fu_37899_p2 = (!y_V_1_12_5_reg_63287.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_5_reg_63287.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_7_fu_37941_p2() {
    dneg_12_7_fu_37941_p2 = (!y_V_1_12_6_fu_37933_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_6_fu_37933_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_12_8_fu_37999_p2() {
    dneg_12_8_fu_37999_p2 = (!y_V_1_12_7_fu_37991_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_12_7_fu_37991_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_1_fu_4942_p2() {
    dneg_13_1_fu_4942_p2 = (!p_Val2_7_12_fu_4936_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_12_fu_4936_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_13_2_fu_14270_p2() {
    dneg_13_2_fu_14270_p2 = (!y_V_1_13_1_fu_14261_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_13_1_fu_14261_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_13_3_fu_14352_p2() {
    dneg_13_3_fu_14352_p2 = (!y_V_1_13_2_fu_14344_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_2_fu_14344_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_4_fu_27432_p2() {
    dneg_13_4_fu_27432_p2 = (!y_V_1_13_3_reg_60907.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_3_reg_60907.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_5_fu_27482_p2() {
    dneg_13_5_fu_27482_p2 = (!y_V_1_13_4_fu_27474_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_4_fu_27474_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_6_fu_38052_p2() {
    dneg_13_6_fu_38052_p2 = (!y_V_1_13_5_reg_63321.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_5_reg_63321.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_7_fu_38094_p2() {
    dneg_13_7_fu_38094_p2 = (!y_V_1_13_6_fu_38086_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_6_fu_38086_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_13_8_fu_38152_p2() {
    dneg_13_8_fu_38152_p2 = (!y_V_1_13_7_fu_38144_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_13_7_fu_38144_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_1_fu_5060_p2() {
    dneg_14_1_fu_5060_p2 = (!p_Val2_7_13_fu_5054_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_13_fu_5054_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_14_2_fu_14464_p2() {
    dneg_14_2_fu_14464_p2 = (!y_V_1_14_1_fu_14455_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_14_1_fu_14455_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_14_3_fu_14546_p2() {
    dneg_14_3_fu_14546_p2 = (!y_V_1_14_2_fu_14538_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_2_fu_14538_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_4_fu_27580_p2() {
    dneg_14_4_fu_27580_p2 = (!y_V_1_14_3_reg_60941.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_3_reg_60941.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_5_fu_27630_p2() {
    dneg_14_5_fu_27630_p2 = (!y_V_1_14_4_fu_27622_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_4_fu_27622_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_6_fu_38205_p2() {
    dneg_14_6_fu_38205_p2 = (!y_V_1_14_5_reg_63355.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_5_reg_63355.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_7_fu_38247_p2() {
    dneg_14_7_fu_38247_p2 = (!y_V_1_14_6_fu_38239_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_6_fu_38239_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_14_8_fu_38305_p2() {
    dneg_14_8_fu_38305_p2 = (!y_V_1_14_7_fu_38297_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_14_7_fu_38297_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_1_fu_5178_p2() {
    dneg_15_1_fu_5178_p2 = (!p_Val2_7_14_fu_5172_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_14_fu_5172_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_15_2_fu_14658_p2() {
    dneg_15_2_fu_14658_p2 = (!y_V_1_15_1_fu_14649_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_15_1_fu_14649_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_15_3_fu_14740_p2() {
    dneg_15_3_fu_14740_p2 = (!y_V_1_15_2_fu_14732_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_2_fu_14732_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_4_fu_27728_p2() {
    dneg_15_4_fu_27728_p2 = (!y_V_1_15_3_reg_60975.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_3_reg_60975.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_5_fu_27778_p2() {
    dneg_15_5_fu_27778_p2 = (!y_V_1_15_4_fu_27770_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_4_fu_27770_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_6_fu_38358_p2() {
    dneg_15_6_fu_38358_p2 = (!y_V_1_15_5_reg_63389.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_5_reg_63389.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_7_fu_38400_p2() {
    dneg_15_7_fu_38400_p2 = (!y_V_1_15_6_fu_38392_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_6_fu_38392_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_15_8_fu_38458_p2() {
    dneg_15_8_fu_38458_p2 = (!y_V_1_15_7_fu_38450_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_15_7_fu_38450_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_1_fu_5296_p2() {
    dneg_16_1_fu_5296_p2 = (!p_Val2_7_15_fu_5290_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_15_fu_5290_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_16_2_fu_14852_p2() {
    dneg_16_2_fu_14852_p2 = (!y_V_1_16_1_fu_14843_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_16_1_fu_14843_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_16_3_fu_14934_p2() {
    dneg_16_3_fu_14934_p2 = (!y_V_1_16_2_fu_14926_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_2_fu_14926_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_4_fu_27876_p2() {
    dneg_16_4_fu_27876_p2 = (!y_V_1_16_3_reg_61009.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_3_reg_61009.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_5_fu_27926_p2() {
    dneg_16_5_fu_27926_p2 = (!y_V_1_16_4_fu_27918_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_4_fu_27918_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_6_fu_38511_p2() {
    dneg_16_6_fu_38511_p2 = (!y_V_1_16_5_reg_63423.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_5_reg_63423.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_7_fu_38553_p2() {
    dneg_16_7_fu_38553_p2 = (!y_V_1_16_6_fu_38545_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_6_fu_38545_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_16_8_fu_38611_p2() {
    dneg_16_8_fu_38611_p2 = (!y_V_1_16_7_fu_38603_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_16_7_fu_38603_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_1_fu_5414_p2() {
    dneg_17_1_fu_5414_p2 = (!p_Val2_7_16_fu_5408_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_16_fu_5408_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_17_2_fu_15046_p2() {
    dneg_17_2_fu_15046_p2 = (!y_V_1_17_1_fu_15037_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_17_1_fu_15037_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_17_3_fu_15128_p2() {
    dneg_17_3_fu_15128_p2 = (!y_V_1_17_2_fu_15120_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_2_fu_15120_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_4_fu_28024_p2() {
    dneg_17_4_fu_28024_p2 = (!y_V_1_17_3_reg_61043.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_3_reg_61043.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_5_fu_28074_p2() {
    dneg_17_5_fu_28074_p2 = (!y_V_1_17_4_fu_28066_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_4_fu_28066_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_6_fu_38664_p2() {
    dneg_17_6_fu_38664_p2 = (!y_V_1_17_5_reg_63457.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_5_reg_63457.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_7_fu_38706_p2() {
    dneg_17_7_fu_38706_p2 = (!y_V_1_17_6_fu_38698_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_6_fu_38698_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_17_8_fu_38764_p2() {
    dneg_17_8_fu_38764_p2 = (!y_V_1_17_7_fu_38756_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_17_7_fu_38756_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_1_fu_5532_p2() {
    dneg_18_1_fu_5532_p2 = (!p_Val2_7_17_fu_5526_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_17_fu_5526_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_18_2_fu_15240_p2() {
    dneg_18_2_fu_15240_p2 = (!y_V_1_18_1_fu_15231_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_18_1_fu_15231_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_18_3_fu_15322_p2() {
    dneg_18_3_fu_15322_p2 = (!y_V_1_18_2_fu_15314_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_2_fu_15314_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_4_fu_28172_p2() {
    dneg_18_4_fu_28172_p2 = (!y_V_1_18_3_reg_61077.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_3_reg_61077.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_5_fu_28222_p2() {
    dneg_18_5_fu_28222_p2 = (!y_V_1_18_4_fu_28214_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_4_fu_28214_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_6_fu_38817_p2() {
    dneg_18_6_fu_38817_p2 = (!y_V_1_18_5_reg_63491.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_5_reg_63491.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_7_fu_38859_p2() {
    dneg_18_7_fu_38859_p2 = (!y_V_1_18_6_fu_38851_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_6_fu_38851_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_18_8_fu_38917_p2() {
    dneg_18_8_fu_38917_p2 = (!y_V_1_18_7_fu_38909_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_18_7_fu_38909_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_1_fu_5650_p2() {
    dneg_19_1_fu_5650_p2 = (!p_Val2_7_18_fu_5644_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_18_fu_5644_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_19_2_fu_15434_p2() {
    dneg_19_2_fu_15434_p2 = (!y_V_1_19_1_fu_15425_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_19_1_fu_15425_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_19_3_fu_15516_p2() {
    dneg_19_3_fu_15516_p2 = (!y_V_1_19_2_fu_15508_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_2_fu_15508_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_4_fu_28320_p2() {
    dneg_19_4_fu_28320_p2 = (!y_V_1_19_3_reg_61111.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_3_reg_61111.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_5_fu_28370_p2() {
    dneg_19_5_fu_28370_p2 = (!y_V_1_19_4_fu_28362_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_4_fu_28362_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_6_fu_38970_p2() {
    dneg_19_6_fu_38970_p2 = (!y_V_1_19_5_reg_63525.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_5_reg_63525.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_7_fu_39012_p2() {
    dneg_19_7_fu_39012_p2 = (!y_V_1_19_6_fu_39004_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_6_fu_39004_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_19_8_fu_39070_p2() {
    dneg_19_8_fu_39070_p2 = (!y_V_1_19_7_fu_39062_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_19_7_fu_39062_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_1_fu_3526_p2() {
    dneg_1_1_fu_3526_p2 = (!p_Val2_7_1_fu_3520_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_1_fu_3520_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_1_2_fu_11942_p2() {
    dneg_1_2_fu_11942_p2 = (!y_V_1_1_1_fu_11933_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_1_1_fu_11933_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_1_3_fu_12024_p2() {
    dneg_1_3_fu_12024_p2 = (!y_V_1_1_2_fu_12016_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_2_fu_12016_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_4_fu_25656_p2() {
    dneg_1_4_fu_25656_p2 = (!y_V_1_1_3_reg_60499.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_3_reg_60499.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_5_fu_25706_p2() {
    dneg_1_5_fu_25706_p2 = (!y_V_1_1_4_fu_25698_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_4_fu_25698_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_6_fu_36216_p2() {
    dneg_1_6_fu_36216_p2 = (!y_V_1_1_5_reg_62913.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_5_reg_62913.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_7_fu_36258_p2() {
    dneg_1_7_fu_36258_p2 = (!y_V_1_1_6_fu_36250_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_6_fu_36250_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_1_8_fu_36316_p2() {
    dneg_1_8_fu_36316_p2 = (!y_V_1_1_7_fu_36308_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_1_7_fu_36308_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_1_fu_5768_p2() {
    dneg_20_1_fu_5768_p2 = (!p_Val2_7_19_fu_5762_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_19_fu_5762_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_20_2_fu_15628_p2() {
    dneg_20_2_fu_15628_p2 = (!y_V_1_20_1_fu_15619_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_20_1_fu_15619_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_20_3_fu_15710_p2() {
    dneg_20_3_fu_15710_p2 = (!y_V_1_20_2_fu_15702_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_2_fu_15702_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_4_fu_28468_p2() {
    dneg_20_4_fu_28468_p2 = (!y_V_1_20_3_reg_61145.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_3_reg_61145.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_5_fu_28518_p2() {
    dneg_20_5_fu_28518_p2 = (!y_V_1_20_4_fu_28510_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_4_fu_28510_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_6_fu_39123_p2() {
    dneg_20_6_fu_39123_p2 = (!y_V_1_20_5_reg_63559.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_5_reg_63559.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_7_fu_39165_p2() {
    dneg_20_7_fu_39165_p2 = (!y_V_1_20_6_fu_39157_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_6_fu_39157_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_20_8_fu_39223_p2() {
    dneg_20_8_fu_39223_p2 = (!y_V_1_20_7_fu_39215_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_20_7_fu_39215_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_1_fu_5886_p2() {
    dneg_21_1_fu_5886_p2 = (!p_Val2_7_20_fu_5880_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_20_fu_5880_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_21_2_fu_15822_p2() {
    dneg_21_2_fu_15822_p2 = (!y_V_1_21_1_fu_15813_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_21_1_fu_15813_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_21_3_fu_15904_p2() {
    dneg_21_3_fu_15904_p2 = (!y_V_1_21_2_fu_15896_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_2_fu_15896_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_4_fu_28616_p2() {
    dneg_21_4_fu_28616_p2 = (!y_V_1_21_3_reg_61179.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_3_reg_61179.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_5_fu_28666_p2() {
    dneg_21_5_fu_28666_p2 = (!y_V_1_21_4_fu_28658_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_4_fu_28658_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_6_fu_39276_p2() {
    dneg_21_6_fu_39276_p2 = (!y_V_1_21_5_reg_63593.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_5_reg_63593.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_7_fu_39318_p2() {
    dneg_21_7_fu_39318_p2 = (!y_V_1_21_6_fu_39310_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_6_fu_39310_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_21_8_fu_39376_p2() {
    dneg_21_8_fu_39376_p2 = (!y_V_1_21_7_fu_39368_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_21_7_fu_39368_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_1_fu_6004_p2() {
    dneg_22_1_fu_6004_p2 = (!p_Val2_7_21_fu_5998_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_21_fu_5998_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_22_2_fu_16016_p2() {
    dneg_22_2_fu_16016_p2 = (!y_V_1_22_1_fu_16007_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_22_1_fu_16007_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_22_3_fu_16098_p2() {
    dneg_22_3_fu_16098_p2 = (!y_V_1_22_2_fu_16090_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_2_fu_16090_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_4_fu_28764_p2() {
    dneg_22_4_fu_28764_p2 = (!y_V_1_22_3_reg_61213.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_3_reg_61213.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_5_fu_28814_p2() {
    dneg_22_5_fu_28814_p2 = (!y_V_1_22_4_fu_28806_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_4_fu_28806_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_6_fu_39429_p2() {
    dneg_22_6_fu_39429_p2 = (!y_V_1_22_5_reg_63627.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_5_reg_63627.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_7_fu_39471_p2() {
    dneg_22_7_fu_39471_p2 = (!y_V_1_22_6_fu_39463_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_6_fu_39463_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_22_8_fu_39529_p2() {
    dneg_22_8_fu_39529_p2 = (!y_V_1_22_7_fu_39521_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_22_7_fu_39521_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_1_fu_6122_p2() {
    dneg_23_1_fu_6122_p2 = (!p_Val2_7_22_fu_6116_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_22_fu_6116_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_23_2_fu_16210_p2() {
    dneg_23_2_fu_16210_p2 = (!y_V_1_23_1_fu_16201_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_23_1_fu_16201_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_23_3_fu_16292_p2() {
    dneg_23_3_fu_16292_p2 = (!y_V_1_23_2_fu_16284_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_2_fu_16284_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_4_fu_28912_p2() {
    dneg_23_4_fu_28912_p2 = (!y_V_1_23_3_reg_61247.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_3_reg_61247.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_5_fu_28962_p2() {
    dneg_23_5_fu_28962_p2 = (!y_V_1_23_4_fu_28954_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_4_fu_28954_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_6_fu_39582_p2() {
    dneg_23_6_fu_39582_p2 = (!y_V_1_23_5_reg_63661.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_5_reg_63661.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_7_fu_39624_p2() {
    dneg_23_7_fu_39624_p2 = (!y_V_1_23_6_fu_39616_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_6_fu_39616_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_23_8_fu_39682_p2() {
    dneg_23_8_fu_39682_p2 = (!y_V_1_23_7_fu_39674_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_23_7_fu_39674_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_1_fu_6240_p2() {
    dneg_24_1_fu_6240_p2 = (!p_Val2_7_23_fu_6234_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_23_fu_6234_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_24_2_fu_16404_p2() {
    dneg_24_2_fu_16404_p2 = (!y_V_1_24_1_fu_16395_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_24_1_fu_16395_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_24_3_fu_16486_p2() {
    dneg_24_3_fu_16486_p2 = (!y_V_1_24_2_fu_16478_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_2_fu_16478_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_4_fu_29060_p2() {
    dneg_24_4_fu_29060_p2 = (!y_V_1_24_3_reg_61281.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_3_reg_61281.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_5_fu_29110_p2() {
    dneg_24_5_fu_29110_p2 = (!y_V_1_24_4_fu_29102_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_4_fu_29102_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_6_fu_39735_p2() {
    dneg_24_6_fu_39735_p2 = (!y_V_1_24_5_reg_63695.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_5_reg_63695.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_7_fu_39777_p2() {
    dneg_24_7_fu_39777_p2 = (!y_V_1_24_6_fu_39769_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_6_fu_39769_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_24_8_fu_39835_p2() {
    dneg_24_8_fu_39835_p2 = (!y_V_1_24_7_fu_39827_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_24_7_fu_39827_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_1_fu_6358_p2() {
    dneg_25_1_fu_6358_p2 = (!p_Val2_7_24_fu_6352_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_24_fu_6352_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_25_2_fu_16598_p2() {
    dneg_25_2_fu_16598_p2 = (!y_V_1_25_1_fu_16589_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_25_1_fu_16589_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_25_3_fu_16680_p2() {
    dneg_25_3_fu_16680_p2 = (!y_V_1_25_2_fu_16672_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_2_fu_16672_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_4_fu_29208_p2() {
    dneg_25_4_fu_29208_p2 = (!y_V_1_25_3_reg_61315.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_3_reg_61315.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_5_fu_29258_p2() {
    dneg_25_5_fu_29258_p2 = (!y_V_1_25_4_fu_29250_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_4_fu_29250_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_6_fu_39888_p2() {
    dneg_25_6_fu_39888_p2 = (!y_V_1_25_5_reg_63729.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_5_reg_63729.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_7_fu_39930_p2() {
    dneg_25_7_fu_39930_p2 = (!y_V_1_25_6_fu_39922_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_6_fu_39922_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_25_8_fu_39988_p2() {
    dneg_25_8_fu_39988_p2 = (!y_V_1_25_7_fu_39980_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_25_7_fu_39980_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_1_fu_6476_p2() {
    dneg_26_1_fu_6476_p2 = (!p_Val2_7_25_fu_6470_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_25_fu_6470_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_26_2_fu_16792_p2() {
    dneg_26_2_fu_16792_p2 = (!y_V_1_26_1_fu_16783_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_26_1_fu_16783_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_26_3_fu_16874_p2() {
    dneg_26_3_fu_16874_p2 = (!y_V_1_26_2_fu_16866_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_2_fu_16866_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_4_fu_29356_p2() {
    dneg_26_4_fu_29356_p2 = (!y_V_1_26_3_reg_61349.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_3_reg_61349.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_5_fu_29406_p2() {
    dneg_26_5_fu_29406_p2 = (!y_V_1_26_4_fu_29398_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_4_fu_29398_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_6_fu_40041_p2() {
    dneg_26_6_fu_40041_p2 = (!y_V_1_26_5_reg_63763.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_5_reg_63763.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_7_fu_40083_p2() {
    dneg_26_7_fu_40083_p2 = (!y_V_1_26_6_fu_40075_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_6_fu_40075_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_26_8_fu_40141_p2() {
    dneg_26_8_fu_40141_p2 = (!y_V_1_26_7_fu_40133_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_26_7_fu_40133_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_1_fu_6594_p2() {
    dneg_27_1_fu_6594_p2 = (!p_Val2_7_26_fu_6588_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_26_fu_6588_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_27_2_fu_16986_p2() {
    dneg_27_2_fu_16986_p2 = (!y_V_1_27_1_fu_16977_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_27_1_fu_16977_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_27_3_fu_17068_p2() {
    dneg_27_3_fu_17068_p2 = (!y_V_1_27_2_fu_17060_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_2_fu_17060_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_4_fu_29504_p2() {
    dneg_27_4_fu_29504_p2 = (!y_V_1_27_3_reg_61383.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_3_reg_61383.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_5_fu_29554_p2() {
    dneg_27_5_fu_29554_p2 = (!y_V_1_27_4_fu_29546_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_4_fu_29546_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_6_fu_40194_p2() {
    dneg_27_6_fu_40194_p2 = (!y_V_1_27_5_reg_63797.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_5_reg_63797.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_7_fu_40236_p2() {
    dneg_27_7_fu_40236_p2 = (!y_V_1_27_6_fu_40228_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_6_fu_40228_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_27_8_fu_40294_p2() {
    dneg_27_8_fu_40294_p2 = (!y_V_1_27_7_fu_40286_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_27_7_fu_40286_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_1_fu_6712_p2() {
    dneg_28_1_fu_6712_p2 = (!p_Val2_7_27_fu_6706_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_27_fu_6706_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_28_2_fu_17180_p2() {
    dneg_28_2_fu_17180_p2 = (!y_V_1_28_1_fu_17171_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_28_1_fu_17171_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_28_3_fu_17262_p2() {
    dneg_28_3_fu_17262_p2 = (!y_V_1_28_2_fu_17254_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_2_fu_17254_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_4_fu_29652_p2() {
    dneg_28_4_fu_29652_p2 = (!y_V_1_28_3_reg_61417.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_3_reg_61417.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_5_fu_29702_p2() {
    dneg_28_5_fu_29702_p2 = (!y_V_1_28_4_fu_29694_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_4_fu_29694_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_6_fu_40347_p2() {
    dneg_28_6_fu_40347_p2 = (!y_V_1_28_5_reg_63831.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_5_reg_63831.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_7_fu_40389_p2() {
    dneg_28_7_fu_40389_p2 = (!y_V_1_28_6_fu_40381_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_6_fu_40381_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_28_8_fu_40447_p2() {
    dneg_28_8_fu_40447_p2 = (!y_V_1_28_7_fu_40439_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_28_7_fu_40439_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_1_fu_6830_p2() {
    dneg_29_1_fu_6830_p2 = (!p_Val2_7_28_fu_6824_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_28_fu_6824_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_29_2_fu_17374_p2() {
    dneg_29_2_fu_17374_p2 = (!y_V_1_29_1_fu_17365_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_29_1_fu_17365_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_29_3_fu_17456_p2() {
    dneg_29_3_fu_17456_p2 = (!y_V_1_29_2_fu_17448_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_2_fu_17448_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_4_fu_29800_p2() {
    dneg_29_4_fu_29800_p2 = (!y_V_1_29_3_reg_61451.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_3_reg_61451.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_5_fu_29850_p2() {
    dneg_29_5_fu_29850_p2 = (!y_V_1_29_4_fu_29842_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_4_fu_29842_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_6_fu_40500_p2() {
    dneg_29_6_fu_40500_p2 = (!y_V_1_29_5_reg_63865.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_5_reg_63865.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_7_fu_40542_p2() {
    dneg_29_7_fu_40542_p2 = (!y_V_1_29_6_fu_40534_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_6_fu_40534_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_29_8_fu_40600_p2() {
    dneg_29_8_fu_40600_p2 = (!y_V_1_29_7_fu_40592_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_29_7_fu_40592_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_1_fu_3644_p2() {
    dneg_2_1_fu_3644_p2 = (!p_Val2_7_2_fu_3638_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_2_fu_3638_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_2_2_fu_12136_p2() {
    dneg_2_2_fu_12136_p2 = (!y_V_1_2_1_fu_12127_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_2_1_fu_12127_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_2_3_fu_12218_p2() {
    dneg_2_3_fu_12218_p2 = (!y_V_1_2_2_fu_12210_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_2_fu_12210_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_4_fu_25804_p2() {
    dneg_2_4_fu_25804_p2 = (!y_V_1_2_3_reg_60533.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_3_reg_60533.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_5_fu_25854_p2() {
    dneg_2_5_fu_25854_p2 = (!y_V_1_2_4_fu_25846_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_4_fu_25846_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_6_fu_36369_p2() {
    dneg_2_6_fu_36369_p2 = (!y_V_1_2_5_reg_62947.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_5_reg_62947.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_7_fu_36411_p2() {
    dneg_2_7_fu_36411_p2 = (!y_V_1_2_6_fu_36403_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_6_fu_36403_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_2_8_fu_36469_p2() {
    dneg_2_8_fu_36469_p2 = (!y_V_1_2_7_fu_36461_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_2_7_fu_36461_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_1_fu_6948_p2() {
    dneg_30_1_fu_6948_p2 = (!p_Val2_7_29_fu_6942_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_29_fu_6942_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_30_2_fu_17568_p2() {
    dneg_30_2_fu_17568_p2 = (!y_V_1_30_1_fu_17559_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_30_1_fu_17559_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_30_3_fu_17650_p2() {
    dneg_30_3_fu_17650_p2 = (!y_V_1_30_2_fu_17642_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_2_fu_17642_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_4_fu_29948_p2() {
    dneg_30_4_fu_29948_p2 = (!y_V_1_30_3_reg_61485.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_3_reg_61485.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_5_fu_29998_p2() {
    dneg_30_5_fu_29998_p2 = (!y_V_1_30_4_fu_29990_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_4_fu_29990_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_6_fu_40653_p2() {
    dneg_30_6_fu_40653_p2 = (!y_V_1_30_5_reg_63899.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_5_reg_63899.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_7_fu_40695_p2() {
    dneg_30_7_fu_40695_p2 = (!y_V_1_30_6_fu_40687_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_6_fu_40687_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_30_8_fu_40753_p2() {
    dneg_30_8_fu_40753_p2 = (!y_V_1_30_7_fu_40745_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_30_7_fu_40745_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_1_fu_7066_p2() {
    dneg_31_1_fu_7066_p2 = (!p_Val2_7_30_fu_7060_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_30_fu_7060_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_31_2_fu_17762_p2() {
    dneg_31_2_fu_17762_p2 = (!y_V_1_31_1_fu_17753_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_31_1_fu_17753_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_31_3_fu_17844_p2() {
    dneg_31_3_fu_17844_p2 = (!y_V_1_31_2_fu_17836_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_2_fu_17836_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_4_fu_30096_p2() {
    dneg_31_4_fu_30096_p2 = (!y_V_1_31_3_reg_61519.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_3_reg_61519.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_5_fu_30146_p2() {
    dneg_31_5_fu_30146_p2 = (!y_V_1_31_4_fu_30138_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_4_fu_30138_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_6_fu_40806_p2() {
    dneg_31_6_fu_40806_p2 = (!y_V_1_31_5_reg_63933.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_5_reg_63933.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_7_fu_40848_p2() {
    dneg_31_7_fu_40848_p2 = (!y_V_1_31_6_fu_40840_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_6_fu_40840_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_31_8_fu_40906_p2() {
    dneg_31_8_fu_40906_p2 = (!y_V_1_31_7_fu_40898_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_31_7_fu_40898_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_1_fu_7184_p2() {
    dneg_32_1_fu_7184_p2 = (!p_Val2_7_31_fu_7178_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_31_fu_7178_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_32_2_fu_17956_p2() {
    dneg_32_2_fu_17956_p2 = (!y_V_1_32_1_fu_17947_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_32_1_fu_17947_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_32_3_fu_18038_p2() {
    dneg_32_3_fu_18038_p2 = (!y_V_1_32_2_fu_18030_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_2_fu_18030_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_4_fu_30244_p2() {
    dneg_32_4_fu_30244_p2 = (!y_V_1_32_3_reg_61553.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_3_reg_61553.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_5_fu_30294_p2() {
    dneg_32_5_fu_30294_p2 = (!y_V_1_32_4_fu_30286_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_4_fu_30286_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_6_fu_40959_p2() {
    dneg_32_6_fu_40959_p2 = (!y_V_1_32_5_reg_63967.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_5_reg_63967.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_7_fu_41001_p2() {
    dneg_32_7_fu_41001_p2 = (!y_V_1_32_6_fu_40993_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_6_fu_40993_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_32_8_fu_41059_p2() {
    dneg_32_8_fu_41059_p2 = (!y_V_1_32_7_fu_41051_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_32_7_fu_41051_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_1_fu_7302_p2() {
    dneg_33_1_fu_7302_p2 = (!p_Val2_7_32_fu_7296_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_32_fu_7296_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_33_2_fu_18150_p2() {
    dneg_33_2_fu_18150_p2 = (!y_V_1_33_1_fu_18141_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_33_1_fu_18141_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_33_3_fu_18232_p2() {
    dneg_33_3_fu_18232_p2 = (!y_V_1_33_2_fu_18224_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_2_fu_18224_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_4_fu_30392_p2() {
    dneg_33_4_fu_30392_p2 = (!y_V_1_33_3_reg_61587.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_3_reg_61587.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_5_fu_30442_p2() {
    dneg_33_5_fu_30442_p2 = (!y_V_1_33_4_fu_30434_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_4_fu_30434_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_6_fu_41112_p2() {
    dneg_33_6_fu_41112_p2 = (!y_V_1_33_5_reg_64001.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_5_reg_64001.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_7_fu_41154_p2() {
    dneg_33_7_fu_41154_p2 = (!y_V_1_33_6_fu_41146_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_6_fu_41146_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_33_8_fu_41212_p2() {
    dneg_33_8_fu_41212_p2 = (!y_V_1_33_7_fu_41204_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_33_7_fu_41204_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_1_fu_7420_p2() {
    dneg_34_1_fu_7420_p2 = (!p_Val2_7_33_fu_7414_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_33_fu_7414_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_34_2_fu_18344_p2() {
    dneg_34_2_fu_18344_p2 = (!y_V_1_34_1_fu_18335_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_34_1_fu_18335_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_34_3_fu_18426_p2() {
    dneg_34_3_fu_18426_p2 = (!y_V_1_34_2_fu_18418_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_2_fu_18418_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_4_fu_30540_p2() {
    dneg_34_4_fu_30540_p2 = (!y_V_1_34_3_reg_61621.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_3_reg_61621.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_5_fu_30590_p2() {
    dneg_34_5_fu_30590_p2 = (!y_V_1_34_4_fu_30582_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_4_fu_30582_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_6_fu_41265_p2() {
    dneg_34_6_fu_41265_p2 = (!y_V_1_34_5_reg_64035.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_5_reg_64035.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_7_fu_41307_p2() {
    dneg_34_7_fu_41307_p2 = (!y_V_1_34_6_fu_41299_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_6_fu_41299_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_34_8_fu_41365_p2() {
    dneg_34_8_fu_41365_p2 = (!y_V_1_34_7_fu_41357_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_34_7_fu_41357_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_1_fu_7538_p2() {
    dneg_35_1_fu_7538_p2 = (!p_Val2_7_34_fu_7532_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_34_fu_7532_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_35_2_fu_18538_p2() {
    dneg_35_2_fu_18538_p2 = (!y_V_1_35_1_fu_18529_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_35_1_fu_18529_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_35_3_fu_18620_p2() {
    dneg_35_3_fu_18620_p2 = (!y_V_1_35_2_fu_18612_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_2_fu_18612_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_4_fu_30688_p2() {
    dneg_35_4_fu_30688_p2 = (!y_V_1_35_3_reg_61655.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_3_reg_61655.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_5_fu_30738_p2() {
    dneg_35_5_fu_30738_p2 = (!y_V_1_35_4_fu_30730_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_4_fu_30730_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_6_fu_41418_p2() {
    dneg_35_6_fu_41418_p2 = (!y_V_1_35_5_reg_64069.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_5_reg_64069.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_7_fu_41460_p2() {
    dneg_35_7_fu_41460_p2 = (!y_V_1_35_6_fu_41452_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_6_fu_41452_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_35_8_fu_41518_p2() {
    dneg_35_8_fu_41518_p2 = (!y_V_1_35_7_fu_41510_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_35_7_fu_41510_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_1_fu_7656_p2() {
    dneg_36_1_fu_7656_p2 = (!p_Val2_7_35_fu_7650_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_35_fu_7650_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_36_2_fu_18732_p2() {
    dneg_36_2_fu_18732_p2 = (!y_V_1_36_1_fu_18723_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_36_1_fu_18723_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_36_3_fu_18814_p2() {
    dneg_36_3_fu_18814_p2 = (!y_V_1_36_2_fu_18806_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_2_fu_18806_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_4_fu_30836_p2() {
    dneg_36_4_fu_30836_p2 = (!y_V_1_36_3_reg_61689.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_3_reg_61689.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_5_fu_30886_p2() {
    dneg_36_5_fu_30886_p2 = (!y_V_1_36_4_fu_30878_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_4_fu_30878_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_6_fu_41571_p2() {
    dneg_36_6_fu_41571_p2 = (!y_V_1_36_5_reg_64103.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_5_reg_64103.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_7_fu_41613_p2() {
    dneg_36_7_fu_41613_p2 = (!y_V_1_36_6_fu_41605_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_6_fu_41605_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_36_8_fu_41671_p2() {
    dneg_36_8_fu_41671_p2 = (!y_V_1_36_7_fu_41663_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_36_7_fu_41663_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_1_fu_7774_p2() {
    dneg_37_1_fu_7774_p2 = (!p_Val2_7_36_fu_7768_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_36_fu_7768_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_37_2_fu_18926_p2() {
    dneg_37_2_fu_18926_p2 = (!y_V_1_37_1_fu_18917_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_37_1_fu_18917_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_37_3_fu_19008_p2() {
    dneg_37_3_fu_19008_p2 = (!y_V_1_37_2_fu_19000_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_2_fu_19000_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_4_fu_30984_p2() {
    dneg_37_4_fu_30984_p2 = (!y_V_1_37_3_reg_61723.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_3_reg_61723.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_5_fu_31034_p2() {
    dneg_37_5_fu_31034_p2 = (!y_V_1_37_4_fu_31026_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_4_fu_31026_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_6_fu_41724_p2() {
    dneg_37_6_fu_41724_p2 = (!y_V_1_37_5_reg_64137.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_5_reg_64137.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_7_fu_41766_p2() {
    dneg_37_7_fu_41766_p2 = (!y_V_1_37_6_fu_41758_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_6_fu_41758_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_37_8_fu_41824_p2() {
    dneg_37_8_fu_41824_p2 = (!y_V_1_37_7_fu_41816_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_37_7_fu_41816_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_1_fu_7892_p2() {
    dneg_38_1_fu_7892_p2 = (!p_Val2_7_37_fu_7886_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_37_fu_7886_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_38_2_fu_19120_p2() {
    dneg_38_2_fu_19120_p2 = (!y_V_1_38_1_fu_19111_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_38_1_fu_19111_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_38_3_fu_19202_p2() {
    dneg_38_3_fu_19202_p2 = (!y_V_1_38_2_fu_19194_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_2_fu_19194_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_4_fu_31132_p2() {
    dneg_38_4_fu_31132_p2 = (!y_V_1_38_3_reg_61757.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_3_reg_61757.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_5_fu_31182_p2() {
    dneg_38_5_fu_31182_p2 = (!y_V_1_38_4_fu_31174_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_4_fu_31174_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_6_fu_41877_p2() {
    dneg_38_6_fu_41877_p2 = (!y_V_1_38_5_reg_64171.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_5_reg_64171.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_7_fu_41919_p2() {
    dneg_38_7_fu_41919_p2 = (!y_V_1_38_6_fu_41911_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_6_fu_41911_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_38_8_fu_41977_p2() {
    dneg_38_8_fu_41977_p2 = (!y_V_1_38_7_fu_41969_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_38_7_fu_41969_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_1_fu_8010_p2() {
    dneg_39_1_fu_8010_p2 = (!p_Val2_7_38_fu_8004_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_38_fu_8004_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_39_2_fu_19314_p2() {
    dneg_39_2_fu_19314_p2 = (!y_V_1_39_1_fu_19305_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_39_1_fu_19305_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_39_3_fu_19396_p2() {
    dneg_39_3_fu_19396_p2 = (!y_V_1_39_2_fu_19388_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_2_fu_19388_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_4_fu_31280_p2() {
    dneg_39_4_fu_31280_p2 = (!y_V_1_39_3_reg_61791.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_3_reg_61791.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_5_fu_31330_p2() {
    dneg_39_5_fu_31330_p2 = (!y_V_1_39_4_fu_31322_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_4_fu_31322_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_6_fu_42030_p2() {
    dneg_39_6_fu_42030_p2 = (!y_V_1_39_5_reg_64205.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_5_reg_64205.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_7_fu_42072_p2() {
    dneg_39_7_fu_42072_p2 = (!y_V_1_39_6_fu_42064_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_6_fu_42064_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_39_8_fu_42130_p2() {
    dneg_39_8_fu_42130_p2 = (!y_V_1_39_7_fu_42122_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_39_7_fu_42122_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_1_fu_3762_p2() {
    dneg_3_1_fu_3762_p2 = (!p_Val2_7_3_fu_3756_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_3_fu_3756_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_3_2_fu_12330_p2() {
    dneg_3_2_fu_12330_p2 = (!y_V_1_3_1_fu_12321_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_3_1_fu_12321_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_3_3_fu_12412_p2() {
    dneg_3_3_fu_12412_p2 = (!y_V_1_3_2_fu_12404_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_2_fu_12404_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_4_fu_25952_p2() {
    dneg_3_4_fu_25952_p2 = (!y_V_1_3_3_reg_60567.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_3_reg_60567.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_5_fu_26002_p2() {
    dneg_3_5_fu_26002_p2 = (!y_V_1_3_4_fu_25994_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_4_fu_25994_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_6_fu_36522_p2() {
    dneg_3_6_fu_36522_p2 = (!y_V_1_3_5_reg_62981.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_5_reg_62981.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_7_fu_36564_p2() {
    dneg_3_7_fu_36564_p2 = (!y_V_1_3_6_fu_36556_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_6_fu_36556_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_3_8_fu_36622_p2() {
    dneg_3_8_fu_36622_p2 = (!y_V_1_3_7_fu_36614_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_3_7_fu_36614_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_1_fu_8128_p2() {
    dneg_40_1_fu_8128_p2 = (!p_Val2_7_39_fu_8122_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_39_fu_8122_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_40_2_fu_19508_p2() {
    dneg_40_2_fu_19508_p2 = (!y_V_1_40_1_fu_19499_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_40_1_fu_19499_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_40_3_fu_19590_p2() {
    dneg_40_3_fu_19590_p2 = (!y_V_1_40_2_fu_19582_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_2_fu_19582_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_4_fu_31428_p2() {
    dneg_40_4_fu_31428_p2 = (!y_V_1_40_3_reg_61825.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_3_reg_61825.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_5_fu_31478_p2() {
    dneg_40_5_fu_31478_p2 = (!y_V_1_40_4_fu_31470_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_4_fu_31470_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_6_fu_42183_p2() {
    dneg_40_6_fu_42183_p2 = (!y_V_1_40_5_reg_64239.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_5_reg_64239.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_7_fu_42225_p2() {
    dneg_40_7_fu_42225_p2 = (!y_V_1_40_6_fu_42217_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_6_fu_42217_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_40_8_fu_42283_p2() {
    dneg_40_8_fu_42283_p2 = (!y_V_1_40_7_fu_42275_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_40_7_fu_42275_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_1_fu_8246_p2() {
    dneg_41_1_fu_8246_p2 = (!p_Val2_7_40_fu_8240_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_40_fu_8240_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_41_2_fu_19702_p2() {
    dneg_41_2_fu_19702_p2 = (!y_V_1_41_1_fu_19693_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_41_1_fu_19693_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_41_3_fu_19784_p2() {
    dneg_41_3_fu_19784_p2 = (!y_V_1_41_2_fu_19776_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_2_fu_19776_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_4_fu_31576_p2() {
    dneg_41_4_fu_31576_p2 = (!y_V_1_41_3_reg_61859.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_3_reg_61859.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_5_fu_31626_p2() {
    dneg_41_5_fu_31626_p2 = (!y_V_1_41_4_fu_31618_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_4_fu_31618_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_6_fu_42336_p2() {
    dneg_41_6_fu_42336_p2 = (!y_V_1_41_5_reg_64273.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_5_reg_64273.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_7_fu_42378_p2() {
    dneg_41_7_fu_42378_p2 = (!y_V_1_41_6_fu_42370_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_6_fu_42370_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_41_8_fu_42436_p2() {
    dneg_41_8_fu_42436_p2 = (!y_V_1_41_7_fu_42428_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_41_7_fu_42428_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_1_fu_8364_p2() {
    dneg_42_1_fu_8364_p2 = (!p_Val2_7_41_fu_8358_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_41_fu_8358_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_42_2_fu_19896_p2() {
    dneg_42_2_fu_19896_p2 = (!y_V_1_42_1_fu_19887_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_42_1_fu_19887_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_42_3_fu_19978_p2() {
    dneg_42_3_fu_19978_p2 = (!y_V_1_42_2_fu_19970_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_2_fu_19970_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_4_fu_31724_p2() {
    dneg_42_4_fu_31724_p2 = (!y_V_1_42_3_reg_61893.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_3_reg_61893.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_5_fu_31774_p2() {
    dneg_42_5_fu_31774_p2 = (!y_V_1_42_4_fu_31766_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_4_fu_31766_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_6_fu_42489_p2() {
    dneg_42_6_fu_42489_p2 = (!y_V_1_42_5_reg_64307.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_5_reg_64307.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_7_fu_42531_p2() {
    dneg_42_7_fu_42531_p2 = (!y_V_1_42_6_fu_42523_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_6_fu_42523_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_42_8_fu_42589_p2() {
    dneg_42_8_fu_42589_p2 = (!y_V_1_42_7_fu_42581_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_42_7_fu_42581_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_1_fu_8482_p2() {
    dneg_43_1_fu_8482_p2 = (!p_Val2_7_42_fu_8476_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_42_fu_8476_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_43_2_fu_20090_p2() {
    dneg_43_2_fu_20090_p2 = (!y_V_1_43_1_fu_20081_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_43_1_fu_20081_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_43_3_fu_20172_p2() {
    dneg_43_3_fu_20172_p2 = (!y_V_1_43_2_fu_20164_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_2_fu_20164_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_4_fu_31872_p2() {
    dneg_43_4_fu_31872_p2 = (!y_V_1_43_3_reg_61927.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_3_reg_61927.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_5_fu_31922_p2() {
    dneg_43_5_fu_31922_p2 = (!y_V_1_43_4_fu_31914_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_4_fu_31914_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_6_fu_42642_p2() {
    dneg_43_6_fu_42642_p2 = (!y_V_1_43_5_reg_64341.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_5_reg_64341.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_7_fu_42684_p2() {
    dneg_43_7_fu_42684_p2 = (!y_V_1_43_6_fu_42676_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_6_fu_42676_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_43_8_fu_42742_p2() {
    dneg_43_8_fu_42742_p2 = (!y_V_1_43_7_fu_42734_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_43_7_fu_42734_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_1_fu_8600_p2() {
    dneg_44_1_fu_8600_p2 = (!p_Val2_7_43_fu_8594_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_43_fu_8594_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_44_2_fu_20284_p2() {
    dneg_44_2_fu_20284_p2 = (!y_V_1_44_1_fu_20275_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_44_1_fu_20275_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_44_3_fu_20366_p2() {
    dneg_44_3_fu_20366_p2 = (!y_V_1_44_2_fu_20358_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_2_fu_20358_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_4_fu_32020_p2() {
    dneg_44_4_fu_32020_p2 = (!y_V_1_44_3_reg_61961.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_3_reg_61961.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_5_fu_32070_p2() {
    dneg_44_5_fu_32070_p2 = (!y_V_1_44_4_fu_32062_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_4_fu_32062_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_6_fu_42795_p2() {
    dneg_44_6_fu_42795_p2 = (!y_V_1_44_5_reg_64375.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_5_reg_64375.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_7_fu_42837_p2() {
    dneg_44_7_fu_42837_p2 = (!y_V_1_44_6_fu_42829_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_6_fu_42829_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_44_8_fu_42895_p2() {
    dneg_44_8_fu_42895_p2 = (!y_V_1_44_7_fu_42887_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_44_7_fu_42887_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_1_fu_8718_p2() {
    dneg_45_1_fu_8718_p2 = (!p_Val2_7_44_fu_8712_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_44_fu_8712_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_45_2_fu_20478_p2() {
    dneg_45_2_fu_20478_p2 = (!y_V_1_45_1_fu_20469_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_45_1_fu_20469_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_45_3_fu_20560_p2() {
    dneg_45_3_fu_20560_p2 = (!y_V_1_45_2_fu_20552_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_2_fu_20552_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_4_fu_32168_p2() {
    dneg_45_4_fu_32168_p2 = (!y_V_1_45_3_reg_61995.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_3_reg_61995.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_5_fu_32218_p2() {
    dneg_45_5_fu_32218_p2 = (!y_V_1_45_4_fu_32210_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_4_fu_32210_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_6_fu_42948_p2() {
    dneg_45_6_fu_42948_p2 = (!y_V_1_45_5_reg_64409.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_5_reg_64409.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_7_fu_42990_p2() {
    dneg_45_7_fu_42990_p2 = (!y_V_1_45_6_fu_42982_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_6_fu_42982_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_45_8_fu_43048_p2() {
    dneg_45_8_fu_43048_p2 = (!y_V_1_45_7_fu_43040_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_45_7_fu_43040_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_1_fu_8836_p2() {
    dneg_46_1_fu_8836_p2 = (!p_Val2_7_45_fu_8830_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_45_fu_8830_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_46_2_fu_20672_p2() {
    dneg_46_2_fu_20672_p2 = (!y_V_1_46_1_fu_20663_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_46_1_fu_20663_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_46_3_fu_20754_p2() {
    dneg_46_3_fu_20754_p2 = (!y_V_1_46_2_fu_20746_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_2_fu_20746_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_4_fu_32316_p2() {
    dneg_46_4_fu_32316_p2 = (!y_V_1_46_3_reg_62029.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_3_reg_62029.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_5_fu_32366_p2() {
    dneg_46_5_fu_32366_p2 = (!y_V_1_46_4_fu_32358_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_4_fu_32358_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_6_fu_43101_p2() {
    dneg_46_6_fu_43101_p2 = (!y_V_1_46_5_reg_64443.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_5_reg_64443.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_7_fu_43143_p2() {
    dneg_46_7_fu_43143_p2 = (!y_V_1_46_6_fu_43135_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_6_fu_43135_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_46_8_fu_43201_p2() {
    dneg_46_8_fu_43201_p2 = (!y_V_1_46_7_fu_43193_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_46_7_fu_43193_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_1_fu_8954_p2() {
    dneg_47_1_fu_8954_p2 = (!p_Val2_7_46_fu_8948_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_46_fu_8948_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_47_2_fu_20866_p2() {
    dneg_47_2_fu_20866_p2 = (!y_V_1_47_1_fu_20857_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_47_1_fu_20857_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_47_3_fu_20948_p2() {
    dneg_47_3_fu_20948_p2 = (!y_V_1_47_2_fu_20940_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_2_fu_20940_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_4_fu_32464_p2() {
    dneg_47_4_fu_32464_p2 = (!y_V_1_47_3_reg_62063.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_3_reg_62063.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_5_fu_32514_p2() {
    dneg_47_5_fu_32514_p2 = (!y_V_1_47_4_fu_32506_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_4_fu_32506_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_6_fu_43254_p2() {
    dneg_47_6_fu_43254_p2 = (!y_V_1_47_5_reg_64477.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_5_reg_64477.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_7_fu_43296_p2() {
    dneg_47_7_fu_43296_p2 = (!y_V_1_47_6_fu_43288_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_6_fu_43288_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_47_8_fu_43354_p2() {
    dneg_47_8_fu_43354_p2 = (!y_V_1_47_7_fu_43346_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_47_7_fu_43346_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_1_fu_9072_p2() {
    dneg_48_1_fu_9072_p2 = (!p_Val2_7_47_fu_9066_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_47_fu_9066_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_48_2_fu_21060_p2() {
    dneg_48_2_fu_21060_p2 = (!y_V_1_48_1_fu_21051_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_48_1_fu_21051_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_48_3_fu_21142_p2() {
    dneg_48_3_fu_21142_p2 = (!y_V_1_48_2_fu_21134_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_2_fu_21134_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_4_fu_32612_p2() {
    dneg_48_4_fu_32612_p2 = (!y_V_1_48_3_reg_62097.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_3_reg_62097.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_5_fu_32662_p2() {
    dneg_48_5_fu_32662_p2 = (!y_V_1_48_4_fu_32654_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_4_fu_32654_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_6_fu_43407_p2() {
    dneg_48_6_fu_43407_p2 = (!y_V_1_48_5_reg_64511.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_5_reg_64511.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_7_fu_43449_p2() {
    dneg_48_7_fu_43449_p2 = (!y_V_1_48_6_fu_43441_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_6_fu_43441_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_48_8_fu_43507_p2() {
    dneg_48_8_fu_43507_p2 = (!y_V_1_48_7_fu_43499_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_48_7_fu_43499_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_1_fu_9190_p2() {
    dneg_49_1_fu_9190_p2 = (!p_Val2_7_48_fu_9184_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_48_fu_9184_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_49_2_fu_21254_p2() {
    dneg_49_2_fu_21254_p2 = (!y_V_1_49_1_fu_21245_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_49_1_fu_21245_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_49_3_fu_21336_p2() {
    dneg_49_3_fu_21336_p2 = (!y_V_1_49_2_fu_21328_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_2_fu_21328_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_4_fu_32760_p2() {
    dneg_49_4_fu_32760_p2 = (!y_V_1_49_3_reg_62131.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_3_reg_62131.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_5_fu_32810_p2() {
    dneg_49_5_fu_32810_p2 = (!y_V_1_49_4_fu_32802_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_4_fu_32802_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_6_fu_43560_p2() {
    dneg_49_6_fu_43560_p2 = (!y_V_1_49_5_reg_64545.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_5_reg_64545.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_7_fu_43602_p2() {
    dneg_49_7_fu_43602_p2 = (!y_V_1_49_6_fu_43594_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_6_fu_43594_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_49_8_fu_43660_p2() {
    dneg_49_8_fu_43660_p2 = (!y_V_1_49_7_fu_43652_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_49_7_fu_43652_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_1_fu_3880_p2() {
    dneg_4_1_fu_3880_p2 = (!p_Val2_7_4_fu_3874_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_4_fu_3874_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_4_2_fu_12524_p2() {
    dneg_4_2_fu_12524_p2 = (!y_V_1_4_1_fu_12515_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_4_1_fu_12515_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_4_3_fu_12606_p2() {
    dneg_4_3_fu_12606_p2 = (!y_V_1_4_2_fu_12598_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_2_fu_12598_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_4_fu_26100_p2() {
    dneg_4_4_fu_26100_p2 = (!y_V_1_4_3_reg_60601.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_3_reg_60601.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_5_fu_26150_p2() {
    dneg_4_5_fu_26150_p2 = (!y_V_1_4_4_fu_26142_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_4_fu_26142_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_6_fu_36675_p2() {
    dneg_4_6_fu_36675_p2 = (!y_V_1_4_5_reg_63015.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_5_reg_63015.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_7_fu_36717_p2() {
    dneg_4_7_fu_36717_p2 = (!y_V_1_4_6_fu_36709_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_6_fu_36709_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_4_8_fu_36775_p2() {
    dneg_4_8_fu_36775_p2 = (!y_V_1_4_7_fu_36767_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_4_7_fu_36767_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_1_fu_9308_p2() {
    dneg_50_1_fu_9308_p2 = (!p_Val2_7_49_fu_9302_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_49_fu_9302_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_50_2_fu_21448_p2() {
    dneg_50_2_fu_21448_p2 = (!y_V_1_50_1_fu_21439_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_50_1_fu_21439_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_50_3_fu_21530_p2() {
    dneg_50_3_fu_21530_p2 = (!y_V_1_50_2_fu_21522_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_2_fu_21522_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_4_fu_32908_p2() {
    dneg_50_4_fu_32908_p2 = (!y_V_1_50_3_reg_62165.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_3_reg_62165.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_5_fu_32958_p2() {
    dneg_50_5_fu_32958_p2 = (!y_V_1_50_4_fu_32950_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_4_fu_32950_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_6_fu_43713_p2() {
    dneg_50_6_fu_43713_p2 = (!y_V_1_50_5_reg_64579.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_5_reg_64579.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_7_fu_43755_p2() {
    dneg_50_7_fu_43755_p2 = (!y_V_1_50_6_fu_43747_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_6_fu_43747_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_50_8_fu_43813_p2() {
    dneg_50_8_fu_43813_p2 = (!y_V_1_50_7_fu_43805_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_50_7_fu_43805_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_1_fu_9426_p2() {
    dneg_51_1_fu_9426_p2 = (!p_Val2_7_50_fu_9420_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_50_fu_9420_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_51_2_fu_21642_p2() {
    dneg_51_2_fu_21642_p2 = (!y_V_1_51_1_fu_21633_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_51_1_fu_21633_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_51_3_fu_21724_p2() {
    dneg_51_3_fu_21724_p2 = (!y_V_1_51_2_fu_21716_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_2_fu_21716_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_4_fu_33056_p2() {
    dneg_51_4_fu_33056_p2 = (!y_V_1_51_3_reg_62199.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_3_reg_62199.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_5_fu_33106_p2() {
    dneg_51_5_fu_33106_p2 = (!y_V_1_51_4_fu_33098_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_4_fu_33098_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_6_fu_43866_p2() {
    dneg_51_6_fu_43866_p2 = (!y_V_1_51_5_reg_64613.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_5_reg_64613.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_7_fu_43908_p2() {
    dneg_51_7_fu_43908_p2 = (!y_V_1_51_6_fu_43900_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_6_fu_43900_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_51_8_fu_43966_p2() {
    dneg_51_8_fu_43966_p2 = (!y_V_1_51_7_fu_43958_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_51_7_fu_43958_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_1_fu_9544_p2() {
    dneg_52_1_fu_9544_p2 = (!p_Val2_7_51_fu_9538_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_51_fu_9538_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_52_2_fu_21836_p2() {
    dneg_52_2_fu_21836_p2 = (!y_V_1_52_1_fu_21827_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_52_1_fu_21827_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_52_3_fu_21918_p2() {
    dneg_52_3_fu_21918_p2 = (!y_V_1_52_2_fu_21910_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_2_fu_21910_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_4_fu_33204_p2() {
    dneg_52_4_fu_33204_p2 = (!y_V_1_52_3_reg_62233.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_3_reg_62233.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_5_fu_33254_p2() {
    dneg_52_5_fu_33254_p2 = (!y_V_1_52_4_fu_33246_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_4_fu_33246_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_6_fu_44019_p2() {
    dneg_52_6_fu_44019_p2 = (!y_V_1_52_5_reg_64647.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_5_reg_64647.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_7_fu_44061_p2() {
    dneg_52_7_fu_44061_p2 = (!y_V_1_52_6_fu_44053_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_6_fu_44053_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_52_8_fu_44119_p2() {
    dneg_52_8_fu_44119_p2 = (!y_V_1_52_7_fu_44111_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_52_7_fu_44111_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_1_fu_9662_p2() {
    dneg_53_1_fu_9662_p2 = (!p_Val2_7_52_fu_9656_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_52_fu_9656_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_53_2_fu_22030_p2() {
    dneg_53_2_fu_22030_p2 = (!y_V_1_53_1_fu_22021_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_53_1_fu_22021_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_53_3_fu_22112_p2() {
    dneg_53_3_fu_22112_p2 = (!y_V_1_53_2_fu_22104_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_2_fu_22104_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_4_fu_33352_p2() {
    dneg_53_4_fu_33352_p2 = (!y_V_1_53_3_reg_62267.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_3_reg_62267.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_5_fu_33402_p2() {
    dneg_53_5_fu_33402_p2 = (!y_V_1_53_4_fu_33394_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_4_fu_33394_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_6_fu_44172_p2() {
    dneg_53_6_fu_44172_p2 = (!y_V_1_53_5_reg_64681.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_5_reg_64681.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_7_fu_44214_p2() {
    dneg_53_7_fu_44214_p2 = (!y_V_1_53_6_fu_44206_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_6_fu_44206_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_53_8_fu_44272_p2() {
    dneg_53_8_fu_44272_p2 = (!y_V_1_53_7_fu_44264_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_53_7_fu_44264_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_1_fu_9780_p2() {
    dneg_54_1_fu_9780_p2 = (!p_Val2_7_53_fu_9774_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_53_fu_9774_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_54_2_fu_22224_p2() {
    dneg_54_2_fu_22224_p2 = (!y_V_1_54_1_fu_22215_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_54_1_fu_22215_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_54_3_fu_22306_p2() {
    dneg_54_3_fu_22306_p2 = (!y_V_1_54_2_fu_22298_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_2_fu_22298_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_4_fu_33500_p2() {
    dneg_54_4_fu_33500_p2 = (!y_V_1_54_3_reg_62301.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_3_reg_62301.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_5_fu_33550_p2() {
    dneg_54_5_fu_33550_p2 = (!y_V_1_54_4_fu_33542_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_4_fu_33542_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_6_fu_44325_p2() {
    dneg_54_6_fu_44325_p2 = (!y_V_1_54_5_reg_64715.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_5_reg_64715.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_7_fu_44367_p2() {
    dneg_54_7_fu_44367_p2 = (!y_V_1_54_6_fu_44359_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_6_fu_44359_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_54_8_fu_44425_p2() {
    dneg_54_8_fu_44425_p2 = (!y_V_1_54_7_fu_44417_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_54_7_fu_44417_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_1_fu_9898_p2() {
    dneg_55_1_fu_9898_p2 = (!p_Val2_7_54_fu_9892_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_54_fu_9892_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_55_2_fu_22418_p2() {
    dneg_55_2_fu_22418_p2 = (!y_V_1_55_1_fu_22409_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_55_1_fu_22409_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_55_3_fu_22500_p2() {
    dneg_55_3_fu_22500_p2 = (!y_V_1_55_2_fu_22492_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_2_fu_22492_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_4_fu_33648_p2() {
    dneg_55_4_fu_33648_p2 = (!y_V_1_55_3_reg_62335.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_3_reg_62335.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_5_fu_33698_p2() {
    dneg_55_5_fu_33698_p2 = (!y_V_1_55_4_fu_33690_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_4_fu_33690_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_6_fu_44478_p2() {
    dneg_55_6_fu_44478_p2 = (!y_V_1_55_5_reg_64749.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_5_reg_64749.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_7_fu_44520_p2() {
    dneg_55_7_fu_44520_p2 = (!y_V_1_55_6_fu_44512_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_6_fu_44512_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_55_8_fu_44578_p2() {
    dneg_55_8_fu_44578_p2 = (!y_V_1_55_7_fu_44570_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_55_7_fu_44570_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_1_fu_10016_p2() {
    dneg_56_1_fu_10016_p2 = (!p_Val2_7_55_fu_10010_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_55_fu_10010_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_56_2_fu_22612_p2() {
    dneg_56_2_fu_22612_p2 = (!y_V_1_56_1_fu_22603_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_56_1_fu_22603_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_56_3_fu_22694_p2() {
    dneg_56_3_fu_22694_p2 = (!y_V_1_56_2_fu_22686_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_2_fu_22686_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_4_fu_33796_p2() {
    dneg_56_4_fu_33796_p2 = (!y_V_1_56_3_reg_62369.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_3_reg_62369.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_5_fu_33846_p2() {
    dneg_56_5_fu_33846_p2 = (!y_V_1_56_4_fu_33838_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_4_fu_33838_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_6_fu_44631_p2() {
    dneg_56_6_fu_44631_p2 = (!y_V_1_56_5_reg_64783.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_5_reg_64783.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_7_fu_44673_p2() {
    dneg_56_7_fu_44673_p2 = (!y_V_1_56_6_fu_44665_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_6_fu_44665_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_56_8_fu_44731_p2() {
    dneg_56_8_fu_44731_p2 = (!y_V_1_56_7_fu_44723_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_56_7_fu_44723_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_1_fu_10134_p2() {
    dneg_57_1_fu_10134_p2 = (!p_Val2_7_56_fu_10128_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_56_fu_10128_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_57_2_fu_22806_p2() {
    dneg_57_2_fu_22806_p2 = (!y_V_1_57_1_fu_22797_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_57_1_fu_22797_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_57_3_fu_22888_p2() {
    dneg_57_3_fu_22888_p2 = (!y_V_1_57_2_fu_22880_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_2_fu_22880_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_4_fu_33944_p2() {
    dneg_57_4_fu_33944_p2 = (!y_V_1_57_3_reg_62403.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_3_reg_62403.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_5_fu_33994_p2() {
    dneg_57_5_fu_33994_p2 = (!y_V_1_57_4_fu_33986_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_4_fu_33986_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_6_fu_44784_p2() {
    dneg_57_6_fu_44784_p2 = (!y_V_1_57_5_reg_64817.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_5_reg_64817.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_7_fu_44826_p2() {
    dneg_57_7_fu_44826_p2 = (!y_V_1_57_6_fu_44818_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_6_fu_44818_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_57_8_fu_44884_p2() {
    dneg_57_8_fu_44884_p2 = (!y_V_1_57_7_fu_44876_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_57_7_fu_44876_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_1_fu_10252_p2() {
    dneg_58_1_fu_10252_p2 = (!p_Val2_7_57_fu_10246_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_57_fu_10246_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_58_2_fu_23000_p2() {
    dneg_58_2_fu_23000_p2 = (!y_V_1_58_1_fu_22991_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_58_1_fu_22991_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_58_3_fu_23082_p2() {
    dneg_58_3_fu_23082_p2 = (!y_V_1_58_2_fu_23074_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_2_fu_23074_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_4_fu_34092_p2() {
    dneg_58_4_fu_34092_p2 = (!y_V_1_58_3_reg_62437.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_3_reg_62437.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_5_fu_34142_p2() {
    dneg_58_5_fu_34142_p2 = (!y_V_1_58_4_fu_34134_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_4_fu_34134_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_6_fu_44937_p2() {
    dneg_58_6_fu_44937_p2 = (!y_V_1_58_5_reg_64851.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_5_reg_64851.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_7_fu_44979_p2() {
    dneg_58_7_fu_44979_p2 = (!y_V_1_58_6_fu_44971_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_6_fu_44971_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_58_8_fu_45037_p2() {
    dneg_58_8_fu_45037_p2 = (!y_V_1_58_7_fu_45029_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_58_7_fu_45029_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_1_fu_10370_p2() {
    dneg_59_1_fu_10370_p2 = (!p_Val2_7_58_fu_10364_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_58_fu_10364_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_59_2_fu_23194_p2() {
    dneg_59_2_fu_23194_p2 = (!y_V_1_59_1_fu_23185_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_59_1_fu_23185_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_59_3_fu_23276_p2() {
    dneg_59_3_fu_23276_p2 = (!y_V_1_59_2_fu_23268_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_2_fu_23268_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_4_fu_34240_p2() {
    dneg_59_4_fu_34240_p2 = (!y_V_1_59_3_reg_62471.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_3_reg_62471.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_5_fu_34290_p2() {
    dneg_59_5_fu_34290_p2 = (!y_V_1_59_4_fu_34282_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_4_fu_34282_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_6_fu_45090_p2() {
    dneg_59_6_fu_45090_p2 = (!y_V_1_59_5_reg_64885.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_5_reg_64885.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_7_fu_45132_p2() {
    dneg_59_7_fu_45132_p2 = (!y_V_1_59_6_fu_45124_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_6_fu_45124_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_59_8_fu_45190_p2() {
    dneg_59_8_fu_45190_p2 = (!y_V_1_59_7_fu_45182_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_59_7_fu_45182_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_1_fu_3998_p2() {
    dneg_5_1_fu_3998_p2 = (!p_Val2_7_5_fu_3992_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_5_fu_3992_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_5_2_fu_12718_p2() {
    dneg_5_2_fu_12718_p2 = (!y_V_1_5_1_fu_12709_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_5_1_fu_12709_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_5_3_fu_12800_p2() {
    dneg_5_3_fu_12800_p2 = (!y_V_1_5_2_fu_12792_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_2_fu_12792_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_4_fu_26248_p2() {
    dneg_5_4_fu_26248_p2 = (!y_V_1_5_3_reg_60635.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_3_reg_60635.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_5_fu_26298_p2() {
    dneg_5_5_fu_26298_p2 = (!y_V_1_5_4_fu_26290_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_4_fu_26290_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_6_fu_36828_p2() {
    dneg_5_6_fu_36828_p2 = (!y_V_1_5_5_reg_63049.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_5_reg_63049.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_7_fu_36870_p2() {
    dneg_5_7_fu_36870_p2 = (!y_V_1_5_6_fu_36862_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_6_fu_36862_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_5_8_fu_36928_p2() {
    dneg_5_8_fu_36928_p2 = (!y_V_1_5_7_fu_36920_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_5_7_fu_36920_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_1_fu_10488_p2() {
    dneg_60_1_fu_10488_p2 = (!p_Val2_7_59_fu_10482_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_59_fu_10482_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_60_2_fu_23388_p2() {
    dneg_60_2_fu_23388_p2 = (!y_V_1_60_1_fu_23379_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_60_1_fu_23379_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_60_3_fu_23470_p2() {
    dneg_60_3_fu_23470_p2 = (!y_V_1_60_2_fu_23462_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_2_fu_23462_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_4_fu_34388_p2() {
    dneg_60_4_fu_34388_p2 = (!y_V_1_60_3_reg_62505.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_3_reg_62505.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_5_fu_34438_p2() {
    dneg_60_5_fu_34438_p2 = (!y_V_1_60_4_fu_34430_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_4_fu_34430_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_6_fu_45243_p2() {
    dneg_60_6_fu_45243_p2 = (!y_V_1_60_5_reg_64919.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_5_reg_64919.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_7_fu_45285_p2() {
    dneg_60_7_fu_45285_p2 = (!y_V_1_60_6_fu_45277_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_6_fu_45277_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_60_8_fu_45343_p2() {
    dneg_60_8_fu_45343_p2 = (!y_V_1_60_7_fu_45335_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_60_7_fu_45335_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_1_fu_10606_p2() {
    dneg_61_1_fu_10606_p2 = (!p_Val2_7_60_fu_10600_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_60_fu_10600_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_61_2_fu_23582_p2() {
    dneg_61_2_fu_23582_p2 = (!y_V_1_61_1_fu_23573_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_61_1_fu_23573_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_61_3_fu_23664_p2() {
    dneg_61_3_fu_23664_p2 = (!y_V_1_61_2_fu_23656_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_2_fu_23656_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_4_fu_34536_p2() {
    dneg_61_4_fu_34536_p2 = (!y_V_1_61_3_reg_62539.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_3_reg_62539.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_5_fu_34586_p2() {
    dneg_61_5_fu_34586_p2 = (!y_V_1_61_4_fu_34578_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_4_fu_34578_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_6_fu_45396_p2() {
    dneg_61_6_fu_45396_p2 = (!y_V_1_61_5_reg_64953.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_5_reg_64953.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_7_fu_45438_p2() {
    dneg_61_7_fu_45438_p2 = (!y_V_1_61_6_fu_45430_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_6_fu_45430_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_61_8_fu_45496_p2() {
    dneg_61_8_fu_45496_p2 = (!y_V_1_61_7_fu_45488_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_61_7_fu_45488_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_1_fu_10724_p2() {
    dneg_62_1_fu_10724_p2 = (!p_Val2_7_61_fu_10718_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_61_fu_10718_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_62_2_fu_23776_p2() {
    dneg_62_2_fu_23776_p2 = (!y_V_1_62_1_fu_23767_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_62_1_fu_23767_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_62_3_fu_23858_p2() {
    dneg_62_3_fu_23858_p2 = (!y_V_1_62_2_fu_23850_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_2_fu_23850_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_4_fu_34684_p2() {
    dneg_62_4_fu_34684_p2 = (!y_V_1_62_3_reg_62573.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_3_reg_62573.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_5_fu_34734_p2() {
    dneg_62_5_fu_34734_p2 = (!y_V_1_62_4_fu_34726_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_4_fu_34726_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_6_fu_45549_p2() {
    dneg_62_6_fu_45549_p2 = (!y_V_1_62_5_reg_64987.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_5_reg_64987.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_7_fu_45591_p2() {
    dneg_62_7_fu_45591_p2 = (!y_V_1_62_6_fu_45583_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_6_fu_45583_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_62_8_fu_45649_p2() {
    dneg_62_8_fu_45649_p2 = (!y_V_1_62_7_fu_45641_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_62_7_fu_45641_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_1_fu_10842_p2() {
    dneg_63_1_fu_10842_p2 = (!p_Val2_7_62_fu_10836_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_62_fu_10836_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_63_2_fu_23970_p2() {
    dneg_63_2_fu_23970_p2 = (!y_V_1_63_1_fu_23961_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_63_1_fu_23961_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_63_3_fu_24052_p2() {
    dneg_63_3_fu_24052_p2 = (!y_V_1_63_2_fu_24044_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_2_fu_24044_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_4_fu_34832_p2() {
    dneg_63_4_fu_34832_p2 = (!y_V_1_63_3_reg_62607.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_3_reg_62607.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_5_fu_34882_p2() {
    dneg_63_5_fu_34882_p2 = (!y_V_1_63_4_fu_34874_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_4_fu_34874_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_6_fu_45702_p2() {
    dneg_63_6_fu_45702_p2 = (!y_V_1_63_5_reg_65021.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_5_reg_65021.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_7_fu_45744_p2() {
    dneg_63_7_fu_45744_p2 = (!y_V_1_63_6_fu_45736_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_6_fu_45736_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_63_8_fu_45802_p2() {
    dneg_63_8_fu_45802_p2 = (!y_V_1_63_7_fu_45794_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_63_7_fu_45794_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_1_fu_10960_p2() {
    dneg_64_1_fu_10960_p2 = (!p_Val2_7_63_fu_10954_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_63_fu_10954_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_64_2_fu_24164_p2() {
    dneg_64_2_fu_24164_p2 = (!y_V_1_64_1_fu_24155_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_64_1_fu_24155_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_64_3_fu_24246_p2() {
    dneg_64_3_fu_24246_p2 = (!y_V_1_64_2_fu_24238_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_2_fu_24238_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_4_fu_34980_p2() {
    dneg_64_4_fu_34980_p2 = (!y_V_1_64_3_reg_62641.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_3_reg_62641.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_5_fu_35030_p2() {
    dneg_64_5_fu_35030_p2 = (!y_V_1_64_4_fu_35022_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_4_fu_35022_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_6_fu_45855_p2() {
    dneg_64_6_fu_45855_p2 = (!y_V_1_64_5_reg_65055.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_5_reg_65055.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_7_fu_45897_p2() {
    dneg_64_7_fu_45897_p2 = (!y_V_1_64_6_fu_45889_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_6_fu_45889_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_64_8_fu_45955_p2() {
    dneg_64_8_fu_45955_p2 = (!y_V_1_64_7_fu_45947_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_64_7_fu_45947_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_1_fu_11078_p2() {
    dneg_65_1_fu_11078_p2 = (!p_Val2_7_64_fu_11072_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_64_fu_11072_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_65_2_fu_24358_p2() {
    dneg_65_2_fu_24358_p2 = (!y_V_1_65_1_fu_24349_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_65_1_fu_24349_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_65_3_fu_24440_p2() {
    dneg_65_3_fu_24440_p2 = (!y_V_1_65_2_fu_24432_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_2_fu_24432_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_4_fu_35128_p2() {
    dneg_65_4_fu_35128_p2 = (!y_V_1_65_3_reg_62675.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_3_reg_62675.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_5_fu_35178_p2() {
    dneg_65_5_fu_35178_p2 = (!y_V_1_65_4_fu_35170_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_4_fu_35170_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_6_fu_46008_p2() {
    dneg_65_6_fu_46008_p2 = (!y_V_1_65_5_reg_65089.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_5_reg_65089.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_7_fu_46050_p2() {
    dneg_65_7_fu_46050_p2 = (!y_V_1_65_6_fu_46042_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_6_fu_46042_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_65_8_fu_46108_p2() {
    dneg_65_8_fu_46108_p2 = (!y_V_1_65_7_fu_46100_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_65_7_fu_46100_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_1_fu_11196_p2() {
    dneg_66_1_fu_11196_p2 = (!p_Val2_7_65_fu_11190_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_65_fu_11190_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_66_2_fu_24552_p2() {
    dneg_66_2_fu_24552_p2 = (!y_V_1_66_1_fu_24543_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_66_1_fu_24543_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_66_3_fu_24634_p2() {
    dneg_66_3_fu_24634_p2 = (!y_V_1_66_2_fu_24626_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_2_fu_24626_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_4_fu_35276_p2() {
    dneg_66_4_fu_35276_p2 = (!y_V_1_66_3_reg_62709.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_3_reg_62709.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_5_fu_35326_p2() {
    dneg_66_5_fu_35326_p2 = (!y_V_1_66_4_fu_35318_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_4_fu_35318_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_6_fu_46161_p2() {
    dneg_66_6_fu_46161_p2 = (!y_V_1_66_5_reg_65123.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_5_reg_65123.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_7_fu_46203_p2() {
    dneg_66_7_fu_46203_p2 = (!y_V_1_66_6_fu_46195_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_6_fu_46195_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_66_8_fu_46261_p2() {
    dneg_66_8_fu_46261_p2 = (!y_V_1_66_7_fu_46253_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_66_7_fu_46253_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_1_fu_11314_p2() {
    dneg_67_1_fu_11314_p2 = (!p_Val2_7_66_fu_11308_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_66_fu_11308_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_67_2_fu_24746_p2() {
    dneg_67_2_fu_24746_p2 = (!y_V_1_67_1_fu_24737_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_67_1_fu_24737_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_67_3_fu_24828_p2() {
    dneg_67_3_fu_24828_p2 = (!y_V_1_67_2_fu_24820_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_2_fu_24820_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_4_fu_35424_p2() {
    dneg_67_4_fu_35424_p2 = (!y_V_1_67_3_reg_62743.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_3_reg_62743.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_5_fu_35474_p2() {
    dneg_67_5_fu_35474_p2 = (!y_V_1_67_4_fu_35466_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_4_fu_35466_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_6_fu_46314_p2() {
    dneg_67_6_fu_46314_p2 = (!y_V_1_67_5_reg_65157.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_5_reg_65157.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_7_fu_46356_p2() {
    dneg_67_7_fu_46356_p2 = (!y_V_1_67_6_fu_46348_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_6_fu_46348_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_67_8_fu_46414_p2() {
    dneg_67_8_fu_46414_p2 = (!y_V_1_67_7_fu_46406_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_67_7_fu_46406_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_1_fu_11432_p2() {
    dneg_68_1_fu_11432_p2 = (!p_Val2_7_67_fu_11426_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_67_fu_11426_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_68_2_fu_24940_p2() {
    dneg_68_2_fu_24940_p2 = (!y_V_1_68_1_fu_24931_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_68_1_fu_24931_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_68_3_fu_25022_p2() {
    dneg_68_3_fu_25022_p2 = (!y_V_1_68_2_fu_25014_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_2_fu_25014_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_4_fu_35572_p2() {
    dneg_68_4_fu_35572_p2 = (!y_V_1_68_3_reg_62777.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_3_reg_62777.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_5_fu_35622_p2() {
    dneg_68_5_fu_35622_p2 = (!y_V_1_68_4_fu_35614_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_4_fu_35614_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_6_fu_46467_p2() {
    dneg_68_6_fu_46467_p2 = (!y_V_1_68_5_reg_65191.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_5_reg_65191.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_7_fu_46509_p2() {
    dneg_68_7_fu_46509_p2 = (!y_V_1_68_6_fu_46501_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_6_fu_46501_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_68_8_fu_46567_p2() {
    dneg_68_8_fu_46567_p2 = (!y_V_1_68_7_fu_46559_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_68_7_fu_46559_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_1_fu_11550_p2() {
    dneg_69_1_fu_11550_p2 = (!p_Val2_7_68_fu_11544_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_68_fu_11544_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_69_2_fu_25134_p2() {
    dneg_69_2_fu_25134_p2 = (!y_V_1_69_1_fu_25125_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_69_1_fu_25125_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_69_3_fu_25216_p2() {
    dneg_69_3_fu_25216_p2 = (!y_V_1_69_2_fu_25208_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_2_fu_25208_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_4_fu_35720_p2() {
    dneg_69_4_fu_35720_p2 = (!y_V_1_69_3_reg_62811.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_3_reg_62811.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_5_fu_35770_p2() {
    dneg_69_5_fu_35770_p2 = (!y_V_1_69_4_fu_35762_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_4_fu_35762_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_6_fu_46620_p2() {
    dneg_69_6_fu_46620_p2 = (!y_V_1_69_5_reg_65225.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_5_reg_65225.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_7_fu_46662_p2() {
    dneg_69_7_fu_46662_p2 = (!y_V_1_69_6_fu_46654_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_6_fu_46654_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_69_8_fu_46720_p2() {
    dneg_69_8_fu_46720_p2 = (!y_V_1_69_7_fu_46712_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_69_7_fu_46712_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_1_fu_4116_p2() {
    dneg_6_1_fu_4116_p2 = (!p_Val2_7_6_fu_4110_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_6_fu_4110_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_6_2_fu_12912_p2() {
    dneg_6_2_fu_12912_p2 = (!y_V_1_6_1_fu_12903_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_6_1_fu_12903_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_6_3_fu_12994_p2() {
    dneg_6_3_fu_12994_p2 = (!y_V_1_6_2_fu_12986_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_2_fu_12986_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_4_fu_26396_p2() {
    dneg_6_4_fu_26396_p2 = (!y_V_1_6_3_reg_60669.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_3_reg_60669.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_5_fu_26446_p2() {
    dneg_6_5_fu_26446_p2 = (!y_V_1_6_4_fu_26438_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_4_fu_26438_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_6_fu_36981_p2() {
    dneg_6_6_fu_36981_p2 = (!y_V_1_6_5_reg_63083.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_5_reg_63083.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_7_fu_37023_p2() {
    dneg_6_7_fu_37023_p2 = (!y_V_1_6_6_fu_37015_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_6_fu_37015_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_6_8_fu_37081_p2() {
    dneg_6_8_fu_37081_p2 = (!y_V_1_6_7_fu_37073_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_6_7_fu_37073_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_1_fu_11668_p2() {
    dneg_70_1_fu_11668_p2 = (!p_Val2_7_69_fu_11662_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_69_fu_11662_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_70_2_fu_25328_p2() {
    dneg_70_2_fu_25328_p2 = (!y_V_1_70_1_fu_25319_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_70_1_fu_25319_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_70_3_fu_25410_p2() {
    dneg_70_3_fu_25410_p2 = (!y_V_1_70_2_fu_25402_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_2_fu_25402_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_4_fu_35868_p2() {
    dneg_70_4_fu_35868_p2 = (!y_V_1_70_3_reg_62845.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_3_reg_62845.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_5_fu_35918_p2() {
    dneg_70_5_fu_35918_p2 = (!y_V_1_70_4_fu_35910_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_4_fu_35910_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_6_fu_46773_p2() {
    dneg_70_6_fu_46773_p2 = (!y_V_1_70_5_reg_65259.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_5_reg_65259.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_7_fu_46815_p2() {
    dneg_70_7_fu_46815_p2 = (!y_V_1_70_6_fu_46807_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_6_fu_46807_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_70_8_fu_46873_p2() {
    dneg_70_8_fu_46873_p2 = (!y_V_1_70_7_fu_46865_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_70_7_fu_46865_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_1_fu_4234_p2() {
    dneg_7_1_fu_4234_p2 = (!p_Val2_7_7_fu_4228_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_7_fu_4228_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_7_2_fu_13106_p2() {
    dneg_7_2_fu_13106_p2 = (!y_V_1_7_1_fu_13097_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_7_1_fu_13097_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_7_3_fu_13188_p2() {
    dneg_7_3_fu_13188_p2 = (!y_V_1_7_2_fu_13180_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_2_fu_13180_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_4_fu_26544_p2() {
    dneg_7_4_fu_26544_p2 = (!y_V_1_7_3_reg_60703.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_3_reg_60703.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_5_fu_26594_p2() {
    dneg_7_5_fu_26594_p2 = (!y_V_1_7_4_fu_26586_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_4_fu_26586_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_6_fu_37134_p2() {
    dneg_7_6_fu_37134_p2 = (!y_V_1_7_5_reg_63117.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_5_reg_63117.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_7_fu_37176_p2() {
    dneg_7_7_fu_37176_p2 = (!y_V_1_7_6_fu_37168_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_6_fu_37168_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_7_8_fu_37234_p2() {
    dneg_7_8_fu_37234_p2 = (!y_V_1_7_7_fu_37226_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_7_7_fu_37226_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_1_fu_4352_p2() {
    dneg_8_1_fu_4352_p2 = (!p_Val2_7_8_fu_4346_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_8_fu_4346_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_8_2_fu_13300_p2() {
    dneg_8_2_fu_13300_p2 = (!y_V_1_8_1_fu_13291_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_8_1_fu_13291_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_8_3_fu_13382_p2() {
    dneg_8_3_fu_13382_p2 = (!y_V_1_8_2_fu_13374_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_2_fu_13374_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_4_fu_26692_p2() {
    dneg_8_4_fu_26692_p2 = (!y_V_1_8_3_reg_60737.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_3_reg_60737.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_5_fu_26742_p2() {
    dneg_8_5_fu_26742_p2 = (!y_V_1_8_4_fu_26734_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_4_fu_26734_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_6_fu_37287_p2() {
    dneg_8_6_fu_37287_p2 = (!y_V_1_8_5_reg_63151.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_5_reg_63151.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_7_fu_37329_p2() {
    dneg_8_7_fu_37329_p2 = (!y_V_1_8_6_fu_37321_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_6_fu_37321_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_8_8_fu_37387_p2() {
    dneg_8_8_fu_37387_p2 = (!y_V_1_8_7_fu_37379_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_8_7_fu_37379_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_1_fu_4470_p2() {
    dneg_9_1_fu_4470_p2 = (!p_Val2_7_9_fu_4464_p2.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_Val2_7_9_fu_4464_p2.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_9_2_fu_13494_p2() {
    dneg_9_2_fu_13494_p2 = (!y_V_1_9_1_fu_13485_p3.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(y_V_1_9_1_fu_13485_p3.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void Sobel_phase_strm::thread_dneg_9_3_fu_13576_p2() {
    dneg_9_3_fu_13576_p2 = (!y_V_1_9_2_fu_13568_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_2_fu_13568_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_4_fu_26840_p2() {
    dneg_9_4_fu_26840_p2 = (!y_V_1_9_3_reg_60771.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_3_reg_60771.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_5_fu_26890_p2() {
    dneg_9_5_fu_26890_p2 = (!y_V_1_9_4_fu_26882_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_4_fu_26882_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_6_fu_37440_p2() {
    dneg_9_6_fu_37440_p2 = (!y_V_1_9_5_reg_63185.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_5_reg_63185.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_7_fu_37482_p2() {
    dneg_9_7_fu_37482_p2 = (!y_V_1_9_6_fu_37474_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_6_fu_37474_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_dneg_9_8_fu_37540_p2() {
    dneg_9_8_fu_37540_p2 = (!y_V_1_9_7_fu_37532_p3.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(y_V_1_9_7_fu_37532_p3.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void Sobel_phase_strm::thread_exitcond1_fu_2776_p2() {
    exitcond1_fu_2776_p2 = (!x_reg_2765.read().is_01() || !ap_const_lv9_1E0.is_01())? sc_lv<1>(): sc_lv<1>(x_reg_2765.read() == ap_const_lv9_1E0);
}

void Sobel_phase_strm::thread_grad_x_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_10_blk_n = grad_x_V_pixel_10_empty_n.read();
    } else {
        grad_x_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_read() {
    grad_x_V_pixel_10_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_status() {
    grad_x_V_pixel_10_status = (grad_x_V_pixel_0_empty_n.read() & grad_x_V_pixel_1_empty_n.read() & grad_x_V_pixel_2_empty_n.read() & grad_x_V_pixel_3_empty_n.read() & grad_x_V_pixel_4_empty_n.read() & grad_x_V_pixel_5_empty_n.read() & grad_x_V_pixel_6_empty_n.read() & grad_x_V_pixel_7_empty_n.read() & grad_x_V_pixel_8_empty_n.read() & grad_x_V_pixel_9_empty_n.read() & grad_x_V_pixel_10_empty_n.read() & grad_x_V_pixel_11_empty_n.read() & grad_x_V_pixel_12_empty_n.read() & grad_x_V_pixel_13_empty_n.read() & grad_x_V_pixel_14_empty_n.read() & grad_x_V_pixel_15_empty_n.read() & grad_x_V_pixel_16_empty_n.read() & grad_x_V_pixel_17_empty_n.read() & grad_x_V_pixel_18_empty_n.read() & grad_x_V_pixel_19_empty_n.read() & grad_x_V_pixel_20_empty_n.read() & grad_x_V_pixel_21_empty_n.read() & grad_x_V_pixel_22_empty_n.read() & grad_x_V_pixel_23_empty_n.read() & grad_x_V_pixel_24_empty_n.read() & grad_x_V_pixel_25_empty_n.read() & grad_x_V_pixel_26_empty_n.read() & grad_x_V_pixel_27_empty_n.read() & grad_x_V_pixel_28_empty_n.read() & grad_x_V_pixel_29_empty_n.read() & grad_x_V_pixel_30_empty_n.read() & grad_x_V_pixel_31_empty_n.read() & grad_x_V_pixel_32_empty_n.read() & grad_x_V_pixel_33_empty_n.read() & grad_x_V_pixel_34_empty_n.read() & grad_x_V_pixel_35_empty_n.read() & grad_x_V_pixel_36_empty_n.read() & grad_x_V_pixel_37_empty_n.read() & grad_x_V_pixel_38_empty_n.read() & grad_x_V_pixel_39_empty_n.read() & grad_x_V_pixel_40_empty_n.read() & grad_x_V_pixel_41_empty_n.read() & grad_x_V_pixel_42_empty_n.read() & grad_x_V_pixel_43_empty_n.read() & grad_x_V_pixel_44_empty_n.read() & grad_x_V_pixel_45_empty_n.read() & grad_x_V_pixel_46_empty_n.read() & grad_x_V_pixel_47_empty_n.read() & grad_x_V_pixel_48_empty_n.read() & grad_x_V_pixel_49_empty_n.read() & grad_x_V_pixel_50_empty_n.read() & grad_x_V_pixel_51_empty_n.read() & grad_x_V_pixel_52_empty_n.read() & grad_x_V_pixel_53_empty_n.read() & grad_x_V_pixel_54_empty_n.read() & grad_x_V_pixel_55_empty_n.read() & grad_x_V_pixel_56_empty_n.read() & grad_x_V_pixel_57_empty_n.read() & grad_x_V_pixel_58_empty_n.read() & grad_x_V_pixel_59_empty_n.read() & grad_x_V_pixel_60_empty_n.read() & grad_x_V_pixel_61_empty_n.read() & grad_x_V_pixel_62_empty_n.read() & grad_x_V_pixel_63_empty_n.read() & grad_x_V_pixel_64_empty_n.read() & grad_x_V_pixel_65_empty_n.read() & grad_x_V_pixel_66_empty_n.read() & grad_x_V_pixel_67_empty_n.read() & grad_x_V_pixel_68_empty_n.read() & grad_x_V_pixel_69_empty_n.read() & grad_x_V_pixel_70_empty_n.read());
}

void Sobel_phase_strm::thread_grad_x_V_pixel_10_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_1132.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_1137.read())))) {
        grad_x_V_pixel_10_update = ap_const_logic_1;
    } else {
        grad_x_V_pixel_10_update = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_41_blk_n = grad_x_V_pixel_41_empty_n.read();
    } else {
        grad_x_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_41_read() {
    grad_x_V_pixel_41_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_42_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_42_blk_n = grad_x_V_pixel_42_empty_n.read();
    } else {
        grad_x_V_pixel_42_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_42_read() {
    grad_x_V_pixel_42_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_43_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_43_blk_n = grad_x_V_pixel_43_empty_n.read();
    } else {
        grad_x_V_pixel_43_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_43_read() {
    grad_x_V_pixel_43_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_44_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_44_blk_n = grad_x_V_pixel_44_empty_n.read();
    } else {
        grad_x_V_pixel_44_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_44_read() {
    grad_x_V_pixel_44_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_45_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_45_blk_n = grad_x_V_pixel_45_empty_n.read();
    } else {
        grad_x_V_pixel_45_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_45_read() {
    grad_x_V_pixel_45_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_46_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_46_blk_n = grad_x_V_pixel_46_empty_n.read();
    } else {
        grad_x_V_pixel_46_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_46_read() {
    grad_x_V_pixel_46_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_47_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_47_blk_n = grad_x_V_pixel_47_empty_n.read();
    } else {
        grad_x_V_pixel_47_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_47_read() {
    grad_x_V_pixel_47_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_48_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_48_blk_n = grad_x_V_pixel_48_empty_n.read();
    } else {
        grad_x_V_pixel_48_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_48_read() {
    grad_x_V_pixel_48_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_49_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_49_blk_n = grad_x_V_pixel_49_empty_n.read();
    } else {
        grad_x_V_pixel_49_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_49_read() {
    grad_x_V_pixel_49_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_4_blk_n = grad_x_V_pixel_4_empty_n.read();
    } else {
        grad_x_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_4_read() {
    grad_x_V_pixel_4_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_50_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_50_blk_n = grad_x_V_pixel_50_empty_n.read();
    } else {
        grad_x_V_pixel_50_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_50_read() {
    grad_x_V_pixel_50_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_51_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_51_blk_n = grad_x_V_pixel_51_empty_n.read();
    } else {
        grad_x_V_pixel_51_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_51_read() {
    grad_x_V_pixel_51_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_52_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_52_blk_n = grad_x_V_pixel_52_empty_n.read();
    } else {
        grad_x_V_pixel_52_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_52_read() {
    grad_x_V_pixel_52_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_53_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_53_blk_n = grad_x_V_pixel_53_empty_n.read();
    } else {
        grad_x_V_pixel_53_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_53_read() {
    grad_x_V_pixel_53_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_54_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_54_blk_n = grad_x_V_pixel_54_empty_n.read();
    } else {
        grad_x_V_pixel_54_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_54_read() {
    grad_x_V_pixel_54_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_55_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_55_blk_n = grad_x_V_pixel_55_empty_n.read();
    } else {
        grad_x_V_pixel_55_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_55_read() {
    grad_x_V_pixel_55_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_56_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_56_blk_n = grad_x_V_pixel_56_empty_n.read();
    } else {
        grad_x_V_pixel_56_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_56_read() {
    grad_x_V_pixel_56_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_57_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_57_blk_n = grad_x_V_pixel_57_empty_n.read();
    } else {
        grad_x_V_pixel_57_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_57_read() {
    grad_x_V_pixel_57_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_58_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_58_blk_n = grad_x_V_pixel_58_empty_n.read();
    } else {
        grad_x_V_pixel_58_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_58_read() {
    grad_x_V_pixel_58_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_59_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_59_blk_n = grad_x_V_pixel_59_empty_n.read();
    } else {
        grad_x_V_pixel_59_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_59_read() {
    grad_x_V_pixel_59_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_5_blk_n = grad_x_V_pixel_5_empty_n.read();
    } else {
        grad_x_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_5_read() {
    grad_x_V_pixel_5_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_60_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_60_blk_n = grad_x_V_pixel_60_empty_n.read();
    } else {
        grad_x_V_pixel_60_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_60_read() {
    grad_x_V_pixel_60_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_61_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_61_blk_n = grad_x_V_pixel_61_empty_n.read();
    } else {
        grad_x_V_pixel_61_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_61_read() {
    grad_x_V_pixel_61_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_62_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_62_blk_n = grad_x_V_pixel_62_empty_n.read();
    } else {
        grad_x_V_pixel_62_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_62_read() {
    grad_x_V_pixel_62_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_63_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_63_blk_n = grad_x_V_pixel_63_empty_n.read();
    } else {
        grad_x_V_pixel_63_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_63_read() {
    grad_x_V_pixel_63_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_64_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_64_blk_n = grad_x_V_pixel_64_empty_n.read();
    } else {
        grad_x_V_pixel_64_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_64_read() {
    grad_x_V_pixel_64_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_65_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_65_blk_n = grad_x_V_pixel_65_empty_n.read();
    } else {
        grad_x_V_pixel_65_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_65_read() {
    grad_x_V_pixel_65_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_66_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_66_blk_n = grad_x_V_pixel_66_empty_n.read();
    } else {
        grad_x_V_pixel_66_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_66_read() {
    grad_x_V_pixel_66_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_67_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_67_blk_n = grad_x_V_pixel_67_empty_n.read();
    } else {
        grad_x_V_pixel_67_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_67_read() {
    grad_x_V_pixel_67_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_68_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_68_blk_n = grad_x_V_pixel_68_empty_n.read();
    } else {
        grad_x_V_pixel_68_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_68_read() {
    grad_x_V_pixel_68_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_69_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_69_blk_n = grad_x_V_pixel_69_empty_n.read();
    } else {
        grad_x_V_pixel_69_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_69_read() {
    grad_x_V_pixel_69_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_6_blk_n = grad_x_V_pixel_6_empty_n.read();
    } else {
        grad_x_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_6_read() {
    grad_x_V_pixel_6_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_70_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_x_V_pixel_70_blk_n = grad_x_V_pixel_70_empty_n.read();
    } else {
        grad_x_V_pixel_70_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_x_V_pixel_70_read() {
    grad_x_V_pixel_70_read = grad_x_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_x_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_10_blk_n = grad_y_V_pixel_10_empty_n.read();
    } else {
        grad_y_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_read() {
    grad_y_V_pixel_10_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_status() {
    grad_y_V_pixel_10_status = (grad_y_V_pixel_0_empty_n.read() & grad_y_V_pixel_1_empty_n.read() & grad_y_V_pixel_2_empty_n.read() & grad_y_V_pixel_3_empty_n.read() & grad_y_V_pixel_4_empty_n.read() & grad_y_V_pixel_5_empty_n.read() & grad_y_V_pixel_6_empty_n.read() & grad_y_V_pixel_7_empty_n.read() & grad_y_V_pixel_8_empty_n.read() & grad_y_V_pixel_9_empty_n.read() & grad_y_V_pixel_10_empty_n.read() & grad_y_V_pixel_11_empty_n.read() & grad_y_V_pixel_12_empty_n.read() & grad_y_V_pixel_13_empty_n.read() & grad_y_V_pixel_14_empty_n.read() & grad_y_V_pixel_15_empty_n.read() & grad_y_V_pixel_16_empty_n.read() & grad_y_V_pixel_17_empty_n.read() & grad_y_V_pixel_18_empty_n.read() & grad_y_V_pixel_19_empty_n.read() & grad_y_V_pixel_20_empty_n.read() & grad_y_V_pixel_21_empty_n.read() & grad_y_V_pixel_22_empty_n.read() & grad_y_V_pixel_23_empty_n.read() & grad_y_V_pixel_24_empty_n.read() & grad_y_V_pixel_25_empty_n.read() & grad_y_V_pixel_26_empty_n.read() & grad_y_V_pixel_27_empty_n.read() & grad_y_V_pixel_28_empty_n.read() & grad_y_V_pixel_29_empty_n.read() & grad_y_V_pixel_30_empty_n.read() & grad_y_V_pixel_31_empty_n.read() & grad_y_V_pixel_32_empty_n.read() & grad_y_V_pixel_33_empty_n.read() & grad_y_V_pixel_34_empty_n.read() & grad_y_V_pixel_35_empty_n.read() & grad_y_V_pixel_36_empty_n.read() & grad_y_V_pixel_37_empty_n.read() & grad_y_V_pixel_38_empty_n.read() & grad_y_V_pixel_39_empty_n.read() & grad_y_V_pixel_40_empty_n.read() & grad_y_V_pixel_41_empty_n.read() & grad_y_V_pixel_42_empty_n.read() & grad_y_V_pixel_43_empty_n.read() & grad_y_V_pixel_44_empty_n.read() & grad_y_V_pixel_45_empty_n.read() & grad_y_V_pixel_46_empty_n.read() & grad_y_V_pixel_47_empty_n.read() & grad_y_V_pixel_48_empty_n.read() & grad_y_V_pixel_49_empty_n.read() & grad_y_V_pixel_50_empty_n.read() & grad_y_V_pixel_51_empty_n.read() & grad_y_V_pixel_52_empty_n.read() & grad_y_V_pixel_53_empty_n.read() & grad_y_V_pixel_54_empty_n.read() & grad_y_V_pixel_55_empty_n.read() & grad_y_V_pixel_56_empty_n.read() & grad_y_V_pixel_57_empty_n.read() & grad_y_V_pixel_58_empty_n.read() & grad_y_V_pixel_59_empty_n.read() & grad_y_V_pixel_60_empty_n.read() & grad_y_V_pixel_61_empty_n.read() & grad_y_V_pixel_62_empty_n.read() & grad_y_V_pixel_63_empty_n.read() & grad_y_V_pixel_64_empty_n.read() & grad_y_V_pixel_65_empty_n.read() & grad_y_V_pixel_66_empty_n.read() & grad_y_V_pixel_67_empty_n.read() & grad_y_V_pixel_68_empty_n.read() & grad_y_V_pixel_69_empty_n.read() & grad_y_V_pixel_70_empty_n.read());
}

void Sobel_phase_strm::thread_grad_y_V_pixel_10_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_1132.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_1137.read())))) {
        grad_y_V_pixel_10_update = ap_const_logic_1;
    } else {
        grad_y_V_pixel_10_update = ap_const_logic_0;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_41_blk_n = grad_y_V_pixel_41_empty_n.read();
    } else {
        grad_y_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_41_read() {
    grad_y_V_pixel_41_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_42_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_42_blk_n = grad_y_V_pixel_42_empty_n.read();
    } else {
        grad_y_V_pixel_42_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_42_read() {
    grad_y_V_pixel_42_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_43_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_43_blk_n = grad_y_V_pixel_43_empty_n.read();
    } else {
        grad_y_V_pixel_43_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_43_read() {
    grad_y_V_pixel_43_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_44_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_44_blk_n = grad_y_V_pixel_44_empty_n.read();
    } else {
        grad_y_V_pixel_44_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_44_read() {
    grad_y_V_pixel_44_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_45_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_45_blk_n = grad_y_V_pixel_45_empty_n.read();
    } else {
        grad_y_V_pixel_45_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_45_read() {
    grad_y_V_pixel_45_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_46_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_46_blk_n = grad_y_V_pixel_46_empty_n.read();
    } else {
        grad_y_V_pixel_46_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_46_read() {
    grad_y_V_pixel_46_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_47_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_47_blk_n = grad_y_V_pixel_47_empty_n.read();
    } else {
        grad_y_V_pixel_47_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_47_read() {
    grad_y_V_pixel_47_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_48_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_48_blk_n = grad_y_V_pixel_48_empty_n.read();
    } else {
        grad_y_V_pixel_48_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_48_read() {
    grad_y_V_pixel_48_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_49_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_49_blk_n = grad_y_V_pixel_49_empty_n.read();
    } else {
        grad_y_V_pixel_49_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_49_read() {
    grad_y_V_pixel_49_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_4_blk_n = grad_y_V_pixel_4_empty_n.read();
    } else {
        grad_y_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_4_read() {
    grad_y_V_pixel_4_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_50_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_50_blk_n = grad_y_V_pixel_50_empty_n.read();
    } else {
        grad_y_V_pixel_50_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_50_read() {
    grad_y_V_pixel_50_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_51_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_51_blk_n = grad_y_V_pixel_51_empty_n.read();
    } else {
        grad_y_V_pixel_51_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_51_read() {
    grad_y_V_pixel_51_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_52_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_52_blk_n = grad_y_V_pixel_52_empty_n.read();
    } else {
        grad_y_V_pixel_52_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_52_read() {
    grad_y_V_pixel_52_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_53_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_53_blk_n = grad_y_V_pixel_53_empty_n.read();
    } else {
        grad_y_V_pixel_53_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_53_read() {
    grad_y_V_pixel_53_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_54_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_54_blk_n = grad_y_V_pixel_54_empty_n.read();
    } else {
        grad_y_V_pixel_54_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_54_read() {
    grad_y_V_pixel_54_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_55_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_55_blk_n = grad_y_V_pixel_55_empty_n.read();
    } else {
        grad_y_V_pixel_55_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_55_read() {
    grad_y_V_pixel_55_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_56_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_56_blk_n = grad_y_V_pixel_56_empty_n.read();
    } else {
        grad_y_V_pixel_56_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_56_read() {
    grad_y_V_pixel_56_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_57_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_57_blk_n = grad_y_V_pixel_57_empty_n.read();
    } else {
        grad_y_V_pixel_57_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_57_read() {
    grad_y_V_pixel_57_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_58_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_58_blk_n = grad_y_V_pixel_58_empty_n.read();
    } else {
        grad_y_V_pixel_58_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_58_read() {
    grad_y_V_pixel_58_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_59_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_59_blk_n = grad_y_V_pixel_59_empty_n.read();
    } else {
        grad_y_V_pixel_59_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_59_read() {
    grad_y_V_pixel_59_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_5_blk_n = grad_y_V_pixel_5_empty_n.read();
    } else {
        grad_y_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_5_read() {
    grad_y_V_pixel_5_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_60_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_60_blk_n = grad_y_V_pixel_60_empty_n.read();
    } else {
        grad_y_V_pixel_60_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_60_read() {
    grad_y_V_pixel_60_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_61_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_61_blk_n = grad_y_V_pixel_61_empty_n.read();
    } else {
        grad_y_V_pixel_61_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_61_read() {
    grad_y_V_pixel_61_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_62_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_62_blk_n = grad_y_V_pixel_62_empty_n.read();
    } else {
        grad_y_V_pixel_62_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_62_read() {
    grad_y_V_pixel_62_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_63_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_63_blk_n = grad_y_V_pixel_63_empty_n.read();
    } else {
        grad_y_V_pixel_63_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_63_read() {
    grad_y_V_pixel_63_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_64_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_64_blk_n = grad_y_V_pixel_64_empty_n.read();
    } else {
        grad_y_V_pixel_64_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_64_read() {
    grad_y_V_pixel_64_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_65_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_65_blk_n = grad_y_V_pixel_65_empty_n.read();
    } else {
        grad_y_V_pixel_65_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_65_read() {
    grad_y_V_pixel_65_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_66_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_66_blk_n = grad_y_V_pixel_66_empty_n.read();
    } else {
        grad_y_V_pixel_66_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_66_read() {
    grad_y_V_pixel_66_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_67_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_67_blk_n = grad_y_V_pixel_67_empty_n.read();
    } else {
        grad_y_V_pixel_67_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_67_read() {
    grad_y_V_pixel_67_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_68_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_68_blk_n = grad_y_V_pixel_68_empty_n.read();
    } else {
        grad_y_V_pixel_68_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_68_read() {
    grad_y_V_pixel_68_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_69_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_69_blk_n = grad_y_V_pixel_69_empty_n.read();
    } else {
        grad_y_V_pixel_69_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_69_read() {
    grad_y_V_pixel_69_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_6_blk_n = grad_y_V_pixel_6_empty_n.read();
    } else {
        grad_y_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_6_read() {
    grad_y_V_pixel_6_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_70_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
        grad_y_V_pixel_70_blk_n = grad_y_V_pixel_70_empty_n.read();
    } else {
        grad_y_V_pixel_70_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_grad_y_V_pixel_70_read() {
    grad_y_V_pixel_70_read = grad_y_V_pixel_10_update.read();
}

void Sobel_phase_strm::thread_grad_y_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_57742.read(), ap_const_lv1_0))) {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_0_blk_n = output_V_pixel_0_full_n.read();
    } else {
        output_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_0_din() {
    output_V_pixel_0_din = (!tmp_20_fu_55896_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_20_fu_55896_p3.read()[0].to_bool())? p_i_fu_55908_p3.read(): tmp_19_reg_66702.read());
}

void Sobel_phase_strm::thread_output_V_pixel_0_write() {
    output_V_pixel_0_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_10_blk_n = output_V_pixel_10_full_n.read();
    } else {
        output_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_10_din() {
    output_V_pixel_10_din = (!tmp_221_fu_56156_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_221_fu_56156_p3.read()[0].to_bool())? p_i_s_fu_56168_p3.read(): tmp_220_reg_66872.read());
}

void Sobel_phase_strm::thread_output_V_pixel_10_write() {
    output_V_pixel_10_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_11_blk_n = output_V_pixel_11_full_n.read();
    } else {
        output_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_11_din() {
    output_V_pixel_11_din = (!tmp_241_fu_56182_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_241_fu_56182_p3.read()[0].to_bool())? p_i_10_fu_56194_p3.read(): tmp_240_reg_66889.read());
}

void Sobel_phase_strm::thread_output_V_pixel_11_status() {
    output_V_pixel_11_status = (output_V_pixel_0_full_n.read() & output_V_pixel_1_full_n.read() & output_V_pixel_2_full_n.read() & output_V_pixel_3_full_n.read() & output_V_pixel_4_full_n.read() & output_V_pixel_5_full_n.read() & output_V_pixel_6_full_n.read() & output_V_pixel_7_full_n.read() & output_V_pixel_8_full_n.read() & output_V_pixel_9_full_n.read() & output_V_pixel_10_full_n.read() & output_V_pixel_11_full_n.read() & output_V_pixel_12_full_n.read() & output_V_pixel_13_full_n.read() & output_V_pixel_14_full_n.read() & output_V_pixel_15_full_n.read() & output_V_pixel_16_full_n.read() & output_V_pixel_17_full_n.read() & output_V_pixel_18_full_n.read() & output_V_pixel_19_full_n.read() & output_V_pixel_20_full_n.read() & output_V_pixel_21_full_n.read() & output_V_pixel_22_full_n.read() & output_V_pixel_23_full_n.read() & output_V_pixel_24_full_n.read() & output_V_pixel_25_full_n.read() & output_V_pixel_26_full_n.read() & output_V_pixel_27_full_n.read() & output_V_pixel_28_full_n.read() & output_V_pixel_29_full_n.read() & output_V_pixel_30_full_n.read() & output_V_pixel_31_full_n.read() & output_V_pixel_32_full_n.read() & output_V_pixel_33_full_n.read() & output_V_pixel_34_full_n.read() & output_V_pixel_35_full_n.read() & output_V_pixel_36_full_n.read() & output_V_pixel_37_full_n.read() & output_V_pixel_38_full_n.read() & output_V_pixel_39_full_n.read() & output_V_pixel_40_full_n.read() & output_V_pixel_41_full_n.read() & output_V_pixel_42_full_n.read() & output_V_pixel_43_full_n.read() & output_V_pixel_44_full_n.read() & output_V_pixel_45_full_n.read() & output_V_pixel_46_full_n.read() & output_V_pixel_47_full_n.read() & output_V_pixel_48_full_n.read() & output_V_pixel_49_full_n.read() & output_V_pixel_50_full_n.read() & output_V_pixel_51_full_n.read() & output_V_pixel_52_full_n.read() & output_V_pixel_53_full_n.read() & output_V_pixel_54_full_n.read() & output_V_pixel_55_full_n.read() & output_V_pixel_56_full_n.read() & output_V_pixel_57_full_n.read() & output_V_pixel_58_full_n.read() & output_V_pixel_59_full_n.read() & output_V_pixel_60_full_n.read() & output_V_pixel_61_full_n.read() & output_V_pixel_62_full_n.read() & output_V_pixel_63_full_n.read() & output_V_pixel_64_full_n.read() & output_V_pixel_65_full_n.read() & output_V_pixel_66_full_n.read() & output_V_pixel_67_full_n.read() & output_V_pixel_68_full_n.read() & output_V_pixel_69_full_n.read() & output_V_pixel_70_full_n.read());
}

void Sobel_phase_strm::thread_output_V_pixel_11_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_1132.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
  ap_sig_1137.read())))) {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_12_blk_n = output_V_pixel_12_full_n.read();
    } else {
        output_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_12_din() {
    output_V_pixel_12_din = (!tmp_261_fu_56208_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_261_fu_56208_p3.read()[0].to_bool())? p_i_11_fu_56220_p3.read(): tmp_260_reg_66906.read());
}

void Sobel_phase_strm::thread_output_V_pixel_12_write() {
    output_V_pixel_12_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_13_blk_n = output_V_pixel_13_full_n.read();
    } else {
        output_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_13_din() {
    output_V_pixel_13_din = (!tmp_281_fu_56234_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_281_fu_56234_p3.read()[0].to_bool())? p_i_12_fu_56246_p3.read(): tmp_280_reg_66923.read());
}

void Sobel_phase_strm::thread_output_V_pixel_13_write() {
    output_V_pixel_13_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_14_blk_n = output_V_pixel_14_full_n.read();
    } else {
        output_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_14_din() {
    output_V_pixel_14_din = (!tmp_301_fu_56260_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_301_fu_56260_p3.read()[0].to_bool())? p_i_13_fu_56272_p3.read(): tmp_300_reg_66940.read());
}

void Sobel_phase_strm::thread_output_V_pixel_14_write() {
    output_V_pixel_14_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_15_blk_n = output_V_pixel_15_full_n.read();
    } else {
        output_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_15_din() {
    output_V_pixel_15_din = (!tmp_321_fu_56286_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_321_fu_56286_p3.read()[0].to_bool())? p_i_14_fu_56298_p3.read(): tmp_320_reg_66957.read());
}

void Sobel_phase_strm::thread_output_V_pixel_15_write() {
    output_V_pixel_15_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_16_blk_n = output_V_pixel_16_full_n.read();
    } else {
        output_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_16_din() {
    output_V_pixel_16_din = (!tmp_341_fu_56312_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_341_fu_56312_p3.read()[0].to_bool())? p_i_15_fu_56324_p3.read(): tmp_340_reg_66974.read());
}

void Sobel_phase_strm::thread_output_V_pixel_16_write() {
    output_V_pixel_16_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_17_blk_n = output_V_pixel_17_full_n.read();
    } else {
        output_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_17_din() {
    output_V_pixel_17_din = (!tmp_361_fu_56338_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_361_fu_56338_p3.read()[0].to_bool())? p_i_16_fu_56350_p3.read(): tmp_360_reg_66991.read());
}

void Sobel_phase_strm::thread_output_V_pixel_17_write() {
    output_V_pixel_17_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_18_blk_n = output_V_pixel_18_full_n.read();
    } else {
        output_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_18_din() {
    output_V_pixel_18_din = (!tmp_381_fu_56364_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_381_fu_56364_p3.read()[0].to_bool())? p_i_17_fu_56376_p3.read(): tmp_380_reg_67008.read());
}

void Sobel_phase_strm::thread_output_V_pixel_18_write() {
    output_V_pixel_18_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_19_blk_n = output_V_pixel_19_full_n.read();
    } else {
        output_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_19_din() {
    output_V_pixel_19_din = (!tmp_401_fu_56390_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_401_fu_56390_p3.read()[0].to_bool())? p_i_18_fu_56402_p3.read(): tmp_400_reg_67025.read());
}

void Sobel_phase_strm::thread_output_V_pixel_19_write() {
    output_V_pixel_19_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_1_blk_n = output_V_pixel_1_full_n.read();
    } else {
        output_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_1_din() {
    output_V_pixel_1_din = (!tmp_41_fu_55922_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_41_fu_55922_p3.read()[0].to_bool())? p_i_1_fu_55934_p3.read(): tmp_40_reg_66719.read());
}

void Sobel_phase_strm::thread_output_V_pixel_1_write() {
    output_V_pixel_1_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_20_blk_n = output_V_pixel_20_full_n.read();
    } else {
        output_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_20_din() {
    output_V_pixel_20_din = (!tmp_421_fu_56416_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_421_fu_56416_p3.read()[0].to_bool())? p_i_19_fu_56428_p3.read(): tmp_420_reg_67042.read());
}

void Sobel_phase_strm::thread_output_V_pixel_20_write() {
    output_V_pixel_20_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_21_blk_n = output_V_pixel_21_full_n.read();
    } else {
        output_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_21_din() {
    output_V_pixel_21_din = (!tmp_441_fu_56442_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_441_fu_56442_p3.read()[0].to_bool())? p_i_20_fu_56454_p3.read(): tmp_440_reg_67059.read());
}

void Sobel_phase_strm::thread_output_V_pixel_21_write() {
    output_V_pixel_21_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_22_blk_n = output_V_pixel_22_full_n.read();
    } else {
        output_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_22_din() {
    output_V_pixel_22_din = (!tmp_461_fu_56468_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_461_fu_56468_p3.read()[0].to_bool())? p_i_21_fu_56480_p3.read(): tmp_460_reg_67076.read());
}

void Sobel_phase_strm::thread_output_V_pixel_22_write() {
    output_V_pixel_22_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_23_blk_n = output_V_pixel_23_full_n.read();
    } else {
        output_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_23_din() {
    output_V_pixel_23_din = (!tmp_481_fu_56494_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_481_fu_56494_p3.read()[0].to_bool())? p_i_22_fu_56506_p3.read(): tmp_480_reg_67093.read());
}

void Sobel_phase_strm::thread_output_V_pixel_23_write() {
    output_V_pixel_23_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_24_blk_n = output_V_pixel_24_full_n.read();
    } else {
        output_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_24_din() {
    output_V_pixel_24_din = (!tmp_501_fu_56520_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_501_fu_56520_p3.read()[0].to_bool())? p_i_23_fu_56532_p3.read(): tmp_500_reg_67110.read());
}

void Sobel_phase_strm::thread_output_V_pixel_24_write() {
    output_V_pixel_24_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_25_blk_n = output_V_pixel_25_full_n.read();
    } else {
        output_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_25_din() {
    output_V_pixel_25_din = (!tmp_521_fu_56546_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_521_fu_56546_p3.read()[0].to_bool())? p_i_24_fu_56558_p3.read(): tmp_520_reg_67127.read());
}

void Sobel_phase_strm::thread_output_V_pixel_25_write() {
    output_V_pixel_25_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_26_blk_n = output_V_pixel_26_full_n.read();
    } else {
        output_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_26_din() {
    output_V_pixel_26_din = (!tmp_541_fu_56572_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_541_fu_56572_p3.read()[0].to_bool())? p_i_25_fu_56584_p3.read(): tmp_540_reg_67144.read());
}

void Sobel_phase_strm::thread_output_V_pixel_26_write() {
    output_V_pixel_26_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_27_blk_n = output_V_pixel_27_full_n.read();
    } else {
        output_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_27_din() {
    output_V_pixel_27_din = (!tmp_561_fu_56598_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_561_fu_56598_p3.read()[0].to_bool())? p_i_26_fu_56610_p3.read(): tmp_560_reg_67161.read());
}

void Sobel_phase_strm::thread_output_V_pixel_27_write() {
    output_V_pixel_27_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_28_blk_n = output_V_pixel_28_full_n.read();
    } else {
        output_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_28_din() {
    output_V_pixel_28_din = (!tmp_581_fu_56624_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_581_fu_56624_p3.read()[0].to_bool())? p_i_27_fu_56636_p3.read(): tmp_580_reg_67178.read());
}

void Sobel_phase_strm::thread_output_V_pixel_28_write() {
    output_V_pixel_28_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_29_blk_n = output_V_pixel_29_full_n.read();
    } else {
        output_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_29_din() {
    output_V_pixel_29_din = (!tmp_601_fu_56650_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_601_fu_56650_p3.read()[0].to_bool())? p_i_28_fu_56662_p3.read(): tmp_600_reg_67195.read());
}

void Sobel_phase_strm::thread_output_V_pixel_29_write() {
    output_V_pixel_29_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_2_blk_n = output_V_pixel_2_full_n.read();
    } else {
        output_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_2_din() {
    output_V_pixel_2_din = (!tmp_61_fu_55948_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_61_fu_55948_p3.read()[0].to_bool())? p_i_2_fu_55960_p3.read(): tmp_60_reg_66736.read());
}

void Sobel_phase_strm::thread_output_V_pixel_2_write() {
    output_V_pixel_2_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_30_blk_n = output_V_pixel_30_full_n.read();
    } else {
        output_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_30_din() {
    output_V_pixel_30_din = (!tmp_621_fu_56676_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_621_fu_56676_p3.read()[0].to_bool())? p_i_29_fu_56688_p3.read(): tmp_620_reg_67212.read());
}

void Sobel_phase_strm::thread_output_V_pixel_30_write() {
    output_V_pixel_30_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_31_blk_n = output_V_pixel_31_full_n.read();
    } else {
        output_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_31_din() {
    output_V_pixel_31_din = (!tmp_641_fu_56702_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_641_fu_56702_p3.read()[0].to_bool())? p_i_30_fu_56714_p3.read(): tmp_640_reg_67229.read());
}

void Sobel_phase_strm::thread_output_V_pixel_31_write() {
    output_V_pixel_31_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_32_blk_n = output_V_pixel_32_full_n.read();
    } else {
        output_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_32_din() {
    output_V_pixel_32_din = (!tmp_661_fu_56728_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_661_fu_56728_p3.read()[0].to_bool())? p_i_31_fu_56740_p3.read(): tmp_660_reg_67246.read());
}

void Sobel_phase_strm::thread_output_V_pixel_32_write() {
    output_V_pixel_32_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_33_blk_n = output_V_pixel_33_full_n.read();
    } else {
        output_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_33_din() {
    output_V_pixel_33_din = (!tmp_681_fu_56754_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_681_fu_56754_p3.read()[0].to_bool())? p_i_32_fu_56766_p3.read(): tmp_680_reg_67263.read());
}

void Sobel_phase_strm::thread_output_V_pixel_33_write() {
    output_V_pixel_33_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_34_blk_n = output_V_pixel_34_full_n.read();
    } else {
        output_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_34_din() {
    output_V_pixel_34_din = (!tmp_701_fu_56780_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_701_fu_56780_p3.read()[0].to_bool())? p_i_33_fu_56792_p3.read(): tmp_700_reg_67280.read());
}

void Sobel_phase_strm::thread_output_V_pixel_34_write() {
    output_V_pixel_34_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_35_blk_n = output_V_pixel_35_full_n.read();
    } else {
        output_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_35_din() {
    output_V_pixel_35_din = (!tmp_721_fu_56806_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_721_fu_56806_p3.read()[0].to_bool())? p_i_34_fu_56818_p3.read(): tmp_720_reg_67297.read());
}

void Sobel_phase_strm::thread_output_V_pixel_35_write() {
    output_V_pixel_35_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_36_blk_n = output_V_pixel_36_full_n.read();
    } else {
        output_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_36_din() {
    output_V_pixel_36_din = (!tmp_741_fu_56832_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_741_fu_56832_p3.read()[0].to_bool())? p_i_35_fu_56844_p3.read(): tmp_740_reg_67314.read());
}

void Sobel_phase_strm::thread_output_V_pixel_36_write() {
    output_V_pixel_36_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_37_blk_n = output_V_pixel_37_full_n.read();
    } else {
        output_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_37_din() {
    output_V_pixel_37_din = (!tmp_761_fu_56858_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_761_fu_56858_p3.read()[0].to_bool())? p_i_36_fu_56870_p3.read(): tmp_760_reg_67331.read());
}

void Sobel_phase_strm::thread_output_V_pixel_37_write() {
    output_V_pixel_37_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_38_blk_n = output_V_pixel_38_full_n.read();
    } else {
        output_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_38_din() {
    output_V_pixel_38_din = (!tmp_781_fu_56884_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_781_fu_56884_p3.read()[0].to_bool())? p_i_37_fu_56896_p3.read(): tmp_780_reg_67348.read());
}

void Sobel_phase_strm::thread_output_V_pixel_38_write() {
    output_V_pixel_38_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_39_blk_n = output_V_pixel_39_full_n.read();
    } else {
        output_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_39_din() {
    output_V_pixel_39_din = (!tmp_801_fu_56910_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_801_fu_56910_p3.read()[0].to_bool())? p_i_38_fu_56922_p3.read(): tmp_800_reg_67365.read());
}

void Sobel_phase_strm::thread_output_V_pixel_39_write() {
    output_V_pixel_39_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_3_blk_n = output_V_pixel_3_full_n.read();
    } else {
        output_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_3_din() {
    output_V_pixel_3_din = (!tmp_81_fu_55974_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_81_fu_55974_p3.read()[0].to_bool())? p_i_3_fu_55986_p3.read(): tmp_80_reg_66753.read());
}

void Sobel_phase_strm::thread_output_V_pixel_3_write() {
    output_V_pixel_3_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_40_blk_n = output_V_pixel_40_full_n.read();
    } else {
        output_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_40_din() {
    output_V_pixel_40_din = (!tmp_821_fu_56936_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_821_fu_56936_p3.read()[0].to_bool())? p_i_39_fu_56948_p3.read(): tmp_820_reg_67382.read());
}

void Sobel_phase_strm::thread_output_V_pixel_40_write() {
    output_V_pixel_40_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_41_blk_n = output_V_pixel_41_full_n.read();
    } else {
        output_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_41_din() {
    output_V_pixel_41_din = (!tmp_841_fu_56962_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_841_fu_56962_p3.read()[0].to_bool())? p_i_40_fu_56974_p3.read(): tmp_840_reg_67399.read());
}

void Sobel_phase_strm::thread_output_V_pixel_41_write() {
    output_V_pixel_41_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_42_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_42_blk_n = output_V_pixel_42_full_n.read();
    } else {
        output_V_pixel_42_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_42_din() {
    output_V_pixel_42_din = (!tmp_861_fu_56988_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_861_fu_56988_p3.read()[0].to_bool())? p_i_41_fu_57000_p3.read(): tmp_860_reg_67416.read());
}

void Sobel_phase_strm::thread_output_V_pixel_42_write() {
    output_V_pixel_42_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_43_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_43_blk_n = output_V_pixel_43_full_n.read();
    } else {
        output_V_pixel_43_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_43_din() {
    output_V_pixel_43_din = (!tmp_881_fu_57014_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_881_fu_57014_p3.read()[0].to_bool())? p_i_42_fu_57026_p3.read(): tmp_880_reg_67433.read());
}

void Sobel_phase_strm::thread_output_V_pixel_43_write() {
    output_V_pixel_43_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_44_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_44_blk_n = output_V_pixel_44_full_n.read();
    } else {
        output_V_pixel_44_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_44_din() {
    output_V_pixel_44_din = (!tmp_901_fu_57040_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_901_fu_57040_p3.read()[0].to_bool())? p_i_43_fu_57052_p3.read(): tmp_900_reg_67450.read());
}

void Sobel_phase_strm::thread_output_V_pixel_44_write() {
    output_V_pixel_44_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_45_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_45_blk_n = output_V_pixel_45_full_n.read();
    } else {
        output_V_pixel_45_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_45_din() {
    output_V_pixel_45_din = (!tmp_921_fu_57066_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_921_fu_57066_p3.read()[0].to_bool())? p_i_44_fu_57078_p3.read(): tmp_920_reg_67467.read());
}

void Sobel_phase_strm::thread_output_V_pixel_45_write() {
    output_V_pixel_45_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_46_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_46_blk_n = output_V_pixel_46_full_n.read();
    } else {
        output_V_pixel_46_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_46_din() {
    output_V_pixel_46_din = (!tmp_941_fu_57092_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_941_fu_57092_p3.read()[0].to_bool())? p_i_45_fu_57104_p3.read(): tmp_940_reg_67484.read());
}

void Sobel_phase_strm::thread_output_V_pixel_46_write() {
    output_V_pixel_46_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_47_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_47_blk_n = output_V_pixel_47_full_n.read();
    } else {
        output_V_pixel_47_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_47_din() {
    output_V_pixel_47_din = (!tmp_961_fu_57118_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_961_fu_57118_p3.read()[0].to_bool())? p_i_46_fu_57130_p3.read(): tmp_960_reg_67501.read());
}

void Sobel_phase_strm::thread_output_V_pixel_47_write() {
    output_V_pixel_47_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_48_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_48_blk_n = output_V_pixel_48_full_n.read();
    } else {
        output_V_pixel_48_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_48_din() {
    output_V_pixel_48_din = (!tmp_981_fu_57144_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_981_fu_57144_p3.read()[0].to_bool())? p_i_47_fu_57156_p3.read(): tmp_980_reg_67518.read());
}

void Sobel_phase_strm::thread_output_V_pixel_48_write() {
    output_V_pixel_48_write = output_V_pixel_11_update.read();
}

}

