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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st75_fsm_74.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st39_fsm_38.read())) {
        reg_3223 = linebuf_0_pixel_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        reg_3223 = linebuf_0_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st74_fsm_73.read())) {
        x_reg_3203 = x_3_reg_12742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_868.read())) {
        x_reg_3203 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_3230_p2.read()))) {
        icmp_reg_12747 = icmp_fu_3252_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st17_fsm_16.read())) {
        linebuf_0_pixel_load_100_reg_13107 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_101_reg_13114 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_100_reg_13095 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_101_reg_13101 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st18_fsm_17.read())) {
        linebuf_0_pixel_load_102_reg_13133 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_103_reg_13140 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_102_reg_13121 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_103_reg_13127 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st19_fsm_18.read())) {
        linebuf_0_pixel_load_104_reg_13159 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_105_reg_13166 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_104_reg_13147 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_105_reg_13153 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st20_fsm_19.read())) {
        linebuf_0_pixel_load_106_reg_13185 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_107_reg_13192 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_106_reg_13173 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_107_reg_13179 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st21_fsm_20.read())) {
        linebuf_0_pixel_load_108_reg_13211 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_109_reg_13218 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_108_reg_13199 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_109_reg_13205 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st22_fsm_21.read())) {
        linebuf_0_pixel_load_110_reg_13237 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_111_reg_13244 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_110_reg_13225 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_111_reg_13231 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st23_fsm_22.read())) {
        linebuf_0_pixel_load_112_reg_13263 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_113_reg_13270 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_112_reg_13251 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_113_reg_13257 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st24_fsm_23.read())) {
        linebuf_0_pixel_load_114_reg_13289 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_115_reg_13296 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_114_reg_13277 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_115_reg_13283 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st25_fsm_24.read())) {
        linebuf_0_pixel_load_116_reg_13315 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_117_reg_13322 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_116_reg_13303 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_117_reg_13309 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st26_fsm_25.read())) {
        linebuf_0_pixel_load_118_reg_13341 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_119_reg_13348 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_118_reg_13329 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_119_reg_13335 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st27_fsm_26.read())) {
        linebuf_0_pixel_load_120_reg_13367 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_121_reg_13374 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_120_reg_13355 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_121_reg_13361 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st28_fsm_27.read())) {
        linebuf_0_pixel_load_122_reg_13393 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_123_reg_13400 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_122_reg_13381 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_123_reg_13387 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st29_fsm_28.read())) {
        linebuf_0_pixel_load_124_reg_13419 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_125_reg_13426 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_124_reg_13407 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_125_reg_13413 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st30_fsm_29.read())) {
        linebuf_0_pixel_load_126_reg_13445 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_127_reg_13452 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_126_reg_13433 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_127_reg_13439 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st31_fsm_30.read())) {
        linebuf_0_pixel_load_128_reg_13471 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_129_reg_13478 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_128_reg_13459 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_129_reg_13465 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st32_fsm_31.read())) {
        linebuf_0_pixel_load_130_reg_13497 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_131_reg_13504 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_130_reg_13485 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_131_reg_13491 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st33_fsm_32.read())) {
        linebuf_0_pixel_load_132_reg_13523 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_133_reg_13530 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_132_reg_13511 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_133_reg_13517 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st34_fsm_33.read())) {
        linebuf_0_pixel_load_134_reg_13549 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_135_reg_13556 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_134_reg_13537 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_135_reg_13543 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st35_fsm_34.read())) {
        linebuf_0_pixel_load_136_reg_13575 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_137_reg_13582 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_136_reg_13563 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_137_reg_13569 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st36_fsm_35.read())) {
        linebuf_0_pixel_load_138_reg_13601 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_139_reg_13608 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_138_reg_13589 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_139_reg_13595 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st37_fsm_36.read())) {
        linebuf_0_pixel_load_140_reg_13627 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_141_reg_13634 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_140_reg_13615 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_141_reg_13621 = linebuf_1_pixel_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && !esl_seteq<1,1,1>(src_V_pixel0_status.read(), ap_const_logic_0))) {
        linebuf_0_pixel_load_143_reg_14150 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_143_reg_14144 = linebuf_1_pixel_q1.read();
        tmp_pixel_10_reg_13704 = src_V_pixel10_dout.read();
        tmp_pixel_11_reg_13711 = src_V_pixel11_dout.read();
        tmp_pixel_12_reg_13718 = src_V_pixel12_dout.read();
        tmp_pixel_13_reg_13725 = src_V_pixel13_dout.read();
        tmp_pixel_14_reg_13732 = src_V_pixel14_dout.read();
        tmp_pixel_15_reg_13739 = src_V_pixel15_dout.read();
        tmp_pixel_16_reg_13746 = src_V_pixel16_dout.read();
        tmp_pixel_17_reg_13753 = src_V_pixel17_dout.read();
        tmp_pixel_18_reg_13760 = src_V_pixel18_dout.read();
        tmp_pixel_19_reg_13767 = src_V_pixel19_dout.read();
        tmp_pixel_1_reg_13641 = src_V_pixel1_dout.read();
        tmp_pixel_20_reg_13774 = src_V_pixel20_dout.read();
        tmp_pixel_21_reg_13781 = src_V_pixel21_dout.read();
        tmp_pixel_22_reg_13788 = src_V_pixel22_dout.read();
        tmp_pixel_23_reg_13795 = src_V_pixel23_dout.read();
        tmp_pixel_24_reg_13802 = src_V_pixel24_dout.read();
        tmp_pixel_25_reg_13809 = src_V_pixel25_dout.read();
        tmp_pixel_26_reg_13816 = src_V_pixel26_dout.read();
        tmp_pixel_27_reg_13823 = src_V_pixel27_dout.read();
        tmp_pixel_28_reg_13830 = src_V_pixel28_dout.read();
        tmp_pixel_29_reg_13837 = src_V_pixel29_dout.read();
        tmp_pixel_2_reg_13648 = src_V_pixel2_dout.read();
        tmp_pixel_30_reg_13844 = src_V_pixel30_dout.read();
        tmp_pixel_31_reg_13851 = src_V_pixel31_dout.read();
        tmp_pixel_32_reg_13858 = src_V_pixel32_dout.read();
        tmp_pixel_33_reg_13865 = src_V_pixel33_dout.read();
        tmp_pixel_34_reg_13872 = src_V_pixel34_dout.read();
        tmp_pixel_35_reg_13879 = src_V_pixel35_dout.read();
        tmp_pixel_36_reg_13886 = src_V_pixel36_dout.read();
        tmp_pixel_37_reg_13893 = src_V_pixel37_dout.read();
        tmp_pixel_38_reg_13900 = src_V_pixel38_dout.read();
        tmp_pixel_39_reg_13907 = src_V_pixel39_dout.read();
        tmp_pixel_3_reg_13655 = src_V_pixel3_dout.read();
        tmp_pixel_40_reg_13914 = src_V_pixel40_dout.read();
        tmp_pixel_41_reg_13921 = src_V_pixel41_dout.read();
        tmp_pixel_42_reg_13928 = src_V_pixel42_dout.read();
        tmp_pixel_43_reg_13935 = src_V_pixel43_dout.read();
        tmp_pixel_44_reg_13942 = src_V_pixel44_dout.read();
        tmp_pixel_45_reg_13949 = src_V_pixel45_dout.read();
        tmp_pixel_46_reg_13956 = src_V_pixel46_dout.read();
        tmp_pixel_47_reg_13963 = src_V_pixel47_dout.read();
        tmp_pixel_48_reg_13970 = src_V_pixel48_dout.read();
        tmp_pixel_49_reg_13977 = src_V_pixel49_dout.read();
        tmp_pixel_4_reg_13662 = src_V_pixel4_dout.read();
        tmp_pixel_50_reg_13984 = src_V_pixel50_dout.read();
        tmp_pixel_51_reg_13991 = src_V_pixel51_dout.read();
        tmp_pixel_52_reg_13998 = src_V_pixel52_dout.read();
        tmp_pixel_53_reg_14005 = src_V_pixel53_dout.read();
        tmp_pixel_54_reg_14012 = src_V_pixel54_dout.read();
        tmp_pixel_55_reg_14019 = src_V_pixel55_dout.read();
        tmp_pixel_56_reg_14026 = src_V_pixel56_dout.read();
        tmp_pixel_57_reg_14033 = src_V_pixel57_dout.read();
        tmp_pixel_58_reg_14040 = src_V_pixel58_dout.read();
        tmp_pixel_59_reg_14047 = src_V_pixel59_dout.read();
        tmp_pixel_5_reg_13669 = src_V_pixel5_dout.read();
        tmp_pixel_60_reg_14054 = src_V_pixel60_dout.read();
        tmp_pixel_61_reg_14061 = src_V_pixel61_dout.read();
        tmp_pixel_62_reg_14068 = src_V_pixel62_dout.read();
        tmp_pixel_63_reg_14075 = src_V_pixel63_dout.read();
        tmp_pixel_64_reg_14082 = src_V_pixel64_dout.read();
        tmp_pixel_65_reg_14089 = src_V_pixel65_dout.read();
        tmp_pixel_66_reg_14096 = src_V_pixel66_dout.read();
        tmp_pixel_67_reg_14103 = src_V_pixel67_dout.read();
        tmp_pixel_68_reg_14110 = src_V_pixel68_dout.read();
        tmp_pixel_69_reg_14117 = src_V_pixel69_dout.read();
        tmp_pixel_6_reg_13676 = src_V_pixel6_dout.read();
        tmp_pixel_70_reg_14124 = src_V_pixel70_dout.read();
        tmp_pixel_71_reg_14131 = src_V_pixel71_dout.read();
        tmp_pixel_72_reg_14138 = src_V_pixel72_dout.read();
        tmp_pixel_7_reg_13683 = src_V_pixel7_dout.read();
        tmp_pixel_8_reg_13690 = src_V_pixel8_dout.read();
        tmp_pixel_9_reg_13697 = src_V_pixel9_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        linebuf_0_pixel_load_74_reg_12769 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_75_reg_12776 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_74_reg_12757 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_75_reg_12763 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        linebuf_0_pixel_load_76_reg_12795 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_77_reg_12802 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_76_reg_12783 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_77_reg_12789 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        linebuf_0_pixel_load_78_reg_12821 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_79_reg_12828 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_78_reg_12809 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_79_reg_12815 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        linebuf_0_pixel_load_80_reg_12847 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_81_reg_12854 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_80_reg_12835 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_81_reg_12841 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        linebuf_0_pixel_load_82_reg_12873 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_83_reg_12880 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_82_reg_12861 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_83_reg_12867 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_8.read())) {
        linebuf_0_pixel_load_84_reg_12899 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_85_reg_12906 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_84_reg_12887 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_85_reg_12893 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st10_fsm_9.read())) {
        linebuf_0_pixel_load_86_reg_12925 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_87_reg_12932 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_86_reg_12913 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_87_reg_12919 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st11_fsm_10.read())) {
        linebuf_0_pixel_load_88_reg_12951 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_89_reg_12958 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_88_reg_12939 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_89_reg_12945 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st12_fsm_11.read())) {
        linebuf_0_pixel_load_90_reg_12977 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_91_reg_12984 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_90_reg_12965 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_91_reg_12971 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st13_fsm_12.read())) {
        linebuf_0_pixel_load_92_reg_13003 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_93_reg_13010 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_92_reg_12991 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_93_reg_12997 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st14_fsm_13.read())) {
        linebuf_0_pixel_load_94_reg_13029 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_95_reg_13036 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_94_reg_13017 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_95_reg_13023 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st15_fsm_14.read())) {
        linebuf_0_pixel_load_96_reg_13055 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_97_reg_13062 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_96_reg_13043 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_97_reg_13049 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st16_fsm_15.read())) {
        linebuf_0_pixel_load_98_reg_13081 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_99_reg_13088 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_98_reg_13069 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_99_reg_13075 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        linebuf_1_pixel_load_73_reg_12751 = linebuf_1_pixel_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && 
  !esl_seteq<1,1,1>(src_V_pixel0_status.read(), ap_const_logic_0)))) {
        reg_3214 = linebuf_1_pixel_q0.read();
        reg_3218 = linebuf_0_pixel_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && esl_seteq<1,1,1>(icmp_reg_12747.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(src_V_pixel0_status.read(), ap_const_logic_0))) {
        tmp_122_reg_14157 = tmp_122_fu_3581_p2.read();
    }
    if ((esl_seteq<1,1,1>(icmp_reg_12747.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st39_fsm_38.read()))) {
        tmp_pixel_0_6_reg_14162 = sum_tr_fu_3693_p2.read().range(11, 4);
        tmp_pixel_10_7_reg_14212 = sum_tr_10_fu_4881_p2.read().range(11, 4);
        tmp_pixel_11_7_reg_14217 = sum_tr_11_fu_4997_p2.read().range(11, 4);
        tmp_pixel_12_7_reg_14222 = sum_tr_12_fu_5113_p2.read().range(11, 4);
        tmp_pixel_13_7_reg_14227 = sum_tr_13_fu_5229_p2.read().range(11, 4);
        tmp_pixel_14_7_reg_14232 = sum_tr_14_fu_5345_p2.read().range(11, 4);
        tmp_pixel_15_7_reg_14237 = sum_tr_15_fu_5461_p2.read().range(11, 4);
        tmp_pixel_16_7_reg_14242 = sum_tr_16_fu_5577_p2.read().range(11, 4);
        tmp_pixel_17_7_reg_14247 = sum_tr_17_fu_5693_p2.read().range(11, 4);
        tmp_pixel_18_7_reg_14252 = sum_tr_18_fu_5809_p2.read().range(11, 4);
        tmp_pixel_19_7_reg_14257 = sum_tr_19_fu_5925_p2.read().range(11, 4);
        tmp_pixel_1_7_reg_14167 = sum_tr_1_fu_3837_p2.read().range(11, 4);
        tmp_pixel_20_7_reg_14262 = sum_tr_20_fu_6041_p2.read().range(11, 4);
        tmp_pixel_21_7_reg_14267 = sum_tr_21_fu_6157_p2.read().range(11, 4);
        tmp_pixel_22_7_reg_14272 = sum_tr_22_fu_6273_p2.read().range(11, 4);
        tmp_pixel_23_7_reg_14277 = sum_tr_23_fu_6389_p2.read().range(11, 4);
        tmp_pixel_24_7_reg_14282 = sum_tr_24_fu_6505_p2.read().range(11, 4);
        tmp_pixel_25_7_reg_14287 = sum_tr_25_fu_6621_p2.read().range(11, 4);
        tmp_pixel_26_7_reg_14292 = sum_tr_26_fu_6737_p2.read().range(11, 4);
        tmp_pixel_27_7_reg_14297 = sum_tr_27_fu_6853_p2.read().range(11, 4);
        tmp_pixel_28_7_reg_14302 = sum_tr_28_fu_6969_p2.read().range(11, 4);
        tmp_pixel_29_7_reg_14307 = sum_tr_29_fu_7085_p2.read().range(11, 4);
        tmp_pixel_2_7_reg_14172 = sum_tr_2_fu_3953_p2.read().range(11, 4);
        tmp_pixel_30_7_reg_14312 = sum_tr_30_fu_7201_p2.read().range(11, 4);
        tmp_pixel_31_7_reg_14317 = sum_tr_31_fu_7317_p2.read().range(11, 4);
        tmp_pixel_32_7_reg_14322 = sum_tr_32_fu_7433_p2.read().range(11, 4);
        tmp_pixel_33_7_reg_14327 = sum_tr_33_fu_7549_p2.read().range(11, 4);
        tmp_pixel_34_7_reg_14332 = sum_tr_34_fu_7665_p2.read().range(11, 4);
        tmp_pixel_35_7_reg_14337 = sum_tr_35_fu_7781_p2.read().range(11, 4);
        tmp_pixel_36_7_reg_14342 = sum_tr_36_fu_7897_p2.read().range(11, 4);
        tmp_pixel_37_7_reg_14347 = sum_tr_37_fu_8013_p2.read().range(11, 4);
        tmp_pixel_38_7_reg_14352 = sum_tr_38_fu_8129_p2.read().range(11, 4);
        tmp_pixel_39_7_reg_14357 = sum_tr_39_fu_8245_p2.read().range(11, 4);
        tmp_pixel_3_7_reg_14177 = sum_tr_3_fu_4069_p2.read().range(11, 4);
        tmp_pixel_40_7_reg_14362 = sum_tr_40_fu_8361_p2.read().range(11, 4);
        tmp_pixel_41_7_reg_14367 = sum_tr_41_fu_8477_p2.read().range(11, 4);
        tmp_pixel_42_7_reg_14372 = sum_tr_42_fu_8593_p2.read().range(11, 4);
        tmp_pixel_43_7_reg_14377 = sum_tr_43_fu_8709_p2.read().range(11, 4);
        tmp_pixel_44_7_reg_14382 = sum_tr_44_fu_8825_p2.read().range(11, 4);
        tmp_pixel_45_7_reg_14387 = sum_tr_45_fu_8941_p2.read().range(11, 4);
        tmp_pixel_46_7_reg_14392 = sum_tr_46_fu_9057_p2.read().range(11, 4);
        tmp_pixel_47_7_reg_14397 = sum_tr_47_fu_9173_p2.read().range(11, 4);
        tmp_pixel_48_7_reg_14402 = sum_tr_48_fu_9289_p2.read().range(11, 4);
        tmp_pixel_49_7_reg_14407 = sum_tr_49_fu_9405_p2.read().range(11, 4);
        tmp_pixel_4_7_reg_14182 = sum_tr_4_fu_4185_p2.read().range(11, 4);
        tmp_pixel_50_7_reg_14412 = sum_tr_50_fu_9521_p2.read().range(11, 4);
        tmp_pixel_51_7_reg_14417 = sum_tr_51_fu_9637_p2.read().range(11, 4);
        tmp_pixel_52_7_reg_14422 = sum_tr_52_fu_9753_p2.read().range(11, 4);
        tmp_pixel_53_7_reg_14427 = sum_tr_53_fu_9869_p2.read().range(11, 4);
        tmp_pixel_54_7_reg_14432 = sum_tr_54_fu_9985_p2.read().range(11, 4);
        tmp_pixel_55_7_reg_14437 = sum_tr_55_fu_10101_p2.read().range(11, 4);
        tmp_pixel_56_7_reg_14442 = sum_tr_56_fu_10217_p2.read().range(11, 4);
        tmp_pixel_57_7_reg_14447 = sum_tr_57_fu_10333_p2.read().range(11, 4);
        tmp_pixel_58_7_reg_14452 = sum_tr_58_fu_10449_p2.read().range(11, 4);
        tmp_pixel_59_7_reg_14457 = sum_tr_59_fu_10565_p2.read().range(11, 4);
        tmp_pixel_5_7_reg_14187 = sum_tr_5_fu_4301_p2.read().range(11, 4);
        tmp_pixel_60_7_reg_14462 = sum_tr_60_fu_10681_p2.read().range(11, 4);
        tmp_pixel_61_7_reg_14467 = sum_tr_61_fu_10797_p2.read().range(11, 4);
        tmp_pixel_62_7_reg_14472 = sum_tr_62_fu_10913_p2.read().range(11, 4);
        tmp_pixel_63_7_reg_14477 = sum_tr_63_fu_11029_p2.read().range(11, 4);
        tmp_pixel_64_7_reg_14482 = sum_tr_64_fu_11145_p2.read().range(11, 4);
        tmp_pixel_65_7_reg_14487 = sum_tr_65_fu_11261_p2.read().range(11, 4);
        tmp_pixel_66_7_reg_14492 = sum_tr_66_fu_11377_p2.read().range(11, 4);
        tmp_pixel_67_7_reg_14497 = sum_tr_67_fu_11493_p2.read().range(11, 4);
        tmp_pixel_68_7_reg_14502 = sum_tr_68_fu_11611_p2.read().range(11, 4);
        tmp_pixel_69_7_reg_14507 = sum_tr_69_fu_11729_p2.read().range(11, 4);
        tmp_pixel_6_7_reg_14192 = sum_tr_6_fu_4417_p2.read().range(11, 4);
        tmp_pixel_70_7_reg_14512 = sum_tr_s_fu_11847_p2.read().range(11, 4);
        tmp_pixel_7_7_reg_14197 = sum_tr_7_fu_4533_p2.read().range(11, 4);
        tmp_pixel_8_7_reg_14202 = sum_tr_8_fu_4649_p2.read().range(11, 4);
        tmp_pixel_9_7_reg_14207 = sum_tr_9_fu_4765_p2.read().range(11, 4);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        x_3_reg_12742 = x_3_fu_3236_p2.read();
    }
}

