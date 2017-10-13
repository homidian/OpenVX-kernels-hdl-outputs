#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_p_Val2_12_62_1_fu_10778_p2() {
    p_Val2_12_62_1_fu_10778_p2 = (!p_Val2_4_62_cast_fu_10714_p1.read().is_01() || !p_Val2_11_62_1_fu_10774_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_62_cast_fu_10714_p1.read()) - sc_bigint<15>(p_Val2_11_62_1_fu_10774_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_62_2_fu_23830_p2() {
    p_Val2_12_62_2_fu_23830_p2 = (!x_V_1_62_1_fu_23762_p3.read().is_01() || !p_Val2_11_62_2_fu_23826_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_62_1_fu_23762_p3.read()) - sc_bigint<15>(p_Val2_11_62_2_fu_23826_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_62_3_fu_23908_p2() {
    p_Val2_12_62_3_fu_23908_p2 = (!x_V_1_62_2_fu_23842_p3.read().is_01() || !p_Val2_11_62_3_fu_23904_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_62_2_fu_23842_p3.read()) - sc_bigint<15>(p_Val2_11_62_3_fu_23904_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_62_4_fu_34708_p2() {
    p_Val2_12_62_4_fu_34708_p2 = (!x_V_1_62_3_reg_62567.read().is_01() || !p_Val2_11_62_4_fu_34705_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_62_3_reg_62567.read()) - sc_bigint<15>(p_Val2_11_62_4_fu_34705_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_62_5_fu_34784_p2() {
    p_Val2_12_62_5_fu_34784_p2 = (!x_V_1_62_4_fu_34718_p3.read().is_01() || !p_Val2_11_62_5_fu_34780_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_62_4_fu_34718_p3.read()) - sc_bigint<15>(p_Val2_11_62_5_fu_34780_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_62_6_fu_45573_p2() {
    p_Val2_12_62_6_fu_45573_p2 = (!x_V_1_62_5_reg_64981.read().is_01() || !p_Val2_11_62_6_fu_45570_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_62_5_reg_64981.read()) - sc_bigint<15>(p_Val2_11_62_6_fu_45570_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_1_fu_10896_p2() {
    p_Val2_12_63_1_fu_10896_p2 = (!p_Val2_4_63_cast_fu_10832_p1.read().is_01() || !p_Val2_11_63_1_fu_10892_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_63_cast_fu_10832_p1.read()) - sc_bigint<15>(p_Val2_11_63_1_fu_10892_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_2_fu_24024_p2() {
    p_Val2_12_63_2_fu_24024_p2 = (!x_V_1_63_1_fu_23956_p3.read().is_01() || !p_Val2_11_63_2_fu_24020_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_63_1_fu_23956_p3.read()) - sc_bigint<15>(p_Val2_11_63_2_fu_24020_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_3_fu_24102_p2() {
    p_Val2_12_63_3_fu_24102_p2 = (!x_V_1_63_2_fu_24036_p3.read().is_01() || !p_Val2_11_63_3_fu_24098_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_63_2_fu_24036_p3.read()) - sc_bigint<15>(p_Val2_11_63_3_fu_24098_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_4_fu_34856_p2() {
    p_Val2_12_63_4_fu_34856_p2 = (!x_V_1_63_3_reg_62601.read().is_01() || !p_Val2_11_63_4_fu_34853_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_63_3_reg_62601.read()) - sc_bigint<15>(p_Val2_11_63_4_fu_34853_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_5_fu_34932_p2() {
    p_Val2_12_63_5_fu_34932_p2 = (!x_V_1_63_4_fu_34866_p3.read().is_01() || !p_Val2_11_63_5_fu_34928_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_63_4_fu_34866_p3.read()) - sc_bigint<15>(p_Val2_11_63_5_fu_34928_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_63_6_fu_45726_p2() {
    p_Val2_12_63_6_fu_45726_p2 = (!x_V_1_63_5_reg_65015.read().is_01() || !p_Val2_11_63_6_fu_45723_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_63_5_reg_65015.read()) - sc_bigint<15>(p_Val2_11_63_6_fu_45723_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_1_fu_11014_p2() {
    p_Val2_12_64_1_fu_11014_p2 = (!p_Val2_4_64_cast_fu_10950_p1.read().is_01() || !p_Val2_11_64_1_fu_11010_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_64_cast_fu_10950_p1.read()) - sc_bigint<15>(p_Val2_11_64_1_fu_11010_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_2_fu_24218_p2() {
    p_Val2_12_64_2_fu_24218_p2 = (!x_V_1_64_1_fu_24150_p3.read().is_01() || !p_Val2_11_64_2_fu_24214_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_64_1_fu_24150_p3.read()) - sc_bigint<15>(p_Val2_11_64_2_fu_24214_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_3_fu_24296_p2() {
    p_Val2_12_64_3_fu_24296_p2 = (!x_V_1_64_2_fu_24230_p3.read().is_01() || !p_Val2_11_64_3_fu_24292_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_64_2_fu_24230_p3.read()) - sc_bigint<15>(p_Val2_11_64_3_fu_24292_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_4_fu_35004_p2() {
    p_Val2_12_64_4_fu_35004_p2 = (!x_V_1_64_3_reg_62635.read().is_01() || !p_Val2_11_64_4_fu_35001_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_64_3_reg_62635.read()) - sc_bigint<15>(p_Val2_11_64_4_fu_35001_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_5_fu_35080_p2() {
    p_Val2_12_64_5_fu_35080_p2 = (!x_V_1_64_4_fu_35014_p3.read().is_01() || !p_Val2_11_64_5_fu_35076_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_64_4_fu_35014_p3.read()) - sc_bigint<15>(p_Val2_11_64_5_fu_35076_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_64_6_fu_45879_p2() {
    p_Val2_12_64_6_fu_45879_p2 = (!x_V_1_64_5_reg_65049.read().is_01() || !p_Val2_11_64_6_fu_45876_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_64_5_reg_65049.read()) - sc_bigint<15>(p_Val2_11_64_6_fu_45876_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_1_fu_11132_p2() {
    p_Val2_12_65_1_fu_11132_p2 = (!p_Val2_4_65_cast_fu_11068_p1.read().is_01() || !p_Val2_11_65_1_fu_11128_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_65_cast_fu_11068_p1.read()) - sc_bigint<15>(p_Val2_11_65_1_fu_11128_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_2_fu_24412_p2() {
    p_Val2_12_65_2_fu_24412_p2 = (!x_V_1_65_1_fu_24344_p3.read().is_01() || !p_Val2_11_65_2_fu_24408_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_65_1_fu_24344_p3.read()) - sc_bigint<15>(p_Val2_11_65_2_fu_24408_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_3_fu_24490_p2() {
    p_Val2_12_65_3_fu_24490_p2 = (!x_V_1_65_2_fu_24424_p3.read().is_01() || !p_Val2_11_65_3_fu_24486_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_65_2_fu_24424_p3.read()) - sc_bigint<15>(p_Val2_11_65_3_fu_24486_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_4_fu_35152_p2() {
    p_Val2_12_65_4_fu_35152_p2 = (!x_V_1_65_3_reg_62669.read().is_01() || !p_Val2_11_65_4_fu_35149_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_65_3_reg_62669.read()) - sc_bigint<15>(p_Val2_11_65_4_fu_35149_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_5_fu_35228_p2() {
    p_Val2_12_65_5_fu_35228_p2 = (!x_V_1_65_4_fu_35162_p3.read().is_01() || !p_Val2_11_65_5_fu_35224_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_65_4_fu_35162_p3.read()) - sc_bigint<15>(p_Val2_11_65_5_fu_35224_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_65_6_fu_46032_p2() {
    p_Val2_12_65_6_fu_46032_p2 = (!x_V_1_65_5_reg_65083.read().is_01() || !p_Val2_11_65_6_fu_46029_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_65_5_reg_65083.read()) - sc_bigint<15>(p_Val2_11_65_6_fu_46029_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_1_fu_11250_p2() {
    p_Val2_12_66_1_fu_11250_p2 = (!p_Val2_4_66_cast_fu_11186_p1.read().is_01() || !p_Val2_11_66_1_fu_11246_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_66_cast_fu_11186_p1.read()) - sc_bigint<15>(p_Val2_11_66_1_fu_11246_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_2_fu_24606_p2() {
    p_Val2_12_66_2_fu_24606_p2 = (!x_V_1_66_1_fu_24538_p3.read().is_01() || !p_Val2_11_66_2_fu_24602_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_66_1_fu_24538_p3.read()) - sc_bigint<15>(p_Val2_11_66_2_fu_24602_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_3_fu_24684_p2() {
    p_Val2_12_66_3_fu_24684_p2 = (!x_V_1_66_2_fu_24618_p3.read().is_01() || !p_Val2_11_66_3_fu_24680_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_66_2_fu_24618_p3.read()) - sc_bigint<15>(p_Val2_11_66_3_fu_24680_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_4_fu_35300_p2() {
    p_Val2_12_66_4_fu_35300_p2 = (!x_V_1_66_3_reg_62703.read().is_01() || !p_Val2_11_66_4_fu_35297_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_66_3_reg_62703.read()) - sc_bigint<15>(p_Val2_11_66_4_fu_35297_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_5_fu_35376_p2() {
    p_Val2_12_66_5_fu_35376_p2 = (!x_V_1_66_4_fu_35310_p3.read().is_01() || !p_Val2_11_66_5_fu_35372_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_66_4_fu_35310_p3.read()) - sc_bigint<15>(p_Val2_11_66_5_fu_35372_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_66_6_fu_46185_p2() {
    p_Val2_12_66_6_fu_46185_p2 = (!x_V_1_66_5_reg_65117.read().is_01() || !p_Val2_11_66_6_fu_46182_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_66_5_reg_65117.read()) - sc_bigint<15>(p_Val2_11_66_6_fu_46182_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_1_fu_11368_p2() {
    p_Val2_12_67_1_fu_11368_p2 = (!p_Val2_4_67_cast_fu_11304_p1.read().is_01() || !p_Val2_11_67_1_fu_11364_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_67_cast_fu_11304_p1.read()) - sc_bigint<15>(p_Val2_11_67_1_fu_11364_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_2_fu_24800_p2() {
    p_Val2_12_67_2_fu_24800_p2 = (!x_V_1_67_1_fu_24732_p3.read().is_01() || !p_Val2_11_67_2_fu_24796_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_67_1_fu_24732_p3.read()) - sc_bigint<15>(p_Val2_11_67_2_fu_24796_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_3_fu_24878_p2() {
    p_Val2_12_67_3_fu_24878_p2 = (!x_V_1_67_2_fu_24812_p3.read().is_01() || !p_Val2_11_67_3_fu_24874_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_67_2_fu_24812_p3.read()) - sc_bigint<15>(p_Val2_11_67_3_fu_24874_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_4_fu_35448_p2() {
    p_Val2_12_67_4_fu_35448_p2 = (!x_V_1_67_3_reg_62737.read().is_01() || !p_Val2_11_67_4_fu_35445_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_67_3_reg_62737.read()) - sc_bigint<15>(p_Val2_11_67_4_fu_35445_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_5_fu_35524_p2() {
    p_Val2_12_67_5_fu_35524_p2 = (!x_V_1_67_4_fu_35458_p3.read().is_01() || !p_Val2_11_67_5_fu_35520_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_67_4_fu_35458_p3.read()) - sc_bigint<15>(p_Val2_11_67_5_fu_35520_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_67_6_fu_46338_p2() {
    p_Val2_12_67_6_fu_46338_p2 = (!x_V_1_67_5_reg_65151.read().is_01() || !p_Val2_11_67_6_fu_46335_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_67_5_reg_65151.read()) - sc_bigint<15>(p_Val2_11_67_6_fu_46335_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_1_fu_11486_p2() {
    p_Val2_12_68_1_fu_11486_p2 = (!p_Val2_4_68_cast_fu_11422_p1.read().is_01() || !p_Val2_11_68_1_fu_11482_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_68_cast_fu_11422_p1.read()) - sc_bigint<15>(p_Val2_11_68_1_fu_11482_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_2_fu_24994_p2() {
    p_Val2_12_68_2_fu_24994_p2 = (!x_V_1_68_1_fu_24926_p3.read().is_01() || !p_Val2_11_68_2_fu_24990_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_68_1_fu_24926_p3.read()) - sc_bigint<15>(p_Val2_11_68_2_fu_24990_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_3_fu_25072_p2() {
    p_Val2_12_68_3_fu_25072_p2 = (!x_V_1_68_2_fu_25006_p3.read().is_01() || !p_Val2_11_68_3_fu_25068_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_68_2_fu_25006_p3.read()) - sc_bigint<15>(p_Val2_11_68_3_fu_25068_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_4_fu_35596_p2() {
    p_Val2_12_68_4_fu_35596_p2 = (!x_V_1_68_3_reg_62771.read().is_01() || !p_Val2_11_68_4_fu_35593_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_68_3_reg_62771.read()) - sc_bigint<15>(p_Val2_11_68_4_fu_35593_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_5_fu_35672_p2() {
    p_Val2_12_68_5_fu_35672_p2 = (!x_V_1_68_4_fu_35606_p3.read().is_01() || !p_Val2_11_68_5_fu_35668_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_68_4_fu_35606_p3.read()) - sc_bigint<15>(p_Val2_11_68_5_fu_35668_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_68_6_fu_46491_p2() {
    p_Val2_12_68_6_fu_46491_p2 = (!x_V_1_68_5_reg_65185.read().is_01() || !p_Val2_11_68_6_fu_46488_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_68_5_reg_65185.read()) - sc_bigint<15>(p_Val2_11_68_6_fu_46488_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_1_fu_11604_p2() {
    p_Val2_12_69_1_fu_11604_p2 = (!p_Val2_4_69_cast_fu_11540_p1.read().is_01() || !p_Val2_11_69_1_fu_11600_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_69_cast_fu_11540_p1.read()) - sc_bigint<15>(p_Val2_11_69_1_fu_11600_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_2_fu_25188_p2() {
    p_Val2_12_69_2_fu_25188_p2 = (!x_V_1_69_1_fu_25120_p3.read().is_01() || !p_Val2_11_69_2_fu_25184_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_69_1_fu_25120_p3.read()) - sc_bigint<15>(p_Val2_11_69_2_fu_25184_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_3_fu_25266_p2() {
    p_Val2_12_69_3_fu_25266_p2 = (!x_V_1_69_2_fu_25200_p3.read().is_01() || !p_Val2_11_69_3_fu_25262_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_69_2_fu_25200_p3.read()) - sc_bigint<15>(p_Val2_11_69_3_fu_25262_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_4_fu_35744_p2() {
    p_Val2_12_69_4_fu_35744_p2 = (!x_V_1_69_3_reg_62805.read().is_01() || !p_Val2_11_69_4_fu_35741_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_69_3_reg_62805.read()) - sc_bigint<15>(p_Val2_11_69_4_fu_35741_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_5_fu_35820_p2() {
    p_Val2_12_69_5_fu_35820_p2 = (!x_V_1_69_4_fu_35754_p3.read().is_01() || !p_Val2_11_69_5_fu_35816_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_69_4_fu_35754_p3.read()) - sc_bigint<15>(p_Val2_11_69_5_fu_35816_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_69_6_fu_46644_p2() {
    p_Val2_12_69_6_fu_46644_p2 = (!x_V_1_69_5_reg_65219.read().is_01() || !p_Val2_11_69_6_fu_46641_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_69_5_reg_65219.read()) - sc_bigint<15>(p_Val2_11_69_6_fu_46641_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_1_fu_4170_p2() {
    p_Val2_12_6_1_fu_4170_p2 = (!p_Val2_4_6_cast_fu_4106_p1.read().is_01() || !p_Val2_11_6_1_fu_4166_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_6_cast_fu_4106_p1.read()) - sc_bigint<15>(p_Val2_11_6_1_fu_4166_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_2_fu_12966_p2() {
    p_Val2_12_6_2_fu_12966_p2 = (!x_V_1_6_1_fu_12898_p3.read().is_01() || !p_Val2_11_6_2_fu_12962_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_6_1_fu_12898_p3.read()) - sc_bigint<15>(p_Val2_11_6_2_fu_12962_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_3_fu_13044_p2() {
    p_Val2_12_6_3_fu_13044_p2 = (!x_V_1_6_2_fu_12978_p3.read().is_01() || !p_Val2_11_6_3_fu_13040_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_6_2_fu_12978_p3.read()) - sc_bigint<15>(p_Val2_11_6_3_fu_13040_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_4_fu_26420_p2() {
    p_Val2_12_6_4_fu_26420_p2 = (!x_V_1_6_3_reg_60663.read().is_01() || !p_Val2_11_6_4_fu_26417_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_6_3_reg_60663.read()) - sc_bigint<15>(p_Val2_11_6_4_fu_26417_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_5_fu_26496_p2() {
    p_Val2_12_6_5_fu_26496_p2 = (!x_V_1_6_4_fu_26430_p3.read().is_01() || !p_Val2_11_6_5_fu_26492_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_6_4_fu_26430_p3.read()) - sc_bigint<15>(p_Val2_11_6_5_fu_26492_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_6_6_fu_37005_p2() {
    p_Val2_12_6_6_fu_37005_p2 = (!x_V_1_6_5_reg_63077.read().is_01() || !p_Val2_11_6_6_fu_37002_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_6_5_reg_63077.read()) - sc_bigint<15>(p_Val2_11_6_6_fu_37002_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_1_fu_11722_p2() {
    p_Val2_12_70_1_fu_11722_p2 = (!p_Val2_4_70_cast_fu_11658_p1.read().is_01() || !p_Val2_11_70_1_fu_11718_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_70_cast_fu_11658_p1.read()) - sc_bigint<15>(p_Val2_11_70_1_fu_11718_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_2_fu_25382_p2() {
    p_Val2_12_70_2_fu_25382_p2 = (!x_V_1_70_1_fu_25314_p3.read().is_01() || !p_Val2_11_70_2_fu_25378_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_70_1_fu_25314_p3.read()) - sc_bigint<15>(p_Val2_11_70_2_fu_25378_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_3_fu_25460_p2() {
    p_Val2_12_70_3_fu_25460_p2 = (!x_V_1_70_2_fu_25394_p3.read().is_01() || !p_Val2_11_70_3_fu_25456_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_70_2_fu_25394_p3.read()) - sc_bigint<15>(p_Val2_11_70_3_fu_25456_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_4_fu_35892_p2() {
    p_Val2_12_70_4_fu_35892_p2 = (!x_V_1_70_3_reg_62839.read().is_01() || !p_Val2_11_70_4_fu_35889_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_70_3_reg_62839.read()) - sc_bigint<15>(p_Val2_11_70_4_fu_35889_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_5_fu_35968_p2() {
    p_Val2_12_70_5_fu_35968_p2 = (!x_V_1_70_4_fu_35902_p3.read().is_01() || !p_Val2_11_70_5_fu_35964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_70_4_fu_35902_p3.read()) - sc_bigint<15>(p_Val2_11_70_5_fu_35964_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_70_6_fu_46797_p2() {
    p_Val2_12_70_6_fu_46797_p2 = (!x_V_1_70_5_reg_65253.read().is_01() || !p_Val2_11_70_6_fu_46794_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_70_5_reg_65253.read()) - sc_bigint<15>(p_Val2_11_70_6_fu_46794_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_1_fu_4288_p2() {
    p_Val2_12_7_1_fu_4288_p2 = (!p_Val2_4_7_cast_fu_4224_p1.read().is_01() || !p_Val2_11_7_1_fu_4284_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_7_cast_fu_4224_p1.read()) - sc_bigint<15>(p_Val2_11_7_1_fu_4284_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_2_fu_13160_p2() {
    p_Val2_12_7_2_fu_13160_p2 = (!x_V_1_7_1_fu_13092_p3.read().is_01() || !p_Val2_11_7_2_fu_13156_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_7_1_fu_13092_p3.read()) - sc_bigint<15>(p_Val2_11_7_2_fu_13156_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_3_fu_13238_p2() {
    p_Val2_12_7_3_fu_13238_p2 = (!x_V_1_7_2_fu_13172_p3.read().is_01() || !p_Val2_11_7_3_fu_13234_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_7_2_fu_13172_p3.read()) - sc_bigint<15>(p_Val2_11_7_3_fu_13234_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_4_fu_26568_p2() {
    p_Val2_12_7_4_fu_26568_p2 = (!x_V_1_7_3_reg_60697.read().is_01() || !p_Val2_11_7_4_fu_26565_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_7_3_reg_60697.read()) - sc_bigint<15>(p_Val2_11_7_4_fu_26565_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_5_fu_26644_p2() {
    p_Val2_12_7_5_fu_26644_p2 = (!x_V_1_7_4_fu_26578_p3.read().is_01() || !p_Val2_11_7_5_fu_26640_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_7_4_fu_26578_p3.read()) - sc_bigint<15>(p_Val2_11_7_5_fu_26640_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_7_6_fu_37158_p2() {
    p_Val2_12_7_6_fu_37158_p2 = (!x_V_1_7_5_reg_63111.read().is_01() || !p_Val2_11_7_6_fu_37155_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_7_5_reg_63111.read()) - sc_bigint<15>(p_Val2_11_7_6_fu_37155_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_1_fu_4406_p2() {
    p_Val2_12_8_1_fu_4406_p2 = (!p_Val2_4_8_cast_fu_4342_p1.read().is_01() || !p_Val2_11_8_1_fu_4402_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_8_cast_fu_4342_p1.read()) - sc_bigint<15>(p_Val2_11_8_1_fu_4402_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_2_fu_13354_p2() {
    p_Val2_12_8_2_fu_13354_p2 = (!x_V_1_8_1_fu_13286_p3.read().is_01() || !p_Val2_11_8_2_fu_13350_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_8_1_fu_13286_p3.read()) - sc_bigint<15>(p_Val2_11_8_2_fu_13350_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_3_fu_13432_p2() {
    p_Val2_12_8_3_fu_13432_p2 = (!x_V_1_8_2_fu_13366_p3.read().is_01() || !p_Val2_11_8_3_fu_13428_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_8_2_fu_13366_p3.read()) - sc_bigint<15>(p_Val2_11_8_3_fu_13428_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_4_fu_26716_p2() {
    p_Val2_12_8_4_fu_26716_p2 = (!x_V_1_8_3_reg_60731.read().is_01() || !p_Val2_11_8_4_fu_26713_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_8_3_reg_60731.read()) - sc_bigint<15>(p_Val2_11_8_4_fu_26713_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_5_fu_26792_p2() {
    p_Val2_12_8_5_fu_26792_p2 = (!x_V_1_8_4_fu_26726_p3.read().is_01() || !p_Val2_11_8_5_fu_26788_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_8_4_fu_26726_p3.read()) - sc_bigint<15>(p_Val2_11_8_5_fu_26788_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_8_6_fu_37311_p2() {
    p_Val2_12_8_6_fu_37311_p2 = (!x_V_1_8_5_reg_63145.read().is_01() || !p_Val2_11_8_6_fu_37308_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_8_5_reg_63145.read()) - sc_bigint<15>(p_Val2_11_8_6_fu_37308_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_1_fu_4524_p2() {
    p_Val2_12_9_1_fu_4524_p2 = (!p_Val2_4_9_cast_fu_4460_p1.read().is_01() || !p_Val2_11_9_1_fu_4520_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_9_cast_fu_4460_p1.read()) - sc_bigint<15>(p_Val2_11_9_1_fu_4520_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_2_fu_13548_p2() {
    p_Val2_12_9_2_fu_13548_p2 = (!x_V_1_9_1_fu_13480_p3.read().is_01() || !p_Val2_11_9_2_fu_13544_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_9_1_fu_13480_p3.read()) - sc_bigint<15>(p_Val2_11_9_2_fu_13544_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_3_fu_13626_p2() {
    p_Val2_12_9_3_fu_13626_p2 = (!x_V_1_9_2_fu_13560_p3.read().is_01() || !p_Val2_11_9_3_fu_13622_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_9_2_fu_13560_p3.read()) - sc_bigint<15>(p_Val2_11_9_3_fu_13622_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_4_fu_26864_p2() {
    p_Val2_12_9_4_fu_26864_p2 = (!x_V_1_9_3_reg_60765.read().is_01() || !p_Val2_11_9_4_fu_26861_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_9_3_reg_60765.read()) - sc_bigint<15>(p_Val2_11_9_4_fu_26861_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_5_fu_26940_p2() {
    p_Val2_12_9_5_fu_26940_p2 = (!x_V_1_9_4_fu_26874_p3.read().is_01() || !p_Val2_11_9_5_fu_26936_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_9_4_fu_26874_p3.read()) - sc_bigint<15>(p_Val2_11_9_5_fu_26936_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_9_6_fu_37464_p2() {
    p_Val2_12_9_6_fu_37464_p2 = (!x_V_1_9_5_reg_63179.read().is_01() || !p_Val2_11_9_6_fu_37461_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_9_5_reg_63179.read()) - sc_bigint<15>(p_Val2_11_9_6_fu_37461_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_1_fu_3468_p2() {
    p_Val2_14_0_1_fu_3468_p2 = (!tmp_3_fu_3448_p1.read().is_01() || !p_Val2_7_fu_3402_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_3_fu_3448_p1.read()) + sc_biguint<14>(p_Val2_7_fu_3402_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_2_fu_11808_p2() {
    p_Val2_14_0_2_fu_11808_p2 = (!p_Val2_6_0_2_fu_11788_p1.read().is_01() || !y_V_1_0_1_cast_fu_11744_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_2_fu_11788_p1.read()) + sc_bigint<15>(y_V_1_0_1_cast_fu_11744_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_3_fu_11886_p2() {
    p_Val2_14_0_3_fu_11886_p2 = (!p_Val2_6_0_3_fu_11866_p1.read().is_01() || !y_V_1_0_2_fu_11822_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_3_fu_11866_p1.read()) + sc_biguint<15>(y_V_1_0_2_fu_11822_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_4_fu_25537_p2() {
    p_Val2_14_0_4_fu_25537_p2 = (!p_Val2_6_0_4_fu_25521_p1.read().is_01() || !y_V_1_0_3_reg_60465.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_4_fu_25521_p1.read()) + sc_biguint<15>(y_V_1_0_3_reg_60465.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_5_fu_25614_p2() {
    p_Val2_14_0_5_fu_25614_p2 = (!p_Val2_6_0_5_fu_25594_p1.read().is_01() || !y_V_1_0_4_fu_25550_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_5_fu_25594_p1.read()) + sc_biguint<15>(y_V_1_0_4_fu_25550_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_6_fu_36092_p2() {
    p_Val2_14_0_6_fu_36092_p2 = (!p_Val2_6_0_6_fu_36076_p1.read().is_01() || !y_V_1_0_5_reg_62879.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_6_fu_36076_p1.read()) + sc_biguint<15>(y_V_1_0_5_reg_62879.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_0_7_fu_36149_p2() {
    p_Val2_14_0_7_fu_36149_p2 = (!p_Val2_6_0_7_fu_36139_p1.read().is_01() || !y_V_1_0_6_fu_36097_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_0_7_fu_36139_p1.read()) + sc_biguint<15>(y_V_1_0_6_fu_36097_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_1_fu_4648_p2() {
    p_Val2_14_10_1_fu_4648_p2 = (!tmp_205_fu_4628_p1.read().is_01() || !p_Val2_7_s_fu_4582_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_205_fu_4628_p1.read()) + sc_biguint<14>(p_Val2_7_s_fu_4582_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_2_fu_13748_p2() {
    p_Val2_14_10_2_fu_13748_p2 = (!p_Val2_6_10_2_fu_13728_p1.read().is_01() || !y_V_1_10_1_cast_fu_13684_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_2_fu_13728_p1.read()) + sc_bigint<15>(y_V_1_10_1_cast_fu_13684_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_3_fu_13826_p2() {
    p_Val2_14_10_3_fu_13826_p2 = (!p_Val2_6_10_3_fu_13806_p1.read().is_01() || !y_V_1_10_2_fu_13762_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_3_fu_13806_p1.read()) + sc_biguint<15>(y_V_1_10_2_fu_13762_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_4_fu_27017_p2() {
    p_Val2_14_10_4_fu_27017_p2 = (!p_Val2_6_10_4_fu_27001_p1.read().is_01() || !y_V_1_10_3_reg_60805.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_4_fu_27001_p1.read()) + sc_biguint<15>(y_V_1_10_3_reg_60805.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_5_fu_27094_p2() {
    p_Val2_14_10_5_fu_27094_p2 = (!p_Val2_6_10_5_fu_27074_p1.read().is_01() || !y_V_1_10_4_fu_27030_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_5_fu_27074_p1.read()) + sc_biguint<15>(y_V_1_10_4_fu_27030_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_6_fu_37622_p2() {
    p_Val2_14_10_6_fu_37622_p2 = (!p_Val2_6_10_6_fu_37606_p1.read().is_01() || !y_V_1_10_5_reg_63219.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_6_fu_37606_p1.read()) + sc_biguint<15>(y_V_1_10_5_reg_63219.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_10_7_fu_37679_p2() {
    p_Val2_14_10_7_fu_37679_p2 = (!p_Val2_6_10_7_fu_37669_p1.read().is_01() || !y_V_1_10_6_fu_37627_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_10_7_fu_37669_p1.read()) + sc_biguint<15>(y_V_1_10_6_fu_37627_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_1_fu_4766_p2() {
    p_Val2_14_11_1_fu_4766_p2 = (!tmp_225_fu_4746_p1.read().is_01() || !p_Val2_7_10_fu_4700_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_225_fu_4746_p1.read()) + sc_biguint<14>(p_Val2_7_10_fu_4700_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_2_fu_13942_p2() {
    p_Val2_14_11_2_fu_13942_p2 = (!p_Val2_6_11_2_fu_13922_p1.read().is_01() || !y_V_1_11_1_cast_fu_13878_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_2_fu_13922_p1.read()) + sc_bigint<15>(y_V_1_11_1_cast_fu_13878_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_3_fu_14020_p2() {
    p_Val2_14_11_3_fu_14020_p2 = (!p_Val2_6_11_3_fu_14000_p1.read().is_01() || !y_V_1_11_2_fu_13956_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_3_fu_14000_p1.read()) + sc_biguint<15>(y_V_1_11_2_fu_13956_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_4_fu_27165_p2() {
    p_Val2_14_11_4_fu_27165_p2 = (!p_Val2_6_11_4_fu_27149_p1.read().is_01() || !y_V_1_11_3_reg_60839.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_4_fu_27149_p1.read()) + sc_biguint<15>(y_V_1_11_3_reg_60839.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_5_fu_27242_p2() {
    p_Val2_14_11_5_fu_27242_p2 = (!p_Val2_6_11_5_fu_27222_p1.read().is_01() || !y_V_1_11_4_fu_27178_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_5_fu_27222_p1.read()) + sc_biguint<15>(y_V_1_11_4_fu_27178_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_6_fu_37775_p2() {
    p_Val2_14_11_6_fu_37775_p2 = (!p_Val2_6_11_6_fu_37759_p1.read().is_01() || !y_V_1_11_5_reg_63253.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_6_fu_37759_p1.read()) + sc_biguint<15>(y_V_1_11_5_reg_63253.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_11_7_fu_37832_p2() {
    p_Val2_14_11_7_fu_37832_p2 = (!p_Val2_6_11_7_fu_37822_p1.read().is_01() || !y_V_1_11_6_fu_37780_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_11_7_fu_37822_p1.read()) + sc_biguint<15>(y_V_1_11_6_fu_37780_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_1_fu_4884_p2() {
    p_Val2_14_12_1_fu_4884_p2 = (!tmp_245_fu_4864_p1.read().is_01() || !p_Val2_7_11_fu_4818_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_245_fu_4864_p1.read()) + sc_biguint<14>(p_Val2_7_11_fu_4818_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_2_fu_14136_p2() {
    p_Val2_14_12_2_fu_14136_p2 = (!p_Val2_6_12_2_fu_14116_p1.read().is_01() || !y_V_1_12_1_cast_fu_14072_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_2_fu_14116_p1.read()) + sc_bigint<15>(y_V_1_12_1_cast_fu_14072_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_3_fu_14214_p2() {
    p_Val2_14_12_3_fu_14214_p2 = (!p_Val2_6_12_3_fu_14194_p1.read().is_01() || !y_V_1_12_2_fu_14150_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_3_fu_14194_p1.read()) + sc_biguint<15>(y_V_1_12_2_fu_14150_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_4_fu_27313_p2() {
    p_Val2_14_12_4_fu_27313_p2 = (!p_Val2_6_12_4_fu_27297_p1.read().is_01() || !y_V_1_12_3_reg_60873.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_4_fu_27297_p1.read()) + sc_biguint<15>(y_V_1_12_3_reg_60873.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_5_fu_27390_p2() {
    p_Val2_14_12_5_fu_27390_p2 = (!p_Val2_6_12_5_fu_27370_p1.read().is_01() || !y_V_1_12_4_fu_27326_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_5_fu_27370_p1.read()) + sc_biguint<15>(y_V_1_12_4_fu_27326_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_6_fu_37928_p2() {
    p_Val2_14_12_6_fu_37928_p2 = (!p_Val2_6_12_6_fu_37912_p1.read().is_01() || !y_V_1_12_5_reg_63287.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_6_fu_37912_p1.read()) + sc_biguint<15>(y_V_1_12_5_reg_63287.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_12_7_fu_37985_p2() {
    p_Val2_14_12_7_fu_37985_p2 = (!p_Val2_6_12_7_fu_37975_p1.read().is_01() || !y_V_1_12_6_fu_37933_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_12_7_fu_37975_p1.read()) + sc_biguint<15>(y_V_1_12_6_fu_37933_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_1_fu_5002_p2() {
    p_Val2_14_13_1_fu_5002_p2 = (!tmp_265_fu_4982_p1.read().is_01() || !p_Val2_7_12_fu_4936_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_265_fu_4982_p1.read()) + sc_biguint<14>(p_Val2_7_12_fu_4936_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_2_fu_14330_p2() {
    p_Val2_14_13_2_fu_14330_p2 = (!p_Val2_6_13_2_fu_14310_p1.read().is_01() || !y_V_1_13_1_cast_fu_14266_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_2_fu_14310_p1.read()) + sc_bigint<15>(y_V_1_13_1_cast_fu_14266_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_3_fu_14408_p2() {
    p_Val2_14_13_3_fu_14408_p2 = (!p_Val2_6_13_3_fu_14388_p1.read().is_01() || !y_V_1_13_2_fu_14344_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_3_fu_14388_p1.read()) + sc_biguint<15>(y_V_1_13_2_fu_14344_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_4_fu_27461_p2() {
    p_Val2_14_13_4_fu_27461_p2 = (!p_Val2_6_13_4_fu_27445_p1.read().is_01() || !y_V_1_13_3_reg_60907.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_4_fu_27445_p1.read()) + sc_biguint<15>(y_V_1_13_3_reg_60907.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_5_fu_27538_p2() {
    p_Val2_14_13_5_fu_27538_p2 = (!p_Val2_6_13_5_fu_27518_p1.read().is_01() || !y_V_1_13_4_fu_27474_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_5_fu_27518_p1.read()) + sc_biguint<15>(y_V_1_13_4_fu_27474_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_6_fu_38081_p2() {
    p_Val2_14_13_6_fu_38081_p2 = (!p_Val2_6_13_6_fu_38065_p1.read().is_01() || !y_V_1_13_5_reg_63321.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_6_fu_38065_p1.read()) + sc_biguint<15>(y_V_1_13_5_reg_63321.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_13_7_fu_38138_p2() {
    p_Val2_14_13_7_fu_38138_p2 = (!p_Val2_6_13_7_fu_38128_p1.read().is_01() || !y_V_1_13_6_fu_38086_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_13_7_fu_38128_p1.read()) + sc_biguint<15>(y_V_1_13_6_fu_38086_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_1_fu_5120_p2() {
    p_Val2_14_14_1_fu_5120_p2 = (!tmp_285_fu_5100_p1.read().is_01() || !p_Val2_7_13_fu_5054_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_285_fu_5100_p1.read()) + sc_biguint<14>(p_Val2_7_13_fu_5054_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_2_fu_14524_p2() {
    p_Val2_14_14_2_fu_14524_p2 = (!p_Val2_6_14_2_fu_14504_p1.read().is_01() || !y_V_1_14_1_cast_fu_14460_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_2_fu_14504_p1.read()) + sc_bigint<15>(y_V_1_14_1_cast_fu_14460_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_3_fu_14602_p2() {
    p_Val2_14_14_3_fu_14602_p2 = (!p_Val2_6_14_3_fu_14582_p1.read().is_01() || !y_V_1_14_2_fu_14538_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_3_fu_14582_p1.read()) + sc_biguint<15>(y_V_1_14_2_fu_14538_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_4_fu_27609_p2() {
    p_Val2_14_14_4_fu_27609_p2 = (!p_Val2_6_14_4_fu_27593_p1.read().is_01() || !y_V_1_14_3_reg_60941.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_4_fu_27593_p1.read()) + sc_biguint<15>(y_V_1_14_3_reg_60941.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_5_fu_27686_p2() {
    p_Val2_14_14_5_fu_27686_p2 = (!p_Val2_6_14_5_fu_27666_p1.read().is_01() || !y_V_1_14_4_fu_27622_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_5_fu_27666_p1.read()) + sc_biguint<15>(y_V_1_14_4_fu_27622_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_6_fu_38234_p2() {
    p_Val2_14_14_6_fu_38234_p2 = (!p_Val2_6_14_6_fu_38218_p1.read().is_01() || !y_V_1_14_5_reg_63355.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_6_fu_38218_p1.read()) + sc_biguint<15>(y_V_1_14_5_reg_63355.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_14_7_fu_38291_p2() {
    p_Val2_14_14_7_fu_38291_p2 = (!p_Val2_6_14_7_fu_38281_p1.read().is_01() || !y_V_1_14_6_fu_38239_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_14_7_fu_38281_p1.read()) + sc_biguint<15>(y_V_1_14_6_fu_38239_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_1_fu_5238_p2() {
    p_Val2_14_15_1_fu_5238_p2 = (!tmp_305_fu_5218_p1.read().is_01() || !p_Val2_7_14_fu_5172_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_305_fu_5218_p1.read()) + sc_biguint<14>(p_Val2_7_14_fu_5172_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_2_fu_14718_p2() {
    p_Val2_14_15_2_fu_14718_p2 = (!p_Val2_6_15_2_fu_14698_p1.read().is_01() || !y_V_1_15_1_cast_fu_14654_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_2_fu_14698_p1.read()) + sc_bigint<15>(y_V_1_15_1_cast_fu_14654_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_3_fu_14796_p2() {
    p_Val2_14_15_3_fu_14796_p2 = (!p_Val2_6_15_3_fu_14776_p1.read().is_01() || !y_V_1_15_2_fu_14732_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_3_fu_14776_p1.read()) + sc_biguint<15>(y_V_1_15_2_fu_14732_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_4_fu_27757_p2() {
    p_Val2_14_15_4_fu_27757_p2 = (!p_Val2_6_15_4_fu_27741_p1.read().is_01() || !y_V_1_15_3_reg_60975.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_4_fu_27741_p1.read()) + sc_biguint<15>(y_V_1_15_3_reg_60975.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_5_fu_27834_p2() {
    p_Val2_14_15_5_fu_27834_p2 = (!p_Val2_6_15_5_fu_27814_p1.read().is_01() || !y_V_1_15_4_fu_27770_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_5_fu_27814_p1.read()) + sc_biguint<15>(y_V_1_15_4_fu_27770_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_6_fu_38387_p2() {
    p_Val2_14_15_6_fu_38387_p2 = (!p_Val2_6_15_6_fu_38371_p1.read().is_01() || !y_V_1_15_5_reg_63389.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_6_fu_38371_p1.read()) + sc_biguint<15>(y_V_1_15_5_reg_63389.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_15_7_fu_38444_p2() {
    p_Val2_14_15_7_fu_38444_p2 = (!p_Val2_6_15_7_fu_38434_p1.read().is_01() || !y_V_1_15_6_fu_38392_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_15_7_fu_38434_p1.read()) + sc_biguint<15>(y_V_1_15_6_fu_38392_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_1_fu_5356_p2() {
    p_Val2_14_16_1_fu_5356_p2 = (!tmp_325_fu_5336_p1.read().is_01() || !p_Val2_7_15_fu_5290_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_325_fu_5336_p1.read()) + sc_biguint<14>(p_Val2_7_15_fu_5290_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_2_fu_14912_p2() {
    p_Val2_14_16_2_fu_14912_p2 = (!p_Val2_6_16_2_fu_14892_p1.read().is_01() || !y_V_1_16_1_cast_fu_14848_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_2_fu_14892_p1.read()) + sc_bigint<15>(y_V_1_16_1_cast_fu_14848_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_3_fu_14990_p2() {
    p_Val2_14_16_3_fu_14990_p2 = (!p_Val2_6_16_3_fu_14970_p1.read().is_01() || !y_V_1_16_2_fu_14926_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_3_fu_14970_p1.read()) + sc_biguint<15>(y_V_1_16_2_fu_14926_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_4_fu_27905_p2() {
    p_Val2_14_16_4_fu_27905_p2 = (!p_Val2_6_16_4_fu_27889_p1.read().is_01() || !y_V_1_16_3_reg_61009.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_4_fu_27889_p1.read()) + sc_biguint<15>(y_V_1_16_3_reg_61009.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_5_fu_27982_p2() {
    p_Val2_14_16_5_fu_27982_p2 = (!p_Val2_6_16_5_fu_27962_p1.read().is_01() || !y_V_1_16_4_fu_27918_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_5_fu_27962_p1.read()) + sc_biguint<15>(y_V_1_16_4_fu_27918_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_6_fu_38540_p2() {
    p_Val2_14_16_6_fu_38540_p2 = (!p_Val2_6_16_6_fu_38524_p1.read().is_01() || !y_V_1_16_5_reg_63423.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_6_fu_38524_p1.read()) + sc_biguint<15>(y_V_1_16_5_reg_63423.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_16_7_fu_38597_p2() {
    p_Val2_14_16_7_fu_38597_p2 = (!p_Val2_6_16_7_fu_38587_p1.read().is_01() || !y_V_1_16_6_fu_38545_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_16_7_fu_38587_p1.read()) + sc_biguint<15>(y_V_1_16_6_fu_38545_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_1_fu_5474_p2() {
    p_Val2_14_17_1_fu_5474_p2 = (!tmp_345_fu_5454_p1.read().is_01() || !p_Val2_7_16_fu_5408_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_345_fu_5454_p1.read()) + sc_biguint<14>(p_Val2_7_16_fu_5408_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_2_fu_15106_p2() {
    p_Val2_14_17_2_fu_15106_p2 = (!p_Val2_6_17_2_fu_15086_p1.read().is_01() || !y_V_1_17_1_cast_fu_15042_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_2_fu_15086_p1.read()) + sc_bigint<15>(y_V_1_17_1_cast_fu_15042_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_3_fu_15184_p2() {
    p_Val2_14_17_3_fu_15184_p2 = (!p_Val2_6_17_3_fu_15164_p1.read().is_01() || !y_V_1_17_2_fu_15120_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_3_fu_15164_p1.read()) + sc_biguint<15>(y_V_1_17_2_fu_15120_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_4_fu_28053_p2() {
    p_Val2_14_17_4_fu_28053_p2 = (!p_Val2_6_17_4_fu_28037_p1.read().is_01() || !y_V_1_17_3_reg_61043.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_4_fu_28037_p1.read()) + sc_biguint<15>(y_V_1_17_3_reg_61043.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_5_fu_28130_p2() {
    p_Val2_14_17_5_fu_28130_p2 = (!p_Val2_6_17_5_fu_28110_p1.read().is_01() || !y_V_1_17_4_fu_28066_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_5_fu_28110_p1.read()) + sc_biguint<15>(y_V_1_17_4_fu_28066_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_6_fu_38693_p2() {
    p_Val2_14_17_6_fu_38693_p2 = (!p_Val2_6_17_6_fu_38677_p1.read().is_01() || !y_V_1_17_5_reg_63457.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_6_fu_38677_p1.read()) + sc_biguint<15>(y_V_1_17_5_reg_63457.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_17_7_fu_38750_p2() {
    p_Val2_14_17_7_fu_38750_p2 = (!p_Val2_6_17_7_fu_38740_p1.read().is_01() || !y_V_1_17_6_fu_38698_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_17_7_fu_38740_p1.read()) + sc_biguint<15>(y_V_1_17_6_fu_38698_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_1_fu_5592_p2() {
    p_Val2_14_18_1_fu_5592_p2 = (!tmp_365_fu_5572_p1.read().is_01() || !p_Val2_7_17_fu_5526_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_365_fu_5572_p1.read()) + sc_biguint<14>(p_Val2_7_17_fu_5526_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_2_fu_15300_p2() {
    p_Val2_14_18_2_fu_15300_p2 = (!p_Val2_6_18_2_fu_15280_p1.read().is_01() || !y_V_1_18_1_cast_fu_15236_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_2_fu_15280_p1.read()) + sc_bigint<15>(y_V_1_18_1_cast_fu_15236_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_3_fu_15378_p2() {
    p_Val2_14_18_3_fu_15378_p2 = (!p_Val2_6_18_3_fu_15358_p1.read().is_01() || !y_V_1_18_2_fu_15314_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_3_fu_15358_p1.read()) + sc_biguint<15>(y_V_1_18_2_fu_15314_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_4_fu_28201_p2() {
    p_Val2_14_18_4_fu_28201_p2 = (!p_Val2_6_18_4_fu_28185_p1.read().is_01() || !y_V_1_18_3_reg_61077.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_4_fu_28185_p1.read()) + sc_biguint<15>(y_V_1_18_3_reg_61077.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_5_fu_28278_p2() {
    p_Val2_14_18_5_fu_28278_p2 = (!p_Val2_6_18_5_fu_28258_p1.read().is_01() || !y_V_1_18_4_fu_28214_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_5_fu_28258_p1.read()) + sc_biguint<15>(y_V_1_18_4_fu_28214_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_6_fu_38846_p2() {
    p_Val2_14_18_6_fu_38846_p2 = (!p_Val2_6_18_6_fu_38830_p1.read().is_01() || !y_V_1_18_5_reg_63491.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_6_fu_38830_p1.read()) + sc_biguint<15>(y_V_1_18_5_reg_63491.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_18_7_fu_38903_p2() {
    p_Val2_14_18_7_fu_38903_p2 = (!p_Val2_6_18_7_fu_38893_p1.read().is_01() || !y_V_1_18_6_fu_38851_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_18_7_fu_38893_p1.read()) + sc_biguint<15>(y_V_1_18_6_fu_38851_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_1_fu_5710_p2() {
    p_Val2_14_19_1_fu_5710_p2 = (!tmp_385_fu_5690_p1.read().is_01() || !p_Val2_7_18_fu_5644_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_385_fu_5690_p1.read()) + sc_biguint<14>(p_Val2_7_18_fu_5644_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_2_fu_15494_p2() {
    p_Val2_14_19_2_fu_15494_p2 = (!p_Val2_6_19_2_fu_15474_p1.read().is_01() || !y_V_1_19_1_cast_fu_15430_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_2_fu_15474_p1.read()) + sc_bigint<15>(y_V_1_19_1_cast_fu_15430_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_3_fu_15572_p2() {
    p_Val2_14_19_3_fu_15572_p2 = (!p_Val2_6_19_3_fu_15552_p1.read().is_01() || !y_V_1_19_2_fu_15508_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_3_fu_15552_p1.read()) + sc_biguint<15>(y_V_1_19_2_fu_15508_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_4_fu_28349_p2() {
    p_Val2_14_19_4_fu_28349_p2 = (!p_Val2_6_19_4_fu_28333_p1.read().is_01() || !y_V_1_19_3_reg_61111.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_4_fu_28333_p1.read()) + sc_biguint<15>(y_V_1_19_3_reg_61111.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_5_fu_28426_p2() {
    p_Val2_14_19_5_fu_28426_p2 = (!p_Val2_6_19_5_fu_28406_p1.read().is_01() || !y_V_1_19_4_fu_28362_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_5_fu_28406_p1.read()) + sc_biguint<15>(y_V_1_19_4_fu_28362_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_6_fu_38999_p2() {
    p_Val2_14_19_6_fu_38999_p2 = (!p_Val2_6_19_6_fu_38983_p1.read().is_01() || !y_V_1_19_5_reg_63525.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_6_fu_38983_p1.read()) + sc_biguint<15>(y_V_1_19_5_reg_63525.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_19_7_fu_39056_p2() {
    p_Val2_14_19_7_fu_39056_p2 = (!p_Val2_6_19_7_fu_39046_p1.read().is_01() || !y_V_1_19_6_fu_39004_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_19_7_fu_39046_p1.read()) + sc_biguint<15>(y_V_1_19_6_fu_39004_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_1_fu_3586_p2() {
    p_Val2_14_1_1_fu_3586_p2 = (!tmp_25_fu_3566_p1.read().is_01() || !p_Val2_7_1_fu_3520_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_25_fu_3566_p1.read()) + sc_biguint<14>(p_Val2_7_1_fu_3520_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_2_fu_12002_p2() {
    p_Val2_14_1_2_fu_12002_p2 = (!p_Val2_6_1_2_fu_11982_p1.read().is_01() || !y_V_1_1_1_cast_fu_11938_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_2_fu_11982_p1.read()) + sc_bigint<15>(y_V_1_1_1_cast_fu_11938_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_3_fu_12080_p2() {
    p_Val2_14_1_3_fu_12080_p2 = (!p_Val2_6_1_3_fu_12060_p1.read().is_01() || !y_V_1_1_2_fu_12016_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_3_fu_12060_p1.read()) + sc_biguint<15>(y_V_1_1_2_fu_12016_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_4_fu_25685_p2() {
    p_Val2_14_1_4_fu_25685_p2 = (!p_Val2_6_1_4_fu_25669_p1.read().is_01() || !y_V_1_1_3_reg_60499.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_4_fu_25669_p1.read()) + sc_biguint<15>(y_V_1_1_3_reg_60499.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_5_fu_25762_p2() {
    p_Val2_14_1_5_fu_25762_p2 = (!p_Val2_6_1_5_fu_25742_p1.read().is_01() || !y_V_1_1_4_fu_25698_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_5_fu_25742_p1.read()) + sc_biguint<15>(y_V_1_1_4_fu_25698_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_6_fu_36245_p2() {
    p_Val2_14_1_6_fu_36245_p2 = (!p_Val2_6_1_6_fu_36229_p1.read().is_01() || !y_V_1_1_5_reg_62913.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_6_fu_36229_p1.read()) + sc_biguint<15>(y_V_1_1_5_reg_62913.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_1_7_fu_36302_p2() {
    p_Val2_14_1_7_fu_36302_p2 = (!p_Val2_6_1_7_fu_36292_p1.read().is_01() || !y_V_1_1_6_fu_36250_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_1_7_fu_36292_p1.read()) + sc_biguint<15>(y_V_1_1_6_fu_36250_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_1_fu_5828_p2() {
    p_Val2_14_20_1_fu_5828_p2 = (!tmp_405_fu_5808_p1.read().is_01() || !p_Val2_7_19_fu_5762_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_405_fu_5808_p1.read()) + sc_biguint<14>(p_Val2_7_19_fu_5762_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_2_fu_15688_p2() {
    p_Val2_14_20_2_fu_15688_p2 = (!p_Val2_6_20_2_fu_15668_p1.read().is_01() || !y_V_1_20_1_cast_fu_15624_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_2_fu_15668_p1.read()) + sc_bigint<15>(y_V_1_20_1_cast_fu_15624_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_3_fu_15766_p2() {
    p_Val2_14_20_3_fu_15766_p2 = (!p_Val2_6_20_3_fu_15746_p1.read().is_01() || !y_V_1_20_2_fu_15702_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_3_fu_15746_p1.read()) + sc_biguint<15>(y_V_1_20_2_fu_15702_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_4_fu_28497_p2() {
    p_Val2_14_20_4_fu_28497_p2 = (!p_Val2_6_20_4_fu_28481_p1.read().is_01() || !y_V_1_20_3_reg_61145.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_4_fu_28481_p1.read()) + sc_biguint<15>(y_V_1_20_3_reg_61145.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_5_fu_28574_p2() {
    p_Val2_14_20_5_fu_28574_p2 = (!p_Val2_6_20_5_fu_28554_p1.read().is_01() || !y_V_1_20_4_fu_28510_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_5_fu_28554_p1.read()) + sc_biguint<15>(y_V_1_20_4_fu_28510_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_6_fu_39152_p2() {
    p_Val2_14_20_6_fu_39152_p2 = (!p_Val2_6_20_6_fu_39136_p1.read().is_01() || !y_V_1_20_5_reg_63559.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_6_fu_39136_p1.read()) + sc_biguint<15>(y_V_1_20_5_reg_63559.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_20_7_fu_39209_p2() {
    p_Val2_14_20_7_fu_39209_p2 = (!p_Val2_6_20_7_fu_39199_p1.read().is_01() || !y_V_1_20_6_fu_39157_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_20_7_fu_39199_p1.read()) + sc_biguint<15>(y_V_1_20_6_fu_39157_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_1_fu_5946_p2() {
    p_Val2_14_21_1_fu_5946_p2 = (!tmp_425_fu_5926_p1.read().is_01() || !p_Val2_7_20_fu_5880_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_425_fu_5926_p1.read()) + sc_biguint<14>(p_Val2_7_20_fu_5880_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_2_fu_15882_p2() {
    p_Val2_14_21_2_fu_15882_p2 = (!p_Val2_6_21_2_fu_15862_p1.read().is_01() || !y_V_1_21_1_cast_fu_15818_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_2_fu_15862_p1.read()) + sc_bigint<15>(y_V_1_21_1_cast_fu_15818_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_3_fu_15960_p2() {
    p_Val2_14_21_3_fu_15960_p2 = (!p_Val2_6_21_3_fu_15940_p1.read().is_01() || !y_V_1_21_2_fu_15896_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_3_fu_15940_p1.read()) + sc_biguint<15>(y_V_1_21_2_fu_15896_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_4_fu_28645_p2() {
    p_Val2_14_21_4_fu_28645_p2 = (!p_Val2_6_21_4_fu_28629_p1.read().is_01() || !y_V_1_21_3_reg_61179.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_4_fu_28629_p1.read()) + sc_biguint<15>(y_V_1_21_3_reg_61179.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_5_fu_28722_p2() {
    p_Val2_14_21_5_fu_28722_p2 = (!p_Val2_6_21_5_fu_28702_p1.read().is_01() || !y_V_1_21_4_fu_28658_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_5_fu_28702_p1.read()) + sc_biguint<15>(y_V_1_21_4_fu_28658_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_6_fu_39305_p2() {
    p_Val2_14_21_6_fu_39305_p2 = (!p_Val2_6_21_6_fu_39289_p1.read().is_01() || !y_V_1_21_5_reg_63593.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_6_fu_39289_p1.read()) + sc_biguint<15>(y_V_1_21_5_reg_63593.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_21_7_fu_39362_p2() {
    p_Val2_14_21_7_fu_39362_p2 = (!p_Val2_6_21_7_fu_39352_p1.read().is_01() || !y_V_1_21_6_fu_39310_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_21_7_fu_39352_p1.read()) + sc_biguint<15>(y_V_1_21_6_fu_39310_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_1_fu_6064_p2() {
    p_Val2_14_22_1_fu_6064_p2 = (!tmp_445_fu_6044_p1.read().is_01() || !p_Val2_7_21_fu_5998_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_445_fu_6044_p1.read()) + sc_biguint<14>(p_Val2_7_21_fu_5998_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_2_fu_16076_p2() {
    p_Val2_14_22_2_fu_16076_p2 = (!p_Val2_6_22_2_fu_16056_p1.read().is_01() || !y_V_1_22_1_cast_fu_16012_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_2_fu_16056_p1.read()) + sc_bigint<15>(y_V_1_22_1_cast_fu_16012_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_3_fu_16154_p2() {
    p_Val2_14_22_3_fu_16154_p2 = (!p_Val2_6_22_3_fu_16134_p1.read().is_01() || !y_V_1_22_2_fu_16090_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_3_fu_16134_p1.read()) + sc_biguint<15>(y_V_1_22_2_fu_16090_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_4_fu_28793_p2() {
    p_Val2_14_22_4_fu_28793_p2 = (!p_Val2_6_22_4_fu_28777_p1.read().is_01() || !y_V_1_22_3_reg_61213.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_4_fu_28777_p1.read()) + sc_biguint<15>(y_V_1_22_3_reg_61213.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_5_fu_28870_p2() {
    p_Val2_14_22_5_fu_28870_p2 = (!p_Val2_6_22_5_fu_28850_p1.read().is_01() || !y_V_1_22_4_fu_28806_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_5_fu_28850_p1.read()) + sc_biguint<15>(y_V_1_22_4_fu_28806_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_6_fu_39458_p2() {
    p_Val2_14_22_6_fu_39458_p2 = (!p_Val2_6_22_6_fu_39442_p1.read().is_01() || !y_V_1_22_5_reg_63627.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_6_fu_39442_p1.read()) + sc_biguint<15>(y_V_1_22_5_reg_63627.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_22_7_fu_39515_p2() {
    p_Val2_14_22_7_fu_39515_p2 = (!p_Val2_6_22_7_fu_39505_p1.read().is_01() || !y_V_1_22_6_fu_39463_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_22_7_fu_39505_p1.read()) + sc_biguint<15>(y_V_1_22_6_fu_39463_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_1_fu_6182_p2() {
    p_Val2_14_23_1_fu_6182_p2 = (!tmp_465_fu_6162_p1.read().is_01() || !p_Val2_7_22_fu_6116_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_465_fu_6162_p1.read()) + sc_biguint<14>(p_Val2_7_22_fu_6116_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_2_fu_16270_p2() {
    p_Val2_14_23_2_fu_16270_p2 = (!p_Val2_6_23_2_fu_16250_p1.read().is_01() || !y_V_1_23_1_cast_fu_16206_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_2_fu_16250_p1.read()) + sc_bigint<15>(y_V_1_23_1_cast_fu_16206_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_3_fu_16348_p2() {
    p_Val2_14_23_3_fu_16348_p2 = (!p_Val2_6_23_3_fu_16328_p1.read().is_01() || !y_V_1_23_2_fu_16284_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_3_fu_16328_p1.read()) + sc_biguint<15>(y_V_1_23_2_fu_16284_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_4_fu_28941_p2() {
    p_Val2_14_23_4_fu_28941_p2 = (!p_Val2_6_23_4_fu_28925_p1.read().is_01() || !y_V_1_23_3_reg_61247.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_4_fu_28925_p1.read()) + sc_biguint<15>(y_V_1_23_3_reg_61247.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_5_fu_29018_p2() {
    p_Val2_14_23_5_fu_29018_p2 = (!p_Val2_6_23_5_fu_28998_p1.read().is_01() || !y_V_1_23_4_fu_28954_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_5_fu_28998_p1.read()) + sc_biguint<15>(y_V_1_23_4_fu_28954_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_6_fu_39611_p2() {
    p_Val2_14_23_6_fu_39611_p2 = (!p_Val2_6_23_6_fu_39595_p1.read().is_01() || !y_V_1_23_5_reg_63661.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_6_fu_39595_p1.read()) + sc_biguint<15>(y_V_1_23_5_reg_63661.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_23_7_fu_39668_p2() {
    p_Val2_14_23_7_fu_39668_p2 = (!p_Val2_6_23_7_fu_39658_p1.read().is_01() || !y_V_1_23_6_fu_39616_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_23_7_fu_39658_p1.read()) + sc_biguint<15>(y_V_1_23_6_fu_39616_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_1_fu_6300_p2() {
    p_Val2_14_24_1_fu_6300_p2 = (!tmp_485_fu_6280_p1.read().is_01() || !p_Val2_7_23_fu_6234_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_485_fu_6280_p1.read()) + sc_biguint<14>(p_Val2_7_23_fu_6234_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_2_fu_16464_p2() {
    p_Val2_14_24_2_fu_16464_p2 = (!p_Val2_6_24_2_fu_16444_p1.read().is_01() || !y_V_1_24_1_cast_fu_16400_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_2_fu_16444_p1.read()) + sc_bigint<15>(y_V_1_24_1_cast_fu_16400_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_3_fu_16542_p2() {
    p_Val2_14_24_3_fu_16542_p2 = (!p_Val2_6_24_3_fu_16522_p1.read().is_01() || !y_V_1_24_2_fu_16478_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_3_fu_16522_p1.read()) + sc_biguint<15>(y_V_1_24_2_fu_16478_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_4_fu_29089_p2() {
    p_Val2_14_24_4_fu_29089_p2 = (!p_Val2_6_24_4_fu_29073_p1.read().is_01() || !y_V_1_24_3_reg_61281.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_4_fu_29073_p1.read()) + sc_biguint<15>(y_V_1_24_3_reg_61281.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_5_fu_29166_p2() {
    p_Val2_14_24_5_fu_29166_p2 = (!p_Val2_6_24_5_fu_29146_p1.read().is_01() || !y_V_1_24_4_fu_29102_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_5_fu_29146_p1.read()) + sc_biguint<15>(y_V_1_24_4_fu_29102_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_6_fu_39764_p2() {
    p_Val2_14_24_6_fu_39764_p2 = (!p_Val2_6_24_6_fu_39748_p1.read().is_01() || !y_V_1_24_5_reg_63695.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_6_fu_39748_p1.read()) + sc_biguint<15>(y_V_1_24_5_reg_63695.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_24_7_fu_39821_p2() {
    p_Val2_14_24_7_fu_39821_p2 = (!p_Val2_6_24_7_fu_39811_p1.read().is_01() || !y_V_1_24_6_fu_39769_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_24_7_fu_39811_p1.read()) + sc_biguint<15>(y_V_1_24_6_fu_39769_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_1_fu_6418_p2() {
    p_Val2_14_25_1_fu_6418_p2 = (!tmp_505_fu_6398_p1.read().is_01() || !p_Val2_7_24_fu_6352_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_505_fu_6398_p1.read()) + sc_biguint<14>(p_Val2_7_24_fu_6352_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_2_fu_16658_p2() {
    p_Val2_14_25_2_fu_16658_p2 = (!p_Val2_6_25_2_fu_16638_p1.read().is_01() || !y_V_1_25_1_cast_fu_16594_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_2_fu_16638_p1.read()) + sc_bigint<15>(y_V_1_25_1_cast_fu_16594_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_3_fu_16736_p2() {
    p_Val2_14_25_3_fu_16736_p2 = (!p_Val2_6_25_3_fu_16716_p1.read().is_01() || !y_V_1_25_2_fu_16672_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_3_fu_16716_p1.read()) + sc_biguint<15>(y_V_1_25_2_fu_16672_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_4_fu_29237_p2() {
    p_Val2_14_25_4_fu_29237_p2 = (!p_Val2_6_25_4_fu_29221_p1.read().is_01() || !y_V_1_25_3_reg_61315.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_4_fu_29221_p1.read()) + sc_biguint<15>(y_V_1_25_3_reg_61315.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_5_fu_29314_p2() {
    p_Val2_14_25_5_fu_29314_p2 = (!p_Val2_6_25_5_fu_29294_p1.read().is_01() || !y_V_1_25_4_fu_29250_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_5_fu_29294_p1.read()) + sc_biguint<15>(y_V_1_25_4_fu_29250_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_6_fu_39917_p2() {
    p_Val2_14_25_6_fu_39917_p2 = (!p_Val2_6_25_6_fu_39901_p1.read().is_01() || !y_V_1_25_5_reg_63729.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_6_fu_39901_p1.read()) + sc_biguint<15>(y_V_1_25_5_reg_63729.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_25_7_fu_39974_p2() {
    p_Val2_14_25_7_fu_39974_p2 = (!p_Val2_6_25_7_fu_39964_p1.read().is_01() || !y_V_1_25_6_fu_39922_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_25_7_fu_39964_p1.read()) + sc_biguint<15>(y_V_1_25_6_fu_39922_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_1_fu_6536_p2() {
    p_Val2_14_26_1_fu_6536_p2 = (!tmp_525_fu_6516_p1.read().is_01() || !p_Val2_7_25_fu_6470_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_525_fu_6516_p1.read()) + sc_biguint<14>(p_Val2_7_25_fu_6470_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_2_fu_16852_p2() {
    p_Val2_14_26_2_fu_16852_p2 = (!p_Val2_6_26_2_fu_16832_p1.read().is_01() || !y_V_1_26_1_cast_fu_16788_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_2_fu_16832_p1.read()) + sc_bigint<15>(y_V_1_26_1_cast_fu_16788_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_3_fu_16930_p2() {
    p_Val2_14_26_3_fu_16930_p2 = (!p_Val2_6_26_3_fu_16910_p1.read().is_01() || !y_V_1_26_2_fu_16866_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_3_fu_16910_p1.read()) + sc_biguint<15>(y_V_1_26_2_fu_16866_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_4_fu_29385_p2() {
    p_Val2_14_26_4_fu_29385_p2 = (!p_Val2_6_26_4_fu_29369_p1.read().is_01() || !y_V_1_26_3_reg_61349.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_4_fu_29369_p1.read()) + sc_biguint<15>(y_V_1_26_3_reg_61349.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_5_fu_29462_p2() {
    p_Val2_14_26_5_fu_29462_p2 = (!p_Val2_6_26_5_fu_29442_p1.read().is_01() || !y_V_1_26_4_fu_29398_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_5_fu_29442_p1.read()) + sc_biguint<15>(y_V_1_26_4_fu_29398_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_6_fu_40070_p2() {
    p_Val2_14_26_6_fu_40070_p2 = (!p_Val2_6_26_6_fu_40054_p1.read().is_01() || !y_V_1_26_5_reg_63763.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_6_fu_40054_p1.read()) + sc_biguint<15>(y_V_1_26_5_reg_63763.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_26_7_fu_40127_p2() {
    p_Val2_14_26_7_fu_40127_p2 = (!p_Val2_6_26_7_fu_40117_p1.read().is_01() || !y_V_1_26_6_fu_40075_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_26_7_fu_40117_p1.read()) + sc_biguint<15>(y_V_1_26_6_fu_40075_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_1_fu_6654_p2() {
    p_Val2_14_27_1_fu_6654_p2 = (!tmp_545_fu_6634_p1.read().is_01() || !p_Val2_7_26_fu_6588_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_545_fu_6634_p1.read()) + sc_biguint<14>(p_Val2_7_26_fu_6588_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_2_fu_17046_p2() {
    p_Val2_14_27_2_fu_17046_p2 = (!p_Val2_6_27_2_fu_17026_p1.read().is_01() || !y_V_1_27_1_cast_fu_16982_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_2_fu_17026_p1.read()) + sc_bigint<15>(y_V_1_27_1_cast_fu_16982_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_3_fu_17124_p2() {
    p_Val2_14_27_3_fu_17124_p2 = (!p_Val2_6_27_3_fu_17104_p1.read().is_01() || !y_V_1_27_2_fu_17060_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_3_fu_17104_p1.read()) + sc_biguint<15>(y_V_1_27_2_fu_17060_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_4_fu_29533_p2() {
    p_Val2_14_27_4_fu_29533_p2 = (!p_Val2_6_27_4_fu_29517_p1.read().is_01() || !y_V_1_27_3_reg_61383.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_4_fu_29517_p1.read()) + sc_biguint<15>(y_V_1_27_3_reg_61383.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_5_fu_29610_p2() {
    p_Val2_14_27_5_fu_29610_p2 = (!p_Val2_6_27_5_fu_29590_p1.read().is_01() || !y_V_1_27_4_fu_29546_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_5_fu_29590_p1.read()) + sc_biguint<15>(y_V_1_27_4_fu_29546_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_6_fu_40223_p2() {
    p_Val2_14_27_6_fu_40223_p2 = (!p_Val2_6_27_6_fu_40207_p1.read().is_01() || !y_V_1_27_5_reg_63797.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_6_fu_40207_p1.read()) + sc_biguint<15>(y_V_1_27_5_reg_63797.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_27_7_fu_40280_p2() {
    p_Val2_14_27_7_fu_40280_p2 = (!p_Val2_6_27_7_fu_40270_p1.read().is_01() || !y_V_1_27_6_fu_40228_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_27_7_fu_40270_p1.read()) + sc_biguint<15>(y_V_1_27_6_fu_40228_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_1_fu_6772_p2() {
    p_Val2_14_28_1_fu_6772_p2 = (!tmp_565_fu_6752_p1.read().is_01() || !p_Val2_7_27_fu_6706_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_565_fu_6752_p1.read()) + sc_biguint<14>(p_Val2_7_27_fu_6706_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_2_fu_17240_p2() {
    p_Val2_14_28_2_fu_17240_p2 = (!p_Val2_6_28_2_fu_17220_p1.read().is_01() || !y_V_1_28_1_cast_fu_17176_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_2_fu_17220_p1.read()) + sc_bigint<15>(y_V_1_28_1_cast_fu_17176_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_3_fu_17318_p2() {
    p_Val2_14_28_3_fu_17318_p2 = (!p_Val2_6_28_3_fu_17298_p1.read().is_01() || !y_V_1_28_2_fu_17254_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_3_fu_17298_p1.read()) + sc_biguint<15>(y_V_1_28_2_fu_17254_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_4_fu_29681_p2() {
    p_Val2_14_28_4_fu_29681_p2 = (!p_Val2_6_28_4_fu_29665_p1.read().is_01() || !y_V_1_28_3_reg_61417.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_4_fu_29665_p1.read()) + sc_biguint<15>(y_V_1_28_3_reg_61417.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_5_fu_29758_p2() {
    p_Val2_14_28_5_fu_29758_p2 = (!p_Val2_6_28_5_fu_29738_p1.read().is_01() || !y_V_1_28_4_fu_29694_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_5_fu_29738_p1.read()) + sc_biguint<15>(y_V_1_28_4_fu_29694_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_6_fu_40376_p2() {
    p_Val2_14_28_6_fu_40376_p2 = (!p_Val2_6_28_6_fu_40360_p1.read().is_01() || !y_V_1_28_5_reg_63831.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_6_fu_40360_p1.read()) + sc_biguint<15>(y_V_1_28_5_reg_63831.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_28_7_fu_40433_p2() {
    p_Val2_14_28_7_fu_40433_p2 = (!p_Val2_6_28_7_fu_40423_p1.read().is_01() || !y_V_1_28_6_fu_40381_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_28_7_fu_40423_p1.read()) + sc_biguint<15>(y_V_1_28_6_fu_40381_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_1_fu_6890_p2() {
    p_Val2_14_29_1_fu_6890_p2 = (!tmp_585_fu_6870_p1.read().is_01() || !p_Val2_7_28_fu_6824_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_585_fu_6870_p1.read()) + sc_biguint<14>(p_Val2_7_28_fu_6824_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_2_fu_17434_p2() {
    p_Val2_14_29_2_fu_17434_p2 = (!p_Val2_6_29_2_fu_17414_p1.read().is_01() || !y_V_1_29_1_cast_fu_17370_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_2_fu_17414_p1.read()) + sc_bigint<15>(y_V_1_29_1_cast_fu_17370_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_3_fu_17512_p2() {
    p_Val2_14_29_3_fu_17512_p2 = (!p_Val2_6_29_3_fu_17492_p1.read().is_01() || !y_V_1_29_2_fu_17448_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_3_fu_17492_p1.read()) + sc_biguint<15>(y_V_1_29_2_fu_17448_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_4_fu_29829_p2() {
    p_Val2_14_29_4_fu_29829_p2 = (!p_Val2_6_29_4_fu_29813_p1.read().is_01() || !y_V_1_29_3_reg_61451.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_4_fu_29813_p1.read()) + sc_biguint<15>(y_V_1_29_3_reg_61451.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_5_fu_29906_p2() {
    p_Val2_14_29_5_fu_29906_p2 = (!p_Val2_6_29_5_fu_29886_p1.read().is_01() || !y_V_1_29_4_fu_29842_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_5_fu_29886_p1.read()) + sc_biguint<15>(y_V_1_29_4_fu_29842_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_6_fu_40529_p2() {
    p_Val2_14_29_6_fu_40529_p2 = (!p_Val2_6_29_6_fu_40513_p1.read().is_01() || !y_V_1_29_5_reg_63865.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_6_fu_40513_p1.read()) + sc_biguint<15>(y_V_1_29_5_reg_63865.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_29_7_fu_40586_p2() {
    p_Val2_14_29_7_fu_40586_p2 = (!p_Val2_6_29_7_fu_40576_p1.read().is_01() || !y_V_1_29_6_fu_40534_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_29_7_fu_40576_p1.read()) + sc_biguint<15>(y_V_1_29_6_fu_40534_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_1_fu_3704_p2() {
    p_Val2_14_2_1_fu_3704_p2 = (!tmp_45_fu_3684_p1.read().is_01() || !p_Val2_7_2_fu_3638_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_45_fu_3684_p1.read()) + sc_biguint<14>(p_Val2_7_2_fu_3638_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_2_fu_12196_p2() {
    p_Val2_14_2_2_fu_12196_p2 = (!p_Val2_6_2_2_fu_12176_p1.read().is_01() || !y_V_1_2_1_cast_fu_12132_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_2_fu_12176_p1.read()) + sc_bigint<15>(y_V_1_2_1_cast_fu_12132_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_3_fu_12274_p2() {
    p_Val2_14_2_3_fu_12274_p2 = (!p_Val2_6_2_3_fu_12254_p1.read().is_01() || !y_V_1_2_2_fu_12210_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_3_fu_12254_p1.read()) + sc_biguint<15>(y_V_1_2_2_fu_12210_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_4_fu_25833_p2() {
    p_Val2_14_2_4_fu_25833_p2 = (!p_Val2_6_2_4_fu_25817_p1.read().is_01() || !y_V_1_2_3_reg_60533.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_4_fu_25817_p1.read()) + sc_biguint<15>(y_V_1_2_3_reg_60533.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_5_fu_25910_p2() {
    p_Val2_14_2_5_fu_25910_p2 = (!p_Val2_6_2_5_fu_25890_p1.read().is_01() || !y_V_1_2_4_fu_25846_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_5_fu_25890_p1.read()) + sc_biguint<15>(y_V_1_2_4_fu_25846_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_6_fu_36398_p2() {
    p_Val2_14_2_6_fu_36398_p2 = (!p_Val2_6_2_6_fu_36382_p1.read().is_01() || !y_V_1_2_5_reg_62947.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_6_fu_36382_p1.read()) + sc_biguint<15>(y_V_1_2_5_reg_62947.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_2_7_fu_36455_p2() {
    p_Val2_14_2_7_fu_36455_p2 = (!p_Val2_6_2_7_fu_36445_p1.read().is_01() || !y_V_1_2_6_fu_36403_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_2_7_fu_36445_p1.read()) + sc_biguint<15>(y_V_1_2_6_fu_36403_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_1_fu_7008_p2() {
    p_Val2_14_30_1_fu_7008_p2 = (!tmp_605_fu_6988_p1.read().is_01() || !p_Val2_7_29_fu_6942_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_605_fu_6988_p1.read()) + sc_biguint<14>(p_Val2_7_29_fu_6942_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_2_fu_17628_p2() {
    p_Val2_14_30_2_fu_17628_p2 = (!p_Val2_6_30_2_fu_17608_p1.read().is_01() || !y_V_1_30_1_cast_fu_17564_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_2_fu_17608_p1.read()) + sc_bigint<15>(y_V_1_30_1_cast_fu_17564_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_3_fu_17706_p2() {
    p_Val2_14_30_3_fu_17706_p2 = (!p_Val2_6_30_3_fu_17686_p1.read().is_01() || !y_V_1_30_2_fu_17642_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_3_fu_17686_p1.read()) + sc_biguint<15>(y_V_1_30_2_fu_17642_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_4_fu_29977_p2() {
    p_Val2_14_30_4_fu_29977_p2 = (!p_Val2_6_30_4_fu_29961_p1.read().is_01() || !y_V_1_30_3_reg_61485.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_4_fu_29961_p1.read()) + sc_biguint<15>(y_V_1_30_3_reg_61485.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_5_fu_30054_p2() {
    p_Val2_14_30_5_fu_30054_p2 = (!p_Val2_6_30_5_fu_30034_p1.read().is_01() || !y_V_1_30_4_fu_29990_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_5_fu_30034_p1.read()) + sc_biguint<15>(y_V_1_30_4_fu_29990_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_6_fu_40682_p2() {
    p_Val2_14_30_6_fu_40682_p2 = (!p_Val2_6_30_6_fu_40666_p1.read().is_01() || !y_V_1_30_5_reg_63899.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_6_fu_40666_p1.read()) + sc_biguint<15>(y_V_1_30_5_reg_63899.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_30_7_fu_40739_p2() {
    p_Val2_14_30_7_fu_40739_p2 = (!p_Val2_6_30_7_fu_40729_p1.read().is_01() || !y_V_1_30_6_fu_40687_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_30_7_fu_40729_p1.read()) + sc_biguint<15>(y_V_1_30_6_fu_40687_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_1_fu_7126_p2() {
    p_Val2_14_31_1_fu_7126_p2 = (!tmp_625_fu_7106_p1.read().is_01() || !p_Val2_7_30_fu_7060_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_625_fu_7106_p1.read()) + sc_biguint<14>(p_Val2_7_30_fu_7060_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_2_fu_17822_p2() {
    p_Val2_14_31_2_fu_17822_p2 = (!p_Val2_6_31_2_fu_17802_p1.read().is_01() || !y_V_1_31_1_cast_fu_17758_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_2_fu_17802_p1.read()) + sc_bigint<15>(y_V_1_31_1_cast_fu_17758_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_3_fu_17900_p2() {
    p_Val2_14_31_3_fu_17900_p2 = (!p_Val2_6_31_3_fu_17880_p1.read().is_01() || !y_V_1_31_2_fu_17836_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_3_fu_17880_p1.read()) + sc_biguint<15>(y_V_1_31_2_fu_17836_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_4_fu_30125_p2() {
    p_Val2_14_31_4_fu_30125_p2 = (!p_Val2_6_31_4_fu_30109_p1.read().is_01() || !y_V_1_31_3_reg_61519.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_4_fu_30109_p1.read()) + sc_biguint<15>(y_V_1_31_3_reg_61519.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_5_fu_30202_p2() {
    p_Val2_14_31_5_fu_30202_p2 = (!p_Val2_6_31_5_fu_30182_p1.read().is_01() || !y_V_1_31_4_fu_30138_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_5_fu_30182_p1.read()) + sc_biguint<15>(y_V_1_31_4_fu_30138_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_6_fu_40835_p2() {
    p_Val2_14_31_6_fu_40835_p2 = (!p_Val2_6_31_6_fu_40819_p1.read().is_01() || !y_V_1_31_5_reg_63933.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_6_fu_40819_p1.read()) + sc_biguint<15>(y_V_1_31_5_reg_63933.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_31_7_fu_40892_p2() {
    p_Val2_14_31_7_fu_40892_p2 = (!p_Val2_6_31_7_fu_40882_p1.read().is_01() || !y_V_1_31_6_fu_40840_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_31_7_fu_40882_p1.read()) + sc_biguint<15>(y_V_1_31_6_fu_40840_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_1_fu_7244_p2() {
    p_Val2_14_32_1_fu_7244_p2 = (!tmp_645_fu_7224_p1.read().is_01() || !p_Val2_7_31_fu_7178_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_645_fu_7224_p1.read()) + sc_biguint<14>(p_Val2_7_31_fu_7178_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_2_fu_18016_p2() {
    p_Val2_14_32_2_fu_18016_p2 = (!p_Val2_6_32_2_fu_17996_p1.read().is_01() || !y_V_1_32_1_cast_fu_17952_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_2_fu_17996_p1.read()) + sc_bigint<15>(y_V_1_32_1_cast_fu_17952_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_3_fu_18094_p2() {
    p_Val2_14_32_3_fu_18094_p2 = (!p_Val2_6_32_3_fu_18074_p1.read().is_01() || !y_V_1_32_2_fu_18030_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_3_fu_18074_p1.read()) + sc_biguint<15>(y_V_1_32_2_fu_18030_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_4_fu_30273_p2() {
    p_Val2_14_32_4_fu_30273_p2 = (!p_Val2_6_32_4_fu_30257_p1.read().is_01() || !y_V_1_32_3_reg_61553.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_4_fu_30257_p1.read()) + sc_biguint<15>(y_V_1_32_3_reg_61553.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_5_fu_30350_p2() {
    p_Val2_14_32_5_fu_30350_p2 = (!p_Val2_6_32_5_fu_30330_p1.read().is_01() || !y_V_1_32_4_fu_30286_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_5_fu_30330_p1.read()) + sc_biguint<15>(y_V_1_32_4_fu_30286_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_6_fu_40988_p2() {
    p_Val2_14_32_6_fu_40988_p2 = (!p_Val2_6_32_6_fu_40972_p1.read().is_01() || !y_V_1_32_5_reg_63967.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_6_fu_40972_p1.read()) + sc_biguint<15>(y_V_1_32_5_reg_63967.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_32_7_fu_41045_p2() {
    p_Val2_14_32_7_fu_41045_p2 = (!p_Val2_6_32_7_fu_41035_p1.read().is_01() || !y_V_1_32_6_fu_40993_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_32_7_fu_41035_p1.read()) + sc_biguint<15>(y_V_1_32_6_fu_40993_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_1_fu_7362_p2() {
    p_Val2_14_33_1_fu_7362_p2 = (!tmp_665_fu_7342_p1.read().is_01() || !p_Val2_7_32_fu_7296_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_665_fu_7342_p1.read()) + sc_biguint<14>(p_Val2_7_32_fu_7296_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_2_fu_18210_p2() {
    p_Val2_14_33_2_fu_18210_p2 = (!p_Val2_6_33_2_fu_18190_p1.read().is_01() || !y_V_1_33_1_cast_fu_18146_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_2_fu_18190_p1.read()) + sc_bigint<15>(y_V_1_33_1_cast_fu_18146_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_3_fu_18288_p2() {
    p_Val2_14_33_3_fu_18288_p2 = (!p_Val2_6_33_3_fu_18268_p1.read().is_01() || !y_V_1_33_2_fu_18224_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_3_fu_18268_p1.read()) + sc_biguint<15>(y_V_1_33_2_fu_18224_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_4_fu_30421_p2() {
    p_Val2_14_33_4_fu_30421_p2 = (!p_Val2_6_33_4_fu_30405_p1.read().is_01() || !y_V_1_33_3_reg_61587.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_4_fu_30405_p1.read()) + sc_biguint<15>(y_V_1_33_3_reg_61587.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_5_fu_30498_p2() {
    p_Val2_14_33_5_fu_30498_p2 = (!p_Val2_6_33_5_fu_30478_p1.read().is_01() || !y_V_1_33_4_fu_30434_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_5_fu_30478_p1.read()) + sc_biguint<15>(y_V_1_33_4_fu_30434_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_6_fu_41141_p2() {
    p_Val2_14_33_6_fu_41141_p2 = (!p_Val2_6_33_6_fu_41125_p1.read().is_01() || !y_V_1_33_5_reg_64001.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_6_fu_41125_p1.read()) + sc_biguint<15>(y_V_1_33_5_reg_64001.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_33_7_fu_41198_p2() {
    p_Val2_14_33_7_fu_41198_p2 = (!p_Val2_6_33_7_fu_41188_p1.read().is_01() || !y_V_1_33_6_fu_41146_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_33_7_fu_41188_p1.read()) + sc_biguint<15>(y_V_1_33_6_fu_41146_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_1_fu_7480_p2() {
    p_Val2_14_34_1_fu_7480_p2 = (!tmp_685_fu_7460_p1.read().is_01() || !p_Val2_7_33_fu_7414_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_685_fu_7460_p1.read()) + sc_biguint<14>(p_Val2_7_33_fu_7414_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_2_fu_18404_p2() {
    p_Val2_14_34_2_fu_18404_p2 = (!p_Val2_6_34_2_fu_18384_p1.read().is_01() || !y_V_1_34_1_cast_fu_18340_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_2_fu_18384_p1.read()) + sc_bigint<15>(y_V_1_34_1_cast_fu_18340_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_3_fu_18482_p2() {
    p_Val2_14_34_3_fu_18482_p2 = (!p_Val2_6_34_3_fu_18462_p1.read().is_01() || !y_V_1_34_2_fu_18418_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_3_fu_18462_p1.read()) + sc_biguint<15>(y_V_1_34_2_fu_18418_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_4_fu_30569_p2() {
    p_Val2_14_34_4_fu_30569_p2 = (!p_Val2_6_34_4_fu_30553_p1.read().is_01() || !y_V_1_34_3_reg_61621.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_4_fu_30553_p1.read()) + sc_biguint<15>(y_V_1_34_3_reg_61621.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_5_fu_30646_p2() {
    p_Val2_14_34_5_fu_30646_p2 = (!p_Val2_6_34_5_fu_30626_p1.read().is_01() || !y_V_1_34_4_fu_30582_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_5_fu_30626_p1.read()) + sc_biguint<15>(y_V_1_34_4_fu_30582_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_6_fu_41294_p2() {
    p_Val2_14_34_6_fu_41294_p2 = (!p_Val2_6_34_6_fu_41278_p1.read().is_01() || !y_V_1_34_5_reg_64035.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_6_fu_41278_p1.read()) + sc_biguint<15>(y_V_1_34_5_reg_64035.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_34_7_fu_41351_p2() {
    p_Val2_14_34_7_fu_41351_p2 = (!p_Val2_6_34_7_fu_41341_p1.read().is_01() || !y_V_1_34_6_fu_41299_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_34_7_fu_41341_p1.read()) + sc_biguint<15>(y_V_1_34_6_fu_41299_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_1_fu_7598_p2() {
    p_Val2_14_35_1_fu_7598_p2 = (!tmp_705_fu_7578_p1.read().is_01() || !p_Val2_7_34_fu_7532_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_705_fu_7578_p1.read()) + sc_biguint<14>(p_Val2_7_34_fu_7532_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_2_fu_18598_p2() {
    p_Val2_14_35_2_fu_18598_p2 = (!p_Val2_6_35_2_fu_18578_p1.read().is_01() || !y_V_1_35_1_cast_fu_18534_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_2_fu_18578_p1.read()) + sc_bigint<15>(y_V_1_35_1_cast_fu_18534_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_3_fu_18676_p2() {
    p_Val2_14_35_3_fu_18676_p2 = (!p_Val2_6_35_3_fu_18656_p1.read().is_01() || !y_V_1_35_2_fu_18612_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_3_fu_18656_p1.read()) + sc_biguint<15>(y_V_1_35_2_fu_18612_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_4_fu_30717_p2() {
    p_Val2_14_35_4_fu_30717_p2 = (!p_Val2_6_35_4_fu_30701_p1.read().is_01() || !y_V_1_35_3_reg_61655.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_4_fu_30701_p1.read()) + sc_biguint<15>(y_V_1_35_3_reg_61655.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_5_fu_30794_p2() {
    p_Val2_14_35_5_fu_30794_p2 = (!p_Val2_6_35_5_fu_30774_p1.read().is_01() || !y_V_1_35_4_fu_30730_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_5_fu_30774_p1.read()) + sc_biguint<15>(y_V_1_35_4_fu_30730_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_6_fu_41447_p2() {
    p_Val2_14_35_6_fu_41447_p2 = (!p_Val2_6_35_6_fu_41431_p1.read().is_01() || !y_V_1_35_5_reg_64069.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_6_fu_41431_p1.read()) + sc_biguint<15>(y_V_1_35_5_reg_64069.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_35_7_fu_41504_p2() {
    p_Val2_14_35_7_fu_41504_p2 = (!p_Val2_6_35_7_fu_41494_p1.read().is_01() || !y_V_1_35_6_fu_41452_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_35_7_fu_41494_p1.read()) + sc_biguint<15>(y_V_1_35_6_fu_41452_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_1_fu_7716_p2() {
    p_Val2_14_36_1_fu_7716_p2 = (!tmp_725_fu_7696_p1.read().is_01() || !p_Val2_7_35_fu_7650_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_725_fu_7696_p1.read()) + sc_biguint<14>(p_Val2_7_35_fu_7650_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_2_fu_18792_p2() {
    p_Val2_14_36_2_fu_18792_p2 = (!p_Val2_6_36_2_fu_18772_p1.read().is_01() || !y_V_1_36_1_cast_fu_18728_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_2_fu_18772_p1.read()) + sc_bigint<15>(y_V_1_36_1_cast_fu_18728_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_3_fu_18870_p2() {
    p_Val2_14_36_3_fu_18870_p2 = (!p_Val2_6_36_3_fu_18850_p1.read().is_01() || !y_V_1_36_2_fu_18806_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_3_fu_18850_p1.read()) + sc_biguint<15>(y_V_1_36_2_fu_18806_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_4_fu_30865_p2() {
    p_Val2_14_36_4_fu_30865_p2 = (!p_Val2_6_36_4_fu_30849_p1.read().is_01() || !y_V_1_36_3_reg_61689.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_4_fu_30849_p1.read()) + sc_biguint<15>(y_V_1_36_3_reg_61689.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_5_fu_30942_p2() {
    p_Val2_14_36_5_fu_30942_p2 = (!p_Val2_6_36_5_fu_30922_p1.read().is_01() || !y_V_1_36_4_fu_30878_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_5_fu_30922_p1.read()) + sc_biguint<15>(y_V_1_36_4_fu_30878_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_6_fu_41600_p2() {
    p_Val2_14_36_6_fu_41600_p2 = (!p_Val2_6_36_6_fu_41584_p1.read().is_01() || !y_V_1_36_5_reg_64103.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_6_fu_41584_p1.read()) + sc_biguint<15>(y_V_1_36_5_reg_64103.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_36_7_fu_41657_p2() {
    p_Val2_14_36_7_fu_41657_p2 = (!p_Val2_6_36_7_fu_41647_p1.read().is_01() || !y_V_1_36_6_fu_41605_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_36_7_fu_41647_p1.read()) + sc_biguint<15>(y_V_1_36_6_fu_41605_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_1_fu_7834_p2() {
    p_Val2_14_37_1_fu_7834_p2 = (!tmp_745_fu_7814_p1.read().is_01() || !p_Val2_7_36_fu_7768_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_745_fu_7814_p1.read()) + sc_biguint<14>(p_Val2_7_36_fu_7768_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_2_fu_18986_p2() {
    p_Val2_14_37_2_fu_18986_p2 = (!p_Val2_6_37_2_fu_18966_p1.read().is_01() || !y_V_1_37_1_cast_fu_18922_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_2_fu_18966_p1.read()) + sc_bigint<15>(y_V_1_37_1_cast_fu_18922_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_3_fu_19064_p2() {
    p_Val2_14_37_3_fu_19064_p2 = (!p_Val2_6_37_3_fu_19044_p1.read().is_01() || !y_V_1_37_2_fu_19000_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_3_fu_19044_p1.read()) + sc_biguint<15>(y_V_1_37_2_fu_19000_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_4_fu_31013_p2() {
    p_Val2_14_37_4_fu_31013_p2 = (!p_Val2_6_37_4_fu_30997_p1.read().is_01() || !y_V_1_37_3_reg_61723.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_4_fu_30997_p1.read()) + sc_biguint<15>(y_V_1_37_3_reg_61723.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_5_fu_31090_p2() {
    p_Val2_14_37_5_fu_31090_p2 = (!p_Val2_6_37_5_fu_31070_p1.read().is_01() || !y_V_1_37_4_fu_31026_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_5_fu_31070_p1.read()) + sc_biguint<15>(y_V_1_37_4_fu_31026_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_6_fu_41753_p2() {
    p_Val2_14_37_6_fu_41753_p2 = (!p_Val2_6_37_6_fu_41737_p1.read().is_01() || !y_V_1_37_5_reg_64137.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_6_fu_41737_p1.read()) + sc_biguint<15>(y_V_1_37_5_reg_64137.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_37_7_fu_41810_p2() {
    p_Val2_14_37_7_fu_41810_p2 = (!p_Val2_6_37_7_fu_41800_p1.read().is_01() || !y_V_1_37_6_fu_41758_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_37_7_fu_41800_p1.read()) + sc_biguint<15>(y_V_1_37_6_fu_41758_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_1_fu_7952_p2() {
    p_Val2_14_38_1_fu_7952_p2 = (!tmp_765_fu_7932_p1.read().is_01() || !p_Val2_7_37_fu_7886_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_765_fu_7932_p1.read()) + sc_biguint<14>(p_Val2_7_37_fu_7886_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_2_fu_19180_p2() {
    p_Val2_14_38_2_fu_19180_p2 = (!p_Val2_6_38_2_fu_19160_p1.read().is_01() || !y_V_1_38_1_cast_fu_19116_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_2_fu_19160_p1.read()) + sc_bigint<15>(y_V_1_38_1_cast_fu_19116_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_3_fu_19258_p2() {
    p_Val2_14_38_3_fu_19258_p2 = (!p_Val2_6_38_3_fu_19238_p1.read().is_01() || !y_V_1_38_2_fu_19194_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_3_fu_19238_p1.read()) + sc_biguint<15>(y_V_1_38_2_fu_19194_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_4_fu_31161_p2() {
    p_Val2_14_38_4_fu_31161_p2 = (!p_Val2_6_38_4_fu_31145_p1.read().is_01() || !y_V_1_38_3_reg_61757.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_4_fu_31145_p1.read()) + sc_biguint<15>(y_V_1_38_3_reg_61757.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_5_fu_31238_p2() {
    p_Val2_14_38_5_fu_31238_p2 = (!p_Val2_6_38_5_fu_31218_p1.read().is_01() || !y_V_1_38_4_fu_31174_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_5_fu_31218_p1.read()) + sc_biguint<15>(y_V_1_38_4_fu_31174_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_6_fu_41906_p2() {
    p_Val2_14_38_6_fu_41906_p2 = (!p_Val2_6_38_6_fu_41890_p1.read().is_01() || !y_V_1_38_5_reg_64171.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_6_fu_41890_p1.read()) + sc_biguint<15>(y_V_1_38_5_reg_64171.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_38_7_fu_41963_p2() {
    p_Val2_14_38_7_fu_41963_p2 = (!p_Val2_6_38_7_fu_41953_p1.read().is_01() || !y_V_1_38_6_fu_41911_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_38_7_fu_41953_p1.read()) + sc_biguint<15>(y_V_1_38_6_fu_41911_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_1_fu_8070_p2() {
    p_Val2_14_39_1_fu_8070_p2 = (!tmp_785_fu_8050_p1.read().is_01() || !p_Val2_7_38_fu_8004_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_785_fu_8050_p1.read()) + sc_biguint<14>(p_Val2_7_38_fu_8004_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_2_fu_19374_p2() {
    p_Val2_14_39_2_fu_19374_p2 = (!p_Val2_6_39_2_fu_19354_p1.read().is_01() || !y_V_1_39_1_cast_fu_19310_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_2_fu_19354_p1.read()) + sc_bigint<15>(y_V_1_39_1_cast_fu_19310_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_3_fu_19452_p2() {
    p_Val2_14_39_3_fu_19452_p2 = (!p_Val2_6_39_3_fu_19432_p1.read().is_01() || !y_V_1_39_2_fu_19388_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_3_fu_19432_p1.read()) + sc_biguint<15>(y_V_1_39_2_fu_19388_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_4_fu_31309_p2() {
    p_Val2_14_39_4_fu_31309_p2 = (!p_Val2_6_39_4_fu_31293_p1.read().is_01() || !y_V_1_39_3_reg_61791.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_4_fu_31293_p1.read()) + sc_biguint<15>(y_V_1_39_3_reg_61791.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_5_fu_31386_p2() {
    p_Val2_14_39_5_fu_31386_p2 = (!p_Val2_6_39_5_fu_31366_p1.read().is_01() || !y_V_1_39_4_fu_31322_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_5_fu_31366_p1.read()) + sc_biguint<15>(y_V_1_39_4_fu_31322_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_6_fu_42059_p2() {
    p_Val2_14_39_6_fu_42059_p2 = (!p_Val2_6_39_6_fu_42043_p1.read().is_01() || !y_V_1_39_5_reg_64205.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_6_fu_42043_p1.read()) + sc_biguint<15>(y_V_1_39_5_reg_64205.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_39_7_fu_42116_p2() {
    p_Val2_14_39_7_fu_42116_p2 = (!p_Val2_6_39_7_fu_42106_p1.read().is_01() || !y_V_1_39_6_fu_42064_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_39_7_fu_42106_p1.read()) + sc_biguint<15>(y_V_1_39_6_fu_42064_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_1_fu_3822_p2() {
    p_Val2_14_3_1_fu_3822_p2 = (!tmp_65_fu_3802_p1.read().is_01() || !p_Val2_7_3_fu_3756_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_65_fu_3802_p1.read()) + sc_biguint<14>(p_Val2_7_3_fu_3756_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_2_fu_12390_p2() {
    p_Val2_14_3_2_fu_12390_p2 = (!p_Val2_6_3_2_fu_12370_p1.read().is_01() || !y_V_1_3_1_cast_fu_12326_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_2_fu_12370_p1.read()) + sc_bigint<15>(y_V_1_3_1_cast_fu_12326_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_3_fu_12468_p2() {
    p_Val2_14_3_3_fu_12468_p2 = (!p_Val2_6_3_3_fu_12448_p1.read().is_01() || !y_V_1_3_2_fu_12404_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_3_fu_12448_p1.read()) + sc_biguint<15>(y_V_1_3_2_fu_12404_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_4_fu_25981_p2() {
    p_Val2_14_3_4_fu_25981_p2 = (!p_Val2_6_3_4_fu_25965_p1.read().is_01() || !y_V_1_3_3_reg_60567.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_4_fu_25965_p1.read()) + sc_biguint<15>(y_V_1_3_3_reg_60567.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_5_fu_26058_p2() {
    p_Val2_14_3_5_fu_26058_p2 = (!p_Val2_6_3_5_fu_26038_p1.read().is_01() || !y_V_1_3_4_fu_25994_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_5_fu_26038_p1.read()) + sc_biguint<15>(y_V_1_3_4_fu_25994_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_6_fu_36551_p2() {
    p_Val2_14_3_6_fu_36551_p2 = (!p_Val2_6_3_6_fu_36535_p1.read().is_01() || !y_V_1_3_5_reg_62981.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_6_fu_36535_p1.read()) + sc_biguint<15>(y_V_1_3_5_reg_62981.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_3_7_fu_36608_p2() {
    p_Val2_14_3_7_fu_36608_p2 = (!p_Val2_6_3_7_fu_36598_p1.read().is_01() || !y_V_1_3_6_fu_36556_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_3_7_fu_36598_p1.read()) + sc_biguint<15>(y_V_1_3_6_fu_36556_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_1_fu_8188_p2() {
    p_Val2_14_40_1_fu_8188_p2 = (!tmp_805_fu_8168_p1.read().is_01() || !p_Val2_7_39_fu_8122_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_805_fu_8168_p1.read()) + sc_biguint<14>(p_Val2_7_39_fu_8122_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_2_fu_19568_p2() {
    p_Val2_14_40_2_fu_19568_p2 = (!p_Val2_6_40_2_fu_19548_p1.read().is_01() || !y_V_1_40_1_cast_fu_19504_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_2_fu_19548_p1.read()) + sc_bigint<15>(y_V_1_40_1_cast_fu_19504_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_3_fu_19646_p2() {
    p_Val2_14_40_3_fu_19646_p2 = (!p_Val2_6_40_3_fu_19626_p1.read().is_01() || !y_V_1_40_2_fu_19582_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_3_fu_19626_p1.read()) + sc_biguint<15>(y_V_1_40_2_fu_19582_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_4_fu_31457_p2() {
    p_Val2_14_40_4_fu_31457_p2 = (!p_Val2_6_40_4_fu_31441_p1.read().is_01() || !y_V_1_40_3_reg_61825.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_4_fu_31441_p1.read()) + sc_biguint<15>(y_V_1_40_3_reg_61825.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_5_fu_31534_p2() {
    p_Val2_14_40_5_fu_31534_p2 = (!p_Val2_6_40_5_fu_31514_p1.read().is_01() || !y_V_1_40_4_fu_31470_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_5_fu_31514_p1.read()) + sc_biguint<15>(y_V_1_40_4_fu_31470_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_6_fu_42212_p2() {
    p_Val2_14_40_6_fu_42212_p2 = (!p_Val2_6_40_6_fu_42196_p1.read().is_01() || !y_V_1_40_5_reg_64239.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_6_fu_42196_p1.read()) + sc_biguint<15>(y_V_1_40_5_reg_64239.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_40_7_fu_42269_p2() {
    p_Val2_14_40_7_fu_42269_p2 = (!p_Val2_6_40_7_fu_42259_p1.read().is_01() || !y_V_1_40_6_fu_42217_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_40_7_fu_42259_p1.read()) + sc_biguint<15>(y_V_1_40_6_fu_42217_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_1_fu_8306_p2() {
    p_Val2_14_41_1_fu_8306_p2 = (!tmp_825_fu_8286_p1.read().is_01() || !p_Val2_7_40_fu_8240_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_825_fu_8286_p1.read()) + sc_biguint<14>(p_Val2_7_40_fu_8240_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_2_fu_19762_p2() {
    p_Val2_14_41_2_fu_19762_p2 = (!p_Val2_6_41_2_fu_19742_p1.read().is_01() || !y_V_1_41_1_cast_fu_19698_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_2_fu_19742_p1.read()) + sc_bigint<15>(y_V_1_41_1_cast_fu_19698_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_3_fu_19840_p2() {
    p_Val2_14_41_3_fu_19840_p2 = (!p_Val2_6_41_3_fu_19820_p1.read().is_01() || !y_V_1_41_2_fu_19776_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_3_fu_19820_p1.read()) + sc_biguint<15>(y_V_1_41_2_fu_19776_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_4_fu_31605_p2() {
    p_Val2_14_41_4_fu_31605_p2 = (!p_Val2_6_41_4_fu_31589_p1.read().is_01() || !y_V_1_41_3_reg_61859.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_4_fu_31589_p1.read()) + sc_biguint<15>(y_V_1_41_3_reg_61859.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_5_fu_31682_p2() {
    p_Val2_14_41_5_fu_31682_p2 = (!p_Val2_6_41_5_fu_31662_p1.read().is_01() || !y_V_1_41_4_fu_31618_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_5_fu_31662_p1.read()) + sc_biguint<15>(y_V_1_41_4_fu_31618_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_6_fu_42365_p2() {
    p_Val2_14_41_6_fu_42365_p2 = (!p_Val2_6_41_6_fu_42349_p1.read().is_01() || !y_V_1_41_5_reg_64273.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_6_fu_42349_p1.read()) + sc_biguint<15>(y_V_1_41_5_reg_64273.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_41_7_fu_42422_p2() {
    p_Val2_14_41_7_fu_42422_p2 = (!p_Val2_6_41_7_fu_42412_p1.read().is_01() || !y_V_1_41_6_fu_42370_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_41_7_fu_42412_p1.read()) + sc_biguint<15>(y_V_1_41_6_fu_42370_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_1_fu_8424_p2() {
    p_Val2_14_42_1_fu_8424_p2 = (!tmp_845_fu_8404_p1.read().is_01() || !p_Val2_7_41_fu_8358_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_845_fu_8404_p1.read()) + sc_biguint<14>(p_Val2_7_41_fu_8358_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_2_fu_19956_p2() {
    p_Val2_14_42_2_fu_19956_p2 = (!p_Val2_6_42_2_fu_19936_p1.read().is_01() || !y_V_1_42_1_cast_fu_19892_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_2_fu_19936_p1.read()) + sc_bigint<15>(y_V_1_42_1_cast_fu_19892_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_3_fu_20034_p2() {
    p_Val2_14_42_3_fu_20034_p2 = (!p_Val2_6_42_3_fu_20014_p1.read().is_01() || !y_V_1_42_2_fu_19970_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_3_fu_20014_p1.read()) + sc_biguint<15>(y_V_1_42_2_fu_19970_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_4_fu_31753_p2() {
    p_Val2_14_42_4_fu_31753_p2 = (!p_Val2_6_42_4_fu_31737_p1.read().is_01() || !y_V_1_42_3_reg_61893.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_4_fu_31737_p1.read()) + sc_biguint<15>(y_V_1_42_3_reg_61893.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_5_fu_31830_p2() {
    p_Val2_14_42_5_fu_31830_p2 = (!p_Val2_6_42_5_fu_31810_p1.read().is_01() || !y_V_1_42_4_fu_31766_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_5_fu_31810_p1.read()) + sc_biguint<15>(y_V_1_42_4_fu_31766_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_6_fu_42518_p2() {
    p_Val2_14_42_6_fu_42518_p2 = (!p_Val2_6_42_6_fu_42502_p1.read().is_01() || !y_V_1_42_5_reg_64307.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_6_fu_42502_p1.read()) + sc_biguint<15>(y_V_1_42_5_reg_64307.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_42_7_fu_42575_p2() {
    p_Val2_14_42_7_fu_42575_p2 = (!p_Val2_6_42_7_fu_42565_p1.read().is_01() || !y_V_1_42_6_fu_42523_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_42_7_fu_42565_p1.read()) + sc_biguint<15>(y_V_1_42_6_fu_42523_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_1_fu_8542_p2() {
    p_Val2_14_43_1_fu_8542_p2 = (!tmp_865_fu_8522_p1.read().is_01() || !p_Val2_7_42_fu_8476_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_865_fu_8522_p1.read()) + sc_biguint<14>(p_Val2_7_42_fu_8476_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_2_fu_20150_p2() {
    p_Val2_14_43_2_fu_20150_p2 = (!p_Val2_6_43_2_fu_20130_p1.read().is_01() || !y_V_1_43_1_cast_fu_20086_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_2_fu_20130_p1.read()) + sc_bigint<15>(y_V_1_43_1_cast_fu_20086_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_3_fu_20228_p2() {
    p_Val2_14_43_3_fu_20228_p2 = (!p_Val2_6_43_3_fu_20208_p1.read().is_01() || !y_V_1_43_2_fu_20164_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_3_fu_20208_p1.read()) + sc_biguint<15>(y_V_1_43_2_fu_20164_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_4_fu_31901_p2() {
    p_Val2_14_43_4_fu_31901_p2 = (!p_Val2_6_43_4_fu_31885_p1.read().is_01() || !y_V_1_43_3_reg_61927.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_4_fu_31885_p1.read()) + sc_biguint<15>(y_V_1_43_3_reg_61927.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_5_fu_31978_p2() {
    p_Val2_14_43_5_fu_31978_p2 = (!p_Val2_6_43_5_fu_31958_p1.read().is_01() || !y_V_1_43_4_fu_31914_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_5_fu_31958_p1.read()) + sc_biguint<15>(y_V_1_43_4_fu_31914_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_6_fu_42671_p2() {
    p_Val2_14_43_6_fu_42671_p2 = (!p_Val2_6_43_6_fu_42655_p1.read().is_01() || !y_V_1_43_5_reg_64341.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_6_fu_42655_p1.read()) + sc_biguint<15>(y_V_1_43_5_reg_64341.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_43_7_fu_42728_p2() {
    p_Val2_14_43_7_fu_42728_p2 = (!p_Val2_6_43_7_fu_42718_p1.read().is_01() || !y_V_1_43_6_fu_42676_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_43_7_fu_42718_p1.read()) + sc_biguint<15>(y_V_1_43_6_fu_42676_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_1_fu_8660_p2() {
    p_Val2_14_44_1_fu_8660_p2 = (!tmp_885_fu_8640_p1.read().is_01() || !p_Val2_7_43_fu_8594_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_885_fu_8640_p1.read()) + sc_biguint<14>(p_Val2_7_43_fu_8594_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_2_fu_20344_p2() {
    p_Val2_14_44_2_fu_20344_p2 = (!p_Val2_6_44_2_fu_20324_p1.read().is_01() || !y_V_1_44_1_cast_fu_20280_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_2_fu_20324_p1.read()) + sc_bigint<15>(y_V_1_44_1_cast_fu_20280_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_3_fu_20422_p2() {
    p_Val2_14_44_3_fu_20422_p2 = (!p_Val2_6_44_3_fu_20402_p1.read().is_01() || !y_V_1_44_2_fu_20358_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_3_fu_20402_p1.read()) + sc_biguint<15>(y_V_1_44_2_fu_20358_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_4_fu_32049_p2() {
    p_Val2_14_44_4_fu_32049_p2 = (!p_Val2_6_44_4_fu_32033_p1.read().is_01() || !y_V_1_44_3_reg_61961.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_4_fu_32033_p1.read()) + sc_biguint<15>(y_V_1_44_3_reg_61961.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_5_fu_32126_p2() {
    p_Val2_14_44_5_fu_32126_p2 = (!p_Val2_6_44_5_fu_32106_p1.read().is_01() || !y_V_1_44_4_fu_32062_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_5_fu_32106_p1.read()) + sc_biguint<15>(y_V_1_44_4_fu_32062_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_6_fu_42824_p2() {
    p_Val2_14_44_6_fu_42824_p2 = (!p_Val2_6_44_6_fu_42808_p1.read().is_01() || !y_V_1_44_5_reg_64375.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_6_fu_42808_p1.read()) + sc_biguint<15>(y_V_1_44_5_reg_64375.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_44_7_fu_42881_p2() {
    p_Val2_14_44_7_fu_42881_p2 = (!p_Val2_6_44_7_fu_42871_p1.read().is_01() || !y_V_1_44_6_fu_42829_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_44_7_fu_42871_p1.read()) + sc_biguint<15>(y_V_1_44_6_fu_42829_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_1_fu_8778_p2() {
    p_Val2_14_45_1_fu_8778_p2 = (!tmp_905_fu_8758_p1.read().is_01() || !p_Val2_7_44_fu_8712_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_905_fu_8758_p1.read()) + sc_biguint<14>(p_Val2_7_44_fu_8712_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_2_fu_20538_p2() {
    p_Val2_14_45_2_fu_20538_p2 = (!p_Val2_6_45_2_fu_20518_p1.read().is_01() || !y_V_1_45_1_cast_fu_20474_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_2_fu_20518_p1.read()) + sc_bigint<15>(y_V_1_45_1_cast_fu_20474_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_3_fu_20616_p2() {
    p_Val2_14_45_3_fu_20616_p2 = (!p_Val2_6_45_3_fu_20596_p1.read().is_01() || !y_V_1_45_2_fu_20552_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_3_fu_20596_p1.read()) + sc_biguint<15>(y_V_1_45_2_fu_20552_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_4_fu_32197_p2() {
    p_Val2_14_45_4_fu_32197_p2 = (!p_Val2_6_45_4_fu_32181_p1.read().is_01() || !y_V_1_45_3_reg_61995.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_4_fu_32181_p1.read()) + sc_biguint<15>(y_V_1_45_3_reg_61995.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_5_fu_32274_p2() {
    p_Val2_14_45_5_fu_32274_p2 = (!p_Val2_6_45_5_fu_32254_p1.read().is_01() || !y_V_1_45_4_fu_32210_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_5_fu_32254_p1.read()) + sc_biguint<15>(y_V_1_45_4_fu_32210_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_6_fu_42977_p2() {
    p_Val2_14_45_6_fu_42977_p2 = (!p_Val2_6_45_6_fu_42961_p1.read().is_01() || !y_V_1_45_5_reg_64409.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_6_fu_42961_p1.read()) + sc_biguint<15>(y_V_1_45_5_reg_64409.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_45_7_fu_43034_p2() {
    p_Val2_14_45_7_fu_43034_p2 = (!p_Val2_6_45_7_fu_43024_p1.read().is_01() || !y_V_1_45_6_fu_42982_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_45_7_fu_43024_p1.read()) + sc_biguint<15>(y_V_1_45_6_fu_42982_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_1_fu_8896_p2() {
    p_Val2_14_46_1_fu_8896_p2 = (!tmp_925_fu_8876_p1.read().is_01() || !p_Val2_7_45_fu_8830_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_925_fu_8876_p1.read()) + sc_biguint<14>(p_Val2_7_45_fu_8830_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_2_fu_20732_p2() {
    p_Val2_14_46_2_fu_20732_p2 = (!p_Val2_6_46_2_fu_20712_p1.read().is_01() || !y_V_1_46_1_cast_fu_20668_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_2_fu_20712_p1.read()) + sc_bigint<15>(y_V_1_46_1_cast_fu_20668_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_3_fu_20810_p2() {
    p_Val2_14_46_3_fu_20810_p2 = (!p_Val2_6_46_3_fu_20790_p1.read().is_01() || !y_V_1_46_2_fu_20746_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_3_fu_20790_p1.read()) + sc_biguint<15>(y_V_1_46_2_fu_20746_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_4_fu_32345_p2() {
    p_Val2_14_46_4_fu_32345_p2 = (!p_Val2_6_46_4_fu_32329_p1.read().is_01() || !y_V_1_46_3_reg_62029.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_4_fu_32329_p1.read()) + sc_biguint<15>(y_V_1_46_3_reg_62029.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_5_fu_32422_p2() {
    p_Val2_14_46_5_fu_32422_p2 = (!p_Val2_6_46_5_fu_32402_p1.read().is_01() || !y_V_1_46_4_fu_32358_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_5_fu_32402_p1.read()) + sc_biguint<15>(y_V_1_46_4_fu_32358_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_6_fu_43130_p2() {
    p_Val2_14_46_6_fu_43130_p2 = (!p_Val2_6_46_6_fu_43114_p1.read().is_01() || !y_V_1_46_5_reg_64443.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_6_fu_43114_p1.read()) + sc_biguint<15>(y_V_1_46_5_reg_64443.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_46_7_fu_43187_p2() {
    p_Val2_14_46_7_fu_43187_p2 = (!p_Val2_6_46_7_fu_43177_p1.read().is_01() || !y_V_1_46_6_fu_43135_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_46_7_fu_43177_p1.read()) + sc_biguint<15>(y_V_1_46_6_fu_43135_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_1_fu_9014_p2() {
    p_Val2_14_47_1_fu_9014_p2 = (!tmp_945_fu_8994_p1.read().is_01() || !p_Val2_7_46_fu_8948_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_945_fu_8994_p1.read()) + sc_biguint<14>(p_Val2_7_46_fu_8948_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_2_fu_20926_p2() {
    p_Val2_14_47_2_fu_20926_p2 = (!p_Val2_6_47_2_fu_20906_p1.read().is_01() || !y_V_1_47_1_cast_fu_20862_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_2_fu_20906_p1.read()) + sc_bigint<15>(y_V_1_47_1_cast_fu_20862_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_3_fu_21004_p2() {
    p_Val2_14_47_3_fu_21004_p2 = (!p_Val2_6_47_3_fu_20984_p1.read().is_01() || !y_V_1_47_2_fu_20940_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_3_fu_20984_p1.read()) + sc_biguint<15>(y_V_1_47_2_fu_20940_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_4_fu_32493_p2() {
    p_Val2_14_47_4_fu_32493_p2 = (!p_Val2_6_47_4_fu_32477_p1.read().is_01() || !y_V_1_47_3_reg_62063.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_4_fu_32477_p1.read()) + sc_biguint<15>(y_V_1_47_3_reg_62063.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_5_fu_32570_p2() {
    p_Val2_14_47_5_fu_32570_p2 = (!p_Val2_6_47_5_fu_32550_p1.read().is_01() || !y_V_1_47_4_fu_32506_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_5_fu_32550_p1.read()) + sc_biguint<15>(y_V_1_47_4_fu_32506_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_6_fu_43283_p2() {
    p_Val2_14_47_6_fu_43283_p2 = (!p_Val2_6_47_6_fu_43267_p1.read().is_01() || !y_V_1_47_5_reg_64477.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_6_fu_43267_p1.read()) + sc_biguint<15>(y_V_1_47_5_reg_64477.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_47_7_fu_43340_p2() {
    p_Val2_14_47_7_fu_43340_p2 = (!p_Val2_6_47_7_fu_43330_p1.read().is_01() || !y_V_1_47_6_fu_43288_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_47_7_fu_43330_p1.read()) + sc_biguint<15>(y_V_1_47_6_fu_43288_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_1_fu_9132_p2() {
    p_Val2_14_48_1_fu_9132_p2 = (!tmp_965_fu_9112_p1.read().is_01() || !p_Val2_7_47_fu_9066_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_965_fu_9112_p1.read()) + sc_biguint<14>(p_Val2_7_47_fu_9066_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_2_fu_21120_p2() {
    p_Val2_14_48_2_fu_21120_p2 = (!p_Val2_6_48_2_fu_21100_p1.read().is_01() || !y_V_1_48_1_cast_fu_21056_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_2_fu_21100_p1.read()) + sc_bigint<15>(y_V_1_48_1_cast_fu_21056_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_3_fu_21198_p2() {
    p_Val2_14_48_3_fu_21198_p2 = (!p_Val2_6_48_3_fu_21178_p1.read().is_01() || !y_V_1_48_2_fu_21134_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_3_fu_21178_p1.read()) + sc_biguint<15>(y_V_1_48_2_fu_21134_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_4_fu_32641_p2() {
    p_Val2_14_48_4_fu_32641_p2 = (!p_Val2_6_48_4_fu_32625_p1.read().is_01() || !y_V_1_48_3_reg_62097.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_4_fu_32625_p1.read()) + sc_biguint<15>(y_V_1_48_3_reg_62097.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_5_fu_32718_p2() {
    p_Val2_14_48_5_fu_32718_p2 = (!p_Val2_6_48_5_fu_32698_p1.read().is_01() || !y_V_1_48_4_fu_32654_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_5_fu_32698_p1.read()) + sc_biguint<15>(y_V_1_48_4_fu_32654_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_6_fu_43436_p2() {
    p_Val2_14_48_6_fu_43436_p2 = (!p_Val2_6_48_6_fu_43420_p1.read().is_01() || !y_V_1_48_5_reg_64511.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_6_fu_43420_p1.read()) + sc_biguint<15>(y_V_1_48_5_reg_64511.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_48_7_fu_43493_p2() {
    p_Val2_14_48_7_fu_43493_p2 = (!p_Val2_6_48_7_fu_43483_p1.read().is_01() || !y_V_1_48_6_fu_43441_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_48_7_fu_43483_p1.read()) + sc_biguint<15>(y_V_1_48_6_fu_43441_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_1_fu_9250_p2() {
    p_Val2_14_49_1_fu_9250_p2 = (!tmp_985_fu_9230_p1.read().is_01() || !p_Val2_7_48_fu_9184_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_985_fu_9230_p1.read()) + sc_biguint<14>(p_Val2_7_48_fu_9184_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_2_fu_21314_p2() {
    p_Val2_14_49_2_fu_21314_p2 = (!p_Val2_6_49_2_fu_21294_p1.read().is_01() || !y_V_1_49_1_cast_fu_21250_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_2_fu_21294_p1.read()) + sc_bigint<15>(y_V_1_49_1_cast_fu_21250_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_3_fu_21392_p2() {
    p_Val2_14_49_3_fu_21392_p2 = (!p_Val2_6_49_3_fu_21372_p1.read().is_01() || !y_V_1_49_2_fu_21328_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_3_fu_21372_p1.read()) + sc_biguint<15>(y_V_1_49_2_fu_21328_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_4_fu_32789_p2() {
    p_Val2_14_49_4_fu_32789_p2 = (!p_Val2_6_49_4_fu_32773_p1.read().is_01() || !y_V_1_49_3_reg_62131.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_4_fu_32773_p1.read()) + sc_biguint<15>(y_V_1_49_3_reg_62131.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_5_fu_32866_p2() {
    p_Val2_14_49_5_fu_32866_p2 = (!p_Val2_6_49_5_fu_32846_p1.read().is_01() || !y_V_1_49_4_fu_32802_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_5_fu_32846_p1.read()) + sc_biguint<15>(y_V_1_49_4_fu_32802_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_6_fu_43589_p2() {
    p_Val2_14_49_6_fu_43589_p2 = (!p_Val2_6_49_6_fu_43573_p1.read().is_01() || !y_V_1_49_5_reg_64545.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_6_fu_43573_p1.read()) + sc_biguint<15>(y_V_1_49_5_reg_64545.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_49_7_fu_43646_p2() {
    p_Val2_14_49_7_fu_43646_p2 = (!p_Val2_6_49_7_fu_43636_p1.read().is_01() || !y_V_1_49_6_fu_43594_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_49_7_fu_43636_p1.read()) + sc_biguint<15>(y_V_1_49_6_fu_43594_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_1_fu_3940_p2() {
    p_Val2_14_4_1_fu_3940_p2 = (!tmp_85_fu_3920_p1.read().is_01() || !p_Val2_7_4_fu_3874_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_85_fu_3920_p1.read()) + sc_biguint<14>(p_Val2_7_4_fu_3874_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_2_fu_12584_p2() {
    p_Val2_14_4_2_fu_12584_p2 = (!p_Val2_6_4_2_fu_12564_p1.read().is_01() || !y_V_1_4_1_cast_fu_12520_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_2_fu_12564_p1.read()) + sc_bigint<15>(y_V_1_4_1_cast_fu_12520_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_3_fu_12662_p2() {
    p_Val2_14_4_3_fu_12662_p2 = (!p_Val2_6_4_3_fu_12642_p1.read().is_01() || !y_V_1_4_2_fu_12598_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_3_fu_12642_p1.read()) + sc_biguint<15>(y_V_1_4_2_fu_12598_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_4_fu_26129_p2() {
    p_Val2_14_4_4_fu_26129_p2 = (!p_Val2_6_4_4_fu_26113_p1.read().is_01() || !y_V_1_4_3_reg_60601.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_4_fu_26113_p1.read()) + sc_biguint<15>(y_V_1_4_3_reg_60601.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_5_fu_26206_p2() {
    p_Val2_14_4_5_fu_26206_p2 = (!p_Val2_6_4_5_fu_26186_p1.read().is_01() || !y_V_1_4_4_fu_26142_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_5_fu_26186_p1.read()) + sc_biguint<15>(y_V_1_4_4_fu_26142_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_6_fu_36704_p2() {
    p_Val2_14_4_6_fu_36704_p2 = (!p_Val2_6_4_6_fu_36688_p1.read().is_01() || !y_V_1_4_5_reg_63015.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_6_fu_36688_p1.read()) + sc_biguint<15>(y_V_1_4_5_reg_63015.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_4_7_fu_36761_p2() {
    p_Val2_14_4_7_fu_36761_p2 = (!p_Val2_6_4_7_fu_36751_p1.read().is_01() || !y_V_1_4_6_fu_36709_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_4_7_fu_36751_p1.read()) + sc_biguint<15>(y_V_1_4_6_fu_36709_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_1_fu_9368_p2() {
    p_Val2_14_50_1_fu_9368_p2 = (!tmp_1005_fu_9348_p1.read().is_01() || !p_Val2_7_49_fu_9302_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1005_fu_9348_p1.read()) + sc_biguint<14>(p_Val2_7_49_fu_9302_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_2_fu_21508_p2() {
    p_Val2_14_50_2_fu_21508_p2 = (!p_Val2_6_50_2_fu_21488_p1.read().is_01() || !y_V_1_50_1_cast_fu_21444_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_2_fu_21488_p1.read()) + sc_bigint<15>(y_V_1_50_1_cast_fu_21444_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_3_fu_21586_p2() {
    p_Val2_14_50_3_fu_21586_p2 = (!p_Val2_6_50_3_fu_21566_p1.read().is_01() || !y_V_1_50_2_fu_21522_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_3_fu_21566_p1.read()) + sc_biguint<15>(y_V_1_50_2_fu_21522_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_4_fu_32937_p2() {
    p_Val2_14_50_4_fu_32937_p2 = (!p_Val2_6_50_4_fu_32921_p1.read().is_01() || !y_V_1_50_3_reg_62165.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_4_fu_32921_p1.read()) + sc_biguint<15>(y_V_1_50_3_reg_62165.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_5_fu_33014_p2() {
    p_Val2_14_50_5_fu_33014_p2 = (!p_Val2_6_50_5_fu_32994_p1.read().is_01() || !y_V_1_50_4_fu_32950_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_5_fu_32994_p1.read()) + sc_biguint<15>(y_V_1_50_4_fu_32950_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_6_fu_43742_p2() {
    p_Val2_14_50_6_fu_43742_p2 = (!p_Val2_6_50_6_fu_43726_p1.read().is_01() || !y_V_1_50_5_reg_64579.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_6_fu_43726_p1.read()) + sc_biguint<15>(y_V_1_50_5_reg_64579.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_50_7_fu_43799_p2() {
    p_Val2_14_50_7_fu_43799_p2 = (!p_Val2_6_50_7_fu_43789_p1.read().is_01() || !y_V_1_50_6_fu_43747_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_50_7_fu_43789_p1.read()) + sc_biguint<15>(y_V_1_50_6_fu_43747_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_1_fu_9486_p2() {
    p_Val2_14_51_1_fu_9486_p2 = (!tmp_1025_fu_9466_p1.read().is_01() || !p_Val2_7_50_fu_9420_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1025_fu_9466_p1.read()) + sc_biguint<14>(p_Val2_7_50_fu_9420_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_2_fu_21702_p2() {
    p_Val2_14_51_2_fu_21702_p2 = (!p_Val2_6_51_2_fu_21682_p1.read().is_01() || !y_V_1_51_1_cast_fu_21638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_2_fu_21682_p1.read()) + sc_bigint<15>(y_V_1_51_1_cast_fu_21638_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_3_fu_21780_p2() {
    p_Val2_14_51_3_fu_21780_p2 = (!p_Val2_6_51_3_fu_21760_p1.read().is_01() || !y_V_1_51_2_fu_21716_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_3_fu_21760_p1.read()) + sc_biguint<15>(y_V_1_51_2_fu_21716_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_4_fu_33085_p2() {
    p_Val2_14_51_4_fu_33085_p2 = (!p_Val2_6_51_4_fu_33069_p1.read().is_01() || !y_V_1_51_3_reg_62199.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_4_fu_33069_p1.read()) + sc_biguint<15>(y_V_1_51_3_reg_62199.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_5_fu_33162_p2() {
    p_Val2_14_51_5_fu_33162_p2 = (!p_Val2_6_51_5_fu_33142_p1.read().is_01() || !y_V_1_51_4_fu_33098_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_5_fu_33142_p1.read()) + sc_biguint<15>(y_V_1_51_4_fu_33098_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_6_fu_43895_p2() {
    p_Val2_14_51_6_fu_43895_p2 = (!p_Val2_6_51_6_fu_43879_p1.read().is_01() || !y_V_1_51_5_reg_64613.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_6_fu_43879_p1.read()) + sc_biguint<15>(y_V_1_51_5_reg_64613.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_51_7_fu_43952_p2() {
    p_Val2_14_51_7_fu_43952_p2 = (!p_Val2_6_51_7_fu_43942_p1.read().is_01() || !y_V_1_51_6_fu_43900_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_51_7_fu_43942_p1.read()) + sc_biguint<15>(y_V_1_51_6_fu_43900_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_1_fu_9604_p2() {
    p_Val2_14_52_1_fu_9604_p2 = (!tmp_1045_fu_9584_p1.read().is_01() || !p_Val2_7_51_fu_9538_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1045_fu_9584_p1.read()) + sc_biguint<14>(p_Val2_7_51_fu_9538_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_2_fu_21896_p2() {
    p_Val2_14_52_2_fu_21896_p2 = (!p_Val2_6_52_2_fu_21876_p1.read().is_01() || !y_V_1_52_1_cast_fu_21832_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_2_fu_21876_p1.read()) + sc_bigint<15>(y_V_1_52_1_cast_fu_21832_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_3_fu_21974_p2() {
    p_Val2_14_52_3_fu_21974_p2 = (!p_Val2_6_52_3_fu_21954_p1.read().is_01() || !y_V_1_52_2_fu_21910_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_3_fu_21954_p1.read()) + sc_biguint<15>(y_V_1_52_2_fu_21910_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_4_fu_33233_p2() {
    p_Val2_14_52_4_fu_33233_p2 = (!p_Val2_6_52_4_fu_33217_p1.read().is_01() || !y_V_1_52_3_reg_62233.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_4_fu_33217_p1.read()) + sc_biguint<15>(y_V_1_52_3_reg_62233.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_5_fu_33310_p2() {
    p_Val2_14_52_5_fu_33310_p2 = (!p_Val2_6_52_5_fu_33290_p1.read().is_01() || !y_V_1_52_4_fu_33246_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_5_fu_33290_p1.read()) + sc_biguint<15>(y_V_1_52_4_fu_33246_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_6_fu_44048_p2() {
    p_Val2_14_52_6_fu_44048_p2 = (!p_Val2_6_52_6_fu_44032_p1.read().is_01() || !y_V_1_52_5_reg_64647.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_6_fu_44032_p1.read()) + sc_biguint<15>(y_V_1_52_5_reg_64647.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_52_7_fu_44105_p2() {
    p_Val2_14_52_7_fu_44105_p2 = (!p_Val2_6_52_7_fu_44095_p1.read().is_01() || !y_V_1_52_6_fu_44053_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_52_7_fu_44095_p1.read()) + sc_biguint<15>(y_V_1_52_6_fu_44053_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_1_fu_9722_p2() {
    p_Val2_14_53_1_fu_9722_p2 = (!tmp_1065_fu_9702_p1.read().is_01() || !p_Val2_7_52_fu_9656_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1065_fu_9702_p1.read()) + sc_biguint<14>(p_Val2_7_52_fu_9656_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_2_fu_22090_p2() {
    p_Val2_14_53_2_fu_22090_p2 = (!p_Val2_6_53_2_fu_22070_p1.read().is_01() || !y_V_1_53_1_cast_fu_22026_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_2_fu_22070_p1.read()) + sc_bigint<15>(y_V_1_53_1_cast_fu_22026_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_3_fu_22168_p2() {
    p_Val2_14_53_3_fu_22168_p2 = (!p_Val2_6_53_3_fu_22148_p1.read().is_01() || !y_V_1_53_2_fu_22104_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_3_fu_22148_p1.read()) + sc_biguint<15>(y_V_1_53_2_fu_22104_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_4_fu_33381_p2() {
    p_Val2_14_53_4_fu_33381_p2 = (!p_Val2_6_53_4_fu_33365_p1.read().is_01() || !y_V_1_53_3_reg_62267.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_4_fu_33365_p1.read()) + sc_biguint<15>(y_V_1_53_3_reg_62267.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_5_fu_33458_p2() {
    p_Val2_14_53_5_fu_33458_p2 = (!p_Val2_6_53_5_fu_33438_p1.read().is_01() || !y_V_1_53_4_fu_33394_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_5_fu_33438_p1.read()) + sc_biguint<15>(y_V_1_53_4_fu_33394_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_6_fu_44201_p2() {
    p_Val2_14_53_6_fu_44201_p2 = (!p_Val2_6_53_6_fu_44185_p1.read().is_01() || !y_V_1_53_5_reg_64681.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_6_fu_44185_p1.read()) + sc_biguint<15>(y_V_1_53_5_reg_64681.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_53_7_fu_44258_p2() {
    p_Val2_14_53_7_fu_44258_p2 = (!p_Val2_6_53_7_fu_44248_p1.read().is_01() || !y_V_1_53_6_fu_44206_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_53_7_fu_44248_p1.read()) + sc_biguint<15>(y_V_1_53_6_fu_44206_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_1_fu_9840_p2() {
    p_Val2_14_54_1_fu_9840_p2 = (!tmp_1085_fu_9820_p1.read().is_01() || !p_Val2_7_53_fu_9774_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1085_fu_9820_p1.read()) + sc_biguint<14>(p_Val2_7_53_fu_9774_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_2_fu_22284_p2() {
    p_Val2_14_54_2_fu_22284_p2 = (!p_Val2_6_54_2_fu_22264_p1.read().is_01() || !y_V_1_54_1_cast_fu_22220_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_2_fu_22264_p1.read()) + sc_bigint<15>(y_V_1_54_1_cast_fu_22220_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_3_fu_22362_p2() {
    p_Val2_14_54_3_fu_22362_p2 = (!p_Val2_6_54_3_fu_22342_p1.read().is_01() || !y_V_1_54_2_fu_22298_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_3_fu_22342_p1.read()) + sc_biguint<15>(y_V_1_54_2_fu_22298_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_4_fu_33529_p2() {
    p_Val2_14_54_4_fu_33529_p2 = (!p_Val2_6_54_4_fu_33513_p1.read().is_01() || !y_V_1_54_3_reg_62301.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_4_fu_33513_p1.read()) + sc_biguint<15>(y_V_1_54_3_reg_62301.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_5_fu_33606_p2() {
    p_Val2_14_54_5_fu_33606_p2 = (!p_Val2_6_54_5_fu_33586_p1.read().is_01() || !y_V_1_54_4_fu_33542_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_5_fu_33586_p1.read()) + sc_biguint<15>(y_V_1_54_4_fu_33542_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_6_fu_44354_p2() {
    p_Val2_14_54_6_fu_44354_p2 = (!p_Val2_6_54_6_fu_44338_p1.read().is_01() || !y_V_1_54_5_reg_64715.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_6_fu_44338_p1.read()) + sc_biguint<15>(y_V_1_54_5_reg_64715.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_54_7_fu_44411_p2() {
    p_Val2_14_54_7_fu_44411_p2 = (!p_Val2_6_54_7_fu_44401_p1.read().is_01() || !y_V_1_54_6_fu_44359_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_54_7_fu_44401_p1.read()) + sc_biguint<15>(y_V_1_54_6_fu_44359_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_1_fu_9958_p2() {
    p_Val2_14_55_1_fu_9958_p2 = (!tmp_1105_fu_9938_p1.read().is_01() || !p_Val2_7_54_fu_9892_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1105_fu_9938_p1.read()) + sc_biguint<14>(p_Val2_7_54_fu_9892_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_2_fu_22478_p2() {
    p_Val2_14_55_2_fu_22478_p2 = (!p_Val2_6_55_2_fu_22458_p1.read().is_01() || !y_V_1_55_1_cast_fu_22414_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_2_fu_22458_p1.read()) + sc_bigint<15>(y_V_1_55_1_cast_fu_22414_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_3_fu_22556_p2() {
    p_Val2_14_55_3_fu_22556_p2 = (!p_Val2_6_55_3_fu_22536_p1.read().is_01() || !y_V_1_55_2_fu_22492_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_3_fu_22536_p1.read()) + sc_biguint<15>(y_V_1_55_2_fu_22492_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_4_fu_33677_p2() {
    p_Val2_14_55_4_fu_33677_p2 = (!p_Val2_6_55_4_fu_33661_p1.read().is_01() || !y_V_1_55_3_reg_62335.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_4_fu_33661_p1.read()) + sc_biguint<15>(y_V_1_55_3_reg_62335.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_5_fu_33754_p2() {
    p_Val2_14_55_5_fu_33754_p2 = (!p_Val2_6_55_5_fu_33734_p1.read().is_01() || !y_V_1_55_4_fu_33690_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_5_fu_33734_p1.read()) + sc_biguint<15>(y_V_1_55_4_fu_33690_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_6_fu_44507_p2() {
    p_Val2_14_55_6_fu_44507_p2 = (!p_Val2_6_55_6_fu_44491_p1.read().is_01() || !y_V_1_55_5_reg_64749.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_6_fu_44491_p1.read()) + sc_biguint<15>(y_V_1_55_5_reg_64749.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_55_7_fu_44564_p2() {
    p_Val2_14_55_7_fu_44564_p2 = (!p_Val2_6_55_7_fu_44554_p1.read().is_01() || !y_V_1_55_6_fu_44512_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_55_7_fu_44554_p1.read()) + sc_biguint<15>(y_V_1_55_6_fu_44512_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_1_fu_10076_p2() {
    p_Val2_14_56_1_fu_10076_p2 = (!tmp_1125_fu_10056_p1.read().is_01() || !p_Val2_7_55_fu_10010_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1125_fu_10056_p1.read()) + sc_biguint<14>(p_Val2_7_55_fu_10010_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_2_fu_22672_p2() {
    p_Val2_14_56_2_fu_22672_p2 = (!p_Val2_6_56_2_fu_22652_p1.read().is_01() || !y_V_1_56_1_cast_fu_22608_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_2_fu_22652_p1.read()) + sc_bigint<15>(y_V_1_56_1_cast_fu_22608_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_3_fu_22750_p2() {
    p_Val2_14_56_3_fu_22750_p2 = (!p_Val2_6_56_3_fu_22730_p1.read().is_01() || !y_V_1_56_2_fu_22686_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_3_fu_22730_p1.read()) + sc_biguint<15>(y_V_1_56_2_fu_22686_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_4_fu_33825_p2() {
    p_Val2_14_56_4_fu_33825_p2 = (!p_Val2_6_56_4_fu_33809_p1.read().is_01() || !y_V_1_56_3_reg_62369.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_4_fu_33809_p1.read()) + sc_biguint<15>(y_V_1_56_3_reg_62369.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_5_fu_33902_p2() {
    p_Val2_14_56_5_fu_33902_p2 = (!p_Val2_6_56_5_fu_33882_p1.read().is_01() || !y_V_1_56_4_fu_33838_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_5_fu_33882_p1.read()) + sc_biguint<15>(y_V_1_56_4_fu_33838_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_6_fu_44660_p2() {
    p_Val2_14_56_6_fu_44660_p2 = (!p_Val2_6_56_6_fu_44644_p1.read().is_01() || !y_V_1_56_5_reg_64783.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_6_fu_44644_p1.read()) + sc_biguint<15>(y_V_1_56_5_reg_64783.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_56_7_fu_44717_p2() {
    p_Val2_14_56_7_fu_44717_p2 = (!p_Val2_6_56_7_fu_44707_p1.read().is_01() || !y_V_1_56_6_fu_44665_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_56_7_fu_44707_p1.read()) + sc_biguint<15>(y_V_1_56_6_fu_44665_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_1_fu_10194_p2() {
    p_Val2_14_57_1_fu_10194_p2 = (!tmp_1145_fu_10174_p1.read().is_01() || !p_Val2_7_56_fu_10128_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1145_fu_10174_p1.read()) + sc_biguint<14>(p_Val2_7_56_fu_10128_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_2_fu_22866_p2() {
    p_Val2_14_57_2_fu_22866_p2 = (!p_Val2_6_57_2_fu_22846_p1.read().is_01() || !y_V_1_57_1_cast_fu_22802_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_2_fu_22846_p1.read()) + sc_bigint<15>(y_V_1_57_1_cast_fu_22802_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_3_fu_22944_p2() {
    p_Val2_14_57_3_fu_22944_p2 = (!p_Val2_6_57_3_fu_22924_p1.read().is_01() || !y_V_1_57_2_fu_22880_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_3_fu_22924_p1.read()) + sc_biguint<15>(y_V_1_57_2_fu_22880_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_4_fu_33973_p2() {
    p_Val2_14_57_4_fu_33973_p2 = (!p_Val2_6_57_4_fu_33957_p1.read().is_01() || !y_V_1_57_3_reg_62403.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_4_fu_33957_p1.read()) + sc_biguint<15>(y_V_1_57_3_reg_62403.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_5_fu_34050_p2() {
    p_Val2_14_57_5_fu_34050_p2 = (!p_Val2_6_57_5_fu_34030_p1.read().is_01() || !y_V_1_57_4_fu_33986_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_5_fu_34030_p1.read()) + sc_biguint<15>(y_V_1_57_4_fu_33986_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_6_fu_44813_p2() {
    p_Val2_14_57_6_fu_44813_p2 = (!p_Val2_6_57_6_fu_44797_p1.read().is_01() || !y_V_1_57_5_reg_64817.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_6_fu_44797_p1.read()) + sc_biguint<15>(y_V_1_57_5_reg_64817.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_57_7_fu_44870_p2() {
    p_Val2_14_57_7_fu_44870_p2 = (!p_Val2_6_57_7_fu_44860_p1.read().is_01() || !y_V_1_57_6_fu_44818_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_57_7_fu_44860_p1.read()) + sc_biguint<15>(y_V_1_57_6_fu_44818_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_1_fu_10312_p2() {
    p_Val2_14_58_1_fu_10312_p2 = (!tmp_1165_fu_10292_p1.read().is_01() || !p_Val2_7_57_fu_10246_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1165_fu_10292_p1.read()) + sc_biguint<14>(p_Val2_7_57_fu_10246_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_2_fu_23060_p2() {
    p_Val2_14_58_2_fu_23060_p2 = (!p_Val2_6_58_2_fu_23040_p1.read().is_01() || !y_V_1_58_1_cast_fu_22996_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_2_fu_23040_p1.read()) + sc_bigint<15>(y_V_1_58_1_cast_fu_22996_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_3_fu_23138_p2() {
    p_Val2_14_58_3_fu_23138_p2 = (!p_Val2_6_58_3_fu_23118_p1.read().is_01() || !y_V_1_58_2_fu_23074_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_3_fu_23118_p1.read()) + sc_biguint<15>(y_V_1_58_2_fu_23074_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_4_fu_34121_p2() {
    p_Val2_14_58_4_fu_34121_p2 = (!p_Val2_6_58_4_fu_34105_p1.read().is_01() || !y_V_1_58_3_reg_62437.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_4_fu_34105_p1.read()) + sc_biguint<15>(y_V_1_58_3_reg_62437.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_5_fu_34198_p2() {
    p_Val2_14_58_5_fu_34198_p2 = (!p_Val2_6_58_5_fu_34178_p1.read().is_01() || !y_V_1_58_4_fu_34134_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_5_fu_34178_p1.read()) + sc_biguint<15>(y_V_1_58_4_fu_34134_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_6_fu_44966_p2() {
    p_Val2_14_58_6_fu_44966_p2 = (!p_Val2_6_58_6_fu_44950_p1.read().is_01() || !y_V_1_58_5_reg_64851.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_6_fu_44950_p1.read()) + sc_biguint<15>(y_V_1_58_5_reg_64851.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_58_7_fu_45023_p2() {
    p_Val2_14_58_7_fu_45023_p2 = (!p_Val2_6_58_7_fu_45013_p1.read().is_01() || !y_V_1_58_6_fu_44971_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_58_7_fu_45013_p1.read()) + sc_biguint<15>(y_V_1_58_6_fu_44971_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_1_fu_10430_p2() {
    p_Val2_14_59_1_fu_10430_p2 = (!tmp_1185_fu_10410_p1.read().is_01() || !p_Val2_7_58_fu_10364_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1185_fu_10410_p1.read()) + sc_biguint<14>(p_Val2_7_58_fu_10364_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_2_fu_23254_p2() {
    p_Val2_14_59_2_fu_23254_p2 = (!p_Val2_6_59_2_fu_23234_p1.read().is_01() || !y_V_1_59_1_cast_fu_23190_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_2_fu_23234_p1.read()) + sc_bigint<15>(y_V_1_59_1_cast_fu_23190_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_3_fu_23332_p2() {
    p_Val2_14_59_3_fu_23332_p2 = (!p_Val2_6_59_3_fu_23312_p1.read().is_01() || !y_V_1_59_2_fu_23268_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_3_fu_23312_p1.read()) + sc_biguint<15>(y_V_1_59_2_fu_23268_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_4_fu_34269_p2() {
    p_Val2_14_59_4_fu_34269_p2 = (!p_Val2_6_59_4_fu_34253_p1.read().is_01() || !y_V_1_59_3_reg_62471.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_4_fu_34253_p1.read()) + sc_biguint<15>(y_V_1_59_3_reg_62471.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_5_fu_34346_p2() {
    p_Val2_14_59_5_fu_34346_p2 = (!p_Val2_6_59_5_fu_34326_p1.read().is_01() || !y_V_1_59_4_fu_34282_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_5_fu_34326_p1.read()) + sc_biguint<15>(y_V_1_59_4_fu_34282_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_6_fu_45119_p2() {
    p_Val2_14_59_6_fu_45119_p2 = (!p_Val2_6_59_6_fu_45103_p1.read().is_01() || !y_V_1_59_5_reg_64885.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_6_fu_45103_p1.read()) + sc_biguint<15>(y_V_1_59_5_reg_64885.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_59_7_fu_45176_p2() {
    p_Val2_14_59_7_fu_45176_p2 = (!p_Val2_6_59_7_fu_45166_p1.read().is_01() || !y_V_1_59_6_fu_45124_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_59_7_fu_45166_p1.read()) + sc_biguint<15>(y_V_1_59_6_fu_45124_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_1_fu_4058_p2() {
    p_Val2_14_5_1_fu_4058_p2 = (!tmp_105_fu_4038_p1.read().is_01() || !p_Val2_7_5_fu_3992_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_105_fu_4038_p1.read()) + sc_biguint<14>(p_Val2_7_5_fu_3992_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_2_fu_12778_p2() {
    p_Val2_14_5_2_fu_12778_p2 = (!p_Val2_6_5_2_fu_12758_p1.read().is_01() || !y_V_1_5_1_cast_fu_12714_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_2_fu_12758_p1.read()) + sc_bigint<15>(y_V_1_5_1_cast_fu_12714_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_3_fu_12856_p2() {
    p_Val2_14_5_3_fu_12856_p2 = (!p_Val2_6_5_3_fu_12836_p1.read().is_01() || !y_V_1_5_2_fu_12792_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_3_fu_12836_p1.read()) + sc_biguint<15>(y_V_1_5_2_fu_12792_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_4_fu_26277_p2() {
    p_Val2_14_5_4_fu_26277_p2 = (!p_Val2_6_5_4_fu_26261_p1.read().is_01() || !y_V_1_5_3_reg_60635.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_4_fu_26261_p1.read()) + sc_biguint<15>(y_V_1_5_3_reg_60635.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_5_fu_26354_p2() {
    p_Val2_14_5_5_fu_26354_p2 = (!p_Val2_6_5_5_fu_26334_p1.read().is_01() || !y_V_1_5_4_fu_26290_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_5_fu_26334_p1.read()) + sc_biguint<15>(y_V_1_5_4_fu_26290_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_6_fu_36857_p2() {
    p_Val2_14_5_6_fu_36857_p2 = (!p_Val2_6_5_6_fu_36841_p1.read().is_01() || !y_V_1_5_5_reg_63049.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_6_fu_36841_p1.read()) + sc_biguint<15>(y_V_1_5_5_reg_63049.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_5_7_fu_36914_p2() {
    p_Val2_14_5_7_fu_36914_p2 = (!p_Val2_6_5_7_fu_36904_p1.read().is_01() || !y_V_1_5_6_fu_36862_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_5_7_fu_36904_p1.read()) + sc_biguint<15>(y_V_1_5_6_fu_36862_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_1_fu_10548_p2() {
    p_Val2_14_60_1_fu_10548_p2 = (!tmp_1205_fu_10528_p1.read().is_01() || !p_Val2_7_59_fu_10482_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1205_fu_10528_p1.read()) + sc_biguint<14>(p_Val2_7_59_fu_10482_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_2_fu_23448_p2() {
    p_Val2_14_60_2_fu_23448_p2 = (!p_Val2_6_60_2_fu_23428_p1.read().is_01() || !y_V_1_60_1_cast_fu_23384_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_2_fu_23428_p1.read()) + sc_bigint<15>(y_V_1_60_1_cast_fu_23384_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_3_fu_23526_p2() {
    p_Val2_14_60_3_fu_23526_p2 = (!p_Val2_6_60_3_fu_23506_p1.read().is_01() || !y_V_1_60_2_fu_23462_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_3_fu_23506_p1.read()) + sc_biguint<15>(y_V_1_60_2_fu_23462_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_4_fu_34417_p2() {
    p_Val2_14_60_4_fu_34417_p2 = (!p_Val2_6_60_4_fu_34401_p1.read().is_01() || !y_V_1_60_3_reg_62505.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_4_fu_34401_p1.read()) + sc_biguint<15>(y_V_1_60_3_reg_62505.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_5_fu_34494_p2() {
    p_Val2_14_60_5_fu_34494_p2 = (!p_Val2_6_60_5_fu_34474_p1.read().is_01() || !y_V_1_60_4_fu_34430_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_5_fu_34474_p1.read()) + sc_biguint<15>(y_V_1_60_4_fu_34430_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_6_fu_45272_p2() {
    p_Val2_14_60_6_fu_45272_p2 = (!p_Val2_6_60_6_fu_45256_p1.read().is_01() || !y_V_1_60_5_reg_64919.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_6_fu_45256_p1.read()) + sc_biguint<15>(y_V_1_60_5_reg_64919.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_60_7_fu_45329_p2() {
    p_Val2_14_60_7_fu_45329_p2 = (!p_Val2_6_60_7_fu_45319_p1.read().is_01() || !y_V_1_60_6_fu_45277_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_60_7_fu_45319_p1.read()) + sc_biguint<15>(y_V_1_60_6_fu_45277_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_1_fu_10666_p2() {
    p_Val2_14_61_1_fu_10666_p2 = (!tmp_1225_fu_10646_p1.read().is_01() || !p_Val2_7_60_fu_10600_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1225_fu_10646_p1.read()) + sc_biguint<14>(p_Val2_7_60_fu_10600_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_2_fu_23642_p2() {
    p_Val2_14_61_2_fu_23642_p2 = (!p_Val2_6_61_2_fu_23622_p1.read().is_01() || !y_V_1_61_1_cast_fu_23578_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_2_fu_23622_p1.read()) + sc_bigint<15>(y_V_1_61_1_cast_fu_23578_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_3_fu_23720_p2() {
    p_Val2_14_61_3_fu_23720_p2 = (!p_Val2_6_61_3_fu_23700_p1.read().is_01() || !y_V_1_61_2_fu_23656_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_3_fu_23700_p1.read()) + sc_biguint<15>(y_V_1_61_2_fu_23656_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_4_fu_34565_p2() {
    p_Val2_14_61_4_fu_34565_p2 = (!p_Val2_6_61_4_fu_34549_p1.read().is_01() || !y_V_1_61_3_reg_62539.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_4_fu_34549_p1.read()) + sc_biguint<15>(y_V_1_61_3_reg_62539.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_5_fu_34642_p2() {
    p_Val2_14_61_5_fu_34642_p2 = (!p_Val2_6_61_5_fu_34622_p1.read().is_01() || !y_V_1_61_4_fu_34578_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_5_fu_34622_p1.read()) + sc_biguint<15>(y_V_1_61_4_fu_34578_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_6_fu_45425_p2() {
    p_Val2_14_61_6_fu_45425_p2 = (!p_Val2_6_61_6_fu_45409_p1.read().is_01() || !y_V_1_61_5_reg_64953.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_6_fu_45409_p1.read()) + sc_biguint<15>(y_V_1_61_5_reg_64953.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_61_7_fu_45482_p2() {
    p_Val2_14_61_7_fu_45482_p2 = (!p_Val2_6_61_7_fu_45472_p1.read().is_01() || !y_V_1_61_6_fu_45430_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_61_7_fu_45472_p1.read()) + sc_biguint<15>(y_V_1_61_6_fu_45430_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_1_fu_10784_p2() {
    p_Val2_14_62_1_fu_10784_p2 = (!tmp_1245_fu_10764_p1.read().is_01() || !p_Val2_7_61_fu_10718_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1245_fu_10764_p1.read()) + sc_biguint<14>(p_Val2_7_61_fu_10718_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_2_fu_23836_p2() {
    p_Val2_14_62_2_fu_23836_p2 = (!p_Val2_6_62_2_fu_23816_p1.read().is_01() || !y_V_1_62_1_cast_fu_23772_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_2_fu_23816_p1.read()) + sc_bigint<15>(y_V_1_62_1_cast_fu_23772_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_3_fu_23914_p2() {
    p_Val2_14_62_3_fu_23914_p2 = (!p_Val2_6_62_3_fu_23894_p1.read().is_01() || !y_V_1_62_2_fu_23850_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_3_fu_23894_p1.read()) + sc_biguint<15>(y_V_1_62_2_fu_23850_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_4_fu_34713_p2() {
    p_Val2_14_62_4_fu_34713_p2 = (!p_Val2_6_62_4_fu_34697_p1.read().is_01() || !y_V_1_62_3_reg_62573.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_4_fu_34697_p1.read()) + sc_biguint<15>(y_V_1_62_3_reg_62573.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_5_fu_34790_p2() {
    p_Val2_14_62_5_fu_34790_p2 = (!p_Val2_6_62_5_fu_34770_p1.read().is_01() || !y_V_1_62_4_fu_34726_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_5_fu_34770_p1.read()) + sc_biguint<15>(y_V_1_62_4_fu_34726_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_6_fu_45578_p2() {
    p_Val2_14_62_6_fu_45578_p2 = (!p_Val2_6_62_6_fu_45562_p1.read().is_01() || !y_V_1_62_5_reg_64987.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_6_fu_45562_p1.read()) + sc_biguint<15>(y_V_1_62_5_reg_64987.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_62_7_fu_45635_p2() {
    p_Val2_14_62_7_fu_45635_p2 = (!p_Val2_6_62_7_fu_45625_p1.read().is_01() || !y_V_1_62_6_fu_45583_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_62_7_fu_45625_p1.read()) + sc_biguint<15>(y_V_1_62_6_fu_45583_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_1_fu_10902_p2() {
    p_Val2_14_63_1_fu_10902_p2 = (!tmp_1265_fu_10882_p1.read().is_01() || !p_Val2_7_62_fu_10836_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1265_fu_10882_p1.read()) + sc_biguint<14>(p_Val2_7_62_fu_10836_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_2_fu_24030_p2() {
    p_Val2_14_63_2_fu_24030_p2 = (!p_Val2_6_63_2_fu_24010_p1.read().is_01() || !y_V_1_63_1_cast_fu_23966_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_2_fu_24010_p1.read()) + sc_bigint<15>(y_V_1_63_1_cast_fu_23966_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_3_fu_24108_p2() {
    p_Val2_14_63_3_fu_24108_p2 = (!p_Val2_6_63_3_fu_24088_p1.read().is_01() || !y_V_1_63_2_fu_24044_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_3_fu_24088_p1.read()) + sc_biguint<15>(y_V_1_63_2_fu_24044_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_4_fu_34861_p2() {
    p_Val2_14_63_4_fu_34861_p2 = (!p_Val2_6_63_4_fu_34845_p1.read().is_01() || !y_V_1_63_3_reg_62607.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_4_fu_34845_p1.read()) + sc_biguint<15>(y_V_1_63_3_reg_62607.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_5_fu_34938_p2() {
    p_Val2_14_63_5_fu_34938_p2 = (!p_Val2_6_63_5_fu_34918_p1.read().is_01() || !y_V_1_63_4_fu_34874_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_5_fu_34918_p1.read()) + sc_biguint<15>(y_V_1_63_4_fu_34874_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_6_fu_45731_p2() {
    p_Val2_14_63_6_fu_45731_p2 = (!p_Val2_6_63_6_fu_45715_p1.read().is_01() || !y_V_1_63_5_reg_65021.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_6_fu_45715_p1.read()) + sc_biguint<15>(y_V_1_63_5_reg_65021.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_63_7_fu_45788_p2() {
    p_Val2_14_63_7_fu_45788_p2 = (!p_Val2_6_63_7_fu_45778_p1.read().is_01() || !y_V_1_63_6_fu_45736_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_63_7_fu_45778_p1.read()) + sc_biguint<15>(y_V_1_63_6_fu_45736_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_1_fu_11020_p2() {
    p_Val2_14_64_1_fu_11020_p2 = (!tmp_1285_fu_11000_p1.read().is_01() || !p_Val2_7_63_fu_10954_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1285_fu_11000_p1.read()) + sc_biguint<14>(p_Val2_7_63_fu_10954_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_2_fu_24224_p2() {
    p_Val2_14_64_2_fu_24224_p2 = (!p_Val2_6_64_2_fu_24204_p1.read().is_01() || !y_V_1_64_1_cast_fu_24160_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_2_fu_24204_p1.read()) + sc_bigint<15>(y_V_1_64_1_cast_fu_24160_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_3_fu_24302_p2() {
    p_Val2_14_64_3_fu_24302_p2 = (!p_Val2_6_64_3_fu_24282_p1.read().is_01() || !y_V_1_64_2_fu_24238_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_3_fu_24282_p1.read()) + sc_biguint<15>(y_V_1_64_2_fu_24238_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_4_fu_35009_p2() {
    p_Val2_14_64_4_fu_35009_p2 = (!p_Val2_6_64_4_fu_34993_p1.read().is_01() || !y_V_1_64_3_reg_62641.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_4_fu_34993_p1.read()) + sc_biguint<15>(y_V_1_64_3_reg_62641.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_5_fu_35086_p2() {
    p_Val2_14_64_5_fu_35086_p2 = (!p_Val2_6_64_5_fu_35066_p1.read().is_01() || !y_V_1_64_4_fu_35022_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_5_fu_35066_p1.read()) + sc_biguint<15>(y_V_1_64_4_fu_35022_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_6_fu_45884_p2() {
    p_Val2_14_64_6_fu_45884_p2 = (!p_Val2_6_64_6_fu_45868_p1.read().is_01() || !y_V_1_64_5_reg_65055.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_6_fu_45868_p1.read()) + sc_biguint<15>(y_V_1_64_5_reg_65055.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_64_7_fu_45941_p2() {
    p_Val2_14_64_7_fu_45941_p2 = (!p_Val2_6_64_7_fu_45931_p1.read().is_01() || !y_V_1_64_6_fu_45889_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_64_7_fu_45931_p1.read()) + sc_biguint<15>(y_V_1_64_6_fu_45889_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_1_fu_11138_p2() {
    p_Val2_14_65_1_fu_11138_p2 = (!tmp_1305_fu_11118_p1.read().is_01() || !p_Val2_7_64_fu_11072_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1305_fu_11118_p1.read()) + sc_biguint<14>(p_Val2_7_64_fu_11072_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_2_fu_24418_p2() {
    p_Val2_14_65_2_fu_24418_p2 = (!p_Val2_6_65_2_fu_24398_p1.read().is_01() || !y_V_1_65_1_cast_fu_24354_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_2_fu_24398_p1.read()) + sc_bigint<15>(y_V_1_65_1_cast_fu_24354_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_3_fu_24496_p2() {
    p_Val2_14_65_3_fu_24496_p2 = (!p_Val2_6_65_3_fu_24476_p1.read().is_01() || !y_V_1_65_2_fu_24432_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_3_fu_24476_p1.read()) + sc_biguint<15>(y_V_1_65_2_fu_24432_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_4_fu_35157_p2() {
    p_Val2_14_65_4_fu_35157_p2 = (!p_Val2_6_65_4_fu_35141_p1.read().is_01() || !y_V_1_65_3_reg_62675.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_4_fu_35141_p1.read()) + sc_biguint<15>(y_V_1_65_3_reg_62675.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_5_fu_35234_p2() {
    p_Val2_14_65_5_fu_35234_p2 = (!p_Val2_6_65_5_fu_35214_p1.read().is_01() || !y_V_1_65_4_fu_35170_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_5_fu_35214_p1.read()) + sc_biguint<15>(y_V_1_65_4_fu_35170_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_6_fu_46037_p2() {
    p_Val2_14_65_6_fu_46037_p2 = (!p_Val2_6_65_6_fu_46021_p1.read().is_01() || !y_V_1_65_5_reg_65089.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_6_fu_46021_p1.read()) + sc_biguint<15>(y_V_1_65_5_reg_65089.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_65_7_fu_46094_p2() {
    p_Val2_14_65_7_fu_46094_p2 = (!p_Val2_6_65_7_fu_46084_p1.read().is_01() || !y_V_1_65_6_fu_46042_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_65_7_fu_46084_p1.read()) + sc_biguint<15>(y_V_1_65_6_fu_46042_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_1_fu_11256_p2() {
    p_Val2_14_66_1_fu_11256_p2 = (!tmp_1325_fu_11236_p1.read().is_01() || !p_Val2_7_65_fu_11190_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1325_fu_11236_p1.read()) + sc_biguint<14>(p_Val2_7_65_fu_11190_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_2_fu_24612_p2() {
    p_Val2_14_66_2_fu_24612_p2 = (!p_Val2_6_66_2_fu_24592_p1.read().is_01() || !y_V_1_66_1_cast_fu_24548_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_2_fu_24592_p1.read()) + sc_bigint<15>(y_V_1_66_1_cast_fu_24548_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_3_fu_24690_p2() {
    p_Val2_14_66_3_fu_24690_p2 = (!p_Val2_6_66_3_fu_24670_p1.read().is_01() || !y_V_1_66_2_fu_24626_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_3_fu_24670_p1.read()) + sc_biguint<15>(y_V_1_66_2_fu_24626_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_4_fu_35305_p2() {
    p_Val2_14_66_4_fu_35305_p2 = (!p_Val2_6_66_4_fu_35289_p1.read().is_01() || !y_V_1_66_3_reg_62709.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_4_fu_35289_p1.read()) + sc_biguint<15>(y_V_1_66_3_reg_62709.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_5_fu_35382_p2() {
    p_Val2_14_66_5_fu_35382_p2 = (!p_Val2_6_66_5_fu_35362_p1.read().is_01() || !y_V_1_66_4_fu_35318_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_5_fu_35362_p1.read()) + sc_biguint<15>(y_V_1_66_4_fu_35318_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_6_fu_46190_p2() {
    p_Val2_14_66_6_fu_46190_p2 = (!p_Val2_6_66_6_fu_46174_p1.read().is_01() || !y_V_1_66_5_reg_65123.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_6_fu_46174_p1.read()) + sc_biguint<15>(y_V_1_66_5_reg_65123.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_66_7_fu_46247_p2() {
    p_Val2_14_66_7_fu_46247_p2 = (!p_Val2_6_66_7_fu_46237_p1.read().is_01() || !y_V_1_66_6_fu_46195_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_66_7_fu_46237_p1.read()) + sc_biguint<15>(y_V_1_66_6_fu_46195_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_1_fu_11374_p2() {
    p_Val2_14_67_1_fu_11374_p2 = (!tmp_1345_fu_11354_p1.read().is_01() || !p_Val2_7_66_fu_11308_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1345_fu_11354_p1.read()) + sc_biguint<14>(p_Val2_7_66_fu_11308_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_2_fu_24806_p2() {
    p_Val2_14_67_2_fu_24806_p2 = (!p_Val2_6_67_2_fu_24786_p1.read().is_01() || !y_V_1_67_1_cast_fu_24742_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_2_fu_24786_p1.read()) + sc_bigint<15>(y_V_1_67_1_cast_fu_24742_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_3_fu_24884_p2() {
    p_Val2_14_67_3_fu_24884_p2 = (!p_Val2_6_67_3_fu_24864_p1.read().is_01() || !y_V_1_67_2_fu_24820_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_3_fu_24864_p1.read()) + sc_biguint<15>(y_V_1_67_2_fu_24820_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_4_fu_35453_p2() {
    p_Val2_14_67_4_fu_35453_p2 = (!p_Val2_6_67_4_fu_35437_p1.read().is_01() || !y_V_1_67_3_reg_62743.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_4_fu_35437_p1.read()) + sc_biguint<15>(y_V_1_67_3_reg_62743.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_5_fu_35530_p2() {
    p_Val2_14_67_5_fu_35530_p2 = (!p_Val2_6_67_5_fu_35510_p1.read().is_01() || !y_V_1_67_4_fu_35466_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_5_fu_35510_p1.read()) + sc_biguint<15>(y_V_1_67_4_fu_35466_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_6_fu_46343_p2() {
    p_Val2_14_67_6_fu_46343_p2 = (!p_Val2_6_67_6_fu_46327_p1.read().is_01() || !y_V_1_67_5_reg_65157.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_6_fu_46327_p1.read()) + sc_biguint<15>(y_V_1_67_5_reg_65157.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_67_7_fu_46400_p2() {
    p_Val2_14_67_7_fu_46400_p2 = (!p_Val2_6_67_7_fu_46390_p1.read().is_01() || !y_V_1_67_6_fu_46348_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_67_7_fu_46390_p1.read()) + sc_biguint<15>(y_V_1_67_6_fu_46348_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_1_fu_11492_p2() {
    p_Val2_14_68_1_fu_11492_p2 = (!tmp_1365_fu_11472_p1.read().is_01() || !p_Val2_7_67_fu_11426_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1365_fu_11472_p1.read()) + sc_biguint<14>(p_Val2_7_67_fu_11426_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_2_fu_25000_p2() {
    p_Val2_14_68_2_fu_25000_p2 = (!p_Val2_6_68_2_fu_24980_p1.read().is_01() || !y_V_1_68_1_cast_fu_24936_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_2_fu_24980_p1.read()) + sc_bigint<15>(y_V_1_68_1_cast_fu_24936_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_3_fu_25078_p2() {
    p_Val2_14_68_3_fu_25078_p2 = (!p_Val2_6_68_3_fu_25058_p1.read().is_01() || !y_V_1_68_2_fu_25014_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_3_fu_25058_p1.read()) + sc_biguint<15>(y_V_1_68_2_fu_25014_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_4_fu_35601_p2() {
    p_Val2_14_68_4_fu_35601_p2 = (!p_Val2_6_68_4_fu_35585_p1.read().is_01() || !y_V_1_68_3_reg_62777.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_4_fu_35585_p1.read()) + sc_biguint<15>(y_V_1_68_3_reg_62777.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_5_fu_35678_p2() {
    p_Val2_14_68_5_fu_35678_p2 = (!p_Val2_6_68_5_fu_35658_p1.read().is_01() || !y_V_1_68_4_fu_35614_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_5_fu_35658_p1.read()) + sc_biguint<15>(y_V_1_68_4_fu_35614_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_6_fu_46496_p2() {
    p_Val2_14_68_6_fu_46496_p2 = (!p_Val2_6_68_6_fu_46480_p1.read().is_01() || !y_V_1_68_5_reg_65191.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_6_fu_46480_p1.read()) + sc_biguint<15>(y_V_1_68_5_reg_65191.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_68_7_fu_46553_p2() {
    p_Val2_14_68_7_fu_46553_p2 = (!p_Val2_6_68_7_fu_46543_p1.read().is_01() || !y_V_1_68_6_fu_46501_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_68_7_fu_46543_p1.read()) + sc_biguint<15>(y_V_1_68_6_fu_46501_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_1_fu_11610_p2() {
    p_Val2_14_69_1_fu_11610_p2 = (!tmp_1385_fu_11590_p1.read().is_01() || !p_Val2_7_68_fu_11544_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1385_fu_11590_p1.read()) + sc_biguint<14>(p_Val2_7_68_fu_11544_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_2_fu_25194_p2() {
    p_Val2_14_69_2_fu_25194_p2 = (!p_Val2_6_69_2_fu_25174_p1.read().is_01() || !y_V_1_69_1_cast_fu_25130_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_2_fu_25174_p1.read()) + sc_bigint<15>(y_V_1_69_1_cast_fu_25130_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_3_fu_25272_p2() {
    p_Val2_14_69_3_fu_25272_p2 = (!p_Val2_6_69_3_fu_25252_p1.read().is_01() || !y_V_1_69_2_fu_25208_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_3_fu_25252_p1.read()) + sc_biguint<15>(y_V_1_69_2_fu_25208_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_4_fu_35749_p2() {
    p_Val2_14_69_4_fu_35749_p2 = (!p_Val2_6_69_4_fu_35733_p1.read().is_01() || !y_V_1_69_3_reg_62811.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_4_fu_35733_p1.read()) + sc_biguint<15>(y_V_1_69_3_reg_62811.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_5_fu_35826_p2() {
    p_Val2_14_69_5_fu_35826_p2 = (!p_Val2_6_69_5_fu_35806_p1.read().is_01() || !y_V_1_69_4_fu_35762_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_5_fu_35806_p1.read()) + sc_biguint<15>(y_V_1_69_4_fu_35762_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_6_fu_46649_p2() {
    p_Val2_14_69_6_fu_46649_p2 = (!p_Val2_6_69_6_fu_46633_p1.read().is_01() || !y_V_1_69_5_reg_65225.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_6_fu_46633_p1.read()) + sc_biguint<15>(y_V_1_69_5_reg_65225.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_69_7_fu_46706_p2() {
    p_Val2_14_69_7_fu_46706_p2 = (!p_Val2_6_69_7_fu_46696_p1.read().is_01() || !y_V_1_69_6_fu_46654_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_69_7_fu_46696_p1.read()) + sc_biguint<15>(y_V_1_69_6_fu_46654_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_1_fu_4176_p2() {
    p_Val2_14_6_1_fu_4176_p2 = (!tmp_125_fu_4156_p1.read().is_01() || !p_Val2_7_6_fu_4110_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_125_fu_4156_p1.read()) + sc_biguint<14>(p_Val2_7_6_fu_4110_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_2_fu_12972_p2() {
    p_Val2_14_6_2_fu_12972_p2 = (!p_Val2_6_6_2_fu_12952_p1.read().is_01() || !y_V_1_6_1_cast_fu_12908_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_2_fu_12952_p1.read()) + sc_bigint<15>(y_V_1_6_1_cast_fu_12908_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_3_fu_13050_p2() {
    p_Val2_14_6_3_fu_13050_p2 = (!p_Val2_6_6_3_fu_13030_p1.read().is_01() || !y_V_1_6_2_fu_12986_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_3_fu_13030_p1.read()) + sc_biguint<15>(y_V_1_6_2_fu_12986_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_4_fu_26425_p2() {
    p_Val2_14_6_4_fu_26425_p2 = (!p_Val2_6_6_4_fu_26409_p1.read().is_01() || !y_V_1_6_3_reg_60669.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_4_fu_26409_p1.read()) + sc_biguint<15>(y_V_1_6_3_reg_60669.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_5_fu_26502_p2() {
    p_Val2_14_6_5_fu_26502_p2 = (!p_Val2_6_6_5_fu_26482_p1.read().is_01() || !y_V_1_6_4_fu_26438_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_5_fu_26482_p1.read()) + sc_biguint<15>(y_V_1_6_4_fu_26438_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_6_fu_37010_p2() {
    p_Val2_14_6_6_fu_37010_p2 = (!p_Val2_6_6_6_fu_36994_p1.read().is_01() || !y_V_1_6_5_reg_63083.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_6_fu_36994_p1.read()) + sc_biguint<15>(y_V_1_6_5_reg_63083.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_6_7_fu_37067_p2() {
    p_Val2_14_6_7_fu_37067_p2 = (!p_Val2_6_6_7_fu_37057_p1.read().is_01() || !y_V_1_6_6_fu_37015_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_6_7_fu_37057_p1.read()) + sc_biguint<15>(y_V_1_6_6_fu_37015_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_1_fu_11728_p2() {
    p_Val2_14_70_1_fu_11728_p2 = (!tmp_1405_fu_11708_p1.read().is_01() || !p_Val2_7_69_fu_11662_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1405_fu_11708_p1.read()) + sc_biguint<14>(p_Val2_7_69_fu_11662_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_2_fu_25388_p2() {
    p_Val2_14_70_2_fu_25388_p2 = (!p_Val2_6_70_2_fu_25368_p1.read().is_01() || !y_V_1_70_1_cast_fu_25324_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_2_fu_25368_p1.read()) + sc_bigint<15>(y_V_1_70_1_cast_fu_25324_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_3_fu_25466_p2() {
    p_Val2_14_70_3_fu_25466_p2 = (!p_Val2_6_70_3_fu_25446_p1.read().is_01() || !y_V_1_70_2_fu_25402_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_3_fu_25446_p1.read()) + sc_biguint<15>(y_V_1_70_2_fu_25402_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_4_fu_35897_p2() {
    p_Val2_14_70_4_fu_35897_p2 = (!p_Val2_6_70_4_fu_35881_p1.read().is_01() || !y_V_1_70_3_reg_62845.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_4_fu_35881_p1.read()) + sc_biguint<15>(y_V_1_70_3_reg_62845.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_5_fu_35974_p2() {
    p_Val2_14_70_5_fu_35974_p2 = (!p_Val2_6_70_5_fu_35954_p1.read().is_01() || !y_V_1_70_4_fu_35910_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_5_fu_35954_p1.read()) + sc_biguint<15>(y_V_1_70_4_fu_35910_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_6_fu_46802_p2() {
    p_Val2_14_70_6_fu_46802_p2 = (!p_Val2_6_70_6_fu_46786_p1.read().is_01() || !y_V_1_70_5_reg_65259.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_6_fu_46786_p1.read()) + sc_biguint<15>(y_V_1_70_5_reg_65259.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_70_7_fu_46859_p2() {
    p_Val2_14_70_7_fu_46859_p2 = (!p_Val2_6_70_7_fu_46849_p1.read().is_01() || !y_V_1_70_6_fu_46807_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_70_7_fu_46849_p1.read()) + sc_biguint<15>(y_V_1_70_6_fu_46807_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_1_fu_4294_p2() {
    p_Val2_14_7_1_fu_4294_p2 = (!tmp_145_fu_4274_p1.read().is_01() || !p_Val2_7_7_fu_4228_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_145_fu_4274_p1.read()) + sc_biguint<14>(p_Val2_7_7_fu_4228_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_2_fu_13166_p2() {
    p_Val2_14_7_2_fu_13166_p2 = (!p_Val2_6_7_2_fu_13146_p1.read().is_01() || !y_V_1_7_1_cast_fu_13102_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_2_fu_13146_p1.read()) + sc_bigint<15>(y_V_1_7_1_cast_fu_13102_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_3_fu_13244_p2() {
    p_Val2_14_7_3_fu_13244_p2 = (!p_Val2_6_7_3_fu_13224_p1.read().is_01() || !y_V_1_7_2_fu_13180_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_3_fu_13224_p1.read()) + sc_biguint<15>(y_V_1_7_2_fu_13180_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_4_fu_26573_p2() {
    p_Val2_14_7_4_fu_26573_p2 = (!p_Val2_6_7_4_fu_26557_p1.read().is_01() || !y_V_1_7_3_reg_60703.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_4_fu_26557_p1.read()) + sc_biguint<15>(y_V_1_7_3_reg_60703.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_5_fu_26650_p2() {
    p_Val2_14_7_5_fu_26650_p2 = (!p_Val2_6_7_5_fu_26630_p1.read().is_01() || !y_V_1_7_4_fu_26586_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_5_fu_26630_p1.read()) + sc_biguint<15>(y_V_1_7_4_fu_26586_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_6_fu_37163_p2() {
    p_Val2_14_7_6_fu_37163_p2 = (!p_Val2_6_7_6_fu_37147_p1.read().is_01() || !y_V_1_7_5_reg_63117.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_6_fu_37147_p1.read()) + sc_biguint<15>(y_V_1_7_5_reg_63117.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_7_7_fu_37220_p2() {
    p_Val2_14_7_7_fu_37220_p2 = (!p_Val2_6_7_7_fu_37210_p1.read().is_01() || !y_V_1_7_6_fu_37168_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_7_7_fu_37210_p1.read()) + sc_biguint<15>(y_V_1_7_6_fu_37168_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_1_fu_4412_p2() {
    p_Val2_14_8_1_fu_4412_p2 = (!tmp_165_fu_4392_p1.read().is_01() || !p_Val2_7_8_fu_4346_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_165_fu_4392_p1.read()) + sc_biguint<14>(p_Val2_7_8_fu_4346_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_2_fu_13360_p2() {
    p_Val2_14_8_2_fu_13360_p2 = (!p_Val2_6_8_2_fu_13340_p1.read().is_01() || !y_V_1_8_1_cast_fu_13296_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_2_fu_13340_p1.read()) + sc_bigint<15>(y_V_1_8_1_cast_fu_13296_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_3_fu_13438_p2() {
    p_Val2_14_8_3_fu_13438_p2 = (!p_Val2_6_8_3_fu_13418_p1.read().is_01() || !y_V_1_8_2_fu_13374_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_3_fu_13418_p1.read()) + sc_biguint<15>(y_V_1_8_2_fu_13374_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_4_fu_26721_p2() {
    p_Val2_14_8_4_fu_26721_p2 = (!p_Val2_6_8_4_fu_26705_p1.read().is_01() || !y_V_1_8_3_reg_60737.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_4_fu_26705_p1.read()) + sc_biguint<15>(y_V_1_8_3_reg_60737.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_5_fu_26798_p2() {
    p_Val2_14_8_5_fu_26798_p2 = (!p_Val2_6_8_5_fu_26778_p1.read().is_01() || !y_V_1_8_4_fu_26734_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_5_fu_26778_p1.read()) + sc_biguint<15>(y_V_1_8_4_fu_26734_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_6_fu_37316_p2() {
    p_Val2_14_8_6_fu_37316_p2 = (!p_Val2_6_8_6_fu_37300_p1.read().is_01() || !y_V_1_8_5_reg_63151.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_6_fu_37300_p1.read()) + sc_biguint<15>(y_V_1_8_5_reg_63151.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_8_7_fu_37373_p2() {
    p_Val2_14_8_7_fu_37373_p2 = (!p_Val2_6_8_7_fu_37363_p1.read().is_01() || !y_V_1_8_6_fu_37321_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_8_7_fu_37363_p1.read()) + sc_biguint<15>(y_V_1_8_6_fu_37321_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_1_fu_4530_p2() {
    p_Val2_14_9_1_fu_4530_p2 = (!tmp_185_fu_4510_p1.read().is_01() || !p_Val2_7_9_fu_4464_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_185_fu_4510_p1.read()) + sc_biguint<14>(p_Val2_7_9_fu_4464_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_2_fu_13554_p2() {
    p_Val2_14_9_2_fu_13554_p2 = (!p_Val2_6_9_2_fu_13534_p1.read().is_01() || !y_V_1_9_1_cast_fu_13490_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_2_fu_13534_p1.read()) + sc_bigint<15>(y_V_1_9_1_cast_fu_13490_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_3_fu_13632_p2() {
    p_Val2_14_9_3_fu_13632_p2 = (!p_Val2_6_9_3_fu_13612_p1.read().is_01() || !y_V_1_9_2_fu_13568_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_3_fu_13612_p1.read()) + sc_biguint<15>(y_V_1_9_2_fu_13568_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_4_fu_26869_p2() {
    p_Val2_14_9_4_fu_26869_p2 = (!p_Val2_6_9_4_fu_26853_p1.read().is_01() || !y_V_1_9_3_reg_60771.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_4_fu_26853_p1.read()) + sc_biguint<15>(y_V_1_9_3_reg_60771.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_5_fu_26946_p2() {
    p_Val2_14_9_5_fu_26946_p2 = (!p_Val2_6_9_5_fu_26926_p1.read().is_01() || !y_V_1_9_4_fu_26882_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_5_fu_26926_p1.read()) + sc_biguint<15>(y_V_1_9_4_fu_26882_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_6_fu_37469_p2() {
    p_Val2_14_9_6_fu_37469_p2 = (!p_Val2_6_9_6_fu_37453_p1.read().is_01() || !y_V_1_9_5_reg_63185.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_6_fu_37453_p1.read()) + sc_biguint<15>(y_V_1_9_5_reg_63185.read()));
}

void Sobel_phase_strm::thread_p_Val2_14_9_7_fu_37526_p2() {
    p_Val2_14_9_7_fu_37526_p2 = (!p_Val2_6_9_7_fu_37516_p1.read().is_01() || !y_V_1_9_6_fu_37474_p3.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_Val2_6_9_7_fu_37516_p1.read()) + sc_biguint<15>(y_V_1_9_6_fu_37474_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_0_3_fu_36050_p2() {
    p_Val2_16_0_3_fu_36050_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_0_2_cast_fu_36036_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_0_2_cast_fu_36036_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_10_3_fu_37580_p2() {
    p_Val2_16_10_3_fu_37580_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_10_2_cast_fu_37566_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_10_2_cast_fu_37566_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_11_3_fu_37733_p2() {
    p_Val2_16_11_3_fu_37733_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_11_2_cast_fu_37719_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_11_2_cast_fu_37719_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_12_3_fu_37886_p2() {
    p_Val2_16_12_3_fu_37886_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_12_2_cast_fu_37872_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_12_2_cast_fu_37872_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_13_3_fu_38039_p2() {
    p_Val2_16_13_3_fu_38039_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_13_2_cast_fu_38025_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_13_2_cast_fu_38025_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_14_3_fu_38192_p2() {
    p_Val2_16_14_3_fu_38192_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_14_2_cast_fu_38178_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_14_2_cast_fu_38178_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_15_3_fu_38345_p2() {
    p_Val2_16_15_3_fu_38345_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_15_2_cast_fu_38331_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_15_2_cast_fu_38331_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_16_3_fu_38498_p2() {
    p_Val2_16_16_3_fu_38498_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_16_2_cast_fu_38484_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_16_2_cast_fu_38484_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_17_3_fu_38651_p2() {
    p_Val2_16_17_3_fu_38651_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_17_2_cast_fu_38637_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_17_2_cast_fu_38637_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_18_3_fu_38804_p2() {
    p_Val2_16_18_3_fu_38804_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_18_2_cast_fu_38790_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_18_2_cast_fu_38790_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_19_3_fu_38957_p2() {
    p_Val2_16_19_3_fu_38957_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_19_2_cast_fu_38943_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_19_2_cast_fu_38943_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_1_3_fu_36203_p2() {
    p_Val2_16_1_3_fu_36203_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_1_2_cast_fu_36189_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_1_2_cast_fu_36189_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_20_3_fu_39110_p2() {
    p_Val2_16_20_3_fu_39110_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_20_2_cast_fu_39096_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_20_2_cast_fu_39096_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_21_3_fu_39263_p2() {
    p_Val2_16_21_3_fu_39263_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_21_2_cast_fu_39249_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_21_2_cast_fu_39249_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_22_3_fu_39416_p2() {
    p_Val2_16_22_3_fu_39416_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_22_2_cast_fu_39402_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_22_2_cast_fu_39402_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_23_3_fu_39569_p2() {
    p_Val2_16_23_3_fu_39569_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_23_2_cast_fu_39555_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_23_2_cast_fu_39555_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_24_3_fu_39722_p2() {
    p_Val2_16_24_3_fu_39722_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_24_2_cast_fu_39708_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_24_2_cast_fu_39708_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_25_3_fu_39875_p2() {
    p_Val2_16_25_3_fu_39875_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_25_2_cast_fu_39861_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_25_2_cast_fu_39861_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_26_3_fu_40028_p2() {
    p_Val2_16_26_3_fu_40028_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_26_2_cast_fu_40014_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_26_2_cast_fu_40014_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_27_3_fu_40181_p2() {
    p_Val2_16_27_3_fu_40181_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_27_2_cast_fu_40167_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_27_2_cast_fu_40167_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_28_3_fu_40334_p2() {
    p_Val2_16_28_3_fu_40334_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_28_2_cast_fu_40320_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_28_2_cast_fu_40320_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_29_3_fu_40487_p2() {
    p_Val2_16_29_3_fu_40487_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_29_2_cast_fu_40473_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_29_2_cast_fu_40473_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_2_3_fu_36356_p2() {
    p_Val2_16_2_3_fu_36356_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_2_2_cast_fu_36342_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_2_2_cast_fu_36342_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_30_3_fu_40640_p2() {
    p_Val2_16_30_3_fu_40640_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_30_2_cast_fu_40626_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_30_2_cast_fu_40626_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_31_3_fu_40793_p2() {
    p_Val2_16_31_3_fu_40793_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_31_2_cast_fu_40779_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_31_2_cast_fu_40779_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_32_3_fu_40946_p2() {
    p_Val2_16_32_3_fu_40946_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_32_2_cast_fu_40932_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_32_2_cast_fu_40932_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_33_3_fu_41099_p2() {
    p_Val2_16_33_3_fu_41099_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_33_2_cast_fu_41085_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_33_2_cast_fu_41085_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_34_3_fu_41252_p2() {
    p_Val2_16_34_3_fu_41252_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_34_2_cast_fu_41238_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_34_2_cast_fu_41238_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_35_3_fu_41405_p2() {
    p_Val2_16_35_3_fu_41405_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_35_2_cast_fu_41391_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_35_2_cast_fu_41391_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_36_3_fu_41558_p2() {
    p_Val2_16_36_3_fu_41558_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_36_2_cast_fu_41544_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_36_2_cast_fu_41544_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_37_3_fu_41711_p2() {
    p_Val2_16_37_3_fu_41711_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_37_2_cast_fu_41697_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_37_2_cast_fu_41697_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_38_3_fu_41864_p2() {
    p_Val2_16_38_3_fu_41864_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_38_2_cast_fu_41850_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_38_2_cast_fu_41850_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_39_3_fu_42017_p2() {
    p_Val2_16_39_3_fu_42017_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_39_2_cast_fu_42003_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_39_2_cast_fu_42003_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_3_3_fu_36509_p2() {
    p_Val2_16_3_3_fu_36509_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_3_2_cast_fu_36495_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_3_2_cast_fu_36495_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_40_3_fu_42170_p2() {
    p_Val2_16_40_3_fu_42170_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_40_2_cast_fu_42156_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_40_2_cast_fu_42156_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_41_3_fu_42323_p2() {
    p_Val2_16_41_3_fu_42323_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_41_2_cast_fu_42309_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_41_2_cast_fu_42309_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_42_3_fu_42476_p2() {
    p_Val2_16_42_3_fu_42476_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_42_2_cast_fu_42462_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_42_2_cast_fu_42462_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_43_3_fu_42629_p2() {
    p_Val2_16_43_3_fu_42629_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_43_2_cast_fu_42615_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_43_2_cast_fu_42615_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_44_3_fu_42782_p2() {
    p_Val2_16_44_3_fu_42782_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_44_2_cast_fu_42768_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_44_2_cast_fu_42768_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_45_3_fu_42935_p2() {
    p_Val2_16_45_3_fu_42935_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_45_2_cast_fu_42921_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_45_2_cast_fu_42921_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_46_3_fu_43088_p2() {
    p_Val2_16_46_3_fu_43088_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_46_2_cast_fu_43074_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_46_2_cast_fu_43074_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_47_3_fu_43241_p2() {
    p_Val2_16_47_3_fu_43241_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_47_2_cast_fu_43227_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_47_2_cast_fu_43227_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_48_3_fu_43394_p2() {
    p_Val2_16_48_3_fu_43394_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_48_2_cast_fu_43380_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_48_2_cast_fu_43380_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_49_3_fu_43547_p2() {
    p_Val2_16_49_3_fu_43547_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_49_2_cast_fu_43533_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_49_2_cast_fu_43533_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_4_3_fu_36662_p2() {
    p_Val2_16_4_3_fu_36662_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_4_2_cast_fu_36648_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_4_2_cast_fu_36648_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_50_3_fu_43700_p2() {
    p_Val2_16_50_3_fu_43700_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_50_2_cast_fu_43686_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_50_2_cast_fu_43686_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_51_3_fu_43853_p2() {
    p_Val2_16_51_3_fu_43853_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_51_2_cast_fu_43839_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_51_2_cast_fu_43839_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_52_3_fu_44006_p2() {
    p_Val2_16_52_3_fu_44006_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_52_2_cast_fu_43992_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_52_2_cast_fu_43992_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_53_3_fu_44159_p2() {
    p_Val2_16_53_3_fu_44159_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_53_2_cast_fu_44145_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_53_2_cast_fu_44145_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_54_3_fu_44312_p2() {
    p_Val2_16_54_3_fu_44312_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_54_2_cast_fu_44298_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_54_2_cast_fu_44298_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_55_3_fu_44465_p2() {
    p_Val2_16_55_3_fu_44465_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_55_2_cast_fu_44451_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_55_2_cast_fu_44451_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_56_3_fu_44618_p2() {
    p_Val2_16_56_3_fu_44618_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_56_2_cast_fu_44604_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_56_2_cast_fu_44604_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_57_3_fu_44771_p2() {
    p_Val2_16_57_3_fu_44771_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_57_2_cast_fu_44757_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_57_2_cast_fu_44757_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_58_3_fu_44924_p2() {
    p_Val2_16_58_3_fu_44924_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_58_2_cast_fu_44910_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_58_2_cast_fu_44910_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_59_3_fu_45077_p2() {
    p_Val2_16_59_3_fu_45077_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_59_2_cast_fu_45063_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_59_2_cast_fu_45063_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_5_3_fu_36815_p2() {
    p_Val2_16_5_3_fu_36815_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_5_2_cast_fu_36801_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_5_2_cast_fu_36801_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_60_3_fu_45230_p2() {
    p_Val2_16_60_3_fu_45230_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_60_2_cast_fu_45216_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_60_2_cast_fu_45216_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_61_3_fu_45383_p2() {
    p_Val2_16_61_3_fu_45383_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_61_2_cast_fu_45369_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_61_2_cast_fu_45369_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_62_3_fu_45536_p2() {
    p_Val2_16_62_3_fu_45536_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_62_2_cast_fu_45522_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_62_2_cast_fu_45522_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_63_3_fu_45689_p2() {
    p_Val2_16_63_3_fu_45689_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_63_2_cast_fu_45675_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_63_2_cast_fu_45675_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_64_3_fu_45842_p2() {
    p_Val2_16_64_3_fu_45842_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_64_2_cast_fu_45828_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_64_2_cast_fu_45828_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_65_3_fu_45995_p2() {
    p_Val2_16_65_3_fu_45995_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_65_2_cast_fu_45981_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_65_2_cast_fu_45981_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_66_3_fu_46148_p2() {
    p_Val2_16_66_3_fu_46148_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_66_2_cast_fu_46134_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_66_2_cast_fu_46134_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_67_3_fu_46301_p2() {
    p_Val2_16_67_3_fu_46301_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_67_2_cast_fu_46287_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_67_2_cast_fu_46287_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_68_3_fu_46454_p2() {
    p_Val2_16_68_3_fu_46454_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_68_2_cast_fu_46440_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_68_2_cast_fu_46440_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_69_3_fu_46607_p2() {
    p_Val2_16_69_3_fu_46607_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_69_2_cast_fu_46593_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_69_2_cast_fu_46593_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_6_3_fu_36968_p2() {
    p_Val2_16_6_3_fu_36968_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_6_2_cast_fu_36954_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_6_2_cast_fu_36954_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_70_3_fu_46760_p2() {
    p_Val2_16_70_3_fu_46760_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_70_2_cast_fu_46746_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_70_2_cast_fu_46746_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_7_3_fu_37121_p2() {
    p_Val2_16_7_3_fu_37121_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_7_2_cast_fu_37107_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_7_2_cast_fu_37107_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_8_3_fu_37274_p2() {
    p_Val2_16_8_3_fu_37274_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_8_2_cast_fu_37260_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_8_2_cast_fu_37260_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_16_9_3_fu_37427_p2() {
    p_Val2_16_9_3_fu_37427_p2 = (!ap_const_lv13_1F1D.is_01() || !z_V_9_2_cast_fu_37413_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F1D) + sc_biguint<13>(z_V_9_2_cast_fu_37413_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_19_10_fu_48375_p3() {
    p_Val2_19_10_fu_48375_p3 = (!tmp_239_fu_48370_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_239_fu_48370_p2.read()[0].to_bool())? sel_tmp35_cast_fu_48362_p3.read(): z_V_11_8_fu_48346_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_11_fu_48502_p3() {
    p_Val2_19_11_fu_48502_p3 = (!tmp_259_fu_48497_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_259_fu_48497_p2.read()[0].to_bool())? sel_tmp38_cast_fu_48489_p3.read(): z_V_12_8_fu_48473_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_12_fu_48629_p3() {
    p_Val2_19_12_fu_48629_p3 = (!tmp_279_fu_48624_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_279_fu_48624_p2.read()[0].to_bool())? sel_tmp41_cast_fu_48616_p3.read(): z_V_13_8_fu_48600_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_13_fu_48756_p3() {
    p_Val2_19_13_fu_48756_p3 = (!tmp_299_fu_48751_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_299_fu_48751_p2.read()[0].to_bool())? sel_tmp44_cast_fu_48743_p3.read(): z_V_14_8_fu_48727_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_14_fu_48883_p3() {
    p_Val2_19_14_fu_48883_p3 = (!tmp_319_fu_48878_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_319_fu_48878_p2.read()[0].to_bool())? sel_tmp47_cast_fu_48870_p3.read(): z_V_15_8_fu_48854_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_15_fu_49010_p3() {
    p_Val2_19_15_fu_49010_p3 = (!tmp_339_fu_49005_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_339_fu_49005_p2.read()[0].to_bool())? sel_tmp50_cast_fu_48997_p3.read(): z_V_16_8_fu_48981_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_16_fu_49137_p3() {
    p_Val2_19_16_fu_49137_p3 = (!tmp_359_fu_49132_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_359_fu_49132_p2.read()[0].to_bool())? sel_tmp53_cast_fu_49124_p3.read(): z_V_17_8_fu_49108_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_17_fu_49264_p3() {
    p_Val2_19_17_fu_49264_p3 = (!tmp_379_fu_49259_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_379_fu_49259_p2.read()[0].to_bool())? sel_tmp56_cast_fu_49251_p3.read(): z_V_18_8_fu_49235_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_18_fu_49391_p3() {
    p_Val2_19_18_fu_49391_p3 = (!tmp_399_fu_49386_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_399_fu_49386_p2.read()[0].to_bool())? sel_tmp59_cast_fu_49378_p3.read(): z_V_19_8_fu_49362_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_19_fu_49518_p3() {
    p_Val2_19_19_fu_49518_p3 = (!tmp_419_fu_49513_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_419_fu_49513_p2.read()[0].to_bool())? sel_tmp62_cast_fu_49505_p3.read(): z_V_20_8_fu_49489_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_1_fu_47105_p3() {
    p_Val2_19_1_fu_47105_p3 = (!tmp_39_fu_47100_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_39_fu_47100_p2.read()[0].to_bool())? sel_tmp5_cast_fu_47092_p3.read(): z_V_1_8_fu_47076_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_20_fu_49645_p3() {
    p_Val2_19_20_fu_49645_p3 = (!tmp_439_fu_49640_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_439_fu_49640_p2.read()[0].to_bool())? sel_tmp65_cast_fu_49632_p3.read(): z_V_21_8_fu_49616_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_21_fu_49772_p3() {
    p_Val2_19_21_fu_49772_p3 = (!tmp_459_fu_49767_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_459_fu_49767_p2.read()[0].to_bool())? sel_tmp68_cast_fu_49759_p3.read(): z_V_22_8_fu_49743_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_22_fu_49899_p3() {
    p_Val2_19_22_fu_49899_p3 = (!tmp_479_fu_49894_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_479_fu_49894_p2.read()[0].to_bool())? sel_tmp71_cast_fu_49886_p3.read(): z_V_23_8_fu_49870_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_23_fu_50026_p3() {
    p_Val2_19_23_fu_50026_p3 = (!tmp_499_fu_50021_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_499_fu_50021_p2.read()[0].to_bool())? sel_tmp74_cast_fu_50013_p3.read(): z_V_24_8_fu_49997_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_24_fu_50153_p3() {
    p_Val2_19_24_fu_50153_p3 = (!tmp_519_fu_50148_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_519_fu_50148_p2.read()[0].to_bool())? sel_tmp77_cast_fu_50140_p3.read(): z_V_25_8_fu_50124_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_25_fu_50280_p3() {
    p_Val2_19_25_fu_50280_p3 = (!tmp_539_fu_50275_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_539_fu_50275_p2.read()[0].to_bool())? sel_tmp80_cast_fu_50267_p3.read(): z_V_26_8_fu_50251_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_26_fu_50407_p3() {
    p_Val2_19_26_fu_50407_p3 = (!tmp_559_fu_50402_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_559_fu_50402_p2.read()[0].to_bool())? sel_tmp83_cast_fu_50394_p3.read(): z_V_27_8_fu_50378_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_27_fu_50534_p3() {
    p_Val2_19_27_fu_50534_p3 = (!tmp_579_fu_50529_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_579_fu_50529_p2.read()[0].to_bool())? sel_tmp86_cast_fu_50521_p3.read(): z_V_28_8_fu_50505_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_28_fu_50661_p3() {
    p_Val2_19_28_fu_50661_p3 = (!tmp_599_fu_50656_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_599_fu_50656_p2.read()[0].to_bool())? sel_tmp89_cast_fu_50648_p3.read(): z_V_29_8_fu_50632_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_29_fu_50788_p3() {
    p_Val2_19_29_fu_50788_p3 = (!tmp_619_fu_50783_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_619_fu_50783_p2.read()[0].to_bool())? sel_tmp92_cast_fu_50775_p3.read(): z_V_30_8_fu_50759_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_2_fu_47232_p3() {
    p_Val2_19_2_fu_47232_p3 = (!tmp_59_fu_47227_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_59_fu_47227_p2.read()[0].to_bool())? sel_tmp8_cast_fu_47219_p3.read(): z_V_2_8_fu_47203_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_30_fu_50915_p3() {
    p_Val2_19_30_fu_50915_p3 = (!tmp_639_fu_50910_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_639_fu_50910_p2.read()[0].to_bool())? sel_tmp95_cast_fu_50902_p3.read(): z_V_31_8_fu_50886_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_31_fu_51042_p3() {
    p_Val2_19_31_fu_51042_p3 = (!tmp_659_fu_51037_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_659_fu_51037_p2.read()[0].to_bool())? sel_tmp98_cast_fu_51029_p3.read(): z_V_32_8_fu_51013_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_32_fu_51169_p3() {
    p_Val2_19_32_fu_51169_p3 = (!tmp_679_fu_51164_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_679_fu_51164_p2.read()[0].to_bool())? sel_tmp101_cast_fu_51156_p3.read(): z_V_33_8_fu_51140_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_33_fu_51296_p3() {
    p_Val2_19_33_fu_51296_p3 = (!tmp_699_fu_51291_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_699_fu_51291_p2.read()[0].to_bool())? sel_tmp104_cast_fu_51283_p3.read(): z_V_34_8_fu_51267_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_34_fu_51423_p3() {
    p_Val2_19_34_fu_51423_p3 = (!tmp_719_fu_51418_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_719_fu_51418_p2.read()[0].to_bool())? sel_tmp107_cast_fu_51410_p3.read(): z_V_35_8_fu_51394_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_35_fu_51550_p3() {
    p_Val2_19_35_fu_51550_p3 = (!tmp_739_fu_51545_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_739_fu_51545_p2.read()[0].to_bool())? sel_tmp110_cast_fu_51537_p3.read(): z_V_36_8_fu_51521_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_36_fu_51677_p3() {
    p_Val2_19_36_fu_51677_p3 = (!tmp_759_fu_51672_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_759_fu_51672_p2.read()[0].to_bool())? sel_tmp113_cast_fu_51664_p3.read(): z_V_37_8_fu_51648_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_37_fu_51804_p3() {
    p_Val2_19_37_fu_51804_p3 = (!tmp_779_fu_51799_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_779_fu_51799_p2.read()[0].to_bool())? sel_tmp116_cast_fu_51791_p3.read(): z_V_38_8_fu_51775_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_38_fu_51931_p3() {
    p_Val2_19_38_fu_51931_p3 = (!tmp_799_fu_51926_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_799_fu_51926_p2.read()[0].to_bool())? sel_tmp119_cast_fu_51918_p3.read(): z_V_39_8_fu_51902_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_39_fu_52058_p3() {
    p_Val2_19_39_fu_52058_p3 = (!tmp_819_fu_52053_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_819_fu_52053_p2.read()[0].to_bool())? sel_tmp122_cast_fu_52045_p3.read(): z_V_40_8_fu_52029_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_3_fu_47359_p3() {
    p_Val2_19_3_fu_47359_p3 = (!tmp_79_fu_47354_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_79_fu_47354_p2.read()[0].to_bool())? sel_tmp11_cast_fu_47346_p3.read(): z_V_3_8_fu_47330_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_40_fu_52185_p3() {
    p_Val2_19_40_fu_52185_p3 = (!tmp_839_fu_52180_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_839_fu_52180_p2.read()[0].to_bool())? sel_tmp125_cast_fu_52172_p3.read(): z_V_41_8_fu_52156_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_41_fu_52312_p3() {
    p_Val2_19_41_fu_52312_p3 = (!tmp_859_fu_52307_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_859_fu_52307_p2.read()[0].to_bool())? sel_tmp128_cast_fu_52299_p3.read(): z_V_42_8_fu_52283_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_42_fu_52439_p3() {
    p_Val2_19_42_fu_52439_p3 = (!tmp_879_fu_52434_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_879_fu_52434_p2.read()[0].to_bool())? sel_tmp131_cast_fu_52426_p3.read(): z_V_43_8_fu_52410_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_43_fu_52566_p3() {
    p_Val2_19_43_fu_52566_p3 = (!tmp_899_fu_52561_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_899_fu_52561_p2.read()[0].to_bool())? sel_tmp134_cast_fu_52553_p3.read(): z_V_44_8_fu_52537_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_44_fu_52693_p3() {
    p_Val2_19_44_fu_52693_p3 = (!tmp_919_fu_52688_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_919_fu_52688_p2.read()[0].to_bool())? sel_tmp137_cast_fu_52680_p3.read(): z_V_45_8_fu_52664_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_45_fu_52820_p3() {
    p_Val2_19_45_fu_52820_p3 = (!tmp_939_fu_52815_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_939_fu_52815_p2.read()[0].to_bool())? sel_tmp140_cast_fu_52807_p3.read(): z_V_46_8_fu_52791_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_46_fu_52947_p3() {
    p_Val2_19_46_fu_52947_p3 = (!tmp_959_fu_52942_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_959_fu_52942_p2.read()[0].to_bool())? sel_tmp143_cast_fu_52934_p3.read(): z_V_47_8_fu_52918_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_47_fu_53074_p3() {
    p_Val2_19_47_fu_53074_p3 = (!tmp_979_fu_53069_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_979_fu_53069_p2.read()[0].to_bool())? sel_tmp146_cast_fu_53061_p3.read(): z_V_48_8_fu_53045_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_48_fu_53201_p3() {
    p_Val2_19_48_fu_53201_p3 = (!tmp_999_fu_53196_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_999_fu_53196_p2.read()[0].to_bool())? sel_tmp149_cast_fu_53188_p3.read(): z_V_49_8_fu_53172_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_49_fu_53328_p3() {
    p_Val2_19_49_fu_53328_p3 = (!tmp_1019_fu_53323_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1019_fu_53323_p2.read()[0].to_bool())? sel_tmp152_cast_fu_53315_p3.read(): z_V_50_8_fu_53299_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_4_fu_47486_p3() {
    p_Val2_19_4_fu_47486_p3 = (!tmp_99_fu_47481_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_99_fu_47481_p2.read()[0].to_bool())? sel_tmp14_cast_fu_47473_p3.read(): z_V_4_8_fu_47457_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_50_fu_53455_p3() {
    p_Val2_19_50_fu_53455_p3 = (!tmp_1039_fu_53450_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1039_fu_53450_p2.read()[0].to_bool())? sel_tmp155_cast_fu_53442_p3.read(): z_V_51_8_fu_53426_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_51_fu_53582_p3() {
    p_Val2_19_51_fu_53582_p3 = (!tmp_1059_fu_53577_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1059_fu_53577_p2.read()[0].to_bool())? sel_tmp158_cast_fu_53569_p3.read(): z_V_52_8_fu_53553_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_52_fu_53709_p3() {
    p_Val2_19_52_fu_53709_p3 = (!tmp_1079_fu_53704_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1079_fu_53704_p2.read()[0].to_bool())? sel_tmp161_cast_fu_53696_p3.read(): z_V_53_8_fu_53680_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_53_fu_53836_p3() {
    p_Val2_19_53_fu_53836_p3 = (!tmp_1099_fu_53831_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1099_fu_53831_p2.read()[0].to_bool())? sel_tmp164_cast_fu_53823_p3.read(): z_V_54_8_fu_53807_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_54_fu_53963_p3() {
    p_Val2_19_54_fu_53963_p3 = (!tmp_1119_fu_53958_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1119_fu_53958_p2.read()[0].to_bool())? sel_tmp167_cast_fu_53950_p3.read(): z_V_55_8_fu_53934_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_55_fu_54090_p3() {
    p_Val2_19_55_fu_54090_p3 = (!tmp_1139_fu_54085_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1139_fu_54085_p2.read()[0].to_bool())? sel_tmp170_cast_fu_54077_p3.read(): z_V_56_8_fu_54061_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_56_fu_54217_p3() {
    p_Val2_19_56_fu_54217_p3 = (!tmp_1159_fu_54212_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1159_fu_54212_p2.read()[0].to_bool())? sel_tmp173_cast_fu_54204_p3.read(): z_V_57_8_fu_54188_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_57_fu_54344_p3() {
    p_Val2_19_57_fu_54344_p3 = (!tmp_1179_fu_54339_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1179_fu_54339_p2.read()[0].to_bool())? sel_tmp176_cast_fu_54331_p3.read(): z_V_58_8_fu_54315_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_58_fu_54471_p3() {
    p_Val2_19_58_fu_54471_p3 = (!tmp_1199_fu_54466_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1199_fu_54466_p2.read()[0].to_bool())? sel_tmp179_cast_fu_54458_p3.read(): z_V_59_8_fu_54442_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_59_fu_54598_p3() {
    p_Val2_19_59_fu_54598_p3 = (!tmp_1219_fu_54593_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1219_fu_54593_p2.read()[0].to_bool())? sel_tmp182_cast_fu_54585_p3.read(): z_V_60_8_fu_54569_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_5_fu_47613_p3() {
    p_Val2_19_5_fu_47613_p3 = (!tmp_119_fu_47608_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_119_fu_47608_p2.read()[0].to_bool())? sel_tmp17_cast_fu_47600_p3.read(): z_V_5_8_fu_47584_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_60_fu_54725_p3() {
    p_Val2_19_60_fu_54725_p3 = (!tmp_1239_fu_54720_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1239_fu_54720_p2.read()[0].to_bool())? sel_tmp185_cast_fu_54712_p3.read(): z_V_61_8_fu_54696_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_61_fu_54852_p3() {
    p_Val2_19_61_fu_54852_p3 = (!tmp_1259_fu_54847_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1259_fu_54847_p2.read()[0].to_bool())? sel_tmp188_cast_fu_54839_p3.read(): z_V_62_8_fu_54823_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_62_fu_54979_p3() {
    p_Val2_19_62_fu_54979_p3 = (!tmp_1279_fu_54974_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1279_fu_54974_p2.read()[0].to_bool())? sel_tmp191_cast_fu_54966_p3.read(): z_V_63_8_fu_54950_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_63_fu_55106_p3() {
    p_Val2_19_63_fu_55106_p3 = (!tmp_1299_fu_55101_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1299_fu_55101_p2.read()[0].to_bool())? sel_tmp194_cast_fu_55093_p3.read(): z_V_64_8_fu_55077_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_64_fu_55233_p3() {
    p_Val2_19_64_fu_55233_p3 = (!tmp_1319_fu_55228_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1319_fu_55228_p2.read()[0].to_bool())? sel_tmp197_cast_fu_55220_p3.read(): z_V_65_8_fu_55204_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_65_fu_55360_p3() {
    p_Val2_19_65_fu_55360_p3 = (!tmp_1339_fu_55355_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1339_fu_55355_p2.read()[0].to_bool())? sel_tmp200_cast_fu_55347_p3.read(): z_V_66_8_fu_55331_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_66_fu_55487_p3() {
    p_Val2_19_66_fu_55487_p3 = (!tmp_1359_fu_55482_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1359_fu_55482_p2.read()[0].to_bool())? sel_tmp203_cast_fu_55474_p3.read(): z_V_67_8_fu_55458_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_67_fu_55614_p3() {
    p_Val2_19_67_fu_55614_p3 = (!tmp_1379_fu_55609_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1379_fu_55609_p2.read()[0].to_bool())? sel_tmp206_cast_fu_55601_p3.read(): z_V_68_8_fu_55585_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_68_fu_55741_p3() {
    p_Val2_19_68_fu_55741_p3 = (!tmp_1399_fu_55736_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1399_fu_55736_p2.read()[0].to_bool())? sel_tmp209_cast_fu_55728_p3.read(): z_V_69_8_fu_55712_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_69_fu_55868_p3() {
    p_Val2_19_69_fu_55868_p3 = (!tmp_1419_fu_55863_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_1419_fu_55863_p2.read()[0].to_bool())? sel_tmp212_cast_fu_55855_p3.read(): z_V_70_8_fu_55839_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_6_fu_47740_p3() {
    p_Val2_19_6_fu_47740_p3 = (!tmp_139_fu_47735_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_139_fu_47735_p2.read()[0].to_bool())? sel_tmp20_cast_fu_47727_p3.read(): z_V_6_8_fu_47711_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_7_fu_47867_p3() {
    p_Val2_19_7_fu_47867_p3 = (!tmp_159_fu_47862_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_159_fu_47862_p2.read()[0].to_bool())? sel_tmp23_cast_fu_47854_p3.read(): z_V_7_8_fu_47838_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_8_fu_47994_p3() {
    p_Val2_19_8_fu_47994_p3 = (!tmp_179_fu_47989_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_179_fu_47989_p2.read()[0].to_bool())? sel_tmp26_cast_fu_47981_p3.read(): z_V_8_8_fu_47965_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_9_fu_48121_p3() {
    p_Val2_19_9_fu_48121_p3 = (!tmp_199_fu_48116_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_199_fu_48116_p2.read()[0].to_bool())? sel_tmp29_cast_fu_48108_p3.read(): z_V_9_8_fu_48092_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_19_s_fu_48248_p3() {
    p_Val2_19_s_fu_48248_p3 = (!tmp_219_fu_48243_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_219_fu_48243_p2.read()[0].to_bool())? sel_tmp32_cast_fu_48235_p3.read(): z_V_10_8_fu_48219_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_0_1_fu_3432_p2() {
    p_Val2_4_0_1_fu_3432_p2 = (!tmp_27_0_cast_fu_3428_p1.read().is_01() || !p_Val2_4_0_cast_fu_3398_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_0_cast_fu_3428_p1.read()) + sc_biguint<15>(p_Val2_4_0_cast_fu_3398_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_2_fu_11772_p2() {
    p_Val2_4_0_2_fu_11772_p2 = (!tmp_27_0_1_cast_fu_11768_p1.read().is_01() || !x_V_1_0_1_fu_11734_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_0_1_cast_fu_11768_p1.read()) + sc_biguint<15>(x_V_1_0_1_fu_11734_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_3_fu_11850_p2() {
    p_Val2_4_0_3_fu_11850_p2 = (!tmp_5_fu_11846_p1.read().is_01() || !x_V_1_0_2_fu_11814_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_5_fu_11846_p1.read()) + sc_biguint<15>(x_V_1_0_2_fu_11814_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_4_fu_25516_p2() {
    p_Val2_4_0_4_fu_25516_p2 = (!tmp_9_fu_25513_p1.read().is_01() || !x_V_1_0_3_reg_60459.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_9_fu_25513_p1.read()) + sc_biguint<15>(x_V_1_0_3_reg_60459.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_5_fu_25578_p2() {
    p_Val2_4_0_5_fu_25578_p2 = (!tmp_11_fu_25574_p1.read().is_01() || !x_V_1_0_4_fu_25542_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_11_fu_25574_p1.read()) + sc_biguint<15>(x_V_1_0_4_fu_25542_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_6_fu_36071_p2() {
    p_Val2_4_0_6_fu_36071_p2 = (!tmp_13_fu_36068_p1.read().is_01() || !x_V_1_0_5_reg_62873.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_13_fu_36068_p1.read()) + sc_biguint<15>(x_V_1_0_5_reg_62873.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_0_cast_fu_3398_p1() {
    p_Val2_4_0_cast_fu_3398_p1 = esl_zext<15,14>(p_Val2_4_fu_3392_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_10_1_fu_4612_p2() {
    p_Val2_4_10_1_fu_4612_p2 = (!tmp_27_10_cast_fu_4608_p1.read().is_01() || !p_Val2_4_10_cast_fu_4578_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_10_cast_fu_4608_p1.read()) + sc_biguint<15>(p_Val2_4_10_cast_fu_4578_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_2_fu_13712_p2() {
    p_Val2_4_10_2_fu_13712_p2 = (!tmp_27_10_1_cast_fu_13708_p1.read().is_01() || !x_V_1_10_1_fu_13674_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_10_1_cast_fu_13708_p1.read()) + sc_biguint<15>(x_V_1_10_1_fu_13674_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_3_fu_13790_p2() {
    p_Val2_4_10_3_fu_13790_p2 = (!tmp_208_fu_13786_p1.read().is_01() || !x_V_1_10_2_fu_13754_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_208_fu_13786_p1.read()) + sc_biguint<15>(x_V_1_10_2_fu_13754_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_4_fu_26996_p2() {
    p_Val2_4_10_4_fu_26996_p2 = (!tmp_210_fu_26993_p1.read().is_01() || !x_V_1_10_3_reg_60799.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_210_fu_26993_p1.read()) + sc_biguint<15>(x_V_1_10_3_reg_60799.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_5_fu_27058_p2() {
    p_Val2_4_10_5_fu_27058_p2 = (!tmp_212_fu_27054_p1.read().is_01() || !x_V_1_10_4_fu_27022_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_212_fu_27054_p1.read()) + sc_biguint<15>(x_V_1_10_4_fu_27022_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_6_fu_37601_p2() {
    p_Val2_4_10_6_fu_37601_p2 = (!tmp_214_fu_37598_p1.read().is_01() || !x_V_1_10_5_reg_63213.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_214_fu_37598_p1.read()) + sc_biguint<15>(x_V_1_10_5_reg_63213.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_10_cast_fu_4578_p1() {
    p_Val2_4_10_cast_fu_4578_p1 = esl_zext<15,14>(p_Val2_4_s_fu_4572_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_10_fu_4690_p2() {
    p_Val2_4_10_fu_4690_p2 = (!x0_V_10_cast_fu_4674_p1.read().is_01() || !y0_V_10_cast_fu_4662_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_10_cast_fu_4674_p1.read()) + sc_biguint<14>(y0_V_10_cast_fu_4662_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_1_fu_4730_p2() {
    p_Val2_4_11_1_fu_4730_p2 = (!tmp_27_11_cast_fu_4726_p1.read().is_01() || !p_Val2_4_11_cast_fu_4696_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_11_cast_fu_4726_p1.read()) + sc_biguint<15>(p_Val2_4_11_cast_fu_4696_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_2_fu_13906_p2() {
    p_Val2_4_11_2_fu_13906_p2 = (!tmp_27_11_1_cast_fu_13902_p1.read().is_01() || !x_V_1_11_1_fu_13868_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_11_1_cast_fu_13902_p1.read()) + sc_biguint<15>(x_V_1_11_1_fu_13868_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_3_fu_13984_p2() {
    p_Val2_4_11_3_fu_13984_p2 = (!tmp_228_fu_13980_p1.read().is_01() || !x_V_1_11_2_fu_13948_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_228_fu_13980_p1.read()) + sc_biguint<15>(x_V_1_11_2_fu_13948_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_4_fu_27144_p2() {
    p_Val2_4_11_4_fu_27144_p2 = (!tmp_230_fu_27141_p1.read().is_01() || !x_V_1_11_3_reg_60833.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_230_fu_27141_p1.read()) + sc_biguint<15>(x_V_1_11_3_reg_60833.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_5_fu_27206_p2() {
    p_Val2_4_11_5_fu_27206_p2 = (!tmp_232_fu_27202_p1.read().is_01() || !x_V_1_11_4_fu_27170_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_232_fu_27202_p1.read()) + sc_biguint<15>(x_V_1_11_4_fu_27170_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_6_fu_37754_p2() {
    p_Val2_4_11_6_fu_37754_p2 = (!tmp_234_fu_37751_p1.read().is_01() || !x_V_1_11_5_reg_63247.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_234_fu_37751_p1.read()) + sc_biguint<15>(x_V_1_11_5_reg_63247.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_11_cast_fu_4696_p1() {
    p_Val2_4_11_cast_fu_4696_p1 = esl_zext<15,14>(p_Val2_4_10_fu_4690_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_11_fu_4808_p2() {
    p_Val2_4_11_fu_4808_p2 = (!x0_V_11_cast_fu_4792_p1.read().is_01() || !y0_V_11_cast_fu_4780_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_11_cast_fu_4792_p1.read()) + sc_biguint<14>(y0_V_11_cast_fu_4780_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_1_fu_4848_p2() {
    p_Val2_4_12_1_fu_4848_p2 = (!tmp_27_12_cast_fu_4844_p1.read().is_01() || !p_Val2_4_12_cast_fu_4814_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_12_cast_fu_4844_p1.read()) + sc_biguint<15>(p_Val2_4_12_cast_fu_4814_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_2_fu_14100_p2() {
    p_Val2_4_12_2_fu_14100_p2 = (!tmp_27_12_1_cast_fu_14096_p1.read().is_01() || !x_V_1_12_1_fu_14062_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_12_1_cast_fu_14096_p1.read()) + sc_biguint<15>(x_V_1_12_1_fu_14062_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_3_fu_14178_p2() {
    p_Val2_4_12_3_fu_14178_p2 = (!tmp_248_fu_14174_p1.read().is_01() || !x_V_1_12_2_fu_14142_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_248_fu_14174_p1.read()) + sc_biguint<15>(x_V_1_12_2_fu_14142_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_4_fu_27292_p2() {
    p_Val2_4_12_4_fu_27292_p2 = (!tmp_250_fu_27289_p1.read().is_01() || !x_V_1_12_3_reg_60867.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_250_fu_27289_p1.read()) + sc_biguint<15>(x_V_1_12_3_reg_60867.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_5_fu_27354_p2() {
    p_Val2_4_12_5_fu_27354_p2 = (!tmp_252_fu_27350_p1.read().is_01() || !x_V_1_12_4_fu_27318_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_252_fu_27350_p1.read()) + sc_biguint<15>(x_V_1_12_4_fu_27318_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_6_fu_37907_p2() {
    p_Val2_4_12_6_fu_37907_p2 = (!tmp_254_fu_37904_p1.read().is_01() || !x_V_1_12_5_reg_63281.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_254_fu_37904_p1.read()) + sc_biguint<15>(x_V_1_12_5_reg_63281.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_12_cast_fu_4814_p1() {
    p_Val2_4_12_cast_fu_4814_p1 = esl_zext<15,14>(p_Val2_4_11_fu_4808_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_12_fu_4926_p2() {
    p_Val2_4_12_fu_4926_p2 = (!x0_V_12_cast_fu_4910_p1.read().is_01() || !y0_V_12_cast_fu_4898_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_12_cast_fu_4910_p1.read()) + sc_biguint<14>(y0_V_12_cast_fu_4898_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_1_fu_4966_p2() {
    p_Val2_4_13_1_fu_4966_p2 = (!tmp_27_13_cast_fu_4962_p1.read().is_01() || !p_Val2_4_13_cast_fu_4932_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_13_cast_fu_4962_p1.read()) + sc_biguint<15>(p_Val2_4_13_cast_fu_4932_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_2_fu_14294_p2() {
    p_Val2_4_13_2_fu_14294_p2 = (!tmp_27_13_1_cast_fu_14290_p1.read().is_01() || !x_V_1_13_1_fu_14256_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_13_1_cast_fu_14290_p1.read()) + sc_biguint<15>(x_V_1_13_1_fu_14256_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_3_fu_14372_p2() {
    p_Val2_4_13_3_fu_14372_p2 = (!tmp_268_fu_14368_p1.read().is_01() || !x_V_1_13_2_fu_14336_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_268_fu_14368_p1.read()) + sc_biguint<15>(x_V_1_13_2_fu_14336_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_4_fu_27440_p2() {
    p_Val2_4_13_4_fu_27440_p2 = (!tmp_270_fu_27437_p1.read().is_01() || !x_V_1_13_3_reg_60901.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_270_fu_27437_p1.read()) + sc_biguint<15>(x_V_1_13_3_reg_60901.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_5_fu_27502_p2() {
    p_Val2_4_13_5_fu_27502_p2 = (!tmp_272_fu_27498_p1.read().is_01() || !x_V_1_13_4_fu_27466_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_272_fu_27498_p1.read()) + sc_biguint<15>(x_V_1_13_4_fu_27466_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_6_fu_38060_p2() {
    p_Val2_4_13_6_fu_38060_p2 = (!tmp_274_fu_38057_p1.read().is_01() || !x_V_1_13_5_reg_63315.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_274_fu_38057_p1.read()) + sc_biguint<15>(x_V_1_13_5_reg_63315.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_13_cast_fu_4932_p1() {
    p_Val2_4_13_cast_fu_4932_p1 = esl_zext<15,14>(p_Val2_4_12_fu_4926_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_13_fu_5044_p2() {
    p_Val2_4_13_fu_5044_p2 = (!x0_V_13_cast_fu_5028_p1.read().is_01() || !y0_V_13_cast_fu_5016_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_13_cast_fu_5028_p1.read()) + sc_biguint<14>(y0_V_13_cast_fu_5016_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_1_fu_5084_p2() {
    p_Val2_4_14_1_fu_5084_p2 = (!tmp_27_14_cast_fu_5080_p1.read().is_01() || !p_Val2_4_14_cast_fu_5050_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_14_cast_fu_5080_p1.read()) + sc_biguint<15>(p_Val2_4_14_cast_fu_5050_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_2_fu_14488_p2() {
    p_Val2_4_14_2_fu_14488_p2 = (!tmp_27_14_1_cast_fu_14484_p1.read().is_01() || !x_V_1_14_1_fu_14450_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_14_1_cast_fu_14484_p1.read()) + sc_biguint<15>(x_V_1_14_1_fu_14450_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_3_fu_14566_p2() {
    p_Val2_4_14_3_fu_14566_p2 = (!tmp_288_fu_14562_p1.read().is_01() || !x_V_1_14_2_fu_14530_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_288_fu_14562_p1.read()) + sc_biguint<15>(x_V_1_14_2_fu_14530_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_4_fu_27588_p2() {
    p_Val2_4_14_4_fu_27588_p2 = (!tmp_290_fu_27585_p1.read().is_01() || !x_V_1_14_3_reg_60935.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_290_fu_27585_p1.read()) + sc_biguint<15>(x_V_1_14_3_reg_60935.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_5_fu_27650_p2() {
    p_Val2_4_14_5_fu_27650_p2 = (!tmp_292_fu_27646_p1.read().is_01() || !x_V_1_14_4_fu_27614_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_292_fu_27646_p1.read()) + sc_biguint<15>(x_V_1_14_4_fu_27614_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_6_fu_38213_p2() {
    p_Val2_4_14_6_fu_38213_p2 = (!tmp_294_fu_38210_p1.read().is_01() || !x_V_1_14_5_reg_63349.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_294_fu_38210_p1.read()) + sc_biguint<15>(x_V_1_14_5_reg_63349.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_14_cast_fu_5050_p1() {
    p_Val2_4_14_cast_fu_5050_p1 = esl_zext<15,14>(p_Val2_4_13_fu_5044_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_14_fu_5162_p2() {
    p_Val2_4_14_fu_5162_p2 = (!x0_V_14_cast_fu_5146_p1.read().is_01() || !y0_V_14_cast_fu_5134_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_14_cast_fu_5146_p1.read()) + sc_biguint<14>(y0_V_14_cast_fu_5134_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_1_fu_5202_p2() {
    p_Val2_4_15_1_fu_5202_p2 = (!tmp_27_15_cast_fu_5198_p1.read().is_01() || !p_Val2_4_15_cast_fu_5168_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_15_cast_fu_5198_p1.read()) + sc_biguint<15>(p_Val2_4_15_cast_fu_5168_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_2_fu_14682_p2() {
    p_Val2_4_15_2_fu_14682_p2 = (!tmp_27_15_1_cast_fu_14678_p1.read().is_01() || !x_V_1_15_1_fu_14644_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_15_1_cast_fu_14678_p1.read()) + sc_biguint<15>(x_V_1_15_1_fu_14644_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_3_fu_14760_p2() {
    p_Val2_4_15_3_fu_14760_p2 = (!tmp_308_fu_14756_p1.read().is_01() || !x_V_1_15_2_fu_14724_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_308_fu_14756_p1.read()) + sc_biguint<15>(x_V_1_15_2_fu_14724_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_4_fu_27736_p2() {
    p_Val2_4_15_4_fu_27736_p2 = (!tmp_310_fu_27733_p1.read().is_01() || !x_V_1_15_3_reg_60969.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_310_fu_27733_p1.read()) + sc_biguint<15>(x_V_1_15_3_reg_60969.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_5_fu_27798_p2() {
    p_Val2_4_15_5_fu_27798_p2 = (!tmp_312_fu_27794_p1.read().is_01() || !x_V_1_15_4_fu_27762_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_312_fu_27794_p1.read()) + sc_biguint<15>(x_V_1_15_4_fu_27762_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_6_fu_38366_p2() {
    p_Val2_4_15_6_fu_38366_p2 = (!tmp_314_fu_38363_p1.read().is_01() || !x_V_1_15_5_reg_63383.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_314_fu_38363_p1.read()) + sc_biguint<15>(x_V_1_15_5_reg_63383.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_15_cast_fu_5168_p1() {
    p_Val2_4_15_cast_fu_5168_p1 = esl_zext<15,14>(p_Val2_4_14_fu_5162_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_15_fu_5280_p2() {
    p_Val2_4_15_fu_5280_p2 = (!x0_V_15_cast_fu_5264_p1.read().is_01() || !y0_V_15_cast_fu_5252_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_15_cast_fu_5264_p1.read()) + sc_biguint<14>(y0_V_15_cast_fu_5252_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_1_fu_5320_p2() {
    p_Val2_4_16_1_fu_5320_p2 = (!tmp_27_16_cast_fu_5316_p1.read().is_01() || !p_Val2_4_16_cast_fu_5286_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_16_cast_fu_5316_p1.read()) + sc_biguint<15>(p_Val2_4_16_cast_fu_5286_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_2_fu_14876_p2() {
    p_Val2_4_16_2_fu_14876_p2 = (!tmp_27_16_1_cast_fu_14872_p1.read().is_01() || !x_V_1_16_1_fu_14838_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_16_1_cast_fu_14872_p1.read()) + sc_biguint<15>(x_V_1_16_1_fu_14838_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_3_fu_14954_p2() {
    p_Val2_4_16_3_fu_14954_p2 = (!tmp_328_fu_14950_p1.read().is_01() || !x_V_1_16_2_fu_14918_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_328_fu_14950_p1.read()) + sc_biguint<15>(x_V_1_16_2_fu_14918_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_4_fu_27884_p2() {
    p_Val2_4_16_4_fu_27884_p2 = (!tmp_330_fu_27881_p1.read().is_01() || !x_V_1_16_3_reg_61003.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_330_fu_27881_p1.read()) + sc_biguint<15>(x_V_1_16_3_reg_61003.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_5_fu_27946_p2() {
    p_Val2_4_16_5_fu_27946_p2 = (!tmp_332_fu_27942_p1.read().is_01() || !x_V_1_16_4_fu_27910_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_332_fu_27942_p1.read()) + sc_biguint<15>(x_V_1_16_4_fu_27910_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_6_fu_38519_p2() {
    p_Val2_4_16_6_fu_38519_p2 = (!tmp_334_fu_38516_p1.read().is_01() || !x_V_1_16_5_reg_63417.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_334_fu_38516_p1.read()) + sc_biguint<15>(x_V_1_16_5_reg_63417.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_16_cast_fu_5286_p1() {
    p_Val2_4_16_cast_fu_5286_p1 = esl_zext<15,14>(p_Val2_4_15_fu_5280_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_16_fu_5398_p2() {
    p_Val2_4_16_fu_5398_p2 = (!x0_V_16_cast_fu_5382_p1.read().is_01() || !y0_V_16_cast_fu_5370_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_16_cast_fu_5382_p1.read()) + sc_biguint<14>(y0_V_16_cast_fu_5370_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_1_fu_5438_p2() {
    p_Val2_4_17_1_fu_5438_p2 = (!tmp_27_17_cast_fu_5434_p1.read().is_01() || !p_Val2_4_17_cast_fu_5404_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_17_cast_fu_5434_p1.read()) + sc_biguint<15>(p_Val2_4_17_cast_fu_5404_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_2_fu_15070_p2() {
    p_Val2_4_17_2_fu_15070_p2 = (!tmp_27_17_1_cast_fu_15066_p1.read().is_01() || !x_V_1_17_1_fu_15032_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_17_1_cast_fu_15066_p1.read()) + sc_biguint<15>(x_V_1_17_1_fu_15032_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_3_fu_15148_p2() {
    p_Val2_4_17_3_fu_15148_p2 = (!tmp_348_fu_15144_p1.read().is_01() || !x_V_1_17_2_fu_15112_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_348_fu_15144_p1.read()) + sc_biguint<15>(x_V_1_17_2_fu_15112_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_4_fu_28032_p2() {
    p_Val2_4_17_4_fu_28032_p2 = (!tmp_350_fu_28029_p1.read().is_01() || !x_V_1_17_3_reg_61037.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_350_fu_28029_p1.read()) + sc_biguint<15>(x_V_1_17_3_reg_61037.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_5_fu_28094_p2() {
    p_Val2_4_17_5_fu_28094_p2 = (!tmp_352_fu_28090_p1.read().is_01() || !x_V_1_17_4_fu_28058_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_352_fu_28090_p1.read()) + sc_biguint<15>(x_V_1_17_4_fu_28058_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_6_fu_38672_p2() {
    p_Val2_4_17_6_fu_38672_p2 = (!tmp_354_fu_38669_p1.read().is_01() || !x_V_1_17_5_reg_63451.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_354_fu_38669_p1.read()) + sc_biguint<15>(x_V_1_17_5_reg_63451.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_17_cast_fu_5404_p1() {
    p_Val2_4_17_cast_fu_5404_p1 = esl_zext<15,14>(p_Val2_4_16_fu_5398_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_17_fu_5516_p2() {
    p_Val2_4_17_fu_5516_p2 = (!x0_V_17_cast_fu_5500_p1.read().is_01() || !y0_V_17_cast_fu_5488_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_17_cast_fu_5500_p1.read()) + sc_biguint<14>(y0_V_17_cast_fu_5488_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_1_fu_5556_p2() {
    p_Val2_4_18_1_fu_5556_p2 = (!tmp_27_18_cast_fu_5552_p1.read().is_01() || !p_Val2_4_18_cast_fu_5522_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_18_cast_fu_5552_p1.read()) + sc_biguint<15>(p_Val2_4_18_cast_fu_5522_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_2_fu_15264_p2() {
    p_Val2_4_18_2_fu_15264_p2 = (!tmp_27_18_1_cast_fu_15260_p1.read().is_01() || !x_V_1_18_1_fu_15226_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_18_1_cast_fu_15260_p1.read()) + sc_biguint<15>(x_V_1_18_1_fu_15226_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_3_fu_15342_p2() {
    p_Val2_4_18_3_fu_15342_p2 = (!tmp_368_fu_15338_p1.read().is_01() || !x_V_1_18_2_fu_15306_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_368_fu_15338_p1.read()) + sc_biguint<15>(x_V_1_18_2_fu_15306_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_4_fu_28180_p2() {
    p_Val2_4_18_4_fu_28180_p2 = (!tmp_370_fu_28177_p1.read().is_01() || !x_V_1_18_3_reg_61071.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_370_fu_28177_p1.read()) + sc_biguint<15>(x_V_1_18_3_reg_61071.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_5_fu_28242_p2() {
    p_Val2_4_18_5_fu_28242_p2 = (!tmp_372_fu_28238_p1.read().is_01() || !x_V_1_18_4_fu_28206_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_372_fu_28238_p1.read()) + sc_biguint<15>(x_V_1_18_4_fu_28206_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_6_fu_38825_p2() {
    p_Val2_4_18_6_fu_38825_p2 = (!tmp_374_fu_38822_p1.read().is_01() || !x_V_1_18_5_reg_63485.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_374_fu_38822_p1.read()) + sc_biguint<15>(x_V_1_18_5_reg_63485.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_18_cast_fu_5522_p1() {
    p_Val2_4_18_cast_fu_5522_p1 = esl_zext<15,14>(p_Val2_4_17_fu_5516_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_18_fu_5634_p2() {
    p_Val2_4_18_fu_5634_p2 = (!x0_V_18_cast_fu_5618_p1.read().is_01() || !y0_V_18_cast_fu_5606_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_18_cast_fu_5618_p1.read()) + sc_biguint<14>(y0_V_18_cast_fu_5606_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_1_fu_5674_p2() {
    p_Val2_4_19_1_fu_5674_p2 = (!tmp_27_19_cast_fu_5670_p1.read().is_01() || !p_Val2_4_19_cast_fu_5640_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_19_cast_fu_5670_p1.read()) + sc_biguint<15>(p_Val2_4_19_cast_fu_5640_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_2_fu_15458_p2() {
    p_Val2_4_19_2_fu_15458_p2 = (!tmp_27_19_1_cast_fu_15454_p1.read().is_01() || !x_V_1_19_1_fu_15420_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_19_1_cast_fu_15454_p1.read()) + sc_biguint<15>(x_V_1_19_1_fu_15420_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_3_fu_15536_p2() {
    p_Val2_4_19_3_fu_15536_p2 = (!tmp_388_fu_15532_p1.read().is_01() || !x_V_1_19_2_fu_15500_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_388_fu_15532_p1.read()) + sc_biguint<15>(x_V_1_19_2_fu_15500_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_4_fu_28328_p2() {
    p_Val2_4_19_4_fu_28328_p2 = (!tmp_390_fu_28325_p1.read().is_01() || !x_V_1_19_3_reg_61105.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_390_fu_28325_p1.read()) + sc_biguint<15>(x_V_1_19_3_reg_61105.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_5_fu_28390_p2() {
    p_Val2_4_19_5_fu_28390_p2 = (!tmp_392_fu_28386_p1.read().is_01() || !x_V_1_19_4_fu_28354_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_392_fu_28386_p1.read()) + sc_biguint<15>(x_V_1_19_4_fu_28354_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_6_fu_38978_p2() {
    p_Val2_4_19_6_fu_38978_p2 = (!tmp_394_fu_38975_p1.read().is_01() || !x_V_1_19_5_reg_63519.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_394_fu_38975_p1.read()) + sc_biguint<15>(x_V_1_19_5_reg_63519.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_19_cast_fu_5640_p1() {
    p_Val2_4_19_cast_fu_5640_p1 = esl_zext<15,14>(p_Val2_4_18_fu_5634_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_19_fu_5752_p2() {
    p_Val2_4_19_fu_5752_p2 = (!x0_V_19_cast_fu_5736_p1.read().is_01() || !y0_V_19_cast_fu_5724_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_19_cast_fu_5736_p1.read()) + sc_biguint<14>(y0_V_19_cast_fu_5724_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_1_fu_3550_p2() {
    p_Val2_4_1_1_fu_3550_p2 = (!tmp_27_1_cast_fu_3546_p1.read().is_01() || !p_Val2_4_1_cast_fu_3516_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_1_cast_fu_3546_p1.read()) + sc_biguint<15>(p_Val2_4_1_cast_fu_3516_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_2_fu_11966_p2() {
    p_Val2_4_1_2_fu_11966_p2 = (!tmp_27_1_1_cast_fu_11962_p1.read().is_01() || !x_V_1_1_1_fu_11928_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_1_1_cast_fu_11962_p1.read()) + sc_biguint<15>(x_V_1_1_1_fu_11928_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_3_fu_12044_p2() {
    p_Val2_4_1_3_fu_12044_p2 = (!tmp_28_fu_12040_p1.read().is_01() || !x_V_1_1_2_fu_12008_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_28_fu_12040_p1.read()) + sc_biguint<15>(x_V_1_1_2_fu_12008_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_4_fu_25664_p2() {
    p_Val2_4_1_4_fu_25664_p2 = (!tmp_30_fu_25661_p1.read().is_01() || !x_V_1_1_3_reg_60493.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_30_fu_25661_p1.read()) + sc_biguint<15>(x_V_1_1_3_reg_60493.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_5_fu_25726_p2() {
    p_Val2_4_1_5_fu_25726_p2 = (!tmp_32_fu_25722_p1.read().is_01() || !x_V_1_1_4_fu_25690_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_32_fu_25722_p1.read()) + sc_biguint<15>(x_V_1_1_4_fu_25690_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_6_fu_36224_p2() {
    p_Val2_4_1_6_fu_36224_p2 = (!tmp_34_fu_36221_p1.read().is_01() || !x_V_1_1_5_reg_62907.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_34_fu_36221_p1.read()) + sc_biguint<15>(x_V_1_1_5_reg_62907.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_1_cast_fu_3516_p1() {
    p_Val2_4_1_cast_fu_3516_p1 = esl_zext<15,14>(p_Val2_4_1_fu_3510_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_1_fu_3510_p2() {
    p_Val2_4_1_fu_3510_p2 = (!x0_V_1_cast_fu_3494_p1.read().is_01() || !y0_V_1_cast_fu_3482_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_1_cast_fu_3494_p1.read()) + sc_biguint<14>(y0_V_1_cast_fu_3482_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_1_fu_5792_p2() {
    p_Val2_4_20_1_fu_5792_p2 = (!tmp_27_20_cast_fu_5788_p1.read().is_01() || !p_Val2_4_20_cast_fu_5758_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_20_cast_fu_5788_p1.read()) + sc_biguint<15>(p_Val2_4_20_cast_fu_5758_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_2_fu_15652_p2() {
    p_Val2_4_20_2_fu_15652_p2 = (!tmp_27_20_1_cast_fu_15648_p1.read().is_01() || !x_V_1_20_1_fu_15614_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_20_1_cast_fu_15648_p1.read()) + sc_biguint<15>(x_V_1_20_1_fu_15614_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_3_fu_15730_p2() {
    p_Val2_4_20_3_fu_15730_p2 = (!tmp_408_fu_15726_p1.read().is_01() || !x_V_1_20_2_fu_15694_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_408_fu_15726_p1.read()) + sc_biguint<15>(x_V_1_20_2_fu_15694_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_4_fu_28476_p2() {
    p_Val2_4_20_4_fu_28476_p2 = (!tmp_410_fu_28473_p1.read().is_01() || !x_V_1_20_3_reg_61139.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_410_fu_28473_p1.read()) + sc_biguint<15>(x_V_1_20_3_reg_61139.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_5_fu_28538_p2() {
    p_Val2_4_20_5_fu_28538_p2 = (!tmp_412_fu_28534_p1.read().is_01() || !x_V_1_20_4_fu_28502_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_412_fu_28534_p1.read()) + sc_biguint<15>(x_V_1_20_4_fu_28502_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_6_fu_39131_p2() {
    p_Val2_4_20_6_fu_39131_p2 = (!tmp_414_fu_39128_p1.read().is_01() || !x_V_1_20_5_reg_63553.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_414_fu_39128_p1.read()) + sc_biguint<15>(x_V_1_20_5_reg_63553.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_20_cast_fu_5758_p1() {
    p_Val2_4_20_cast_fu_5758_p1 = esl_zext<15,14>(p_Val2_4_19_fu_5752_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_20_fu_5870_p2() {
    p_Val2_4_20_fu_5870_p2 = (!x0_V_20_cast_fu_5854_p1.read().is_01() || !y0_V_20_cast_fu_5842_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_20_cast_fu_5854_p1.read()) + sc_biguint<14>(y0_V_20_cast_fu_5842_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_1_fu_5910_p2() {
    p_Val2_4_21_1_fu_5910_p2 = (!tmp_27_21_cast_fu_5906_p1.read().is_01() || !p_Val2_4_21_cast_fu_5876_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_21_cast_fu_5906_p1.read()) + sc_biguint<15>(p_Val2_4_21_cast_fu_5876_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_2_fu_15846_p2() {
    p_Val2_4_21_2_fu_15846_p2 = (!tmp_27_21_1_cast_fu_15842_p1.read().is_01() || !x_V_1_21_1_fu_15808_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_21_1_cast_fu_15842_p1.read()) + sc_biguint<15>(x_V_1_21_1_fu_15808_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_3_fu_15924_p2() {
    p_Val2_4_21_3_fu_15924_p2 = (!tmp_428_fu_15920_p1.read().is_01() || !x_V_1_21_2_fu_15888_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_428_fu_15920_p1.read()) + sc_biguint<15>(x_V_1_21_2_fu_15888_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_4_fu_28624_p2() {
    p_Val2_4_21_4_fu_28624_p2 = (!tmp_430_fu_28621_p1.read().is_01() || !x_V_1_21_3_reg_61173.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_430_fu_28621_p1.read()) + sc_biguint<15>(x_V_1_21_3_reg_61173.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_5_fu_28686_p2() {
    p_Val2_4_21_5_fu_28686_p2 = (!tmp_432_fu_28682_p1.read().is_01() || !x_V_1_21_4_fu_28650_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_432_fu_28682_p1.read()) + sc_biguint<15>(x_V_1_21_4_fu_28650_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_6_fu_39284_p2() {
    p_Val2_4_21_6_fu_39284_p2 = (!tmp_434_fu_39281_p1.read().is_01() || !x_V_1_21_5_reg_63587.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_434_fu_39281_p1.read()) + sc_biguint<15>(x_V_1_21_5_reg_63587.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_21_cast_fu_5876_p1() {
    p_Val2_4_21_cast_fu_5876_p1 = esl_zext<15,14>(p_Val2_4_20_fu_5870_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_21_fu_5988_p2() {
    p_Val2_4_21_fu_5988_p2 = (!x0_V_21_cast_fu_5972_p1.read().is_01() || !y0_V_21_cast_fu_5960_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_21_cast_fu_5972_p1.read()) + sc_biguint<14>(y0_V_21_cast_fu_5960_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_1_fu_6028_p2() {
    p_Val2_4_22_1_fu_6028_p2 = (!tmp_27_22_cast_fu_6024_p1.read().is_01() || !p_Val2_4_22_cast_fu_5994_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_22_cast_fu_6024_p1.read()) + sc_biguint<15>(p_Val2_4_22_cast_fu_5994_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_2_fu_16040_p2() {
    p_Val2_4_22_2_fu_16040_p2 = (!tmp_27_22_1_cast_fu_16036_p1.read().is_01() || !x_V_1_22_1_fu_16002_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_22_1_cast_fu_16036_p1.read()) + sc_biguint<15>(x_V_1_22_1_fu_16002_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_3_fu_16118_p2() {
    p_Val2_4_22_3_fu_16118_p2 = (!tmp_448_fu_16114_p1.read().is_01() || !x_V_1_22_2_fu_16082_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_448_fu_16114_p1.read()) + sc_biguint<15>(x_V_1_22_2_fu_16082_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_4_fu_28772_p2() {
    p_Val2_4_22_4_fu_28772_p2 = (!tmp_450_fu_28769_p1.read().is_01() || !x_V_1_22_3_reg_61207.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_450_fu_28769_p1.read()) + sc_biguint<15>(x_V_1_22_3_reg_61207.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_5_fu_28834_p2() {
    p_Val2_4_22_5_fu_28834_p2 = (!tmp_452_fu_28830_p1.read().is_01() || !x_V_1_22_4_fu_28798_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_452_fu_28830_p1.read()) + sc_biguint<15>(x_V_1_22_4_fu_28798_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_6_fu_39437_p2() {
    p_Val2_4_22_6_fu_39437_p2 = (!tmp_454_fu_39434_p1.read().is_01() || !x_V_1_22_5_reg_63621.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_454_fu_39434_p1.read()) + sc_biguint<15>(x_V_1_22_5_reg_63621.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_22_cast_fu_5994_p1() {
    p_Val2_4_22_cast_fu_5994_p1 = esl_zext<15,14>(p_Val2_4_21_fu_5988_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_22_fu_6106_p2() {
    p_Val2_4_22_fu_6106_p2 = (!x0_V_22_cast_fu_6090_p1.read().is_01() || !y0_V_22_cast_fu_6078_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_22_cast_fu_6090_p1.read()) + sc_biguint<14>(y0_V_22_cast_fu_6078_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_1_fu_6146_p2() {
    p_Val2_4_23_1_fu_6146_p2 = (!tmp_27_23_cast_fu_6142_p1.read().is_01() || !p_Val2_4_23_cast_fu_6112_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_23_cast_fu_6142_p1.read()) + sc_biguint<15>(p_Val2_4_23_cast_fu_6112_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_2_fu_16234_p2() {
    p_Val2_4_23_2_fu_16234_p2 = (!tmp_27_23_1_cast_fu_16230_p1.read().is_01() || !x_V_1_23_1_fu_16196_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_23_1_cast_fu_16230_p1.read()) + sc_biguint<15>(x_V_1_23_1_fu_16196_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_3_fu_16312_p2() {
    p_Val2_4_23_3_fu_16312_p2 = (!tmp_468_fu_16308_p1.read().is_01() || !x_V_1_23_2_fu_16276_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_468_fu_16308_p1.read()) + sc_biguint<15>(x_V_1_23_2_fu_16276_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_4_fu_28920_p2() {
    p_Val2_4_23_4_fu_28920_p2 = (!tmp_470_fu_28917_p1.read().is_01() || !x_V_1_23_3_reg_61241.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_470_fu_28917_p1.read()) + sc_biguint<15>(x_V_1_23_3_reg_61241.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_5_fu_28982_p2() {
    p_Val2_4_23_5_fu_28982_p2 = (!tmp_472_fu_28978_p1.read().is_01() || !x_V_1_23_4_fu_28946_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_472_fu_28978_p1.read()) + sc_biguint<15>(x_V_1_23_4_fu_28946_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_6_fu_39590_p2() {
    p_Val2_4_23_6_fu_39590_p2 = (!tmp_474_fu_39587_p1.read().is_01() || !x_V_1_23_5_reg_63655.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_474_fu_39587_p1.read()) + sc_biguint<15>(x_V_1_23_5_reg_63655.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_23_cast_fu_6112_p1() {
    p_Val2_4_23_cast_fu_6112_p1 = esl_zext<15,14>(p_Val2_4_22_fu_6106_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_23_fu_6224_p2() {
    p_Val2_4_23_fu_6224_p2 = (!x0_V_23_cast_fu_6208_p1.read().is_01() || !y0_V_23_cast_fu_6196_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_23_cast_fu_6208_p1.read()) + sc_biguint<14>(y0_V_23_cast_fu_6196_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_1_fu_6264_p2() {
    p_Val2_4_24_1_fu_6264_p2 = (!tmp_27_24_cast_fu_6260_p1.read().is_01() || !p_Val2_4_24_cast_fu_6230_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_24_cast_fu_6260_p1.read()) + sc_biguint<15>(p_Val2_4_24_cast_fu_6230_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_2_fu_16428_p2() {
    p_Val2_4_24_2_fu_16428_p2 = (!tmp_27_24_1_cast_fu_16424_p1.read().is_01() || !x_V_1_24_1_fu_16390_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_24_1_cast_fu_16424_p1.read()) + sc_biguint<15>(x_V_1_24_1_fu_16390_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_3_fu_16506_p2() {
    p_Val2_4_24_3_fu_16506_p2 = (!tmp_488_fu_16502_p1.read().is_01() || !x_V_1_24_2_fu_16470_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_488_fu_16502_p1.read()) + sc_biguint<15>(x_V_1_24_2_fu_16470_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_4_fu_29068_p2() {
    p_Val2_4_24_4_fu_29068_p2 = (!tmp_490_fu_29065_p1.read().is_01() || !x_V_1_24_3_reg_61275.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_490_fu_29065_p1.read()) + sc_biguint<15>(x_V_1_24_3_reg_61275.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_5_fu_29130_p2() {
    p_Val2_4_24_5_fu_29130_p2 = (!tmp_492_fu_29126_p1.read().is_01() || !x_V_1_24_4_fu_29094_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_492_fu_29126_p1.read()) + sc_biguint<15>(x_V_1_24_4_fu_29094_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_6_fu_39743_p2() {
    p_Val2_4_24_6_fu_39743_p2 = (!tmp_494_fu_39740_p1.read().is_01() || !x_V_1_24_5_reg_63689.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_494_fu_39740_p1.read()) + sc_biguint<15>(x_V_1_24_5_reg_63689.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_24_cast_fu_6230_p1() {
    p_Val2_4_24_cast_fu_6230_p1 = esl_zext<15,14>(p_Val2_4_23_fu_6224_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_24_fu_6342_p2() {
    p_Val2_4_24_fu_6342_p2 = (!x0_V_24_cast_fu_6326_p1.read().is_01() || !y0_V_24_cast_fu_6314_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_24_cast_fu_6326_p1.read()) + sc_biguint<14>(y0_V_24_cast_fu_6314_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_1_fu_6382_p2() {
    p_Val2_4_25_1_fu_6382_p2 = (!tmp_27_25_cast_fu_6378_p1.read().is_01() || !p_Val2_4_25_cast_fu_6348_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_25_cast_fu_6378_p1.read()) + sc_biguint<15>(p_Val2_4_25_cast_fu_6348_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_2_fu_16622_p2() {
    p_Val2_4_25_2_fu_16622_p2 = (!tmp_27_25_1_cast_fu_16618_p1.read().is_01() || !x_V_1_25_1_fu_16584_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_25_1_cast_fu_16618_p1.read()) + sc_biguint<15>(x_V_1_25_1_fu_16584_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_3_fu_16700_p2() {
    p_Val2_4_25_3_fu_16700_p2 = (!tmp_508_fu_16696_p1.read().is_01() || !x_V_1_25_2_fu_16664_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_508_fu_16696_p1.read()) + sc_biguint<15>(x_V_1_25_2_fu_16664_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_4_fu_29216_p2() {
    p_Val2_4_25_4_fu_29216_p2 = (!tmp_510_fu_29213_p1.read().is_01() || !x_V_1_25_3_reg_61309.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_510_fu_29213_p1.read()) + sc_biguint<15>(x_V_1_25_3_reg_61309.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_5_fu_29278_p2() {
    p_Val2_4_25_5_fu_29278_p2 = (!tmp_512_fu_29274_p1.read().is_01() || !x_V_1_25_4_fu_29242_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_512_fu_29274_p1.read()) + sc_biguint<15>(x_V_1_25_4_fu_29242_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_6_fu_39896_p2() {
    p_Val2_4_25_6_fu_39896_p2 = (!tmp_514_fu_39893_p1.read().is_01() || !x_V_1_25_5_reg_63723.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_514_fu_39893_p1.read()) + sc_biguint<15>(x_V_1_25_5_reg_63723.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_25_cast_fu_6348_p1() {
    p_Val2_4_25_cast_fu_6348_p1 = esl_zext<15,14>(p_Val2_4_24_fu_6342_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_25_fu_6460_p2() {
    p_Val2_4_25_fu_6460_p2 = (!x0_V_25_cast_fu_6444_p1.read().is_01() || !y0_V_25_cast_fu_6432_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_25_cast_fu_6444_p1.read()) + sc_biguint<14>(y0_V_25_cast_fu_6432_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_1_fu_6500_p2() {
    p_Val2_4_26_1_fu_6500_p2 = (!tmp_27_26_cast_fu_6496_p1.read().is_01() || !p_Val2_4_26_cast_fu_6466_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_26_cast_fu_6496_p1.read()) + sc_biguint<15>(p_Val2_4_26_cast_fu_6466_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_2_fu_16816_p2() {
    p_Val2_4_26_2_fu_16816_p2 = (!tmp_27_26_1_cast_fu_16812_p1.read().is_01() || !x_V_1_26_1_fu_16778_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_26_1_cast_fu_16812_p1.read()) + sc_biguint<15>(x_V_1_26_1_fu_16778_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_3_fu_16894_p2() {
    p_Val2_4_26_3_fu_16894_p2 = (!tmp_528_fu_16890_p1.read().is_01() || !x_V_1_26_2_fu_16858_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_528_fu_16890_p1.read()) + sc_biguint<15>(x_V_1_26_2_fu_16858_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_4_fu_29364_p2() {
    p_Val2_4_26_4_fu_29364_p2 = (!tmp_530_fu_29361_p1.read().is_01() || !x_V_1_26_3_reg_61343.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_530_fu_29361_p1.read()) + sc_biguint<15>(x_V_1_26_3_reg_61343.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_5_fu_29426_p2() {
    p_Val2_4_26_5_fu_29426_p2 = (!tmp_532_fu_29422_p1.read().is_01() || !x_V_1_26_4_fu_29390_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_532_fu_29422_p1.read()) + sc_biguint<15>(x_V_1_26_4_fu_29390_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_6_fu_40049_p2() {
    p_Val2_4_26_6_fu_40049_p2 = (!tmp_534_fu_40046_p1.read().is_01() || !x_V_1_26_5_reg_63757.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_534_fu_40046_p1.read()) + sc_biguint<15>(x_V_1_26_5_reg_63757.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_26_cast_fu_6466_p1() {
    p_Val2_4_26_cast_fu_6466_p1 = esl_zext<15,14>(p_Val2_4_25_fu_6460_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_26_fu_6578_p2() {
    p_Val2_4_26_fu_6578_p2 = (!x0_V_26_cast_fu_6562_p1.read().is_01() || !y0_V_26_cast_fu_6550_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_26_cast_fu_6562_p1.read()) + sc_biguint<14>(y0_V_26_cast_fu_6550_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_1_fu_6618_p2() {
    p_Val2_4_27_1_fu_6618_p2 = (!tmp_27_27_cast_fu_6614_p1.read().is_01() || !p_Val2_4_27_cast_fu_6584_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_27_cast_fu_6614_p1.read()) + sc_biguint<15>(p_Val2_4_27_cast_fu_6584_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_2_fu_17010_p2() {
    p_Val2_4_27_2_fu_17010_p2 = (!tmp_27_27_1_cast_fu_17006_p1.read().is_01() || !x_V_1_27_1_fu_16972_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_27_1_cast_fu_17006_p1.read()) + sc_biguint<15>(x_V_1_27_1_fu_16972_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_3_fu_17088_p2() {
    p_Val2_4_27_3_fu_17088_p2 = (!tmp_548_fu_17084_p1.read().is_01() || !x_V_1_27_2_fu_17052_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_548_fu_17084_p1.read()) + sc_biguint<15>(x_V_1_27_2_fu_17052_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_4_fu_29512_p2() {
    p_Val2_4_27_4_fu_29512_p2 = (!tmp_550_fu_29509_p1.read().is_01() || !x_V_1_27_3_reg_61377.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_550_fu_29509_p1.read()) + sc_biguint<15>(x_V_1_27_3_reg_61377.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_5_fu_29574_p2() {
    p_Val2_4_27_5_fu_29574_p2 = (!tmp_552_fu_29570_p1.read().is_01() || !x_V_1_27_4_fu_29538_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_552_fu_29570_p1.read()) + sc_biguint<15>(x_V_1_27_4_fu_29538_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_6_fu_40202_p2() {
    p_Val2_4_27_6_fu_40202_p2 = (!tmp_554_fu_40199_p1.read().is_01() || !x_V_1_27_5_reg_63791.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_554_fu_40199_p1.read()) + sc_biguint<15>(x_V_1_27_5_reg_63791.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_27_cast_fu_6584_p1() {
    p_Val2_4_27_cast_fu_6584_p1 = esl_zext<15,14>(p_Val2_4_26_fu_6578_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_27_fu_6696_p2() {
    p_Val2_4_27_fu_6696_p2 = (!x0_V_27_cast_fu_6680_p1.read().is_01() || !y0_V_27_cast_fu_6668_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_27_cast_fu_6680_p1.read()) + sc_biguint<14>(y0_V_27_cast_fu_6668_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_1_fu_6736_p2() {
    p_Val2_4_28_1_fu_6736_p2 = (!tmp_27_28_cast_fu_6732_p1.read().is_01() || !p_Val2_4_28_cast_fu_6702_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_28_cast_fu_6732_p1.read()) + sc_biguint<15>(p_Val2_4_28_cast_fu_6702_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_2_fu_17204_p2() {
    p_Val2_4_28_2_fu_17204_p2 = (!tmp_27_28_1_cast_fu_17200_p1.read().is_01() || !x_V_1_28_1_fu_17166_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_28_1_cast_fu_17200_p1.read()) + sc_biguint<15>(x_V_1_28_1_fu_17166_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_3_fu_17282_p2() {
    p_Val2_4_28_3_fu_17282_p2 = (!tmp_568_fu_17278_p1.read().is_01() || !x_V_1_28_2_fu_17246_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_568_fu_17278_p1.read()) + sc_biguint<15>(x_V_1_28_2_fu_17246_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_4_fu_29660_p2() {
    p_Val2_4_28_4_fu_29660_p2 = (!tmp_570_fu_29657_p1.read().is_01() || !x_V_1_28_3_reg_61411.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_570_fu_29657_p1.read()) + sc_biguint<15>(x_V_1_28_3_reg_61411.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_5_fu_29722_p2() {
    p_Val2_4_28_5_fu_29722_p2 = (!tmp_572_fu_29718_p1.read().is_01() || !x_V_1_28_4_fu_29686_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_572_fu_29718_p1.read()) + sc_biguint<15>(x_V_1_28_4_fu_29686_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_6_fu_40355_p2() {
    p_Val2_4_28_6_fu_40355_p2 = (!tmp_574_fu_40352_p1.read().is_01() || !x_V_1_28_5_reg_63825.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_574_fu_40352_p1.read()) + sc_biguint<15>(x_V_1_28_5_reg_63825.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_28_cast_fu_6702_p1() {
    p_Val2_4_28_cast_fu_6702_p1 = esl_zext<15,14>(p_Val2_4_27_fu_6696_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_28_fu_6814_p2() {
    p_Val2_4_28_fu_6814_p2 = (!x0_V_28_cast_fu_6798_p1.read().is_01() || !y0_V_28_cast_fu_6786_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_28_cast_fu_6798_p1.read()) + sc_biguint<14>(y0_V_28_cast_fu_6786_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_1_fu_6854_p2() {
    p_Val2_4_29_1_fu_6854_p2 = (!tmp_27_29_cast_fu_6850_p1.read().is_01() || !p_Val2_4_29_cast_fu_6820_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_29_cast_fu_6850_p1.read()) + sc_biguint<15>(p_Val2_4_29_cast_fu_6820_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_2_fu_17398_p2() {
    p_Val2_4_29_2_fu_17398_p2 = (!tmp_27_29_1_cast_fu_17394_p1.read().is_01() || !x_V_1_29_1_fu_17360_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_29_1_cast_fu_17394_p1.read()) + sc_biguint<15>(x_V_1_29_1_fu_17360_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_3_fu_17476_p2() {
    p_Val2_4_29_3_fu_17476_p2 = (!tmp_588_fu_17472_p1.read().is_01() || !x_V_1_29_2_fu_17440_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_588_fu_17472_p1.read()) + sc_biguint<15>(x_V_1_29_2_fu_17440_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_4_fu_29808_p2() {
    p_Val2_4_29_4_fu_29808_p2 = (!tmp_590_fu_29805_p1.read().is_01() || !x_V_1_29_3_reg_61445.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_590_fu_29805_p1.read()) + sc_biguint<15>(x_V_1_29_3_reg_61445.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_5_fu_29870_p2() {
    p_Val2_4_29_5_fu_29870_p2 = (!tmp_592_fu_29866_p1.read().is_01() || !x_V_1_29_4_fu_29834_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_592_fu_29866_p1.read()) + sc_biguint<15>(x_V_1_29_4_fu_29834_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_6_fu_40508_p2() {
    p_Val2_4_29_6_fu_40508_p2 = (!tmp_594_fu_40505_p1.read().is_01() || !x_V_1_29_5_reg_63859.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_594_fu_40505_p1.read()) + sc_biguint<15>(x_V_1_29_5_reg_63859.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_29_cast_fu_6820_p1() {
    p_Val2_4_29_cast_fu_6820_p1 = esl_zext<15,14>(p_Val2_4_28_fu_6814_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_29_fu_6932_p2() {
    p_Val2_4_29_fu_6932_p2 = (!x0_V_29_cast_fu_6916_p1.read().is_01() || !y0_V_29_cast_fu_6904_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_29_cast_fu_6916_p1.read()) + sc_biguint<14>(y0_V_29_cast_fu_6904_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_1_fu_3668_p2() {
    p_Val2_4_2_1_fu_3668_p2 = (!tmp_27_2_cast_fu_3664_p1.read().is_01() || !p_Val2_4_2_cast_fu_3634_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_2_cast_fu_3664_p1.read()) + sc_biguint<15>(p_Val2_4_2_cast_fu_3634_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_2_fu_12160_p2() {
    p_Val2_4_2_2_fu_12160_p2 = (!tmp_27_2_1_cast_fu_12156_p1.read().is_01() || !x_V_1_2_1_fu_12122_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_2_1_cast_fu_12156_p1.read()) + sc_biguint<15>(x_V_1_2_1_fu_12122_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_3_fu_12238_p2() {
    p_Val2_4_2_3_fu_12238_p2 = (!tmp_48_fu_12234_p1.read().is_01() || !x_V_1_2_2_fu_12202_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_48_fu_12234_p1.read()) + sc_biguint<15>(x_V_1_2_2_fu_12202_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_4_fu_25812_p2() {
    p_Val2_4_2_4_fu_25812_p2 = (!tmp_50_fu_25809_p1.read().is_01() || !x_V_1_2_3_reg_60527.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_50_fu_25809_p1.read()) + sc_biguint<15>(x_V_1_2_3_reg_60527.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_5_fu_25874_p2() {
    p_Val2_4_2_5_fu_25874_p2 = (!tmp_52_fu_25870_p1.read().is_01() || !x_V_1_2_4_fu_25838_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_52_fu_25870_p1.read()) + sc_biguint<15>(x_V_1_2_4_fu_25838_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_6_fu_36377_p2() {
    p_Val2_4_2_6_fu_36377_p2 = (!tmp_54_fu_36374_p1.read().is_01() || !x_V_1_2_5_reg_62941.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_54_fu_36374_p1.read()) + sc_biguint<15>(x_V_1_2_5_reg_62941.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_2_cast_fu_3634_p1() {
    p_Val2_4_2_cast_fu_3634_p1 = esl_zext<15,14>(p_Val2_4_2_fu_3628_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_2_fu_3628_p2() {
    p_Val2_4_2_fu_3628_p2 = (!x0_V_2_cast_fu_3612_p1.read().is_01() || !y0_V_2_cast_fu_3600_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_2_cast_fu_3612_p1.read()) + sc_biguint<14>(y0_V_2_cast_fu_3600_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_1_fu_6972_p2() {
    p_Val2_4_30_1_fu_6972_p2 = (!tmp_27_30_cast_fu_6968_p1.read().is_01() || !p_Val2_4_30_cast_fu_6938_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_30_cast_fu_6968_p1.read()) + sc_biguint<15>(p_Val2_4_30_cast_fu_6938_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_2_fu_17592_p2() {
    p_Val2_4_30_2_fu_17592_p2 = (!tmp_27_30_1_cast_fu_17588_p1.read().is_01() || !x_V_1_30_1_fu_17554_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_30_1_cast_fu_17588_p1.read()) + sc_biguint<15>(x_V_1_30_1_fu_17554_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_3_fu_17670_p2() {
    p_Val2_4_30_3_fu_17670_p2 = (!tmp_608_fu_17666_p1.read().is_01() || !x_V_1_30_2_fu_17634_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_608_fu_17666_p1.read()) + sc_biguint<15>(x_V_1_30_2_fu_17634_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_4_fu_29956_p2() {
    p_Val2_4_30_4_fu_29956_p2 = (!tmp_610_fu_29953_p1.read().is_01() || !x_V_1_30_3_reg_61479.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_610_fu_29953_p1.read()) + sc_biguint<15>(x_V_1_30_3_reg_61479.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_5_fu_30018_p2() {
    p_Val2_4_30_5_fu_30018_p2 = (!tmp_612_fu_30014_p1.read().is_01() || !x_V_1_30_4_fu_29982_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_612_fu_30014_p1.read()) + sc_biguint<15>(x_V_1_30_4_fu_29982_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_6_fu_40661_p2() {
    p_Val2_4_30_6_fu_40661_p2 = (!tmp_614_fu_40658_p1.read().is_01() || !x_V_1_30_5_reg_63893.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_614_fu_40658_p1.read()) + sc_biguint<15>(x_V_1_30_5_reg_63893.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_30_cast_fu_6938_p1() {
    p_Val2_4_30_cast_fu_6938_p1 = esl_zext<15,14>(p_Val2_4_29_fu_6932_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_30_fu_7050_p2() {
    p_Val2_4_30_fu_7050_p2 = (!x0_V_30_cast_fu_7034_p1.read().is_01() || !y0_V_30_cast_fu_7022_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_30_cast_fu_7034_p1.read()) + sc_biguint<14>(y0_V_30_cast_fu_7022_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_1_fu_7090_p2() {
    p_Val2_4_31_1_fu_7090_p2 = (!tmp_27_31_cast_fu_7086_p1.read().is_01() || !p_Val2_4_31_cast_fu_7056_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_31_cast_fu_7086_p1.read()) + sc_biguint<15>(p_Val2_4_31_cast_fu_7056_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_2_fu_17786_p2() {
    p_Val2_4_31_2_fu_17786_p2 = (!tmp_27_31_1_cast_fu_17782_p1.read().is_01() || !x_V_1_31_1_fu_17748_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_31_1_cast_fu_17782_p1.read()) + sc_biguint<15>(x_V_1_31_1_fu_17748_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_3_fu_17864_p2() {
    p_Val2_4_31_3_fu_17864_p2 = (!tmp_628_fu_17860_p1.read().is_01() || !x_V_1_31_2_fu_17828_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_628_fu_17860_p1.read()) + sc_biguint<15>(x_V_1_31_2_fu_17828_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_4_fu_30104_p2() {
    p_Val2_4_31_4_fu_30104_p2 = (!tmp_630_fu_30101_p1.read().is_01() || !x_V_1_31_3_reg_61513.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_630_fu_30101_p1.read()) + sc_biguint<15>(x_V_1_31_3_reg_61513.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_5_fu_30166_p2() {
    p_Val2_4_31_5_fu_30166_p2 = (!tmp_632_fu_30162_p1.read().is_01() || !x_V_1_31_4_fu_30130_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_632_fu_30162_p1.read()) + sc_biguint<15>(x_V_1_31_4_fu_30130_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_6_fu_40814_p2() {
    p_Val2_4_31_6_fu_40814_p2 = (!tmp_634_fu_40811_p1.read().is_01() || !x_V_1_31_5_reg_63927.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_634_fu_40811_p1.read()) + sc_biguint<15>(x_V_1_31_5_reg_63927.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_31_cast_fu_7056_p1() {
    p_Val2_4_31_cast_fu_7056_p1 = esl_zext<15,14>(p_Val2_4_30_fu_7050_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_31_fu_7168_p2() {
    p_Val2_4_31_fu_7168_p2 = (!x0_V_31_cast_fu_7152_p1.read().is_01() || !y0_V_31_cast_fu_7140_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_31_cast_fu_7152_p1.read()) + sc_biguint<14>(y0_V_31_cast_fu_7140_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_1_fu_7208_p2() {
    p_Val2_4_32_1_fu_7208_p2 = (!tmp_27_32_cast_fu_7204_p1.read().is_01() || !p_Val2_4_32_cast_fu_7174_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_32_cast_fu_7204_p1.read()) + sc_biguint<15>(p_Val2_4_32_cast_fu_7174_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_2_fu_17980_p2() {
    p_Val2_4_32_2_fu_17980_p2 = (!tmp_27_32_1_cast_fu_17976_p1.read().is_01() || !x_V_1_32_1_fu_17942_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_32_1_cast_fu_17976_p1.read()) + sc_biguint<15>(x_V_1_32_1_fu_17942_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_3_fu_18058_p2() {
    p_Val2_4_32_3_fu_18058_p2 = (!tmp_648_fu_18054_p1.read().is_01() || !x_V_1_32_2_fu_18022_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_648_fu_18054_p1.read()) + sc_biguint<15>(x_V_1_32_2_fu_18022_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_4_fu_30252_p2() {
    p_Val2_4_32_4_fu_30252_p2 = (!tmp_650_fu_30249_p1.read().is_01() || !x_V_1_32_3_reg_61547.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_650_fu_30249_p1.read()) + sc_biguint<15>(x_V_1_32_3_reg_61547.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_5_fu_30314_p2() {
    p_Val2_4_32_5_fu_30314_p2 = (!tmp_652_fu_30310_p1.read().is_01() || !x_V_1_32_4_fu_30278_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_652_fu_30310_p1.read()) + sc_biguint<15>(x_V_1_32_4_fu_30278_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_6_fu_40967_p2() {
    p_Val2_4_32_6_fu_40967_p2 = (!tmp_654_fu_40964_p1.read().is_01() || !x_V_1_32_5_reg_63961.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_654_fu_40964_p1.read()) + sc_biguint<15>(x_V_1_32_5_reg_63961.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_32_cast_fu_7174_p1() {
    p_Val2_4_32_cast_fu_7174_p1 = esl_zext<15,14>(p_Val2_4_31_fu_7168_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_32_fu_7286_p2() {
    p_Val2_4_32_fu_7286_p2 = (!x0_V_32_cast_fu_7270_p1.read().is_01() || !y0_V_32_cast_fu_7258_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_32_cast_fu_7270_p1.read()) + sc_biguint<14>(y0_V_32_cast_fu_7258_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_1_fu_7326_p2() {
    p_Val2_4_33_1_fu_7326_p2 = (!tmp_27_33_cast_fu_7322_p1.read().is_01() || !p_Val2_4_33_cast_fu_7292_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_33_cast_fu_7322_p1.read()) + sc_biguint<15>(p_Val2_4_33_cast_fu_7292_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_2_fu_18174_p2() {
    p_Val2_4_33_2_fu_18174_p2 = (!tmp_27_33_1_cast_fu_18170_p1.read().is_01() || !x_V_1_33_1_fu_18136_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_33_1_cast_fu_18170_p1.read()) + sc_biguint<15>(x_V_1_33_1_fu_18136_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_3_fu_18252_p2() {
    p_Val2_4_33_3_fu_18252_p2 = (!tmp_668_fu_18248_p1.read().is_01() || !x_V_1_33_2_fu_18216_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_668_fu_18248_p1.read()) + sc_biguint<15>(x_V_1_33_2_fu_18216_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_4_fu_30400_p2() {
    p_Val2_4_33_4_fu_30400_p2 = (!tmp_670_fu_30397_p1.read().is_01() || !x_V_1_33_3_reg_61581.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_670_fu_30397_p1.read()) + sc_biguint<15>(x_V_1_33_3_reg_61581.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_5_fu_30462_p2() {
    p_Val2_4_33_5_fu_30462_p2 = (!tmp_672_fu_30458_p1.read().is_01() || !x_V_1_33_4_fu_30426_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_672_fu_30458_p1.read()) + sc_biguint<15>(x_V_1_33_4_fu_30426_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_6_fu_41120_p2() {
    p_Val2_4_33_6_fu_41120_p2 = (!tmp_674_fu_41117_p1.read().is_01() || !x_V_1_33_5_reg_63995.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_674_fu_41117_p1.read()) + sc_biguint<15>(x_V_1_33_5_reg_63995.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_33_cast_fu_7292_p1() {
    p_Val2_4_33_cast_fu_7292_p1 = esl_zext<15,14>(p_Val2_4_32_fu_7286_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_33_fu_7404_p2() {
    p_Val2_4_33_fu_7404_p2 = (!x0_V_33_cast_fu_7388_p1.read().is_01() || !y0_V_33_cast_fu_7376_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_33_cast_fu_7388_p1.read()) + sc_biguint<14>(y0_V_33_cast_fu_7376_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_1_fu_7444_p2() {
    p_Val2_4_34_1_fu_7444_p2 = (!tmp_27_34_cast_fu_7440_p1.read().is_01() || !p_Val2_4_34_cast_fu_7410_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_34_cast_fu_7440_p1.read()) + sc_biguint<15>(p_Val2_4_34_cast_fu_7410_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_2_fu_18368_p2() {
    p_Val2_4_34_2_fu_18368_p2 = (!tmp_27_34_1_cast_fu_18364_p1.read().is_01() || !x_V_1_34_1_fu_18330_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_34_1_cast_fu_18364_p1.read()) + sc_biguint<15>(x_V_1_34_1_fu_18330_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_3_fu_18446_p2() {
    p_Val2_4_34_3_fu_18446_p2 = (!tmp_688_fu_18442_p1.read().is_01() || !x_V_1_34_2_fu_18410_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_688_fu_18442_p1.read()) + sc_biguint<15>(x_V_1_34_2_fu_18410_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_4_fu_30548_p2() {
    p_Val2_4_34_4_fu_30548_p2 = (!tmp_690_fu_30545_p1.read().is_01() || !x_V_1_34_3_reg_61615.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_690_fu_30545_p1.read()) + sc_biguint<15>(x_V_1_34_3_reg_61615.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_5_fu_30610_p2() {
    p_Val2_4_34_5_fu_30610_p2 = (!tmp_692_fu_30606_p1.read().is_01() || !x_V_1_34_4_fu_30574_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_692_fu_30606_p1.read()) + sc_biguint<15>(x_V_1_34_4_fu_30574_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_6_fu_41273_p2() {
    p_Val2_4_34_6_fu_41273_p2 = (!tmp_694_fu_41270_p1.read().is_01() || !x_V_1_34_5_reg_64029.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_694_fu_41270_p1.read()) + sc_biguint<15>(x_V_1_34_5_reg_64029.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_34_cast_fu_7410_p1() {
    p_Val2_4_34_cast_fu_7410_p1 = esl_zext<15,14>(p_Val2_4_33_fu_7404_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_34_fu_7522_p2() {
    p_Val2_4_34_fu_7522_p2 = (!x0_V_34_cast_fu_7506_p1.read().is_01() || !y0_V_34_cast_fu_7494_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_34_cast_fu_7506_p1.read()) + sc_biguint<14>(y0_V_34_cast_fu_7494_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_1_fu_7562_p2() {
    p_Val2_4_35_1_fu_7562_p2 = (!tmp_27_35_cast_fu_7558_p1.read().is_01() || !p_Val2_4_35_cast_fu_7528_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_35_cast_fu_7558_p1.read()) + sc_biguint<15>(p_Val2_4_35_cast_fu_7528_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_2_fu_18562_p2() {
    p_Val2_4_35_2_fu_18562_p2 = (!tmp_27_35_1_cast_fu_18558_p1.read().is_01() || !x_V_1_35_1_fu_18524_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_35_1_cast_fu_18558_p1.read()) + sc_biguint<15>(x_V_1_35_1_fu_18524_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_3_fu_18640_p2() {
    p_Val2_4_35_3_fu_18640_p2 = (!tmp_708_fu_18636_p1.read().is_01() || !x_V_1_35_2_fu_18604_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_708_fu_18636_p1.read()) + sc_biguint<15>(x_V_1_35_2_fu_18604_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_4_fu_30696_p2() {
    p_Val2_4_35_4_fu_30696_p2 = (!tmp_710_fu_30693_p1.read().is_01() || !x_V_1_35_3_reg_61649.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_710_fu_30693_p1.read()) + sc_biguint<15>(x_V_1_35_3_reg_61649.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_5_fu_30758_p2() {
    p_Val2_4_35_5_fu_30758_p2 = (!tmp_712_fu_30754_p1.read().is_01() || !x_V_1_35_4_fu_30722_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_712_fu_30754_p1.read()) + sc_biguint<15>(x_V_1_35_4_fu_30722_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_6_fu_41426_p2() {
    p_Val2_4_35_6_fu_41426_p2 = (!tmp_714_fu_41423_p1.read().is_01() || !x_V_1_35_5_reg_64063.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_714_fu_41423_p1.read()) + sc_biguint<15>(x_V_1_35_5_reg_64063.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_35_cast_fu_7528_p1() {
    p_Val2_4_35_cast_fu_7528_p1 = esl_zext<15,14>(p_Val2_4_34_fu_7522_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_35_fu_7640_p2() {
    p_Val2_4_35_fu_7640_p2 = (!x0_V_35_cast_fu_7624_p1.read().is_01() || !y0_V_35_cast_fu_7612_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_35_cast_fu_7624_p1.read()) + sc_biguint<14>(y0_V_35_cast_fu_7612_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_1_fu_7680_p2() {
    p_Val2_4_36_1_fu_7680_p2 = (!tmp_27_36_cast_fu_7676_p1.read().is_01() || !p_Val2_4_36_cast_fu_7646_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_36_cast_fu_7676_p1.read()) + sc_biguint<15>(p_Val2_4_36_cast_fu_7646_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_2_fu_18756_p2() {
    p_Val2_4_36_2_fu_18756_p2 = (!tmp_27_36_1_cast_fu_18752_p1.read().is_01() || !x_V_1_36_1_fu_18718_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_36_1_cast_fu_18752_p1.read()) + sc_biguint<15>(x_V_1_36_1_fu_18718_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_3_fu_18834_p2() {
    p_Val2_4_36_3_fu_18834_p2 = (!tmp_728_fu_18830_p1.read().is_01() || !x_V_1_36_2_fu_18798_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_728_fu_18830_p1.read()) + sc_biguint<15>(x_V_1_36_2_fu_18798_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_4_fu_30844_p2() {
    p_Val2_4_36_4_fu_30844_p2 = (!tmp_730_fu_30841_p1.read().is_01() || !x_V_1_36_3_reg_61683.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_730_fu_30841_p1.read()) + sc_biguint<15>(x_V_1_36_3_reg_61683.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_5_fu_30906_p2() {
    p_Val2_4_36_5_fu_30906_p2 = (!tmp_732_fu_30902_p1.read().is_01() || !x_V_1_36_4_fu_30870_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_732_fu_30902_p1.read()) + sc_biguint<15>(x_V_1_36_4_fu_30870_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_6_fu_41579_p2() {
    p_Val2_4_36_6_fu_41579_p2 = (!tmp_734_fu_41576_p1.read().is_01() || !x_V_1_36_5_reg_64097.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_734_fu_41576_p1.read()) + sc_biguint<15>(x_V_1_36_5_reg_64097.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_36_cast_fu_7646_p1() {
    p_Val2_4_36_cast_fu_7646_p1 = esl_zext<15,14>(p_Val2_4_35_fu_7640_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_36_fu_7758_p2() {
    p_Val2_4_36_fu_7758_p2 = (!x0_V_36_cast_fu_7742_p1.read().is_01() || !y0_V_36_cast_fu_7730_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_36_cast_fu_7742_p1.read()) + sc_biguint<14>(y0_V_36_cast_fu_7730_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_1_fu_7798_p2() {
    p_Val2_4_37_1_fu_7798_p2 = (!tmp_27_37_cast_fu_7794_p1.read().is_01() || !p_Val2_4_37_cast_fu_7764_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_37_cast_fu_7794_p1.read()) + sc_biguint<15>(p_Val2_4_37_cast_fu_7764_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_2_fu_18950_p2() {
    p_Val2_4_37_2_fu_18950_p2 = (!tmp_27_37_1_cast_fu_18946_p1.read().is_01() || !x_V_1_37_1_fu_18912_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_37_1_cast_fu_18946_p1.read()) + sc_biguint<15>(x_V_1_37_1_fu_18912_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_3_fu_19028_p2() {
    p_Val2_4_37_3_fu_19028_p2 = (!tmp_748_fu_19024_p1.read().is_01() || !x_V_1_37_2_fu_18992_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_748_fu_19024_p1.read()) + sc_biguint<15>(x_V_1_37_2_fu_18992_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_4_fu_30992_p2() {
    p_Val2_4_37_4_fu_30992_p2 = (!tmp_750_fu_30989_p1.read().is_01() || !x_V_1_37_3_reg_61717.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_750_fu_30989_p1.read()) + sc_biguint<15>(x_V_1_37_3_reg_61717.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_5_fu_31054_p2() {
    p_Val2_4_37_5_fu_31054_p2 = (!tmp_752_fu_31050_p1.read().is_01() || !x_V_1_37_4_fu_31018_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_752_fu_31050_p1.read()) + sc_biguint<15>(x_V_1_37_4_fu_31018_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_6_fu_41732_p2() {
    p_Val2_4_37_6_fu_41732_p2 = (!tmp_754_fu_41729_p1.read().is_01() || !x_V_1_37_5_reg_64131.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_754_fu_41729_p1.read()) + sc_biguint<15>(x_V_1_37_5_reg_64131.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_37_cast_fu_7764_p1() {
    p_Val2_4_37_cast_fu_7764_p1 = esl_zext<15,14>(p_Val2_4_36_fu_7758_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_37_fu_7876_p2() {
    p_Val2_4_37_fu_7876_p2 = (!x0_V_37_cast_fu_7860_p1.read().is_01() || !y0_V_37_cast_fu_7848_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_37_cast_fu_7860_p1.read()) + sc_biguint<14>(y0_V_37_cast_fu_7848_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_1_fu_7916_p2() {
    p_Val2_4_38_1_fu_7916_p2 = (!tmp_27_38_cast_fu_7912_p1.read().is_01() || !p_Val2_4_38_cast_fu_7882_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_38_cast_fu_7912_p1.read()) + sc_biguint<15>(p_Val2_4_38_cast_fu_7882_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_2_fu_19144_p2() {
    p_Val2_4_38_2_fu_19144_p2 = (!tmp_27_38_1_cast_fu_19140_p1.read().is_01() || !x_V_1_38_1_fu_19106_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_38_1_cast_fu_19140_p1.read()) + sc_biguint<15>(x_V_1_38_1_fu_19106_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_3_fu_19222_p2() {
    p_Val2_4_38_3_fu_19222_p2 = (!tmp_768_fu_19218_p1.read().is_01() || !x_V_1_38_2_fu_19186_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_768_fu_19218_p1.read()) + sc_biguint<15>(x_V_1_38_2_fu_19186_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_4_fu_31140_p2() {
    p_Val2_4_38_4_fu_31140_p2 = (!tmp_770_fu_31137_p1.read().is_01() || !x_V_1_38_3_reg_61751.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_770_fu_31137_p1.read()) + sc_biguint<15>(x_V_1_38_3_reg_61751.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_5_fu_31202_p2() {
    p_Val2_4_38_5_fu_31202_p2 = (!tmp_772_fu_31198_p1.read().is_01() || !x_V_1_38_4_fu_31166_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_772_fu_31198_p1.read()) + sc_biguint<15>(x_V_1_38_4_fu_31166_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_6_fu_41885_p2() {
    p_Val2_4_38_6_fu_41885_p2 = (!tmp_774_fu_41882_p1.read().is_01() || !x_V_1_38_5_reg_64165.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_774_fu_41882_p1.read()) + sc_biguint<15>(x_V_1_38_5_reg_64165.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_38_cast_fu_7882_p1() {
    p_Val2_4_38_cast_fu_7882_p1 = esl_zext<15,14>(p_Val2_4_37_fu_7876_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_38_fu_7994_p2() {
    p_Val2_4_38_fu_7994_p2 = (!x0_V_38_cast_fu_7978_p1.read().is_01() || !y0_V_38_cast_fu_7966_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_38_cast_fu_7978_p1.read()) + sc_biguint<14>(y0_V_38_cast_fu_7966_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_1_fu_8034_p2() {
    p_Val2_4_39_1_fu_8034_p2 = (!tmp_27_39_cast_fu_8030_p1.read().is_01() || !p_Val2_4_39_cast_fu_8000_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_39_cast_fu_8030_p1.read()) + sc_biguint<15>(p_Val2_4_39_cast_fu_8000_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_2_fu_19338_p2() {
    p_Val2_4_39_2_fu_19338_p2 = (!tmp_27_39_1_cast_fu_19334_p1.read().is_01() || !x_V_1_39_1_fu_19300_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_39_1_cast_fu_19334_p1.read()) + sc_biguint<15>(x_V_1_39_1_fu_19300_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_3_fu_19416_p2() {
    p_Val2_4_39_3_fu_19416_p2 = (!tmp_788_fu_19412_p1.read().is_01() || !x_V_1_39_2_fu_19380_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_788_fu_19412_p1.read()) + sc_biguint<15>(x_V_1_39_2_fu_19380_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_4_fu_31288_p2() {
    p_Val2_4_39_4_fu_31288_p2 = (!tmp_790_fu_31285_p1.read().is_01() || !x_V_1_39_3_reg_61785.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_790_fu_31285_p1.read()) + sc_biguint<15>(x_V_1_39_3_reg_61785.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_5_fu_31350_p2() {
    p_Val2_4_39_5_fu_31350_p2 = (!tmp_792_fu_31346_p1.read().is_01() || !x_V_1_39_4_fu_31314_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_792_fu_31346_p1.read()) + sc_biguint<15>(x_V_1_39_4_fu_31314_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_6_fu_42038_p2() {
    p_Val2_4_39_6_fu_42038_p2 = (!tmp_794_fu_42035_p1.read().is_01() || !x_V_1_39_5_reg_64199.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_794_fu_42035_p1.read()) + sc_biguint<15>(x_V_1_39_5_reg_64199.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_39_cast_fu_8000_p1() {
    p_Val2_4_39_cast_fu_8000_p1 = esl_zext<15,14>(p_Val2_4_38_fu_7994_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_39_fu_8112_p2() {
    p_Val2_4_39_fu_8112_p2 = (!x0_V_39_cast_fu_8096_p1.read().is_01() || !y0_V_39_cast_fu_8084_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_39_cast_fu_8096_p1.read()) + sc_biguint<14>(y0_V_39_cast_fu_8084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_1_fu_3786_p2() {
    p_Val2_4_3_1_fu_3786_p2 = (!tmp_27_3_cast_fu_3782_p1.read().is_01() || !p_Val2_4_3_cast_fu_3752_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_3_cast_fu_3782_p1.read()) + sc_biguint<15>(p_Val2_4_3_cast_fu_3752_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_2_fu_12354_p2() {
    p_Val2_4_3_2_fu_12354_p2 = (!tmp_27_3_1_cast_fu_12350_p1.read().is_01() || !x_V_1_3_1_fu_12316_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_3_1_cast_fu_12350_p1.read()) + sc_biguint<15>(x_V_1_3_1_fu_12316_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_3_fu_12432_p2() {
    p_Val2_4_3_3_fu_12432_p2 = (!tmp_68_fu_12428_p1.read().is_01() || !x_V_1_3_2_fu_12396_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_68_fu_12428_p1.read()) + sc_biguint<15>(x_V_1_3_2_fu_12396_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_4_fu_25960_p2() {
    p_Val2_4_3_4_fu_25960_p2 = (!tmp_70_fu_25957_p1.read().is_01() || !x_V_1_3_3_reg_60561.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_70_fu_25957_p1.read()) + sc_biguint<15>(x_V_1_3_3_reg_60561.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_5_fu_26022_p2() {
    p_Val2_4_3_5_fu_26022_p2 = (!tmp_72_fu_26018_p1.read().is_01() || !x_V_1_3_4_fu_25986_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_72_fu_26018_p1.read()) + sc_biguint<15>(x_V_1_3_4_fu_25986_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_6_fu_36530_p2() {
    p_Val2_4_3_6_fu_36530_p2 = (!tmp_74_fu_36527_p1.read().is_01() || !x_V_1_3_5_reg_62975.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_74_fu_36527_p1.read()) + sc_biguint<15>(x_V_1_3_5_reg_62975.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_3_cast_fu_3752_p1() {
    p_Val2_4_3_cast_fu_3752_p1 = esl_zext<15,14>(p_Val2_4_3_fu_3746_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_3_fu_3746_p2() {
    p_Val2_4_3_fu_3746_p2 = (!x0_V_3_cast_fu_3730_p1.read().is_01() || !y0_V_3_cast_fu_3718_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_3_cast_fu_3730_p1.read()) + sc_biguint<14>(y0_V_3_cast_fu_3718_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_1_fu_8152_p2() {
    p_Val2_4_40_1_fu_8152_p2 = (!tmp_27_40_cast_fu_8148_p1.read().is_01() || !p_Val2_4_40_cast_fu_8118_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_40_cast_fu_8148_p1.read()) + sc_biguint<15>(p_Val2_4_40_cast_fu_8118_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_2_fu_19532_p2() {
    p_Val2_4_40_2_fu_19532_p2 = (!tmp_27_40_1_cast_fu_19528_p1.read().is_01() || !x_V_1_40_1_fu_19494_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_40_1_cast_fu_19528_p1.read()) + sc_biguint<15>(x_V_1_40_1_fu_19494_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_3_fu_19610_p2() {
    p_Val2_4_40_3_fu_19610_p2 = (!tmp_808_fu_19606_p1.read().is_01() || !x_V_1_40_2_fu_19574_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_808_fu_19606_p1.read()) + sc_biguint<15>(x_V_1_40_2_fu_19574_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_4_fu_31436_p2() {
    p_Val2_4_40_4_fu_31436_p2 = (!tmp_810_fu_31433_p1.read().is_01() || !x_V_1_40_3_reg_61819.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_810_fu_31433_p1.read()) + sc_biguint<15>(x_V_1_40_3_reg_61819.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_5_fu_31498_p2() {
    p_Val2_4_40_5_fu_31498_p2 = (!tmp_812_fu_31494_p1.read().is_01() || !x_V_1_40_4_fu_31462_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_812_fu_31494_p1.read()) + sc_biguint<15>(x_V_1_40_4_fu_31462_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_6_fu_42191_p2() {
    p_Val2_4_40_6_fu_42191_p2 = (!tmp_814_fu_42188_p1.read().is_01() || !x_V_1_40_5_reg_64233.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_814_fu_42188_p1.read()) + sc_biguint<15>(x_V_1_40_5_reg_64233.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_40_cast_fu_8118_p1() {
    p_Val2_4_40_cast_fu_8118_p1 = esl_zext<15,14>(p_Val2_4_39_fu_8112_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_40_fu_8230_p2() {
    p_Val2_4_40_fu_8230_p2 = (!x0_V_40_cast_fu_8214_p1.read().is_01() || !y0_V_40_cast_fu_8202_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_40_cast_fu_8214_p1.read()) + sc_biguint<14>(y0_V_40_cast_fu_8202_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_1_fu_8270_p2() {
    p_Val2_4_41_1_fu_8270_p2 = (!tmp_27_41_cast_fu_8266_p1.read().is_01() || !p_Val2_4_41_cast_fu_8236_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_41_cast_fu_8266_p1.read()) + sc_biguint<15>(p_Val2_4_41_cast_fu_8236_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_2_fu_19726_p2() {
    p_Val2_4_41_2_fu_19726_p2 = (!tmp_27_41_1_cast_fu_19722_p1.read().is_01() || !x_V_1_41_1_fu_19688_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_41_1_cast_fu_19722_p1.read()) + sc_biguint<15>(x_V_1_41_1_fu_19688_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_3_fu_19804_p2() {
    p_Val2_4_41_3_fu_19804_p2 = (!tmp_828_fu_19800_p1.read().is_01() || !x_V_1_41_2_fu_19768_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_828_fu_19800_p1.read()) + sc_biguint<15>(x_V_1_41_2_fu_19768_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_4_fu_31584_p2() {
    p_Val2_4_41_4_fu_31584_p2 = (!tmp_830_fu_31581_p1.read().is_01() || !x_V_1_41_3_reg_61853.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_830_fu_31581_p1.read()) + sc_biguint<15>(x_V_1_41_3_reg_61853.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_5_fu_31646_p2() {
    p_Val2_4_41_5_fu_31646_p2 = (!tmp_832_fu_31642_p1.read().is_01() || !x_V_1_41_4_fu_31610_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_832_fu_31642_p1.read()) + sc_biguint<15>(x_V_1_41_4_fu_31610_p3.read()));
}

}

