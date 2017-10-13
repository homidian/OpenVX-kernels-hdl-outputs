#include "Sobel_conv3x3_tile_strm104.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm104::thread_ap_clk_no_reset_() {
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
        ap_reg_ppstg_icmp_reg_8068_pp0_iter1 = icmp_reg_8068.read();
        exitcond1_reg_8059 = exitcond1_fu_1505_p2.read();
        linebuf_1_pixel_10_2_load_reg_8126 = linebuf_1_pixel_10_2_fu_1136.read();
        linebuf_1_pixel_11_2_load_reg_8132 = linebuf_1_pixel_11_2_fu_1140.read();
        linebuf_1_pixel_12_2_load_reg_8138 = linebuf_1_pixel_12_2_fu_1144.read();
        linebuf_1_pixel_13_2_load_reg_8144 = linebuf_1_pixel_13_2_fu_1148.read();
        linebuf_1_pixel_14_2_load_reg_8150 = linebuf_1_pixel_14_2_fu_1152.read();
        linebuf_1_pixel_15_2_load_reg_8156 = linebuf_1_pixel_15_2_fu_1156.read();
        linebuf_1_pixel_16_2_load_reg_8162 = linebuf_1_pixel_16_2_fu_1160.read();
        linebuf_1_pixel_17_2_load_reg_8168 = linebuf_1_pixel_17_2_fu_1164.read();
        linebuf_1_pixel_18_2_load_reg_8174 = linebuf_1_pixel_18_2_fu_1168.read();
        linebuf_1_pixel_19_2_load_reg_8180 = linebuf_1_pixel_19_2_fu_1172.read();
        linebuf_1_pixel_1_2_load_reg_8072 = linebuf_1_pixel_1_2_fu_1100.read();
        linebuf_1_pixel_20_2_load_reg_8186 = linebuf_1_pixel_20_2_fu_1176.read();
        linebuf_1_pixel_21_2_load_reg_8192 = linebuf_1_pixel_21_2_fu_1180.read();
        linebuf_1_pixel_22_2_load_reg_8198 = linebuf_1_pixel_22_2_fu_1184.read();
        linebuf_1_pixel_23_2_load_reg_8204 = linebuf_1_pixel_23_2_fu_1188.read();
        linebuf_1_pixel_24_2_load_reg_8210 = linebuf_1_pixel_24_2_fu_1192.read();
        linebuf_1_pixel_25_2_load_reg_8216 = linebuf_1_pixel_25_2_fu_1196.read();
        linebuf_1_pixel_26_2_load_reg_8222 = linebuf_1_pixel_26_2_fu_1200.read();
        linebuf_1_pixel_27_2_load_reg_8228 = linebuf_1_pixel_27_2_fu_1204.read();
        linebuf_1_pixel_28_2_load_reg_8234 = linebuf_1_pixel_28_2_fu_1208.read();
        linebuf_1_pixel_29_2_load_reg_8240 = linebuf_1_pixel_29_2_fu_1212.read();
        linebuf_1_pixel_2_2_load_reg_8078 = linebuf_1_pixel_2_2_fu_1104.read();
        linebuf_1_pixel_30_2_load_reg_8246 = linebuf_1_pixel_30_2_fu_1216.read();
        linebuf_1_pixel_31_2_load_reg_8252 = linebuf_1_pixel_31_2_fu_1220.read();
        linebuf_1_pixel_32_2_load_reg_8258 = linebuf_1_pixel_32_2_fu_1224.read();
        linebuf_1_pixel_33_2_load_reg_8264 = linebuf_1_pixel_33_2_fu_1228.read();
        linebuf_1_pixel_34_2_load_reg_8270 = linebuf_1_pixel_34_2_fu_1232.read();
        linebuf_1_pixel_35_2_load_reg_8276 = linebuf_1_pixel_35_2_fu_1236.read();
        linebuf_1_pixel_36_2_load_reg_8282 = linebuf_1_pixel_36_2_fu_1240.read();
        linebuf_1_pixel_37_2_load_reg_8288 = linebuf_1_pixel_37_2_fu_1244.read();
        linebuf_1_pixel_38_2_load_reg_8294 = linebuf_1_pixel_38_2_fu_1248.read();
        linebuf_1_pixel_39_2_load_reg_8300 = linebuf_1_pixel_39_2_fu_1252.read();
        linebuf_1_pixel_3_2_load_reg_8084 = linebuf_1_pixel_3_2_fu_1108.read();
        linebuf_1_pixel_40_2_load_reg_8306 = linebuf_1_pixel_40_2_fu_1256.read();
        linebuf_1_pixel_41_2_load_reg_8312 = linebuf_1_pixel_41_2_fu_1260.read();
        linebuf_1_pixel_42_2_load_reg_8318 = linebuf_1_pixel_42_2_fu_1264.read();
        linebuf_1_pixel_4_2_load_reg_8090 = linebuf_1_pixel_4_2_fu_1112.read();
        linebuf_1_pixel_5_2_load_reg_8096 = linebuf_1_pixel_5_2_fu_1116.read();
        linebuf_1_pixel_6_2_load_reg_8102 = linebuf_1_pixel_6_2_fu_1120.read();
        linebuf_1_pixel_7_2_load_reg_8108 = linebuf_1_pixel_7_2_fu_1124.read();
        linebuf_1_pixel_8_2_load_reg_8114 = linebuf_1_pixel_8_2_fu_1128.read();
        linebuf_1_pixel_9_2_load_reg_8120 = linebuf_1_pixel_9_2_fu_1132.read();
    }
    if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read()))) {
        ap_reg_ppstg_icmp_reg_8068_pp0_iter2 = ap_reg_ppstg_icmp_reg_8068_pp0_iter1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_1505_p2.read()))) {
        icmp_reg_8068 = icmp_fu_1527_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        linebuf_1_pixel_0_2_fu_1096 = linebuf_1_pixel_0_fu_920.read();
        linebuf_1_pixel_10_2_fu_1136 = linebuf_1_pixel_10_fu_960.read();
        linebuf_1_pixel_11_2_fu_1140 = linebuf_1_pixel_11_fu_964.read();
        linebuf_1_pixel_12_2_fu_1144 = linebuf_1_pixel_12_fu_968.read();
        linebuf_1_pixel_13_2_fu_1148 = linebuf_1_pixel_13_fu_972.read();
        linebuf_1_pixel_14_2_fu_1152 = linebuf_1_pixel_14_fu_976.read();
        linebuf_1_pixel_15_2_fu_1156 = linebuf_1_pixel_15_fu_980.read();
        linebuf_1_pixel_16_2_fu_1160 = linebuf_1_pixel_16_fu_984.read();
        linebuf_1_pixel_17_2_fu_1164 = linebuf_1_pixel_17_fu_988.read();
        linebuf_1_pixel_18_2_fu_1168 = linebuf_1_pixel_18_fu_992.read();
        linebuf_1_pixel_19_2_fu_1172 = linebuf_1_pixel_19_fu_996.read();
        linebuf_1_pixel_1_2_fu_1100 = linebuf_1_pixel_1_fu_924.read();
        linebuf_1_pixel_20_2_fu_1176 = linebuf_1_pixel_20_fu_1000.read();
        linebuf_1_pixel_21_2_fu_1180 = linebuf_1_pixel_21_fu_1004.read();
        linebuf_1_pixel_22_2_fu_1184 = linebuf_1_pixel_22_fu_1008.read();
        linebuf_1_pixel_23_2_fu_1188 = linebuf_1_pixel_23_fu_1012.read();
        linebuf_1_pixel_24_2_fu_1192 = linebuf_1_pixel_24_fu_1016.read();
        linebuf_1_pixel_25_2_fu_1196 = linebuf_1_pixel_25_fu_1020.read();
        linebuf_1_pixel_26_2_fu_1200 = linebuf_1_pixel_26_fu_1024.read();
        linebuf_1_pixel_27_2_fu_1204 = linebuf_1_pixel_27_fu_1028.read();
        linebuf_1_pixel_28_2_fu_1208 = linebuf_1_pixel_28_fu_1032.read();
        linebuf_1_pixel_29_2_fu_1212 = linebuf_1_pixel_29_fu_1036.read();
        linebuf_1_pixel_2_2_fu_1104 = linebuf_1_pixel_2_fu_928.read();
        linebuf_1_pixel_30_2_fu_1216 = linebuf_1_pixel_30_fu_1040.read();
        linebuf_1_pixel_31_2_fu_1220 = linebuf_1_pixel_31_fu_1044.read();
        linebuf_1_pixel_32_2_fu_1224 = linebuf_1_pixel_32_fu_1048.read();
        linebuf_1_pixel_33_2_fu_1228 = linebuf_1_pixel_33_fu_1052.read();
        linebuf_1_pixel_34_2_fu_1232 = linebuf_1_pixel_34_fu_1056.read();
        linebuf_1_pixel_35_2_fu_1236 = linebuf_1_pixel_35_fu_1060.read();
        linebuf_1_pixel_36_2_fu_1240 = linebuf_1_pixel_36_fu_1064.read();
        linebuf_1_pixel_37_2_fu_1244 = linebuf_1_pixel_37_fu_1068.read();
        linebuf_1_pixel_38_2_fu_1248 = linebuf_1_pixel_38_fu_1072.read();
        linebuf_1_pixel_39_2_fu_1252 = linebuf_1_pixel_39_fu_1076.read();
        linebuf_1_pixel_3_2_fu_1108 = linebuf_1_pixel_3_fu_932.read();
        linebuf_1_pixel_40_2_fu_1256 = linebuf_1_pixel_40_fu_1080.read();
        linebuf_1_pixel_41_2_fu_1260 = linebuf_1_pixel_41_fu_1084.read();
        linebuf_1_pixel_42_2_fu_1264 = linebuf_1_pixel_42_fu_1088.read();
        linebuf_1_pixel_43_2_fu_1268 = linebuf_1_pixel_43_fu_1092.read();
        linebuf_1_pixel_4_2_fu_1112 = linebuf_1_pixel_4_fu_936.read();
        linebuf_1_pixel_5_2_fu_1116 = linebuf_1_pixel_5_fu_940.read();
        linebuf_1_pixel_6_2_fu_1120 = linebuf_1_pixel_6_fu_944.read();
        linebuf_1_pixel_7_2_fu_1124 = linebuf_1_pixel_7_fu_948.read();
        linebuf_1_pixel_8_2_fu_1128 = linebuf_1_pixel_8_fu_952.read();
        linebuf_1_pixel_9_2_fu_1132 = linebuf_1_pixel_9_fu_956.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && esl_seteq<1,1,1>(exitcond1_reg_8059.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_reg_8059.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())))) {
        linebuf_1_pixel_10_load_1_reg_8378 = linebuf_1_pixel_10_fu_960.read();
        linebuf_1_pixel_11_load_1_reg_8384 = linebuf_1_pixel_11_fu_964.read();
        linebuf_1_pixel_12_load_1_reg_8390 = linebuf_1_pixel_12_fu_968.read();
        linebuf_1_pixel_13_load_1_reg_8396 = linebuf_1_pixel_13_fu_972.read();
        linebuf_1_pixel_14_load_1_reg_8402 = linebuf_1_pixel_14_fu_976.read();
        linebuf_1_pixel_15_load_1_reg_8408 = linebuf_1_pixel_15_fu_980.read();
        linebuf_1_pixel_16_load_1_reg_8414 = linebuf_1_pixel_16_fu_984.read();
        linebuf_1_pixel_17_load_1_reg_8420 = linebuf_1_pixel_17_fu_988.read();
        linebuf_1_pixel_18_load_1_reg_8426 = linebuf_1_pixel_18_fu_992.read();
        linebuf_1_pixel_19_load_1_reg_8432 = linebuf_1_pixel_19_fu_996.read();
        linebuf_1_pixel_1_load_1_reg_8324 = linebuf_1_pixel_1_fu_924.read();
        linebuf_1_pixel_20_load_1_reg_8438 = linebuf_1_pixel_20_fu_1000.read();
        linebuf_1_pixel_21_load_1_reg_8444 = linebuf_1_pixel_21_fu_1004.read();
        linebuf_1_pixel_22_load_1_reg_8450 = linebuf_1_pixel_22_fu_1008.read();
        linebuf_1_pixel_23_load_1_reg_8456 = linebuf_1_pixel_23_fu_1012.read();
        linebuf_1_pixel_24_load_1_reg_8462 = linebuf_1_pixel_24_fu_1016.read();
        linebuf_1_pixel_25_load_1_reg_8468 = linebuf_1_pixel_25_fu_1020.read();
        linebuf_1_pixel_26_load_1_reg_8474 = linebuf_1_pixel_26_fu_1024.read();
        linebuf_1_pixel_27_load_1_reg_8480 = linebuf_1_pixel_27_fu_1028.read();
        linebuf_1_pixel_28_load_1_reg_8486 = linebuf_1_pixel_28_fu_1032.read();
        linebuf_1_pixel_29_load_1_reg_8492 = linebuf_1_pixel_29_fu_1036.read();
        linebuf_1_pixel_2_load_1_reg_8330 = linebuf_1_pixel_2_fu_928.read();
        linebuf_1_pixel_30_load_1_reg_8498 = linebuf_1_pixel_30_fu_1040.read();
        linebuf_1_pixel_31_load_1_reg_8504 = linebuf_1_pixel_31_fu_1044.read();
        linebuf_1_pixel_32_load_1_reg_8510 = linebuf_1_pixel_32_fu_1048.read();
        linebuf_1_pixel_33_load_1_reg_8516 = linebuf_1_pixel_33_fu_1052.read();
        linebuf_1_pixel_34_load_1_reg_8522 = linebuf_1_pixel_34_fu_1056.read();
        linebuf_1_pixel_35_load_1_reg_8528 = linebuf_1_pixel_35_fu_1060.read();
        linebuf_1_pixel_36_load_1_reg_8534 = linebuf_1_pixel_36_fu_1064.read();
        linebuf_1_pixel_37_load_1_reg_8540 = linebuf_1_pixel_37_fu_1068.read();
        linebuf_1_pixel_38_load_1_reg_8546 = linebuf_1_pixel_38_fu_1072.read();
        linebuf_1_pixel_39_load_1_reg_8552 = linebuf_1_pixel_39_fu_1076.read();
        linebuf_1_pixel_3_load_1_reg_8336 = linebuf_1_pixel_3_fu_932.read();
        linebuf_1_pixel_40_load_1_reg_8558 = linebuf_1_pixel_40_fu_1080.read();
        linebuf_1_pixel_41_load_1_reg_8564 = linebuf_1_pixel_41_fu_1084.read();
        linebuf_1_pixel_42_load_1_reg_8570 = linebuf_1_pixel_42_fu_1088.read();
        linebuf_1_pixel_4_load_1_reg_8342 = linebuf_1_pixel_4_fu_936.read();
        linebuf_1_pixel_5_load_1_reg_8348 = linebuf_1_pixel_5_fu_940.read();
        linebuf_1_pixel_6_load_1_reg_8354 = linebuf_1_pixel_6_fu_944.read();
        linebuf_1_pixel_7_load_1_reg_8360 = linebuf_1_pixel_7_fu_948.read();
        linebuf_1_pixel_8_load_1_reg_8366 = linebuf_1_pixel_8_fu_952.read();
        linebuf_1_pixel_9_load_1_reg_8372 = linebuf_1_pixel_9_fu_956.read();
        tmp_pixel_10_7_reg_8630 = src_V_pixel10_dout.read();
        tmp_pixel_11_7_reg_8636 = src_V_pixel11_dout.read();
        tmp_pixel_12_7_reg_8642 = src_V_pixel12_dout.read();
        tmp_pixel_13_7_reg_8648 = src_V_pixel13_dout.read();
        tmp_pixel_14_7_reg_8654 = src_V_pixel14_dout.read();
        tmp_pixel_15_7_reg_8660 = src_V_pixel15_dout.read();
        tmp_pixel_16_7_reg_8666 = src_V_pixel16_dout.read();
        tmp_pixel_17_7_reg_8672 = src_V_pixel17_dout.read();
        tmp_pixel_18_7_reg_8678 = src_V_pixel18_dout.read();
        tmp_pixel_19_7_reg_8684 = src_V_pixel19_dout.read();
        tmp_pixel_1_7_reg_8576 = src_V_pixel1_dout.read();
        tmp_pixel_20_7_reg_8690 = src_V_pixel20_dout.read();
        tmp_pixel_21_7_reg_8696 = src_V_pixel21_dout.read();
        tmp_pixel_22_7_reg_8702 = src_V_pixel22_dout.read();
        tmp_pixel_23_7_reg_8708 = src_V_pixel23_dout.read();
        tmp_pixel_24_7_reg_8714 = src_V_pixel24_dout.read();
        tmp_pixel_25_7_reg_8720 = src_V_pixel25_dout.read();
        tmp_pixel_26_7_reg_8726 = src_V_pixel26_dout.read();
        tmp_pixel_27_7_reg_8732 = src_V_pixel27_dout.read();
        tmp_pixel_28_7_reg_8738 = src_V_pixel28_dout.read();
        tmp_pixel_29_7_reg_8744 = src_V_pixel29_dout.read();
        tmp_pixel_2_7_reg_8582 = src_V_pixel2_dout.read();
        tmp_pixel_30_7_reg_8750 = src_V_pixel30_dout.read();
        tmp_pixel_31_7_reg_8756 = src_V_pixel31_dout.read();
        tmp_pixel_32_7_reg_8762 = src_V_pixel32_dout.read();
        tmp_pixel_33_7_reg_8768 = src_V_pixel33_dout.read();
        tmp_pixel_34_7_reg_8774 = src_V_pixel34_dout.read();
        tmp_pixel_35_7_reg_8780 = src_V_pixel35_dout.read();
        tmp_pixel_36_7_reg_8786 = src_V_pixel36_dout.read();
        tmp_pixel_37_7_reg_8792 = src_V_pixel37_dout.read();
        tmp_pixel_38_7_reg_8798 = src_V_pixel38_dout.read();
        tmp_pixel_39_7_reg_8804 = src_V_pixel39_dout.read();
        tmp_pixel_3_7_reg_8588 = src_V_pixel3_dout.read();
        tmp_pixel_40_7_reg_8810 = src_V_pixel40_dout.read();
        tmp_pixel_41_7_reg_8816 = src_V_pixel41_dout.read();
        tmp_pixel_42_reg_8822 = src_V_pixel42_dout.read();
        tmp_pixel_4_7_reg_8594 = src_V_pixel4_dout.read();
        tmp_pixel_5_7_reg_8600 = src_V_pixel5_dout.read();
        tmp_pixel_6_7_reg_8606 = src_V_pixel6_dout.read();
        tmp_pixel_7_7_reg_8612 = src_V_pixel7_dout.read();
        tmp_pixel_8_7_reg_8618 = src_V_pixel8_dout.read();
        tmp_pixel_9_7_reg_8624 = src_V_pixel9_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(exitcond1_reg_8059.read(), ap_const_lv1_0) && !((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_reg_8068.read()))) {
        tmp209_reg_8833 = tmp209_fu_2611_p2.read();
        tmp_122_reg_8828 = tmp_122_fu_2575_p2.read();
    }
    if ((!((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  ap_sig_488.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
  ap_sig_493.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_8068_pp0_iter1.read()))) {
        tmp_pixel_0_reg_8838 = sum_tr_fu_2722_p2.read().range(11, 4);
        tmp_pixel_10_reg_8888 = sum_tr_10_fu_3909_p2.read().range(11, 4);
        tmp_pixel_11_reg_8893 = sum_tr_11_fu_4025_p2.read().range(11, 4);
        tmp_pixel_12_reg_8898 = sum_tr_12_fu_4141_p2.read().range(11, 4);
        tmp_pixel_13_reg_8903 = sum_tr_13_fu_4257_p2.read().range(11, 4);
        tmp_pixel_14_reg_8908 = sum_tr_14_fu_4373_p2.read().range(11, 4);
        tmp_pixel_15_reg_8913 = sum_tr_15_fu_4489_p2.read().range(11, 4);
        tmp_pixel_16_reg_8918 = sum_tr_16_fu_4605_p2.read().range(11, 4);
        tmp_pixel_17_reg_8923 = sum_tr_17_fu_4721_p2.read().range(11, 4);
        tmp_pixel_18_reg_8928 = sum_tr_18_fu_4837_p2.read().range(11, 4);
        tmp_pixel_19_reg_8933 = sum_tr_19_fu_4953_p2.read().range(11, 4);
        tmp_pixel_1_reg_8843 = sum_tr_1_fu_2865_p2.read().range(11, 4);
        tmp_pixel_20_reg_8938 = sum_tr_20_fu_5069_p2.read().range(11, 4);
        tmp_pixel_21_reg_8943 = sum_tr_21_fu_5185_p2.read().range(11, 4);
        tmp_pixel_22_reg_8948 = sum_tr_22_fu_5301_p2.read().range(11, 4);
        tmp_pixel_23_reg_8953 = sum_tr_23_fu_5417_p2.read().range(11, 4);
        tmp_pixel_24_reg_8958 = sum_tr_24_fu_5533_p2.read().range(11, 4);
        tmp_pixel_25_reg_8963 = sum_tr_25_fu_5649_p2.read().range(11, 4);
        tmp_pixel_26_reg_8968 = sum_tr_26_fu_5765_p2.read().range(11, 4);
        tmp_pixel_27_reg_8973 = sum_tr_27_fu_5881_p2.read().range(11, 4);
        tmp_pixel_28_reg_8978 = sum_tr_28_fu_5997_p2.read().range(11, 4);
        tmp_pixel_29_reg_8983 = sum_tr_29_fu_6113_p2.read().range(11, 4);
        tmp_pixel_2_reg_8848 = sum_tr_2_fu_2981_p2.read().range(11, 4);
        tmp_pixel_30_reg_8988 = sum_tr_30_fu_6229_p2.read().range(11, 4);
        tmp_pixel_31_reg_8993 = sum_tr_31_fu_6345_p2.read().range(11, 4);
        tmp_pixel_32_reg_8998 = sum_tr_32_fu_6461_p2.read().range(11, 4);
        tmp_pixel_33_reg_9003 = sum_tr_33_fu_6577_p2.read().range(11, 4);
        tmp_pixel_34_reg_9008 = sum_tr_34_fu_6693_p2.read().range(11, 4);
        tmp_pixel_35_reg_9013 = sum_tr_35_fu_6809_p2.read().range(11, 4);
        tmp_pixel_36_reg_9018 = sum_tr_36_fu_6925_p2.read().range(11, 4);
        tmp_pixel_37_reg_9023 = sum_tr_37_fu_7041_p2.read().range(11, 4);
        tmp_pixel_38_reg_9028 = sum_tr_38_fu_7157_p2.read().range(11, 4);
        tmp_pixel_39_reg_9033 = sum_tr_39_fu_7273_p2.read().range(11, 4);
        tmp_pixel_3_reg_8853 = sum_tr_3_fu_3097_p2.read().range(11, 4);
        tmp_pixel_40_reg_9038 = sum_tr_40_fu_7389_p2.read().range(11, 4);
        tmp_pixel_41_reg_9043 = sum_tr_s_fu_7471_p2.read().range(11, 4);
        tmp_pixel_4_reg_8858 = sum_tr_4_fu_3213_p2.read().range(11, 4);
        tmp_pixel_5_reg_8863 = sum_tr_5_fu_3329_p2.read().range(11, 4);
        tmp_pixel_6_reg_8868 = sum_tr_6_fu_3445_p2.read().range(11, 4);
        tmp_pixel_7_reg_8873 = sum_tr_7_fu_3561_p2.read().range(11, 4);
        tmp_pixel_8_reg_8878 = sum_tr_8_fu_3677_p2.read().range(11, 4);
        tmp_pixel_9_reg_8883 = sum_tr_9_fu_3793_p2.read().range(11, 4);
    }
}

void Sobel_conv3x3_tile_strm104::thread_ap_NS_fsm() {
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