void Sobel_conv3x3_tile_strm104::thread_ap_NS_fsm() {
    if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st1_fsm_0))
    {
        if (!ap_sig_868.read()) {
            ap_NS_fsm = ap_ST_st2_fsm_1;
        } else {
            ap_NS_fsm = ap_ST_st1_fsm_0;
        }
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st2_fsm_1))
    {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_3230_p2.read())) {
            ap_NS_fsm = ap_ST_st3_fsm_2;
        } else {
            ap_NS_fsm = ap_ST_st75_fsm_74;
        }
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st3_fsm_2))
    {
        ap_NS_fsm = ap_ST_st4_fsm_3;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st4_fsm_3))
    {
        ap_NS_fsm = ap_ST_st5_fsm_4;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st5_fsm_4))
    {
        ap_NS_fsm = ap_ST_st6_fsm_5;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st6_fsm_5))
    {
        ap_NS_fsm = ap_ST_st7_fsm_6;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st7_fsm_6))
    {
        ap_NS_fsm = ap_ST_st8_fsm_7;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st8_fsm_7))
    {
        ap_NS_fsm = ap_ST_st9_fsm_8;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st9_fsm_8))
    {
        ap_NS_fsm = ap_ST_st10_fsm_9;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st10_fsm_9))
    {
        ap_NS_fsm = ap_ST_st11_fsm_10;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st11_fsm_10))
    {
        ap_NS_fsm = ap_ST_st12_fsm_11;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st12_fsm_11))
    {
        ap_NS_fsm = ap_ST_st13_fsm_12;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st13_fsm_12))
    {
        ap_NS_fsm = ap_ST_st14_fsm_13;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st14_fsm_13))
    {
        ap_NS_fsm = ap_ST_st15_fsm_14;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st15_fsm_14))
    {
        ap_NS_fsm = ap_ST_st16_fsm_15;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st16_fsm_15))
    {
        ap_NS_fsm = ap_ST_st17_fsm_16;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st17_fsm_16))
    {
        ap_NS_fsm = ap_ST_st18_fsm_17;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st18_fsm_17))
    {
        ap_NS_fsm = ap_ST_st19_fsm_18;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st19_fsm_18))
    {
        ap_NS_fsm = ap_ST_st20_fsm_19;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st20_fsm_19))
    {
        ap_NS_fsm = ap_ST_st21_fsm_20;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st21_fsm_20))
    {
        ap_NS_fsm = ap_ST_st22_fsm_21;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st22_fsm_21))
    {
        ap_NS_fsm = ap_ST_st23_fsm_22;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st23_fsm_22))
    {
        ap_NS_fsm = ap_ST_st24_fsm_23;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st24_fsm_23))
    {
        ap_NS_fsm = ap_ST_st25_fsm_24;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st25_fsm_24))
    {
        ap_NS_fsm = ap_ST_st26_fsm_25;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st26_fsm_25))
    {
        ap_NS_fsm = ap_ST_st27_fsm_26;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st27_fsm_26))
    {
        ap_NS_fsm = ap_ST_st28_fsm_27;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st28_fsm_27))
    {
        ap_NS_fsm = ap_ST_st29_fsm_28;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st29_fsm_28))
    {
        ap_NS_fsm = ap_ST_st30_fsm_29;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st30_fsm_29))
    {
        ap_NS_fsm = ap_ST_st31_fsm_30;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st31_fsm_30))
    {
        ap_NS_fsm = ap_ST_st32_fsm_31;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st32_fsm_31))
    {
        ap_NS_fsm = ap_ST_st33_fsm_32;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st33_fsm_32))
    {
        ap_NS_fsm = ap_ST_st34_fsm_33;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st34_fsm_33))
    {
        ap_NS_fsm = ap_ST_st35_fsm_34;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st35_fsm_34))
    {
        ap_NS_fsm = ap_ST_st36_fsm_35;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st36_fsm_35))
    {
        ap_NS_fsm = ap_ST_st37_fsm_36;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st37_fsm_36))
    {
        ap_NS_fsm = ap_ST_st38_fsm_37;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st38_fsm_37))
    {
        if (!esl_seteq<1,1,1>(src_V_pixel0_status.read(), ap_const_logic_0)) {
            ap_NS_fsm = ap_ST_st39_fsm_38;
        } else {
            ap_NS_fsm = ap_ST_st38_fsm_37;
        }
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st39_fsm_38))
    {
        ap_NS_fsm = ap_ST_st40_fsm_39;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st40_fsm_39))
    {
        if (!ap_sig_2030.read()) {
            ap_NS_fsm = ap_ST_st41_fsm_40;
        } else {
            ap_NS_fsm = ap_ST_st40_fsm_39;
        }
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st41_fsm_40))
    {
        ap_NS_fsm = ap_ST_st42_fsm_41;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st42_fsm_41))
    {
        ap_NS_fsm = ap_ST_st43_fsm_42;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st43_fsm_42))
    {
        ap_NS_fsm = ap_ST_st44_fsm_43;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st44_fsm_43))
    {
        ap_NS_fsm = ap_ST_st45_fsm_44;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st45_fsm_44))
    {
        ap_NS_fsm = ap_ST_st46_fsm_45;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st46_fsm_45))
    {
        ap_NS_fsm = ap_ST_st47_fsm_46;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st47_fsm_46))
    {
        ap_NS_fsm = ap_ST_st48_fsm_47;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st48_fsm_47))
    {
        ap_NS_fsm = ap_ST_st49_fsm_48;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st49_fsm_48))
    {
        ap_NS_fsm = ap_ST_st50_fsm_49;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st50_fsm_49))
    {
        ap_NS_fsm = ap_ST_st51_fsm_50;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st51_fsm_50))
    {
        ap_NS_fsm = ap_ST_st52_fsm_51;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st52_fsm_51))
    {
        ap_NS_fsm = ap_ST_st53_fsm_52;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st53_fsm_52))
    {
        ap_NS_fsm = ap_ST_st54_fsm_53;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st54_fsm_53))
    {
        ap_NS_fsm = ap_ST_st55_fsm_54;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st55_fsm_54))
    {
        ap_NS_fsm = ap_ST_st56_fsm_55;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st56_fsm_55))
    {
        ap_NS_fsm = ap_ST_st57_fsm_56;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st57_fsm_56))
    {
        ap_NS_fsm = ap_ST_st58_fsm_57;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st58_fsm_57))
    {
        ap_NS_fsm = ap_ST_st59_fsm_58;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st59_fsm_58))
    {
        ap_NS_fsm = ap_ST_st60_fsm_59;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st60_fsm_59))
    {
        ap_NS_fsm = ap_ST_st61_fsm_60;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st61_fsm_60))
    {
        ap_NS_fsm = ap_ST_st62_fsm_61;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st62_fsm_61))
    {
        ap_NS_fsm = ap_ST_st63_fsm_62;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st63_fsm_62))
    {
        ap_NS_fsm = ap_ST_st64_fsm_63;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st64_fsm_63))
    {
        ap_NS_fsm = ap_ST_st65_fsm_64;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st65_fsm_64))
    {
        ap_NS_fsm = ap_ST_st66_fsm_65;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st66_fsm_65))
    {
        ap_NS_fsm = ap_ST_st67_fsm_66;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st67_fsm_66))
    {
        ap_NS_fsm = ap_ST_st68_fsm_67;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st68_fsm_67))
    {
        ap_NS_fsm = ap_ST_st69_fsm_68;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st69_fsm_68))
    {
        ap_NS_fsm = ap_ST_st70_fsm_69;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st70_fsm_69))
    {
        ap_NS_fsm = ap_ST_st71_fsm_70;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st71_fsm_70))
    {
        ap_NS_fsm = ap_ST_st72_fsm_71;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st72_fsm_71))
    {
        ap_NS_fsm = ap_ST_st73_fsm_72;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st73_fsm_72))
    {
        ap_NS_fsm = ap_ST_st74_fsm_73;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st74_fsm_73))
    {
        ap_NS_fsm = ap_ST_st2_fsm_1;
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st75_fsm_74))
    {
        ap_NS_fsm = ap_ST_st1_fsm_0;
    }
    else
    {
        ap_NS_fsm =  (sc_lv<75>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}
}

