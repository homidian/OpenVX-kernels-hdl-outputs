#include "Sobel_vxConvertColor_tile_Loop_l1_pr_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
          !ap_sig_1963.read() && 
          !esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !ap_sig_1963.read() && 
         !esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_1524() {
    ap_sig_1524 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_1963() {
    ap_sig_1963 = ((esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(src_V_pixel_0_r_TVALID.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(strm_in_V_pixel_8_b1_status.read(), ap_const_logic_0)));
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_1972() {
    ap_sig_1972 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_20() {
    ap_sig_20 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_20.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_1524.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_exitcond4_i_i_fu_3672_p2() {
    exitcond4_i_i_fu_3672_p2 = (!i_0_i_i_reg_3661.read().is_01() || !ap_const_lv9_1E0.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_reg_3661.read() == ap_const_lv9_1E0);
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_i_fu_3678_p2() {
    i_fu_3678_p2 = (!i_0_i_i_reg_3661.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_i_reg_3661.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_0_b_TDATA_blk_n = src_V_pixel_0_b_TVALID.read();
    } else {
        src_V_pixel_0_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_0_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_0_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_0_g_TDATA_blk_n = src_V_pixel_0_g_TVALID.read();
    } else {
        src_V_pixel_0_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_0_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_0_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_0_r_TDATA_blk_n = src_V_pixel_0_r_TVALID.read();
    } else {
        src_V_pixel_0_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_0_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_0_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_0_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_10_b_TDATA_blk_n = src_V_pixel_10_b_TVALID.read();
    } else {
        src_V_pixel_10_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_10_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_10_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_10_g_TDATA_blk_n = src_V_pixel_10_g_TVALID.read();
    } else {
        src_V_pixel_10_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_10_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_10_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_10_r_TDATA_blk_n = src_V_pixel_10_r_TVALID.read();
    } else {
        src_V_pixel_10_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_10_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_10_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_10_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_11_b_TDATA_blk_n = src_V_pixel_11_b_TVALID.read();
    } else {
        src_V_pixel_11_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_11_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_11_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_11_g_TDATA_blk_n = src_V_pixel_11_g_TVALID.read();
    } else {
        src_V_pixel_11_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_11_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_11_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_11_r_TDATA_blk_n = src_V_pixel_11_r_TVALID.read();
    } else {
        src_V_pixel_11_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_11_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_11_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_11_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_12_b_TDATA_blk_n = src_V_pixel_12_b_TVALID.read();
    } else {
        src_V_pixel_12_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_12_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_12_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_12_g_TDATA_blk_n = src_V_pixel_12_g_TVALID.read();
    } else {
        src_V_pixel_12_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_12_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_12_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_12_r_TDATA_blk_n = src_V_pixel_12_r_TVALID.read();
    } else {
        src_V_pixel_12_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_12_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_12_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_12_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_13_b_TDATA_blk_n = src_V_pixel_13_b_TVALID.read();
    } else {
        src_V_pixel_13_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_13_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_13_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_13_g_TDATA_blk_n = src_V_pixel_13_g_TVALID.read();
    } else {
        src_V_pixel_13_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_13_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_13_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_13_r_TDATA_blk_n = src_V_pixel_13_r_TVALID.read();
    } else {
        src_V_pixel_13_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_13_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_13_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_13_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_14_b_TDATA_blk_n = src_V_pixel_14_b_TVALID.read();
    } else {
        src_V_pixel_14_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_14_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_14_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_14_g_TDATA_blk_n = src_V_pixel_14_g_TVALID.read();
    } else {
        src_V_pixel_14_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_14_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_14_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_14_r_TDATA_blk_n = src_V_pixel_14_r_TVALID.read();
    } else {
        src_V_pixel_14_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_14_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_14_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_14_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_15_b_TDATA_blk_n = src_V_pixel_15_b_TVALID.read();
    } else {
        src_V_pixel_15_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_15_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_15_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_15_g_TDATA_blk_n = src_V_pixel_15_g_TVALID.read();
    } else {
        src_V_pixel_15_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_15_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_15_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_15_r_TDATA_blk_n = src_V_pixel_15_r_TVALID.read();
    } else {
        src_V_pixel_15_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_15_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_15_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_15_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_16_b_TDATA_blk_n = src_V_pixel_16_b_TVALID.read();
    } else {
        src_V_pixel_16_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_16_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_16_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_16_g_TDATA_blk_n = src_V_pixel_16_g_TVALID.read();
    } else {
        src_V_pixel_16_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_16_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_16_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_16_r_TDATA_blk_n = src_V_pixel_16_r_TVALID.read();
    } else {
        src_V_pixel_16_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_16_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_16_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_16_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_17_b_TDATA_blk_n = src_V_pixel_17_b_TVALID.read();
    } else {
        src_V_pixel_17_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_17_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_17_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_17_g_TDATA_blk_n = src_V_pixel_17_g_TVALID.read();
    } else {
        src_V_pixel_17_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_17_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_17_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_17_r_TDATA_blk_n = src_V_pixel_17_r_TVALID.read();
    } else {
        src_V_pixel_17_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_17_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_17_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_17_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_18_b_TDATA_blk_n = src_V_pixel_18_b_TVALID.read();
    } else {
        src_V_pixel_18_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_18_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_18_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_18_g_TDATA_blk_n = src_V_pixel_18_g_TVALID.read();
    } else {
        src_V_pixel_18_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_18_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_18_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_18_r_TDATA_blk_n = src_V_pixel_18_r_TVALID.read();
    } else {
        src_V_pixel_18_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_18_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_18_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_18_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_19_b_TDATA_blk_n = src_V_pixel_19_b_TVALID.read();
    } else {
        src_V_pixel_19_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_19_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_19_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_19_g_TDATA_blk_n = src_V_pixel_19_g_TVALID.read();
    } else {
        src_V_pixel_19_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_19_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_19_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_19_r_TDATA_blk_n = src_V_pixel_19_r_TVALID.read();
    } else {
        src_V_pixel_19_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_19_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_19_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_19_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_1_b_TDATA_blk_n = src_V_pixel_1_b_TVALID.read();
    } else {
        src_V_pixel_1_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_1_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_1_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_1_g_TDATA_blk_n = src_V_pixel_1_g_TVALID.read();
    } else {
        src_V_pixel_1_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_1_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_1_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_1_r_TDATA_blk_n = src_V_pixel_1_r_TVALID.read();
    } else {
        src_V_pixel_1_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_1_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_1_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_1_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_20_b_TDATA_blk_n = src_V_pixel_20_b_TVALID.read();
    } else {
        src_V_pixel_20_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_20_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_20_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_20_g_TDATA_blk_n = src_V_pixel_20_g_TVALID.read();
    } else {
        src_V_pixel_20_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_20_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_20_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_20_r_TDATA_blk_n = src_V_pixel_20_r_TVALID.read();
    } else {
        src_V_pixel_20_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_20_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_20_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_20_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_21_b_TDATA_blk_n = src_V_pixel_21_b_TVALID.read();
    } else {
        src_V_pixel_21_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_21_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_21_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_21_g_TDATA_blk_n = src_V_pixel_21_g_TVALID.read();
    } else {
        src_V_pixel_21_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_21_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_21_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_21_r_TDATA_blk_n = src_V_pixel_21_r_TVALID.read();
    } else {
        src_V_pixel_21_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_21_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_21_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_21_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_22_b_TDATA_blk_n = src_V_pixel_22_b_TVALID.read();
    } else {
        src_V_pixel_22_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_22_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_22_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_22_g_TDATA_blk_n = src_V_pixel_22_g_TVALID.read();
    } else {
        src_V_pixel_22_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_22_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_22_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_22_r_TDATA_blk_n = src_V_pixel_22_r_TVALID.read();
    } else {
        src_V_pixel_22_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_22_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_22_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_22_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_23_b_TDATA_blk_n = src_V_pixel_23_b_TVALID.read();
    } else {
        src_V_pixel_23_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_23_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_23_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_23_g_TDATA_blk_n = src_V_pixel_23_g_TVALID.read();
    } else {
        src_V_pixel_23_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_23_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_23_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_23_r_TDATA_blk_n = src_V_pixel_23_r_TVALID.read();
    } else {
        src_V_pixel_23_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_23_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_23_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_23_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_24_b_TDATA_blk_n = src_V_pixel_24_b_TVALID.read();
    } else {
        src_V_pixel_24_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_24_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_24_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_24_g_TDATA_blk_n = src_V_pixel_24_g_TVALID.read();
    } else {
        src_V_pixel_24_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_24_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_24_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_24_r_TDATA_blk_n = src_V_pixel_24_r_TVALID.read();
    } else {
        src_V_pixel_24_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_24_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_24_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_24_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_25_b_TDATA_blk_n = src_V_pixel_25_b_TVALID.read();
    } else {
        src_V_pixel_25_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_25_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_25_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_25_g_TDATA_blk_n = src_V_pixel_25_g_TVALID.read();
    } else {
        src_V_pixel_25_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_25_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_25_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_25_r_TDATA_blk_n = src_V_pixel_25_r_TVALID.read();
    } else {
        src_V_pixel_25_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_25_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_25_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_25_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_26_b_TDATA_blk_n = src_V_pixel_26_b_TVALID.read();
    } else {
        src_V_pixel_26_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_26_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_26_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_26_g_TDATA_blk_n = src_V_pixel_26_g_TVALID.read();
    } else {
        src_V_pixel_26_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_26_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_26_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_26_r_TDATA_blk_n = src_V_pixel_26_r_TVALID.read();
    } else {
        src_V_pixel_26_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_26_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_26_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_26_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_27_b_TDATA_blk_n = src_V_pixel_27_b_TVALID.read();
    } else {
        src_V_pixel_27_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_27_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_27_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_27_g_TDATA_blk_n = src_V_pixel_27_g_TVALID.read();
    } else {
        src_V_pixel_27_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_27_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_27_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_27_r_TDATA_blk_n = src_V_pixel_27_r_TVALID.read();
    } else {
        src_V_pixel_27_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_27_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_27_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_27_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_28_b_TDATA_blk_n = src_V_pixel_28_b_TVALID.read();
    } else {
        src_V_pixel_28_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_28_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_28_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_28_g_TDATA_blk_n = src_V_pixel_28_g_TVALID.read();
    } else {
        src_V_pixel_28_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_28_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_28_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_28_r_TDATA_blk_n = src_V_pixel_28_r_TVALID.read();
    } else {
        src_V_pixel_28_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_28_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_28_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_28_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_29_b_TDATA_blk_n = src_V_pixel_29_b_TVALID.read();
    } else {
        src_V_pixel_29_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_29_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_29_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_29_g_TDATA_blk_n = src_V_pixel_29_g_TVALID.read();
    } else {
        src_V_pixel_29_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_29_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_29_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_29_r_TDATA_blk_n = src_V_pixel_29_r_TVALID.read();
    } else {
        src_V_pixel_29_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_29_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_29_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_29_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_2_b_TDATA_blk_n = src_V_pixel_2_b_TVALID.read();
    } else {
        src_V_pixel_2_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_2_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_2_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_2_g_TDATA_blk_n = src_V_pixel_2_g_TVALID.read();
    } else {
        src_V_pixel_2_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_2_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_2_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_2_r_TDATA_blk_n = src_V_pixel_2_r_TVALID.read();
    } else {
        src_V_pixel_2_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_2_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_2_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_2_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_30_b_TDATA_blk_n = src_V_pixel_30_b_TVALID.read();
    } else {
        src_V_pixel_30_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_30_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_30_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_30_g_TDATA_blk_n = src_V_pixel_30_g_TVALID.read();
    } else {
        src_V_pixel_30_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_30_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_30_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_30_r_TDATA_blk_n = src_V_pixel_30_r_TVALID.read();
    } else {
        src_V_pixel_30_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_30_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_30_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_30_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_31_b_TDATA_blk_n = src_V_pixel_31_b_TVALID.read();
    } else {
        src_V_pixel_31_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_31_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_31_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_31_g_TDATA_blk_n = src_V_pixel_31_g_TVALID.read();
    } else {
        src_V_pixel_31_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_31_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_31_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_31_r_TDATA_blk_n = src_V_pixel_31_r_TVALID.read();
    } else {
        src_V_pixel_31_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_31_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_31_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_31_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_32_b_TDATA_blk_n = src_V_pixel_32_b_TVALID.read();
    } else {
        src_V_pixel_32_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_32_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_32_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_32_g_TDATA_blk_n = src_V_pixel_32_g_TVALID.read();
    } else {
        src_V_pixel_32_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_32_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_32_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_32_r_TDATA_blk_n = src_V_pixel_32_r_TVALID.read();
    } else {
        src_V_pixel_32_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_32_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_32_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_32_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_33_b_TDATA_blk_n = src_V_pixel_33_b_TVALID.read();
    } else {
        src_V_pixel_33_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_33_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_33_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_33_g_TDATA_blk_n = src_V_pixel_33_g_TVALID.read();
    } else {
        src_V_pixel_33_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_33_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_33_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_33_r_TDATA_blk_n = src_V_pixel_33_r_TVALID.read();
    } else {
        src_V_pixel_33_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_33_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_33_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_33_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_34_b_TDATA_blk_n = src_V_pixel_34_b_TVALID.read();
    } else {
        src_V_pixel_34_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_34_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_34_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_34_g_TDATA_blk_n = src_V_pixel_34_g_TVALID.read();
    } else {
        src_V_pixel_34_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_34_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_34_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_34_r_TDATA_blk_n = src_V_pixel_34_r_TVALID.read();
    } else {
        src_V_pixel_34_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_34_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_34_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_34_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_35_b_TDATA_blk_n = src_V_pixel_35_b_TVALID.read();
    } else {
        src_V_pixel_35_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_35_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_35_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_35_g_TDATA_blk_n = src_V_pixel_35_g_TVALID.read();
    } else {
        src_V_pixel_35_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_35_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_35_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_35_r_TDATA_blk_n = src_V_pixel_35_r_TVALID.read();
    } else {
        src_V_pixel_35_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_35_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_35_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_35_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_36_b_TDATA_blk_n = src_V_pixel_36_b_TVALID.read();
    } else {
        src_V_pixel_36_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_36_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_36_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_36_g_TDATA_blk_n = src_V_pixel_36_g_TVALID.read();
    } else {
        src_V_pixel_36_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_36_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_36_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_36_r_TDATA_blk_n = src_V_pixel_36_r_TVALID.read();
    } else {
        src_V_pixel_36_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_36_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_36_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_36_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_37_b_TDATA_blk_n = src_V_pixel_37_b_TVALID.read();
    } else {
        src_V_pixel_37_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_37_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_37_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_37_g_TDATA_blk_n = src_V_pixel_37_g_TVALID.read();
    } else {
        src_V_pixel_37_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_37_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_37_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_37_r_TDATA_blk_n = src_V_pixel_37_r_TVALID.read();
    } else {
        src_V_pixel_37_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_37_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_37_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_37_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_38_b_TDATA_blk_n = src_V_pixel_38_b_TVALID.read();
    } else {
        src_V_pixel_38_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_38_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_38_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_38_g_TDATA_blk_n = src_V_pixel_38_g_TVALID.read();
    } else {
        src_V_pixel_38_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_38_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_38_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_38_r_TDATA_blk_n = src_V_pixel_38_r_TVALID.read();
    } else {
        src_V_pixel_38_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_38_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_38_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_38_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_39_b_TDATA_blk_n = src_V_pixel_39_b_TVALID.read();
    } else {
        src_V_pixel_39_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_39_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_39_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_39_g_TDATA_blk_n = src_V_pixel_39_g_TVALID.read();
    } else {
        src_V_pixel_39_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_39_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_39_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_39_r_TDATA_blk_n = src_V_pixel_39_r_TVALID.read();
    } else {
        src_V_pixel_39_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_39_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_39_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_39_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_3_b_TDATA_blk_n = src_V_pixel_3_b_TVALID.read();
    } else {
        src_V_pixel_3_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_3_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_3_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_3_g_TDATA_blk_n = src_V_pixel_3_g_TVALID.read();
    } else {
        src_V_pixel_3_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_3_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_3_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_3_r_TDATA_blk_n = src_V_pixel_3_r_TVALID.read();
    } else {
        src_V_pixel_3_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_3_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_3_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_3_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_40_b_TDATA_blk_n = src_V_pixel_40_b_TVALID.read();
    } else {
        src_V_pixel_40_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_40_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_40_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_40_g_TDATA_blk_n = src_V_pixel_40_g_TVALID.read();
    } else {
        src_V_pixel_40_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_40_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_40_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_40_r_TDATA_blk_n = src_V_pixel_40_r_TVALID.read();
    } else {
        src_V_pixel_40_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_40_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_40_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_40_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_41_b_TDATA_blk_n = src_V_pixel_41_b_TVALID.read();
    } else {
        src_V_pixel_41_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_41_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_41_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_41_g_TDATA_blk_n = src_V_pixel_41_g_TVALID.read();
    } else {
        src_V_pixel_41_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_41_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_41_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_41_r_TDATA_blk_n = src_V_pixel_41_r_TVALID.read();
    } else {
        src_V_pixel_41_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_41_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_41_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_41_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_42_b_TDATA_blk_n = src_V_pixel_42_b_TVALID.read();
    } else {
        src_V_pixel_42_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_42_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_42_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_42_g_TDATA_blk_n = src_V_pixel_42_g_TVALID.read();
    } else {
        src_V_pixel_42_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_42_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_42_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_42_r_TDATA_blk_n = src_V_pixel_42_r_TVALID.read();
    } else {
        src_V_pixel_42_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_42_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_42_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_42_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_43_b_TDATA_blk_n = src_V_pixel_43_b_TVALID.read();
    } else {
        src_V_pixel_43_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_43_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_43_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_43_g_TDATA_blk_n = src_V_pixel_43_g_TVALID.read();
    } else {
        src_V_pixel_43_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_43_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_43_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_43_r_TDATA_blk_n = src_V_pixel_43_r_TVALID.read();
    } else {
        src_V_pixel_43_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_43_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_43_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_43_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_44_b_TDATA_blk_n = src_V_pixel_44_b_TVALID.read();
    } else {
        src_V_pixel_44_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_44_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_44_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_44_g_TDATA_blk_n = src_V_pixel_44_g_TVALID.read();
    } else {
        src_V_pixel_44_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_44_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_44_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_44_r_TDATA_blk_n = src_V_pixel_44_r_TVALID.read();
    } else {
        src_V_pixel_44_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_44_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_44_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_44_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_45_b_TDATA_blk_n = src_V_pixel_45_b_TVALID.read();
    } else {
        src_V_pixel_45_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_45_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_45_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_45_g_TDATA_blk_n = src_V_pixel_45_g_TVALID.read();
    } else {
        src_V_pixel_45_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_45_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_45_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_45_r_TDATA_blk_n = src_V_pixel_45_r_TVALID.read();
    } else {
        src_V_pixel_45_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_45_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_45_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_45_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_46_b_TDATA_blk_n = src_V_pixel_46_b_TVALID.read();
    } else {
        src_V_pixel_46_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_46_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_46_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_46_g_TDATA_blk_n = src_V_pixel_46_g_TVALID.read();
    } else {
        src_V_pixel_46_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_46_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_46_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_46_r_TDATA_blk_n = src_V_pixel_46_r_TVALID.read();
    } else {
        src_V_pixel_46_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_46_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_46_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_46_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_47_b_TDATA_blk_n = src_V_pixel_47_b_TVALID.read();
    } else {
        src_V_pixel_47_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_47_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_47_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_47_g_TDATA_blk_n = src_V_pixel_47_g_TVALID.read();
    } else {
        src_V_pixel_47_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_47_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_47_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_47_r_TDATA_blk_n = src_V_pixel_47_r_TVALID.read();
    } else {
        src_V_pixel_47_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_47_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_47_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_47_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_48_b_TDATA_blk_n = src_V_pixel_48_b_TVALID.read();
    } else {
        src_V_pixel_48_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_48_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_48_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_48_g_TDATA_blk_n = src_V_pixel_48_g_TVALID.read();
    } else {
        src_V_pixel_48_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_48_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_48_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_48_r_TDATA_blk_n = src_V_pixel_48_r_TVALID.read();
    } else {
        src_V_pixel_48_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_48_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_48_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_48_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_49_b_TDATA_blk_n = src_V_pixel_49_b_TVALID.read();
    } else {
        src_V_pixel_49_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_49_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_49_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_49_g_TDATA_blk_n = src_V_pixel_49_g_TVALID.read();
    } else {
        src_V_pixel_49_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_49_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_49_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_49_r_TDATA_blk_n = src_V_pixel_49_r_TVALID.read();
    } else {
        src_V_pixel_49_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_49_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_49_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_49_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_4_b_TDATA_blk_n = src_V_pixel_4_b_TVALID.read();
    } else {
        src_V_pixel_4_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_4_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_4_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_4_g_TDATA_blk_n = src_V_pixel_4_g_TVALID.read();
    } else {
        src_V_pixel_4_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_4_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_4_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_4_r_TDATA_blk_n = src_V_pixel_4_r_TVALID.read();
    } else {
        src_V_pixel_4_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_4_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_4_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_4_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_50_b_TDATA_blk_n = src_V_pixel_50_b_TVALID.read();
    } else {
        src_V_pixel_50_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_50_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_50_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_50_g_TDATA_blk_n = src_V_pixel_50_g_TVALID.read();
    } else {
        src_V_pixel_50_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_50_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_50_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_50_r_TDATA_blk_n = src_V_pixel_50_r_TVALID.read();
    } else {
        src_V_pixel_50_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_50_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_50_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_50_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_51_b_TDATA_blk_n = src_V_pixel_51_b_TVALID.read();
    } else {
        src_V_pixel_51_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_51_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_51_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_51_g_TDATA_blk_n = src_V_pixel_51_g_TVALID.read();
    } else {
        src_V_pixel_51_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_51_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_51_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_51_r_TDATA_blk_n = src_V_pixel_51_r_TVALID.read();
    } else {
        src_V_pixel_51_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_51_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_51_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_51_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_52_b_TDATA_blk_n = src_V_pixel_52_b_TVALID.read();
    } else {
        src_V_pixel_52_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_52_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_52_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_52_g_TDATA_blk_n = src_V_pixel_52_g_TVALID.read();
    } else {
        src_V_pixel_52_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_52_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_52_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_52_r_TDATA_blk_n = src_V_pixel_52_r_TVALID.read();
    } else {
        src_V_pixel_52_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_52_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_52_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_52_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_53_b_TDATA_blk_n = src_V_pixel_53_b_TVALID.read();
    } else {
        src_V_pixel_53_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_53_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_53_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_53_g_TDATA_blk_n = src_V_pixel_53_g_TVALID.read();
    } else {
        src_V_pixel_53_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_53_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_53_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_53_r_TDATA_blk_n = src_V_pixel_53_r_TVALID.read();
    } else {
        src_V_pixel_53_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_53_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_53_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_53_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_54_b_TDATA_blk_n = src_V_pixel_54_b_TVALID.read();
    } else {
        src_V_pixel_54_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_54_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_54_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_54_g_TDATA_blk_n = src_V_pixel_54_g_TVALID.read();
    } else {
        src_V_pixel_54_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_54_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_54_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_54_r_TDATA_blk_n = src_V_pixel_54_r_TVALID.read();
    } else {
        src_V_pixel_54_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_54_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_54_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_54_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_55_b_TDATA_blk_n = src_V_pixel_55_b_TVALID.read();
    } else {
        src_V_pixel_55_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_55_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_55_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_55_g_TDATA_blk_n = src_V_pixel_55_g_TVALID.read();
    } else {
        src_V_pixel_55_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_55_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_55_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_55_r_TDATA_blk_n = src_V_pixel_55_r_TVALID.read();
    } else {
        src_V_pixel_55_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_55_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_55_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_55_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_56_b_TDATA_blk_n = src_V_pixel_56_b_TVALID.read();
    } else {
        src_V_pixel_56_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_56_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_56_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_56_g_TDATA_blk_n = src_V_pixel_56_g_TVALID.read();
    } else {
        src_V_pixel_56_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_56_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_56_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_56_r_TDATA_blk_n = src_V_pixel_56_r_TVALID.read();
    } else {
        src_V_pixel_56_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_56_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_56_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_56_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_57_b_TDATA_blk_n = src_V_pixel_57_b_TVALID.read();
    } else {
        src_V_pixel_57_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_57_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_57_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_57_g_TDATA_blk_n = src_V_pixel_57_g_TVALID.read();
    } else {
        src_V_pixel_57_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_57_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_57_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_57_r_TDATA_blk_n = src_V_pixel_57_r_TVALID.read();
    } else {
        src_V_pixel_57_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_57_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_57_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_57_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_58_b_TDATA_blk_n = src_V_pixel_58_b_TVALID.read();
    } else {
        src_V_pixel_58_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_58_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_58_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_58_g_TDATA_blk_n = src_V_pixel_58_g_TVALID.read();
    } else {
        src_V_pixel_58_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_58_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_58_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_58_r_TDATA_blk_n = src_V_pixel_58_r_TVALID.read();
    } else {
        src_V_pixel_58_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_58_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_58_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_58_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_59_b_TDATA_blk_n = src_V_pixel_59_b_TVALID.read();
    } else {
        src_V_pixel_59_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_59_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_59_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_59_g_TDATA_blk_n = src_V_pixel_59_g_TVALID.read();
    } else {
        src_V_pixel_59_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_59_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_59_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_59_r_TDATA_blk_n = src_V_pixel_59_r_TVALID.read();
    } else {
        src_V_pixel_59_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_59_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_59_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_59_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_5_b_TDATA_blk_n = src_V_pixel_5_b_TVALID.read();
    } else {
        src_V_pixel_5_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_5_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_5_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_5_g_TDATA_blk_n = src_V_pixel_5_g_TVALID.read();
    } else {
        src_V_pixel_5_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_5_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_5_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_5_r_TDATA_blk_n = src_V_pixel_5_r_TVALID.read();
    } else {
        src_V_pixel_5_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_5_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_5_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_5_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_60_b_TDATA_blk_n = src_V_pixel_60_b_TVALID.read();
    } else {
        src_V_pixel_60_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_60_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_60_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_60_g_TDATA_blk_n = src_V_pixel_60_g_TVALID.read();
    } else {
        src_V_pixel_60_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_60_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_60_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_60_r_TDATA_blk_n = src_V_pixel_60_r_TVALID.read();
    } else {
        src_V_pixel_60_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_60_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_60_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_60_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_61_b_TDATA_blk_n = src_V_pixel_61_b_TVALID.read();
    } else {
        src_V_pixel_61_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_61_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_61_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_61_g_TDATA_blk_n = src_V_pixel_61_g_TVALID.read();
    } else {
        src_V_pixel_61_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_61_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_61_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_61_r_TDATA_blk_n = src_V_pixel_61_r_TVALID.read();
    } else {
        src_V_pixel_61_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_61_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_61_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_61_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_62_b_TDATA_blk_n = src_V_pixel_62_b_TVALID.read();
    } else {
        src_V_pixel_62_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_62_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_62_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_62_g_TDATA_blk_n = src_V_pixel_62_g_TVALID.read();
    } else {
        src_V_pixel_62_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_62_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_62_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_62_r_TDATA_blk_n = src_V_pixel_62_r_TVALID.read();
    } else {
        src_V_pixel_62_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_62_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_62_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_62_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_63_b_TDATA_blk_n = src_V_pixel_63_b_TVALID.read();
    } else {
        src_V_pixel_63_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_63_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_63_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_63_g_TDATA_blk_n = src_V_pixel_63_g_TVALID.read();
    } else {
        src_V_pixel_63_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_63_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_63_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_63_r_TDATA_blk_n = src_V_pixel_63_r_TVALID.read();
    } else {
        src_V_pixel_63_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_63_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_63_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_63_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_64_b_TDATA_blk_n = src_V_pixel_64_b_TVALID.read();
    } else {
        src_V_pixel_64_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_64_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_64_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_64_g_TDATA_blk_n = src_V_pixel_64_g_TVALID.read();
    } else {
        src_V_pixel_64_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_64_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_64_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_64_r_TDATA_blk_n = src_V_pixel_64_r_TVALID.read();
    } else {
        src_V_pixel_64_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_64_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_64_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_64_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_65_b_TDATA_blk_n = src_V_pixel_65_b_TVALID.read();
    } else {
        src_V_pixel_65_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_65_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_65_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_65_g_TDATA_blk_n = src_V_pixel_65_g_TVALID.read();
    } else {
        src_V_pixel_65_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_65_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_65_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_65_r_TDATA_blk_n = src_V_pixel_65_r_TVALID.read();
    } else {
        src_V_pixel_65_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_65_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_65_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_65_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_66_b_TDATA_blk_n = src_V_pixel_66_b_TVALID.read();
    } else {
        src_V_pixel_66_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_66_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_66_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_66_g_TDATA_blk_n = src_V_pixel_66_g_TVALID.read();
    } else {
        src_V_pixel_66_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_66_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_66_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_66_r_TDATA_blk_n = src_V_pixel_66_r_TVALID.read();
    } else {
        src_V_pixel_66_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_66_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_66_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_66_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_67_b_TDATA_blk_n = src_V_pixel_67_b_TVALID.read();
    } else {
        src_V_pixel_67_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_67_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_67_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_67_g_TDATA_blk_n = src_V_pixel_67_g_TVALID.read();
    } else {
        src_V_pixel_67_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_67_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_67_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_67_r_TDATA_blk_n = src_V_pixel_67_r_TVALID.read();
    } else {
        src_V_pixel_67_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_67_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_67_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_67_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_68_b_TDATA_blk_n = src_V_pixel_68_b_TVALID.read();
    } else {
        src_V_pixel_68_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_68_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_68_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_68_g_TDATA_blk_n = src_V_pixel_68_g_TVALID.read();
    } else {
        src_V_pixel_68_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_68_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_68_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_68_r_TDATA_blk_n = src_V_pixel_68_r_TVALID.read();
    } else {
        src_V_pixel_68_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_68_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_68_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_68_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_69_b_TDATA_blk_n = src_V_pixel_69_b_TVALID.read();
    } else {
        src_V_pixel_69_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_69_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_69_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_69_g_TDATA_blk_n = src_V_pixel_69_g_TVALID.read();
    } else {
        src_V_pixel_69_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_69_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_69_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_69_r_TDATA_blk_n = src_V_pixel_69_r_TVALID.read();
    } else {
        src_V_pixel_69_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_69_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_69_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_69_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_6_b_TDATA_blk_n = src_V_pixel_6_b_TVALID.read();
    } else {
        src_V_pixel_6_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_6_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_6_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_6_g_TDATA_blk_n = src_V_pixel_6_g_TVALID.read();
    } else {
        src_V_pixel_6_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_6_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_6_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_6_r_TDATA_blk_n = src_V_pixel_6_r_TVALID.read();
    } else {
        src_V_pixel_6_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_6_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_6_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_6_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_70_b_TDATA_blk_n = src_V_pixel_70_b_TVALID.read();
    } else {
        src_V_pixel_70_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_70_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_70_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_70_g_TDATA_blk_n = src_V_pixel_70_g_TVALID.read();
    } else {
        src_V_pixel_70_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_70_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_70_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_70_r_TDATA_blk_n = src_V_pixel_70_r_TVALID.read();
    } else {
        src_V_pixel_70_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_70_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_70_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_70_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_7_b_TDATA_blk_n = src_V_pixel_7_b_TVALID.read();
    } else {
        src_V_pixel_7_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_7_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_7_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_7_g_TDATA_blk_n = src_V_pixel_7_g_TVALID.read();
    } else {
        src_V_pixel_7_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_7_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_7_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_7_r_TDATA_blk_n = src_V_pixel_7_r_TVALID.read();
    } else {
        src_V_pixel_7_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_7_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_7_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_7_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_8_b_TDATA_blk_n = src_V_pixel_8_b_TVALID.read();
    } else {
        src_V_pixel_8_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_8_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_8_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_8_g_TDATA_blk_n = src_V_pixel_8_g_TVALID.read();
    } else {
        src_V_pixel_8_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_8_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_8_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_8_r_TDATA_blk_n = src_V_pixel_8_r_TVALID.read();
    } else {
        src_V_pixel_8_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_8_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_8_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_8_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_b_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_9_b_TDATA_blk_n = src_V_pixel_9_b_TVALID.read();
    } else {
        src_V_pixel_9_b_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_b_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_9_b_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_9_b_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_g_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_9_g_TDATA_blk_n = src_V_pixel_9_g_TVALID.read();
    } else {
        src_V_pixel_9_g_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_g_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_9_g_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_9_g_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        src_V_pixel_9_r_TDATA_blk_n = src_V_pixel_9_r_TVALID.read();
    } else {
        src_V_pixel_9_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_src_V_pixel_9_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        src_V_pixel_9_r_TREADY = ap_const_logic_1;
    } else {
        src_V_pixel_9_r_TREADY = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_0_b_blk_n = strm_in_V_pixel_0_b_full_n.read();
    } else {
        strm_in_V_pixel_0_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_b_din() {
    strm_in_V_pixel_0_b_din = src_V_pixel_0_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_b_write() {
    strm_in_V_pixel_0_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_0_g_blk_n = strm_in_V_pixel_0_g_full_n.read();
    } else {
        strm_in_V_pixel_0_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_g_din() {
    strm_in_V_pixel_0_g_din = src_V_pixel_0_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_g_write() {
    strm_in_V_pixel_0_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_0_r_blk_n = strm_in_V_pixel_0_r_full_n.read();
    } else {
        strm_in_V_pixel_0_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_r_din() {
    strm_in_V_pixel_0_r_din = src_V_pixel_0_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_0_r_write() {
    strm_in_V_pixel_0_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_10_b_blk_n = strm_in_V_pixel_10_b_full_n.read();
    } else {
        strm_in_V_pixel_10_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_b_din() {
    strm_in_V_pixel_10_b_din = src_V_pixel_10_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_b_write() {
    strm_in_V_pixel_10_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_10_g_blk_n = strm_in_V_pixel_10_g_full_n.read();
    } else {
        strm_in_V_pixel_10_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_g_din() {
    strm_in_V_pixel_10_g_din = src_V_pixel_10_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_g_write() {
    strm_in_V_pixel_10_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_10_r_blk_n = strm_in_V_pixel_10_r_full_n.read();
    } else {
        strm_in_V_pixel_10_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_r_din() {
    strm_in_V_pixel_10_r_din = src_V_pixel_10_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_10_r_write() {
    strm_in_V_pixel_10_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_11_b_blk_n = strm_in_V_pixel_11_b_full_n.read();
    } else {
        strm_in_V_pixel_11_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_b_din() {
    strm_in_V_pixel_11_b_din = src_V_pixel_11_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_b_write() {
    strm_in_V_pixel_11_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_11_g_blk_n = strm_in_V_pixel_11_g_full_n.read();
    } else {
        strm_in_V_pixel_11_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_g_din() {
    strm_in_V_pixel_11_g_din = src_V_pixel_11_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_g_write() {
    strm_in_V_pixel_11_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_11_r_blk_n = strm_in_V_pixel_11_r_full_n.read();
    } else {
        strm_in_V_pixel_11_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_r_din() {
    strm_in_V_pixel_11_r_din = src_V_pixel_11_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_11_r_write() {
    strm_in_V_pixel_11_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_12_b_blk_n = strm_in_V_pixel_12_b_full_n.read();
    } else {
        strm_in_V_pixel_12_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_b_din() {
    strm_in_V_pixel_12_b_din = src_V_pixel_12_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_b_write() {
    strm_in_V_pixel_12_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_12_g_blk_n = strm_in_V_pixel_12_g_full_n.read();
    } else {
        strm_in_V_pixel_12_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_g_din() {
    strm_in_V_pixel_12_g_din = src_V_pixel_12_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_g_write() {
    strm_in_V_pixel_12_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_12_r_blk_n = strm_in_V_pixel_12_r_full_n.read();
    } else {
        strm_in_V_pixel_12_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_r_din() {
    strm_in_V_pixel_12_r_din = src_V_pixel_12_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_12_r_write() {
    strm_in_V_pixel_12_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_13_b_blk_n = strm_in_V_pixel_13_b_full_n.read();
    } else {
        strm_in_V_pixel_13_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_b_din() {
    strm_in_V_pixel_13_b_din = src_V_pixel_13_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_b_write() {
    strm_in_V_pixel_13_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_13_g_blk_n = strm_in_V_pixel_13_g_full_n.read();
    } else {
        strm_in_V_pixel_13_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_g_din() {
    strm_in_V_pixel_13_g_din = src_V_pixel_13_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_g_write() {
    strm_in_V_pixel_13_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_13_r_blk_n = strm_in_V_pixel_13_r_full_n.read();
    } else {
        strm_in_V_pixel_13_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_r_din() {
    strm_in_V_pixel_13_r_din = src_V_pixel_13_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_13_r_write() {
    strm_in_V_pixel_13_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_14_b_blk_n = strm_in_V_pixel_14_b_full_n.read();
    } else {
        strm_in_V_pixel_14_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_b_din() {
    strm_in_V_pixel_14_b_din = src_V_pixel_14_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_b_write() {
    strm_in_V_pixel_14_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_14_g_blk_n = strm_in_V_pixel_14_g_full_n.read();
    } else {
        strm_in_V_pixel_14_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_g_din() {
    strm_in_V_pixel_14_g_din = src_V_pixel_14_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_g_write() {
    strm_in_V_pixel_14_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_14_r_blk_n = strm_in_V_pixel_14_r_full_n.read();
    } else {
        strm_in_V_pixel_14_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_r_din() {
    strm_in_V_pixel_14_r_din = src_V_pixel_14_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_14_r_write() {
    strm_in_V_pixel_14_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_15_b_blk_n = strm_in_V_pixel_15_b_full_n.read();
    } else {
        strm_in_V_pixel_15_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_b_din() {
    strm_in_V_pixel_15_b_din = src_V_pixel_15_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_b_write() {
    strm_in_V_pixel_15_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_15_g_blk_n = strm_in_V_pixel_15_g_full_n.read();
    } else {
        strm_in_V_pixel_15_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_g_din() {
    strm_in_V_pixel_15_g_din = src_V_pixel_15_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_g_write() {
    strm_in_V_pixel_15_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_15_r_blk_n = strm_in_V_pixel_15_r_full_n.read();
    } else {
        strm_in_V_pixel_15_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_r_din() {
    strm_in_V_pixel_15_r_din = src_V_pixel_15_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_15_r_write() {
    strm_in_V_pixel_15_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_16_b_blk_n = strm_in_V_pixel_16_b_full_n.read();
    } else {
        strm_in_V_pixel_16_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_b_din() {
    strm_in_V_pixel_16_b_din = src_V_pixel_16_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_b_write() {
    strm_in_V_pixel_16_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_16_g_blk_n = strm_in_V_pixel_16_g_full_n.read();
    } else {
        strm_in_V_pixel_16_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_g_din() {
    strm_in_V_pixel_16_g_din = src_V_pixel_16_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_g_write() {
    strm_in_V_pixel_16_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_16_r_blk_n = strm_in_V_pixel_16_r_full_n.read();
    } else {
        strm_in_V_pixel_16_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_r_din() {
    strm_in_V_pixel_16_r_din = src_V_pixel_16_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_16_r_write() {
    strm_in_V_pixel_16_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_17_b_blk_n = strm_in_V_pixel_17_b_full_n.read();
    } else {
        strm_in_V_pixel_17_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_b_din() {
    strm_in_V_pixel_17_b_din = src_V_pixel_17_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_b_write() {
    strm_in_V_pixel_17_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_17_g_blk_n = strm_in_V_pixel_17_g_full_n.read();
    } else {
        strm_in_V_pixel_17_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_g_din() {
    strm_in_V_pixel_17_g_din = src_V_pixel_17_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_g_write() {
    strm_in_V_pixel_17_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_17_r_blk_n = strm_in_V_pixel_17_r_full_n.read();
    } else {
        strm_in_V_pixel_17_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_r_din() {
    strm_in_V_pixel_17_r_din = src_V_pixel_17_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_17_r_write() {
    strm_in_V_pixel_17_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_18_b_blk_n = strm_in_V_pixel_18_b_full_n.read();
    } else {
        strm_in_V_pixel_18_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_b_din() {
    strm_in_V_pixel_18_b_din = src_V_pixel_18_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_b_write() {
    strm_in_V_pixel_18_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_18_g_blk_n = strm_in_V_pixel_18_g_full_n.read();
    } else {
        strm_in_V_pixel_18_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_g_din() {
    strm_in_V_pixel_18_g_din = src_V_pixel_18_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_g_write() {
    strm_in_V_pixel_18_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_18_r_blk_n = strm_in_V_pixel_18_r_full_n.read();
    } else {
        strm_in_V_pixel_18_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_r_din() {
    strm_in_V_pixel_18_r_din = src_V_pixel_18_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_18_r_write() {
    strm_in_V_pixel_18_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_19_b_blk_n = strm_in_V_pixel_19_b_full_n.read();
    } else {
        strm_in_V_pixel_19_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_b_din() {
    strm_in_V_pixel_19_b_din = src_V_pixel_19_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_b_write() {
    strm_in_V_pixel_19_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_19_g_blk_n = strm_in_V_pixel_19_g_full_n.read();
    } else {
        strm_in_V_pixel_19_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_g_din() {
    strm_in_V_pixel_19_g_din = src_V_pixel_19_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_g_write() {
    strm_in_V_pixel_19_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_19_r_blk_n = strm_in_V_pixel_19_r_full_n.read();
    } else {
        strm_in_V_pixel_19_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_r_din() {
    strm_in_V_pixel_19_r_din = src_V_pixel_19_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_19_r_write() {
    strm_in_V_pixel_19_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_1_b_blk_n = strm_in_V_pixel_1_b_full_n.read();
    } else {
        strm_in_V_pixel_1_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_b_din() {
    strm_in_V_pixel_1_b_din = src_V_pixel_1_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_b_write() {
    strm_in_V_pixel_1_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_1_g_blk_n = strm_in_V_pixel_1_g_full_n.read();
    } else {
        strm_in_V_pixel_1_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_g_din() {
    strm_in_V_pixel_1_g_din = src_V_pixel_1_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_g_write() {
    strm_in_V_pixel_1_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_1_r_blk_n = strm_in_V_pixel_1_r_full_n.read();
    } else {
        strm_in_V_pixel_1_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_r_din() {
    strm_in_V_pixel_1_r_din = src_V_pixel_1_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_1_r_write() {
    strm_in_V_pixel_1_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_20_b_blk_n = strm_in_V_pixel_20_b_full_n.read();
    } else {
        strm_in_V_pixel_20_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_b_din() {
    strm_in_V_pixel_20_b_din = src_V_pixel_20_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_b_write() {
    strm_in_V_pixel_20_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_20_g_blk_n = strm_in_V_pixel_20_g_full_n.read();
    } else {
        strm_in_V_pixel_20_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_g_din() {
    strm_in_V_pixel_20_g_din = src_V_pixel_20_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_g_write() {
    strm_in_V_pixel_20_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_20_r_blk_n = strm_in_V_pixel_20_r_full_n.read();
    } else {
        strm_in_V_pixel_20_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_r_din() {
    strm_in_V_pixel_20_r_din = src_V_pixel_20_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_20_r_write() {
    strm_in_V_pixel_20_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_21_b_blk_n = strm_in_V_pixel_21_b_full_n.read();
    } else {
        strm_in_V_pixel_21_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_b_din() {
    strm_in_V_pixel_21_b_din = src_V_pixel_21_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_b_write() {
    strm_in_V_pixel_21_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_21_g_blk_n = strm_in_V_pixel_21_g_full_n.read();
    } else {
        strm_in_V_pixel_21_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_g_din() {
    strm_in_V_pixel_21_g_din = src_V_pixel_21_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_g_write() {
    strm_in_V_pixel_21_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_21_r_blk_n = strm_in_V_pixel_21_r_full_n.read();
    } else {
        strm_in_V_pixel_21_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_r_din() {
    strm_in_V_pixel_21_r_din = src_V_pixel_21_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_21_r_write() {
    strm_in_V_pixel_21_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_22_b_blk_n = strm_in_V_pixel_22_b_full_n.read();
    } else {
        strm_in_V_pixel_22_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_b_din() {
    strm_in_V_pixel_22_b_din = src_V_pixel_22_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_b_write() {
    strm_in_V_pixel_22_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_22_g_blk_n = strm_in_V_pixel_22_g_full_n.read();
    } else {
        strm_in_V_pixel_22_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_g_din() {
    strm_in_V_pixel_22_g_din = src_V_pixel_22_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_g_write() {
    strm_in_V_pixel_22_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_22_r_blk_n = strm_in_V_pixel_22_r_full_n.read();
    } else {
        strm_in_V_pixel_22_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_r_din() {
    strm_in_V_pixel_22_r_din = src_V_pixel_22_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_22_r_write() {
    strm_in_V_pixel_22_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_23_b_blk_n = strm_in_V_pixel_23_b_full_n.read();
    } else {
        strm_in_V_pixel_23_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_b_din() {
    strm_in_V_pixel_23_b_din = src_V_pixel_23_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_b_write() {
    strm_in_V_pixel_23_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_23_g_blk_n = strm_in_V_pixel_23_g_full_n.read();
    } else {
        strm_in_V_pixel_23_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_g_din() {
    strm_in_V_pixel_23_g_din = src_V_pixel_23_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_g_write() {
    strm_in_V_pixel_23_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_23_r_blk_n = strm_in_V_pixel_23_r_full_n.read();
    } else {
        strm_in_V_pixel_23_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_r_din() {
    strm_in_V_pixel_23_r_din = src_V_pixel_23_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_23_r_write() {
    strm_in_V_pixel_23_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_24_b_blk_n = strm_in_V_pixel_24_b_full_n.read();
    } else {
        strm_in_V_pixel_24_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_b_din() {
    strm_in_V_pixel_24_b_din = src_V_pixel_24_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_b_write() {
    strm_in_V_pixel_24_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_24_g_blk_n = strm_in_V_pixel_24_g_full_n.read();
    } else {
        strm_in_V_pixel_24_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_g_din() {
    strm_in_V_pixel_24_g_din = src_V_pixel_24_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_g_write() {
    strm_in_V_pixel_24_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_24_r_blk_n = strm_in_V_pixel_24_r_full_n.read();
    } else {
        strm_in_V_pixel_24_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_r_din() {
    strm_in_V_pixel_24_r_din = src_V_pixel_24_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_24_r_write() {
    strm_in_V_pixel_24_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_25_b_blk_n = strm_in_V_pixel_25_b_full_n.read();
    } else {
        strm_in_V_pixel_25_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_b_din() {
    strm_in_V_pixel_25_b_din = src_V_pixel_25_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_b_write() {
    strm_in_V_pixel_25_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_25_g_blk_n = strm_in_V_pixel_25_g_full_n.read();
    } else {
        strm_in_V_pixel_25_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_g_din() {
    strm_in_V_pixel_25_g_din = src_V_pixel_25_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_g_write() {
    strm_in_V_pixel_25_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_25_r_blk_n = strm_in_V_pixel_25_r_full_n.read();
    } else {
        strm_in_V_pixel_25_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_r_din() {
    strm_in_V_pixel_25_r_din = src_V_pixel_25_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_25_r_write() {
    strm_in_V_pixel_25_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_26_b_blk_n = strm_in_V_pixel_26_b_full_n.read();
    } else {
        strm_in_V_pixel_26_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_b_din() {
    strm_in_V_pixel_26_b_din = src_V_pixel_26_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_b_write() {
    strm_in_V_pixel_26_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_26_g_blk_n = strm_in_V_pixel_26_g_full_n.read();
    } else {
        strm_in_V_pixel_26_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_g_din() {
    strm_in_V_pixel_26_g_din = src_V_pixel_26_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_g_write() {
    strm_in_V_pixel_26_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_26_r_blk_n = strm_in_V_pixel_26_r_full_n.read();
    } else {
        strm_in_V_pixel_26_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_r_din() {
    strm_in_V_pixel_26_r_din = src_V_pixel_26_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_26_r_write() {
    strm_in_V_pixel_26_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_27_b_blk_n = strm_in_V_pixel_27_b_full_n.read();
    } else {
        strm_in_V_pixel_27_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_b_din() {
    strm_in_V_pixel_27_b_din = src_V_pixel_27_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_b_write() {
    strm_in_V_pixel_27_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_27_g_blk_n = strm_in_V_pixel_27_g_full_n.read();
    } else {
        strm_in_V_pixel_27_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_g_din() {
    strm_in_V_pixel_27_g_din = src_V_pixel_27_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_g_write() {
    strm_in_V_pixel_27_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_27_r_blk_n = strm_in_V_pixel_27_r_full_n.read();
    } else {
        strm_in_V_pixel_27_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_r_din() {
    strm_in_V_pixel_27_r_din = src_V_pixel_27_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_27_r_write() {
    strm_in_V_pixel_27_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_28_b_blk_n = strm_in_V_pixel_28_b_full_n.read();
    } else {
        strm_in_V_pixel_28_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_b_din() {
    strm_in_V_pixel_28_b_din = src_V_pixel_28_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_b_write() {
    strm_in_V_pixel_28_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_28_g_blk_n = strm_in_V_pixel_28_g_full_n.read();
    } else {
        strm_in_V_pixel_28_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_g_din() {
    strm_in_V_pixel_28_g_din = src_V_pixel_28_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_g_write() {
    strm_in_V_pixel_28_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_28_r_blk_n = strm_in_V_pixel_28_r_full_n.read();
    } else {
        strm_in_V_pixel_28_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_r_din() {
    strm_in_V_pixel_28_r_din = src_V_pixel_28_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_28_r_write() {
    strm_in_V_pixel_28_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_29_b_blk_n = strm_in_V_pixel_29_b_full_n.read();
    } else {
        strm_in_V_pixel_29_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_b_din() {
    strm_in_V_pixel_29_b_din = src_V_pixel_29_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_b_write() {
    strm_in_V_pixel_29_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_29_g_blk_n = strm_in_V_pixel_29_g_full_n.read();
    } else {
        strm_in_V_pixel_29_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_g_din() {
    strm_in_V_pixel_29_g_din = src_V_pixel_29_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_g_write() {
    strm_in_V_pixel_29_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_29_r_blk_n = strm_in_V_pixel_29_r_full_n.read();
    } else {
        strm_in_V_pixel_29_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_r_din() {
    strm_in_V_pixel_29_r_din = src_V_pixel_29_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_29_r_write() {
    strm_in_V_pixel_29_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_2_b_blk_n = strm_in_V_pixel_2_b_full_n.read();
    } else {
        strm_in_V_pixel_2_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_b_din() {
    strm_in_V_pixel_2_b_din = src_V_pixel_2_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_b_write() {
    strm_in_V_pixel_2_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_2_g_blk_n = strm_in_V_pixel_2_g_full_n.read();
    } else {
        strm_in_V_pixel_2_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_g_din() {
    strm_in_V_pixel_2_g_din = src_V_pixel_2_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_g_write() {
    strm_in_V_pixel_2_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_2_r_blk_n = strm_in_V_pixel_2_r_full_n.read();
    } else {
        strm_in_V_pixel_2_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_r_din() {
    strm_in_V_pixel_2_r_din = src_V_pixel_2_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_2_r_write() {
    strm_in_V_pixel_2_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_30_b_blk_n = strm_in_V_pixel_30_b_full_n.read();
    } else {
        strm_in_V_pixel_30_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_b_din() {
    strm_in_V_pixel_30_b_din = src_V_pixel_30_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_b_write() {
    strm_in_V_pixel_30_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_30_g_blk_n = strm_in_V_pixel_30_g_full_n.read();
    } else {
        strm_in_V_pixel_30_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_g_din() {
    strm_in_V_pixel_30_g_din = src_V_pixel_30_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_g_write() {
    strm_in_V_pixel_30_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_30_r_blk_n = strm_in_V_pixel_30_r_full_n.read();
    } else {
        strm_in_V_pixel_30_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_r_din() {
    strm_in_V_pixel_30_r_din = src_V_pixel_30_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_30_r_write() {
    strm_in_V_pixel_30_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_31_b_blk_n = strm_in_V_pixel_31_b_full_n.read();
    } else {
        strm_in_V_pixel_31_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_b_din() {
    strm_in_V_pixel_31_b_din = src_V_pixel_31_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_b_write() {
    strm_in_V_pixel_31_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_31_g_blk_n = strm_in_V_pixel_31_g_full_n.read();
    } else {
        strm_in_V_pixel_31_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_g_din() {
    strm_in_V_pixel_31_g_din = src_V_pixel_31_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_g_write() {
    strm_in_V_pixel_31_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_31_r_blk_n = strm_in_V_pixel_31_r_full_n.read();
    } else {
        strm_in_V_pixel_31_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_r_din() {
    strm_in_V_pixel_31_r_din = src_V_pixel_31_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_31_r_write() {
    strm_in_V_pixel_31_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_32_b_blk_n = strm_in_V_pixel_32_b_full_n.read();
    } else {
        strm_in_V_pixel_32_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_b_din() {
    strm_in_V_pixel_32_b_din = src_V_pixel_32_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_b_write() {
    strm_in_V_pixel_32_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_32_g_blk_n = strm_in_V_pixel_32_g_full_n.read();
    } else {
        strm_in_V_pixel_32_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_g_din() {
    strm_in_V_pixel_32_g_din = src_V_pixel_32_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_g_write() {
    strm_in_V_pixel_32_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_32_r_blk_n = strm_in_V_pixel_32_r_full_n.read();
    } else {
        strm_in_V_pixel_32_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_r_din() {
    strm_in_V_pixel_32_r_din = src_V_pixel_32_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_32_r_write() {
    strm_in_V_pixel_32_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_33_b_blk_n = strm_in_V_pixel_33_b_full_n.read();
    } else {
        strm_in_V_pixel_33_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_b_din() {
    strm_in_V_pixel_33_b_din = src_V_pixel_33_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_b_write() {
    strm_in_V_pixel_33_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_33_g_blk_n = strm_in_V_pixel_33_g_full_n.read();
    } else {
        strm_in_V_pixel_33_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_g_din() {
    strm_in_V_pixel_33_g_din = src_V_pixel_33_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_g_write() {
    strm_in_V_pixel_33_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_33_r_blk_n = strm_in_V_pixel_33_r_full_n.read();
    } else {
        strm_in_V_pixel_33_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_r_din() {
    strm_in_V_pixel_33_r_din = src_V_pixel_33_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_33_r_write() {
    strm_in_V_pixel_33_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_34_b_blk_n = strm_in_V_pixel_34_b_full_n.read();
    } else {
        strm_in_V_pixel_34_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_b_din() {
    strm_in_V_pixel_34_b_din = src_V_pixel_34_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_b_write() {
    strm_in_V_pixel_34_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_34_g_blk_n = strm_in_V_pixel_34_g_full_n.read();
    } else {
        strm_in_V_pixel_34_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_g_din() {
    strm_in_V_pixel_34_g_din = src_V_pixel_34_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_g_write() {
    strm_in_V_pixel_34_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_34_r_blk_n = strm_in_V_pixel_34_r_full_n.read();
    } else {
        strm_in_V_pixel_34_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_r_din() {
    strm_in_V_pixel_34_r_din = src_V_pixel_34_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_34_r_write() {
    strm_in_V_pixel_34_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_35_b_blk_n = strm_in_V_pixel_35_b_full_n.read();
    } else {
        strm_in_V_pixel_35_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_b_din() {
    strm_in_V_pixel_35_b_din = src_V_pixel_35_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_b_write() {
    strm_in_V_pixel_35_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_35_g_blk_n = strm_in_V_pixel_35_g_full_n.read();
    } else {
        strm_in_V_pixel_35_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_g_din() {
    strm_in_V_pixel_35_g_din = src_V_pixel_35_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_g_write() {
    strm_in_V_pixel_35_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_35_r_blk_n = strm_in_V_pixel_35_r_full_n.read();
    } else {
        strm_in_V_pixel_35_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_r_din() {
    strm_in_V_pixel_35_r_din = src_V_pixel_35_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_35_r_write() {
    strm_in_V_pixel_35_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_36_b_blk_n = strm_in_V_pixel_36_b_full_n.read();
    } else {
        strm_in_V_pixel_36_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_b_din() {
    strm_in_V_pixel_36_b_din = src_V_pixel_36_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_b_write() {
    strm_in_V_pixel_36_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_36_g_blk_n = strm_in_V_pixel_36_g_full_n.read();
    } else {
        strm_in_V_pixel_36_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_g_din() {
    strm_in_V_pixel_36_g_din = src_V_pixel_36_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_g_write() {
    strm_in_V_pixel_36_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_36_r_blk_n = strm_in_V_pixel_36_r_full_n.read();
    } else {
        strm_in_V_pixel_36_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_r_din() {
    strm_in_V_pixel_36_r_din = src_V_pixel_36_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_36_r_write() {
    strm_in_V_pixel_36_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_37_b_blk_n = strm_in_V_pixel_37_b_full_n.read();
    } else {
        strm_in_V_pixel_37_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_b_din() {
    strm_in_V_pixel_37_b_din = src_V_pixel_37_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_b_write() {
    strm_in_V_pixel_37_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_37_g_blk_n = strm_in_V_pixel_37_g_full_n.read();
    } else {
        strm_in_V_pixel_37_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_g_din() {
    strm_in_V_pixel_37_g_din = src_V_pixel_37_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_g_write() {
    strm_in_V_pixel_37_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_37_r_blk_n = strm_in_V_pixel_37_r_full_n.read();
    } else {
        strm_in_V_pixel_37_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_r_din() {
    strm_in_V_pixel_37_r_din = src_V_pixel_37_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_37_r_write() {
    strm_in_V_pixel_37_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_38_b_blk_n = strm_in_V_pixel_38_b_full_n.read();
    } else {
        strm_in_V_pixel_38_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_b_din() {
    strm_in_V_pixel_38_b_din = src_V_pixel_38_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_b_write() {
    strm_in_V_pixel_38_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_38_g_blk_n = strm_in_V_pixel_38_g_full_n.read();
    } else {
        strm_in_V_pixel_38_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_g_din() {
    strm_in_V_pixel_38_g_din = src_V_pixel_38_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_g_write() {
    strm_in_V_pixel_38_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_38_r_blk_n = strm_in_V_pixel_38_r_full_n.read();
    } else {
        strm_in_V_pixel_38_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_r_din() {
    strm_in_V_pixel_38_r_din = src_V_pixel_38_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_38_r_write() {
    strm_in_V_pixel_38_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_39_b_blk_n = strm_in_V_pixel_39_b_full_n.read();
    } else {
        strm_in_V_pixel_39_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_b_din() {
    strm_in_V_pixel_39_b_din = src_V_pixel_39_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_b_write() {
    strm_in_V_pixel_39_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_39_g_blk_n = strm_in_V_pixel_39_g_full_n.read();
    } else {
        strm_in_V_pixel_39_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_g_din() {
    strm_in_V_pixel_39_g_din = src_V_pixel_39_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_g_write() {
    strm_in_V_pixel_39_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_39_r_blk_n = strm_in_V_pixel_39_r_full_n.read();
    } else {
        strm_in_V_pixel_39_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_r_din() {
    strm_in_V_pixel_39_r_din = src_V_pixel_39_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_39_r_write() {
    strm_in_V_pixel_39_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_3_b_blk_n = strm_in_V_pixel_3_b_full_n.read();
    } else {
        strm_in_V_pixel_3_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_b_din() {
    strm_in_V_pixel_3_b_din = src_V_pixel_3_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_b_write() {
    strm_in_V_pixel_3_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_3_g_blk_n = strm_in_V_pixel_3_g_full_n.read();
    } else {
        strm_in_V_pixel_3_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_g_din() {
    strm_in_V_pixel_3_g_din = src_V_pixel_3_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_g_write() {
    strm_in_V_pixel_3_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_3_r_blk_n = strm_in_V_pixel_3_r_full_n.read();
    } else {
        strm_in_V_pixel_3_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_r_din() {
    strm_in_V_pixel_3_r_din = src_V_pixel_3_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_3_r_write() {
    strm_in_V_pixel_3_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_40_b_blk_n = strm_in_V_pixel_40_b_full_n.read();
    } else {
        strm_in_V_pixel_40_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_b_din() {
    strm_in_V_pixel_40_b_din = src_V_pixel_40_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_b_write() {
    strm_in_V_pixel_40_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_40_g_blk_n = strm_in_V_pixel_40_g_full_n.read();
    } else {
        strm_in_V_pixel_40_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_g_din() {
    strm_in_V_pixel_40_g_din = src_V_pixel_40_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_g_write() {
    strm_in_V_pixel_40_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_40_r_blk_n = strm_in_V_pixel_40_r_full_n.read();
    } else {
        strm_in_V_pixel_40_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_r_din() {
    strm_in_V_pixel_40_r_din = src_V_pixel_40_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_40_r_write() {
    strm_in_V_pixel_40_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_41_b_blk_n = strm_in_V_pixel_41_b_full_n.read();
    } else {
        strm_in_V_pixel_41_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_b_din() {
    strm_in_V_pixel_41_b_din = src_V_pixel_41_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_b_write() {
    strm_in_V_pixel_41_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_41_g_blk_n = strm_in_V_pixel_41_g_full_n.read();
    } else {
        strm_in_V_pixel_41_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_g_din() {
    strm_in_V_pixel_41_g_din = src_V_pixel_41_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_g_write() {
    strm_in_V_pixel_41_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_41_r_blk_n = strm_in_V_pixel_41_r_full_n.read();
    } else {
        strm_in_V_pixel_41_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_r_din() {
    strm_in_V_pixel_41_r_din = src_V_pixel_41_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_41_r_write() {
    strm_in_V_pixel_41_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_42_b_blk_n = strm_in_V_pixel_42_b_full_n.read();
    } else {
        strm_in_V_pixel_42_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_b_din() {
    strm_in_V_pixel_42_b_din = src_V_pixel_42_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_b_write() {
    strm_in_V_pixel_42_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_42_g_blk_n = strm_in_V_pixel_42_g_full_n.read();
    } else {
        strm_in_V_pixel_42_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_g_din() {
    strm_in_V_pixel_42_g_din = src_V_pixel_42_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_g_write() {
    strm_in_V_pixel_42_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_42_r_blk_n = strm_in_V_pixel_42_r_full_n.read();
    } else {
        strm_in_V_pixel_42_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_r_din() {
    strm_in_V_pixel_42_r_din = src_V_pixel_42_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_42_r_write() {
    strm_in_V_pixel_42_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_43_b_blk_n = strm_in_V_pixel_43_b_full_n.read();
    } else {
        strm_in_V_pixel_43_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_b_din() {
    strm_in_V_pixel_43_b_din = src_V_pixel_43_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_b_write() {
    strm_in_V_pixel_43_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_43_g_blk_n = strm_in_V_pixel_43_g_full_n.read();
    } else {
        strm_in_V_pixel_43_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_g_din() {
    strm_in_V_pixel_43_g_din = src_V_pixel_43_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_g_write() {
    strm_in_V_pixel_43_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_43_r_blk_n = strm_in_V_pixel_43_r_full_n.read();
    } else {
        strm_in_V_pixel_43_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_r_din() {
    strm_in_V_pixel_43_r_din = src_V_pixel_43_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_43_r_write() {
    strm_in_V_pixel_43_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_44_b_blk_n = strm_in_V_pixel_44_b_full_n.read();
    } else {
        strm_in_V_pixel_44_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_b_din() {
    strm_in_V_pixel_44_b_din = src_V_pixel_44_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_b_write() {
    strm_in_V_pixel_44_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_44_g_blk_n = strm_in_V_pixel_44_g_full_n.read();
    } else {
        strm_in_V_pixel_44_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_g_din() {
    strm_in_V_pixel_44_g_din = src_V_pixel_44_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_g_write() {
    strm_in_V_pixel_44_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_44_r_blk_n = strm_in_V_pixel_44_r_full_n.read();
    } else {
        strm_in_V_pixel_44_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_r_din() {
    strm_in_V_pixel_44_r_din = src_V_pixel_44_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_44_r_write() {
    strm_in_V_pixel_44_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_45_b_blk_n = strm_in_V_pixel_45_b_full_n.read();
    } else {
        strm_in_V_pixel_45_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_b_din() {
    strm_in_V_pixel_45_b_din = src_V_pixel_45_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_b_write() {
    strm_in_V_pixel_45_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_45_g_blk_n = strm_in_V_pixel_45_g_full_n.read();
    } else {
        strm_in_V_pixel_45_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_g_din() {
    strm_in_V_pixel_45_g_din = src_V_pixel_45_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_g_write() {
    strm_in_V_pixel_45_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_45_r_blk_n = strm_in_V_pixel_45_r_full_n.read();
    } else {
        strm_in_V_pixel_45_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_r_din() {
    strm_in_V_pixel_45_r_din = src_V_pixel_45_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_45_r_write() {
    strm_in_V_pixel_45_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_46_b_blk_n = strm_in_V_pixel_46_b_full_n.read();
    } else {
        strm_in_V_pixel_46_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_b_din() {
    strm_in_V_pixel_46_b_din = src_V_pixel_46_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_b_write() {
    strm_in_V_pixel_46_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_46_g_blk_n = strm_in_V_pixel_46_g_full_n.read();
    } else {
        strm_in_V_pixel_46_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_g_din() {
    strm_in_V_pixel_46_g_din = src_V_pixel_46_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_g_write() {
    strm_in_V_pixel_46_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_46_r_blk_n = strm_in_V_pixel_46_r_full_n.read();
    } else {
        strm_in_V_pixel_46_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_r_din() {
    strm_in_V_pixel_46_r_din = src_V_pixel_46_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_46_r_write() {
    strm_in_V_pixel_46_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_47_b_blk_n = strm_in_V_pixel_47_b_full_n.read();
    } else {
        strm_in_V_pixel_47_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_b_din() {
    strm_in_V_pixel_47_b_din = src_V_pixel_47_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_b_write() {
    strm_in_V_pixel_47_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_47_g_blk_n = strm_in_V_pixel_47_g_full_n.read();
    } else {
        strm_in_V_pixel_47_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_g_din() {
    strm_in_V_pixel_47_g_din = src_V_pixel_47_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_g_write() {
    strm_in_V_pixel_47_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_47_r_blk_n = strm_in_V_pixel_47_r_full_n.read();
    } else {
        strm_in_V_pixel_47_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_r_din() {
    strm_in_V_pixel_47_r_din = src_V_pixel_47_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_47_r_write() {
    strm_in_V_pixel_47_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_48_b_blk_n = strm_in_V_pixel_48_b_full_n.read();
    } else {
        strm_in_V_pixel_48_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_b_din() {
    strm_in_V_pixel_48_b_din = src_V_pixel_48_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_b_write() {
    strm_in_V_pixel_48_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_48_g_blk_n = strm_in_V_pixel_48_g_full_n.read();
    } else {
        strm_in_V_pixel_48_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_g_din() {
    strm_in_V_pixel_48_g_din = src_V_pixel_48_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_g_write() {
    strm_in_V_pixel_48_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_48_r_blk_n = strm_in_V_pixel_48_r_full_n.read();
    } else {
        strm_in_V_pixel_48_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_r_din() {
    strm_in_V_pixel_48_r_din = src_V_pixel_48_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_48_r_write() {
    strm_in_V_pixel_48_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_49_b_blk_n = strm_in_V_pixel_49_b_full_n.read();
    } else {
        strm_in_V_pixel_49_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_b_din() {
    strm_in_V_pixel_49_b_din = src_V_pixel_49_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_b_write() {
    strm_in_V_pixel_49_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_49_g_blk_n = strm_in_V_pixel_49_g_full_n.read();
    } else {
        strm_in_V_pixel_49_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_g_din() {
    strm_in_V_pixel_49_g_din = src_V_pixel_49_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_g_write() {
    strm_in_V_pixel_49_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_49_r_blk_n = strm_in_V_pixel_49_r_full_n.read();
    } else {
        strm_in_V_pixel_49_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_r_din() {
    strm_in_V_pixel_49_r_din = src_V_pixel_49_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_49_r_write() {
    strm_in_V_pixel_49_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_4_b_blk_n = strm_in_V_pixel_4_b_full_n.read();
    } else {
        strm_in_V_pixel_4_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_b_din() {
    strm_in_V_pixel_4_b_din = src_V_pixel_4_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_b_write() {
    strm_in_V_pixel_4_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_4_g_blk_n = strm_in_V_pixel_4_g_full_n.read();
    } else {
        strm_in_V_pixel_4_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_g_din() {
    strm_in_V_pixel_4_g_din = src_V_pixel_4_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_g_write() {
    strm_in_V_pixel_4_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_4_r_blk_n = strm_in_V_pixel_4_r_full_n.read();
    } else {
        strm_in_V_pixel_4_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_r_din() {
    strm_in_V_pixel_4_r_din = src_V_pixel_4_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_4_r_write() {
    strm_in_V_pixel_4_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_50_b_blk_n = strm_in_V_pixel_50_b_full_n.read();
    } else {
        strm_in_V_pixel_50_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_b_din() {
    strm_in_V_pixel_50_b_din = src_V_pixel_50_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_b_write() {
    strm_in_V_pixel_50_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_50_g_blk_n = strm_in_V_pixel_50_g_full_n.read();
    } else {
        strm_in_V_pixel_50_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_g_din() {
    strm_in_V_pixel_50_g_din = src_V_pixel_50_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_g_write() {
    strm_in_V_pixel_50_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_50_r_blk_n = strm_in_V_pixel_50_r_full_n.read();
    } else {
        strm_in_V_pixel_50_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_r_din() {
    strm_in_V_pixel_50_r_din = src_V_pixel_50_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_50_r_write() {
    strm_in_V_pixel_50_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_51_b_blk_n = strm_in_V_pixel_51_b_full_n.read();
    } else {
        strm_in_V_pixel_51_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_b_din() {
    strm_in_V_pixel_51_b_din = src_V_pixel_51_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_b_write() {
    strm_in_V_pixel_51_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_51_g_blk_n = strm_in_V_pixel_51_g_full_n.read();
    } else {
        strm_in_V_pixel_51_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_g_din() {
    strm_in_V_pixel_51_g_din = src_V_pixel_51_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_g_write() {
    strm_in_V_pixel_51_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_51_r_blk_n = strm_in_V_pixel_51_r_full_n.read();
    } else {
        strm_in_V_pixel_51_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_r_din() {
    strm_in_V_pixel_51_r_din = src_V_pixel_51_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_51_r_write() {
    strm_in_V_pixel_51_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_52_b_blk_n = strm_in_V_pixel_52_b_full_n.read();
    } else {
        strm_in_V_pixel_52_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_b_din() {
    strm_in_V_pixel_52_b_din = src_V_pixel_52_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_b_write() {
    strm_in_V_pixel_52_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_52_g_blk_n = strm_in_V_pixel_52_g_full_n.read();
    } else {
        strm_in_V_pixel_52_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_g_din() {
    strm_in_V_pixel_52_g_din = src_V_pixel_52_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_g_write() {
    strm_in_V_pixel_52_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_52_r_blk_n = strm_in_V_pixel_52_r_full_n.read();
    } else {
        strm_in_V_pixel_52_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_r_din() {
    strm_in_V_pixel_52_r_din = src_V_pixel_52_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_52_r_write() {
    strm_in_V_pixel_52_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_53_b_blk_n = strm_in_V_pixel_53_b_full_n.read();
    } else {
        strm_in_V_pixel_53_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_b_din() {
    strm_in_V_pixel_53_b_din = src_V_pixel_53_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_b_write() {
    strm_in_V_pixel_53_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_53_g_blk_n = strm_in_V_pixel_53_g_full_n.read();
    } else {
        strm_in_V_pixel_53_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_g_din() {
    strm_in_V_pixel_53_g_din = src_V_pixel_53_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_g_write() {
    strm_in_V_pixel_53_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_53_r_blk_n = strm_in_V_pixel_53_r_full_n.read();
    } else {
        strm_in_V_pixel_53_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_r_din() {
    strm_in_V_pixel_53_r_din = src_V_pixel_53_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_53_r_write() {
    strm_in_V_pixel_53_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_54_b_blk_n = strm_in_V_pixel_54_b_full_n.read();
    } else {
        strm_in_V_pixel_54_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_b_din() {
    strm_in_V_pixel_54_b_din = src_V_pixel_54_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_b_write() {
    strm_in_V_pixel_54_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_54_g_blk_n = strm_in_V_pixel_54_g_full_n.read();
    } else {
        strm_in_V_pixel_54_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_g_din() {
    strm_in_V_pixel_54_g_din = src_V_pixel_54_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_g_write() {
    strm_in_V_pixel_54_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_54_r_blk_n = strm_in_V_pixel_54_r_full_n.read();
    } else {
        strm_in_V_pixel_54_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_r_din() {
    strm_in_V_pixel_54_r_din = src_V_pixel_54_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_54_r_write() {
    strm_in_V_pixel_54_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_55_b_blk_n = strm_in_V_pixel_55_b_full_n.read();
    } else {
        strm_in_V_pixel_55_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_b_din() {
    strm_in_V_pixel_55_b_din = src_V_pixel_55_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_b_write() {
    strm_in_V_pixel_55_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_55_g_blk_n = strm_in_V_pixel_55_g_full_n.read();
    } else {
        strm_in_V_pixel_55_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_g_din() {
    strm_in_V_pixel_55_g_din = src_V_pixel_55_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_g_write() {
    strm_in_V_pixel_55_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_55_r_blk_n = strm_in_V_pixel_55_r_full_n.read();
    } else {
        strm_in_V_pixel_55_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_r_din() {
    strm_in_V_pixel_55_r_din = src_V_pixel_55_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_55_r_write() {
    strm_in_V_pixel_55_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_56_b_blk_n = strm_in_V_pixel_56_b_full_n.read();
    } else {
        strm_in_V_pixel_56_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_b_din() {
    strm_in_V_pixel_56_b_din = src_V_pixel_56_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_b_write() {
    strm_in_V_pixel_56_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_56_g_blk_n = strm_in_V_pixel_56_g_full_n.read();
    } else {
        strm_in_V_pixel_56_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_g_din() {
    strm_in_V_pixel_56_g_din = src_V_pixel_56_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_g_write() {
    strm_in_V_pixel_56_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_56_r_blk_n = strm_in_V_pixel_56_r_full_n.read();
    } else {
        strm_in_V_pixel_56_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_r_din() {
    strm_in_V_pixel_56_r_din = src_V_pixel_56_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_56_r_write() {
    strm_in_V_pixel_56_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_57_b_blk_n = strm_in_V_pixel_57_b_full_n.read();
    } else {
        strm_in_V_pixel_57_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_b_din() {
    strm_in_V_pixel_57_b_din = src_V_pixel_57_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_b_write() {
    strm_in_V_pixel_57_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_57_g_blk_n = strm_in_V_pixel_57_g_full_n.read();
    } else {
        strm_in_V_pixel_57_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_g_din() {
    strm_in_V_pixel_57_g_din = src_V_pixel_57_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_g_write() {
    strm_in_V_pixel_57_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_57_r_blk_n = strm_in_V_pixel_57_r_full_n.read();
    } else {
        strm_in_V_pixel_57_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_r_din() {
    strm_in_V_pixel_57_r_din = src_V_pixel_57_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_57_r_write() {
    strm_in_V_pixel_57_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_58_b_blk_n = strm_in_V_pixel_58_b_full_n.read();
    } else {
        strm_in_V_pixel_58_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_b_din() {
    strm_in_V_pixel_58_b_din = src_V_pixel_58_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_b_write() {
    strm_in_V_pixel_58_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_58_g_blk_n = strm_in_V_pixel_58_g_full_n.read();
    } else {
        strm_in_V_pixel_58_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_g_din() {
    strm_in_V_pixel_58_g_din = src_V_pixel_58_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_g_write() {
    strm_in_V_pixel_58_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_58_r_blk_n = strm_in_V_pixel_58_r_full_n.read();
    } else {
        strm_in_V_pixel_58_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_r_din() {
    strm_in_V_pixel_58_r_din = src_V_pixel_58_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_58_r_write() {
    strm_in_V_pixel_58_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_59_b_blk_n = strm_in_V_pixel_59_b_full_n.read();
    } else {
        strm_in_V_pixel_59_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_b_din() {
    strm_in_V_pixel_59_b_din = src_V_pixel_59_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_b_write() {
    strm_in_V_pixel_59_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_59_g_blk_n = strm_in_V_pixel_59_g_full_n.read();
    } else {
        strm_in_V_pixel_59_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_g_din() {
    strm_in_V_pixel_59_g_din = src_V_pixel_59_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_g_write() {
    strm_in_V_pixel_59_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_59_r_blk_n = strm_in_V_pixel_59_r_full_n.read();
    } else {
        strm_in_V_pixel_59_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_r_din() {
    strm_in_V_pixel_59_r_din = src_V_pixel_59_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_59_r_write() {
    strm_in_V_pixel_59_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_5_b_blk_n = strm_in_V_pixel_5_b_full_n.read();
    } else {
        strm_in_V_pixel_5_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_b_din() {
    strm_in_V_pixel_5_b_din = src_V_pixel_5_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_b_write() {
    strm_in_V_pixel_5_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_5_g_blk_n = strm_in_V_pixel_5_g_full_n.read();
    } else {
        strm_in_V_pixel_5_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_g_din() {
    strm_in_V_pixel_5_g_din = src_V_pixel_5_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_g_write() {
    strm_in_V_pixel_5_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_5_r_blk_n = strm_in_V_pixel_5_r_full_n.read();
    } else {
        strm_in_V_pixel_5_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_r_din() {
    strm_in_V_pixel_5_r_din = src_V_pixel_5_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_5_r_write() {
    strm_in_V_pixel_5_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_60_b_blk_n = strm_in_V_pixel_60_b_full_n.read();
    } else {
        strm_in_V_pixel_60_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_b_din() {
    strm_in_V_pixel_60_b_din = src_V_pixel_60_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_b_write() {
    strm_in_V_pixel_60_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_60_g_blk_n = strm_in_V_pixel_60_g_full_n.read();
    } else {
        strm_in_V_pixel_60_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_g_din() {
    strm_in_V_pixel_60_g_din = src_V_pixel_60_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_g_write() {
    strm_in_V_pixel_60_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_60_r_blk_n = strm_in_V_pixel_60_r_full_n.read();
    } else {
        strm_in_V_pixel_60_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_r_din() {
    strm_in_V_pixel_60_r_din = src_V_pixel_60_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_60_r_write() {
    strm_in_V_pixel_60_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_61_b_blk_n = strm_in_V_pixel_61_b_full_n.read();
    } else {
        strm_in_V_pixel_61_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_b_din() {
    strm_in_V_pixel_61_b_din = src_V_pixel_61_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_b_write() {
    strm_in_V_pixel_61_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_61_g_blk_n = strm_in_V_pixel_61_g_full_n.read();
    } else {
        strm_in_V_pixel_61_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_g_din() {
    strm_in_V_pixel_61_g_din = src_V_pixel_61_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_g_write() {
    strm_in_V_pixel_61_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_61_r_blk_n = strm_in_V_pixel_61_r_full_n.read();
    } else {
        strm_in_V_pixel_61_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_r_din() {
    strm_in_V_pixel_61_r_din = src_V_pixel_61_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_61_r_write() {
    strm_in_V_pixel_61_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_62_b_blk_n = strm_in_V_pixel_62_b_full_n.read();
    } else {
        strm_in_V_pixel_62_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_b_din() {
    strm_in_V_pixel_62_b_din = src_V_pixel_62_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_b_write() {
    strm_in_V_pixel_62_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_62_g_blk_n = strm_in_V_pixel_62_g_full_n.read();
    } else {
        strm_in_V_pixel_62_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_g_din() {
    strm_in_V_pixel_62_g_din = src_V_pixel_62_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_g_write() {
    strm_in_V_pixel_62_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_62_r_blk_n = strm_in_V_pixel_62_r_full_n.read();
    } else {
        strm_in_V_pixel_62_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_r_din() {
    strm_in_V_pixel_62_r_din = src_V_pixel_62_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_62_r_write() {
    strm_in_V_pixel_62_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_63_b_blk_n = strm_in_V_pixel_63_b_full_n.read();
    } else {
        strm_in_V_pixel_63_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_b_din() {
    strm_in_V_pixel_63_b_din = src_V_pixel_63_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_b_write() {
    strm_in_V_pixel_63_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_63_g_blk_n = strm_in_V_pixel_63_g_full_n.read();
    } else {
        strm_in_V_pixel_63_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_g_din() {
    strm_in_V_pixel_63_g_din = src_V_pixel_63_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_g_write() {
    strm_in_V_pixel_63_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_63_r_blk_n = strm_in_V_pixel_63_r_full_n.read();
    } else {
        strm_in_V_pixel_63_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_r_din() {
    strm_in_V_pixel_63_r_din = src_V_pixel_63_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_63_r_write() {
    strm_in_V_pixel_63_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_64_b_blk_n = strm_in_V_pixel_64_b_full_n.read();
    } else {
        strm_in_V_pixel_64_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_b_din() {
    strm_in_V_pixel_64_b_din = src_V_pixel_64_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_b_write() {
    strm_in_V_pixel_64_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_64_g_blk_n = strm_in_V_pixel_64_g_full_n.read();
    } else {
        strm_in_V_pixel_64_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_g_din() {
    strm_in_V_pixel_64_g_din = src_V_pixel_64_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_g_write() {
    strm_in_V_pixel_64_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_64_r_blk_n = strm_in_V_pixel_64_r_full_n.read();
    } else {
        strm_in_V_pixel_64_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_r_din() {
    strm_in_V_pixel_64_r_din = src_V_pixel_64_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_64_r_write() {
    strm_in_V_pixel_64_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_65_b_blk_n = strm_in_V_pixel_65_b_full_n.read();
    } else {
        strm_in_V_pixel_65_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_b_din() {
    strm_in_V_pixel_65_b_din = src_V_pixel_65_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_b_write() {
    strm_in_V_pixel_65_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_65_g_blk_n = strm_in_V_pixel_65_g_full_n.read();
    } else {
        strm_in_V_pixel_65_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_g_din() {
    strm_in_V_pixel_65_g_din = src_V_pixel_65_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_g_write() {
    strm_in_V_pixel_65_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_65_r_blk_n = strm_in_V_pixel_65_r_full_n.read();
    } else {
        strm_in_V_pixel_65_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_r_din() {
    strm_in_V_pixel_65_r_din = src_V_pixel_65_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_65_r_write() {
    strm_in_V_pixel_65_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_66_b_blk_n = strm_in_V_pixel_66_b_full_n.read();
    } else {
        strm_in_V_pixel_66_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_b_din() {
    strm_in_V_pixel_66_b_din = src_V_pixel_66_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_b_write() {
    strm_in_V_pixel_66_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_66_g_blk_n = strm_in_V_pixel_66_g_full_n.read();
    } else {
        strm_in_V_pixel_66_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_g_din() {
    strm_in_V_pixel_66_g_din = src_V_pixel_66_g_TDATA.read();
}

}

