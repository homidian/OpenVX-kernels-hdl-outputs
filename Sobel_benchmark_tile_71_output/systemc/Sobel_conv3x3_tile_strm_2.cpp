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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st75_fsm_74.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st39_fsm_38.read())) {
        reg_3229 = linebuf_0_pixel_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        reg_3229 = linebuf_0_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st74_fsm_73.read())) {
        x_reg_3205 = x_3_reg_12913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_870.read())) {
        x_reg_3205 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_3236_p2.read()))) {
        icmp_reg_12918 = icmp_fu_3258_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        linebuf_0_pixel_load_146_reg_12934 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_147_reg_12940 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_146_reg_12922 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_147_reg_12928 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        linebuf_0_pixel_load_148_reg_12958 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_149_reg_12964 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_148_reg_12946 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_149_reg_12952 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        linebuf_0_pixel_load_150_reg_12982 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_151_reg_12988 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_150_reg_12970 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_151_reg_12976 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        linebuf_0_pixel_load_152_reg_13006 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_153_reg_13012 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_152_reg_12994 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_153_reg_13000 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        linebuf_0_pixel_load_154_reg_13030 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_155_reg_13036 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_154_reg_13018 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_155_reg_13024 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st9_fsm_8.read())) {
        linebuf_0_pixel_load_156_reg_13054 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_157_reg_13060 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_156_reg_13042 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_157_reg_13048 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st10_fsm_9.read())) {
        linebuf_0_pixel_load_158_reg_13078 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_159_reg_13084 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_158_reg_13066 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_159_reg_13072 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st11_fsm_10.read())) {
        linebuf_0_pixel_load_160_reg_13102 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_161_reg_13108 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_160_reg_13090 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_161_reg_13096 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st12_fsm_11.read())) {
        linebuf_0_pixel_load_162_reg_13126 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_163_reg_13132 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_162_reg_13114 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_163_reg_13120 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st13_fsm_12.read())) {
        linebuf_0_pixel_load_164_reg_13150 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_165_reg_13156 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_164_reg_13138 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_165_reg_13144 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st14_fsm_13.read())) {
        linebuf_0_pixel_load_166_reg_13174 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_167_reg_13180 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_166_reg_13162 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_167_reg_13168 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st15_fsm_14.read())) {
        linebuf_0_pixel_load_168_reg_13198 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_169_reg_13204 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_168_reg_13186 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_169_reg_13192 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st16_fsm_15.read())) {
        linebuf_0_pixel_load_170_reg_13222 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_171_reg_13228 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_170_reg_13210 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_171_reg_13216 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st17_fsm_16.read())) {
        linebuf_0_pixel_load_172_reg_13246 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_173_reg_13252 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_172_reg_13234 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_173_reg_13240 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st18_fsm_17.read())) {
        linebuf_0_pixel_load_174_reg_13270 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_175_reg_13276 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_174_reg_13258 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_175_reg_13264 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st19_fsm_18.read())) {
        linebuf_0_pixel_load_176_reg_13294 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_177_reg_13300 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_176_reg_13282 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_177_reg_13288 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st20_fsm_19.read())) {
        linebuf_0_pixel_load_178_reg_13318 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_179_reg_13324 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_178_reg_13306 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_179_reg_13312 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st21_fsm_20.read())) {
        linebuf_0_pixel_load_180_reg_13342 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_181_reg_13348 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_180_reg_13330 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_181_reg_13336 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st22_fsm_21.read())) {
        linebuf_0_pixel_load_182_reg_13366 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_183_reg_13372 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_182_reg_13354 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_183_reg_13360 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st23_fsm_22.read())) {
        linebuf_0_pixel_load_184_reg_13390 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_185_reg_13396 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_184_reg_13378 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_185_reg_13384 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st24_fsm_23.read())) {
        linebuf_0_pixel_load_186_reg_13414 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_187_reg_13420 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_186_reg_13402 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_187_reg_13408 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st25_fsm_24.read())) {
        linebuf_0_pixel_load_188_reg_13438 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_189_reg_13444 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_188_reg_13426 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_189_reg_13432 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st26_fsm_25.read())) {
        linebuf_0_pixel_load_190_reg_13462 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_191_reg_13468 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_190_reg_13450 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_191_reg_13456 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st27_fsm_26.read())) {
        linebuf_0_pixel_load_192_reg_13486 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_193_reg_13492 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_192_reg_13474 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_193_reg_13480 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st28_fsm_27.read())) {
        linebuf_0_pixel_load_194_reg_13510 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_195_reg_13516 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_194_reg_13498 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_195_reg_13504 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st29_fsm_28.read())) {
        linebuf_0_pixel_load_196_reg_13534 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_197_reg_13540 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_196_reg_13522 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_197_reg_13528 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st30_fsm_29.read())) {
        linebuf_0_pixel_load_198_reg_13558 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_199_reg_13564 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_198_reg_13546 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_199_reg_13552 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st31_fsm_30.read())) {
        linebuf_0_pixel_load_200_reg_13582 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_201_reg_13588 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_200_reg_13570 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_201_reg_13576 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st32_fsm_31.read())) {
        linebuf_0_pixel_load_202_reg_13606 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_203_reg_13612 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_202_reg_13594 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_203_reg_13600 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st33_fsm_32.read())) {
        linebuf_0_pixel_load_204_reg_13630 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_205_reg_13636 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_204_reg_13618 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_205_reg_13624 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st34_fsm_33.read())) {
        linebuf_0_pixel_load_206_reg_13654 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_207_reg_13660 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_206_reg_13642 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_207_reg_13648 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st35_fsm_34.read())) {
        linebuf_0_pixel_load_208_reg_13678 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_209_reg_13684 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_208_reg_13666 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_209_reg_13672 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st36_fsm_35.read())) {
        linebuf_0_pixel_load_210_reg_13702 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_211_reg_13708 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_210_reg_13690 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_211_reg_13696 = linebuf_1_pixel_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st37_fsm_36.read())) {
        linebuf_0_pixel_load_212_reg_13726 = linebuf_0_pixel_q0.read();
        linebuf_0_pixel_load_213_reg_13732 = linebuf_0_pixel_q1.read();
        linebuf_1_pixel_load_212_reg_13714 = linebuf_1_pixel_q0.read();
        linebuf_1_pixel_load_213_reg_13720 = linebuf_1_pixel_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && !esl_seteq<1,1,1>(src_V_pixel_10_status.read(), ap_const_logic_0))) {
        linebuf_0_pixel_load_215_reg_14238 = linebuf_0_pixel_q1.read();
        tmp_pixel_10_reg_13799 = src_V_pixel_10_dout.read();
        tmp_pixel_11_reg_13806 = src_V_pixel_11_dout.read();
        tmp_pixel_12_reg_13813 = src_V_pixel_12_dout.read();
        tmp_pixel_13_reg_13820 = src_V_pixel_13_dout.read();
        tmp_pixel_14_reg_13827 = src_V_pixel_14_dout.read();
        tmp_pixel_15_reg_13834 = src_V_pixel_15_dout.read();
        tmp_pixel_16_reg_13841 = src_V_pixel_16_dout.read();
        tmp_pixel_17_reg_13848 = src_V_pixel_17_dout.read();
        tmp_pixel_18_reg_13855 = src_V_pixel_18_dout.read();
        tmp_pixel_19_reg_13862 = src_V_pixel_19_dout.read();
        tmp_pixel_1_reg_13738 = src_V_pixel_1_dout.read();
        tmp_pixel_20_reg_13869 = src_V_pixel_20_dout.read();
        tmp_pixel_21_reg_13876 = src_V_pixel_21_dout.read();
        tmp_pixel_22_reg_13883 = src_V_pixel_22_dout.read();
        tmp_pixel_23_reg_13890 = src_V_pixel_23_dout.read();
        tmp_pixel_24_reg_13897 = src_V_pixel_24_dout.read();
        tmp_pixel_25_reg_13904 = src_V_pixel_25_dout.read();
        tmp_pixel_26_reg_13911 = src_V_pixel_26_dout.read();
        tmp_pixel_27_reg_13918 = src_V_pixel_27_dout.read();
        tmp_pixel_28_reg_13925 = src_V_pixel_28_dout.read();
        tmp_pixel_29_reg_13932 = src_V_pixel_29_dout.read();
        tmp_pixel_2_reg_13743 = src_V_pixel_2_dout.read();
        tmp_pixel_30_reg_13939 = src_V_pixel_30_dout.read();
        tmp_pixel_31_reg_13946 = src_V_pixel_31_dout.read();
        tmp_pixel_32_reg_13953 = src_V_pixel_32_dout.read();
        tmp_pixel_33_reg_13960 = src_V_pixel_33_dout.read();
        tmp_pixel_34_reg_13967 = src_V_pixel_34_dout.read();
        tmp_pixel_35_reg_13974 = src_V_pixel_35_dout.read();
        tmp_pixel_36_reg_13981 = src_V_pixel_36_dout.read();
        tmp_pixel_37_reg_13988 = src_V_pixel_37_dout.read();
        tmp_pixel_38_reg_13995 = src_V_pixel_38_dout.read();
        tmp_pixel_39_reg_14002 = src_V_pixel_39_dout.read();
        tmp_pixel_3_reg_13750 = src_V_pixel_3_dout.read();
        tmp_pixel_40_reg_14009 = src_V_pixel_40_dout.read();
        tmp_pixel_41_reg_14016 = src_V_pixel_41_dout.read();
        tmp_pixel_42_reg_14023 = src_V_pixel_42_dout.read();
        tmp_pixel_43_reg_14030 = src_V_pixel_43_dout.read();
        tmp_pixel_44_reg_14037 = src_V_pixel_44_dout.read();
        tmp_pixel_45_reg_14044 = src_V_pixel_45_dout.read();
        tmp_pixel_46_reg_14051 = src_V_pixel_46_dout.read();
        tmp_pixel_47_reg_14058 = src_V_pixel_47_dout.read();
        tmp_pixel_48_reg_14065 = src_V_pixel_48_dout.read();
        tmp_pixel_49_reg_14072 = src_V_pixel_49_dout.read();
        tmp_pixel_4_reg_13757 = src_V_pixel_4_dout.read();
        tmp_pixel_50_reg_14079 = src_V_pixel_50_dout.read();
        tmp_pixel_51_reg_14086 = src_V_pixel_51_dout.read();
        tmp_pixel_52_reg_14093 = src_V_pixel_52_dout.read();
        tmp_pixel_53_reg_14100 = src_V_pixel_53_dout.read();
        tmp_pixel_54_reg_14107 = src_V_pixel_54_dout.read();
        tmp_pixel_55_reg_14114 = src_V_pixel_55_dout.read();
        tmp_pixel_56_reg_14121 = src_V_pixel_56_dout.read();
        tmp_pixel_57_reg_14128 = src_V_pixel_57_dout.read();
        tmp_pixel_58_reg_14135 = src_V_pixel_58_dout.read();
        tmp_pixel_59_reg_14142 = src_V_pixel_59_dout.read();
        tmp_pixel_5_reg_13764 = src_V_pixel_5_dout.read();
        tmp_pixel_60_reg_14149 = src_V_pixel_60_dout.read();
        tmp_pixel_61_reg_14156 = src_V_pixel_61_dout.read();
        tmp_pixel_62_reg_14163 = src_V_pixel_62_dout.read();
        tmp_pixel_63_reg_14170 = src_V_pixel_63_dout.read();
        tmp_pixel_64_reg_14177 = src_V_pixel_64_dout.read();
        tmp_pixel_65_reg_14184 = src_V_pixel_65_dout.read();
        tmp_pixel_66_reg_14191 = src_V_pixel_66_dout.read();
        tmp_pixel_67_reg_14198 = src_V_pixel_67_dout.read();
        tmp_pixel_68_reg_14205 = src_V_pixel_68_dout.read();
        tmp_pixel_69_reg_14212 = src_V_pixel_69_dout.read();
        tmp_pixel_6_reg_13771 = src_V_pixel_6_dout.read();
        tmp_pixel_70_reg_14219 = src_V_pixel_70_dout.read();
        tmp_pixel_71_reg_14226 = src_V_pixel_71_dout.read();
        tmp_pixel_72_reg_14232 = src_V_pixel_72_dout.read();
        tmp_pixel_7_reg_13778 = src_V_pixel_7_dout.read();
        tmp_pixel_8_reg_13785 = src_V_pixel_8_dout.read();
        tmp_pixel_9_reg_13792 = src_V_pixel_9_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && 
  !esl_seteq<1,1,1>(src_V_pixel_10_status.read(), ap_const_logic_0)))) {
        reg_3216 = linebuf_1_pixel_q0.read();
        reg_3220 = linebuf_1_pixel_q1.read();
        reg_3224 = linebuf_0_pixel_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st38_fsm_37.read()) && esl_seteq<1,1,1>(icmp_reg_12918.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(src_V_pixel_10_status.read(), ap_const_logic_0))) {
        tmp_106_10_reg_14354 = tmp_106_10_fu_3812_p2.read();
        tmp_106_11_reg_14364 = tmp_106_11_fu_3829_p2.read();
        tmp_106_12_reg_14374 = tmp_106_12_fu_3846_p2.read();
        tmp_106_13_reg_14384 = tmp_106_13_fu_3863_p2.read();
        tmp_106_14_reg_14394 = tmp_106_14_fu_3880_p2.read();
        tmp_106_15_reg_14404 = tmp_106_15_fu_3897_p2.read();
        tmp_106_16_reg_14414 = tmp_106_16_fu_3914_p2.read();
        tmp_106_17_reg_14424 = tmp_106_17_fu_3931_p2.read();
        tmp_106_18_reg_14434 = tmp_106_18_fu_3948_p2.read();
        tmp_106_19_reg_14444 = tmp_106_19_fu_3965_p2.read();
        tmp_106_20_reg_14454 = tmp_106_20_fu_3982_p2.read();
        tmp_106_21_reg_14464 = tmp_106_21_fu_3999_p2.read();
        tmp_106_22_reg_14474 = tmp_106_22_fu_4016_p2.read();
        tmp_106_23_reg_14484 = tmp_106_23_fu_4033_p2.read();
        tmp_106_24_reg_14494 = tmp_106_24_fu_4050_p2.read();
        tmp_106_25_reg_14504 = tmp_106_25_fu_4067_p2.read();
        tmp_106_26_reg_14514 = tmp_106_26_fu_4084_p2.read();
        tmp_106_27_reg_14524 = tmp_106_27_fu_4101_p2.read();
        tmp_106_28_reg_14534 = tmp_106_28_fu_4118_p2.read();
        tmp_106_29_reg_14544 = tmp_106_29_fu_4135_p2.read();
        tmp_106_2_reg_14264 = tmp_106_2_fu_3659_p2.read();
        tmp_106_30_reg_14554 = tmp_106_30_fu_4152_p2.read();
        tmp_106_31_reg_14564 = tmp_106_31_fu_4169_p2.read();
        tmp_106_32_reg_14574 = tmp_106_32_fu_4186_p2.read();
        tmp_106_33_reg_14584 = tmp_106_33_fu_4203_p2.read();
        tmp_106_34_reg_14594 = tmp_106_34_fu_4220_p2.read();
        tmp_106_35_reg_14604 = tmp_106_35_fu_4237_p2.read();
        tmp_106_36_reg_14614 = tmp_106_36_fu_4254_p2.read();
        tmp_106_37_reg_14624 = tmp_106_37_fu_4271_p2.read();
        tmp_106_38_reg_14634 = tmp_106_38_fu_4288_p2.read();
        tmp_106_39_reg_14644 = tmp_106_39_fu_4305_p2.read();
        tmp_106_3_reg_14274 = tmp_106_3_fu_3676_p2.read();
        tmp_106_40_reg_14654 = tmp_106_40_fu_4322_p2.read();
        tmp_106_41_reg_14664 = tmp_106_41_fu_4339_p2.read();
        tmp_106_42_reg_14674 = tmp_106_42_fu_4356_p2.read();
        tmp_106_43_reg_14684 = tmp_106_43_fu_4373_p2.read();
        tmp_106_44_reg_14694 = tmp_106_44_fu_4390_p2.read();
        tmp_106_45_reg_14704 = tmp_106_45_fu_4407_p2.read();
        tmp_106_46_reg_14714 = tmp_106_46_fu_4424_p2.read();
        tmp_106_47_reg_14724 = tmp_106_47_fu_4441_p2.read();
        tmp_106_48_reg_14734 = tmp_106_48_fu_4458_p2.read();
        tmp_106_49_reg_14744 = tmp_106_49_fu_4475_p2.read();
        tmp_106_4_reg_14284 = tmp_106_4_fu_3693_p2.read();
        tmp_106_50_reg_14754 = tmp_106_50_fu_4492_p2.read();
        tmp_106_51_reg_14764 = tmp_106_51_fu_4509_p2.read();
        tmp_106_52_reg_14774 = tmp_106_52_fu_4526_p2.read();
        tmp_106_53_reg_14784 = tmp_106_53_fu_4543_p2.read();
        tmp_106_54_reg_14794 = tmp_106_54_fu_4560_p2.read();
        tmp_106_55_reg_14804 = tmp_106_55_fu_4577_p2.read();
        tmp_106_56_reg_14814 = tmp_106_56_fu_4594_p2.read();
        tmp_106_57_reg_14824 = tmp_106_57_fu_4611_p2.read();
        tmp_106_58_reg_14834 = tmp_106_58_fu_4628_p2.read();
        tmp_106_59_reg_14844 = tmp_106_59_fu_4645_p2.read();
        tmp_106_5_reg_14294 = tmp_106_5_fu_3710_p2.read();
        tmp_106_60_reg_14854 = tmp_106_60_fu_4662_p2.read();
        tmp_106_61_reg_14864 = tmp_106_61_fu_4679_p2.read();
        tmp_106_62_reg_14874 = tmp_106_62_fu_4696_p2.read();
        tmp_106_63_reg_14884 = tmp_106_63_fu_4713_p2.read();
        tmp_106_64_reg_14894 = tmp_106_64_fu_4730_p2.read();
        tmp_106_65_reg_14904 = tmp_106_65_fu_4747_p2.read();
        tmp_106_66_reg_14914 = tmp_106_66_fu_4764_p2.read();
        tmp_106_67_reg_14924 = tmp_106_67_fu_4781_p2.read();
        tmp_106_68_reg_14934 = tmp_106_68_fu_4799_p2.read();
        tmp_106_69_reg_14939 = tmp_106_69_fu_4809_p2.read();
        tmp_106_6_reg_14304 = tmp_106_6_fu_3727_p2.read();
        tmp_106_7_reg_14314 = tmp_106_7_fu_3744_p2.read();
        tmp_106_8_reg_14324 = tmp_106_8_fu_3761_p2.read();
        tmp_106_9_reg_14334 = tmp_106_9_fu_3778_p2.read();
        tmp_106_s_reg_14344 = tmp_106_s_fu_3795_p2.read();
        tmp_118_10_reg_14349 = tmp_118_10_fu_3801_p3.read();
        tmp_118_11_reg_14359 = tmp_118_11_fu_3818_p3.read();
        tmp_118_12_reg_14369 = tmp_118_12_fu_3835_p3.read();
        tmp_118_13_reg_14379 = tmp_118_13_fu_3852_p3.read();
        tmp_118_14_reg_14389 = tmp_118_14_fu_3869_p3.read();
        tmp_118_15_reg_14399 = tmp_118_15_fu_3886_p3.read();
        tmp_118_16_reg_14409 = tmp_118_16_fu_3903_p3.read();
        tmp_118_17_reg_14419 = tmp_118_17_fu_3920_p3.read();
        tmp_118_18_reg_14429 = tmp_118_18_fu_3937_p3.read();
        tmp_118_19_reg_14439 = tmp_118_19_fu_3954_p3.read();
        tmp_118_1_reg_14254 = tmp_118_1_fu_3636_p3.read();
        tmp_118_20_reg_14449 = tmp_118_20_fu_3971_p3.read();
        tmp_118_21_reg_14459 = tmp_118_21_fu_3988_p3.read();
        tmp_118_22_reg_14469 = tmp_118_22_fu_4005_p3.read();
        tmp_118_23_reg_14479 = tmp_118_23_fu_4022_p3.read();
        tmp_118_24_reg_14489 = tmp_118_24_fu_4039_p3.read();
        tmp_118_25_reg_14499 = tmp_118_25_fu_4056_p3.read();
        tmp_118_26_reg_14509 = tmp_118_26_fu_4073_p3.read();
        tmp_118_27_reg_14519 = tmp_118_27_fu_4090_p3.read();
        tmp_118_28_reg_14529 = tmp_118_28_fu_4107_p3.read();
        tmp_118_29_reg_14539 = tmp_118_29_fu_4124_p3.read();
        tmp_118_2_reg_14269 = tmp_118_2_fu_3665_p3.read();
        tmp_118_30_reg_14549 = tmp_118_30_fu_4141_p3.read();
        tmp_118_31_reg_14559 = tmp_118_31_fu_4158_p3.read();
        tmp_118_32_reg_14569 = tmp_118_32_fu_4175_p3.read();
        tmp_118_33_reg_14579 = tmp_118_33_fu_4192_p3.read();
        tmp_118_34_reg_14589 = tmp_118_34_fu_4209_p3.read();
        tmp_118_35_reg_14599 = tmp_118_35_fu_4226_p3.read();
        tmp_118_36_reg_14609 = tmp_118_36_fu_4243_p3.read();
        tmp_118_37_reg_14619 = tmp_118_37_fu_4260_p3.read();
        tmp_118_38_reg_14629 = tmp_118_38_fu_4277_p3.read();
        tmp_118_39_reg_14639 = tmp_118_39_fu_4294_p3.read();
        tmp_118_3_reg_14279 = tmp_118_3_fu_3682_p3.read();
        tmp_118_40_reg_14649 = tmp_118_40_fu_4311_p3.read();
        tmp_118_41_reg_14659 = tmp_118_41_fu_4328_p3.read();
        tmp_118_42_reg_14669 = tmp_118_42_fu_4345_p3.read();
        tmp_118_43_reg_14679 = tmp_118_43_fu_4362_p3.read();
        tmp_118_44_reg_14689 = tmp_118_44_fu_4379_p3.read();
        tmp_118_45_reg_14699 = tmp_118_45_fu_4396_p3.read();
        tmp_118_46_reg_14709 = tmp_118_46_fu_4413_p3.read();
        tmp_118_47_reg_14719 = tmp_118_47_fu_4430_p3.read();
        tmp_118_48_reg_14729 = tmp_118_48_fu_4447_p3.read();
        tmp_118_49_reg_14739 = tmp_118_49_fu_4464_p3.read();
        tmp_118_4_reg_14289 = tmp_118_4_fu_3699_p3.read();
        tmp_118_50_reg_14749 = tmp_118_50_fu_4481_p3.read();
        tmp_118_51_reg_14759 = tmp_118_51_fu_4498_p3.read();
        tmp_118_52_reg_14769 = tmp_118_52_fu_4515_p3.read();
        tmp_118_53_reg_14779 = tmp_118_53_fu_4532_p3.read();
        tmp_118_54_reg_14789 = tmp_118_54_fu_4549_p3.read();
        tmp_118_55_reg_14799 = tmp_118_55_fu_4566_p3.read();
        tmp_118_56_reg_14809 = tmp_118_56_fu_4583_p3.read();
        tmp_118_57_reg_14819 = tmp_118_57_fu_4600_p3.read();
        tmp_118_58_reg_14829 = tmp_118_58_fu_4617_p3.read();
        tmp_118_59_reg_14839 = tmp_118_59_fu_4634_p3.read();
        tmp_118_5_reg_14299 = tmp_118_5_fu_3716_p3.read();
        tmp_118_60_reg_14849 = tmp_118_60_fu_4651_p3.read();
        tmp_118_61_reg_14859 = tmp_118_61_fu_4668_p3.read();
        tmp_118_62_reg_14869 = tmp_118_62_fu_4685_p3.read();
        tmp_118_63_reg_14879 = tmp_118_63_fu_4702_p3.read();
        tmp_118_64_reg_14889 = tmp_118_64_fu_4719_p3.read();
        tmp_118_65_reg_14899 = tmp_118_65_fu_4736_p3.read();
        tmp_118_66_reg_14909 = tmp_118_66_fu_4753_p3.read();
        tmp_118_67_reg_14919 = tmp_118_67_fu_4770_p3.read();
        tmp_118_68_reg_14929 = tmp_118_68_fu_4787_p3.read();
        tmp_118_6_reg_14309 = tmp_118_6_fu_3733_p3.read();
        tmp_118_7_reg_14319 = tmp_118_7_fu_3750_p3.read();
        tmp_118_8_reg_14329 = tmp_118_8_fu_3767_p3.read();
        tmp_118_9_reg_14339 = tmp_118_9_fu_3784_p3.read();
        tmp_118_reg_14244 = tmp_118_fu_3595_p3.read();
        tmp_122_1_reg_14259 = tmp_122_1_fu_3649_p2.read();
        tmp_122_reg_14249 = tmp_122_fu_3608_p2.read();
    }
    if ((esl_seteq<1,1,1>(icmp_reg_12918.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st39_fsm_38.read()))) {
        tmp_pixel_0_7_reg_14944 = tmp_pixel_0_7_fu_4893_p3.read();
        tmp_pixel_10_8_reg_14994 = tmp_pixel_10_8_fu_5897_p3.read();
        tmp_pixel_11_8_reg_14999 = tmp_pixel_11_8_fu_5999_p3.read();
        tmp_pixel_12_8_reg_15004 = tmp_pixel_12_8_fu_6101_p3.read();
        tmp_pixel_13_8_reg_15009 = tmp_pixel_13_8_fu_6203_p3.read();
        tmp_pixel_14_8_reg_15014 = tmp_pixel_14_8_fu_6305_p3.read();
        tmp_pixel_15_8_reg_15019 = tmp_pixel_15_8_fu_6407_p3.read();
        tmp_pixel_16_8_reg_15024 = tmp_pixel_16_8_fu_6509_p3.read();
        tmp_pixel_17_8_reg_15029 = tmp_pixel_17_8_fu_6611_p3.read();
        tmp_pixel_18_8_reg_15034 = tmp_pixel_18_8_fu_6713_p3.read();
        tmp_pixel_19_8_reg_15039 = tmp_pixel_19_8_fu_6815_p3.read();
        tmp_pixel_1_8_reg_14949 = tmp_pixel_1_8_fu_4979_p3.read();
        tmp_pixel_20_8_reg_15044 = tmp_pixel_20_8_fu_6917_p3.read();
        tmp_pixel_21_8_reg_15049 = tmp_pixel_21_8_fu_7019_p3.read();
        tmp_pixel_22_8_reg_15054 = tmp_pixel_22_8_fu_7121_p3.read();
        tmp_pixel_23_8_reg_15059 = tmp_pixel_23_8_fu_7223_p3.read();
        tmp_pixel_24_8_reg_15064 = tmp_pixel_24_8_fu_7325_p3.read();
        tmp_pixel_25_8_reg_15069 = tmp_pixel_25_8_fu_7427_p3.read();
        tmp_pixel_26_8_reg_15074 = tmp_pixel_26_8_fu_7529_p3.read();
        tmp_pixel_27_8_reg_15079 = tmp_pixel_27_8_fu_7631_p3.read();
        tmp_pixel_28_8_reg_15084 = tmp_pixel_28_8_fu_7733_p3.read();
        tmp_pixel_29_8_reg_15089 = tmp_pixel_29_8_fu_7835_p3.read();
        tmp_pixel_2_8_reg_14954 = tmp_pixel_2_8_fu_5081_p3.read();
        tmp_pixel_30_8_reg_15094 = tmp_pixel_30_8_fu_7937_p3.read();
        tmp_pixel_31_8_reg_15099 = tmp_pixel_31_8_fu_8039_p3.read();
        tmp_pixel_32_8_reg_15104 = tmp_pixel_32_8_fu_8141_p3.read();
        tmp_pixel_33_8_reg_15109 = tmp_pixel_33_8_fu_8243_p3.read();
        tmp_pixel_34_8_reg_15114 = tmp_pixel_34_8_fu_8345_p3.read();
        tmp_pixel_35_8_reg_15119 = tmp_pixel_35_8_fu_8447_p3.read();
        tmp_pixel_36_8_reg_15124 = tmp_pixel_36_8_fu_8549_p3.read();
        tmp_pixel_37_8_reg_15129 = tmp_pixel_37_8_fu_8651_p3.read();
        tmp_pixel_38_8_reg_15134 = tmp_pixel_38_8_fu_8753_p3.read();
        tmp_pixel_39_8_reg_15139 = tmp_pixel_39_8_fu_8855_p3.read();
        tmp_pixel_3_8_reg_14959 = tmp_pixel_3_8_fu_5183_p3.read();
        tmp_pixel_40_8_reg_15144 = tmp_pixel_40_8_fu_8957_p3.read();
        tmp_pixel_41_8_reg_15149 = tmp_pixel_41_8_fu_9059_p3.read();
        tmp_pixel_42_8_reg_15154 = tmp_pixel_42_8_fu_9161_p3.read();
        tmp_pixel_43_8_reg_15159 = tmp_pixel_43_8_fu_9263_p3.read();
        tmp_pixel_44_8_reg_15164 = tmp_pixel_44_8_fu_9365_p3.read();
        tmp_pixel_45_8_reg_15169 = tmp_pixel_45_8_fu_9467_p3.read();
        tmp_pixel_46_8_reg_15174 = tmp_pixel_46_8_fu_9569_p3.read();
        tmp_pixel_47_8_reg_15179 = tmp_pixel_47_8_fu_9671_p3.read();
        tmp_pixel_48_8_reg_15184 = tmp_pixel_48_8_fu_9773_p3.read();
        tmp_pixel_49_8_reg_15189 = tmp_pixel_49_8_fu_9875_p3.read();
        tmp_pixel_4_8_reg_14964 = tmp_pixel_4_8_fu_5285_p3.read();
        tmp_pixel_50_8_reg_15194 = tmp_pixel_50_8_fu_9977_p3.read();
        tmp_pixel_51_8_reg_15199 = tmp_pixel_51_8_fu_10079_p3.read();
        tmp_pixel_52_8_reg_15204 = tmp_pixel_52_8_fu_10181_p3.read();
        tmp_pixel_53_8_reg_15209 = tmp_pixel_53_8_fu_10283_p3.read();
        tmp_pixel_54_8_reg_15214 = tmp_pixel_54_8_fu_10385_p3.read();
        tmp_pixel_55_8_reg_15219 = tmp_pixel_55_8_fu_10487_p3.read();
        tmp_pixel_56_8_reg_15224 = tmp_pixel_56_8_fu_10589_p3.read();
        tmp_pixel_57_8_reg_15229 = tmp_pixel_57_8_fu_10691_p3.read();
        tmp_pixel_58_8_reg_15234 = tmp_pixel_58_8_fu_10793_p3.read();
        tmp_pixel_59_8_reg_15239 = tmp_pixel_59_8_fu_10895_p3.read();
        tmp_pixel_5_8_reg_14969 = tmp_pixel_5_8_fu_5387_p3.read();
        tmp_pixel_60_8_reg_15244 = tmp_pixel_60_8_fu_10997_p3.read();
        tmp_pixel_61_8_reg_15249 = tmp_pixel_61_8_fu_11099_p3.read();
        tmp_pixel_62_8_reg_15254 = tmp_pixel_62_8_fu_11201_p3.read();
        tmp_pixel_63_8_reg_15259 = tmp_pixel_63_8_fu_11303_p3.read();
        tmp_pixel_64_8_reg_15264 = tmp_pixel_64_8_fu_11405_p3.read();
        tmp_pixel_65_8_reg_15269 = tmp_pixel_65_8_fu_11507_p3.read();
        tmp_pixel_66_8_reg_15274 = tmp_pixel_66_8_fu_11609_p3.read();
        tmp_pixel_67_8_reg_15279 = tmp_pixel_67_8_fu_11711_p3.read();
        tmp_pixel_68_8_reg_15284 = tmp_pixel_68_8_fu_11815_p3.read();
        tmp_pixel_69_8_reg_15289 = tmp_pixel_69_8_fu_11920_p3.read();
        tmp_pixel_6_8_reg_14974 = tmp_pixel_6_8_fu_5489_p3.read();
        tmp_pixel_70_8_reg_15294 = tmp_pixel_70_8_fu_12026_p3.read();
        tmp_pixel_7_8_reg_14979 = tmp_pixel_7_8_fu_5591_p3.read();
        tmp_pixel_8_8_reg_14984 = tmp_pixel_8_8_fu_5693_p3.read();
        tmp_pixel_9_8_reg_14989 = tmp_pixel_9_8_fu_5795_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        x_3_reg_12913 = x_3_fu_3242_p2.read();
    }
}

void Sobel_conv3x3_tile_strm::thread_ap_NS_fsm() {
    if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st1_fsm_0))
    {
        if (!ap_sig_870.read()) {
            ap_NS_fsm = ap_ST_st2_fsm_1;
        } else {
            ap_NS_fsm = ap_ST_st1_fsm_0;
        }
    }
    else if (esl_seteq<1,75,75>(ap_CS_fsm.read(), ap_ST_st2_fsm_1))
    {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_3236_p2.read())) {
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
        if (!esl_seteq<1,1,1>(src_V_pixel_10_status.read(), ap_const_logic_0)) {
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
        if (!ap_sig_2307.read()) {
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

