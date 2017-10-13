#include "Sobel_conv3x3_tile_strm107.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm107::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_2.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1505_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_859.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_reg_ppiten_pp0_it0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_859.read())) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read()))) {
            if (!esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
                ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
                ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it3 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read()))) {
            ap_reg_ppiten_pp0_it3 = ap_reg_ppiten_pp0_it2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_859.read())) {
            ap_reg_ppiten_pp0_it3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1505_p2.read()))) {
        x_reg_1494 = x_3_fu_1511_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_859.read())) {
        x_reg_1494 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        ap_reg_ppstg_icmp_reg_7948_pp0_iter1 = icmp_reg_7948.read();
        exitcond1_reg_7939 = exitcond1_fu_1505_p2.read();
        linebuf_1_pixel_10_1_load_reg_8005 = linebuf_1_pixel_10_1_fu_1136.read();
        linebuf_1_pixel_11_1_load_reg_8011 = linebuf_1_pixel_11_1_fu_1140.read();
        linebuf_1_pixel_12_1_load_reg_8017 = linebuf_1_pixel_12_1_fu_1144.read();
        linebuf_1_pixel_13_1_load_reg_8023 = linebuf_1_pixel_13_1_fu_1148.read();
        linebuf_1_pixel_14_1_load_reg_8029 = linebuf_1_pixel_14_1_fu_1152.read();
        linebuf_1_pixel_15_1_load_reg_8035 = linebuf_1_pixel_15_1_fu_1156.read();
        linebuf_1_pixel_16_1_load_reg_8041 = linebuf_1_pixel_16_1_fu_1160.read();
        linebuf_1_pixel_17_1_load_reg_8047 = linebuf_1_pixel_17_1_fu_1164.read();
        linebuf_1_pixel_18_1_load_reg_8053 = linebuf_1_pixel_18_1_fu_1168.read();
        linebuf_1_pixel_19_1_load_reg_8059 = linebuf_1_pixel_19_1_fu_1172.read();
        linebuf_1_pixel_1_1_load_reg_7952 = linebuf_1_pixel_1_1_fu_1100.read();
        linebuf_1_pixel_20_1_load_reg_8065 = linebuf_1_pixel_20_1_fu_1176.read();
        linebuf_1_pixel_21_1_load_reg_8071 = linebuf_1_pixel_21_1_fu_1180.read();
        linebuf_1_pixel_22_1_load_reg_8077 = linebuf_1_pixel_22_1_fu_1184.read();
        linebuf_1_pixel_23_1_load_reg_8083 = linebuf_1_pixel_23_1_fu_1188.read();
        linebuf_1_pixel_24_1_load_reg_8089 = linebuf_1_pixel_24_1_fu_1192.read();
        linebuf_1_pixel_25_1_load_reg_8095 = linebuf_1_pixel_25_1_fu_1196.read();
        linebuf_1_pixel_26_1_load_reg_8101 = linebuf_1_pixel_26_1_fu_1200.read();
        linebuf_1_pixel_27_1_load_reg_8107 = linebuf_1_pixel_27_1_fu_1204.read();
        linebuf_1_pixel_28_1_load_reg_8113 = linebuf_1_pixel_28_1_fu_1208.read();
        linebuf_1_pixel_29_1_load_reg_8119 = linebuf_1_pixel_29_1_fu_1212.read();
        linebuf_1_pixel_2_1_load_reg_7957 = linebuf_1_pixel_2_1_fu_1104.read();
        linebuf_1_pixel_30_1_load_reg_8125 = linebuf_1_pixel_30_1_fu_1216.read();
        linebuf_1_pixel_31_1_load_reg_8131 = linebuf_1_pixel_31_1_fu_1220.read();
        linebuf_1_pixel_32_1_load_reg_8137 = linebuf_1_pixel_32_1_fu_1224.read();
        linebuf_1_pixel_33_1_load_reg_8143 = linebuf_1_pixel_33_1_fu_1228.read();
        linebuf_1_pixel_34_1_load_reg_8149 = linebuf_1_pixel_34_1_fu_1232.read();
        linebuf_1_pixel_35_1_load_reg_8155 = linebuf_1_pixel_35_1_fu_1236.read();
        linebuf_1_pixel_36_1_load_reg_8161 = linebuf_1_pixel_36_1_fu_1240.read();
        linebuf_1_pixel_37_1_load_reg_8167 = linebuf_1_pixel_37_1_fu_1244.read();
        linebuf_1_pixel_38_1_load_reg_8173 = linebuf_1_pixel_38_1_fu_1248.read();
        linebuf_1_pixel_39_1_load_reg_8179 = linebuf_1_pixel_39_1_fu_1252.read();
        linebuf_1_pixel_3_1_load_reg_7963 = linebuf_1_pixel_3_1_fu_1108.read();
        linebuf_1_pixel_40_1_load_reg_8185 = linebuf_1_pixel_40_1_fu_1256.read();
        linebuf_1_pixel_41_1_load_reg_8191 = linebuf_1_pixel_41_1_fu_1260.read();
        linebuf_1_pixel_42_1_load_reg_8197 = linebuf_1_pixel_42_1_fu_1264.read();
        linebuf_1_pixel_43_1_load_reg_8203 = linebuf_1_pixel_43_1_fu_1268.read();
        linebuf_1_pixel_4_1_load_reg_7969 = linebuf_1_pixel_4_1_fu_1112.read();
        linebuf_1_pixel_5_1_load_reg_7975 = linebuf_1_pixel_5_1_fu_1116.read();
        linebuf_1_pixel_6_1_load_reg_7981 = linebuf_1_pixel_6_1_fu_1120.read();
        linebuf_1_pixel_7_1_load_reg_7987 = linebuf_1_pixel_7_1_fu_1124.read();
        linebuf_1_pixel_8_1_load_reg_7993 = linebuf_1_pixel_8_1_fu_1128.read();
        linebuf_1_pixel_9_1_load_reg_7999 = linebuf_1_pixel_9_1_fu_1132.read();
    }
    if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read()))) {
        ap_reg_ppstg_icmp_reg_7948_pp0_iter2 = ap_reg_ppstg_icmp_reg_7948_pp0_iter1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1505_p2.read()))) {
        icmp_reg_7948 = icmp_fu_1527_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        linebuf_1_pixel_0_1_fu_1096 = linebuf_1_pixel_0_fu_920.read();
        linebuf_1_pixel_10_1_fu_1136 = linebuf_1_pixel_10_fu_960.read();
        linebuf_1_pixel_11_1_fu_1140 = linebuf_1_pixel_11_fu_964.read();
        linebuf_1_pixel_12_1_fu_1144 = linebuf_1_pixel_12_fu_968.read();
        linebuf_1_pixel_13_1_fu_1148 = linebuf_1_pixel_13_fu_972.read();
        linebuf_1_pixel_14_1_fu_1152 = linebuf_1_pixel_14_fu_976.read();
        linebuf_1_pixel_15_1_fu_1156 = linebuf_1_pixel_15_fu_980.read();
        linebuf_1_pixel_16_1_fu_1160 = linebuf_1_pixel_16_fu_984.read();
        linebuf_1_pixel_17_1_fu_1164 = linebuf_1_pixel_17_fu_988.read();
        linebuf_1_pixel_18_1_fu_1168 = linebuf_1_pixel_18_fu_992.read();
        linebuf_1_pixel_19_1_fu_1172 = linebuf_1_pixel_19_fu_996.read();
        linebuf_1_pixel_1_1_fu_1100 = linebuf_1_pixel_1_fu_924.read();
        linebuf_1_pixel_20_1_fu_1176 = linebuf_1_pixel_20_fu_1000.read();
        linebuf_1_pixel_21_1_fu_1180 = linebuf_1_pixel_21_fu_1004.read();
        linebuf_1_pixel_22_1_fu_1184 = linebuf_1_pixel_22_fu_1008.read();
        linebuf_1_pixel_23_1_fu_1188 = linebuf_1_pixel_23_fu_1012.read();
        linebuf_1_pixel_24_1_fu_1192 = linebuf_1_pixel_24_fu_1016.read();
        linebuf_1_pixel_25_1_fu_1196 = linebuf_1_pixel_25_fu_1020.read();
        linebuf_1_pixel_26_1_fu_1200 = linebuf_1_pixel_26_fu_1024.read();
        linebuf_1_pixel_27_1_fu_1204 = linebuf_1_pixel_27_fu_1028.read();
        linebuf_1_pixel_28_1_fu_1208 = linebuf_1_pixel_28_fu_1032.read();
        linebuf_1_pixel_29_1_fu_1212 = linebuf_1_pixel_29_fu_1036.read();
        linebuf_1_pixel_2_1_fu_1104 = linebuf_1_pixel_2_fu_928.read();
        linebuf_1_pixel_30_1_fu_1216 = linebuf_1_pixel_30_fu_1040.read();
        linebuf_1_pixel_31_1_fu_1220 = linebuf_1_pixel_31_fu_1044.read();
        linebuf_1_pixel_32_1_fu_1224 = linebuf_1_pixel_32_fu_1048.read();
        linebuf_1_pixel_33_1_fu_1228 = linebuf_1_pixel_33_fu_1052.read();
        linebuf_1_pixel_34_1_fu_1232 = linebuf_1_pixel_34_fu_1056.read();
        linebuf_1_pixel_35_1_fu_1236 = linebuf_1_pixel_35_fu_1060.read();
        linebuf_1_pixel_36_1_fu_1240 = linebuf_1_pixel_36_fu_1064.read();
        linebuf_1_pixel_37_1_fu_1244 = linebuf_1_pixel_37_fu_1068.read();
        linebuf_1_pixel_38_1_fu_1248 = linebuf_1_pixel_38_fu_1072.read();
        linebuf_1_pixel_39_1_fu_1252 = linebuf_1_pixel_39_fu_1076.read();
        linebuf_1_pixel_3_1_fu_1108 = linebuf_1_pixel_3_fu_932.read();
        linebuf_1_pixel_40_1_fu_1256 = linebuf_1_pixel_40_fu_1080.read();
        linebuf_1_pixel_41_1_fu_1260 = linebuf_1_pixel_41_fu_1084.read();
        linebuf_1_pixel_42_1_fu_1264 = linebuf_1_pixel_42_fu_1088.read();
        linebuf_1_pixel_43_1_fu_1268 = linebuf_1_pixel_43_fu_1092.read();
        linebuf_1_pixel_4_1_fu_1112 = linebuf_1_pixel_4_fu_936.read();
        linebuf_1_pixel_5_1_fu_1116 = linebuf_1_pixel_5_fu_940.read();
        linebuf_1_pixel_6_1_fu_1120 = linebuf_1_pixel_6_fu_944.read();
        linebuf_1_pixel_7_1_fu_1124 = linebuf_1_pixel_7_fu_948.read();
        linebuf_1_pixel_8_1_fu_1128 = linebuf_1_pixel_8_fu_952.read();
        linebuf_1_pixel_9_1_fu_1132 = linebuf_1_pixel_9_fu_956.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && esl_seteq<1,1,1>(exitcond1_reg_7939.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        linebuf_1_pixel_0_fu_920 = src_V_pixel_dout.read();
        linebuf_1_pixel_10_fu_960 = src_V_pixel10_dout.read();
        linebuf_1_pixel_11_fu_964 = src_V_pixel11_dout.read();
        linebuf_1_pixel_12_fu_968 = src_V_pixel12_dout.read();
        linebuf_1_pixel_13_fu_972 = src_V_pixel13_dout.read();
        linebuf_1_pixel_14_fu_976 = src_V_pixel14_dout.read();
        linebuf_1_pixel_15_fu_980 = src_V_pixel15_dout.read();
        linebuf_1_pixel_16_fu_984 = src_V_pixel16_dout.read();
        linebuf_1_pixel_17_fu_988 = src_V_pixel17_dout.read();
        linebuf_1_pixel_18_fu_992 = src_V_pixel18_dout.read();
        linebuf_1_pixel_19_fu_996 = src_V_pixel19_dout.read();
        linebuf_1_pixel_1_fu_924 = src_V_pixel1_dout.read();
        linebuf_1_pixel_20_fu_1000 = src_V_pixel20_dout.read();
        linebuf_1_pixel_21_fu_1004 = src_V_pixel21_dout.read();
        linebuf_1_pixel_22_fu_1008 = src_V_pixel22_dout.read();
        linebuf_1_pixel_23_fu_1012 = src_V_pixel23_dout.read();
        linebuf_1_pixel_24_fu_1016 = src_V_pixel24_dout.read();
        linebuf_1_pixel_25_fu_1020 = src_V_pixel25_dout.read();
        linebuf_1_pixel_26_fu_1024 = src_V_pixel26_dout.read();
        linebuf_1_pixel_27_fu_1028 = src_V_pixel27_dout.read();
        linebuf_1_pixel_28_fu_1032 = src_V_pixel28_dout.read();
        linebuf_1_pixel_29_fu_1036 = src_V_pixel29_dout.read();
        linebuf_1_pixel_2_fu_928 = src_V_pixel2_dout.read();
        linebuf_1_pixel_30_fu_1040 = src_V_pixel30_dout.read();
        linebuf_1_pixel_31_fu_1044 = src_V_pixel31_dout.read();
        linebuf_1_pixel_32_fu_1048 = src_V_pixel32_dout.read();
        linebuf_1_pixel_33_fu_1052 = src_V_pixel33_dout.read();
        linebuf_1_pixel_34_fu_1056 = src_V_pixel34_dout.read();
        linebuf_1_pixel_35_fu_1060 = src_V_pixel35_dout.read();
        linebuf_1_pixel_36_fu_1064 = src_V_pixel36_dout.read();
        linebuf_1_pixel_37_fu_1068 = src_V_pixel37_dout.read();
        linebuf_1_pixel_38_fu_1072 = src_V_pixel38_dout.read();
        linebuf_1_pixel_39_fu_1076 = src_V_pixel39_dout.read();
        linebuf_1_pixel_3_fu_932 = src_V_pixel3_dout.read();
        linebuf_1_pixel_40_fu_1080 = src_V_pixel40_dout.read();
        linebuf_1_pixel_41_fu_1084 = src_V_pixel41_dout.read();
        linebuf_1_pixel_42_fu_1088 = src_V_pixel42_dout.read();
        linebuf_1_pixel_43_fu_1092 = src_V_pixel43_dout.read();
        linebuf_1_pixel_4_fu_936 = src_V_pixel4_dout.read();
        linebuf_1_pixel_5_fu_940 = src_V_pixel5_dout.read();
        linebuf_1_pixel_6_fu_944 = src_V_pixel6_dout.read();
        linebuf_1_pixel_7_fu_948 = src_V_pixel7_dout.read();
        linebuf_1_pixel_8_fu_952 = src_V_pixel8_dout.read();
        linebuf_1_pixel_9_fu_956 = src_V_pixel9_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_reg_7939.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_reg_7948.read()))) {
        tmp_122_10_reg_8519 = tmp_122_10_fu_2591_p2.read();
        tmp_122_11_reg_8524 = tmp_122_11_fu_2605_p2.read();
        tmp_122_12_reg_8529 = tmp_122_12_fu_2619_p2.read();
        tmp_122_13_reg_8534 = tmp_122_13_fu_2633_p2.read();
        tmp_122_14_reg_8539 = tmp_122_14_fu_2647_p2.read();
        tmp_122_15_reg_8544 = tmp_122_15_fu_2661_p2.read();
        tmp_122_16_reg_8549 = tmp_122_16_fu_2675_p2.read();
        tmp_122_17_reg_8554 = tmp_122_17_fu_2689_p2.read();
        tmp_122_18_reg_8559 = tmp_122_18_fu_2703_p2.read();
        tmp_122_19_reg_8564 = tmp_122_19_fu_2717_p2.read();
        tmp_122_1_reg_8469 = tmp_122_1_fu_2451_p2.read();
        tmp_122_20_reg_8569 = tmp_122_20_fu_2731_p2.read();
        tmp_122_21_reg_8574 = tmp_122_21_fu_2745_p2.read();
        tmp_122_22_reg_8579 = tmp_122_22_fu_2759_p2.read();
        tmp_122_23_reg_8584 = tmp_122_23_fu_2773_p2.read();
        tmp_122_24_reg_8589 = tmp_122_24_fu_2787_p2.read();
        tmp_122_25_reg_8594 = tmp_122_25_fu_2801_p2.read();
        tmp_122_26_reg_8599 = tmp_122_26_fu_2815_p2.read();
        tmp_122_27_reg_8604 = tmp_122_27_fu_2829_p2.read();
        tmp_122_28_reg_8609 = tmp_122_28_fu_2843_p2.read();
        tmp_122_29_reg_8614 = tmp_122_29_fu_2857_p2.read();
        tmp_122_2_reg_8474 = tmp_122_2_fu_2465_p2.read();
        tmp_122_30_reg_8619 = tmp_122_30_fu_2871_p2.read();
        tmp_122_31_reg_8624 = tmp_122_31_fu_2885_p2.read();
        tmp_122_32_reg_8629 = tmp_122_32_fu_2899_p2.read();
        tmp_122_33_reg_8634 = tmp_122_33_fu_2913_p2.read();
        tmp_122_34_reg_8639 = tmp_122_34_fu_2927_p2.read();
        tmp_122_35_reg_8644 = tmp_122_35_fu_2941_p2.read();
        tmp_122_36_reg_8649 = tmp_122_36_fu_2955_p2.read();
        tmp_122_37_reg_8654 = tmp_122_37_fu_2969_p2.read();
        tmp_122_38_reg_8659 = tmp_122_38_fu_2983_p2.read();
        tmp_122_39_reg_8664 = tmp_122_39_fu_2989_p2.read();
        tmp_122_3_reg_8479 = tmp_122_3_fu_2479_p2.read();
        tmp_122_40_reg_8669 = tmp_122_40_fu_2995_p2.read();
        tmp_122_4_reg_8484 = tmp_122_4_fu_2493_p2.read();
        tmp_122_5_reg_8489 = tmp_122_5_fu_2507_p2.read();
        tmp_122_6_reg_8494 = tmp_122_6_fu_2521_p2.read();
        tmp_122_7_reg_8499 = tmp_122_7_fu_2535_p2.read();
        tmp_122_8_reg_8504 = tmp_122_8_fu_2549_p2.read();
        tmp_122_9_reg_8509 = tmp_122_9_fu_2563_p2.read();
        tmp_122_reg_8464 = tmp_122_fu_2437_p2.read();
        tmp_122_s_reg_8514 = tmp_122_s_fu_2577_p2.read();
    }
    if ((!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_7948_pp0_iter1.read()))) {
        tmp_pixel_0_reg_8674 = tmp_pixel_0_fu_3098_p3.read();
        tmp_pixel_10_reg_8724 = tmp_pixel_10_fu_4148_p3.read();
        tmp_pixel_11_reg_8729 = tmp_pixel_11_fu_4253_p3.read();
        tmp_pixel_12_reg_8734 = tmp_pixel_12_fu_4358_p3.read();
        tmp_pixel_13_reg_8739 = tmp_pixel_13_fu_4463_p3.read();
        tmp_pixel_14_reg_8744 = tmp_pixel_14_fu_4568_p3.read();
        tmp_pixel_15_reg_8749 = tmp_pixel_15_fu_4673_p3.read();
        tmp_pixel_16_reg_8754 = tmp_pixel_16_fu_4778_p3.read();
        tmp_pixel_17_reg_8759 = tmp_pixel_17_fu_4883_p3.read();
        tmp_pixel_18_reg_8764 = tmp_pixel_18_fu_4988_p3.read();
        tmp_pixel_19_reg_8769 = tmp_pixel_19_fu_5093_p3.read();
        tmp_pixel_1_reg_8679 = tmp_pixel_1_fu_3203_p3.read();
        tmp_pixel_20_reg_8774 = tmp_pixel_20_fu_5198_p3.read();
        tmp_pixel_21_reg_8779 = tmp_pixel_21_fu_5303_p3.read();
        tmp_pixel_22_reg_8784 = tmp_pixel_22_fu_5408_p3.read();
        tmp_pixel_23_reg_8789 = tmp_pixel_23_fu_5513_p3.read();
        tmp_pixel_24_reg_8794 = tmp_pixel_24_fu_5618_p3.read();
        tmp_pixel_25_reg_8799 = tmp_pixel_25_fu_5723_p3.read();
        tmp_pixel_26_reg_8804 = tmp_pixel_26_fu_5828_p3.read();
        tmp_pixel_27_reg_8809 = tmp_pixel_27_fu_5933_p3.read();
        tmp_pixel_28_reg_8814 = tmp_pixel_28_fu_6038_p3.read();
        tmp_pixel_29_reg_8819 = tmp_pixel_29_fu_6143_p3.read();
        tmp_pixel_2_reg_8684 = tmp_pixel_2_fu_3308_p3.read();
        tmp_pixel_30_reg_8824 = tmp_pixel_30_fu_6248_p3.read();
        tmp_pixel_31_reg_8829 = tmp_pixel_31_fu_6353_p3.read();
        tmp_pixel_32_reg_8834 = tmp_pixel_32_fu_6458_p3.read();
        tmp_pixel_33_reg_8839 = tmp_pixel_33_fu_6563_p3.read();
        tmp_pixel_34_reg_8844 = tmp_pixel_34_fu_6668_p3.read();
        tmp_pixel_35_reg_8849 = tmp_pixel_35_fu_6773_p3.read();
        tmp_pixel_36_reg_8854 = tmp_pixel_36_fu_6878_p3.read();
        tmp_pixel_37_reg_8859 = tmp_pixel_37_fu_6983_p3.read();
        tmp_pixel_38_reg_8864 = tmp_pixel_38_fu_7088_p3.read();
        tmp_pixel_39_reg_8869 = tmp_pixel_39_fu_7193_p3.read();
        tmp_pixel_3_reg_8689 = tmp_pixel_3_fu_3413_p3.read();
        tmp_pixel_40_reg_8874 = tmp_pixel_40_fu_7298_p3.read();
        tmp_pixel_41_reg_8879 = tmp_pixel_41_fu_7403_p3.read();
        tmp_pixel_4_reg_8694 = tmp_pixel_4_fu_3518_p3.read();
        tmp_pixel_5_reg_8699 = tmp_pixel_5_fu_3623_p3.read();
        tmp_pixel_6_reg_8704 = tmp_pixel_6_fu_3728_p3.read();
        tmp_pixel_7_reg_8709 = tmp_pixel_7_fu_3833_p3.read();
        tmp_pixel_8_reg_8714 = tmp_pixel_8_fu_3938_p3.read();
        tmp_pixel_9_reg_8719 = tmp_pixel_9_fu_4043_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_reg_7939.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        tmp_pixel_10_6_reg_8261 = src_V_pixel10_dout.read();
        tmp_pixel_11_6_reg_8267 = src_V_pixel11_dout.read();
        tmp_pixel_12_6_reg_8273 = src_V_pixel12_dout.read();
        tmp_pixel_13_6_reg_8279 = src_V_pixel13_dout.read();
        tmp_pixel_14_6_reg_8285 = src_V_pixel14_dout.read();
        tmp_pixel_15_6_reg_8291 = src_V_pixel15_dout.read();
        tmp_pixel_16_6_reg_8297 = src_V_pixel16_dout.read();
        tmp_pixel_17_6_reg_8303 = src_V_pixel17_dout.read();
        tmp_pixel_18_6_reg_8309 = src_V_pixel18_dout.read();
        tmp_pixel_19_6_reg_8315 = src_V_pixel19_dout.read();
        tmp_pixel_1_6_reg_8208 = src_V_pixel1_dout.read();
        tmp_pixel_20_6_reg_8321 = src_V_pixel20_dout.read();
        tmp_pixel_21_6_reg_8327 = src_V_pixel21_dout.read();
        tmp_pixel_22_6_reg_8333 = src_V_pixel22_dout.read();
        tmp_pixel_23_6_reg_8339 = src_V_pixel23_dout.read();
        tmp_pixel_24_6_reg_8345 = src_V_pixel24_dout.read();
        tmp_pixel_25_6_reg_8351 = src_V_pixel25_dout.read();
        tmp_pixel_26_6_reg_8357 = src_V_pixel26_dout.read();
        tmp_pixel_27_6_reg_8363 = src_V_pixel27_dout.read();
        tmp_pixel_28_6_reg_8369 = src_V_pixel28_dout.read();
        tmp_pixel_29_6_reg_8375 = src_V_pixel29_dout.read();
        tmp_pixel_2_6_reg_8213 = src_V_pixel2_dout.read();
        tmp_pixel_30_6_reg_8381 = src_V_pixel30_dout.read();
        tmp_pixel_31_6_reg_8387 = src_V_pixel31_dout.read();
        tmp_pixel_32_6_reg_8393 = src_V_pixel32_dout.read();
        tmp_pixel_33_6_reg_8399 = src_V_pixel33_dout.read();
        tmp_pixel_34_6_reg_8405 = src_V_pixel34_dout.read();
        tmp_pixel_35_6_reg_8411 = src_V_pixel35_dout.read();
        tmp_pixel_36_6_reg_8417 = src_V_pixel36_dout.read();
        tmp_pixel_37_6_reg_8423 = src_V_pixel37_dout.read();
        tmp_pixel_38_6_reg_8429 = src_V_pixel38_dout.read();
        tmp_pixel_39_6_reg_8435 = src_V_pixel39_dout.read();
        tmp_pixel_3_6_reg_8219 = src_V_pixel3_dout.read();
        tmp_pixel_40_6_reg_8441 = src_V_pixel40_dout.read();
        tmp_pixel_41_6_reg_8447 = src_V_pixel41_dout.read();
        tmp_pixel_42_reg_8453 = src_V_pixel42_dout.read();
        tmp_pixel_43_reg_8459 = src_V_pixel43_dout.read();
        tmp_pixel_4_6_reg_8225 = src_V_pixel4_dout.read();
        tmp_pixel_5_6_reg_8231 = src_V_pixel5_dout.read();
        tmp_pixel_6_6_reg_8237 = src_V_pixel6_dout.read();
        tmp_pixel_7_6_reg_8243 = src_V_pixel7_dout.read();
        tmp_pixel_8_6_reg_8249 = src_V_pixel8_dout.read();
        tmp_pixel_9_6_reg_8255 = src_V_pixel9_dout.read();
    }
}

void Sobel_conv3x3_tile_strm107::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_859.read()) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())))) {
                ap_NS_fsm = ap_ST_st6_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

