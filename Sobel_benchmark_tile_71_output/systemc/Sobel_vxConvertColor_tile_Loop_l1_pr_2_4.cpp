#include "Sobel_vxConvertColor_tile_Loop_l1_pr_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_g_write() {
    strm_in_V_pixel_66_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_66_r_blk_n = strm_in_V_pixel_66_r_full_n.read();
    } else {
        strm_in_V_pixel_66_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_r_din() {
    strm_in_V_pixel_66_r_din = src_V_pixel_66_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_66_r_write() {
    strm_in_V_pixel_66_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_67_b_blk_n = strm_in_V_pixel_67_b_full_n.read();
    } else {
        strm_in_V_pixel_67_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_b_din() {
    strm_in_V_pixel_67_b_din = src_V_pixel_67_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_b_write() {
    strm_in_V_pixel_67_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_67_g_blk_n = strm_in_V_pixel_67_g_full_n.read();
    } else {
        strm_in_V_pixel_67_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_g_din() {
    strm_in_V_pixel_67_g_din = src_V_pixel_67_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_g_write() {
    strm_in_V_pixel_67_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_67_r_blk_n = strm_in_V_pixel_67_r_full_n.read();
    } else {
        strm_in_V_pixel_67_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_r_din() {
    strm_in_V_pixel_67_r_din = src_V_pixel_67_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_67_r_write() {
    strm_in_V_pixel_67_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_68_b_blk_n = strm_in_V_pixel_68_b_full_n.read();
    } else {
        strm_in_V_pixel_68_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_b_din() {
    strm_in_V_pixel_68_b_din = src_V_pixel_68_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_b_write() {
    strm_in_V_pixel_68_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_68_g_blk_n = strm_in_V_pixel_68_g_full_n.read();
    } else {
        strm_in_V_pixel_68_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_g_din() {
    strm_in_V_pixel_68_g_din = src_V_pixel_68_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_g_write() {
    strm_in_V_pixel_68_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_68_r_blk_n = strm_in_V_pixel_68_r_full_n.read();
    } else {
        strm_in_V_pixel_68_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_r_din() {
    strm_in_V_pixel_68_r_din = src_V_pixel_68_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_68_r_write() {
    strm_in_V_pixel_68_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_69_b_blk_n = strm_in_V_pixel_69_b_full_n.read();
    } else {
        strm_in_V_pixel_69_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_b_din() {
    strm_in_V_pixel_69_b_din = src_V_pixel_69_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_b_write() {
    strm_in_V_pixel_69_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_69_g_blk_n = strm_in_V_pixel_69_g_full_n.read();
    } else {
        strm_in_V_pixel_69_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_g_din() {
    strm_in_V_pixel_69_g_din = src_V_pixel_69_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_g_write() {
    strm_in_V_pixel_69_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_69_r_blk_n = strm_in_V_pixel_69_r_full_n.read();
    } else {
        strm_in_V_pixel_69_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_r_din() {
    strm_in_V_pixel_69_r_din = src_V_pixel_69_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_69_r_write() {
    strm_in_V_pixel_69_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_6_b_blk_n = strm_in_V_pixel_6_b_full_n.read();
    } else {
        strm_in_V_pixel_6_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_b_din() {
    strm_in_V_pixel_6_b_din = src_V_pixel_6_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_b_write() {
    strm_in_V_pixel_6_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_6_g_blk_n = strm_in_V_pixel_6_g_full_n.read();
    } else {
        strm_in_V_pixel_6_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_g_din() {
    strm_in_V_pixel_6_g_din = src_V_pixel_6_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_g_write() {
    strm_in_V_pixel_6_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_6_r_blk_n = strm_in_V_pixel_6_r_full_n.read();
    } else {
        strm_in_V_pixel_6_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_r_din() {
    strm_in_V_pixel_6_r_din = src_V_pixel_6_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_6_r_write() {
    strm_in_V_pixel_6_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_70_b_blk_n = strm_in_V_pixel_70_b_full_n.read();
    } else {
        strm_in_V_pixel_70_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_b_din() {
    strm_in_V_pixel_70_b_din = src_V_pixel_70_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_b_write() {
    strm_in_V_pixel_70_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_70_g_blk_n = strm_in_V_pixel_70_g_full_n.read();
    } else {
        strm_in_V_pixel_70_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_g_din() {
    strm_in_V_pixel_70_g_din = src_V_pixel_70_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_g_write() {
    strm_in_V_pixel_70_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_70_r_blk_n = strm_in_V_pixel_70_r_full_n.read();
    } else {
        strm_in_V_pixel_70_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_r_din() {
    strm_in_V_pixel_70_r_din = src_V_pixel_70_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_70_r_write() {
    strm_in_V_pixel_70_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_7_b_blk_n = strm_in_V_pixel_7_b_full_n.read();
    } else {
        strm_in_V_pixel_7_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_b_din() {
    strm_in_V_pixel_7_b_din = src_V_pixel_7_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_b_write() {
    strm_in_V_pixel_7_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_7_g_blk_n = strm_in_V_pixel_7_g_full_n.read();
    } else {
        strm_in_V_pixel_7_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_g_din() {
    strm_in_V_pixel_7_g_din = src_V_pixel_7_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_g_write() {
    strm_in_V_pixel_7_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_7_r_blk_n = strm_in_V_pixel_7_r_full_n.read();
    } else {
        strm_in_V_pixel_7_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_r_din() {
    strm_in_V_pixel_7_r_din = src_V_pixel_7_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_7_r_write() {
    strm_in_V_pixel_7_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_b1_status() {
    strm_in_V_pixel_8_b1_status = (strm_in_V_pixel_0_r_full_n.read() & strm_in_V_pixel_1_r_full_n.read() & strm_in_V_pixel_2_r_full_n.read() & strm_in_V_pixel_3_r_full_n.read() & strm_in_V_pixel_4_r_full_n.read() & strm_in_V_pixel_5_r_full_n.read() & strm_in_V_pixel_6_r_full_n.read() & strm_in_V_pixel_7_r_full_n.read() & strm_in_V_pixel_8_r_full_n.read() & strm_in_V_pixel_9_r_full_n.read() & strm_in_V_pixel_10_r_full_n.read() & strm_in_V_pixel_11_r_full_n.read() & strm_in_V_pixel_12_r_full_n.read() & strm_in_V_pixel_13_r_full_n.read() & strm_in_V_pixel_14_r_full_n.read() & strm_in_V_pixel_15_r_full_n.read() & strm_in_V_pixel_16_r_full_n.read() & strm_in_V_pixel_17_r_full_n.read() & strm_in_V_pixel_18_r_full_n.read() & strm_in_V_pixel_19_r_full_n.read() & strm_in_V_pixel_20_r_full_n.read() & strm_in_V_pixel_21_r_full_n.read() & strm_in_V_pixel_22_r_full_n.read() & strm_in_V_pixel_23_r_full_n.read() & strm_in_V_pixel_24_r_full_n.read() & strm_in_V_pixel_25_r_full_n.read() & strm_in_V_pixel_26_r_full_n.read() & strm_in_V_pixel_27_r_full_n.read() & strm_in_V_pixel_28_r_full_n.read() & strm_in_V_pixel_29_r_full_n.read() & strm_in_V_pixel_30_r_full_n.read() & strm_in_V_pixel_31_r_full_n.read() & strm_in_V_pixel_32_r_full_n.read() & strm_in_V_pixel_33_r_full_n.read() & strm_in_V_pixel_34_r_full_n.read() & strm_in_V_pixel_35_r_full_n.read() & strm_in_V_pixel_36_r_full_n.read() & strm_in_V_pixel_37_r_full_n.read() & strm_in_V_pixel_38_r_full_n.read() & strm_in_V_pixel_39_r_full_n.read() & strm_in_V_pixel_40_r_full_n.read() & strm_in_V_pixel_41_r_full_n.read() & strm_in_V_pixel_42_r_full_n.read() & strm_in_V_pixel_43_r_full_n.read() & strm_in_V_pixel_44_r_full_n.read() & strm_in_V_pixel_45_r_full_n.read() & strm_in_V_pixel_46_r_full_n.read() & strm_in_V_pixel_47_r_full_n.read() & strm_in_V_pixel_48_r_full_n.read() & strm_in_V_pixel_49_r_full_n.read() & strm_in_V_pixel_50_r_full_n.read() & strm_in_V_pixel_51_r_full_n.read() & strm_in_V_pixel_52_r_full_n.read() & strm_in_V_pixel_53_r_full_n.read() & strm_in_V_pixel_54_r_full_n.read() & strm_in_V_pixel_55_r_full_n.read() & strm_in_V_pixel_56_r_full_n.read() & strm_in_V_pixel_57_r_full_n.read() & strm_in_V_pixel_58_r_full_n.read() & strm_in_V_pixel_59_r_full_n.read() & strm_in_V_pixel_60_r_full_n.read() & strm_in_V_pixel_61_r_full_n.read() & strm_in_V_pixel_62_r_full_n.read() & strm_in_V_pixel_63_r_full_n.read() & strm_in_V_pixel_64_r_full_n.read() & strm_in_V_pixel_65_r_full_n.read() & strm_in_V_pixel_66_r_full_n.read() & strm_in_V_pixel_67_r_full_n.read() & strm_in_V_pixel_68_r_full_n.read() & strm_in_V_pixel_69_r_full_n.read() & strm_in_V_pixel_70_r_full_n.read() & strm_in_V_pixel_0_g_full_n.read() & strm_in_V_pixel_1_g_full_n.read() & strm_in_V_pixel_2_g_full_n.read() & strm_in_V_pixel_3_g_full_n.read() & strm_in_V_pixel_4_g_full_n.read() & strm_in_V_pixel_5_g_full_n.read() & strm_in_V_pixel_6_g_full_n.read() & strm_in_V_pixel_7_g_full_n.read() & strm_in_V_pixel_8_g_full_n.read() & strm_in_V_pixel_9_g_full_n.read() & strm_in_V_pixel_10_g_full_n.read() & strm_in_V_pixel_11_g_full_n.read() & strm_in_V_pixel_12_g_full_n.read() & strm_in_V_pixel_13_g_full_n.read() & strm_in_V_pixel_14_g_full_n.read() & strm_in_V_pixel_15_g_full_n.read() & strm_in_V_pixel_16_g_full_n.read() & strm_in_V_pixel_17_g_full_n.read() & strm_in_V_pixel_18_g_full_n.read() & strm_in_V_pixel_19_g_full_n.read() & strm_in_V_pixel_20_g_full_n.read() & strm_in_V_pixel_21_g_full_n.read() & strm_in_V_pixel_22_g_full_n.read() & strm_in_V_pixel_23_g_full_n.read() & strm_in_V_pixel_24_g_full_n.read() & strm_in_V_pixel_25_g_full_n.read() & strm_in_V_pixel_26_g_full_n.read() & strm_in_V_pixel_27_g_full_n.read() & strm_in_V_pixel_28_g_full_n.read() & strm_in_V_pixel_29_g_full_n.read() & strm_in_V_pixel_30_g_full_n.read() & strm_in_V_pixel_31_g_full_n.read() & strm_in_V_pixel_32_g_full_n.read() & strm_in_V_pixel_33_g_full_n.read() & strm_in_V_pixel_34_g_full_n.read() & strm_in_V_pixel_35_g_full_n.read() & strm_in_V_pixel_36_g_full_n.read() & strm_in_V_pixel_37_g_full_n.read() & strm_in_V_pixel_38_g_full_n.read() & strm_in_V_pixel_39_g_full_n.read() & strm_in_V_pixel_40_g_full_n.read() & strm_in_V_pixel_41_g_full_n.read() & strm_in_V_pixel_42_g_full_n.read() & strm_in_V_pixel_43_g_full_n.read() & strm_in_V_pixel_44_g_full_n.read() & strm_in_V_pixel_45_g_full_n.read() & strm_in_V_pixel_46_g_full_n.read() & strm_in_V_pixel_47_g_full_n.read() & strm_in_V_pixel_48_g_full_n.read() & strm_in_V_pixel_49_g_full_n.read() & strm_in_V_pixel_50_g_full_n.read() & strm_in_V_pixel_51_g_full_n.read() & strm_in_V_pixel_52_g_full_n.read() & strm_in_V_pixel_53_g_full_n.read() & strm_in_V_pixel_54_g_full_n.read() & strm_in_V_pixel_55_g_full_n.read() & strm_in_V_pixel_56_g_full_n.read() & strm_in_V_pixel_57_g_full_n.read() & strm_in_V_pixel_58_g_full_n.read() & strm_in_V_pixel_59_g_full_n.read() & strm_in_V_pixel_60_g_full_n.read() & strm_in_V_pixel_61_g_full_n.read() & strm_in_V_pixel_62_g_full_n.read() & strm_in_V_pixel_63_g_full_n.read() & strm_in_V_pixel_64_g_full_n.read() & strm_in_V_pixel_65_g_full_n.read() & strm_in_V_pixel_66_g_full_n.read() & strm_in_V_pixel_67_g_full_n.read() & strm_in_V_pixel_68_g_full_n.read() & strm_in_V_pixel_69_g_full_n.read() & strm_in_V_pixel_70_g_full_n.read() & strm_in_V_pixel_0_b_full_n.read() & strm_in_V_pixel_1_b_full_n.read() & strm_in_V_pixel_2_b_full_n.read() & strm_in_V_pixel_3_b_full_n.read() & strm_in_V_pixel_4_b_full_n.read() & strm_in_V_pixel_5_b_full_n.read() & strm_in_V_pixel_6_b_full_n.read() & strm_in_V_pixel_7_b_full_n.read() & strm_in_V_pixel_8_b_full_n.read() & strm_in_V_pixel_9_b_full_n.read() & strm_in_V_pixel_10_b_full_n.read() & strm_in_V_pixel_11_b_full_n.read() & strm_in_V_pixel_12_b_full_n.read() & strm_in_V_pixel_13_b_full_n.read() & strm_in_V_pixel_14_b_full_n.read() & strm_in_V_pixel_15_b_full_n.read() & strm_in_V_pixel_16_b_full_n.read() & strm_in_V_pixel_17_b_full_n.read() & strm_in_V_pixel_18_b_full_n.read() & strm_in_V_pixel_19_b_full_n.read() & strm_in_V_pixel_20_b_full_n.read() & strm_in_V_pixel_21_b_full_n.read() & strm_in_V_pixel_22_b_full_n.read() & strm_in_V_pixel_23_b_full_n.read() & strm_in_V_pixel_24_b_full_n.read() & strm_in_V_pixel_25_b_full_n.read() & strm_in_V_pixel_26_b_full_n.read() & strm_in_V_pixel_27_b_full_n.read() & strm_in_V_pixel_28_b_full_n.read() & strm_in_V_pixel_29_b_full_n.read() & strm_in_V_pixel_30_b_full_n.read() & strm_in_V_pixel_31_b_full_n.read() & strm_in_V_pixel_32_b_full_n.read() & strm_in_V_pixel_33_b_full_n.read() & strm_in_V_pixel_34_b_full_n.read() & strm_in_V_pixel_35_b_full_n.read() & strm_in_V_pixel_36_b_full_n.read() & strm_in_V_pixel_37_b_full_n.read() & strm_in_V_pixel_38_b_full_n.read() & strm_in_V_pixel_39_b_full_n.read() & strm_in_V_pixel_40_b_full_n.read() & strm_in_V_pixel_41_b_full_n.read() & strm_in_V_pixel_42_b_full_n.read() & strm_in_V_pixel_43_b_full_n.read() & strm_in_V_pixel_44_b_full_n.read() & strm_in_V_pixel_45_b_full_n.read() & strm_in_V_pixel_46_b_full_n.read() & strm_in_V_pixel_47_b_full_n.read() & strm_in_V_pixel_48_b_full_n.read() & strm_in_V_pixel_49_b_full_n.read() & strm_in_V_pixel_50_b_full_n.read() & strm_in_V_pixel_51_b_full_n.read() & strm_in_V_pixel_52_b_full_n.read() & strm_in_V_pixel_53_b_full_n.read() & strm_in_V_pixel_54_b_full_n.read() & strm_in_V_pixel_55_b_full_n.read() & strm_in_V_pixel_56_b_full_n.read() & strm_in_V_pixel_57_b_full_n.read() & strm_in_V_pixel_58_b_full_n.read() & strm_in_V_pixel_59_b_full_n.read() & strm_in_V_pixel_60_b_full_n.read() & strm_in_V_pixel_61_b_full_n.read() & strm_in_V_pixel_62_b_full_n.read() & strm_in_V_pixel_63_b_full_n.read() & strm_in_V_pixel_64_b_full_n.read() & strm_in_V_pixel_65_b_full_n.read() & strm_in_V_pixel_66_b_full_n.read() & strm_in_V_pixel_67_b_full_n.read() & strm_in_V_pixel_68_b_full_n.read() & strm_in_V_pixel_69_b_full_n.read() & strm_in_V_pixel_70_b_full_n.read());
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_b1_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0) && 
         !ap_sig_1963.read())) {
        strm_in_V_pixel_8_b1_update = ap_const_logic_1;
    } else {
        strm_in_V_pixel_8_b1_update = ap_const_logic_0;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_8_b_blk_n = strm_in_V_pixel_8_b_full_n.read();
    } else {
        strm_in_V_pixel_8_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_b_din() {
    strm_in_V_pixel_8_b_din = src_V_pixel_8_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_b_write() {
    strm_in_V_pixel_8_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_8_g_blk_n = strm_in_V_pixel_8_g_full_n.read();
    } else {
        strm_in_V_pixel_8_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_g_din() {
    strm_in_V_pixel_8_g_din = src_V_pixel_8_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_g_write() {
    strm_in_V_pixel_8_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_8_r_blk_n = strm_in_V_pixel_8_r_full_n.read();
    } else {
        strm_in_V_pixel_8_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_r_din() {
    strm_in_V_pixel_8_r_din = src_V_pixel_8_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_8_r_write() {
    strm_in_V_pixel_8_r_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_b_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_9_b_blk_n = strm_in_V_pixel_9_b_full_n.read();
    } else {
        strm_in_V_pixel_9_b_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_b_din() {
    strm_in_V_pixel_9_b_din = src_V_pixel_9_b_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_b_write() {
    strm_in_V_pixel_9_b_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_g_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_9_g_blk_n = strm_in_V_pixel_9_g_full_n.read();
    } else {
        strm_in_V_pixel_9_g_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_g_din() {
    strm_in_V_pixel_9_g_din = src_V_pixel_9_g_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_g_write() {
    strm_in_V_pixel_9_g_write = strm_in_V_pixel_8_b1_update.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_r_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond4_i_i_fu_3672_p2.read(), ap_const_lv1_0))) {
        strm_in_V_pixel_9_r_blk_n = strm_in_V_pixel_9_r_full_n.read();
    } else {
        strm_in_V_pixel_9_r_blk_n = ap_const_logic_1;
    }
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_r_din() {
    strm_in_V_pixel_9_r_din = src_V_pixel_9_r_TDATA.read();
}

void Sobel_vxConvertColor_tile_Loop_l1_pr_2::thread_strm_in_V_pixel_9_r_write() {
    strm_in_V_pixel_9_r_write = strm_in_V_pixel_8_b1_update.read();
}

}

