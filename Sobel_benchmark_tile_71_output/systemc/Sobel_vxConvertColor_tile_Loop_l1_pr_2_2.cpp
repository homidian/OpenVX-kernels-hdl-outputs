#include "Sobel_vxConvertColor_tile_Loop_l1_pr_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    !ap_sig_1963.read() && 
                    !esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        i_0_i_i_reg_3661 = i_fu_3678_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_1972.read())) {
        i_0_i_i_reg_3661 = ap_const_lv9_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_1972.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if ((!ap_sig_1963.read() && !esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else if ((esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && !ap_sig_1963.read())) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}

