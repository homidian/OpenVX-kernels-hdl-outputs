#include "Sobel_conv3x3_tile_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_2.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1507_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_680.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_reg_ppiten_pp0_it0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_680.read())) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
            ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !ap_sig_680.read()) || 
                    (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && 
                     !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())))) {
            ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1507_p2.read()))) {
        x_reg_1496 = x_3_fu_1513_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_680.read())) {
        x_reg_1496 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
        ap_reg_ppstg_icmp_reg_8352_pp0_iter1 = icmp_reg_8352.read();
        exitcond1_reg_8343 = exitcond1_fu_1507_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1507_p2.read()))) {
        icmp_reg_8352 = icmp_fu_1529_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
        linebuf_1_pixel_0_3_fu_1098 = linebuf_1_pixel_0_fu_922.read();
        linebuf_1_pixel_10_3_fu_1138 = linebuf_1_pixel_10_fu_962.read();
        linebuf_1_pixel_11_3_fu_1142 = linebuf_1_pixel_11_fu_966.read();
        linebuf_1_pixel_12_3_fu_1146 = linebuf_1_pixel_12_fu_970.read();
        linebuf_1_pixel_13_3_fu_1150 = linebuf_1_pixel_13_fu_974.read();
        linebuf_1_pixel_14_3_fu_1154 = linebuf_1_pixel_14_fu_978.read();
        linebuf_1_pixel_15_3_fu_1158 = linebuf_1_pixel_15_fu_982.read();
        linebuf_1_pixel_16_3_fu_1162 = linebuf_1_pixel_16_fu_986.read();
        linebuf_1_pixel_17_3_fu_1166 = linebuf_1_pixel_17_fu_990.read();
        linebuf_1_pixel_18_3_fu_1170 = linebuf_1_pixel_18_fu_994.read();
        linebuf_1_pixel_19_3_fu_1174 = linebuf_1_pixel_19_fu_998.read();
        linebuf_1_pixel_1_3_fu_1102 = linebuf_1_pixel_1_fu_926.read();
        linebuf_1_pixel_20_3_fu_1178 = linebuf_1_pixel_20_fu_1002.read();
        linebuf_1_pixel_21_3_fu_1182 = linebuf_1_pixel_21_fu_1006.read();
        linebuf_1_pixel_22_3_fu_1186 = linebuf_1_pixel_22_fu_1010.read();
        linebuf_1_pixel_23_3_fu_1190 = linebuf_1_pixel_23_fu_1014.read();
        linebuf_1_pixel_24_3_fu_1194 = linebuf_1_pixel_24_fu_1018.read();
        linebuf_1_pixel_25_3_fu_1198 = linebuf_1_pixel_25_fu_1022.read();
        linebuf_1_pixel_26_3_fu_1202 = linebuf_1_pixel_26_fu_1026.read();
        linebuf_1_pixel_27_3_fu_1206 = linebuf_1_pixel_27_fu_1030.read();
        linebuf_1_pixel_28_3_fu_1210 = linebuf_1_pixel_28_fu_1034.read();
        linebuf_1_pixel_29_3_fu_1214 = linebuf_1_pixel_29_fu_1038.read();
        linebuf_1_pixel_2_3_fu_1106 = linebuf_1_pixel_2_fu_930.read();
        linebuf_1_pixel_30_3_fu_1218 = linebuf_1_pixel_30_fu_1042.read();
        linebuf_1_pixel_31_3_fu_1222 = linebuf_1_pixel_31_fu_1046.read();
        linebuf_1_pixel_32_3_fu_1226 = linebuf_1_pixel_32_fu_1050.read();
        linebuf_1_pixel_33_3_fu_1230 = linebuf_1_pixel_33_fu_1054.read();
        linebuf_1_pixel_34_3_fu_1234 = linebuf_1_pixel_34_fu_1058.read();
        linebuf_1_pixel_35_3_fu_1238 = linebuf_1_pixel_35_fu_1062.read();
        linebuf_1_pixel_36_3_fu_1242 = linebuf_1_pixel_36_fu_1066.read();
        linebuf_1_pixel_37_3_fu_1246 = linebuf_1_pixel_37_fu_1070.read();
        linebuf_1_pixel_38_3_fu_1250 = linebuf_1_pixel_38_fu_1074.read();
        linebuf_1_pixel_39_3_fu_1254 = linebuf_1_pixel_39_fu_1078.read();
        linebuf_1_pixel_3_3_fu_1110 = linebuf_1_pixel_3_fu_934.read();
        linebuf_1_pixel_40_3_fu_1258 = linebuf_1_pixel_40_fu_1082.read();
        linebuf_1_pixel_41_3_fu_1262 = linebuf_1_pixel_41_fu_1086.read();
        linebuf_1_pixel_42_3_fu_1266 = linebuf_1_pixel_42_fu_1090.read();
        linebuf_1_pixel_43_3_fu_1270 = linebuf_1_pixel_43_fu_1094.read();
        linebuf_1_pixel_4_3_fu_1114 = linebuf_1_pixel_4_fu_938.read();
        linebuf_1_pixel_5_3_fu_1118 = linebuf_1_pixel_5_fu_942.read();
        linebuf_1_pixel_6_3_fu_1122 = linebuf_1_pixel_6_fu_946.read();
        linebuf_1_pixel_7_3_fu_1126 = linebuf_1_pixel_7_fu_950.read();
        linebuf_1_pixel_8_3_fu_1130 = linebuf_1_pixel_8_fu_954.read();
        linebuf_1_pixel_9_3_fu_1134 = linebuf_1_pixel_9_fu_958.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())))) {
        linebuf_1_pixel_0_fu_922 = src_V_pixel_0_dout.read();
        linebuf_1_pixel_10_fu_962 = src_V_pixel_10_dout.read();
        linebuf_1_pixel_11_fu_966 = src_V_pixel_11_dout.read();
        linebuf_1_pixel_12_fu_970 = src_V_pixel_12_dout.read();
        linebuf_1_pixel_13_fu_974 = src_V_pixel_13_dout.read();
        linebuf_1_pixel_14_fu_978 = src_V_pixel_14_dout.read();
        linebuf_1_pixel_15_fu_982 = src_V_pixel_15_dout.read();
        linebuf_1_pixel_16_fu_986 = src_V_pixel_16_dout.read();
        linebuf_1_pixel_17_fu_990 = src_V_pixel_17_dout.read();
        linebuf_1_pixel_18_fu_994 = src_V_pixel_18_dout.read();
        linebuf_1_pixel_19_fu_998 = src_V_pixel_19_dout.read();
        linebuf_1_pixel_1_fu_926 = src_V_pixel_1_dout.read();
        linebuf_1_pixel_20_fu_1002 = src_V_pixel_20_dout.read();
        linebuf_1_pixel_21_fu_1006 = src_V_pixel_21_dout.read();
        linebuf_1_pixel_22_fu_1010 = src_V_pixel_22_dout.read();
        linebuf_1_pixel_23_fu_1014 = src_V_pixel_23_dout.read();
        linebuf_1_pixel_24_fu_1018 = src_V_pixel_24_dout.read();
        linebuf_1_pixel_25_fu_1022 = src_V_pixel_25_dout.read();
        linebuf_1_pixel_26_fu_1026 = src_V_pixel_26_dout.read();
        linebuf_1_pixel_27_fu_1030 = src_V_pixel_27_dout.read();
        linebuf_1_pixel_28_fu_1034 = src_V_pixel_28_dout.read();
        linebuf_1_pixel_29_fu_1038 = src_V_pixel_29_dout.read();
        linebuf_1_pixel_2_fu_930 = src_V_pixel_2_dout.read();
        linebuf_1_pixel_30_fu_1042 = src_V_pixel_30_dout.read();
        linebuf_1_pixel_31_fu_1046 = src_V_pixel_31_dout.read();
        linebuf_1_pixel_32_fu_1050 = src_V_pixel_32_dout.read();
        linebuf_1_pixel_33_fu_1054 = src_V_pixel_33_dout.read();
        linebuf_1_pixel_34_fu_1058 = src_V_pixel_34_dout.read();
        linebuf_1_pixel_35_fu_1062 = src_V_pixel_35_dout.read();
        linebuf_1_pixel_36_fu_1066 = src_V_pixel_36_dout.read();
        linebuf_1_pixel_37_fu_1070 = src_V_pixel_37_dout.read();
        linebuf_1_pixel_38_fu_1074 = src_V_pixel_38_dout.read();
        linebuf_1_pixel_39_fu_1078 = src_V_pixel_39_dout.read();
        linebuf_1_pixel_3_fu_934 = src_V_pixel_3_dout.read();
        linebuf_1_pixel_40_fu_1082 = src_V_pixel_40_dout.read();
        linebuf_1_pixel_41_fu_1086 = src_V_pixel_41_dout.read();
        linebuf_1_pixel_42_fu_1090 = src_V_pixel_42_dout.read();
        linebuf_1_pixel_43_fu_1094 = src_V_pixel_43_dout.read();
        linebuf_1_pixel_4_fu_938 = src_V_pixel_4_dout.read();
        linebuf_1_pixel_5_fu_942 = src_V_pixel_5_dout.read();
        linebuf_1_pixel_6_fu_946 = src_V_pixel_6_dout.read();
        linebuf_1_pixel_7_fu_950 = src_V_pixel_7_dout.read();
        linebuf_1_pixel_8_fu_954 = src_V_pixel_8_dout.read();
        linebuf_1_pixel_9_fu_958 = src_V_pixel_9_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_reg_8343.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_reg_8352.read()))) {
        sum_tr_10_reg_8466 = sum_tr_10_fu_3509_p2.read();
        sum_tr_11_reg_8477 = sum_tr_11_fu_3595_p2.read();
        sum_tr_12_reg_8488 = sum_tr_12_fu_3681_p2.read();
        sum_tr_13_reg_8499 = sum_tr_13_fu_3767_p2.read();
        sum_tr_14_reg_8510 = sum_tr_14_fu_3853_p2.read();
        sum_tr_15_reg_8521 = sum_tr_15_fu_3939_p2.read();
        sum_tr_16_reg_8532 = sum_tr_16_fu_4025_p2.read();
        sum_tr_17_reg_8543 = sum_tr_17_fu_4111_p2.read();
        sum_tr_18_reg_8554 = sum_tr_18_fu_4197_p2.read();
        sum_tr_19_reg_8565 = sum_tr_19_fu_4283_p2.read();
        sum_tr_1_reg_8367 = sum_tr_1_fu_2735_p2.read();
        sum_tr_20_reg_8576 = sum_tr_20_fu_4369_p2.read();
        sum_tr_21_reg_8587 = sum_tr_21_fu_4455_p2.read();
        sum_tr_22_reg_8598 = sum_tr_22_fu_4541_p2.read();
        sum_tr_23_reg_8609 = sum_tr_23_fu_4627_p2.read();
        sum_tr_24_reg_8620 = sum_tr_24_fu_4713_p2.read();
        sum_tr_25_reg_8631 = sum_tr_25_fu_4799_p2.read();
        sum_tr_26_reg_8642 = sum_tr_26_fu_4885_p2.read();
        sum_tr_27_reg_8653 = sum_tr_27_fu_4971_p2.read();
        sum_tr_28_reg_8664 = sum_tr_28_fu_5057_p2.read();
        sum_tr_29_reg_8675 = sum_tr_29_fu_5143_p2.read();
        sum_tr_2_reg_8378 = sum_tr_2_fu_2821_p2.read();
        sum_tr_30_reg_8686 = sum_tr_30_fu_5229_p2.read();
        sum_tr_31_reg_8697 = sum_tr_31_fu_5315_p2.read();
        sum_tr_32_reg_8708 = sum_tr_32_fu_5401_p2.read();
        sum_tr_33_reg_8719 = sum_tr_33_fu_5487_p2.read();
        sum_tr_34_reg_8730 = sum_tr_34_fu_5573_p2.read();
        sum_tr_35_reg_8741 = sum_tr_35_fu_5659_p2.read();
        sum_tr_36_reg_8752 = sum_tr_36_fu_5745_p2.read();
        sum_tr_37_reg_8763 = sum_tr_37_fu_5831_p2.read();
        sum_tr_38_reg_8774 = sum_tr_38_fu_5917_p2.read();
        sum_tr_39_reg_8785 = sum_tr_39_fu_6003_p2.read();
        sum_tr_3_reg_8389 = sum_tr_3_fu_2907_p2.read();
        sum_tr_40_reg_8796 = sum_tr_40_fu_6081_p2.read();
        sum_tr_4_reg_8400 = sum_tr_4_fu_2993_p2.read();
        sum_tr_5_reg_8411 = sum_tr_5_fu_3079_p2.read();
        sum_tr_6_reg_8422 = sum_tr_6_fu_3165_p2.read();
        sum_tr_7_reg_8433 = sum_tr_7_fu_3251_p2.read();
        sum_tr_8_reg_8444 = sum_tr_8_fu_3337_p2.read();
        sum_tr_9_reg_8455 = sum_tr_9_fu_3423_p2.read();
        sum_tr_reg_8356 = sum_tr_fu_2641_p2.read();
        sum_tr_s_reg_8807 = sum_tr_s_fu_6159_p2.read();
        tmp_1140_reg_8362 = sum_tr_fu_2641_p2.read().range(10, 8);
        tmp_1143_reg_8373 = sum_tr_1_fu_2735_p2.read().range(10, 8);
        tmp_1146_reg_8384 = sum_tr_2_fu_2821_p2.read().range(10, 8);
        tmp_1149_reg_8395 = sum_tr_3_fu_2907_p2.read().range(10, 8);
        tmp_1152_reg_8406 = sum_tr_4_fu_2993_p2.read().range(10, 8);
        tmp_1155_reg_8417 = sum_tr_5_fu_3079_p2.read().range(10, 8);
        tmp_1158_reg_8428 = sum_tr_6_fu_3165_p2.read().range(10, 8);
        tmp_1161_reg_8439 = sum_tr_7_fu_3251_p2.read().range(10, 8);
        tmp_1164_reg_8450 = sum_tr_8_fu_3337_p2.read().range(10, 8);
        tmp_1167_reg_8461 = sum_tr_9_fu_3423_p2.read().range(10, 8);
        tmp_1170_reg_8472 = sum_tr_10_fu_3509_p2.read().range(10, 8);
        tmp_1173_reg_8483 = sum_tr_11_fu_3595_p2.read().range(10, 8);
        tmp_1176_reg_8494 = sum_tr_12_fu_3681_p2.read().range(10, 8);
        tmp_1179_reg_8505 = sum_tr_13_fu_3767_p2.read().range(10, 8);
        tmp_1182_reg_8516 = sum_tr_14_fu_3853_p2.read().range(10, 8);
        tmp_1185_reg_8527 = sum_tr_15_fu_3939_p2.read().range(10, 8);
        tmp_1188_reg_8538 = sum_tr_16_fu_4025_p2.read().range(10, 8);
        tmp_1191_reg_8549 = sum_tr_17_fu_4111_p2.read().range(10, 8);
        tmp_1194_reg_8560 = sum_tr_18_fu_4197_p2.read().range(10, 8);
        tmp_1197_reg_8571 = sum_tr_19_fu_4283_p2.read().range(10, 8);
        tmp_1200_reg_8582 = sum_tr_20_fu_4369_p2.read().range(10, 8);
        tmp_1203_reg_8593 = sum_tr_21_fu_4455_p2.read().range(10, 8);
        tmp_1206_reg_8604 = sum_tr_22_fu_4541_p2.read().range(10, 8);
        tmp_1209_reg_8615 = sum_tr_23_fu_4627_p2.read().range(10, 8);
        tmp_1212_reg_8626 = sum_tr_24_fu_4713_p2.read().range(10, 8);
        tmp_1215_reg_8637 = sum_tr_25_fu_4799_p2.read().range(10, 8);
        tmp_1218_reg_8648 = sum_tr_26_fu_4885_p2.read().range(10, 8);
        tmp_1221_reg_8659 = sum_tr_27_fu_4971_p2.read().range(10, 8);
        tmp_1224_reg_8670 = sum_tr_28_fu_5057_p2.read().range(10, 8);
        tmp_1227_reg_8681 = sum_tr_29_fu_5143_p2.read().range(10, 8);
        tmp_1230_reg_8692 = sum_tr_30_fu_5229_p2.read().range(10, 8);
        tmp_1233_reg_8703 = sum_tr_31_fu_5315_p2.read().range(10, 8);
        tmp_1236_reg_8714 = sum_tr_32_fu_5401_p2.read().range(10, 8);
        tmp_1239_reg_8725 = sum_tr_33_fu_5487_p2.read().range(10, 8);
        tmp_1242_reg_8736 = sum_tr_34_fu_5573_p2.read().range(10, 8);
        tmp_1245_reg_8747 = sum_tr_35_fu_5659_p2.read().range(10, 8);
        tmp_1248_reg_8758 = sum_tr_36_fu_5745_p2.read().range(10, 8);
        tmp_1251_reg_8769 = sum_tr_37_fu_5831_p2.read().range(10, 8);
        tmp_1254_reg_8780 = sum_tr_38_fu_5917_p2.read().range(10, 8);
        tmp_1257_reg_8791 = sum_tr_39_fu_6003_p2.read().range(10, 8);
        tmp_1260_reg_8802 = sum_tr_40_fu_6081_p2.read().range(10, 8);
        tmp_1263_reg_8813 = sum_tr_s_fu_6159_p2.read().range(10, 8);
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_680.read()) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_486.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
  ap_sig_491.read())) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
                ap_NS_fsm = ap_ST_st5_fsm_2;
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

