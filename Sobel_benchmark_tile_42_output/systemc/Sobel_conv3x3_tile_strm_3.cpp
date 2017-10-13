#include "Sobel_conv3x3_tile_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_21() {
    ap_sig_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_378() {
    ap_sig_378 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_486() {
    ap_sig_486 = (esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(src_V_pixel_10_status.read(), ap_const_logic_0));
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_491() {
    ap_sig_491 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()) && esl_seteq<1,1,1>(dst_V_pixel_11_status.read(), ap_const_logic_0));
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_6604() {
    ap_sig_6604 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_680() {
    ap_sig_680 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_378.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_21.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_sig_cseq_ST_st5_fsm_2() {
    if (ap_sig_6604.read()) {
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_0_blk_n = dst_V_pixel_0_full_n.read();
    } else {
        dst_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_0_din() {
    dst_V_pixel_0_din = (!tmp_s_fu_6198_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_s_fu_6198_p2.read()[0].to_bool())? v_1_fu_6190_p3.read(): tmp_1142_fu_6187_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_0_write() {
    dst_V_pixel_0_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_10_blk_n = dst_V_pixel_10_full_n.read();
    } else {
        dst_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_10_din() {
    dst_V_pixel_10_din = (!tmp_942_fu_6578_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_942_fu_6578_p2.read()[0].to_bool())? v_1_10_fu_6570_p3.read(): tmp_1172_fu_6567_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_10_write() {
    dst_V_pixel_10_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_11_blk_n = dst_V_pixel_11_full_n.read();
    } else {
        dst_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_11_din() {
    dst_V_pixel_11_din = (!tmp_943_fu_6616_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_943_fu_6616_p2.read()[0].to_bool())? v_1_11_fu_6608_p3.read(): tmp_1175_fu_6605_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_11_status() {
    dst_V_pixel_11_status = (dst_V_pixel_0_full_n.read() & dst_V_pixel_1_full_n.read() & dst_V_pixel_2_full_n.read() & dst_V_pixel_3_full_n.read() & dst_V_pixel_4_full_n.read() & dst_V_pixel_5_full_n.read() & dst_V_pixel_6_full_n.read() & dst_V_pixel_7_full_n.read() & dst_V_pixel_8_full_n.read() & dst_V_pixel_9_full_n.read() & dst_V_pixel_10_full_n.read() & dst_V_pixel_11_full_n.read() & dst_V_pixel_12_full_n.read() & dst_V_pixel_13_full_n.read() & dst_V_pixel_14_full_n.read() & dst_V_pixel_15_full_n.read() & dst_V_pixel_16_full_n.read() & dst_V_pixel_17_full_n.read() & dst_V_pixel_18_full_n.read() & dst_V_pixel_19_full_n.read() & dst_V_pixel_20_full_n.read() & dst_V_pixel_21_full_n.read() & dst_V_pixel_22_full_n.read() & dst_V_pixel_23_full_n.read() & dst_V_pixel_24_full_n.read() & dst_V_pixel_25_full_n.read() & dst_V_pixel_26_full_n.read() & dst_V_pixel_27_full_n.read() & dst_V_pixel_28_full_n.read() & dst_V_pixel_29_full_n.read() & dst_V_pixel_30_full_n.read() & dst_V_pixel_31_full_n.read() & dst_V_pixel_32_full_n.read() & dst_V_pixel_33_full_n.read() & dst_V_pixel_34_full_n.read() & dst_V_pixel_35_full_n.read() & dst_V_pixel_36_full_n.read() & dst_V_pixel_37_full_n.read() & dst_V_pixel_38_full_n.read() & dst_V_pixel_39_full_n.read() & dst_V_pixel_40_full_n.read() & dst_V_pixel_41_full_n.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_11_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
        dst_V_pixel_11_update = ap_const_logic_1;
    } else {
        dst_V_pixel_11_update = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_11_write() {
    dst_V_pixel_11_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_12_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_12_blk_n = dst_V_pixel_12_full_n.read();
    } else {
        dst_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_12_din() {
    dst_V_pixel_12_din = (!tmp_944_fu_6654_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_944_fu_6654_p2.read()[0].to_bool())? v_1_12_fu_6646_p3.read(): tmp_1178_fu_6643_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_12_write() {
    dst_V_pixel_12_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_13_blk_n = dst_V_pixel_13_full_n.read();
    } else {
        dst_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_13_din() {
    dst_V_pixel_13_din = (!tmp_945_fu_6692_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_945_fu_6692_p2.read()[0].to_bool())? v_1_13_fu_6684_p3.read(): tmp_1181_fu_6681_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_13_write() {
    dst_V_pixel_13_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_14_blk_n = dst_V_pixel_14_full_n.read();
    } else {
        dst_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_14_din() {
    dst_V_pixel_14_din = (!tmp_946_fu_6730_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_946_fu_6730_p2.read()[0].to_bool())? v_1_14_fu_6722_p3.read(): tmp_1184_fu_6719_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_14_write() {
    dst_V_pixel_14_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_15_blk_n = dst_V_pixel_15_full_n.read();
    } else {
        dst_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_15_din() {
    dst_V_pixel_15_din = (!tmp_947_fu_6768_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_947_fu_6768_p2.read()[0].to_bool())? v_1_15_fu_6760_p3.read(): tmp_1187_fu_6757_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_15_write() {
    dst_V_pixel_15_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_16_blk_n = dst_V_pixel_16_full_n.read();
    } else {
        dst_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_16_din() {
    dst_V_pixel_16_din = (!tmp_948_fu_6806_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_948_fu_6806_p2.read()[0].to_bool())? v_1_16_fu_6798_p3.read(): tmp_1190_fu_6795_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_16_write() {
    dst_V_pixel_16_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_17_blk_n = dst_V_pixel_17_full_n.read();
    } else {
        dst_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_17_din() {
    dst_V_pixel_17_din = (!tmp_949_fu_6844_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_949_fu_6844_p2.read()[0].to_bool())? v_1_17_fu_6836_p3.read(): tmp_1193_fu_6833_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_17_write() {
    dst_V_pixel_17_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_18_blk_n = dst_V_pixel_18_full_n.read();
    } else {
        dst_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_18_din() {
    dst_V_pixel_18_din = (!tmp_950_fu_6882_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_950_fu_6882_p2.read()[0].to_bool())? v_1_18_fu_6874_p3.read(): tmp_1196_fu_6871_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_18_write() {
    dst_V_pixel_18_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_19_blk_n = dst_V_pixel_19_full_n.read();
    } else {
        dst_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_19_din() {
    dst_V_pixel_19_din = (!tmp_951_fu_6920_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_951_fu_6920_p2.read()[0].to_bool())? v_1_19_fu_6912_p3.read(): tmp_1199_fu_6909_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_19_write() {
    dst_V_pixel_19_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_1_blk_n = dst_V_pixel_1_full_n.read();
    } else {
        dst_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_1_din() {
    dst_V_pixel_1_din = (!tmp_933_fu_6236_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_933_fu_6236_p2.read()[0].to_bool())? v_1_1_fu_6228_p3.read(): tmp_1145_fu_6225_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_1_write() {
    dst_V_pixel_1_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_20_blk_n = dst_V_pixel_20_full_n.read();
    } else {
        dst_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_20_din() {
    dst_V_pixel_20_din = (!tmp_952_fu_6958_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_952_fu_6958_p2.read()[0].to_bool())? v_1_20_fu_6950_p3.read(): tmp_1202_fu_6947_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_20_write() {
    dst_V_pixel_20_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_21_blk_n = dst_V_pixel_21_full_n.read();
    } else {
        dst_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_21_din() {
    dst_V_pixel_21_din = (!tmp_953_fu_6996_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_953_fu_6996_p2.read()[0].to_bool())? v_1_21_fu_6988_p3.read(): tmp_1205_fu_6985_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_21_write() {
    dst_V_pixel_21_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_22_blk_n = dst_V_pixel_22_full_n.read();
    } else {
        dst_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_22_din() {
    dst_V_pixel_22_din = (!tmp_954_fu_7034_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_954_fu_7034_p2.read()[0].to_bool())? v_1_22_fu_7026_p3.read(): tmp_1208_fu_7023_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_22_write() {
    dst_V_pixel_22_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_23_blk_n = dst_V_pixel_23_full_n.read();
    } else {
        dst_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_23_din() {
    dst_V_pixel_23_din = (!tmp_955_fu_7072_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_955_fu_7072_p2.read()[0].to_bool())? v_1_23_fu_7064_p3.read(): tmp_1211_fu_7061_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_23_write() {
    dst_V_pixel_23_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_24_blk_n = dst_V_pixel_24_full_n.read();
    } else {
        dst_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_24_din() {
    dst_V_pixel_24_din = (!tmp_956_fu_7110_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_956_fu_7110_p2.read()[0].to_bool())? v_1_24_fu_7102_p3.read(): tmp_1214_fu_7099_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_24_write() {
    dst_V_pixel_24_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_25_blk_n = dst_V_pixel_25_full_n.read();
    } else {
        dst_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_25_din() {
    dst_V_pixel_25_din = (!tmp_957_fu_7148_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_957_fu_7148_p2.read()[0].to_bool())? v_1_25_fu_7140_p3.read(): tmp_1217_fu_7137_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_25_write() {
    dst_V_pixel_25_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_26_blk_n = dst_V_pixel_26_full_n.read();
    } else {
        dst_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_26_din() {
    dst_V_pixel_26_din = (!tmp_958_fu_7186_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_958_fu_7186_p2.read()[0].to_bool())? v_1_26_fu_7178_p3.read(): tmp_1220_fu_7175_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_26_write() {
    dst_V_pixel_26_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_27_blk_n = dst_V_pixel_27_full_n.read();
    } else {
        dst_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_27_din() {
    dst_V_pixel_27_din = (!tmp_959_fu_7224_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_959_fu_7224_p2.read()[0].to_bool())? v_1_27_fu_7216_p3.read(): tmp_1223_fu_7213_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_27_write() {
    dst_V_pixel_27_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_28_blk_n = dst_V_pixel_28_full_n.read();
    } else {
        dst_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_28_din() {
    dst_V_pixel_28_din = (!tmp_960_fu_7262_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_960_fu_7262_p2.read()[0].to_bool())? v_1_28_fu_7254_p3.read(): tmp_1226_fu_7251_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_28_write() {
    dst_V_pixel_28_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_29_blk_n = dst_V_pixel_29_full_n.read();
    } else {
        dst_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_29_din() {
    dst_V_pixel_29_din = (!tmp_961_fu_7300_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_961_fu_7300_p2.read()[0].to_bool())? v_1_29_fu_7292_p3.read(): tmp_1229_fu_7289_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_29_write() {
    dst_V_pixel_29_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_2_blk_n = dst_V_pixel_2_full_n.read();
    } else {
        dst_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_2_din() {
    dst_V_pixel_2_din = (!tmp_934_fu_6274_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_934_fu_6274_p2.read()[0].to_bool())? v_1_2_fu_6266_p3.read(): tmp_1148_fu_6263_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_2_write() {
    dst_V_pixel_2_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_30_blk_n = dst_V_pixel_30_full_n.read();
    } else {
        dst_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_30_din() {
    dst_V_pixel_30_din = (!tmp_962_fu_7338_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_962_fu_7338_p2.read()[0].to_bool())? v_1_30_fu_7330_p3.read(): tmp_1232_fu_7327_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_30_write() {
    dst_V_pixel_30_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_31_blk_n = dst_V_pixel_31_full_n.read();
    } else {
        dst_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_31_din() {
    dst_V_pixel_31_din = (!tmp_963_fu_7376_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_963_fu_7376_p2.read()[0].to_bool())? v_1_31_fu_7368_p3.read(): tmp_1235_fu_7365_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_31_write() {
    dst_V_pixel_31_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_32_blk_n = dst_V_pixel_32_full_n.read();
    } else {
        dst_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_32_din() {
    dst_V_pixel_32_din = (!tmp_964_fu_7414_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_964_fu_7414_p2.read()[0].to_bool())? v_1_32_fu_7406_p3.read(): tmp_1238_fu_7403_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_32_write() {
    dst_V_pixel_32_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_33_blk_n = dst_V_pixel_33_full_n.read();
    } else {
        dst_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_33_din() {
    dst_V_pixel_33_din = (!tmp_965_fu_7452_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_965_fu_7452_p2.read()[0].to_bool())? v_1_33_fu_7444_p3.read(): tmp_1241_fu_7441_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_33_write() {
    dst_V_pixel_33_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_34_blk_n = dst_V_pixel_34_full_n.read();
    } else {
        dst_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_34_din() {
    dst_V_pixel_34_din = (!tmp_966_fu_7490_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_966_fu_7490_p2.read()[0].to_bool())? v_1_34_fu_7482_p3.read(): tmp_1244_fu_7479_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_34_write() {
    dst_V_pixel_34_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_35_blk_n = dst_V_pixel_35_full_n.read();
    } else {
        dst_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_35_din() {
    dst_V_pixel_35_din = (!tmp_967_fu_7528_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_967_fu_7528_p2.read()[0].to_bool())? v_1_35_fu_7520_p3.read(): tmp_1247_fu_7517_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_35_write() {
    dst_V_pixel_35_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_36_blk_n = dst_V_pixel_36_full_n.read();
    } else {
        dst_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_36_din() {
    dst_V_pixel_36_din = (!tmp_968_fu_7566_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_968_fu_7566_p2.read()[0].to_bool())? v_1_36_fu_7558_p3.read(): tmp_1250_fu_7555_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_36_write() {
    dst_V_pixel_36_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_37_blk_n = dst_V_pixel_37_full_n.read();
    } else {
        dst_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_37_din() {
    dst_V_pixel_37_din = (!tmp_969_fu_7604_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_969_fu_7604_p2.read()[0].to_bool())? v_1_37_fu_7596_p3.read(): tmp_1253_fu_7593_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_37_write() {
    dst_V_pixel_37_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_38_blk_n = dst_V_pixel_38_full_n.read();
    } else {
        dst_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_38_din() {
    dst_V_pixel_38_din = (!tmp_970_fu_7642_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_970_fu_7642_p2.read()[0].to_bool())? v_1_38_fu_7634_p3.read(): tmp_1256_fu_7631_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_38_write() {
    dst_V_pixel_38_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_39_blk_n = dst_V_pixel_39_full_n.read();
    } else {
        dst_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_39_din() {
    dst_V_pixel_39_din = (!tmp_971_fu_7680_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_971_fu_7680_p2.read()[0].to_bool())? v_1_39_fu_7672_p3.read(): tmp_1259_fu_7669_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_39_write() {
    dst_V_pixel_39_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_3_blk_n = dst_V_pixel_3_full_n.read();
    } else {
        dst_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_3_din() {
    dst_V_pixel_3_din = (!tmp_935_fu_6312_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_935_fu_6312_p2.read()[0].to_bool())? v_1_3_fu_6304_p3.read(): tmp_1151_fu_6301_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_3_write() {
    dst_V_pixel_3_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_40_blk_n = dst_V_pixel_40_full_n.read();
    } else {
        dst_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_40_din() {
    dst_V_pixel_40_din = (!tmp_972_fu_7718_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_972_fu_7718_p2.read()[0].to_bool())? v_1_40_fu_7710_p3.read(): tmp_1262_fu_7707_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_40_write() {
    dst_V_pixel_40_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_41_blk_n = dst_V_pixel_41_full_n.read();
    } else {
        dst_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_41_din() {
    dst_V_pixel_41_din = (!tmp_973_fu_7756_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_973_fu_7756_p2.read()[0].to_bool())? v_1_s_fu_7748_p3.read(): tmp_1265_fu_7745_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_41_write() {
    dst_V_pixel_41_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_4_blk_n = dst_V_pixel_4_full_n.read();
    } else {
        dst_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_4_din() {
    dst_V_pixel_4_din = (!tmp_936_fu_6350_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_936_fu_6350_p2.read()[0].to_bool())? v_1_4_fu_6342_p3.read(): tmp_1154_fu_6339_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_4_write() {
    dst_V_pixel_4_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_5_blk_n = dst_V_pixel_5_full_n.read();
    } else {
        dst_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_5_din() {
    dst_V_pixel_5_din = (!tmp_937_fu_6388_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_937_fu_6388_p2.read()[0].to_bool())? v_1_5_fu_6380_p3.read(): tmp_1157_fu_6377_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_5_write() {
    dst_V_pixel_5_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_6_blk_n = dst_V_pixel_6_full_n.read();
    } else {
        dst_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_6_din() {
    dst_V_pixel_6_din = (!tmp_938_fu_6426_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_938_fu_6426_p2.read()[0].to_bool())? v_1_6_fu_6418_p3.read(): tmp_1160_fu_6415_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_6_write() {
    dst_V_pixel_6_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_7_blk_n = dst_V_pixel_7_full_n.read();
    } else {
        dst_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_7_din() {
    dst_V_pixel_7_din = (!tmp_939_fu_6464_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_939_fu_6464_p2.read()[0].to_bool())? v_1_7_fu_6456_p3.read(): tmp_1163_fu_6453_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_7_write() {
    dst_V_pixel_7_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_8_blk_n = dst_V_pixel_8_full_n.read();
    } else {
        dst_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_8_din() {
    dst_V_pixel_8_din = (!tmp_940_fu_6502_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_940_fu_6502_p2.read()[0].to_bool())? v_1_8_fu_6494_p3.read(): tmp_1166_fu_6491_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_8_write() {
    dst_V_pixel_8_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8352_pp0_iter1.read()))) {
        dst_V_pixel_9_blk_n = dst_V_pixel_9_full_n.read();
    } else {
        dst_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_9_din() {
    dst_V_pixel_9_din = (!tmp_941_fu_6540_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_941_fu_6540_p2.read()[0].to_bool())? v_1_9_fu_6532_p3.read(): tmp_1169_fu_6529_p1.read());
}

void Sobel_conv3x3_tile_strm::thread_dst_V_pixel_9_write() {
    dst_V_pixel_9_write = dst_V_pixel_11_update.read();
}

void Sobel_conv3x3_tile_strm::thread_exitcond1_fu_1507_p2() {
    exitcond1_fu_1507_p2 = (!x_reg_1496.read().is_01() || !ap_const_lv9_1E2.is_01())? sc_lv<1>(): sc_lv<1>(x_reg_1496.read() == ap_const_lv9_1E2);
}

void Sobel_conv3x3_tile_strm::thread_icmp12_fu_6251_p2() {
    icmp12_fu_6251_p2 = (!tmp_1146_reg_8384.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1146_reg_8384.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp17_fu_6289_p2() {
    icmp17_fu_6289_p2 = (!tmp_1149_reg_8395.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1149_reg_8395.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp22_fu_6327_p2() {
    icmp22_fu_6327_p2 = (!tmp_1152_reg_8406.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1152_reg_8406.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp27_fu_6365_p2() {
    icmp27_fu_6365_p2 = (!tmp_1155_reg_8417.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1155_reg_8417.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp32_fu_6403_p2() {
    icmp32_fu_6403_p2 = (!tmp_1158_reg_8428.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1158_reg_8428.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp37_fu_6441_p2() {
    icmp37_fu_6441_p2 = (!tmp_1161_reg_8439.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1161_reg_8439.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp3_fu_6175_p2() {
    icmp3_fu_6175_p2 = (!tmp_1140_reg_8362.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1140_reg_8362.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp42_fu_6479_p2() {
    icmp42_fu_6479_p2 = (!tmp_1164_reg_8450.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1164_reg_8450.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp43_fu_6517_p2() {
    icmp43_fu_6517_p2 = (!tmp_1167_reg_8461.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1167_reg_8461.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp44_fu_6555_p2() {
    icmp44_fu_6555_p2 = (!tmp_1170_reg_8472.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1170_reg_8472.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp45_fu_6593_p2() {
    icmp45_fu_6593_p2 = (!tmp_1173_reg_8483.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1173_reg_8483.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp46_fu_6631_p2() {
    icmp46_fu_6631_p2 = (!tmp_1176_reg_8494.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1176_reg_8494.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp47_fu_6669_p2() {
    icmp47_fu_6669_p2 = (!tmp_1179_reg_8505.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1179_reg_8505.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp48_fu_6707_p2() {
    icmp48_fu_6707_p2 = (!tmp_1182_reg_8516.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1182_reg_8516.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp49_fu_6745_p2() {
    icmp49_fu_6745_p2 = (!tmp_1185_reg_8527.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1185_reg_8527.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp50_fu_6783_p2() {
    icmp50_fu_6783_p2 = (!tmp_1188_reg_8538.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1188_reg_8538.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp51_fu_6821_p2() {
    icmp51_fu_6821_p2 = (!tmp_1191_reg_8549.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1191_reg_8549.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp52_fu_6859_p2() {
    icmp52_fu_6859_p2 = (!tmp_1194_reg_8560.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1194_reg_8560.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp53_fu_6897_p2() {
    icmp53_fu_6897_p2 = (!tmp_1197_reg_8571.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1197_reg_8571.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp54_fu_6935_p2() {
    icmp54_fu_6935_p2 = (!tmp_1200_reg_8582.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1200_reg_8582.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp55_fu_6973_p2() {
    icmp55_fu_6973_p2 = (!tmp_1203_reg_8593.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1203_reg_8593.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp56_fu_7011_p2() {
    icmp56_fu_7011_p2 = (!tmp_1206_reg_8604.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1206_reg_8604.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp57_fu_7049_p2() {
    icmp57_fu_7049_p2 = (!tmp_1209_reg_8615.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1209_reg_8615.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp58_fu_7087_p2() {
    icmp58_fu_7087_p2 = (!tmp_1212_reg_8626.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1212_reg_8626.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp59_fu_7125_p2() {
    icmp59_fu_7125_p2 = (!tmp_1215_reg_8637.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1215_reg_8637.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp60_fu_7163_p2() {
    icmp60_fu_7163_p2 = (!tmp_1218_reg_8648.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1218_reg_8648.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp61_fu_7201_p2() {
    icmp61_fu_7201_p2 = (!tmp_1221_reg_8659.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1221_reg_8659.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp62_fu_7239_p2() {
    icmp62_fu_7239_p2 = (!tmp_1224_reg_8670.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1224_reg_8670.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp63_fu_7277_p2() {
    icmp63_fu_7277_p2 = (!tmp_1227_reg_8681.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1227_reg_8681.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp64_fu_7315_p2() {
    icmp64_fu_7315_p2 = (!tmp_1230_reg_8692.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1230_reg_8692.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp65_fu_7353_p2() {
    icmp65_fu_7353_p2 = (!tmp_1233_reg_8703.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1233_reg_8703.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp66_fu_7391_p2() {
    icmp66_fu_7391_p2 = (!tmp_1236_reg_8714.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1236_reg_8714.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp67_fu_7429_p2() {
    icmp67_fu_7429_p2 = (!tmp_1239_reg_8725.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1239_reg_8725.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp68_fu_7467_p2() {
    icmp68_fu_7467_p2 = (!tmp_1242_reg_8736.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1242_reg_8736.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp69_fu_7505_p2() {
    icmp69_fu_7505_p2 = (!tmp_1245_reg_8747.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1245_reg_8747.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp70_fu_7543_p2() {
    icmp70_fu_7543_p2 = (!tmp_1248_reg_8758.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1248_reg_8758.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp71_fu_7581_p2() {
    icmp71_fu_7581_p2 = (!tmp_1251_reg_8769.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1251_reg_8769.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp72_fu_7619_p2() {
    icmp72_fu_7619_p2 = (!tmp_1254_reg_8780.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1254_reg_8780.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp73_fu_7657_p2() {
    icmp73_fu_7657_p2 = (!tmp_1257_reg_8791.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1257_reg_8791.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp74_fu_7695_p2() {
    icmp74_fu_7695_p2 = (!tmp_1260_reg_8802.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1260_reg_8802.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp75_fu_7733_p2() {
    icmp75_fu_7733_p2 = (!tmp_1263_reg_8813.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1263_reg_8813.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp7_fu_6213_p2() {
    icmp7_fu_6213_p2 = (!tmp_1143_reg_8373.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_1143_reg_8373.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void Sobel_conv3x3_tile_strm::thread_icmp_fu_1529_p2() {
    icmp_fu_1529_p2 = (!tmp_1139_fu_1519_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1139_fu_1519_p4.read() == ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm::thread_p_shl10_cast_fu_3439_p1() {
    p_shl10_cast_fu_3439_p1 = esl_zext<10,9>(tmp_118_8_fu_3289_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl11_cast_fu_3525_p1() {
    p_shl11_cast_fu_3525_p1 = esl_zext<10,9>(tmp_118_9_fu_3375_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl12_cast_fu_3611_p1() {
    p_shl12_cast_fu_3611_p1 = esl_zext<10,9>(tmp_118_10_fu_3461_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl13_cast_fu_3697_p1() {
    p_shl13_cast_fu_3697_p1 = esl_zext<10,9>(tmp_118_11_fu_3547_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl14_cast_fu_3783_p1() {
    p_shl14_cast_fu_3783_p1 = esl_zext<10,9>(tmp_118_12_fu_3633_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl15_cast_fu_3869_p1() {
    p_shl15_cast_fu_3869_p1 = esl_zext<10,9>(tmp_118_13_fu_3719_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl16_cast_fu_3955_p1() {
    p_shl16_cast_fu_3955_p1 = esl_zext<10,9>(tmp_118_14_fu_3805_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl17_cast_fu_4041_p1() {
    p_shl17_cast_fu_4041_p1 = esl_zext<10,9>(tmp_118_15_fu_3891_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl18_cast_fu_4127_p1() {
    p_shl18_cast_fu_4127_p1 = esl_zext<10,9>(tmp_118_16_fu_3977_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl19_cast_fu_4213_p1() {
    p_shl19_cast_fu_4213_p1 = esl_zext<10,9>(tmp_118_17_fu_4063_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl1_cast_fu_2665_p1() {
    p_shl1_cast_fu_2665_p1 = esl_zext<10,9>(p_shl1_fu_2657_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl1_fu_2657_p3() {
    p_shl1_fu_2657_p3 = esl_concat<8,1>(linebuf_1_pixel_1_fu_926.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_p_shl20_cast_fu_4299_p1() {
    p_shl20_cast_fu_4299_p1 = esl_zext<10,9>(tmp_118_18_fu_4149_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl21_cast_fu_4385_p1() {
    p_shl21_cast_fu_4385_p1 = esl_zext<10,9>(tmp_118_19_fu_4235_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl22_cast_fu_4471_p1() {
    p_shl22_cast_fu_4471_p1 = esl_zext<10,9>(tmp_118_20_fu_4321_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl23_cast_fu_4557_p1() {
    p_shl23_cast_fu_4557_p1 = esl_zext<10,9>(tmp_118_21_fu_4407_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl24_cast_fu_4643_p1() {
    p_shl24_cast_fu_4643_p1 = esl_zext<10,9>(tmp_118_22_fu_4493_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl25_cast_fu_4729_p1() {
    p_shl25_cast_fu_4729_p1 = esl_zext<10,9>(tmp_118_23_fu_4579_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl26_cast_fu_4815_p1() {
    p_shl26_cast_fu_4815_p1 = esl_zext<10,9>(tmp_118_24_fu_4665_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl27_cast_fu_4901_p1() {
    p_shl27_cast_fu_4901_p1 = esl_zext<10,9>(tmp_118_25_fu_4751_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl28_cast_fu_4987_p1() {
    p_shl28_cast_fu_4987_p1 = esl_zext<10,9>(tmp_118_26_fu_4837_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl29_cast_fu_5073_p1() {
    p_shl29_cast_fu_5073_p1 = esl_zext<10,9>(tmp_118_27_fu_4923_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl2_cast_fu_2751_p1() {
    p_shl2_cast_fu_2751_p1 = esl_zext<10,9>(tmp_118_fu_2593_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl30_cast_fu_5159_p1() {
    p_shl30_cast_fu_5159_p1 = esl_zext<10,9>(tmp_118_28_fu_5009_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl31_cast_fu_5245_p1() {
    p_shl31_cast_fu_5245_p1 = esl_zext<10,9>(tmp_118_29_fu_5095_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl32_cast_fu_5331_p1() {
    p_shl32_cast_fu_5331_p1 = esl_zext<10,9>(tmp_118_30_fu_5181_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl33_cast_fu_5417_p1() {
    p_shl33_cast_fu_5417_p1 = esl_zext<10,9>(tmp_118_31_fu_5267_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl34_cast_fu_5503_p1() {
    p_shl34_cast_fu_5503_p1 = esl_zext<10,9>(tmp_118_32_fu_5353_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl35_cast_fu_5589_p1() {
    p_shl35_cast_fu_5589_p1 = esl_zext<10,9>(tmp_118_33_fu_5439_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl36_cast_fu_5675_p1() {
    p_shl36_cast_fu_5675_p1 = esl_zext<10,9>(tmp_118_34_fu_5525_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl37_cast_fu_5761_p1() {
    p_shl37_cast_fu_5761_p1 = esl_zext<10,9>(tmp_118_35_fu_5611_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl38_cast_fu_5847_p1() {
    p_shl38_cast_fu_5847_p1 = esl_zext<10,9>(tmp_118_36_fu_5697_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl39_cast_fu_5933_p1() {
    p_shl39_cast_fu_5933_p1 = esl_zext<10,9>(tmp_118_37_fu_5783_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl3_cast_fu_2837_p1() {
    p_shl3_cast_fu_2837_p1 = esl_zext<10,9>(tmp_118_1_fu_2687_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl40_cast_fu_6019_p1() {
    p_shl40_cast_fu_6019_p1 = esl_zext<10,9>(tmp_118_38_fu_5869_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl41_cast_fu_6097_p1() {
    p_shl41_cast_fu_6097_p1 = esl_zext<10,9>(tmp_118_39_fu_5955_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl4_cast_fu_2923_p1() {
    p_shl4_cast_fu_2923_p1 = esl_zext<10,9>(tmp_118_2_fu_2773_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl5_cast_fu_3009_p1() {
    p_shl5_cast_fu_3009_p1 = esl_zext<10,9>(tmp_118_3_fu_2859_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl6_cast_fu_3095_p1() {
    p_shl6_cast_fu_3095_p1 = esl_zext<10,9>(tmp_118_4_fu_2945_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl7_cast_fu_3181_p1() {
    p_shl7_cast_fu_3181_p1 = esl_zext<10,9>(tmp_118_5_fu_3031_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl8_cast_fu_3267_p1() {
    p_shl8_cast_fu_3267_p1 = esl_zext<10,9>(tmp_118_6_fu_3117_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl9_cast_fu_3353_p1() {
    p_shl9_cast_fu_3353_p1 = esl_zext<10,9>(tmp_118_7_fu_3203_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl_cast_fu_2559_p1() {
    p_shl_cast_fu_2559_p1 = esl_zext<10,9>(p_shl_fu_2551_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_p_shl_fu_2551_p3() {
    p_shl_fu_2551_p3 = esl_concat<8,1>(linebuf_1_pixel_0_fu_922.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_0_blk_n = src_V_pixel_0_empty_n.read();
    } else {
        src_V_pixel_0_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_0_read() {
    src_V_pixel_0_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_10_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_10_blk_n = src_V_pixel_10_empty_n.read();
    } else {
        src_V_pixel_10_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_10_read() {
    src_V_pixel_10_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_10_status() {
    src_V_pixel_10_status = (src_V_pixel_0_empty_n.read() & src_V_pixel_1_empty_n.read() & src_V_pixel_2_empty_n.read() & src_V_pixel_3_empty_n.read() & src_V_pixel_4_empty_n.read() & src_V_pixel_5_empty_n.read() & src_V_pixel_6_empty_n.read() & src_V_pixel_7_empty_n.read() & src_V_pixel_8_empty_n.read() & src_V_pixel_9_empty_n.read() & src_V_pixel_10_empty_n.read() & src_V_pixel_11_empty_n.read() & src_V_pixel_12_empty_n.read() & src_V_pixel_13_empty_n.read() & src_V_pixel_14_empty_n.read() & src_V_pixel_15_empty_n.read() & src_V_pixel_16_empty_n.read() & src_V_pixel_17_empty_n.read() & src_V_pixel_18_empty_n.read() & src_V_pixel_19_empty_n.read() & src_V_pixel_20_empty_n.read() & src_V_pixel_21_empty_n.read() & src_V_pixel_22_empty_n.read() & src_V_pixel_23_empty_n.read() & src_V_pixel_24_empty_n.read() & src_V_pixel_25_empty_n.read() & src_V_pixel_26_empty_n.read() & src_V_pixel_27_empty_n.read() & src_V_pixel_28_empty_n.read() & src_V_pixel_29_empty_n.read() & src_V_pixel_30_empty_n.read() & src_V_pixel_31_empty_n.read() & src_V_pixel_32_empty_n.read() & src_V_pixel_33_empty_n.read() & src_V_pixel_34_empty_n.read() & src_V_pixel_35_empty_n.read() & src_V_pixel_36_empty_n.read() & src_V_pixel_37_empty_n.read() & src_V_pixel_38_empty_n.read() & src_V_pixel_39_empty_n.read() & src_V_pixel_40_empty_n.read() & src_V_pixel_41_empty_n.read() & src_V_pixel_42_empty_n.read() & src_V_pixel_43_empty_n.read());
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_10_update() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
        src_V_pixel_10_update = ap_const_logic_1;
    } else {
        src_V_pixel_10_update = ap_const_logic_0;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_11_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_11_blk_n = src_V_pixel_11_empty_n.read();
    } else {
        src_V_pixel_11_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_11_read() {
    src_V_pixel_11_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_12_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_12_blk_n = src_V_pixel_12_empty_n.read();
    } else {
        src_V_pixel_12_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_12_read() {
    src_V_pixel_12_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_13_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_13_blk_n = src_V_pixel_13_empty_n.read();
    } else {
        src_V_pixel_13_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_13_read() {
    src_V_pixel_13_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_14_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_14_blk_n = src_V_pixel_14_empty_n.read();
    } else {
        src_V_pixel_14_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_14_read() {
    src_V_pixel_14_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_15_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_15_blk_n = src_V_pixel_15_empty_n.read();
    } else {
        src_V_pixel_15_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_15_read() {
    src_V_pixel_15_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_16_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_16_blk_n = src_V_pixel_16_empty_n.read();
    } else {
        src_V_pixel_16_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_16_read() {
    src_V_pixel_16_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_17_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_17_blk_n = src_V_pixel_17_empty_n.read();
    } else {
        src_V_pixel_17_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_17_read() {
    src_V_pixel_17_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_18_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_18_blk_n = src_V_pixel_18_empty_n.read();
    } else {
        src_V_pixel_18_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_18_read() {
    src_V_pixel_18_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_19_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_19_blk_n = src_V_pixel_19_empty_n.read();
    } else {
        src_V_pixel_19_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_19_read() {
    src_V_pixel_19_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_1_blk_n = src_V_pixel_1_empty_n.read();
    } else {
        src_V_pixel_1_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_1_read() {
    src_V_pixel_1_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_20_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_20_blk_n = src_V_pixel_20_empty_n.read();
    } else {
        src_V_pixel_20_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_20_read() {
    src_V_pixel_20_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_21_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_21_blk_n = src_V_pixel_21_empty_n.read();
    } else {
        src_V_pixel_21_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_21_read() {
    src_V_pixel_21_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_22_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_22_blk_n = src_V_pixel_22_empty_n.read();
    } else {
        src_V_pixel_22_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_22_read() {
    src_V_pixel_22_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_23_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_23_blk_n = src_V_pixel_23_empty_n.read();
    } else {
        src_V_pixel_23_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_23_read() {
    src_V_pixel_23_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_24_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_24_blk_n = src_V_pixel_24_empty_n.read();
    } else {
        src_V_pixel_24_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_24_read() {
    src_V_pixel_24_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_25_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_25_blk_n = src_V_pixel_25_empty_n.read();
    } else {
        src_V_pixel_25_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_25_read() {
    src_V_pixel_25_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_26_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_26_blk_n = src_V_pixel_26_empty_n.read();
    } else {
        src_V_pixel_26_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_26_read() {
    src_V_pixel_26_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_27_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_27_blk_n = src_V_pixel_27_empty_n.read();
    } else {
        src_V_pixel_27_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_27_read() {
    src_V_pixel_27_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_28_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_28_blk_n = src_V_pixel_28_empty_n.read();
    } else {
        src_V_pixel_28_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_28_read() {
    src_V_pixel_28_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_29_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_29_blk_n = src_V_pixel_29_empty_n.read();
    } else {
        src_V_pixel_29_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_29_read() {
    src_V_pixel_29_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_2_blk_n = src_V_pixel_2_empty_n.read();
    } else {
        src_V_pixel_2_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_2_read() {
    src_V_pixel_2_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_30_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_30_blk_n = src_V_pixel_30_empty_n.read();
    } else {
        src_V_pixel_30_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_30_read() {
    src_V_pixel_30_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_31_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_31_blk_n = src_V_pixel_31_empty_n.read();
    } else {
        src_V_pixel_31_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_31_read() {
    src_V_pixel_31_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_32_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_32_blk_n = src_V_pixel_32_empty_n.read();
    } else {
        src_V_pixel_32_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_32_read() {
    src_V_pixel_32_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_33_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_33_blk_n = src_V_pixel_33_empty_n.read();
    } else {
        src_V_pixel_33_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_33_read() {
    src_V_pixel_33_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_34_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_34_blk_n = src_V_pixel_34_empty_n.read();
    } else {
        src_V_pixel_34_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_34_read() {
    src_V_pixel_34_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_35_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_35_blk_n = src_V_pixel_35_empty_n.read();
    } else {
        src_V_pixel_35_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_35_read() {
    src_V_pixel_35_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_36_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_36_blk_n = src_V_pixel_36_empty_n.read();
    } else {
        src_V_pixel_36_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_36_read() {
    src_V_pixel_36_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_37_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_37_blk_n = src_V_pixel_37_empty_n.read();
    } else {
        src_V_pixel_37_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_37_read() {
    src_V_pixel_37_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_38_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_38_blk_n = src_V_pixel_38_empty_n.read();
    } else {
        src_V_pixel_38_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_38_read() {
    src_V_pixel_38_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_39_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_39_blk_n = src_V_pixel_39_empty_n.read();
    } else {
        src_V_pixel_39_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_39_read() {
    src_V_pixel_39_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_3_blk_n = src_V_pixel_3_empty_n.read();
    } else {
        src_V_pixel_3_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_3_read() {
    src_V_pixel_3_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_40_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_40_blk_n = src_V_pixel_40_empty_n.read();
    } else {
        src_V_pixel_40_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_40_read() {
    src_V_pixel_40_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_41_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_41_blk_n = src_V_pixel_41_empty_n.read();
    } else {
        src_V_pixel_41_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_41_read() {
    src_V_pixel_41_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_42_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_42_blk_n = src_V_pixel_42_empty_n.read();
    } else {
        src_V_pixel_42_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_42_read() {
    src_V_pixel_42_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_43_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_43_blk_n = src_V_pixel_43_empty_n.read();
    } else {
        src_V_pixel_43_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_43_read() {
    src_V_pixel_43_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_4_blk_n = src_V_pixel_4_empty_n.read();
    } else {
        src_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_4_read() {
    src_V_pixel_4_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_5_blk_n = src_V_pixel_5_empty_n.read();
    } else {
        src_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_5_read() {
    src_V_pixel_5_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_6_blk_n = src_V_pixel_6_empty_n.read();
    } else {
        src_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_6_read() {
    src_V_pixel_6_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_7_blk_n = src_V_pixel_7_empty_n.read();
    } else {
        src_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_7_read() {
    src_V_pixel_7_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_8_blk_n = src_V_pixel_8_empty_n.read();
    } else {
        src_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_8_read() {
    src_V_pixel_8_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0))) {
        src_V_pixel_9_blk_n = src_V_pixel_9_empty_n.read();
    } else {
        src_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_conv3x3_tile_strm::thread_src_V_pixel_9_read() {
    src_V_pixel_9_read = src_V_pixel_10_update.read();
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_10_fu_3509_p2() {
    sum_tr_10_fu_3509_p2 = (!tmp32_fu_3493_p2.read().is_01() || !tmp33_cast_fu_3505_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp32_fu_3493_p2.read()) + sc_biguint<11>(tmp33_cast_fu_3505_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_11_fu_3595_p2() {
    sum_tr_11_fu_3595_p2 = (!tmp35_fu_3579_p2.read().is_01() || !tmp36_cast_fu_3591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_3579_p2.read()) + sc_biguint<11>(tmp36_cast_fu_3591_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_12_fu_3681_p2() {
    sum_tr_12_fu_3681_p2 = (!tmp38_fu_3665_p2.read().is_01() || !tmp39_cast_fu_3677_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp38_fu_3665_p2.read()) + sc_biguint<11>(tmp39_cast_fu_3677_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_13_fu_3767_p2() {
    sum_tr_13_fu_3767_p2 = (!tmp41_fu_3751_p2.read().is_01() || !tmp42_cast_fu_3763_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_3751_p2.read()) + sc_biguint<11>(tmp42_cast_fu_3763_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_14_fu_3853_p2() {
    sum_tr_14_fu_3853_p2 = (!tmp44_fu_3837_p2.read().is_01() || !tmp45_cast_fu_3849_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp44_fu_3837_p2.read()) + sc_biguint<11>(tmp45_cast_fu_3849_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_15_fu_3939_p2() {
    sum_tr_15_fu_3939_p2 = (!tmp47_fu_3923_p2.read().is_01() || !tmp48_cast_fu_3935_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp47_fu_3923_p2.read()) + sc_biguint<11>(tmp48_cast_fu_3935_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_16_fu_4025_p2() {
    sum_tr_16_fu_4025_p2 = (!tmp50_fu_4009_p2.read().is_01() || !tmp51_cast_fu_4021_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp50_fu_4009_p2.read()) + sc_biguint<11>(tmp51_cast_fu_4021_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_17_fu_4111_p2() {
    sum_tr_17_fu_4111_p2 = (!tmp53_fu_4095_p2.read().is_01() || !tmp54_cast_fu_4107_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp53_fu_4095_p2.read()) + sc_biguint<11>(tmp54_cast_fu_4107_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_18_fu_4197_p2() {
    sum_tr_18_fu_4197_p2 = (!tmp56_fu_4181_p2.read().is_01() || !tmp57_cast_fu_4193_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp56_fu_4181_p2.read()) + sc_biguint<11>(tmp57_cast_fu_4193_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_19_fu_4283_p2() {
    sum_tr_19_fu_4283_p2 = (!tmp59_fu_4267_p2.read().is_01() || !tmp60_cast_fu_4279_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp59_fu_4267_p2.read()) + sc_biguint<11>(tmp60_cast_fu_4279_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_1_fu_2735_p2() {
    sum_tr_1_fu_2735_p2 = (!tmp5_fu_2719_p2.read().is_01() || !tmp6_cast_fu_2731_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp5_fu_2719_p2.read()) + sc_biguint<11>(tmp6_cast_fu_2731_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_20_fu_4369_p2() {
    sum_tr_20_fu_4369_p2 = (!tmp62_fu_4353_p2.read().is_01() || !tmp63_cast_fu_4365_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp62_fu_4353_p2.read()) + sc_biguint<11>(tmp63_cast_fu_4365_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_21_fu_4455_p2() {
    sum_tr_21_fu_4455_p2 = (!tmp65_fu_4439_p2.read().is_01() || !tmp66_cast_fu_4451_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp65_fu_4439_p2.read()) + sc_biguint<11>(tmp66_cast_fu_4451_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_22_fu_4541_p2() {
    sum_tr_22_fu_4541_p2 = (!tmp68_fu_4525_p2.read().is_01() || !tmp69_cast_fu_4537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp68_fu_4525_p2.read()) + sc_biguint<11>(tmp69_cast_fu_4537_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_23_fu_4627_p2() {
    sum_tr_23_fu_4627_p2 = (!tmp71_fu_4611_p2.read().is_01() || !tmp72_cast_fu_4623_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp71_fu_4611_p2.read()) + sc_biguint<11>(tmp72_cast_fu_4623_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_24_fu_4713_p2() {
    sum_tr_24_fu_4713_p2 = (!tmp74_fu_4697_p2.read().is_01() || !tmp75_cast_fu_4709_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp74_fu_4697_p2.read()) + sc_biguint<11>(tmp75_cast_fu_4709_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_25_fu_4799_p2() {
    sum_tr_25_fu_4799_p2 = (!tmp77_fu_4783_p2.read().is_01() || !tmp78_cast_fu_4795_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp77_fu_4783_p2.read()) + sc_biguint<11>(tmp78_cast_fu_4795_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_26_fu_4885_p2() {
    sum_tr_26_fu_4885_p2 = (!tmp80_fu_4869_p2.read().is_01() || !tmp81_cast_fu_4881_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp80_fu_4869_p2.read()) + sc_biguint<11>(tmp81_cast_fu_4881_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_27_fu_4971_p2() {
    sum_tr_27_fu_4971_p2 = (!tmp83_fu_4955_p2.read().is_01() || !tmp84_cast_fu_4967_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp83_fu_4955_p2.read()) + sc_biguint<11>(tmp84_cast_fu_4967_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_28_fu_5057_p2() {
    sum_tr_28_fu_5057_p2 = (!tmp86_fu_5041_p2.read().is_01() || !tmp87_cast_fu_5053_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp86_fu_5041_p2.read()) + sc_biguint<11>(tmp87_cast_fu_5053_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_29_fu_5143_p2() {
    sum_tr_29_fu_5143_p2 = (!tmp89_fu_5127_p2.read().is_01() || !tmp90_cast_fu_5139_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp89_fu_5127_p2.read()) + sc_biguint<11>(tmp90_cast_fu_5139_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_2_fu_2821_p2() {
    sum_tr_2_fu_2821_p2 = (!tmp8_fu_2805_p2.read().is_01() || !tmp9_cast_fu_2817_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp8_fu_2805_p2.read()) + sc_biguint<11>(tmp9_cast_fu_2817_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_30_fu_5229_p2() {
    sum_tr_30_fu_5229_p2 = (!tmp92_fu_5213_p2.read().is_01() || !tmp93_cast_fu_5225_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp92_fu_5213_p2.read()) + sc_biguint<11>(tmp93_cast_fu_5225_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_31_fu_5315_p2() {
    sum_tr_31_fu_5315_p2 = (!tmp95_fu_5299_p2.read().is_01() || !tmp96_cast_fu_5311_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp95_fu_5299_p2.read()) + sc_biguint<11>(tmp96_cast_fu_5311_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_32_fu_5401_p2() {
    sum_tr_32_fu_5401_p2 = (!tmp98_fu_5385_p2.read().is_01() || !tmp99_cast_fu_5397_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp98_fu_5385_p2.read()) + sc_biguint<11>(tmp99_cast_fu_5397_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_33_fu_5487_p2() {
    sum_tr_33_fu_5487_p2 = (!tmp101_fu_5471_p2.read().is_01() || !tmp102_cast_fu_5483_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp101_fu_5471_p2.read()) + sc_biguint<11>(tmp102_cast_fu_5483_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_34_fu_5573_p2() {
    sum_tr_34_fu_5573_p2 = (!tmp104_fu_5557_p2.read().is_01() || !tmp105_cast_fu_5569_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp104_fu_5557_p2.read()) + sc_biguint<11>(tmp105_cast_fu_5569_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_35_fu_5659_p2() {
    sum_tr_35_fu_5659_p2 = (!tmp107_fu_5643_p2.read().is_01() || !tmp108_cast_fu_5655_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp107_fu_5643_p2.read()) + sc_biguint<11>(tmp108_cast_fu_5655_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_36_fu_5745_p2() {
    sum_tr_36_fu_5745_p2 = (!tmp110_fu_5729_p2.read().is_01() || !tmp111_cast_fu_5741_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp110_fu_5729_p2.read()) + sc_biguint<11>(tmp111_cast_fu_5741_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_37_fu_5831_p2() {
    sum_tr_37_fu_5831_p2 = (!tmp113_fu_5815_p2.read().is_01() || !tmp114_cast_fu_5827_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp113_fu_5815_p2.read()) + sc_biguint<11>(tmp114_cast_fu_5827_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_38_fu_5917_p2() {
    sum_tr_38_fu_5917_p2 = (!tmp116_fu_5901_p2.read().is_01() || !tmp117_cast_fu_5913_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp116_fu_5901_p2.read()) + sc_biguint<11>(tmp117_cast_fu_5913_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_39_fu_6003_p2() {
    sum_tr_39_fu_6003_p2 = (!tmp119_fu_5987_p2.read().is_01() || !tmp120_cast_fu_5999_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp119_fu_5987_p2.read()) + sc_biguint<11>(tmp120_cast_fu_5999_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_3_fu_2907_p2() {
    sum_tr_3_fu_2907_p2 = (!tmp11_fu_2891_p2.read().is_01() || !tmp12_cast_fu_2903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp11_fu_2891_p2.read()) + sc_biguint<11>(tmp12_cast_fu_2903_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_40_fu_6081_p2() {
    sum_tr_40_fu_6081_p2 = (!tmp122_fu_6065_p2.read().is_01() || !tmp123_cast_fu_6077_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp122_fu_6065_p2.read()) + sc_biguint<11>(tmp123_cast_fu_6077_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_4_fu_2993_p2() {
    sum_tr_4_fu_2993_p2 = (!tmp14_fu_2977_p2.read().is_01() || !tmp15_cast_fu_2989_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp14_fu_2977_p2.read()) + sc_biguint<11>(tmp15_cast_fu_2989_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_5_fu_3079_p2() {
    sum_tr_5_fu_3079_p2 = (!tmp17_fu_3063_p2.read().is_01() || !tmp18_cast_fu_3075_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp17_fu_3063_p2.read()) + sc_biguint<11>(tmp18_cast_fu_3075_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_6_fu_3165_p2() {
    sum_tr_6_fu_3165_p2 = (!tmp20_fu_3149_p2.read().is_01() || !tmp21_cast_fu_3161_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp20_fu_3149_p2.read()) + sc_biguint<11>(tmp21_cast_fu_3161_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_7_fu_3251_p2() {
    sum_tr_7_fu_3251_p2 = (!tmp23_fu_3235_p2.read().is_01() || !tmp24_cast_fu_3247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp23_fu_3235_p2.read()) + sc_biguint<11>(tmp24_cast_fu_3247_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_8_fu_3337_p2() {
    sum_tr_8_fu_3337_p2 = (!tmp26_fu_3321_p2.read().is_01() || !tmp27_cast_fu_3333_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp26_fu_3321_p2.read()) + sc_biguint<11>(tmp27_cast_fu_3333_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_9_fu_3423_p2() {
    sum_tr_9_fu_3423_p2 = (!tmp29_fu_3407_p2.read().is_01() || !tmp30_cast_fu_3419_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_3407_p2.read()) + sc_biguint<11>(tmp30_cast_fu_3419_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_fu_2641_p2() {
    sum_tr_fu_2641_p2 = (!tmp2_fu_2625_p2.read().is_01() || !tmp3_cast_fu_2637_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp2_fu_2625_p2.read()) + sc_biguint<11>(tmp3_cast_fu_2637_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_sum_tr_s_fu_6159_p2() {
    sum_tr_s_fu_6159_p2 = (!tmp125_fu_6143_p2.read().is_01() || !tmp126_cast_fu_6155_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp125_fu_6143_p2.read()) + sc_biguint<11>(tmp126_cast_fu_6155_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp101_fu_5471_p2() {
    tmp101_fu_5471_p2 = (!tmp_118_33_cast_fu_5447_p1.read().is_01() || !tmp_122_33_fu_5465_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_33_cast_fu_5447_p1.read()) + sc_biguint<11>(tmp_122_33_fu_5465_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp102_cast_fu_5483_p1() {
    tmp102_cast_fu_5483_p1 = esl_zext<11,9>(tmp102_fu_5477_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp102_fu_5477_p2() {
    tmp102_fu_5477_p2 = (!tmp_119_33_cast_cast_fu_5455_p1.read().is_01() || !tmp_115_33_cast_cast_fu_5435_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_33_cast_cast_fu_5455_p1.read()) + sc_biguint<9>(tmp_115_33_cast_cast_fu_5435_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp104_fu_5557_p2() {
    tmp104_fu_5557_p2 = (!tmp_118_34_cast_fu_5533_p1.read().is_01() || !tmp_122_34_fu_5551_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_34_cast_fu_5533_p1.read()) + sc_biguint<11>(tmp_122_34_fu_5551_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp105_cast_fu_5569_p1() {
    tmp105_cast_fu_5569_p1 = esl_zext<11,9>(tmp105_fu_5563_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp105_fu_5563_p2() {
    tmp105_fu_5563_p2 = (!tmp_119_34_cast_cast_fu_5541_p1.read().is_01() || !tmp_115_34_cast_cast_fu_5521_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_34_cast_cast_fu_5541_p1.read()) + sc_biguint<9>(tmp_115_34_cast_cast_fu_5521_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp107_fu_5643_p2() {
    tmp107_fu_5643_p2 = (!tmp_118_35_cast_fu_5619_p1.read().is_01() || !tmp_122_35_fu_5637_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_35_cast_fu_5619_p1.read()) + sc_biguint<11>(tmp_122_35_fu_5637_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp108_cast_fu_5655_p1() {
    tmp108_cast_fu_5655_p1 = esl_zext<11,9>(tmp108_fu_5649_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp108_fu_5649_p2() {
    tmp108_fu_5649_p2 = (!tmp_119_35_cast_cast_fu_5627_p1.read().is_01() || !tmp_115_35_cast_cast_fu_5607_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_35_cast_cast_fu_5627_p1.read()) + sc_biguint<9>(tmp_115_35_cast_cast_fu_5607_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp110_fu_5729_p2() {
    tmp110_fu_5729_p2 = (!tmp_118_36_cast_fu_5705_p1.read().is_01() || !tmp_122_36_fu_5723_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_36_cast_fu_5705_p1.read()) + sc_biguint<11>(tmp_122_36_fu_5723_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp111_cast_fu_5741_p1() {
    tmp111_cast_fu_5741_p1 = esl_zext<11,9>(tmp111_fu_5735_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp111_fu_5735_p2() {
    tmp111_fu_5735_p2 = (!tmp_119_36_cast_cast_fu_5713_p1.read().is_01() || !tmp_115_36_cast_cast_fu_5693_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_36_cast_cast_fu_5713_p1.read()) + sc_biguint<9>(tmp_115_36_cast_cast_fu_5693_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp113_fu_5815_p2() {
    tmp113_fu_5815_p2 = (!tmp_118_37_cast_fu_5791_p1.read().is_01() || !tmp_122_37_fu_5809_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_37_cast_fu_5791_p1.read()) + sc_biguint<11>(tmp_122_37_fu_5809_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp114_cast_fu_5827_p1() {
    tmp114_cast_fu_5827_p1 = esl_zext<11,9>(tmp114_fu_5821_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp114_fu_5821_p2() {
    tmp114_fu_5821_p2 = (!tmp_119_37_cast_cast_fu_5799_p1.read().is_01() || !tmp_115_37_cast_cast_fu_5779_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_37_cast_cast_fu_5799_p1.read()) + sc_biguint<9>(tmp_115_37_cast_cast_fu_5779_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp116_fu_5901_p2() {
    tmp116_fu_5901_p2 = (!tmp_118_38_cast_fu_5877_p1.read().is_01() || !tmp_122_38_fu_5895_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_38_cast_fu_5877_p1.read()) + sc_biguint<11>(tmp_122_38_fu_5895_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp117_cast_fu_5913_p1() {
    tmp117_cast_fu_5913_p1 = esl_zext<11,9>(tmp117_fu_5907_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp117_fu_5907_p2() {
    tmp117_fu_5907_p2 = (!tmp_119_38_cast_cast_fu_5885_p1.read().is_01() || !tmp_115_38_cast_cast_fu_5865_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_38_cast_cast_fu_5885_p1.read()) + sc_biguint<9>(tmp_115_38_cast_cast_fu_5865_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp119_fu_5987_p2() {
    tmp119_fu_5987_p2 = (!tmp_118_39_cast_fu_5963_p1.read().is_01() || !tmp_122_39_fu_5981_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_39_cast_fu_5963_p1.read()) + sc_biguint<11>(tmp_122_39_fu_5981_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp11_fu_2891_p2() {
    tmp11_fu_2891_p2 = (!tmp_118_3_cast_fu_2867_p1.read().is_01() || !tmp_122_3_fu_2885_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_3_cast_fu_2867_p1.read()) + sc_biguint<11>(tmp_122_3_fu_2885_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp120_cast_fu_5999_p1() {
    tmp120_cast_fu_5999_p1 = esl_zext<11,9>(tmp120_fu_5993_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp120_fu_5993_p2() {
    tmp120_fu_5993_p2 = (!tmp_119_39_cast_cast_fu_5971_p1.read().is_01() || !tmp_115_39_cast_cast_fu_5951_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_39_cast_cast_fu_5971_p1.read()) + sc_biguint<9>(tmp_115_39_cast_cast_fu_5951_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp122_fu_6065_p2() {
    tmp122_fu_6065_p2 = (!tmp_118_40_cast_fu_6045_p1.read().is_01() || !tmp_122_40_fu_6055_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_40_cast_fu_6045_p1.read()) + sc_biguint<11>(tmp_122_40_fu_6055_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp123_cast_fu_6077_p1() {
    tmp123_cast_fu_6077_p1 = esl_zext<11,9>(tmp123_fu_6071_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp123_fu_6071_p2() {
    tmp123_fu_6071_p2 = (!tmp_3478_cast_cast_fu_6061_p1.read().is_01() || !tmp_115_40_cast_cast_fu_6033_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_3478_cast_cast_fu_6061_p1.read()) + sc_biguint<9>(tmp_115_40_cast_cast_fu_6033_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp125_fu_6143_p2() {
    tmp125_fu_6143_p2 = (!tmp_118_cast_739_fu_6123_p1.read().is_01() || !tmp_122_s_fu_6133_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_cast_739_fu_6123_p1.read()) + sc_biguint<11>(tmp_122_s_fu_6133_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp126_cast_fu_6155_p1() {
    tmp126_cast_fu_6155_p1 = esl_zext<11,9>(tmp126_fu_6149_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp126_fu_6149_p2() {
    tmp126_fu_6149_p2 = (!tmp_3481_cast_cast_fu_6139_p1.read().is_01() || !tmp_115_cast_cast_738_fu_6111_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_3481_cast_cast_fu_6139_p1.read()) + sc_biguint<9>(tmp_115_cast_cast_738_fu_6111_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp12_cast_fu_2903_p1() {
    tmp12_cast_fu_2903_p1 = esl_zext<11,9>(tmp12_fu_2897_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp12_fu_2897_p2() {
    tmp12_fu_2897_p2 = (!tmp_119_3_cast_cast_fu_2875_p1.read().is_01() || !tmp_115_3_cast_cast_fu_2855_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_3_cast_cast_fu_2875_p1.read()) + sc_biguint<9>(tmp_115_3_cast_cast_fu_2855_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp14_fu_2977_p2() {
    tmp14_fu_2977_p2 = (!tmp_118_4_cast_fu_2953_p1.read().is_01() || !tmp_122_4_fu_2971_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_4_cast_fu_2953_p1.read()) + sc_biguint<11>(tmp_122_4_fu_2971_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp15_cast_fu_2989_p1() {
    tmp15_cast_fu_2989_p1 = esl_zext<11,9>(tmp15_fu_2983_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp15_fu_2983_p2() {
    tmp15_fu_2983_p2 = (!tmp_119_4_cast_cast_fu_2961_p1.read().is_01() || !tmp_115_4_cast_cast_fu_2941_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_4_cast_cast_fu_2961_p1.read()) + sc_biguint<9>(tmp_115_4_cast_cast_fu_2941_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp17_fu_3063_p2() {
    tmp17_fu_3063_p2 = (!tmp_118_5_cast_fu_3039_p1.read().is_01() || !tmp_122_5_fu_3057_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_5_cast_fu_3039_p1.read()) + sc_biguint<11>(tmp_122_5_fu_3057_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp18_cast_fu_3075_p1() {
    tmp18_cast_fu_3075_p1 = esl_zext<11,9>(tmp18_fu_3069_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp18_fu_3069_p2() {
    tmp18_fu_3069_p2 = (!tmp_119_5_cast_cast_fu_3047_p1.read().is_01() || !tmp_115_5_cast_cast_fu_3027_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_5_cast_cast_fu_3047_p1.read()) + sc_biguint<9>(tmp_115_5_cast_cast_fu_3027_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp20_fu_3149_p2() {
    tmp20_fu_3149_p2 = (!tmp_118_6_cast_fu_3125_p1.read().is_01() || !tmp_122_6_fu_3143_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_6_cast_fu_3125_p1.read()) + sc_biguint<11>(tmp_122_6_fu_3143_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp21_cast_fu_3161_p1() {
    tmp21_cast_fu_3161_p1 = esl_zext<11,9>(tmp21_fu_3155_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp21_fu_3155_p2() {
    tmp21_fu_3155_p2 = (!tmp_119_6_cast_cast_fu_3133_p1.read().is_01() || !tmp_115_6_cast_cast_fu_3113_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_6_cast_cast_fu_3133_p1.read()) + sc_biguint<9>(tmp_115_6_cast_cast_fu_3113_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp23_fu_3235_p2() {
    tmp23_fu_3235_p2 = (!tmp_118_7_cast_fu_3211_p1.read().is_01() || !tmp_122_7_fu_3229_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_7_cast_fu_3211_p1.read()) + sc_biguint<11>(tmp_122_7_fu_3229_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp24_cast_fu_3247_p1() {
    tmp24_cast_fu_3247_p1 = esl_zext<11,9>(tmp24_fu_3241_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp24_fu_3241_p2() {
    tmp24_fu_3241_p2 = (!tmp_119_7_cast_cast_fu_3219_p1.read().is_01() || !tmp_115_7_cast_cast_fu_3199_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_7_cast_cast_fu_3219_p1.read()) + sc_biguint<9>(tmp_115_7_cast_cast_fu_3199_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp26_fu_3321_p2() {
    tmp26_fu_3321_p2 = (!tmp_118_8_cast_fu_3297_p1.read().is_01() || !tmp_122_8_fu_3315_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_8_cast_fu_3297_p1.read()) + sc_biguint<11>(tmp_122_8_fu_3315_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp27_cast_fu_3333_p1() {
    tmp27_cast_fu_3333_p1 = esl_zext<11,9>(tmp27_fu_3327_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp27_fu_3327_p2() {
    tmp27_fu_3327_p2 = (!tmp_119_8_cast_cast_fu_3305_p1.read().is_01() || !tmp_115_8_cast_cast_fu_3285_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_8_cast_cast_fu_3305_p1.read()) + sc_biguint<9>(tmp_115_8_cast_cast_fu_3285_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp29_fu_3407_p2() {
    tmp29_fu_3407_p2 = (!tmp_118_9_cast_fu_3383_p1.read().is_01() || !tmp_122_9_fu_3401_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_9_cast_fu_3383_p1.read()) + sc_biguint<11>(tmp_122_9_fu_3401_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp2_fu_2625_p2() {
    tmp2_fu_2625_p2 = (!tmp_118_cast_fu_2601_p1.read().is_01() || !tmp_122_fu_2619_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_cast_fu_2601_p1.read()) + sc_biguint<11>(tmp_122_fu_2619_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp30_cast_fu_3419_p1() {
    tmp30_cast_fu_3419_p1 = esl_zext<11,9>(tmp30_fu_3413_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp30_fu_3413_p2() {
    tmp30_fu_3413_p2 = (!tmp_119_9_cast_cast_fu_3391_p1.read().is_01() || !tmp_115_9_cast_cast_fu_3371_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_9_cast_cast_fu_3391_p1.read()) + sc_biguint<9>(tmp_115_9_cast_cast_fu_3371_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp32_fu_3493_p2() {
    tmp32_fu_3493_p2 = (!tmp_118_10_cast_fu_3469_p1.read().is_01() || !tmp_122_10_fu_3487_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_10_cast_fu_3469_p1.read()) + sc_biguint<11>(tmp_122_10_fu_3487_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp33_cast_fu_3505_p1() {
    tmp33_cast_fu_3505_p1 = esl_zext<11,9>(tmp33_fu_3499_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp33_fu_3499_p2() {
    tmp33_fu_3499_p2 = (!tmp_119_10_cast_cast_fu_3477_p1.read().is_01() || !tmp_115_10_cast_cast_fu_3457_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_10_cast_cast_fu_3477_p1.read()) + sc_biguint<9>(tmp_115_10_cast_cast_fu_3457_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp35_fu_3579_p2() {
    tmp35_fu_3579_p2 = (!tmp_118_11_cast_fu_3555_p1.read().is_01() || !tmp_122_11_fu_3573_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_11_cast_fu_3555_p1.read()) + sc_biguint<11>(tmp_122_11_fu_3573_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp36_cast_fu_3591_p1() {
    tmp36_cast_fu_3591_p1 = esl_zext<11,9>(tmp36_fu_3585_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp36_fu_3585_p2() {
    tmp36_fu_3585_p2 = (!tmp_119_11_cast_cast_fu_3563_p1.read().is_01() || !tmp_115_11_cast_cast_fu_3543_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_11_cast_cast_fu_3563_p1.read()) + sc_biguint<9>(tmp_115_11_cast_cast_fu_3543_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp38_fu_3665_p2() {
    tmp38_fu_3665_p2 = (!tmp_118_12_cast_fu_3641_p1.read().is_01() || !tmp_122_12_fu_3659_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_12_cast_fu_3641_p1.read()) + sc_biguint<11>(tmp_122_12_fu_3659_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp39_cast_fu_3677_p1() {
    tmp39_cast_fu_3677_p1 = esl_zext<11,9>(tmp39_fu_3671_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp39_fu_3671_p2() {
    tmp39_fu_3671_p2 = (!tmp_119_12_cast_cast_fu_3649_p1.read().is_01() || !tmp_115_12_cast_cast_fu_3629_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_12_cast_cast_fu_3649_p1.read()) + sc_biguint<9>(tmp_115_12_cast_cast_fu_3629_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp3_cast_fu_2637_p1() {
    tmp3_cast_fu_2637_p1 = esl_zext<11,9>(tmp3_fu_2631_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp3_fu_2631_p2() {
    tmp3_fu_2631_p2 = (!tmp_119_cast_cast_fu_2609_p1.read().is_01() || !tmp_115_cast_cast_fu_2589_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_cast_cast_fu_2609_p1.read()) + sc_biguint<9>(tmp_115_cast_cast_fu_2589_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp41_fu_3751_p2() {
    tmp41_fu_3751_p2 = (!tmp_118_13_cast_fu_3727_p1.read().is_01() || !tmp_122_13_fu_3745_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_13_cast_fu_3727_p1.read()) + sc_biguint<11>(tmp_122_13_fu_3745_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp42_cast_fu_3763_p1() {
    tmp42_cast_fu_3763_p1 = esl_zext<11,9>(tmp42_fu_3757_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp42_fu_3757_p2() {
    tmp42_fu_3757_p2 = (!tmp_119_13_cast_cast_fu_3735_p1.read().is_01() || !tmp_115_13_cast_cast_fu_3715_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_13_cast_cast_fu_3735_p1.read()) + sc_biguint<9>(tmp_115_13_cast_cast_fu_3715_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp44_fu_3837_p2() {
    tmp44_fu_3837_p2 = (!tmp_118_14_cast_fu_3813_p1.read().is_01() || !tmp_122_14_fu_3831_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_14_cast_fu_3813_p1.read()) + sc_biguint<11>(tmp_122_14_fu_3831_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp45_cast_fu_3849_p1() {
    tmp45_cast_fu_3849_p1 = esl_zext<11,9>(tmp45_fu_3843_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp45_fu_3843_p2() {
    tmp45_fu_3843_p2 = (!tmp_119_14_cast_cast_fu_3821_p1.read().is_01() || !tmp_115_14_cast_cast_fu_3801_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_14_cast_cast_fu_3821_p1.read()) + sc_biguint<9>(tmp_115_14_cast_cast_fu_3801_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp47_fu_3923_p2() {
    tmp47_fu_3923_p2 = (!tmp_118_15_cast_fu_3899_p1.read().is_01() || !tmp_122_15_fu_3917_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_15_cast_fu_3899_p1.read()) + sc_biguint<11>(tmp_122_15_fu_3917_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp48_cast_fu_3935_p1() {
    tmp48_cast_fu_3935_p1 = esl_zext<11,9>(tmp48_fu_3929_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp48_fu_3929_p2() {
    tmp48_fu_3929_p2 = (!tmp_119_15_cast_cast_fu_3907_p1.read().is_01() || !tmp_115_15_cast_cast_fu_3887_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_15_cast_cast_fu_3907_p1.read()) + sc_biguint<9>(tmp_115_15_cast_cast_fu_3887_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp50_fu_4009_p2() {
    tmp50_fu_4009_p2 = (!tmp_118_16_cast_fu_3985_p1.read().is_01() || !tmp_122_16_fu_4003_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_16_cast_fu_3985_p1.read()) + sc_biguint<11>(tmp_122_16_fu_4003_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp51_cast_fu_4021_p1() {
    tmp51_cast_fu_4021_p1 = esl_zext<11,9>(tmp51_fu_4015_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp51_fu_4015_p2() {
    tmp51_fu_4015_p2 = (!tmp_119_16_cast_cast_fu_3993_p1.read().is_01() || !tmp_115_16_cast_cast_fu_3973_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_16_cast_cast_fu_3993_p1.read()) + sc_biguint<9>(tmp_115_16_cast_cast_fu_3973_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp53_fu_4095_p2() {
    tmp53_fu_4095_p2 = (!tmp_118_17_cast_fu_4071_p1.read().is_01() || !tmp_122_17_fu_4089_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_17_cast_fu_4071_p1.read()) + sc_biguint<11>(tmp_122_17_fu_4089_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp54_cast_fu_4107_p1() {
    tmp54_cast_fu_4107_p1 = esl_zext<11,9>(tmp54_fu_4101_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp54_fu_4101_p2() {
    tmp54_fu_4101_p2 = (!tmp_119_17_cast_cast_fu_4079_p1.read().is_01() || !tmp_115_17_cast_cast_fu_4059_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_17_cast_cast_fu_4079_p1.read()) + sc_biguint<9>(tmp_115_17_cast_cast_fu_4059_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp56_fu_4181_p2() {
    tmp56_fu_4181_p2 = (!tmp_118_18_cast_fu_4157_p1.read().is_01() || !tmp_122_18_fu_4175_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_18_cast_fu_4157_p1.read()) + sc_biguint<11>(tmp_122_18_fu_4175_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp57_cast_fu_4193_p1() {
    tmp57_cast_fu_4193_p1 = esl_zext<11,9>(tmp57_fu_4187_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp57_fu_4187_p2() {
    tmp57_fu_4187_p2 = (!tmp_119_18_cast_cast_fu_4165_p1.read().is_01() || !tmp_115_18_cast_cast_fu_4145_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_18_cast_cast_fu_4165_p1.read()) + sc_biguint<9>(tmp_115_18_cast_cast_fu_4145_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp59_fu_4267_p2() {
    tmp59_fu_4267_p2 = (!tmp_118_19_cast_fu_4243_p1.read().is_01() || !tmp_122_19_fu_4261_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_19_cast_fu_4243_p1.read()) + sc_biguint<11>(tmp_122_19_fu_4261_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp5_fu_2719_p2() {
    tmp5_fu_2719_p2 = (!tmp_118_1_cast_fu_2695_p1.read().is_01() || !tmp_122_1_fu_2713_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_1_cast_fu_2695_p1.read()) + sc_biguint<11>(tmp_122_1_fu_2713_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp60_cast_fu_4279_p1() {
    tmp60_cast_fu_4279_p1 = esl_zext<11,9>(tmp60_fu_4273_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp60_fu_4273_p2() {
    tmp60_fu_4273_p2 = (!tmp_119_19_cast_cast_fu_4251_p1.read().is_01() || !tmp_115_19_cast_cast_fu_4231_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_19_cast_cast_fu_4251_p1.read()) + sc_biguint<9>(tmp_115_19_cast_cast_fu_4231_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp62_fu_4353_p2() {
    tmp62_fu_4353_p2 = (!tmp_118_20_cast_fu_4329_p1.read().is_01() || !tmp_122_20_fu_4347_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_20_cast_fu_4329_p1.read()) + sc_biguint<11>(tmp_122_20_fu_4347_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp63_cast_fu_4365_p1() {
    tmp63_cast_fu_4365_p1 = esl_zext<11,9>(tmp63_fu_4359_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp63_fu_4359_p2() {
    tmp63_fu_4359_p2 = (!tmp_119_20_cast_cast_fu_4337_p1.read().is_01() || !tmp_115_20_cast_cast_fu_4317_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_20_cast_cast_fu_4337_p1.read()) + sc_biguint<9>(tmp_115_20_cast_cast_fu_4317_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp65_fu_4439_p2() {
    tmp65_fu_4439_p2 = (!tmp_118_21_cast_fu_4415_p1.read().is_01() || !tmp_122_21_fu_4433_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_21_cast_fu_4415_p1.read()) + sc_biguint<11>(tmp_122_21_fu_4433_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp66_cast_fu_4451_p1() {
    tmp66_cast_fu_4451_p1 = esl_zext<11,9>(tmp66_fu_4445_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp66_fu_4445_p2() {
    tmp66_fu_4445_p2 = (!tmp_119_21_cast_cast_fu_4423_p1.read().is_01() || !tmp_115_21_cast_cast_fu_4403_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_21_cast_cast_fu_4423_p1.read()) + sc_biguint<9>(tmp_115_21_cast_cast_fu_4403_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp68_fu_4525_p2() {
    tmp68_fu_4525_p2 = (!tmp_118_22_cast_fu_4501_p1.read().is_01() || !tmp_122_22_fu_4519_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_22_cast_fu_4501_p1.read()) + sc_biguint<11>(tmp_122_22_fu_4519_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp69_cast_fu_4537_p1() {
    tmp69_cast_fu_4537_p1 = esl_zext<11,9>(tmp69_fu_4531_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp69_fu_4531_p2() {
    tmp69_fu_4531_p2 = (!tmp_119_22_cast_cast_fu_4509_p1.read().is_01() || !tmp_115_22_cast_cast_fu_4489_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_22_cast_cast_fu_4509_p1.read()) + sc_biguint<9>(tmp_115_22_cast_cast_fu_4489_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp6_cast_fu_2731_p1() {
    tmp6_cast_fu_2731_p1 = esl_zext<11,9>(tmp6_fu_2725_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp6_fu_2725_p2() {
    tmp6_fu_2725_p2 = (!tmp_119_1_cast_cast_fu_2703_p1.read().is_01() || !tmp_115_1_cast_cast_fu_2683_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_1_cast_cast_fu_2703_p1.read()) + sc_biguint<9>(tmp_115_1_cast_cast_fu_2683_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp71_fu_4611_p2() {
    tmp71_fu_4611_p2 = (!tmp_118_23_cast_fu_4587_p1.read().is_01() || !tmp_122_23_fu_4605_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_23_cast_fu_4587_p1.read()) + sc_biguint<11>(tmp_122_23_fu_4605_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp72_cast_fu_4623_p1() {
    tmp72_cast_fu_4623_p1 = esl_zext<11,9>(tmp72_fu_4617_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp72_fu_4617_p2() {
    tmp72_fu_4617_p2 = (!tmp_119_23_cast_cast_fu_4595_p1.read().is_01() || !tmp_115_23_cast_cast_fu_4575_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_23_cast_cast_fu_4595_p1.read()) + sc_biguint<9>(tmp_115_23_cast_cast_fu_4575_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp74_fu_4697_p2() {
    tmp74_fu_4697_p2 = (!tmp_118_24_cast_fu_4673_p1.read().is_01() || !tmp_122_24_fu_4691_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_24_cast_fu_4673_p1.read()) + sc_biguint<11>(tmp_122_24_fu_4691_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp75_cast_fu_4709_p1() {
    tmp75_cast_fu_4709_p1 = esl_zext<11,9>(tmp75_fu_4703_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp75_fu_4703_p2() {
    tmp75_fu_4703_p2 = (!tmp_119_24_cast_cast_fu_4681_p1.read().is_01() || !tmp_115_24_cast_cast_fu_4661_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_24_cast_cast_fu_4681_p1.read()) + sc_biguint<9>(tmp_115_24_cast_cast_fu_4661_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp77_fu_4783_p2() {
    tmp77_fu_4783_p2 = (!tmp_118_25_cast_fu_4759_p1.read().is_01() || !tmp_122_25_fu_4777_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_25_cast_fu_4759_p1.read()) + sc_biguint<11>(tmp_122_25_fu_4777_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp78_cast_fu_4795_p1() {
    tmp78_cast_fu_4795_p1 = esl_zext<11,9>(tmp78_fu_4789_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp78_fu_4789_p2() {
    tmp78_fu_4789_p2 = (!tmp_119_25_cast_cast_fu_4767_p1.read().is_01() || !tmp_115_25_cast_cast_fu_4747_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_25_cast_cast_fu_4767_p1.read()) + sc_biguint<9>(tmp_115_25_cast_cast_fu_4747_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp80_fu_4869_p2() {
    tmp80_fu_4869_p2 = (!tmp_118_26_cast_fu_4845_p1.read().is_01() || !tmp_122_26_fu_4863_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_26_cast_fu_4845_p1.read()) + sc_biguint<11>(tmp_122_26_fu_4863_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp81_cast_fu_4881_p1() {
    tmp81_cast_fu_4881_p1 = esl_zext<11,9>(tmp81_fu_4875_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp81_fu_4875_p2() {
    tmp81_fu_4875_p2 = (!tmp_119_26_cast_cast_fu_4853_p1.read().is_01() || !tmp_115_26_cast_cast_fu_4833_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_26_cast_cast_fu_4853_p1.read()) + sc_biguint<9>(tmp_115_26_cast_cast_fu_4833_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp83_fu_4955_p2() {
    tmp83_fu_4955_p2 = (!tmp_118_27_cast_fu_4931_p1.read().is_01() || !tmp_122_27_fu_4949_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_27_cast_fu_4931_p1.read()) + sc_biguint<11>(tmp_122_27_fu_4949_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp84_cast_fu_4967_p1() {
    tmp84_cast_fu_4967_p1 = esl_zext<11,9>(tmp84_fu_4961_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp84_fu_4961_p2() {
    tmp84_fu_4961_p2 = (!tmp_119_27_cast_cast_fu_4939_p1.read().is_01() || !tmp_115_27_cast_cast_fu_4919_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_27_cast_cast_fu_4939_p1.read()) + sc_biguint<9>(tmp_115_27_cast_cast_fu_4919_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp86_fu_5041_p2() {
    tmp86_fu_5041_p2 = (!tmp_118_28_cast_fu_5017_p1.read().is_01() || !tmp_122_28_fu_5035_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_28_cast_fu_5017_p1.read()) + sc_biguint<11>(tmp_122_28_fu_5035_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp87_cast_fu_5053_p1() {
    tmp87_cast_fu_5053_p1 = esl_zext<11,9>(tmp87_fu_5047_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp87_fu_5047_p2() {
    tmp87_fu_5047_p2 = (!tmp_119_28_cast_cast_fu_5025_p1.read().is_01() || !tmp_115_28_cast_cast_fu_5005_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_28_cast_cast_fu_5025_p1.read()) + sc_biguint<9>(tmp_115_28_cast_cast_fu_5005_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp89_fu_5127_p2() {
    tmp89_fu_5127_p2 = (!tmp_118_29_cast_fu_5103_p1.read().is_01() || !tmp_122_29_fu_5121_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_29_cast_fu_5103_p1.read()) + sc_biguint<11>(tmp_122_29_fu_5121_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp8_fu_2805_p2() {
    tmp8_fu_2805_p2 = (!tmp_118_2_cast_fu_2781_p1.read().is_01() || !tmp_122_2_fu_2799_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_2_cast_fu_2781_p1.read()) + sc_biguint<11>(tmp_122_2_fu_2799_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp90_cast_fu_5139_p1() {
    tmp90_cast_fu_5139_p1 = esl_zext<11,9>(tmp90_fu_5133_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp90_fu_5133_p2() {
    tmp90_fu_5133_p2 = (!tmp_119_29_cast_cast_fu_5111_p1.read().is_01() || !tmp_115_29_cast_cast_fu_5091_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_29_cast_cast_fu_5111_p1.read()) + sc_biguint<9>(tmp_115_29_cast_cast_fu_5091_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp92_fu_5213_p2() {
    tmp92_fu_5213_p2 = (!tmp_118_30_cast_fu_5189_p1.read().is_01() || !tmp_122_30_fu_5207_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_30_cast_fu_5189_p1.read()) + sc_biguint<11>(tmp_122_30_fu_5207_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp93_cast_fu_5225_p1() {
    tmp93_cast_fu_5225_p1 = esl_zext<11,9>(tmp93_fu_5219_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp93_fu_5219_p2() {
    tmp93_fu_5219_p2 = (!tmp_119_30_cast_cast_fu_5197_p1.read().is_01() || !tmp_115_30_cast_cast_fu_5177_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_30_cast_cast_fu_5197_p1.read()) + sc_biguint<9>(tmp_115_30_cast_cast_fu_5177_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp95_fu_5299_p2() {
    tmp95_fu_5299_p2 = (!tmp_118_31_cast_fu_5275_p1.read().is_01() || !tmp_122_31_fu_5293_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_31_cast_fu_5275_p1.read()) + sc_biguint<11>(tmp_122_31_fu_5293_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp96_cast_fu_5311_p1() {
    tmp96_cast_fu_5311_p1 = esl_zext<11,9>(tmp96_fu_5305_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp96_fu_5305_p2() {
    tmp96_fu_5305_p2 = (!tmp_119_31_cast_cast_fu_5283_p1.read().is_01() || !tmp_115_31_cast_cast_fu_5263_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_31_cast_cast_fu_5283_p1.read()) + sc_biguint<9>(tmp_115_31_cast_cast_fu_5263_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp98_fu_5385_p2() {
    tmp98_fu_5385_p2 = (!tmp_118_32_cast_fu_5361_p1.read().is_01() || !tmp_122_32_fu_5379_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_118_32_cast_fu_5361_p1.read()) + sc_biguint<11>(tmp_122_32_fu_5379_p2.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp99_cast_fu_5397_p1() {
    tmp99_cast_fu_5397_p1 = esl_zext<11,9>(tmp99_fu_5391_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp99_fu_5391_p2() {
    tmp99_fu_5391_p2 = (!tmp_119_32_cast_cast_fu_5369_p1.read().is_01() || !tmp_115_32_cast_cast_fu_5349_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_32_cast_cast_fu_5369_p1.read()) + sc_biguint<9>(tmp_115_32_cast_cast_fu_5349_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp9_cast_fu_2817_p1() {
    tmp9_cast_fu_2817_p1 = esl_zext<11,9>(tmp9_fu_2811_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp9_fu_2811_p2() {
    tmp9_fu_2811_p2 = (!tmp_119_2_cast_cast_fu_2789_p1.read().is_01() || !tmp_115_2_cast_cast_fu_2769_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_2_cast_cast_fu_2789_p1.read()) + sc_biguint<9>(tmp_115_2_cast_cast_fu_2769_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_103_cast_fu_2547_p1() {
    tmp_103_cast_fu_2547_p1 = esl_zext<11,8>(linebuf_1_pixel_0_3_fu_1098.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_10_cast_fu_3535_p1() {
    tmp_106_10_cast_fu_3535_p1 = esl_sext<11,10>(tmp_106_10_fu_3529_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_10_fu_3529_p2() {
    tmp_106_10_fu_3529_p2 = (!ap_const_lv10_0.is_01() || !p_shl11_cast_fu_3525_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl11_cast_fu_3525_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_11_cast_fu_3621_p1() {
    tmp_106_11_cast_fu_3621_p1 = esl_sext<11,10>(tmp_106_11_fu_3615_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_11_fu_3615_p2() {
    tmp_106_11_fu_3615_p2 = (!ap_const_lv10_0.is_01() || !p_shl12_cast_fu_3611_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl12_cast_fu_3611_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_12_cast_fu_3707_p1() {
    tmp_106_12_cast_fu_3707_p1 = esl_sext<11,10>(tmp_106_12_fu_3701_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_12_fu_3701_p2() {
    tmp_106_12_fu_3701_p2 = (!ap_const_lv10_0.is_01() || !p_shl13_cast_fu_3697_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl13_cast_fu_3697_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_13_cast_fu_3793_p1() {
    tmp_106_13_cast_fu_3793_p1 = esl_sext<11,10>(tmp_106_13_fu_3787_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_13_fu_3787_p2() {
    tmp_106_13_fu_3787_p2 = (!ap_const_lv10_0.is_01() || !p_shl14_cast_fu_3783_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl14_cast_fu_3783_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_14_cast_fu_3879_p1() {
    tmp_106_14_cast_fu_3879_p1 = esl_sext<11,10>(tmp_106_14_fu_3873_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_14_fu_3873_p2() {
    tmp_106_14_fu_3873_p2 = (!ap_const_lv10_0.is_01() || !p_shl15_cast_fu_3869_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl15_cast_fu_3869_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_15_cast_fu_3965_p1() {
    tmp_106_15_cast_fu_3965_p1 = esl_sext<11,10>(tmp_106_15_fu_3959_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_15_fu_3959_p2() {
    tmp_106_15_fu_3959_p2 = (!ap_const_lv10_0.is_01() || !p_shl16_cast_fu_3955_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl16_cast_fu_3955_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_16_cast_fu_4051_p1() {
    tmp_106_16_cast_fu_4051_p1 = esl_sext<11,10>(tmp_106_16_fu_4045_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_16_fu_4045_p2() {
    tmp_106_16_fu_4045_p2 = (!ap_const_lv10_0.is_01() || !p_shl17_cast_fu_4041_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl17_cast_fu_4041_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_17_cast_fu_4137_p1() {
    tmp_106_17_cast_fu_4137_p1 = esl_sext<11,10>(tmp_106_17_fu_4131_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_17_fu_4131_p2() {
    tmp_106_17_fu_4131_p2 = (!ap_const_lv10_0.is_01() || !p_shl18_cast_fu_4127_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl18_cast_fu_4127_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_18_cast_fu_4223_p1() {
    tmp_106_18_cast_fu_4223_p1 = esl_sext<11,10>(tmp_106_18_fu_4217_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_18_fu_4217_p2() {
    tmp_106_18_fu_4217_p2 = (!ap_const_lv10_0.is_01() || !p_shl19_cast_fu_4213_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl19_cast_fu_4213_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_19_cast_fu_4309_p1() {
    tmp_106_19_cast_fu_4309_p1 = esl_sext<11,10>(tmp_106_19_fu_4303_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_19_fu_4303_p2() {
    tmp_106_19_fu_4303_p2 = (!ap_const_lv10_0.is_01() || !p_shl20_cast_fu_4299_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl20_cast_fu_4299_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_1_cast_fu_2675_p1() {
    tmp_106_1_cast_fu_2675_p1 = esl_sext<11,10>(tmp_106_1_fu_2669_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_1_fu_2669_p2() {
    tmp_106_1_fu_2669_p2 = (!ap_const_lv10_0.is_01() || !p_shl1_cast_fu_2665_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl1_cast_fu_2665_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_20_cast_fu_4395_p1() {
    tmp_106_20_cast_fu_4395_p1 = esl_sext<11,10>(tmp_106_20_fu_4389_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_20_fu_4389_p2() {
    tmp_106_20_fu_4389_p2 = (!ap_const_lv10_0.is_01() || !p_shl21_cast_fu_4385_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl21_cast_fu_4385_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_21_cast_fu_4481_p1() {
    tmp_106_21_cast_fu_4481_p1 = esl_sext<11,10>(tmp_106_21_fu_4475_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_21_fu_4475_p2() {
    tmp_106_21_fu_4475_p2 = (!ap_const_lv10_0.is_01() || !p_shl22_cast_fu_4471_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl22_cast_fu_4471_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_22_cast_fu_4567_p1() {
    tmp_106_22_cast_fu_4567_p1 = esl_sext<11,10>(tmp_106_22_fu_4561_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_22_fu_4561_p2() {
    tmp_106_22_fu_4561_p2 = (!ap_const_lv10_0.is_01() || !p_shl23_cast_fu_4557_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl23_cast_fu_4557_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_23_cast_fu_4653_p1() {
    tmp_106_23_cast_fu_4653_p1 = esl_sext<11,10>(tmp_106_23_fu_4647_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_23_fu_4647_p2() {
    tmp_106_23_fu_4647_p2 = (!ap_const_lv10_0.is_01() || !p_shl24_cast_fu_4643_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl24_cast_fu_4643_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_24_cast_fu_4739_p1() {
    tmp_106_24_cast_fu_4739_p1 = esl_sext<11,10>(tmp_106_24_fu_4733_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_24_fu_4733_p2() {
    tmp_106_24_fu_4733_p2 = (!ap_const_lv10_0.is_01() || !p_shl25_cast_fu_4729_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl25_cast_fu_4729_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_25_cast_fu_4825_p1() {
    tmp_106_25_cast_fu_4825_p1 = esl_sext<11,10>(tmp_106_25_fu_4819_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_25_fu_4819_p2() {
    tmp_106_25_fu_4819_p2 = (!ap_const_lv10_0.is_01() || !p_shl26_cast_fu_4815_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl26_cast_fu_4815_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_26_cast_fu_4911_p1() {
    tmp_106_26_cast_fu_4911_p1 = esl_sext<11,10>(tmp_106_26_fu_4905_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_26_fu_4905_p2() {
    tmp_106_26_fu_4905_p2 = (!ap_const_lv10_0.is_01() || !p_shl27_cast_fu_4901_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl27_cast_fu_4901_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_27_cast_fu_4997_p1() {
    tmp_106_27_cast_fu_4997_p1 = esl_sext<11,10>(tmp_106_27_fu_4991_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_27_fu_4991_p2() {
    tmp_106_27_fu_4991_p2 = (!ap_const_lv10_0.is_01() || !p_shl28_cast_fu_4987_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl28_cast_fu_4987_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_28_cast_fu_5083_p1() {
    tmp_106_28_cast_fu_5083_p1 = esl_sext<11,10>(tmp_106_28_fu_5077_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_28_fu_5077_p2() {
    tmp_106_28_fu_5077_p2 = (!ap_const_lv10_0.is_01() || !p_shl29_cast_fu_5073_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl29_cast_fu_5073_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_29_cast_fu_5169_p1() {
    tmp_106_29_cast_fu_5169_p1 = esl_sext<11,10>(tmp_106_29_fu_5163_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_29_fu_5163_p2() {
    tmp_106_29_fu_5163_p2 = (!ap_const_lv10_0.is_01() || !p_shl30_cast_fu_5159_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl30_cast_fu_5159_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_2_cast_fu_2761_p1() {
    tmp_106_2_cast_fu_2761_p1 = esl_sext<11,10>(tmp_106_2_fu_2755_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_2_fu_2755_p2() {
    tmp_106_2_fu_2755_p2 = (!ap_const_lv10_0.is_01() || !p_shl2_cast_fu_2751_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl2_cast_fu_2751_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_30_cast_fu_5255_p1() {
    tmp_106_30_cast_fu_5255_p1 = esl_sext<11,10>(tmp_106_30_fu_5249_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_30_fu_5249_p2() {
    tmp_106_30_fu_5249_p2 = (!ap_const_lv10_0.is_01() || !p_shl31_cast_fu_5245_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl31_cast_fu_5245_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_31_cast_fu_5341_p1() {
    tmp_106_31_cast_fu_5341_p1 = esl_sext<11,10>(tmp_106_31_fu_5335_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_31_fu_5335_p2() {
    tmp_106_31_fu_5335_p2 = (!ap_const_lv10_0.is_01() || !p_shl32_cast_fu_5331_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl32_cast_fu_5331_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_32_cast_fu_5427_p1() {
    tmp_106_32_cast_fu_5427_p1 = esl_sext<11,10>(tmp_106_32_fu_5421_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_32_fu_5421_p2() {
    tmp_106_32_fu_5421_p2 = (!ap_const_lv10_0.is_01() || !p_shl33_cast_fu_5417_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl33_cast_fu_5417_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_33_cast_fu_5513_p1() {
    tmp_106_33_cast_fu_5513_p1 = esl_sext<11,10>(tmp_106_33_fu_5507_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_33_fu_5507_p2() {
    tmp_106_33_fu_5507_p2 = (!ap_const_lv10_0.is_01() || !p_shl34_cast_fu_5503_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl34_cast_fu_5503_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_34_cast_fu_5599_p1() {
    tmp_106_34_cast_fu_5599_p1 = esl_sext<11,10>(tmp_106_34_fu_5593_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_34_fu_5593_p2() {
    tmp_106_34_fu_5593_p2 = (!ap_const_lv10_0.is_01() || !p_shl35_cast_fu_5589_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl35_cast_fu_5589_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_35_cast_fu_5685_p1() {
    tmp_106_35_cast_fu_5685_p1 = esl_sext<11,10>(tmp_106_35_fu_5679_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_35_fu_5679_p2() {
    tmp_106_35_fu_5679_p2 = (!ap_const_lv10_0.is_01() || !p_shl36_cast_fu_5675_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl36_cast_fu_5675_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_36_cast_fu_5771_p1() {
    tmp_106_36_cast_fu_5771_p1 = esl_sext<11,10>(tmp_106_36_fu_5765_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_36_fu_5765_p2() {
    tmp_106_36_fu_5765_p2 = (!ap_const_lv10_0.is_01() || !p_shl37_cast_fu_5761_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl37_cast_fu_5761_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_37_cast_fu_5857_p1() {
    tmp_106_37_cast_fu_5857_p1 = esl_sext<11,10>(tmp_106_37_fu_5851_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_37_fu_5851_p2() {
    tmp_106_37_fu_5851_p2 = (!ap_const_lv10_0.is_01() || !p_shl38_cast_fu_5847_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl38_cast_fu_5847_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_38_cast_fu_5943_p1() {
    tmp_106_38_cast_fu_5943_p1 = esl_sext<11,10>(tmp_106_38_fu_5937_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_38_fu_5937_p2() {
    tmp_106_38_fu_5937_p2 = (!ap_const_lv10_0.is_01() || !p_shl39_cast_fu_5933_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl39_cast_fu_5933_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_39_cast_fu_6029_p1() {
    tmp_106_39_cast_fu_6029_p1 = esl_sext<11,10>(tmp_106_39_fu_6023_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_39_fu_6023_p2() {
    tmp_106_39_fu_6023_p2 = (!ap_const_lv10_0.is_01() || !p_shl40_cast_fu_6019_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl40_cast_fu_6019_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_3_cast_fu_2847_p1() {
    tmp_106_3_cast_fu_2847_p1 = esl_sext<11,10>(tmp_106_3_fu_2841_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_3_fu_2841_p2() {
    tmp_106_3_fu_2841_p2 = (!ap_const_lv10_0.is_01() || !p_shl3_cast_fu_2837_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl3_cast_fu_2837_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_40_cast_fu_6107_p1() {
    tmp_106_40_cast_fu_6107_p1 = esl_sext<11,10>(tmp_106_40_fu_6101_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_40_fu_6101_p2() {
    tmp_106_40_fu_6101_p2 = (!ap_const_lv10_0.is_01() || !p_shl41_cast_fu_6097_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl41_cast_fu_6097_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_4_cast_fu_2933_p1() {
    tmp_106_4_cast_fu_2933_p1 = esl_sext<11,10>(tmp_106_4_fu_2927_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_4_fu_2927_p2() {
    tmp_106_4_fu_2927_p2 = (!ap_const_lv10_0.is_01() || !p_shl4_cast_fu_2923_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl4_cast_fu_2923_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_5_cast_fu_3019_p1() {
    tmp_106_5_cast_fu_3019_p1 = esl_sext<11,10>(tmp_106_5_fu_3013_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_5_fu_3013_p2() {
    tmp_106_5_fu_3013_p2 = (!ap_const_lv10_0.is_01() || !p_shl5_cast_fu_3009_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl5_cast_fu_3009_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_6_cast_fu_3105_p1() {
    tmp_106_6_cast_fu_3105_p1 = esl_sext<11,10>(tmp_106_6_fu_3099_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_6_fu_3099_p2() {
    tmp_106_6_fu_3099_p2 = (!ap_const_lv10_0.is_01() || !p_shl6_cast_fu_3095_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl6_cast_fu_3095_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_7_cast_fu_3191_p1() {
    tmp_106_7_cast_fu_3191_p1 = esl_sext<11,10>(tmp_106_7_fu_3185_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_7_fu_3185_p2() {
    tmp_106_7_fu_3185_p2 = (!ap_const_lv10_0.is_01() || !p_shl7_cast_fu_3181_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl7_cast_fu_3181_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_8_cast_fu_3277_p1() {
    tmp_106_8_cast_fu_3277_p1 = esl_sext<11,10>(tmp_106_8_fu_3271_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_8_fu_3271_p2() {
    tmp_106_8_fu_3271_p2 = (!ap_const_lv10_0.is_01() || !p_shl8_cast_fu_3267_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl8_cast_fu_3267_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_9_cast_fu_3363_p1() {
    tmp_106_9_cast_fu_3363_p1 = esl_sext<11,10>(tmp_106_9_fu_3357_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_9_fu_3357_p2() {
    tmp_106_9_fu_3357_p2 = (!ap_const_lv10_0.is_01() || !p_shl9_cast_fu_3353_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl9_cast_fu_3353_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_cast_737_fu_3449_p1() {
    tmp_106_cast_737_fu_3449_p1 = esl_sext<11,10>(tmp_106_s_fu_3443_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_cast_fu_2569_p1() {
    tmp_106_cast_fu_2569_p1 = esl_sext<11,10>(tmp_106_fu_2563_p2.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_fu_2563_p2() {
    tmp_106_fu_2563_p2 = (!ap_const_lv10_0.is_01() || !p_shl_cast_fu_2559_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl_cast_fu_2559_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_106_s_fu_3443_p2() {
    tmp_106_s_fu_3443_p2 = (!ap_const_lv10_0.is_01() || !p_shl10_cast_fu_3439_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_0) - sc_biguint<10>(p_shl10_cast_fu_3439_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_107_cast_fu_2573_p1() {
    tmp_107_cast_fu_2573_p1 = esl_zext<11,8>(src_V_pixel_0_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_109_cast_fu_2577_p1() {
    tmp_109_cast_fu_2577_p1 = esl_zext<11,8>(linebuf_1_pixel_1_3_fu_1102.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_1139_fu_1519_p4() {
    tmp_1139_fu_1519_p4 = x_reg_1496.read().range(8, 1);
}

void Sobel_conv3x3_tile_strm::thread_tmp_113_cast_fu_2581_p1() {
    tmp_113_cast_fu_2581_p1 = esl_zext<11,8>(src_V_pixel_1_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_1141_fu_6180_p3() {
    tmp_1141_fu_6180_p3 = sum_tr_reg_8356.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1142_fu_6187_p1() {
    tmp_1142_fu_6187_p1 = sum_tr_reg_8356.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1144_fu_6218_p3() {
    tmp_1144_fu_6218_p3 = sum_tr_1_reg_8367.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1145_fu_6225_p1() {
    tmp_1145_fu_6225_p1 = sum_tr_1_reg_8367.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1147_fu_6256_p3() {
    tmp_1147_fu_6256_p3 = sum_tr_2_reg_8378.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1148_fu_6263_p1() {
    tmp_1148_fu_6263_p1 = sum_tr_2_reg_8378.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1150_fu_6294_p3() {
    tmp_1150_fu_6294_p3 = sum_tr_3_reg_8389.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1151_fu_6301_p1() {
    tmp_1151_fu_6301_p1 = sum_tr_3_reg_8389.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1153_fu_6332_p3() {
    tmp_1153_fu_6332_p3 = sum_tr_4_reg_8400.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1154_fu_6339_p1() {
    tmp_1154_fu_6339_p1 = sum_tr_4_reg_8400.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1156_fu_6370_p3() {
    tmp_1156_fu_6370_p3 = sum_tr_5_reg_8411.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1157_fu_6377_p1() {
    tmp_1157_fu_6377_p1 = sum_tr_5_reg_8411.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1159_fu_6408_p3() {
    tmp_1159_fu_6408_p3 = sum_tr_6_reg_8422.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_10_cast_cast_fu_3457_p1() {
    tmp_115_10_cast_cast_fu_3457_p1 = esl_zext<9,8>(linebuf_1_pixel_12_3_fu_1146.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_10_cast_fu_3453_p1() {
    tmp_115_10_cast_fu_3453_p1 = esl_zext<11,8>(linebuf_1_pixel_12_3_fu_1146.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_11_cast_cast_fu_3543_p1() {
    tmp_115_11_cast_cast_fu_3543_p1 = esl_zext<9,8>(linebuf_1_pixel_13_3_fu_1150.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_11_cast_fu_3539_p1() {
    tmp_115_11_cast_fu_3539_p1 = esl_zext<11,8>(linebuf_1_pixel_13_3_fu_1150.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_12_cast_cast_fu_3629_p1() {
    tmp_115_12_cast_cast_fu_3629_p1 = esl_zext<9,8>(linebuf_1_pixel_14_3_fu_1154.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_12_cast_fu_3625_p1() {
    tmp_115_12_cast_fu_3625_p1 = esl_zext<11,8>(linebuf_1_pixel_14_3_fu_1154.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_13_cast_cast_fu_3715_p1() {
    tmp_115_13_cast_cast_fu_3715_p1 = esl_zext<9,8>(linebuf_1_pixel_15_3_fu_1158.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_13_cast_fu_3711_p1() {
    tmp_115_13_cast_fu_3711_p1 = esl_zext<11,8>(linebuf_1_pixel_15_3_fu_1158.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_14_cast_cast_fu_3801_p1() {
    tmp_115_14_cast_cast_fu_3801_p1 = esl_zext<9,8>(linebuf_1_pixel_16_3_fu_1162.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_14_cast_fu_3797_p1() {
    tmp_115_14_cast_fu_3797_p1 = esl_zext<11,8>(linebuf_1_pixel_16_3_fu_1162.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_15_cast_cast_fu_3887_p1() {
    tmp_115_15_cast_cast_fu_3887_p1 = esl_zext<9,8>(linebuf_1_pixel_17_3_fu_1166.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_15_cast_fu_3883_p1() {
    tmp_115_15_cast_fu_3883_p1 = esl_zext<11,8>(linebuf_1_pixel_17_3_fu_1166.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_16_cast_cast_fu_3973_p1() {
    tmp_115_16_cast_cast_fu_3973_p1 = esl_zext<9,8>(linebuf_1_pixel_18_3_fu_1170.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_16_cast_fu_3969_p1() {
    tmp_115_16_cast_fu_3969_p1 = esl_zext<11,8>(linebuf_1_pixel_18_3_fu_1170.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_17_cast_cast_fu_4059_p1() {
    tmp_115_17_cast_cast_fu_4059_p1 = esl_zext<9,8>(linebuf_1_pixel_19_3_fu_1174.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_17_cast_fu_4055_p1() {
    tmp_115_17_cast_fu_4055_p1 = esl_zext<11,8>(linebuf_1_pixel_19_3_fu_1174.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_18_cast_cast_fu_4145_p1() {
    tmp_115_18_cast_cast_fu_4145_p1 = esl_zext<9,8>(linebuf_1_pixel_20_3_fu_1178.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_18_cast_fu_4141_p1() {
    tmp_115_18_cast_fu_4141_p1 = esl_zext<11,8>(linebuf_1_pixel_20_3_fu_1178.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_19_cast_cast_fu_4231_p1() {
    tmp_115_19_cast_cast_fu_4231_p1 = esl_zext<9,8>(linebuf_1_pixel_21_3_fu_1182.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_19_cast_fu_4227_p1() {
    tmp_115_19_cast_fu_4227_p1 = esl_zext<11,8>(linebuf_1_pixel_21_3_fu_1182.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_1_cast_cast_fu_2683_p1() {
    tmp_115_1_cast_cast_fu_2683_p1 = esl_zext<9,8>(linebuf_1_pixel_3_3_fu_1110.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_1_cast_fu_2679_p1() {
    tmp_115_1_cast_fu_2679_p1 = esl_zext<11,8>(linebuf_1_pixel_3_3_fu_1110.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_20_cast_cast_fu_4317_p1() {
    tmp_115_20_cast_cast_fu_4317_p1 = esl_zext<9,8>(linebuf_1_pixel_22_3_fu_1186.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_20_cast_fu_4313_p1() {
    tmp_115_20_cast_fu_4313_p1 = esl_zext<11,8>(linebuf_1_pixel_22_3_fu_1186.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_21_cast_cast_fu_4403_p1() {
    tmp_115_21_cast_cast_fu_4403_p1 = esl_zext<9,8>(linebuf_1_pixel_23_3_fu_1190.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_21_cast_fu_4399_p1() {
    tmp_115_21_cast_fu_4399_p1 = esl_zext<11,8>(linebuf_1_pixel_23_3_fu_1190.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_22_cast_cast_fu_4489_p1() {
    tmp_115_22_cast_cast_fu_4489_p1 = esl_zext<9,8>(linebuf_1_pixel_24_3_fu_1194.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_22_cast_fu_4485_p1() {
    tmp_115_22_cast_fu_4485_p1 = esl_zext<11,8>(linebuf_1_pixel_24_3_fu_1194.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_23_cast_cast_fu_4575_p1() {
    tmp_115_23_cast_cast_fu_4575_p1 = esl_zext<9,8>(linebuf_1_pixel_25_3_fu_1198.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_23_cast_fu_4571_p1() {
    tmp_115_23_cast_fu_4571_p1 = esl_zext<11,8>(linebuf_1_pixel_25_3_fu_1198.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_24_cast_cast_fu_4661_p1() {
    tmp_115_24_cast_cast_fu_4661_p1 = esl_zext<9,8>(linebuf_1_pixel_26_3_fu_1202.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_24_cast_fu_4657_p1() {
    tmp_115_24_cast_fu_4657_p1 = esl_zext<11,8>(linebuf_1_pixel_26_3_fu_1202.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_25_cast_cast_fu_4747_p1() {
    tmp_115_25_cast_cast_fu_4747_p1 = esl_zext<9,8>(linebuf_1_pixel_27_3_fu_1206.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_25_cast_fu_4743_p1() {
    tmp_115_25_cast_fu_4743_p1 = esl_zext<11,8>(linebuf_1_pixel_27_3_fu_1206.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_26_cast_cast_fu_4833_p1() {
    tmp_115_26_cast_cast_fu_4833_p1 = esl_zext<9,8>(linebuf_1_pixel_28_3_fu_1210.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_26_cast_fu_4829_p1() {
    tmp_115_26_cast_fu_4829_p1 = esl_zext<11,8>(linebuf_1_pixel_28_3_fu_1210.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_27_cast_cast_fu_4919_p1() {
    tmp_115_27_cast_cast_fu_4919_p1 = esl_zext<9,8>(linebuf_1_pixel_29_3_fu_1214.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_27_cast_fu_4915_p1() {
    tmp_115_27_cast_fu_4915_p1 = esl_zext<11,8>(linebuf_1_pixel_29_3_fu_1214.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_28_cast_cast_fu_5005_p1() {
    tmp_115_28_cast_cast_fu_5005_p1 = esl_zext<9,8>(linebuf_1_pixel_30_3_fu_1218.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_28_cast_fu_5001_p1() {
    tmp_115_28_cast_fu_5001_p1 = esl_zext<11,8>(linebuf_1_pixel_30_3_fu_1218.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_29_cast_cast_fu_5091_p1() {
    tmp_115_29_cast_cast_fu_5091_p1 = esl_zext<9,8>(linebuf_1_pixel_31_3_fu_1222.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_29_cast_fu_5087_p1() {
    tmp_115_29_cast_fu_5087_p1 = esl_zext<11,8>(linebuf_1_pixel_31_3_fu_1222.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_2_cast_cast_fu_2769_p1() {
    tmp_115_2_cast_cast_fu_2769_p1 = esl_zext<9,8>(linebuf_1_pixel_4_3_fu_1114.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_2_cast_fu_2765_p1() {
    tmp_115_2_cast_fu_2765_p1 = esl_zext<11,8>(linebuf_1_pixel_4_3_fu_1114.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_30_cast_cast_fu_5177_p1() {
    tmp_115_30_cast_cast_fu_5177_p1 = esl_zext<9,8>(linebuf_1_pixel_32_3_fu_1226.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_30_cast_fu_5173_p1() {
    tmp_115_30_cast_fu_5173_p1 = esl_zext<11,8>(linebuf_1_pixel_32_3_fu_1226.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_31_cast_cast_fu_5263_p1() {
    tmp_115_31_cast_cast_fu_5263_p1 = esl_zext<9,8>(linebuf_1_pixel_33_3_fu_1230.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_31_cast_fu_5259_p1() {
    tmp_115_31_cast_fu_5259_p1 = esl_zext<11,8>(linebuf_1_pixel_33_3_fu_1230.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_32_cast_cast_fu_5349_p1() {
    tmp_115_32_cast_cast_fu_5349_p1 = esl_zext<9,8>(linebuf_1_pixel_34_3_fu_1234.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_32_cast_fu_5345_p1() {
    tmp_115_32_cast_fu_5345_p1 = esl_zext<11,8>(linebuf_1_pixel_34_3_fu_1234.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_33_cast_cast_fu_5435_p1() {
    tmp_115_33_cast_cast_fu_5435_p1 = esl_zext<9,8>(linebuf_1_pixel_35_3_fu_1238.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_33_cast_fu_5431_p1() {
    tmp_115_33_cast_fu_5431_p1 = esl_zext<11,8>(linebuf_1_pixel_35_3_fu_1238.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_34_cast_cast_fu_5521_p1() {
    tmp_115_34_cast_cast_fu_5521_p1 = esl_zext<9,8>(linebuf_1_pixel_36_3_fu_1242.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_34_cast_fu_5517_p1() {
    tmp_115_34_cast_fu_5517_p1 = esl_zext<11,8>(linebuf_1_pixel_36_3_fu_1242.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_35_cast_cast_fu_5607_p1() {
    tmp_115_35_cast_cast_fu_5607_p1 = esl_zext<9,8>(linebuf_1_pixel_37_3_fu_1246.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_35_cast_fu_5603_p1() {
    tmp_115_35_cast_fu_5603_p1 = esl_zext<11,8>(linebuf_1_pixel_37_3_fu_1246.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_36_cast_cast_fu_5693_p1() {
    tmp_115_36_cast_cast_fu_5693_p1 = esl_zext<9,8>(linebuf_1_pixel_38_3_fu_1250.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_36_cast_fu_5689_p1() {
    tmp_115_36_cast_fu_5689_p1 = esl_zext<11,8>(linebuf_1_pixel_38_3_fu_1250.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_37_cast_cast_fu_5779_p1() {
    tmp_115_37_cast_cast_fu_5779_p1 = esl_zext<9,8>(linebuf_1_pixel_39_3_fu_1254.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_37_cast_fu_5775_p1() {
    tmp_115_37_cast_fu_5775_p1 = esl_zext<11,8>(linebuf_1_pixel_39_3_fu_1254.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_38_cast_cast_fu_5865_p1() {
    tmp_115_38_cast_cast_fu_5865_p1 = esl_zext<9,8>(linebuf_1_pixel_40_3_fu_1258.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_38_cast_fu_5861_p1() {
    tmp_115_38_cast_fu_5861_p1 = esl_zext<11,8>(linebuf_1_pixel_40_3_fu_1258.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_39_cast_cast_fu_5951_p1() {
    tmp_115_39_cast_cast_fu_5951_p1 = esl_zext<9,8>(linebuf_1_pixel_41_3_fu_1262.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_39_cast_fu_5947_p1() {
    tmp_115_39_cast_fu_5947_p1 = esl_zext<11,8>(linebuf_1_pixel_41_3_fu_1262.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_3_cast_cast_fu_2855_p1() {
    tmp_115_3_cast_cast_fu_2855_p1 = esl_zext<9,8>(linebuf_1_pixel_5_3_fu_1118.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_3_cast_fu_2851_p1() {
    tmp_115_3_cast_fu_2851_p1 = esl_zext<11,8>(linebuf_1_pixel_5_3_fu_1118.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_40_cast_cast_fu_6033_p1() {
    tmp_115_40_cast_cast_fu_6033_p1 = esl_zext<9,8>(linebuf_1_pixel_42_3_fu_1266.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_4_cast_cast_fu_2941_p1() {
    tmp_115_4_cast_cast_fu_2941_p1 = esl_zext<9,8>(linebuf_1_pixel_6_3_fu_1122.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_4_cast_fu_2937_p1() {
    tmp_115_4_cast_fu_2937_p1 = esl_zext<11,8>(linebuf_1_pixel_6_3_fu_1122.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_5_cast_cast_fu_3027_p1() {
    tmp_115_5_cast_cast_fu_3027_p1 = esl_zext<9,8>(linebuf_1_pixel_7_3_fu_1126.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_5_cast_fu_3023_p1() {
    tmp_115_5_cast_fu_3023_p1 = esl_zext<11,8>(linebuf_1_pixel_7_3_fu_1126.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_6_cast_cast_fu_3113_p1() {
    tmp_115_6_cast_cast_fu_3113_p1 = esl_zext<9,8>(linebuf_1_pixel_8_3_fu_1130.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_6_cast_fu_3109_p1() {
    tmp_115_6_cast_fu_3109_p1 = esl_zext<11,8>(linebuf_1_pixel_8_3_fu_1130.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_7_cast_cast_fu_3199_p1() {
    tmp_115_7_cast_cast_fu_3199_p1 = esl_zext<9,8>(linebuf_1_pixel_9_3_fu_1134.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_7_cast_fu_3195_p1() {
    tmp_115_7_cast_fu_3195_p1 = esl_zext<11,8>(linebuf_1_pixel_9_3_fu_1134.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_8_cast_cast_fu_3285_p1() {
    tmp_115_8_cast_cast_fu_3285_p1 = esl_zext<9,8>(linebuf_1_pixel_10_3_fu_1138.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_8_cast_fu_3281_p1() {
    tmp_115_8_cast_fu_3281_p1 = esl_zext<11,8>(linebuf_1_pixel_10_3_fu_1138.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_9_cast_cast_fu_3371_p1() {
    tmp_115_9_cast_cast_fu_3371_p1 = esl_zext<9,8>(linebuf_1_pixel_11_3_fu_1142.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_9_cast_fu_3367_p1() {
    tmp_115_9_cast_fu_3367_p1 = esl_zext<11,8>(linebuf_1_pixel_11_3_fu_1142.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_cast_cast_738_fu_6111_p1() {
    tmp_115_cast_cast_738_fu_6111_p1 = esl_zext<9,8>(linebuf_1_pixel_43_3_fu_1270.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_cast_cast_fu_2589_p1() {
    tmp_115_cast_cast_fu_2589_p1 = esl_zext<9,8>(linebuf_1_pixel_2_3_fu_1106.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_115_cast_fu_2585_p1() {
    tmp_115_cast_fu_2585_p1 = esl_zext<11,8>(linebuf_1_pixel_2_3_fu_1106.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_1160_fu_6415_p1() {
    tmp_1160_fu_6415_p1 = sum_tr_6_reg_8422.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1162_fu_6446_p3() {
    tmp_1162_fu_6446_p3 = sum_tr_7_reg_8433.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1163_fu_6453_p1() {
    tmp_1163_fu_6453_p1 = sum_tr_7_reg_8433.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1165_fu_6484_p3() {
    tmp_1165_fu_6484_p3 = sum_tr_8_reg_8444.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1166_fu_6491_p1() {
    tmp_1166_fu_6491_p1 = sum_tr_8_reg_8444.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1168_fu_6522_p3() {
    tmp_1168_fu_6522_p3 = sum_tr_9_reg_8455.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1169_fu_6529_p1() {
    tmp_1169_fu_6529_p1 = sum_tr_9_reg_8455.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1171_fu_6560_p3() {
    tmp_1171_fu_6560_p3 = sum_tr_10_reg_8466.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1172_fu_6567_p1() {
    tmp_1172_fu_6567_p1 = sum_tr_10_reg_8466.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1174_fu_6598_p3() {
    tmp_1174_fu_6598_p3 = sum_tr_11_reg_8477.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1175_fu_6605_p1() {
    tmp_1175_fu_6605_p1 = sum_tr_11_reg_8477.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1177_fu_6636_p3() {
    tmp_1177_fu_6636_p3 = sum_tr_12_reg_8488.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1178_fu_6643_p1() {
    tmp_1178_fu_6643_p1 = sum_tr_12_reg_8488.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1180_fu_6674_p3() {
    tmp_1180_fu_6674_p3 = sum_tr_13_reg_8499.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1181_fu_6681_p1() {
    tmp_1181_fu_6681_p1 = sum_tr_13_reg_8499.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1183_fu_6712_p3() {
    tmp_1183_fu_6712_p3 = sum_tr_14_reg_8510.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1184_fu_6719_p1() {
    tmp_1184_fu_6719_p1 = sum_tr_14_reg_8510.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1186_fu_6750_p3() {
    tmp_1186_fu_6750_p3 = sum_tr_15_reg_8521.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1187_fu_6757_p1() {
    tmp_1187_fu_6757_p1 = sum_tr_15_reg_8521.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1189_fu_6788_p3() {
    tmp_1189_fu_6788_p3 = sum_tr_16_reg_8532.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_10_cast_fu_3469_p1() {
    tmp_118_10_cast_fu_3469_p1 = esl_zext<11,9>(tmp_118_10_fu_3461_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_10_fu_3461_p3() {
    tmp_118_10_fu_3461_p3 = esl_concat<8,1>(linebuf_1_pixel_12_fu_970.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_11_cast_fu_3555_p1() {
    tmp_118_11_cast_fu_3555_p1 = esl_zext<11,9>(tmp_118_11_fu_3547_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_11_fu_3547_p3() {
    tmp_118_11_fu_3547_p3 = esl_concat<8,1>(linebuf_1_pixel_13_fu_974.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_12_cast_fu_3641_p1() {
    tmp_118_12_cast_fu_3641_p1 = esl_zext<11,9>(tmp_118_12_fu_3633_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_12_fu_3633_p3() {
    tmp_118_12_fu_3633_p3 = esl_concat<8,1>(linebuf_1_pixel_14_fu_978.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_13_cast_fu_3727_p1() {
    tmp_118_13_cast_fu_3727_p1 = esl_zext<11,9>(tmp_118_13_fu_3719_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_13_fu_3719_p3() {
    tmp_118_13_fu_3719_p3 = esl_concat<8,1>(linebuf_1_pixel_15_fu_982.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_14_cast_fu_3813_p1() {
    tmp_118_14_cast_fu_3813_p1 = esl_zext<11,9>(tmp_118_14_fu_3805_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_14_fu_3805_p3() {
    tmp_118_14_fu_3805_p3 = esl_concat<8,1>(linebuf_1_pixel_16_fu_986.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_15_cast_fu_3899_p1() {
    tmp_118_15_cast_fu_3899_p1 = esl_zext<11,9>(tmp_118_15_fu_3891_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_15_fu_3891_p3() {
    tmp_118_15_fu_3891_p3 = esl_concat<8,1>(linebuf_1_pixel_17_fu_990.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_16_cast_fu_3985_p1() {
    tmp_118_16_cast_fu_3985_p1 = esl_zext<11,9>(tmp_118_16_fu_3977_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_16_fu_3977_p3() {
    tmp_118_16_fu_3977_p3 = esl_concat<8,1>(linebuf_1_pixel_18_fu_994.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_17_cast_fu_4071_p1() {
    tmp_118_17_cast_fu_4071_p1 = esl_zext<11,9>(tmp_118_17_fu_4063_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_17_fu_4063_p3() {
    tmp_118_17_fu_4063_p3 = esl_concat<8,1>(linebuf_1_pixel_19_fu_998.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_18_cast_fu_4157_p1() {
    tmp_118_18_cast_fu_4157_p1 = esl_zext<11,9>(tmp_118_18_fu_4149_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_18_fu_4149_p3() {
    tmp_118_18_fu_4149_p3 = esl_concat<8,1>(linebuf_1_pixel_20_fu_1002.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_19_cast_fu_4243_p1() {
    tmp_118_19_cast_fu_4243_p1 = esl_zext<11,9>(tmp_118_19_fu_4235_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_19_fu_4235_p3() {
    tmp_118_19_fu_4235_p3 = esl_concat<8,1>(linebuf_1_pixel_21_fu_1006.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_1_cast_fu_2695_p1() {
    tmp_118_1_cast_fu_2695_p1 = esl_zext<11,9>(tmp_118_1_fu_2687_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_1_fu_2687_p3() {
    tmp_118_1_fu_2687_p3 = esl_concat<8,1>(linebuf_1_pixel_3_fu_934.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_20_cast_fu_4329_p1() {
    tmp_118_20_cast_fu_4329_p1 = esl_zext<11,9>(tmp_118_20_fu_4321_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_20_fu_4321_p3() {
    tmp_118_20_fu_4321_p3 = esl_concat<8,1>(linebuf_1_pixel_22_fu_1010.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_21_cast_fu_4415_p1() {
    tmp_118_21_cast_fu_4415_p1 = esl_zext<11,9>(tmp_118_21_fu_4407_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_21_fu_4407_p3() {
    tmp_118_21_fu_4407_p3 = esl_concat<8,1>(linebuf_1_pixel_23_fu_1014.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_22_cast_fu_4501_p1() {
    tmp_118_22_cast_fu_4501_p1 = esl_zext<11,9>(tmp_118_22_fu_4493_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_22_fu_4493_p3() {
    tmp_118_22_fu_4493_p3 = esl_concat<8,1>(linebuf_1_pixel_24_fu_1018.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_23_cast_fu_4587_p1() {
    tmp_118_23_cast_fu_4587_p1 = esl_zext<11,9>(tmp_118_23_fu_4579_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_23_fu_4579_p3() {
    tmp_118_23_fu_4579_p3 = esl_concat<8,1>(linebuf_1_pixel_25_fu_1022.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_24_cast_fu_4673_p1() {
    tmp_118_24_cast_fu_4673_p1 = esl_zext<11,9>(tmp_118_24_fu_4665_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_24_fu_4665_p3() {
    tmp_118_24_fu_4665_p3 = esl_concat<8,1>(linebuf_1_pixel_26_fu_1026.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_25_cast_fu_4759_p1() {
    tmp_118_25_cast_fu_4759_p1 = esl_zext<11,9>(tmp_118_25_fu_4751_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_25_fu_4751_p3() {
    tmp_118_25_fu_4751_p3 = esl_concat<8,1>(linebuf_1_pixel_27_fu_1030.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_26_cast_fu_4845_p1() {
    tmp_118_26_cast_fu_4845_p1 = esl_zext<11,9>(tmp_118_26_fu_4837_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_26_fu_4837_p3() {
    tmp_118_26_fu_4837_p3 = esl_concat<8,1>(linebuf_1_pixel_28_fu_1034.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_27_cast_fu_4931_p1() {
    tmp_118_27_cast_fu_4931_p1 = esl_zext<11,9>(tmp_118_27_fu_4923_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_27_fu_4923_p3() {
    tmp_118_27_fu_4923_p3 = esl_concat<8,1>(linebuf_1_pixel_29_fu_1038.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_28_cast_fu_5017_p1() {
    tmp_118_28_cast_fu_5017_p1 = esl_zext<11,9>(tmp_118_28_fu_5009_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_28_fu_5009_p3() {
    tmp_118_28_fu_5009_p3 = esl_concat<8,1>(linebuf_1_pixel_30_fu_1042.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_29_cast_fu_5103_p1() {
    tmp_118_29_cast_fu_5103_p1 = esl_zext<11,9>(tmp_118_29_fu_5095_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_29_fu_5095_p3() {
    tmp_118_29_fu_5095_p3 = esl_concat<8,1>(linebuf_1_pixel_31_fu_1046.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_2_cast_fu_2781_p1() {
    tmp_118_2_cast_fu_2781_p1 = esl_zext<11,9>(tmp_118_2_fu_2773_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_2_fu_2773_p3() {
    tmp_118_2_fu_2773_p3 = esl_concat<8,1>(linebuf_1_pixel_4_fu_938.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_30_cast_fu_5189_p1() {
    tmp_118_30_cast_fu_5189_p1 = esl_zext<11,9>(tmp_118_30_fu_5181_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_30_fu_5181_p3() {
    tmp_118_30_fu_5181_p3 = esl_concat<8,1>(linebuf_1_pixel_32_fu_1050.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_31_cast_fu_5275_p1() {
    tmp_118_31_cast_fu_5275_p1 = esl_zext<11,9>(tmp_118_31_fu_5267_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_31_fu_5267_p3() {
    tmp_118_31_fu_5267_p3 = esl_concat<8,1>(linebuf_1_pixel_33_fu_1054.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_32_cast_fu_5361_p1() {
    tmp_118_32_cast_fu_5361_p1 = esl_zext<11,9>(tmp_118_32_fu_5353_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_32_fu_5353_p3() {
    tmp_118_32_fu_5353_p3 = esl_concat<8,1>(linebuf_1_pixel_34_fu_1058.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_33_cast_fu_5447_p1() {
    tmp_118_33_cast_fu_5447_p1 = esl_zext<11,9>(tmp_118_33_fu_5439_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_33_fu_5439_p3() {
    tmp_118_33_fu_5439_p3 = esl_concat<8,1>(linebuf_1_pixel_35_fu_1062.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_34_cast_fu_5533_p1() {
    tmp_118_34_cast_fu_5533_p1 = esl_zext<11,9>(tmp_118_34_fu_5525_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_34_fu_5525_p3() {
    tmp_118_34_fu_5525_p3 = esl_concat<8,1>(linebuf_1_pixel_36_fu_1066.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_35_cast_fu_5619_p1() {
    tmp_118_35_cast_fu_5619_p1 = esl_zext<11,9>(tmp_118_35_fu_5611_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_35_fu_5611_p3() {
    tmp_118_35_fu_5611_p3 = esl_concat<8,1>(linebuf_1_pixel_37_fu_1070.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_36_cast_fu_5705_p1() {
    tmp_118_36_cast_fu_5705_p1 = esl_zext<11,9>(tmp_118_36_fu_5697_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_36_fu_5697_p3() {
    tmp_118_36_fu_5697_p3 = esl_concat<8,1>(linebuf_1_pixel_38_fu_1074.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_37_cast_fu_5791_p1() {
    tmp_118_37_cast_fu_5791_p1 = esl_zext<11,9>(tmp_118_37_fu_5783_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_37_fu_5783_p3() {
    tmp_118_37_fu_5783_p3 = esl_concat<8,1>(linebuf_1_pixel_39_fu_1078.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_38_cast_fu_5877_p1() {
    tmp_118_38_cast_fu_5877_p1 = esl_zext<11,9>(tmp_118_38_fu_5869_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_38_fu_5869_p3() {
    tmp_118_38_fu_5869_p3 = esl_concat<8,1>(linebuf_1_pixel_40_fu_1082.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_39_cast_fu_5963_p1() {
    tmp_118_39_cast_fu_5963_p1 = esl_zext<11,9>(tmp_118_39_fu_5955_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_39_fu_5955_p3() {
    tmp_118_39_fu_5955_p3 = esl_concat<8,1>(linebuf_1_pixel_41_fu_1086.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_3_cast_fu_2867_p1() {
    tmp_118_3_cast_fu_2867_p1 = esl_zext<11,9>(tmp_118_3_fu_2859_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_3_fu_2859_p3() {
    tmp_118_3_fu_2859_p3 = esl_concat<8,1>(linebuf_1_pixel_5_fu_942.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_40_cast_fu_6045_p1() {
    tmp_118_40_cast_fu_6045_p1 = esl_zext<11,9>(tmp_118_40_fu_6037_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_40_fu_6037_p3() {
    tmp_118_40_fu_6037_p3 = esl_concat<8,1>(linebuf_1_pixel_42_fu_1090.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_4_cast_fu_2953_p1() {
    tmp_118_4_cast_fu_2953_p1 = esl_zext<11,9>(tmp_118_4_fu_2945_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_4_fu_2945_p3() {
    tmp_118_4_fu_2945_p3 = esl_concat<8,1>(linebuf_1_pixel_6_fu_946.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_5_cast_fu_3039_p1() {
    tmp_118_5_cast_fu_3039_p1 = esl_zext<11,9>(tmp_118_5_fu_3031_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_5_fu_3031_p3() {
    tmp_118_5_fu_3031_p3 = esl_concat<8,1>(linebuf_1_pixel_7_fu_950.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_6_cast_fu_3125_p1() {
    tmp_118_6_cast_fu_3125_p1 = esl_zext<11,9>(tmp_118_6_fu_3117_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_6_fu_3117_p3() {
    tmp_118_6_fu_3117_p3 = esl_concat<8,1>(linebuf_1_pixel_8_fu_954.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_7_cast_fu_3211_p1() {
    tmp_118_7_cast_fu_3211_p1 = esl_zext<11,9>(tmp_118_7_fu_3203_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_7_fu_3203_p3() {
    tmp_118_7_fu_3203_p3 = esl_concat<8,1>(linebuf_1_pixel_9_fu_958.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_8_cast_fu_3297_p1() {
    tmp_118_8_cast_fu_3297_p1 = esl_zext<11,9>(tmp_118_8_fu_3289_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_8_fu_3289_p3() {
    tmp_118_8_fu_3289_p3 = esl_concat<8,1>(linebuf_1_pixel_10_fu_962.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_9_cast_fu_3383_p1() {
    tmp_118_9_cast_fu_3383_p1 = esl_zext<11,9>(tmp_118_9_fu_3375_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_9_fu_3375_p3() {
    tmp_118_9_fu_3375_p3 = esl_concat<8,1>(linebuf_1_pixel_11_fu_966.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_cast_739_fu_6123_p1() {
    tmp_118_cast_739_fu_6123_p1 = esl_zext<11,9>(tmp_118_s_fu_6115_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_cast_fu_2601_p1() {
    tmp_118_cast_fu_2601_p1 = esl_zext<11,9>(tmp_118_fu_2593_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_fu_2593_p3() {
    tmp_118_fu_2593_p3 = esl_concat<8,1>(linebuf_1_pixel_2_fu_930.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_118_s_fu_6115_p3() {
    tmp_118_s_fu_6115_p3 = esl_concat<8,1>(linebuf_1_pixel_43_fu_1094.read(), ap_const_lv1_0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1190_fu_6795_p1() {
    tmp_1190_fu_6795_p1 = sum_tr_16_reg_8532.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1192_fu_6826_p3() {
    tmp_1192_fu_6826_p3 = sum_tr_17_reg_8543.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1193_fu_6833_p1() {
    tmp_1193_fu_6833_p1 = sum_tr_17_reg_8543.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1195_fu_6864_p3() {
    tmp_1195_fu_6864_p3 = sum_tr_18_reg_8554.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1196_fu_6871_p1() {
    tmp_1196_fu_6871_p1 = sum_tr_18_reg_8554.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1198_fu_6902_p3() {
    tmp_1198_fu_6902_p3 = sum_tr_19_reg_8565.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1199_fu_6909_p1() {
    tmp_1199_fu_6909_p1 = sum_tr_19_reg_8565.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_10_cast_cast_fu_3477_p1() {
    tmp_119_10_cast_cast_fu_3477_p1 = esl_zext<9,8>(src_V_pixel_12_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_10_cast_fu_3473_p1() {
    tmp_119_10_cast_fu_3473_p1 = esl_zext<11,8>(src_V_pixel_12_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_11_cast_cast_fu_3563_p1() {
    tmp_119_11_cast_cast_fu_3563_p1 = esl_zext<9,8>(src_V_pixel_13_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_11_cast_fu_3559_p1() {
    tmp_119_11_cast_fu_3559_p1 = esl_zext<11,8>(src_V_pixel_13_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_12_cast_cast_fu_3649_p1() {
    tmp_119_12_cast_cast_fu_3649_p1 = esl_zext<9,8>(src_V_pixel_14_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_12_cast_fu_3645_p1() {
    tmp_119_12_cast_fu_3645_p1 = esl_zext<11,8>(src_V_pixel_14_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_13_cast_cast_fu_3735_p1() {
    tmp_119_13_cast_cast_fu_3735_p1 = esl_zext<9,8>(src_V_pixel_15_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_13_cast_fu_3731_p1() {
    tmp_119_13_cast_fu_3731_p1 = esl_zext<11,8>(src_V_pixel_15_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_14_cast_cast_fu_3821_p1() {
    tmp_119_14_cast_cast_fu_3821_p1 = esl_zext<9,8>(src_V_pixel_16_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_14_cast_fu_3817_p1() {
    tmp_119_14_cast_fu_3817_p1 = esl_zext<11,8>(src_V_pixel_16_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_15_cast_cast_fu_3907_p1() {
    tmp_119_15_cast_cast_fu_3907_p1 = esl_zext<9,8>(src_V_pixel_17_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_15_cast_fu_3903_p1() {
    tmp_119_15_cast_fu_3903_p1 = esl_zext<11,8>(src_V_pixel_17_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_16_cast_cast_fu_3993_p1() {
    tmp_119_16_cast_cast_fu_3993_p1 = esl_zext<9,8>(src_V_pixel_18_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_16_cast_fu_3989_p1() {
    tmp_119_16_cast_fu_3989_p1 = esl_zext<11,8>(src_V_pixel_18_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_17_cast_cast_fu_4079_p1() {
    tmp_119_17_cast_cast_fu_4079_p1 = esl_zext<9,8>(src_V_pixel_19_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_17_cast_fu_4075_p1() {
    tmp_119_17_cast_fu_4075_p1 = esl_zext<11,8>(src_V_pixel_19_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_18_cast_cast_fu_4165_p1() {
    tmp_119_18_cast_cast_fu_4165_p1 = esl_zext<9,8>(src_V_pixel_20_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_18_cast_fu_4161_p1() {
    tmp_119_18_cast_fu_4161_p1 = esl_zext<11,8>(src_V_pixel_20_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_19_cast_cast_fu_4251_p1() {
    tmp_119_19_cast_cast_fu_4251_p1 = esl_zext<9,8>(src_V_pixel_21_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_19_cast_fu_4247_p1() {
    tmp_119_19_cast_fu_4247_p1 = esl_zext<11,8>(src_V_pixel_21_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_1_cast_cast_fu_2703_p1() {
    tmp_119_1_cast_cast_fu_2703_p1 = esl_zext<9,8>(src_V_pixel_3_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_1_cast_fu_2699_p1() {
    tmp_119_1_cast_fu_2699_p1 = esl_zext<11,8>(src_V_pixel_3_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_20_cast_cast_fu_4337_p1() {
    tmp_119_20_cast_cast_fu_4337_p1 = esl_zext<9,8>(src_V_pixel_22_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_20_cast_fu_4333_p1() {
    tmp_119_20_cast_fu_4333_p1 = esl_zext<11,8>(src_V_pixel_22_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_21_cast_cast_fu_4423_p1() {
    tmp_119_21_cast_cast_fu_4423_p1 = esl_zext<9,8>(src_V_pixel_23_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_21_cast_fu_4419_p1() {
    tmp_119_21_cast_fu_4419_p1 = esl_zext<11,8>(src_V_pixel_23_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_22_cast_cast_fu_4509_p1() {
    tmp_119_22_cast_cast_fu_4509_p1 = esl_zext<9,8>(src_V_pixel_24_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_22_cast_fu_4505_p1() {
    tmp_119_22_cast_fu_4505_p1 = esl_zext<11,8>(src_V_pixel_24_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_23_cast_cast_fu_4595_p1() {
    tmp_119_23_cast_cast_fu_4595_p1 = esl_zext<9,8>(src_V_pixel_25_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_23_cast_fu_4591_p1() {
    tmp_119_23_cast_fu_4591_p1 = esl_zext<11,8>(src_V_pixel_25_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_24_cast_cast_fu_4681_p1() {
    tmp_119_24_cast_cast_fu_4681_p1 = esl_zext<9,8>(src_V_pixel_26_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_24_cast_fu_4677_p1() {
    tmp_119_24_cast_fu_4677_p1 = esl_zext<11,8>(src_V_pixel_26_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_25_cast_cast_fu_4767_p1() {
    tmp_119_25_cast_cast_fu_4767_p1 = esl_zext<9,8>(src_V_pixel_27_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_25_cast_fu_4763_p1() {
    tmp_119_25_cast_fu_4763_p1 = esl_zext<11,8>(src_V_pixel_27_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_26_cast_cast_fu_4853_p1() {
    tmp_119_26_cast_cast_fu_4853_p1 = esl_zext<9,8>(src_V_pixel_28_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_26_cast_fu_4849_p1() {
    tmp_119_26_cast_fu_4849_p1 = esl_zext<11,8>(src_V_pixel_28_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_27_cast_cast_fu_4939_p1() {
    tmp_119_27_cast_cast_fu_4939_p1 = esl_zext<9,8>(src_V_pixel_29_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_27_cast_fu_4935_p1() {
    tmp_119_27_cast_fu_4935_p1 = esl_zext<11,8>(src_V_pixel_29_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_28_cast_cast_fu_5025_p1() {
    tmp_119_28_cast_cast_fu_5025_p1 = esl_zext<9,8>(src_V_pixel_30_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_28_cast_fu_5021_p1() {
    tmp_119_28_cast_fu_5021_p1 = esl_zext<11,8>(src_V_pixel_30_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_29_cast_cast_fu_5111_p1() {
    tmp_119_29_cast_cast_fu_5111_p1 = esl_zext<9,8>(src_V_pixel_31_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_29_cast_fu_5107_p1() {
    tmp_119_29_cast_fu_5107_p1 = esl_zext<11,8>(src_V_pixel_31_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_2_cast_cast_fu_2789_p1() {
    tmp_119_2_cast_cast_fu_2789_p1 = esl_zext<9,8>(src_V_pixel_4_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_2_cast_fu_2785_p1() {
    tmp_119_2_cast_fu_2785_p1 = esl_zext<11,8>(src_V_pixel_4_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_30_cast_cast_fu_5197_p1() {
    tmp_119_30_cast_cast_fu_5197_p1 = esl_zext<9,8>(src_V_pixel_32_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_30_cast_fu_5193_p1() {
    tmp_119_30_cast_fu_5193_p1 = esl_zext<11,8>(src_V_pixel_32_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_31_cast_cast_fu_5283_p1() {
    tmp_119_31_cast_cast_fu_5283_p1 = esl_zext<9,8>(src_V_pixel_33_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_31_cast_fu_5279_p1() {
    tmp_119_31_cast_fu_5279_p1 = esl_zext<11,8>(src_V_pixel_33_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_32_cast_cast_fu_5369_p1() {
    tmp_119_32_cast_cast_fu_5369_p1 = esl_zext<9,8>(src_V_pixel_34_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_32_cast_fu_5365_p1() {
    tmp_119_32_cast_fu_5365_p1 = esl_zext<11,8>(src_V_pixel_34_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_33_cast_cast_fu_5455_p1() {
    tmp_119_33_cast_cast_fu_5455_p1 = esl_zext<9,8>(src_V_pixel_35_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_33_cast_fu_5451_p1() {
    tmp_119_33_cast_fu_5451_p1 = esl_zext<11,8>(src_V_pixel_35_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_34_cast_cast_fu_5541_p1() {
    tmp_119_34_cast_cast_fu_5541_p1 = esl_zext<9,8>(src_V_pixel_36_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_34_cast_fu_5537_p1() {
    tmp_119_34_cast_fu_5537_p1 = esl_zext<11,8>(src_V_pixel_36_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_35_cast_cast_fu_5627_p1() {
    tmp_119_35_cast_cast_fu_5627_p1 = esl_zext<9,8>(src_V_pixel_37_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_35_cast_fu_5623_p1() {
    tmp_119_35_cast_fu_5623_p1 = esl_zext<11,8>(src_V_pixel_37_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_36_cast_cast_fu_5713_p1() {
    tmp_119_36_cast_cast_fu_5713_p1 = esl_zext<9,8>(src_V_pixel_38_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_36_cast_fu_5709_p1() {
    tmp_119_36_cast_fu_5709_p1 = esl_zext<11,8>(src_V_pixel_38_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_37_cast_cast_fu_5799_p1() {
    tmp_119_37_cast_cast_fu_5799_p1 = esl_zext<9,8>(src_V_pixel_39_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_37_cast_fu_5795_p1() {
    tmp_119_37_cast_fu_5795_p1 = esl_zext<11,8>(src_V_pixel_39_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_38_cast_cast_fu_5885_p1() {
    tmp_119_38_cast_cast_fu_5885_p1 = esl_zext<9,8>(src_V_pixel_40_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_38_cast_fu_5881_p1() {
    tmp_119_38_cast_fu_5881_p1 = esl_zext<11,8>(src_V_pixel_40_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_39_cast_cast_fu_5971_p1() {
    tmp_119_39_cast_cast_fu_5971_p1 = esl_zext<9,8>(src_V_pixel_41_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_39_cast_fu_5967_p1() {
    tmp_119_39_cast_fu_5967_p1 = esl_zext<11,8>(src_V_pixel_41_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_3_cast_cast_fu_2875_p1() {
    tmp_119_3_cast_cast_fu_2875_p1 = esl_zext<9,8>(src_V_pixel_5_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_3_cast_fu_2871_p1() {
    tmp_119_3_cast_fu_2871_p1 = esl_zext<11,8>(src_V_pixel_5_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_4_cast_cast_fu_2961_p1() {
    tmp_119_4_cast_cast_fu_2961_p1 = esl_zext<9,8>(src_V_pixel_6_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_4_cast_fu_2957_p1() {
    tmp_119_4_cast_fu_2957_p1 = esl_zext<11,8>(src_V_pixel_6_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_5_cast_cast_fu_3047_p1() {
    tmp_119_5_cast_cast_fu_3047_p1 = esl_zext<9,8>(src_V_pixel_7_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_5_cast_fu_3043_p1() {
    tmp_119_5_cast_fu_3043_p1 = esl_zext<11,8>(src_V_pixel_7_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_6_cast_cast_fu_3133_p1() {
    tmp_119_6_cast_cast_fu_3133_p1 = esl_zext<9,8>(src_V_pixel_8_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_6_cast_fu_3129_p1() {
    tmp_119_6_cast_fu_3129_p1 = esl_zext<11,8>(src_V_pixel_8_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_7_cast_cast_fu_3219_p1() {
    tmp_119_7_cast_cast_fu_3219_p1 = esl_zext<9,8>(src_V_pixel_9_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_7_cast_fu_3215_p1() {
    tmp_119_7_cast_fu_3215_p1 = esl_zext<11,8>(src_V_pixel_9_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_8_cast_cast_fu_3305_p1() {
    tmp_119_8_cast_cast_fu_3305_p1 = esl_zext<9,8>(src_V_pixel_10_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_8_cast_fu_3301_p1() {
    tmp_119_8_cast_fu_3301_p1 = esl_zext<11,8>(src_V_pixel_10_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_9_cast_cast_fu_3391_p1() {
    tmp_119_9_cast_cast_fu_3391_p1 = esl_zext<9,8>(src_V_pixel_11_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_9_cast_fu_3387_p1() {
    tmp_119_9_cast_fu_3387_p1 = esl_zext<11,8>(src_V_pixel_11_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_cast_cast_fu_2609_p1() {
    tmp_119_cast_cast_fu_2609_p1 = esl_zext<9,8>(src_V_pixel_2_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_119_cast_fu_2605_p1() {
    tmp_119_cast_fu_2605_p1 = esl_zext<11,8>(src_V_pixel_2_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_1201_fu_6940_p3() {
    tmp_1201_fu_6940_p3 = sum_tr_20_reg_8576.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1202_fu_6947_p1() {
    tmp_1202_fu_6947_p1 = sum_tr_20_reg_8576.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1204_fu_6978_p3() {
    tmp_1204_fu_6978_p3 = sum_tr_21_reg_8587.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1205_fu_6985_p1() {
    tmp_1205_fu_6985_p1 = sum_tr_21_reg_8587.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1207_fu_7016_p3() {
    tmp_1207_fu_7016_p3 = sum_tr_22_reg_8598.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1208_fu_7023_p1() {
    tmp_1208_fu_7023_p1 = sum_tr_22_reg_8598.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1210_fu_7054_p3() {
    tmp_1210_fu_7054_p3 = sum_tr_23_reg_8609.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1211_fu_7061_p1() {
    tmp_1211_fu_7061_p1 = sum_tr_23_reg_8609.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1213_fu_7092_p3() {
    tmp_1213_fu_7092_p3 = sum_tr_24_reg_8620.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1214_fu_7099_p1() {
    tmp_1214_fu_7099_p1 = sum_tr_24_reg_8620.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1216_fu_7130_p3() {
    tmp_1216_fu_7130_p3 = sum_tr_25_reg_8631.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1217_fu_7137_p1() {
    tmp_1217_fu_7137_p1 = sum_tr_25_reg_8631.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1219_fu_7168_p3() {
    tmp_1219_fu_7168_p3 = sum_tr_26_reg_8642.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_10_fu_3481_p2() {
    tmp_121_10_fu_3481_p2 = (!tmp_106_cast_737_fu_3449_p1.read().is_01() || !tmp_115_8_cast_fu_3281_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_cast_737_fu_3449_p1.read()) - sc_biguint<11>(tmp_115_8_cast_fu_3281_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_11_fu_3567_p2() {
    tmp_121_11_fu_3567_p2 = (!tmp_106_10_cast_fu_3535_p1.read().is_01() || !tmp_115_9_cast_fu_3367_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_10_cast_fu_3535_p1.read()) - sc_biguint<11>(tmp_115_9_cast_fu_3367_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_12_fu_3653_p2() {
    tmp_121_12_fu_3653_p2 = (!tmp_106_11_cast_fu_3621_p1.read().is_01() || !tmp_115_10_cast_fu_3453_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_11_cast_fu_3621_p1.read()) - sc_biguint<11>(tmp_115_10_cast_fu_3453_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_13_fu_3739_p2() {
    tmp_121_13_fu_3739_p2 = (!tmp_106_12_cast_fu_3707_p1.read().is_01() || !tmp_115_11_cast_fu_3539_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_12_cast_fu_3707_p1.read()) - sc_biguint<11>(tmp_115_11_cast_fu_3539_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_14_fu_3825_p2() {
    tmp_121_14_fu_3825_p2 = (!tmp_106_13_cast_fu_3793_p1.read().is_01() || !tmp_115_12_cast_fu_3625_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_13_cast_fu_3793_p1.read()) - sc_biguint<11>(tmp_115_12_cast_fu_3625_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_15_fu_3911_p2() {
    tmp_121_15_fu_3911_p2 = (!tmp_106_14_cast_fu_3879_p1.read().is_01() || !tmp_115_13_cast_fu_3711_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_14_cast_fu_3879_p1.read()) - sc_biguint<11>(tmp_115_13_cast_fu_3711_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_16_fu_3997_p2() {
    tmp_121_16_fu_3997_p2 = (!tmp_106_15_cast_fu_3965_p1.read().is_01() || !tmp_115_14_cast_fu_3797_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_15_cast_fu_3965_p1.read()) - sc_biguint<11>(tmp_115_14_cast_fu_3797_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_17_fu_4083_p2() {
    tmp_121_17_fu_4083_p2 = (!tmp_106_16_cast_fu_4051_p1.read().is_01() || !tmp_115_15_cast_fu_3883_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_16_cast_fu_4051_p1.read()) - sc_biguint<11>(tmp_115_15_cast_fu_3883_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_18_fu_4169_p2() {
    tmp_121_18_fu_4169_p2 = (!tmp_106_17_cast_fu_4137_p1.read().is_01() || !tmp_115_16_cast_fu_3969_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_17_cast_fu_4137_p1.read()) - sc_biguint<11>(tmp_115_16_cast_fu_3969_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_19_fu_4255_p2() {
    tmp_121_19_fu_4255_p2 = (!tmp_106_18_cast_fu_4223_p1.read().is_01() || !tmp_115_17_cast_fu_4055_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_18_cast_fu_4223_p1.read()) - sc_biguint<11>(tmp_115_17_cast_fu_4055_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_1_fu_2707_p2() {
    tmp_121_1_fu_2707_p2 = (!tmp_106_1_cast_fu_2675_p1.read().is_01() || !tmp_109_cast_fu_2577_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_1_cast_fu_2675_p1.read()) - sc_biguint<11>(tmp_109_cast_fu_2577_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_20_fu_4341_p2() {
    tmp_121_20_fu_4341_p2 = (!tmp_106_19_cast_fu_4309_p1.read().is_01() || !tmp_115_18_cast_fu_4141_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_19_cast_fu_4309_p1.read()) - sc_biguint<11>(tmp_115_18_cast_fu_4141_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_21_fu_4427_p2() {
    tmp_121_21_fu_4427_p2 = (!tmp_106_20_cast_fu_4395_p1.read().is_01() || !tmp_115_19_cast_fu_4227_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_20_cast_fu_4395_p1.read()) - sc_biguint<11>(tmp_115_19_cast_fu_4227_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_22_fu_4513_p2() {
    tmp_121_22_fu_4513_p2 = (!tmp_106_21_cast_fu_4481_p1.read().is_01() || !tmp_115_20_cast_fu_4313_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_21_cast_fu_4481_p1.read()) - sc_biguint<11>(tmp_115_20_cast_fu_4313_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_23_fu_4599_p2() {
    tmp_121_23_fu_4599_p2 = (!tmp_106_22_cast_fu_4567_p1.read().is_01() || !tmp_115_21_cast_fu_4399_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_22_cast_fu_4567_p1.read()) - sc_biguint<11>(tmp_115_21_cast_fu_4399_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_24_fu_4685_p2() {
    tmp_121_24_fu_4685_p2 = (!tmp_106_23_cast_fu_4653_p1.read().is_01() || !tmp_115_22_cast_fu_4485_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_23_cast_fu_4653_p1.read()) - sc_biguint<11>(tmp_115_22_cast_fu_4485_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_25_fu_4771_p2() {
    tmp_121_25_fu_4771_p2 = (!tmp_106_24_cast_fu_4739_p1.read().is_01() || !tmp_115_23_cast_fu_4571_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_24_cast_fu_4739_p1.read()) - sc_biguint<11>(tmp_115_23_cast_fu_4571_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_26_fu_4857_p2() {
    tmp_121_26_fu_4857_p2 = (!tmp_106_25_cast_fu_4825_p1.read().is_01() || !tmp_115_24_cast_fu_4657_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_25_cast_fu_4825_p1.read()) - sc_biguint<11>(tmp_115_24_cast_fu_4657_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_27_fu_4943_p2() {
    tmp_121_27_fu_4943_p2 = (!tmp_106_26_cast_fu_4911_p1.read().is_01() || !tmp_115_25_cast_fu_4743_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_26_cast_fu_4911_p1.read()) - sc_biguint<11>(tmp_115_25_cast_fu_4743_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_28_fu_5029_p2() {
    tmp_121_28_fu_5029_p2 = (!tmp_106_27_cast_fu_4997_p1.read().is_01() || !tmp_115_26_cast_fu_4829_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_27_cast_fu_4997_p1.read()) - sc_biguint<11>(tmp_115_26_cast_fu_4829_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_29_fu_5115_p2() {
    tmp_121_29_fu_5115_p2 = (!tmp_106_28_cast_fu_5083_p1.read().is_01() || !tmp_115_27_cast_fu_4915_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_28_cast_fu_5083_p1.read()) - sc_biguint<11>(tmp_115_27_cast_fu_4915_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_2_fu_2793_p2() {
    tmp_121_2_fu_2793_p2 = (!tmp_106_2_cast_fu_2761_p1.read().is_01() || !tmp_115_cast_fu_2585_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_2_cast_fu_2761_p1.read()) - sc_biguint<11>(tmp_115_cast_fu_2585_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_30_fu_5201_p2() {
    tmp_121_30_fu_5201_p2 = (!tmp_106_29_cast_fu_5169_p1.read().is_01() || !tmp_115_28_cast_fu_5001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_29_cast_fu_5169_p1.read()) - sc_biguint<11>(tmp_115_28_cast_fu_5001_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_31_fu_5287_p2() {
    tmp_121_31_fu_5287_p2 = (!tmp_106_30_cast_fu_5255_p1.read().is_01() || !tmp_115_29_cast_fu_5087_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_30_cast_fu_5255_p1.read()) - sc_biguint<11>(tmp_115_29_cast_fu_5087_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_32_fu_5373_p2() {
    tmp_121_32_fu_5373_p2 = (!tmp_106_31_cast_fu_5341_p1.read().is_01() || !tmp_115_30_cast_fu_5173_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_31_cast_fu_5341_p1.read()) - sc_biguint<11>(tmp_115_30_cast_fu_5173_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_33_fu_5459_p2() {
    tmp_121_33_fu_5459_p2 = (!tmp_106_32_cast_fu_5427_p1.read().is_01() || !tmp_115_31_cast_fu_5259_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_32_cast_fu_5427_p1.read()) - sc_biguint<11>(tmp_115_31_cast_fu_5259_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_34_fu_5545_p2() {
    tmp_121_34_fu_5545_p2 = (!tmp_106_33_cast_fu_5513_p1.read().is_01() || !tmp_115_32_cast_fu_5345_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_33_cast_fu_5513_p1.read()) - sc_biguint<11>(tmp_115_32_cast_fu_5345_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_35_fu_5631_p2() {
    tmp_121_35_fu_5631_p2 = (!tmp_106_34_cast_fu_5599_p1.read().is_01() || !tmp_115_33_cast_fu_5431_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_34_cast_fu_5599_p1.read()) - sc_biguint<11>(tmp_115_33_cast_fu_5431_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_36_fu_5717_p2() {
    tmp_121_36_fu_5717_p2 = (!tmp_106_35_cast_fu_5685_p1.read().is_01() || !tmp_115_34_cast_fu_5517_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_35_cast_fu_5685_p1.read()) - sc_biguint<11>(tmp_115_34_cast_fu_5517_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_37_fu_5803_p2() {
    tmp_121_37_fu_5803_p2 = (!tmp_106_36_cast_fu_5771_p1.read().is_01() || !tmp_115_35_cast_fu_5603_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_36_cast_fu_5771_p1.read()) - sc_biguint<11>(tmp_115_35_cast_fu_5603_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_38_fu_5889_p2() {
    tmp_121_38_fu_5889_p2 = (!tmp_106_37_cast_fu_5857_p1.read().is_01() || !tmp_115_36_cast_fu_5689_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_37_cast_fu_5857_p1.read()) - sc_biguint<11>(tmp_115_36_cast_fu_5689_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_39_fu_5975_p2() {
    tmp_121_39_fu_5975_p2 = (!tmp_106_38_cast_fu_5943_p1.read().is_01() || !tmp_115_37_cast_fu_5775_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_38_cast_fu_5943_p1.read()) - sc_biguint<11>(tmp_115_37_cast_fu_5775_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_3_fu_2879_p2() {
    tmp_121_3_fu_2879_p2 = (!tmp_106_3_cast_fu_2847_p1.read().is_01() || !tmp_115_1_cast_fu_2679_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_3_cast_fu_2847_p1.read()) - sc_biguint<11>(tmp_115_1_cast_fu_2679_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_40_fu_6049_p2() {
    tmp_121_40_fu_6049_p2 = (!tmp_106_39_cast_fu_6029_p1.read().is_01() || !tmp_115_38_cast_fu_5861_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_39_cast_fu_6029_p1.read()) - sc_biguint<11>(tmp_115_38_cast_fu_5861_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_4_fu_2965_p2() {
    tmp_121_4_fu_2965_p2 = (!tmp_106_4_cast_fu_2933_p1.read().is_01() || !tmp_115_2_cast_fu_2765_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_4_cast_fu_2933_p1.read()) - sc_biguint<11>(tmp_115_2_cast_fu_2765_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_5_fu_3051_p2() {
    tmp_121_5_fu_3051_p2 = (!tmp_106_5_cast_fu_3019_p1.read().is_01() || !tmp_115_3_cast_fu_2851_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_5_cast_fu_3019_p1.read()) - sc_biguint<11>(tmp_115_3_cast_fu_2851_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_6_fu_3137_p2() {
    tmp_121_6_fu_3137_p2 = (!tmp_106_6_cast_fu_3105_p1.read().is_01() || !tmp_115_4_cast_fu_2937_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_6_cast_fu_3105_p1.read()) - sc_biguint<11>(tmp_115_4_cast_fu_2937_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_7_fu_3223_p2() {
    tmp_121_7_fu_3223_p2 = (!tmp_106_7_cast_fu_3191_p1.read().is_01() || !tmp_115_5_cast_fu_3023_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_7_cast_fu_3191_p1.read()) - sc_biguint<11>(tmp_115_5_cast_fu_3023_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_8_fu_3309_p2() {
    tmp_121_8_fu_3309_p2 = (!tmp_106_8_cast_fu_3277_p1.read().is_01() || !tmp_115_6_cast_fu_3109_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_8_cast_fu_3277_p1.read()) - sc_biguint<11>(tmp_115_6_cast_fu_3109_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_9_fu_3395_p2() {
    tmp_121_9_fu_3395_p2 = (!tmp_106_9_cast_fu_3363_p1.read().is_01() || !tmp_115_7_cast_fu_3195_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_9_cast_fu_3363_p1.read()) - sc_biguint<11>(tmp_115_7_cast_fu_3195_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_fu_2613_p2() {
    tmp_121_fu_2613_p2 = (!tmp_106_cast_fu_2569_p1.read().is_01() || !tmp_103_cast_fu_2547_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_cast_fu_2569_p1.read()) - sc_biguint<11>(tmp_103_cast_fu_2547_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_121_s_fu_6127_p2() {
    tmp_121_s_fu_6127_p2 = (!tmp_106_40_cast_fu_6107_p1.read().is_01() || !tmp_115_39_cast_fu_5947_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_106_40_cast_fu_6107_p1.read()) - sc_biguint<11>(tmp_115_39_cast_fu_5947_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_1220_fu_7175_p1() {
    tmp_1220_fu_7175_p1 = sum_tr_26_reg_8642.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1222_fu_7206_p3() {
    tmp_1222_fu_7206_p3 = sum_tr_27_reg_8653.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1223_fu_7213_p1() {
    tmp_1223_fu_7213_p1 = sum_tr_27_reg_8653.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1225_fu_7244_p3() {
    tmp_1225_fu_7244_p3 = sum_tr_28_reg_8664.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1226_fu_7251_p1() {
    tmp_1226_fu_7251_p1 = sum_tr_28_reg_8664.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1228_fu_7282_p3() {
    tmp_1228_fu_7282_p3 = sum_tr_29_reg_8675.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1229_fu_7289_p1() {
    tmp_1229_fu_7289_p1 = sum_tr_29_reg_8675.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_10_fu_3487_p2() {
    tmp_122_10_fu_3487_p2 = (!tmp_121_10_fu_3481_p2.read().is_01() || !tmp_119_8_cast_fu_3301_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_10_fu_3481_p2.read()) - sc_biguint<11>(tmp_119_8_cast_fu_3301_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_11_fu_3573_p2() {
    tmp_122_11_fu_3573_p2 = (!tmp_121_11_fu_3567_p2.read().is_01() || !tmp_119_9_cast_fu_3387_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_11_fu_3567_p2.read()) - sc_biguint<11>(tmp_119_9_cast_fu_3387_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_12_fu_3659_p2() {
    tmp_122_12_fu_3659_p2 = (!tmp_121_12_fu_3653_p2.read().is_01() || !tmp_119_10_cast_fu_3473_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_12_fu_3653_p2.read()) - sc_biguint<11>(tmp_119_10_cast_fu_3473_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_13_fu_3745_p2() {
    tmp_122_13_fu_3745_p2 = (!tmp_121_13_fu_3739_p2.read().is_01() || !tmp_119_11_cast_fu_3559_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_13_fu_3739_p2.read()) - sc_biguint<11>(tmp_119_11_cast_fu_3559_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_14_fu_3831_p2() {
    tmp_122_14_fu_3831_p2 = (!tmp_121_14_fu_3825_p2.read().is_01() || !tmp_119_12_cast_fu_3645_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_14_fu_3825_p2.read()) - sc_biguint<11>(tmp_119_12_cast_fu_3645_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_15_fu_3917_p2() {
    tmp_122_15_fu_3917_p2 = (!tmp_121_15_fu_3911_p2.read().is_01() || !tmp_119_13_cast_fu_3731_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_15_fu_3911_p2.read()) - sc_biguint<11>(tmp_119_13_cast_fu_3731_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_16_fu_4003_p2() {
    tmp_122_16_fu_4003_p2 = (!tmp_121_16_fu_3997_p2.read().is_01() || !tmp_119_14_cast_fu_3817_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_16_fu_3997_p2.read()) - sc_biguint<11>(tmp_119_14_cast_fu_3817_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_17_fu_4089_p2() {
    tmp_122_17_fu_4089_p2 = (!tmp_121_17_fu_4083_p2.read().is_01() || !tmp_119_15_cast_fu_3903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_17_fu_4083_p2.read()) - sc_biguint<11>(tmp_119_15_cast_fu_3903_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_18_fu_4175_p2() {
    tmp_122_18_fu_4175_p2 = (!tmp_121_18_fu_4169_p2.read().is_01() || !tmp_119_16_cast_fu_3989_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_18_fu_4169_p2.read()) - sc_biguint<11>(tmp_119_16_cast_fu_3989_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_19_fu_4261_p2() {
    tmp_122_19_fu_4261_p2 = (!tmp_121_19_fu_4255_p2.read().is_01() || !tmp_119_17_cast_fu_4075_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_19_fu_4255_p2.read()) - sc_biguint<11>(tmp_119_17_cast_fu_4075_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_1_fu_2713_p2() {
    tmp_122_1_fu_2713_p2 = (!tmp_121_1_fu_2707_p2.read().is_01() || !tmp_113_cast_fu_2581_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_1_fu_2707_p2.read()) - sc_biguint<11>(tmp_113_cast_fu_2581_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_20_fu_4347_p2() {
    tmp_122_20_fu_4347_p2 = (!tmp_121_20_fu_4341_p2.read().is_01() || !tmp_119_18_cast_fu_4161_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_20_fu_4341_p2.read()) - sc_biguint<11>(tmp_119_18_cast_fu_4161_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_21_fu_4433_p2() {
    tmp_122_21_fu_4433_p2 = (!tmp_121_21_fu_4427_p2.read().is_01() || !tmp_119_19_cast_fu_4247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_21_fu_4427_p2.read()) - sc_biguint<11>(tmp_119_19_cast_fu_4247_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_22_fu_4519_p2() {
    tmp_122_22_fu_4519_p2 = (!tmp_121_22_fu_4513_p2.read().is_01() || !tmp_119_20_cast_fu_4333_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_22_fu_4513_p2.read()) - sc_biguint<11>(tmp_119_20_cast_fu_4333_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_23_fu_4605_p2() {
    tmp_122_23_fu_4605_p2 = (!tmp_121_23_fu_4599_p2.read().is_01() || !tmp_119_21_cast_fu_4419_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_23_fu_4599_p2.read()) - sc_biguint<11>(tmp_119_21_cast_fu_4419_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_24_fu_4691_p2() {
    tmp_122_24_fu_4691_p2 = (!tmp_121_24_fu_4685_p2.read().is_01() || !tmp_119_22_cast_fu_4505_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_24_fu_4685_p2.read()) - sc_biguint<11>(tmp_119_22_cast_fu_4505_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_25_fu_4777_p2() {
    tmp_122_25_fu_4777_p2 = (!tmp_121_25_fu_4771_p2.read().is_01() || !tmp_119_23_cast_fu_4591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_25_fu_4771_p2.read()) - sc_biguint<11>(tmp_119_23_cast_fu_4591_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_26_fu_4863_p2() {
    tmp_122_26_fu_4863_p2 = (!tmp_121_26_fu_4857_p2.read().is_01() || !tmp_119_24_cast_fu_4677_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_26_fu_4857_p2.read()) - sc_biguint<11>(tmp_119_24_cast_fu_4677_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_27_fu_4949_p2() {
    tmp_122_27_fu_4949_p2 = (!tmp_121_27_fu_4943_p2.read().is_01() || !tmp_119_25_cast_fu_4763_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_27_fu_4943_p2.read()) - sc_biguint<11>(tmp_119_25_cast_fu_4763_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_28_fu_5035_p2() {
    tmp_122_28_fu_5035_p2 = (!tmp_121_28_fu_5029_p2.read().is_01() || !tmp_119_26_cast_fu_4849_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_28_fu_5029_p2.read()) - sc_biguint<11>(tmp_119_26_cast_fu_4849_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_29_fu_5121_p2() {
    tmp_122_29_fu_5121_p2 = (!tmp_121_29_fu_5115_p2.read().is_01() || !tmp_119_27_cast_fu_4935_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_29_fu_5115_p2.read()) - sc_biguint<11>(tmp_119_27_cast_fu_4935_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_2_fu_2799_p2() {
    tmp_122_2_fu_2799_p2 = (!tmp_121_2_fu_2793_p2.read().is_01() || !tmp_119_cast_fu_2605_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_2_fu_2793_p2.read()) - sc_biguint<11>(tmp_119_cast_fu_2605_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_30_fu_5207_p2() {
    tmp_122_30_fu_5207_p2 = (!tmp_121_30_fu_5201_p2.read().is_01() || !tmp_119_28_cast_fu_5021_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_30_fu_5201_p2.read()) - sc_biguint<11>(tmp_119_28_cast_fu_5021_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_31_fu_5293_p2() {
    tmp_122_31_fu_5293_p2 = (!tmp_121_31_fu_5287_p2.read().is_01() || !tmp_119_29_cast_fu_5107_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_31_fu_5287_p2.read()) - sc_biguint<11>(tmp_119_29_cast_fu_5107_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_32_fu_5379_p2() {
    tmp_122_32_fu_5379_p2 = (!tmp_121_32_fu_5373_p2.read().is_01() || !tmp_119_30_cast_fu_5193_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_32_fu_5373_p2.read()) - sc_biguint<11>(tmp_119_30_cast_fu_5193_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_33_fu_5465_p2() {
    tmp_122_33_fu_5465_p2 = (!tmp_121_33_fu_5459_p2.read().is_01() || !tmp_119_31_cast_fu_5279_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_33_fu_5459_p2.read()) - sc_biguint<11>(tmp_119_31_cast_fu_5279_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_34_fu_5551_p2() {
    tmp_122_34_fu_5551_p2 = (!tmp_121_34_fu_5545_p2.read().is_01() || !tmp_119_32_cast_fu_5365_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_34_fu_5545_p2.read()) - sc_biguint<11>(tmp_119_32_cast_fu_5365_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_35_fu_5637_p2() {
    tmp_122_35_fu_5637_p2 = (!tmp_121_35_fu_5631_p2.read().is_01() || !tmp_119_33_cast_fu_5451_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_35_fu_5631_p2.read()) - sc_biguint<11>(tmp_119_33_cast_fu_5451_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_36_fu_5723_p2() {
    tmp_122_36_fu_5723_p2 = (!tmp_121_36_fu_5717_p2.read().is_01() || !tmp_119_34_cast_fu_5537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_36_fu_5717_p2.read()) - sc_biguint<11>(tmp_119_34_cast_fu_5537_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_37_fu_5809_p2() {
    tmp_122_37_fu_5809_p2 = (!tmp_121_37_fu_5803_p2.read().is_01() || !tmp_119_35_cast_fu_5623_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_37_fu_5803_p2.read()) - sc_biguint<11>(tmp_119_35_cast_fu_5623_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_38_fu_5895_p2() {
    tmp_122_38_fu_5895_p2 = (!tmp_121_38_fu_5889_p2.read().is_01() || !tmp_119_36_cast_fu_5709_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_38_fu_5889_p2.read()) - sc_biguint<11>(tmp_119_36_cast_fu_5709_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_39_fu_5981_p2() {
    tmp_122_39_fu_5981_p2 = (!tmp_121_39_fu_5975_p2.read().is_01() || !tmp_119_37_cast_fu_5795_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_39_fu_5975_p2.read()) - sc_biguint<11>(tmp_119_37_cast_fu_5795_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_3_fu_2885_p2() {
    tmp_122_3_fu_2885_p2 = (!tmp_121_3_fu_2879_p2.read().is_01() || !tmp_119_1_cast_fu_2699_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_3_fu_2879_p2.read()) - sc_biguint<11>(tmp_119_1_cast_fu_2699_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_40_fu_6055_p2() {
    tmp_122_40_fu_6055_p2 = (!tmp_121_40_fu_6049_p2.read().is_01() || !tmp_119_38_cast_fu_5881_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_40_fu_6049_p2.read()) - sc_biguint<11>(tmp_119_38_cast_fu_5881_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_4_fu_2971_p2() {
    tmp_122_4_fu_2971_p2 = (!tmp_121_4_fu_2965_p2.read().is_01() || !tmp_119_2_cast_fu_2785_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_4_fu_2965_p2.read()) - sc_biguint<11>(tmp_119_2_cast_fu_2785_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_5_fu_3057_p2() {
    tmp_122_5_fu_3057_p2 = (!tmp_121_5_fu_3051_p2.read().is_01() || !tmp_119_3_cast_fu_2871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_5_fu_3051_p2.read()) - sc_biguint<11>(tmp_119_3_cast_fu_2871_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_6_fu_3143_p2() {
    tmp_122_6_fu_3143_p2 = (!tmp_121_6_fu_3137_p2.read().is_01() || !tmp_119_4_cast_fu_2957_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_6_fu_3137_p2.read()) - sc_biguint<11>(tmp_119_4_cast_fu_2957_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_7_fu_3229_p2() {
    tmp_122_7_fu_3229_p2 = (!tmp_121_7_fu_3223_p2.read().is_01() || !tmp_119_5_cast_fu_3043_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_7_fu_3223_p2.read()) - sc_biguint<11>(tmp_119_5_cast_fu_3043_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_8_fu_3315_p2() {
    tmp_122_8_fu_3315_p2 = (!tmp_121_8_fu_3309_p2.read().is_01() || !tmp_119_6_cast_fu_3129_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_8_fu_3309_p2.read()) - sc_biguint<11>(tmp_119_6_cast_fu_3129_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_9_fu_3401_p2() {
    tmp_122_9_fu_3401_p2 = (!tmp_121_9_fu_3395_p2.read().is_01() || !tmp_119_7_cast_fu_3215_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_9_fu_3395_p2.read()) - sc_biguint<11>(tmp_119_7_cast_fu_3215_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_fu_2619_p2() {
    tmp_122_fu_2619_p2 = (!tmp_121_fu_2613_p2.read().is_01() || !tmp_107_cast_fu_2573_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_fu_2613_p2.read()) - sc_biguint<11>(tmp_107_cast_fu_2573_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_122_s_fu_6133_p2() {
    tmp_122_s_fu_6133_p2 = (!tmp_121_s_fu_6127_p2.read().is_01() || !tmp_119_39_cast_fu_5967_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_121_s_fu_6127_p2.read()) - sc_biguint<11>(tmp_119_39_cast_fu_5967_p1.read()));
}

void Sobel_conv3x3_tile_strm::thread_tmp_1231_fu_7320_p3() {
    tmp_1231_fu_7320_p3 = sum_tr_30_reg_8686.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1232_fu_7327_p1() {
    tmp_1232_fu_7327_p1 = sum_tr_30_reg_8686.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1234_fu_7358_p3() {
    tmp_1234_fu_7358_p3 = sum_tr_31_reg_8697.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1235_fu_7365_p1() {
    tmp_1235_fu_7365_p1 = sum_tr_31_reg_8697.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1237_fu_7396_p3() {
    tmp_1237_fu_7396_p3 = sum_tr_32_reg_8708.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1238_fu_7403_p1() {
    tmp_1238_fu_7403_p1 = sum_tr_32_reg_8708.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1240_fu_7434_p3() {
    tmp_1240_fu_7434_p3 = sum_tr_33_reg_8719.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1241_fu_7441_p1() {
    tmp_1241_fu_7441_p1 = sum_tr_33_reg_8719.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1243_fu_7472_p3() {
    tmp_1243_fu_7472_p3 = sum_tr_34_reg_8730.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1244_fu_7479_p1() {
    tmp_1244_fu_7479_p1 = sum_tr_34_reg_8730.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1246_fu_7510_p3() {
    tmp_1246_fu_7510_p3 = sum_tr_35_reg_8741.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1247_fu_7517_p1() {
    tmp_1247_fu_7517_p1 = sum_tr_35_reg_8741.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1249_fu_7548_p3() {
    tmp_1249_fu_7548_p3 = sum_tr_36_reg_8752.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1250_fu_7555_p1() {
    tmp_1250_fu_7555_p1 = sum_tr_36_reg_8752.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1252_fu_7586_p3() {
    tmp_1252_fu_7586_p3 = sum_tr_37_reg_8763.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1253_fu_7593_p1() {
    tmp_1253_fu_7593_p1 = sum_tr_37_reg_8763.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1255_fu_7624_p3() {
    tmp_1255_fu_7624_p3 = sum_tr_38_reg_8774.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1256_fu_7631_p1() {
    tmp_1256_fu_7631_p1 = sum_tr_38_reg_8774.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1258_fu_7662_p3() {
    tmp_1258_fu_7662_p3 = sum_tr_39_reg_8785.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1259_fu_7669_p1() {
    tmp_1259_fu_7669_p1 = sum_tr_39_reg_8785.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1261_fu_7700_p3() {
    tmp_1261_fu_7700_p3 = sum_tr_40_reg_8796.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1262_fu_7707_p1() {
    tmp_1262_fu_7707_p1 = sum_tr_40_reg_8796.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1264_fu_7738_p3() {
    tmp_1264_fu_7738_p3 = sum_tr_s_reg_8807.read().range(10, 10);
}

void Sobel_conv3x3_tile_strm::thread_tmp_1265_fu_7745_p1() {
    tmp_1265_fu_7745_p1 = sum_tr_s_reg_8807.read().range(8-1, 0);
}

void Sobel_conv3x3_tile_strm::thread_tmp_3478_cast_cast_fu_6061_p1() {
    tmp_3478_cast_cast_fu_6061_p1 = esl_zext<9,8>(src_V_pixel_42_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_3481_cast_cast_fu_6139_p1() {
    tmp_3481_cast_cast_fu_6139_p1 = esl_zext<9,8>(src_V_pixel_43_dout.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_933_fu_6236_p2() {
    tmp_933_fu_6236_p2 = (icmp7_fu_6213_p2.read() | tmp_1144_fu_6218_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_934_fu_6274_p2() {
    tmp_934_fu_6274_p2 = (icmp12_fu_6251_p2.read() | tmp_1147_fu_6256_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_935_fu_6312_p2() {
    tmp_935_fu_6312_p2 = (icmp17_fu_6289_p2.read() | tmp_1150_fu_6294_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_936_fu_6350_p2() {
    tmp_936_fu_6350_p2 = (icmp22_fu_6327_p2.read() | tmp_1153_fu_6332_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_937_fu_6388_p2() {
    tmp_937_fu_6388_p2 = (icmp27_fu_6365_p2.read() | tmp_1156_fu_6370_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_938_fu_6426_p2() {
    tmp_938_fu_6426_p2 = (icmp32_fu_6403_p2.read() | tmp_1159_fu_6408_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_939_fu_6464_p2() {
    tmp_939_fu_6464_p2 = (icmp37_fu_6441_p2.read() | tmp_1162_fu_6446_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_940_fu_6502_p2() {
    tmp_940_fu_6502_p2 = (icmp42_fu_6479_p2.read() | tmp_1165_fu_6484_p3.read());
}

void Sobel_conv3x3_tile_strm::thread_tmp_941_fu_6540_p2() {
    tmp_941_fu_6540_p2 = (icmp43_fu_6517_p2.read() | tmp_1168_fu_6522_p3.read());
}

}

