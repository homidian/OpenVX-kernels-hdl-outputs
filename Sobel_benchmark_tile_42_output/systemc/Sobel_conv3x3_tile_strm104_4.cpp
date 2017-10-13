#include "Sobel_conv3x3_tile_strm104.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm104::thread_tmp_122_10_cast_fu_3859_p1() {
    tmp_122_10_cast_fu_3859_p1 = esl_zext<11,10>(tmp44_fu_3667_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_11_cast_fu_3975_p1() {
    tmp_122_11_cast_fu_3975_p1 = esl_zext<11,10>(tmp49_fu_3783_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_12_cast_fu_4091_p1() {
    tmp_122_12_cast_fu_4091_p1 = esl_zext<11,10>(tmp54_fu_3899_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_13_cast_fu_4207_p1() {
    tmp_122_13_cast_fu_4207_p1 = esl_zext<11,10>(tmp59_fu_4015_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_14_cast_fu_4323_p1() {
    tmp_122_14_cast_fu_4323_p1 = esl_zext<11,10>(tmp64_fu_4131_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_15_cast_fu_4439_p1() {
    tmp_122_15_cast_fu_4439_p1 = esl_zext<11,10>(tmp69_fu_4247_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_16_cast_fu_4555_p1() {
    tmp_122_16_cast_fu_4555_p1 = esl_zext<11,10>(tmp74_fu_4363_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_17_cast_fu_4671_p1() {
    tmp_122_17_cast_fu_4671_p1 = esl_zext<11,10>(tmp79_fu_4479_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_18_cast_fu_4787_p1() {
    tmp_122_18_cast_fu_4787_p1 = esl_zext<11,10>(tmp84_fu_4595_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_19_cast_fu_4903_p1() {
    tmp_122_19_cast_fu_4903_p1 = esl_zext<11,10>(tmp89_fu_4711_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_1_cast_fu_2815_p1() {
    tmp_122_1_cast_fu_2815_p1 = esl_zext<11,10>(tmp_122_1_fu_2809_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_1_fu_2809_p2() {
    tmp_122_1_fu_2809_p2 = (!tmp_106_1_cast_fu_2745_p1.read().is_01() || !tmp6_cast_fu_2805_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_106_1_cast_fu_2745_p1.read()) + sc_biguint<10>(tmp6_cast_fu_2805_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_20_cast_fu_5019_p1() {
    tmp_122_20_cast_fu_5019_p1 = esl_zext<11,10>(tmp94_fu_4827_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_21_cast_fu_5135_p1() {
    tmp_122_21_cast_fu_5135_p1 = esl_zext<11,10>(tmp99_fu_4943_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_22_cast_fu_5251_p1() {
    tmp_122_22_cast_fu_5251_p1 = esl_zext<11,10>(tmp104_fu_5059_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_23_cast_fu_5367_p1() {
    tmp_122_23_cast_fu_5367_p1 = esl_zext<11,10>(tmp109_fu_5175_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_24_cast_fu_5483_p1() {
    tmp_122_24_cast_fu_5483_p1 = esl_zext<11,10>(tmp114_fu_5291_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_25_cast_fu_5599_p1() {
    tmp_122_25_cast_fu_5599_p1 = esl_zext<11,10>(tmp119_fu_5407_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_26_cast_fu_5715_p1() {
    tmp_122_26_cast_fu_5715_p1 = esl_zext<11,10>(tmp124_fu_5523_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_27_cast_fu_5831_p1() {
    tmp_122_27_cast_fu_5831_p1 = esl_zext<11,10>(tmp129_fu_5639_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_28_cast_fu_5947_p1() {
    tmp_122_28_cast_fu_5947_p1 = esl_zext<11,10>(tmp134_fu_5755_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_29_cast_fu_6063_p1() {
    tmp_122_29_cast_fu_6063_p1 = esl_zext<11,10>(tmp139_fu_5871_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_2_cast_fu_2931_p1() {
    tmp_122_2_cast_fu_2931_p1 = esl_zext<11,10>(tmp4_fu_2712_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_30_cast_fu_6179_p1() {
    tmp_122_30_cast_fu_6179_p1 = esl_zext<11,10>(tmp144_fu_5987_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_31_cast_fu_6295_p1() {
    tmp_122_31_cast_fu_6295_p1 = esl_zext<11,10>(tmp149_fu_6103_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_32_cast_fu_6411_p1() {
    tmp_122_32_cast_fu_6411_p1 = esl_zext<11,10>(tmp154_fu_6219_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_33_cast_fu_6527_p1() {
    tmp_122_33_cast_fu_6527_p1 = esl_zext<11,10>(tmp159_fu_6335_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_34_cast_fu_6643_p1() {
    tmp_122_34_cast_fu_6643_p1 = esl_zext<11,10>(tmp164_fu_6451_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_35_cast_fu_6759_p1() {
    tmp_122_35_cast_fu_6759_p1 = esl_zext<11,10>(tmp169_fu_6567_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_36_cast_fu_6875_p1() {
    tmp_122_36_cast_fu_6875_p1 = esl_zext<11,10>(tmp174_fu_6683_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_37_cast_fu_6991_p1() {
    tmp_122_37_cast_fu_6991_p1 = esl_zext<11,10>(tmp179_fu_6799_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_38_cast_fu_7107_p1() {
    tmp_122_38_cast_fu_7107_p1 = esl_zext<11,10>(tmp184_fu_6915_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_39_cast_fu_7223_p1() {
    tmp_122_39_cast_fu_7223_p1 = esl_zext<11,10>(tmp189_fu_7031_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_3_cast_fu_3047_p1() {
    tmp_122_3_cast_fu_3047_p1 = esl_zext<11,10>(tmp9_fu_2855_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_40_cast_fu_7339_p1() {
    tmp_122_40_cast_fu_7339_p1 = esl_zext<11,10>(tmp194_fu_7147_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_4_cast_fu_3163_p1() {
    tmp_122_4_cast_fu_3163_p1 = esl_zext<11,10>(tmp14_fu_2971_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_5_cast_fu_3279_p1() {
    tmp_122_5_cast_fu_3279_p1 = esl_zext<11,10>(tmp19_fu_3087_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_6_cast_fu_3395_p1() {
    tmp_122_6_cast_fu_3395_p1 = esl_zext<11,10>(tmp24_fu_3203_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_7_cast_fu_3511_p1() {
    tmp_122_7_cast_fu_3511_p1 = esl_zext<11,10>(tmp29_fu_3319_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_8_cast_fu_3627_p1() {
    tmp_122_8_cast_fu_3627_p1 = esl_zext<11,10>(tmp34_fu_3435_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_9_cast_fu_3743_p1() {
    tmp_122_9_cast_fu_3743_p1 = esl_zext<11,10>(tmp39_fu_3551_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_cast_734_fu_7438_p1() {
    tmp_122_cast_734_fu_7438_p1 = esl_zext<11,10>(tmp199_fu_7263_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_cast_fu_2673_p1() {
    tmp_122_cast_fu_2673_p1 = esl_zext<11,10>(tmp_122_reg_8828.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_122_fu_2575_p2() {
    tmp_122_fu_2575_p2 = (!tmp_106_cast_fu_2557_p1.read().is_01() || !tmp1_cast_fu_2571_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_106_cast_fu_2557_p1.read()) + sc_biguint<10>(tmp1_cast_fu_2571_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_10_cast_fu_3985_p1() {
    tmp_123_10_cast_fu_3985_p1 = esl_zext<12,11>(tmp_123_10_fu_3979_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_10_fu_3979_p2() {
    tmp_123_10_fu_3979_p2 = (!tmp_110_11_cast_fu_3932_p1.read().is_01() || !tmp_122_11_cast_fu_3975_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_11_cast_fu_3932_p1.read()) + sc_biguint<11>(tmp_122_11_cast_fu_3975_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_11_cast_fu_4101_p1() {
    tmp_123_11_cast_fu_4101_p1 = esl_zext<12,11>(tmp_123_11_fu_4095_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_11_fu_4095_p2() {
    tmp_123_11_fu_4095_p2 = (!tmp_110_12_cast_fu_4048_p1.read().is_01() || !tmp_122_12_cast_fu_4091_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_12_cast_fu_4048_p1.read()) + sc_biguint<11>(tmp_122_12_cast_fu_4091_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_12_cast_fu_4217_p1() {
    tmp_123_12_cast_fu_4217_p1 = esl_zext<12,11>(tmp_123_12_fu_4211_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_12_fu_4211_p2() {
    tmp_123_12_fu_4211_p2 = (!tmp_110_13_cast_fu_4164_p1.read().is_01() || !tmp_122_13_cast_fu_4207_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_13_cast_fu_4164_p1.read()) + sc_biguint<11>(tmp_122_13_cast_fu_4207_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_13_cast_fu_4333_p1() {
    tmp_123_13_cast_fu_4333_p1 = esl_zext<12,11>(tmp_123_13_fu_4327_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_13_fu_4327_p2() {
    tmp_123_13_fu_4327_p2 = (!tmp_110_14_cast_fu_4280_p1.read().is_01() || !tmp_122_14_cast_fu_4323_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_14_cast_fu_4280_p1.read()) + sc_biguint<11>(tmp_122_14_cast_fu_4323_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_14_cast_fu_4449_p1() {
    tmp_123_14_cast_fu_4449_p1 = esl_zext<12,11>(tmp_123_14_fu_4443_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_14_fu_4443_p2() {
    tmp_123_14_fu_4443_p2 = (!tmp_110_15_cast_fu_4396_p1.read().is_01() || !tmp_122_15_cast_fu_4439_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_15_cast_fu_4396_p1.read()) + sc_biguint<11>(tmp_122_15_cast_fu_4439_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_15_cast_fu_4565_p1() {
    tmp_123_15_cast_fu_4565_p1 = esl_zext<12,11>(tmp_123_15_fu_4559_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_15_fu_4559_p2() {
    tmp_123_15_fu_4559_p2 = (!tmp_110_16_cast_fu_4512_p1.read().is_01() || !tmp_122_16_cast_fu_4555_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_16_cast_fu_4512_p1.read()) + sc_biguint<11>(tmp_122_16_cast_fu_4555_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_16_cast_fu_4681_p1() {
    tmp_123_16_cast_fu_4681_p1 = esl_zext<12,11>(tmp_123_16_fu_4675_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_16_fu_4675_p2() {
    tmp_123_16_fu_4675_p2 = (!tmp_110_17_cast_fu_4628_p1.read().is_01() || !tmp_122_17_cast_fu_4671_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_17_cast_fu_4628_p1.read()) + sc_biguint<11>(tmp_122_17_cast_fu_4671_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_17_cast_fu_4797_p1() {
    tmp_123_17_cast_fu_4797_p1 = esl_zext<12,11>(tmp_123_17_fu_4791_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_17_fu_4791_p2() {
    tmp_123_17_fu_4791_p2 = (!tmp_110_18_cast_fu_4744_p1.read().is_01() || !tmp_122_18_cast_fu_4787_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_18_cast_fu_4744_p1.read()) + sc_biguint<11>(tmp_122_18_cast_fu_4787_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_18_cast_fu_4913_p1() {
    tmp_123_18_cast_fu_4913_p1 = esl_zext<12,11>(tmp_123_18_fu_4907_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_18_fu_4907_p2() {
    tmp_123_18_fu_4907_p2 = (!tmp_110_19_cast_fu_4860_p1.read().is_01() || !tmp_122_19_cast_fu_4903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_19_cast_fu_4860_p1.read()) + sc_biguint<11>(tmp_122_19_cast_fu_4903_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_19_cast_fu_5029_p1() {
    tmp_123_19_cast_fu_5029_p1 = esl_zext<12,11>(tmp_123_19_fu_5023_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_19_fu_5023_p2() {
    tmp_123_19_fu_5023_p2 = (!tmp_110_20_cast_fu_4976_p1.read().is_01() || !tmp_122_20_cast_fu_5019_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_20_cast_fu_4976_p1.read()) + sc_biguint<11>(tmp_122_20_cast_fu_5019_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_1_cast_fu_2825_p1() {
    tmp_123_1_cast_fu_2825_p1 = esl_zext<12,11>(tmp_123_1_fu_2819_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_1_fu_2819_p2() {
    tmp_123_1_fu_2819_p2 = (!tmp_110_1_cast_fu_2756_p1.read().is_01() || !tmp_122_1_cast_fu_2815_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_1_cast_fu_2756_p1.read()) + sc_biguint<11>(tmp_122_1_cast_fu_2815_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_20_cast_fu_5145_p1() {
    tmp_123_20_cast_fu_5145_p1 = esl_zext<12,11>(tmp_123_20_fu_5139_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_20_fu_5139_p2() {
    tmp_123_20_fu_5139_p2 = (!tmp_110_21_cast_fu_5092_p1.read().is_01() || !tmp_122_21_cast_fu_5135_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_21_cast_fu_5092_p1.read()) + sc_biguint<11>(tmp_122_21_cast_fu_5135_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_21_cast_fu_5261_p1() {
    tmp_123_21_cast_fu_5261_p1 = esl_zext<12,11>(tmp_123_21_fu_5255_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_21_fu_5255_p2() {
    tmp_123_21_fu_5255_p2 = (!tmp_110_22_cast_fu_5208_p1.read().is_01() || !tmp_122_22_cast_fu_5251_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_22_cast_fu_5208_p1.read()) + sc_biguint<11>(tmp_122_22_cast_fu_5251_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_22_cast_fu_5377_p1() {
    tmp_123_22_cast_fu_5377_p1 = esl_zext<12,11>(tmp_123_22_fu_5371_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_22_fu_5371_p2() {
    tmp_123_22_fu_5371_p2 = (!tmp_110_23_cast_fu_5324_p1.read().is_01() || !tmp_122_23_cast_fu_5367_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_23_cast_fu_5324_p1.read()) + sc_biguint<11>(tmp_122_23_cast_fu_5367_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_23_cast_fu_5493_p1() {
    tmp_123_23_cast_fu_5493_p1 = esl_zext<12,11>(tmp_123_23_fu_5487_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_23_fu_5487_p2() {
    tmp_123_23_fu_5487_p2 = (!tmp_110_24_cast_fu_5440_p1.read().is_01() || !tmp_122_24_cast_fu_5483_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_24_cast_fu_5440_p1.read()) + sc_biguint<11>(tmp_122_24_cast_fu_5483_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_24_cast_fu_5609_p1() {
    tmp_123_24_cast_fu_5609_p1 = esl_zext<12,11>(tmp_123_24_fu_5603_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_24_fu_5603_p2() {
    tmp_123_24_fu_5603_p2 = (!tmp_110_25_cast_fu_5556_p1.read().is_01() || !tmp_122_25_cast_fu_5599_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_25_cast_fu_5556_p1.read()) + sc_biguint<11>(tmp_122_25_cast_fu_5599_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_25_cast_fu_5725_p1() {
    tmp_123_25_cast_fu_5725_p1 = esl_zext<12,11>(tmp_123_25_fu_5719_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_25_fu_5719_p2() {
    tmp_123_25_fu_5719_p2 = (!tmp_110_26_cast_fu_5672_p1.read().is_01() || !tmp_122_26_cast_fu_5715_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_26_cast_fu_5672_p1.read()) + sc_biguint<11>(tmp_122_26_cast_fu_5715_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_26_cast_fu_5841_p1() {
    tmp_123_26_cast_fu_5841_p1 = esl_zext<12,11>(tmp_123_26_fu_5835_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_26_fu_5835_p2() {
    tmp_123_26_fu_5835_p2 = (!tmp_110_27_cast_fu_5788_p1.read().is_01() || !tmp_122_27_cast_fu_5831_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_27_cast_fu_5788_p1.read()) + sc_biguint<11>(tmp_122_27_cast_fu_5831_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_27_cast_fu_5957_p1() {
    tmp_123_27_cast_fu_5957_p1 = esl_zext<12,11>(tmp_123_27_fu_5951_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_27_fu_5951_p2() {
    tmp_123_27_fu_5951_p2 = (!tmp_110_28_cast_fu_5904_p1.read().is_01() || !tmp_122_28_cast_fu_5947_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_28_cast_fu_5904_p1.read()) + sc_biguint<11>(tmp_122_28_cast_fu_5947_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_28_cast_fu_6073_p1() {
    tmp_123_28_cast_fu_6073_p1 = esl_zext<12,11>(tmp_123_28_fu_6067_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_28_fu_6067_p2() {
    tmp_123_28_fu_6067_p2 = (!tmp_110_29_cast_fu_6020_p1.read().is_01() || !tmp_122_29_cast_fu_6063_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_29_cast_fu_6020_p1.read()) + sc_biguint<11>(tmp_122_29_cast_fu_6063_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_29_cast_fu_6189_p1() {
    tmp_123_29_cast_fu_6189_p1 = esl_zext<12,11>(tmp_123_29_fu_6183_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_29_fu_6183_p2() {
    tmp_123_29_fu_6183_p2 = (!tmp_110_30_cast_fu_6136_p1.read().is_01() || !tmp_122_30_cast_fu_6179_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_30_cast_fu_6136_p1.read()) + sc_biguint<11>(tmp_122_30_cast_fu_6179_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_2_cast_fu_2941_p1() {
    tmp_123_2_cast_fu_2941_p1 = esl_zext<12,11>(tmp_123_2_fu_2935_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_2_fu_2935_p2() {
    tmp_123_2_fu_2935_p2 = (!tmp_110_2_cast_fu_2888_p1.read().is_01() || !tmp_122_2_cast_fu_2931_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_2_cast_fu_2888_p1.read()) + sc_biguint<11>(tmp_122_2_cast_fu_2931_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_30_cast_fu_6305_p1() {
    tmp_123_30_cast_fu_6305_p1 = esl_zext<12,11>(tmp_123_30_fu_6299_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_30_fu_6299_p2() {
    tmp_123_30_fu_6299_p2 = (!tmp_110_31_cast_fu_6252_p1.read().is_01() || !tmp_122_31_cast_fu_6295_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_31_cast_fu_6252_p1.read()) + sc_biguint<11>(tmp_122_31_cast_fu_6295_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_31_cast_fu_6421_p1() {
    tmp_123_31_cast_fu_6421_p1 = esl_zext<12,11>(tmp_123_31_fu_6415_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_31_fu_6415_p2() {
    tmp_123_31_fu_6415_p2 = (!tmp_110_32_cast_fu_6368_p1.read().is_01() || !tmp_122_32_cast_fu_6411_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_32_cast_fu_6368_p1.read()) + sc_biguint<11>(tmp_122_32_cast_fu_6411_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_32_cast_fu_6537_p1() {
    tmp_123_32_cast_fu_6537_p1 = esl_zext<12,11>(tmp_123_32_fu_6531_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_32_fu_6531_p2() {
    tmp_123_32_fu_6531_p2 = (!tmp_110_33_cast_fu_6484_p1.read().is_01() || !tmp_122_33_cast_fu_6527_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_33_cast_fu_6484_p1.read()) + sc_biguint<11>(tmp_122_33_cast_fu_6527_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_33_cast_fu_6653_p1() {
    tmp_123_33_cast_fu_6653_p1 = esl_zext<12,11>(tmp_123_33_fu_6647_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_33_fu_6647_p2() {
    tmp_123_33_fu_6647_p2 = (!tmp_110_34_cast_fu_6600_p1.read().is_01() || !tmp_122_34_cast_fu_6643_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_34_cast_fu_6600_p1.read()) + sc_biguint<11>(tmp_122_34_cast_fu_6643_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_34_cast_fu_6769_p1() {
    tmp_123_34_cast_fu_6769_p1 = esl_zext<12,11>(tmp_123_34_fu_6763_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_34_fu_6763_p2() {
    tmp_123_34_fu_6763_p2 = (!tmp_110_35_cast_fu_6716_p1.read().is_01() || !tmp_122_35_cast_fu_6759_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_35_cast_fu_6716_p1.read()) + sc_biguint<11>(tmp_122_35_cast_fu_6759_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_35_cast_fu_6885_p1() {
    tmp_123_35_cast_fu_6885_p1 = esl_zext<12,11>(tmp_123_35_fu_6879_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_35_fu_6879_p2() {
    tmp_123_35_fu_6879_p2 = (!tmp_110_36_cast_fu_6832_p1.read().is_01() || !tmp_122_36_cast_fu_6875_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_36_cast_fu_6832_p1.read()) + sc_biguint<11>(tmp_122_36_cast_fu_6875_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_36_cast_fu_7001_p1() {
    tmp_123_36_cast_fu_7001_p1 = esl_zext<12,11>(tmp_123_36_fu_6995_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_36_fu_6995_p2() {
    tmp_123_36_fu_6995_p2 = (!tmp_110_37_cast_fu_6948_p1.read().is_01() || !tmp_122_37_cast_fu_6991_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_37_cast_fu_6948_p1.read()) + sc_biguint<11>(tmp_122_37_cast_fu_6991_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_37_cast_fu_7117_p1() {
    tmp_123_37_cast_fu_7117_p1 = esl_zext<12,11>(tmp_123_37_fu_7111_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_37_fu_7111_p2() {
    tmp_123_37_fu_7111_p2 = (!tmp_110_38_cast_fu_7064_p1.read().is_01() || !tmp_122_38_cast_fu_7107_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_38_cast_fu_7064_p1.read()) + sc_biguint<11>(tmp_122_38_cast_fu_7107_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_38_cast_fu_7233_p1() {
    tmp_123_38_cast_fu_7233_p1 = esl_zext<12,11>(tmp_123_38_fu_7227_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_38_fu_7227_p2() {
    tmp_123_38_fu_7227_p2 = (!tmp_110_39_cast_fu_7180_p1.read().is_01() || !tmp_122_39_cast_fu_7223_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_39_cast_fu_7180_p1.read()) + sc_biguint<11>(tmp_122_39_cast_fu_7223_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_39_cast_fu_7349_p1() {
    tmp_123_39_cast_fu_7349_p1 = esl_zext<12,11>(tmp_123_39_fu_7343_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_39_fu_7343_p2() {
    tmp_123_39_fu_7343_p2 = (!tmp_110_40_cast_fu_7296_p1.read().is_01() || !tmp_122_40_cast_fu_7339_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_40_cast_fu_7296_p1.read()) + sc_biguint<11>(tmp_122_40_cast_fu_7339_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_3_cast_fu_3057_p1() {
    tmp_123_3_cast_fu_3057_p1 = esl_zext<12,11>(tmp_123_3_fu_3051_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_3_fu_3051_p2() {
    tmp_123_3_fu_3051_p2 = (!tmp_110_3_cast_fu_3004_p1.read().is_01() || !tmp_122_3_cast_fu_3047_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_3_cast_fu_3004_p1.read()) + sc_biguint<11>(tmp_122_3_cast_fu_3047_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_40_cast_fu_7448_p1() {
    tmp_123_40_cast_fu_7448_p1 = esl_zext<12,11>(tmp_123_40_fu_7442_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_40_fu_7442_p2() {
    tmp_123_40_fu_7442_p2 = (!tmp_110_cast_732_fu_7412_p1.read().is_01() || !tmp_122_cast_734_fu_7438_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_cast_732_fu_7412_p1.read()) + sc_biguint<11>(tmp_122_cast_734_fu_7438_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_4_cast_fu_3173_p1() {
    tmp_123_4_cast_fu_3173_p1 = esl_zext<12,11>(tmp_123_4_fu_3167_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_4_fu_3167_p2() {
    tmp_123_4_fu_3167_p2 = (!tmp_110_4_cast_fu_3120_p1.read().is_01() || !tmp_122_4_cast_fu_3163_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_4_cast_fu_3120_p1.read()) + sc_biguint<11>(tmp_122_4_cast_fu_3163_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_5_cast_fu_3289_p1() {
    tmp_123_5_cast_fu_3289_p1 = esl_zext<12,11>(tmp_123_5_fu_3283_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_5_fu_3283_p2() {
    tmp_123_5_fu_3283_p2 = (!tmp_110_5_cast_fu_3236_p1.read().is_01() || !tmp_122_5_cast_fu_3279_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_5_cast_fu_3236_p1.read()) + sc_biguint<11>(tmp_122_5_cast_fu_3279_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_6_cast_fu_3405_p1() {
    tmp_123_6_cast_fu_3405_p1 = esl_zext<12,11>(tmp_123_6_fu_3399_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_6_fu_3399_p2() {
    tmp_123_6_fu_3399_p2 = (!tmp_110_6_cast_fu_3352_p1.read().is_01() || !tmp_122_6_cast_fu_3395_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_6_cast_fu_3352_p1.read()) + sc_biguint<11>(tmp_122_6_cast_fu_3395_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_7_cast_fu_3521_p1() {
    tmp_123_7_cast_fu_3521_p1 = esl_zext<12,11>(tmp_123_7_fu_3515_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_7_fu_3515_p2() {
    tmp_123_7_fu_3515_p2 = (!tmp_110_7_cast_fu_3468_p1.read().is_01() || !tmp_122_7_cast_fu_3511_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_7_cast_fu_3468_p1.read()) + sc_biguint<11>(tmp_122_7_cast_fu_3511_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_8_cast_fu_3637_p1() {
    tmp_123_8_cast_fu_3637_p1 = esl_zext<12,11>(tmp_123_8_fu_3631_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_8_fu_3631_p2() {
    tmp_123_8_fu_3631_p2 = (!tmp_110_8_cast_fu_3584_p1.read().is_01() || !tmp_122_8_cast_fu_3627_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_8_cast_fu_3584_p1.read()) + sc_biguint<11>(tmp_122_8_cast_fu_3627_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_9_cast_fu_3753_p1() {
    tmp_123_9_cast_fu_3753_p1 = esl_zext<12,11>(tmp_123_9_fu_3747_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_9_fu_3747_p2() {
    tmp_123_9_fu_3747_p2 = (!tmp_110_9_cast_fu_3700_p1.read().is_01() || !tmp_122_9_cast_fu_3743_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_9_cast_fu_3700_p1.read()) + sc_biguint<11>(tmp_122_9_cast_fu_3743_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_cast_730_fu_3869_p1() {
    tmp_123_cast_730_fu_3869_p1 = esl_zext<12,11>(tmp_123_s_fu_3863_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_cast_fu_2682_p1() {
    tmp_123_cast_fu_2682_p1 = esl_zext<12,11>(tmp_123_fu_2676_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_fu_2676_p2() {
    tmp_123_fu_2676_p2 = (!tmp_110_cast_fu_2627_p1.read().is_01() || !tmp_122_cast_fu_2673_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_cast_fu_2627_p1.read()) + sc_biguint<11>(tmp_122_cast_fu_2673_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_s_fu_3863_p2() {
    tmp_123_s_fu_3863_p2 = (!tmp_110_10_cast_fu_3816_p1.read().is_01() || !tmp_122_10_cast_fu_3859_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_10_cast_fu_3816_p1.read()) + sc_biguint<11>(tmp_122_10_cast_fu_3859_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_3351_cast_cast_fu_2597_p1() {
    tmp_3351_cast_cast_fu_2597_p1 = esl_zext<9,8>(src_V_pixel43_dout.read());
}

void Sobel_conv3x3_tile_strm104::thread_x_3_fu_1511_p2() {
    x_3_fu_1511_p2 = (!x_reg_1494.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(x_reg_1494.read()) + sc_biguint<9>(ap_const_lv9_1));
}

}

