#include "Sobel_conv3x3_tile_strm104.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm104::thread_tmp_123_57_cast_fu_10409_p1() {
    tmp_123_57_cast_fu_10409_p1 = esl_zext<12,11>(tmp_123_57_fu_10403_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_57_fu_10403_p2() {
    tmp_123_57_fu_10403_p2 = (!tmp_110_58_cast_fu_10356_p1.read().is_01() || !tmp_122_58_cast_fu_10399_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_58_cast_fu_10356_p1.read()) + sc_biguint<11>(tmp_122_58_cast_fu_10399_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_58_cast_fu_10525_p1() {
    tmp_123_58_cast_fu_10525_p1 = esl_zext<12,11>(tmp_123_58_fu_10519_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_58_fu_10519_p2() {
    tmp_123_58_fu_10519_p2 = (!tmp_110_59_cast_fu_10472_p1.read().is_01() || !tmp_122_59_cast_fu_10515_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_59_cast_fu_10472_p1.read()) + sc_biguint<11>(tmp_122_59_cast_fu_10515_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_59_cast_fu_10641_p1() {
    tmp_123_59_cast_fu_10641_p1 = esl_zext<12,11>(tmp_123_59_fu_10635_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_59_fu_10635_p2() {
    tmp_123_59_fu_10635_p2 = (!tmp_110_60_cast_fu_10588_p1.read().is_01() || !tmp_122_60_cast_fu_10631_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_60_cast_fu_10588_p1.read()) + sc_biguint<11>(tmp_122_60_cast_fu_10631_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_5_cast_fu_4261_p1() {
    tmp_123_5_cast_fu_4261_p1 = esl_zext<12,11>(tmp_123_5_fu_4255_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_5_fu_4255_p2() {
    tmp_123_5_fu_4255_p2 = (!tmp_110_5_cast_fu_4208_p1.read().is_01() || !tmp_122_5_cast_fu_4251_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_5_cast_fu_4208_p1.read()) + sc_biguint<11>(tmp_122_5_cast_fu_4251_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_60_cast_fu_10757_p1() {
    tmp_123_60_cast_fu_10757_p1 = esl_zext<12,11>(tmp_123_60_fu_10751_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_60_fu_10751_p2() {
    tmp_123_60_fu_10751_p2 = (!tmp_110_61_cast_fu_10704_p1.read().is_01() || !tmp_122_61_cast_fu_10747_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_61_cast_fu_10704_p1.read()) + sc_biguint<11>(tmp_122_61_cast_fu_10747_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_61_cast_fu_10873_p1() {
    tmp_123_61_cast_fu_10873_p1 = esl_zext<12,11>(tmp_123_61_fu_10867_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_61_fu_10867_p2() {
    tmp_123_61_fu_10867_p2 = (!tmp_110_62_cast_fu_10820_p1.read().is_01() || !tmp_122_62_cast_fu_10863_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_62_cast_fu_10820_p1.read()) + sc_biguint<11>(tmp_122_62_cast_fu_10863_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_62_cast_fu_10989_p1() {
    tmp_123_62_cast_fu_10989_p1 = esl_zext<12,11>(tmp_123_62_fu_10983_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_62_fu_10983_p2() {
    tmp_123_62_fu_10983_p2 = (!tmp_110_63_cast_fu_10936_p1.read().is_01() || !tmp_122_63_cast_fu_10979_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_63_cast_fu_10936_p1.read()) + sc_biguint<11>(tmp_122_63_cast_fu_10979_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_63_cast_fu_11105_p1() {
    tmp_123_63_cast_fu_11105_p1 = esl_zext<12,11>(tmp_123_63_fu_11099_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_63_fu_11099_p2() {
    tmp_123_63_fu_11099_p2 = (!tmp_110_64_cast_fu_11052_p1.read().is_01() || !tmp_122_64_cast_fu_11095_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_64_cast_fu_11052_p1.read()) + sc_biguint<11>(tmp_122_64_cast_fu_11095_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_64_cast_fu_11221_p1() {
    tmp_123_64_cast_fu_11221_p1 = esl_zext<12,11>(tmp_123_64_fu_11215_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_64_fu_11215_p2() {
    tmp_123_64_fu_11215_p2 = (!tmp_110_65_cast_fu_11168_p1.read().is_01() || !tmp_122_65_cast_fu_11211_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_65_cast_fu_11168_p1.read()) + sc_biguint<11>(tmp_122_65_cast_fu_11211_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_65_cast_fu_11337_p1() {
    tmp_123_65_cast_fu_11337_p1 = esl_zext<12,11>(tmp_123_65_fu_11331_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_65_fu_11331_p2() {
    tmp_123_65_fu_11331_p2 = (!tmp_110_66_cast_fu_11284_p1.read().is_01() || !tmp_122_66_cast_fu_11327_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_66_cast_fu_11284_p1.read()) + sc_biguint<11>(tmp_122_66_cast_fu_11327_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_66_cast_fu_11453_p1() {
    tmp_123_66_cast_fu_11453_p1 = esl_zext<12,11>(tmp_123_66_fu_11447_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_66_fu_11447_p2() {
    tmp_123_66_fu_11447_p2 = (!tmp_110_67_cast_fu_11400_p1.read().is_01() || !tmp_122_67_cast_fu_11443_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_67_cast_fu_11400_p1.read()) + sc_biguint<11>(tmp_122_67_cast_fu_11443_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_67_cast_fu_11571_p1() {
    tmp_123_67_cast_fu_11571_p1 = esl_zext<12,11>(tmp_123_67_fu_11565_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_67_fu_11565_p2() {
    tmp_123_67_fu_11565_p2 = (!tmp_110_68_cast_fu_11516_p1.read().is_01() || !tmp_122_68_cast_fu_11561_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_68_cast_fu_11516_p1.read()) + sc_biguint<11>(tmp_122_68_cast_fu_11561_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_68_cast_fu_11689_p1() {
    tmp_123_68_cast_fu_11689_p1 = esl_zext<12,11>(tmp_123_68_fu_11683_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_68_fu_11683_p2() {
    tmp_123_68_fu_11683_p2 = (!tmp_110_69_cast_fu_11635_p1.read().is_01() || !tmp_122_69_cast_fu_11679_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_69_cast_fu_11635_p1.read()) + sc_biguint<11>(tmp_122_69_cast_fu_11679_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_69_cast_fu_11804_p1() {
    tmp_123_69_cast_fu_11804_p1 = esl_zext<12,11>(tmp_123_69_fu_11798_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_69_fu_11798_p2() {
    tmp_123_69_fu_11798_p2 = (!tmp_110_cast_1196_fu_11752_p1.read().is_01() || !tmp_122_cast_1198_fu_11794_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_cast_1196_fu_11752_p1.read()) + sc_biguint<11>(tmp_122_cast_1198_fu_11794_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_6_cast_fu_4377_p1() {
    tmp_123_6_cast_fu_4377_p1 = esl_zext<12,11>(tmp_123_6_fu_4371_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_6_fu_4371_p2() {
    tmp_123_6_fu_4371_p2 = (!tmp_110_6_cast_fu_4324_p1.read().is_01() || !tmp_122_6_cast_fu_4367_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_6_cast_fu_4324_p1.read()) + sc_biguint<11>(tmp_122_6_cast_fu_4367_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_7_cast_fu_4493_p1() {
    tmp_123_7_cast_fu_4493_p1 = esl_zext<12,11>(tmp_123_7_fu_4487_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_7_fu_4487_p2() {
    tmp_123_7_fu_4487_p2 = (!tmp_110_7_cast_fu_4440_p1.read().is_01() || !tmp_122_7_cast_fu_4483_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_7_cast_fu_4440_p1.read()) + sc_biguint<11>(tmp_122_7_cast_fu_4483_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_8_cast_fu_4609_p1() {
    tmp_123_8_cast_fu_4609_p1 = esl_zext<12,11>(tmp_123_8_fu_4603_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_8_fu_4603_p2() {
    tmp_123_8_fu_4603_p2 = (!tmp_110_8_cast_fu_4556_p1.read().is_01() || !tmp_122_8_cast_fu_4599_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_8_cast_fu_4556_p1.read()) + sc_biguint<11>(tmp_122_8_cast_fu_4599_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_9_cast_fu_4725_p1() {
    tmp_123_9_cast_fu_4725_p1 = esl_zext<12,11>(tmp_123_9_fu_4719_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_9_fu_4719_p2() {
    tmp_123_9_fu_4719_p2 = (!tmp_110_9_cast_fu_4672_p1.read().is_01() || !tmp_122_9_cast_fu_4715_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_9_cast_fu_4672_p1.read()) + sc_biguint<11>(tmp_122_9_cast_fu_4715_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_cast_1194_fu_4841_p1() {
    tmp_123_cast_1194_fu_4841_p1 = esl_zext<12,11>(tmp_123_s_fu_4835_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_cast_fu_3653_p1() {
    tmp_123_cast_fu_3653_p1 = esl_zext<12,11>(tmp_123_fu_3647_p2.read());
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_fu_3647_p2() {
    tmp_123_fu_3647_p2 = (!tmp_110_cast_fu_3597_p1.read().is_01() || !tmp_122_cast_fu_3644_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_cast_fu_3597_p1.read()) + sc_biguint<11>(tmp_122_cast_fu_3644_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_123_s_fu_4835_p2() {
    tmp_123_s_fu_4835_p2 = (!tmp_110_10_cast_fu_4788_p1.read().is_01() || !tmp_122_10_cast_fu_4831_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_110_10_cast_fu_4788_p1.read()) + sc_biguint<11>(tmp_122_10_cast_fu_4831_p1.read()));
}

void Sobel_conv3x3_tile_strm104::thread_tmp_1921_fu_3242_p4() {
    tmp_1921_fu_3242_p4 = x_reg_3203.read().range(8, 1);
}

void Sobel_conv3x3_tile_strm104::thread_tmp_5642_cast_cast_fu_11808_p1() {
    tmp_5642_cast_cast_fu_11808_p1 = esl_zext<9,8>(tmp_pixel_72_reg_14138.read());
}

void Sobel_conv3x3_tile_strm104::thread_x_3_fu_3236_p2() {
    x_3_fu_3236_p2 = (!x_reg_3203.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(x_reg_3203.read()) + sc_biguint<9>(ap_const_lv9_1));
}

}

