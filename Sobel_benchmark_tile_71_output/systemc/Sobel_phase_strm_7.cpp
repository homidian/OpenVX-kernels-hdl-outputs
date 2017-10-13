#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_p_Val2_7_42_4_fu_31740_p2() {
    p_Val2_7_42_4_fu_31740_p2 = (!y_V_1_42_3_reg_61893.read().is_01() || !p_Val2_6_42_4_fu_31737_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_42_3_reg_61893.read()) - sc_bigint<15>(p_Val2_6_42_4_fu_31737_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_5_fu_31814_p2() {
    p_Val2_7_42_5_fu_31814_p2 = (!y_V_1_42_4_fu_31766_p3.read().is_01() || !p_Val2_6_42_5_fu_31810_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_42_4_fu_31766_p3.read()) - sc_bigint<15>(p_Val2_6_42_5_fu_31810_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_6_fu_42505_p2() {
    p_Val2_7_42_6_fu_42505_p2 = (!y_V_1_42_5_reg_64307.read().is_01() || !p_Val2_6_42_6_fu_42502_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_42_5_reg_64307.read()) - sc_bigint<15>(p_Val2_6_42_6_fu_42502_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_7_fu_42569_p2() {
    p_Val2_7_42_7_fu_42569_p2 = (!y_V_1_42_6_fu_42523_p3.read().is_01() || !p_Val2_6_42_7_fu_42565_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_42_6_fu_42523_p3.read()) - sc_bigint<15>(p_Val2_6_42_7_fu_42565_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_fu_8476_p2() {
    p_Val2_7_42_fu_8476_p2 = (!y0_V_42_cast_fu_8438_p1.read().is_01() || !x0_V_42_cast_fu_8450_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_42_cast_fu_8438_p1.read()) - sc_biguint<14>(x0_V_42_cast_fu_8450_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_1_fu_8526_p2() {
    p_Val2_7_43_1_fu_8526_p2 = (!p_Val2_7_42_fu_8476_p2.read().is_01() || !tmp_865_fu_8522_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_42_fu_8476_p2.read()) - sc_biguint<14>(tmp_865_fu_8522_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_2_fu_20134_p2() {
    p_Val2_7_43_2_fu_20134_p2 = (!y_V_1_43_1_cast_fu_20086_p1.read().is_01() || !p_Val2_6_43_2_fu_20130_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_43_1_cast_fu_20086_p1.read()) - sc_bigint<15>(p_Val2_6_43_2_fu_20130_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_3_fu_20212_p2() {
    p_Val2_7_43_3_fu_20212_p2 = (!y_V_1_43_2_fu_20164_p3.read().is_01() || !p_Val2_6_43_3_fu_20208_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_43_2_fu_20164_p3.read()) - sc_bigint<15>(p_Val2_6_43_3_fu_20208_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_4_fu_31888_p2() {
    p_Val2_7_43_4_fu_31888_p2 = (!y_V_1_43_3_reg_61927.read().is_01() || !p_Val2_6_43_4_fu_31885_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_43_3_reg_61927.read()) - sc_bigint<15>(p_Val2_6_43_4_fu_31885_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_5_fu_31962_p2() {
    p_Val2_7_43_5_fu_31962_p2 = (!y_V_1_43_4_fu_31914_p3.read().is_01() || !p_Val2_6_43_5_fu_31958_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_43_4_fu_31914_p3.read()) - sc_bigint<15>(p_Val2_6_43_5_fu_31958_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_6_fu_42658_p2() {
    p_Val2_7_43_6_fu_42658_p2 = (!y_V_1_43_5_reg_64341.read().is_01() || !p_Val2_6_43_6_fu_42655_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_43_5_reg_64341.read()) - sc_bigint<15>(p_Val2_6_43_6_fu_42655_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_7_fu_42722_p2() {
    p_Val2_7_43_7_fu_42722_p2 = (!y_V_1_43_6_fu_42676_p3.read().is_01() || !p_Val2_6_43_7_fu_42718_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_43_6_fu_42676_p3.read()) - sc_bigint<15>(p_Val2_6_43_7_fu_42718_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_43_fu_8594_p2() {
    p_Val2_7_43_fu_8594_p2 = (!y0_V_43_cast_fu_8556_p1.read().is_01() || !x0_V_43_cast_fu_8568_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_43_cast_fu_8556_p1.read()) - sc_biguint<14>(x0_V_43_cast_fu_8568_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_1_fu_8644_p2() {
    p_Val2_7_44_1_fu_8644_p2 = (!p_Val2_7_43_fu_8594_p2.read().is_01() || !tmp_885_fu_8640_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_43_fu_8594_p2.read()) - sc_biguint<14>(tmp_885_fu_8640_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_2_fu_20328_p2() {
    p_Val2_7_44_2_fu_20328_p2 = (!y_V_1_44_1_cast_fu_20280_p1.read().is_01() || !p_Val2_6_44_2_fu_20324_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_44_1_cast_fu_20280_p1.read()) - sc_bigint<15>(p_Val2_6_44_2_fu_20324_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_3_fu_20406_p2() {
    p_Val2_7_44_3_fu_20406_p2 = (!y_V_1_44_2_fu_20358_p3.read().is_01() || !p_Val2_6_44_3_fu_20402_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_44_2_fu_20358_p3.read()) - sc_bigint<15>(p_Val2_6_44_3_fu_20402_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_4_fu_32036_p2() {
    p_Val2_7_44_4_fu_32036_p2 = (!y_V_1_44_3_reg_61961.read().is_01() || !p_Val2_6_44_4_fu_32033_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_44_3_reg_61961.read()) - sc_bigint<15>(p_Val2_6_44_4_fu_32033_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_5_fu_32110_p2() {
    p_Val2_7_44_5_fu_32110_p2 = (!y_V_1_44_4_fu_32062_p3.read().is_01() || !p_Val2_6_44_5_fu_32106_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_44_4_fu_32062_p3.read()) - sc_bigint<15>(p_Val2_6_44_5_fu_32106_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_6_fu_42811_p2() {
    p_Val2_7_44_6_fu_42811_p2 = (!y_V_1_44_5_reg_64375.read().is_01() || !p_Val2_6_44_6_fu_42808_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_44_5_reg_64375.read()) - sc_bigint<15>(p_Val2_6_44_6_fu_42808_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_7_fu_42875_p2() {
    p_Val2_7_44_7_fu_42875_p2 = (!y_V_1_44_6_fu_42829_p3.read().is_01() || !p_Val2_6_44_7_fu_42871_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_44_6_fu_42829_p3.read()) - sc_bigint<15>(p_Val2_6_44_7_fu_42871_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_44_fu_8712_p2() {
    p_Val2_7_44_fu_8712_p2 = (!y0_V_44_cast_fu_8674_p1.read().is_01() || !x0_V_44_cast_fu_8686_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_44_cast_fu_8674_p1.read()) - sc_biguint<14>(x0_V_44_cast_fu_8686_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_1_fu_8762_p2() {
    p_Val2_7_45_1_fu_8762_p2 = (!p_Val2_7_44_fu_8712_p2.read().is_01() || !tmp_905_fu_8758_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_44_fu_8712_p2.read()) - sc_biguint<14>(tmp_905_fu_8758_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_2_fu_20522_p2() {
    p_Val2_7_45_2_fu_20522_p2 = (!y_V_1_45_1_cast_fu_20474_p1.read().is_01() || !p_Val2_6_45_2_fu_20518_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_45_1_cast_fu_20474_p1.read()) - sc_bigint<15>(p_Val2_6_45_2_fu_20518_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_3_fu_20600_p2() {
    p_Val2_7_45_3_fu_20600_p2 = (!y_V_1_45_2_fu_20552_p3.read().is_01() || !p_Val2_6_45_3_fu_20596_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_45_2_fu_20552_p3.read()) - sc_bigint<15>(p_Val2_6_45_3_fu_20596_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_4_fu_32184_p2() {
    p_Val2_7_45_4_fu_32184_p2 = (!y_V_1_45_3_reg_61995.read().is_01() || !p_Val2_6_45_4_fu_32181_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_45_3_reg_61995.read()) - sc_bigint<15>(p_Val2_6_45_4_fu_32181_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_5_fu_32258_p2() {
    p_Val2_7_45_5_fu_32258_p2 = (!y_V_1_45_4_fu_32210_p3.read().is_01() || !p_Val2_6_45_5_fu_32254_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_45_4_fu_32210_p3.read()) - sc_bigint<15>(p_Val2_6_45_5_fu_32254_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_6_fu_42964_p2() {
    p_Val2_7_45_6_fu_42964_p2 = (!y_V_1_45_5_reg_64409.read().is_01() || !p_Val2_6_45_6_fu_42961_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_45_5_reg_64409.read()) - sc_bigint<15>(p_Val2_6_45_6_fu_42961_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_7_fu_43028_p2() {
    p_Val2_7_45_7_fu_43028_p2 = (!y_V_1_45_6_fu_42982_p3.read().is_01() || !p_Val2_6_45_7_fu_43024_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_45_6_fu_42982_p3.read()) - sc_bigint<15>(p_Val2_6_45_7_fu_43024_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_45_fu_8830_p2() {
    p_Val2_7_45_fu_8830_p2 = (!y0_V_45_cast_fu_8792_p1.read().is_01() || !x0_V_45_cast_fu_8804_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_45_cast_fu_8792_p1.read()) - sc_biguint<14>(x0_V_45_cast_fu_8804_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_1_fu_8880_p2() {
    p_Val2_7_46_1_fu_8880_p2 = (!p_Val2_7_45_fu_8830_p2.read().is_01() || !tmp_925_fu_8876_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_45_fu_8830_p2.read()) - sc_biguint<14>(tmp_925_fu_8876_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_2_fu_20716_p2() {
    p_Val2_7_46_2_fu_20716_p2 = (!y_V_1_46_1_cast_fu_20668_p1.read().is_01() || !p_Val2_6_46_2_fu_20712_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_46_1_cast_fu_20668_p1.read()) - sc_bigint<15>(p_Val2_6_46_2_fu_20712_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_3_fu_20794_p2() {
    p_Val2_7_46_3_fu_20794_p2 = (!y_V_1_46_2_fu_20746_p3.read().is_01() || !p_Val2_6_46_3_fu_20790_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_46_2_fu_20746_p3.read()) - sc_bigint<15>(p_Val2_6_46_3_fu_20790_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_4_fu_32332_p2() {
    p_Val2_7_46_4_fu_32332_p2 = (!y_V_1_46_3_reg_62029.read().is_01() || !p_Val2_6_46_4_fu_32329_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_46_3_reg_62029.read()) - sc_bigint<15>(p_Val2_6_46_4_fu_32329_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_5_fu_32406_p2() {
    p_Val2_7_46_5_fu_32406_p2 = (!y_V_1_46_4_fu_32358_p3.read().is_01() || !p_Val2_6_46_5_fu_32402_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_46_4_fu_32358_p3.read()) - sc_bigint<15>(p_Val2_6_46_5_fu_32402_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_6_fu_43117_p2() {
    p_Val2_7_46_6_fu_43117_p2 = (!y_V_1_46_5_reg_64443.read().is_01() || !p_Val2_6_46_6_fu_43114_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_46_5_reg_64443.read()) - sc_bigint<15>(p_Val2_6_46_6_fu_43114_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_7_fu_43181_p2() {
    p_Val2_7_46_7_fu_43181_p2 = (!y_V_1_46_6_fu_43135_p3.read().is_01() || !p_Val2_6_46_7_fu_43177_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_46_6_fu_43135_p3.read()) - sc_bigint<15>(p_Val2_6_46_7_fu_43177_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_46_fu_8948_p2() {
    p_Val2_7_46_fu_8948_p2 = (!y0_V_46_cast_fu_8910_p1.read().is_01() || !x0_V_46_cast_fu_8922_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_46_cast_fu_8910_p1.read()) - sc_biguint<14>(x0_V_46_cast_fu_8922_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_1_fu_8998_p2() {
    p_Val2_7_47_1_fu_8998_p2 = (!p_Val2_7_46_fu_8948_p2.read().is_01() || !tmp_945_fu_8994_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_46_fu_8948_p2.read()) - sc_biguint<14>(tmp_945_fu_8994_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_2_fu_20910_p2() {
    p_Val2_7_47_2_fu_20910_p2 = (!y_V_1_47_1_cast_fu_20862_p1.read().is_01() || !p_Val2_6_47_2_fu_20906_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_47_1_cast_fu_20862_p1.read()) - sc_bigint<15>(p_Val2_6_47_2_fu_20906_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_3_fu_20988_p2() {
    p_Val2_7_47_3_fu_20988_p2 = (!y_V_1_47_2_fu_20940_p3.read().is_01() || !p_Val2_6_47_3_fu_20984_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_47_2_fu_20940_p3.read()) - sc_bigint<15>(p_Val2_6_47_3_fu_20984_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_4_fu_32480_p2() {
    p_Val2_7_47_4_fu_32480_p2 = (!y_V_1_47_3_reg_62063.read().is_01() || !p_Val2_6_47_4_fu_32477_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_47_3_reg_62063.read()) - sc_bigint<15>(p_Val2_6_47_4_fu_32477_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_5_fu_32554_p2() {
    p_Val2_7_47_5_fu_32554_p2 = (!y_V_1_47_4_fu_32506_p3.read().is_01() || !p_Val2_6_47_5_fu_32550_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_47_4_fu_32506_p3.read()) - sc_bigint<15>(p_Val2_6_47_5_fu_32550_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_6_fu_43270_p2() {
    p_Val2_7_47_6_fu_43270_p2 = (!y_V_1_47_5_reg_64477.read().is_01() || !p_Val2_6_47_6_fu_43267_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_47_5_reg_64477.read()) - sc_bigint<15>(p_Val2_6_47_6_fu_43267_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_7_fu_43334_p2() {
    p_Val2_7_47_7_fu_43334_p2 = (!y_V_1_47_6_fu_43288_p3.read().is_01() || !p_Val2_6_47_7_fu_43330_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_47_6_fu_43288_p3.read()) - sc_bigint<15>(p_Val2_6_47_7_fu_43330_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_47_fu_9066_p2() {
    p_Val2_7_47_fu_9066_p2 = (!y0_V_47_cast_fu_9028_p1.read().is_01() || !x0_V_47_cast_fu_9040_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_47_cast_fu_9028_p1.read()) - sc_biguint<14>(x0_V_47_cast_fu_9040_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_1_fu_9116_p2() {
    p_Val2_7_48_1_fu_9116_p2 = (!p_Val2_7_47_fu_9066_p2.read().is_01() || !tmp_965_fu_9112_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_47_fu_9066_p2.read()) - sc_biguint<14>(tmp_965_fu_9112_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_2_fu_21104_p2() {
    p_Val2_7_48_2_fu_21104_p2 = (!y_V_1_48_1_cast_fu_21056_p1.read().is_01() || !p_Val2_6_48_2_fu_21100_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_48_1_cast_fu_21056_p1.read()) - sc_bigint<15>(p_Val2_6_48_2_fu_21100_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_3_fu_21182_p2() {
    p_Val2_7_48_3_fu_21182_p2 = (!y_V_1_48_2_fu_21134_p3.read().is_01() || !p_Val2_6_48_3_fu_21178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_48_2_fu_21134_p3.read()) - sc_bigint<15>(p_Val2_6_48_3_fu_21178_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_4_fu_32628_p2() {
    p_Val2_7_48_4_fu_32628_p2 = (!y_V_1_48_3_reg_62097.read().is_01() || !p_Val2_6_48_4_fu_32625_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_48_3_reg_62097.read()) - sc_bigint<15>(p_Val2_6_48_4_fu_32625_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_5_fu_32702_p2() {
    p_Val2_7_48_5_fu_32702_p2 = (!y_V_1_48_4_fu_32654_p3.read().is_01() || !p_Val2_6_48_5_fu_32698_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_48_4_fu_32654_p3.read()) - sc_bigint<15>(p_Val2_6_48_5_fu_32698_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_6_fu_43423_p2() {
    p_Val2_7_48_6_fu_43423_p2 = (!y_V_1_48_5_reg_64511.read().is_01() || !p_Val2_6_48_6_fu_43420_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_48_5_reg_64511.read()) - sc_bigint<15>(p_Val2_6_48_6_fu_43420_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_7_fu_43487_p2() {
    p_Val2_7_48_7_fu_43487_p2 = (!y_V_1_48_6_fu_43441_p3.read().is_01() || !p_Val2_6_48_7_fu_43483_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_48_6_fu_43441_p3.read()) - sc_bigint<15>(p_Val2_6_48_7_fu_43483_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_48_fu_9184_p2() {
    p_Val2_7_48_fu_9184_p2 = (!y0_V_48_cast_fu_9146_p1.read().is_01() || !x0_V_48_cast_fu_9158_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_48_cast_fu_9146_p1.read()) - sc_biguint<14>(x0_V_48_cast_fu_9158_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_1_fu_9234_p2() {
    p_Val2_7_49_1_fu_9234_p2 = (!p_Val2_7_48_fu_9184_p2.read().is_01() || !tmp_985_fu_9230_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_48_fu_9184_p2.read()) - sc_biguint<14>(tmp_985_fu_9230_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_2_fu_21298_p2() {
    p_Val2_7_49_2_fu_21298_p2 = (!y_V_1_49_1_cast_fu_21250_p1.read().is_01() || !p_Val2_6_49_2_fu_21294_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_49_1_cast_fu_21250_p1.read()) - sc_bigint<15>(p_Val2_6_49_2_fu_21294_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_3_fu_21376_p2() {
    p_Val2_7_49_3_fu_21376_p2 = (!y_V_1_49_2_fu_21328_p3.read().is_01() || !p_Val2_6_49_3_fu_21372_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_49_2_fu_21328_p3.read()) - sc_bigint<15>(p_Val2_6_49_3_fu_21372_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_4_fu_32776_p2() {
    p_Val2_7_49_4_fu_32776_p2 = (!y_V_1_49_3_reg_62131.read().is_01() || !p_Val2_6_49_4_fu_32773_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_49_3_reg_62131.read()) - sc_bigint<15>(p_Val2_6_49_4_fu_32773_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_5_fu_32850_p2() {
    p_Val2_7_49_5_fu_32850_p2 = (!y_V_1_49_4_fu_32802_p3.read().is_01() || !p_Val2_6_49_5_fu_32846_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_49_4_fu_32802_p3.read()) - sc_bigint<15>(p_Val2_6_49_5_fu_32846_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_6_fu_43576_p2() {
    p_Val2_7_49_6_fu_43576_p2 = (!y_V_1_49_5_reg_64545.read().is_01() || !p_Val2_6_49_6_fu_43573_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_49_5_reg_64545.read()) - sc_bigint<15>(p_Val2_6_49_6_fu_43573_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_7_fu_43640_p2() {
    p_Val2_7_49_7_fu_43640_p2 = (!y_V_1_49_6_fu_43594_p3.read().is_01() || !p_Val2_6_49_7_fu_43636_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_49_6_fu_43594_p3.read()) - sc_bigint<15>(p_Val2_6_49_7_fu_43636_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_49_fu_9302_p2() {
    p_Val2_7_49_fu_9302_p2 = (!y0_V_49_cast_fu_9264_p1.read().is_01() || !x0_V_49_cast_fu_9276_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_49_cast_fu_9264_p1.read()) - sc_biguint<14>(x0_V_49_cast_fu_9276_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_1_fu_3924_p2() {
    p_Val2_7_4_1_fu_3924_p2 = (!p_Val2_7_4_fu_3874_p2.read().is_01() || !tmp_85_fu_3920_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_4_fu_3874_p2.read()) - sc_biguint<14>(tmp_85_fu_3920_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_2_fu_12568_p2() {
    p_Val2_7_4_2_fu_12568_p2 = (!y_V_1_4_1_cast_fu_12520_p1.read().is_01() || !p_Val2_6_4_2_fu_12564_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_4_1_cast_fu_12520_p1.read()) - sc_bigint<15>(p_Val2_6_4_2_fu_12564_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_3_fu_12646_p2() {
    p_Val2_7_4_3_fu_12646_p2 = (!y_V_1_4_2_fu_12598_p3.read().is_01() || !p_Val2_6_4_3_fu_12642_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_4_2_fu_12598_p3.read()) - sc_bigint<15>(p_Val2_6_4_3_fu_12642_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_4_fu_26116_p2() {
    p_Val2_7_4_4_fu_26116_p2 = (!y_V_1_4_3_reg_60601.read().is_01() || !p_Val2_6_4_4_fu_26113_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_4_3_reg_60601.read()) - sc_bigint<15>(p_Val2_6_4_4_fu_26113_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_5_fu_26190_p2() {
    p_Val2_7_4_5_fu_26190_p2 = (!y_V_1_4_4_fu_26142_p3.read().is_01() || !p_Val2_6_4_5_fu_26186_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_4_4_fu_26142_p3.read()) - sc_bigint<15>(p_Val2_6_4_5_fu_26186_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_6_fu_36691_p2() {
    p_Val2_7_4_6_fu_36691_p2 = (!y_V_1_4_5_reg_63015.read().is_01() || !p_Val2_6_4_6_fu_36688_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_4_5_reg_63015.read()) - sc_bigint<15>(p_Val2_6_4_6_fu_36688_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_7_fu_36755_p2() {
    p_Val2_7_4_7_fu_36755_p2 = (!y_V_1_4_6_fu_36709_p3.read().is_01() || !p_Val2_6_4_7_fu_36751_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_4_6_fu_36709_p3.read()) - sc_bigint<15>(p_Val2_6_4_7_fu_36751_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_4_fu_3874_p2() {
    p_Val2_7_4_fu_3874_p2 = (!y0_V_4_cast_fu_3836_p1.read().is_01() || !x0_V_4_cast_fu_3848_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_4_cast_fu_3836_p1.read()) - sc_biguint<14>(x0_V_4_cast_fu_3848_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_1_fu_9352_p2() {
    p_Val2_7_50_1_fu_9352_p2 = (!p_Val2_7_49_fu_9302_p2.read().is_01() || !tmp_1005_fu_9348_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_49_fu_9302_p2.read()) - sc_biguint<14>(tmp_1005_fu_9348_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_2_fu_21492_p2() {
    p_Val2_7_50_2_fu_21492_p2 = (!y_V_1_50_1_cast_fu_21444_p1.read().is_01() || !p_Val2_6_50_2_fu_21488_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_50_1_cast_fu_21444_p1.read()) - sc_bigint<15>(p_Val2_6_50_2_fu_21488_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_3_fu_21570_p2() {
    p_Val2_7_50_3_fu_21570_p2 = (!y_V_1_50_2_fu_21522_p3.read().is_01() || !p_Val2_6_50_3_fu_21566_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_50_2_fu_21522_p3.read()) - sc_bigint<15>(p_Val2_6_50_3_fu_21566_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_4_fu_32924_p2() {
    p_Val2_7_50_4_fu_32924_p2 = (!y_V_1_50_3_reg_62165.read().is_01() || !p_Val2_6_50_4_fu_32921_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_50_3_reg_62165.read()) - sc_bigint<15>(p_Val2_6_50_4_fu_32921_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_5_fu_32998_p2() {
    p_Val2_7_50_5_fu_32998_p2 = (!y_V_1_50_4_fu_32950_p3.read().is_01() || !p_Val2_6_50_5_fu_32994_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_50_4_fu_32950_p3.read()) - sc_bigint<15>(p_Val2_6_50_5_fu_32994_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_6_fu_43729_p2() {
    p_Val2_7_50_6_fu_43729_p2 = (!y_V_1_50_5_reg_64579.read().is_01() || !p_Val2_6_50_6_fu_43726_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_50_5_reg_64579.read()) - sc_bigint<15>(p_Val2_6_50_6_fu_43726_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_7_fu_43793_p2() {
    p_Val2_7_50_7_fu_43793_p2 = (!y_V_1_50_6_fu_43747_p3.read().is_01() || !p_Val2_6_50_7_fu_43789_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_50_6_fu_43747_p3.read()) - sc_bigint<15>(p_Val2_6_50_7_fu_43789_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_50_fu_9420_p2() {
    p_Val2_7_50_fu_9420_p2 = (!y0_V_50_cast_fu_9382_p1.read().is_01() || !x0_V_50_cast_fu_9394_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_50_cast_fu_9382_p1.read()) - sc_biguint<14>(x0_V_50_cast_fu_9394_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_1_fu_9470_p2() {
    p_Val2_7_51_1_fu_9470_p2 = (!p_Val2_7_50_fu_9420_p2.read().is_01() || !tmp_1025_fu_9466_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_50_fu_9420_p2.read()) - sc_biguint<14>(tmp_1025_fu_9466_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_2_fu_21686_p2() {
    p_Val2_7_51_2_fu_21686_p2 = (!y_V_1_51_1_cast_fu_21638_p1.read().is_01() || !p_Val2_6_51_2_fu_21682_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_51_1_cast_fu_21638_p1.read()) - sc_bigint<15>(p_Val2_6_51_2_fu_21682_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_3_fu_21764_p2() {
    p_Val2_7_51_3_fu_21764_p2 = (!y_V_1_51_2_fu_21716_p3.read().is_01() || !p_Val2_6_51_3_fu_21760_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_51_2_fu_21716_p3.read()) - sc_bigint<15>(p_Val2_6_51_3_fu_21760_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_4_fu_33072_p2() {
    p_Val2_7_51_4_fu_33072_p2 = (!y_V_1_51_3_reg_62199.read().is_01() || !p_Val2_6_51_4_fu_33069_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_51_3_reg_62199.read()) - sc_bigint<15>(p_Val2_6_51_4_fu_33069_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_5_fu_33146_p2() {
    p_Val2_7_51_5_fu_33146_p2 = (!y_V_1_51_4_fu_33098_p3.read().is_01() || !p_Val2_6_51_5_fu_33142_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_51_4_fu_33098_p3.read()) - sc_bigint<15>(p_Val2_6_51_5_fu_33142_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_6_fu_43882_p2() {
    p_Val2_7_51_6_fu_43882_p2 = (!y_V_1_51_5_reg_64613.read().is_01() || !p_Val2_6_51_6_fu_43879_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_51_5_reg_64613.read()) - sc_bigint<15>(p_Val2_6_51_6_fu_43879_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_7_fu_43946_p2() {
    p_Val2_7_51_7_fu_43946_p2 = (!y_V_1_51_6_fu_43900_p3.read().is_01() || !p_Val2_6_51_7_fu_43942_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_51_6_fu_43900_p3.read()) - sc_bigint<15>(p_Val2_6_51_7_fu_43942_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_51_fu_9538_p2() {
    p_Val2_7_51_fu_9538_p2 = (!y0_V_51_cast_fu_9500_p1.read().is_01() || !x0_V_51_cast_fu_9512_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_51_cast_fu_9500_p1.read()) - sc_biguint<14>(x0_V_51_cast_fu_9512_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_1_fu_9588_p2() {
    p_Val2_7_52_1_fu_9588_p2 = (!p_Val2_7_51_fu_9538_p2.read().is_01() || !tmp_1045_fu_9584_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_51_fu_9538_p2.read()) - sc_biguint<14>(tmp_1045_fu_9584_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_2_fu_21880_p2() {
    p_Val2_7_52_2_fu_21880_p2 = (!y_V_1_52_1_cast_fu_21832_p1.read().is_01() || !p_Val2_6_52_2_fu_21876_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_52_1_cast_fu_21832_p1.read()) - sc_bigint<15>(p_Val2_6_52_2_fu_21876_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_3_fu_21958_p2() {
    p_Val2_7_52_3_fu_21958_p2 = (!y_V_1_52_2_fu_21910_p3.read().is_01() || !p_Val2_6_52_3_fu_21954_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_52_2_fu_21910_p3.read()) - sc_bigint<15>(p_Val2_6_52_3_fu_21954_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_4_fu_33220_p2() {
    p_Val2_7_52_4_fu_33220_p2 = (!y_V_1_52_3_reg_62233.read().is_01() || !p_Val2_6_52_4_fu_33217_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_52_3_reg_62233.read()) - sc_bigint<15>(p_Val2_6_52_4_fu_33217_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_5_fu_33294_p2() {
    p_Val2_7_52_5_fu_33294_p2 = (!y_V_1_52_4_fu_33246_p3.read().is_01() || !p_Val2_6_52_5_fu_33290_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_52_4_fu_33246_p3.read()) - sc_bigint<15>(p_Val2_6_52_5_fu_33290_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_6_fu_44035_p2() {
    p_Val2_7_52_6_fu_44035_p2 = (!y_V_1_52_5_reg_64647.read().is_01() || !p_Val2_6_52_6_fu_44032_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_52_5_reg_64647.read()) - sc_bigint<15>(p_Val2_6_52_6_fu_44032_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_7_fu_44099_p2() {
    p_Val2_7_52_7_fu_44099_p2 = (!y_V_1_52_6_fu_44053_p3.read().is_01() || !p_Val2_6_52_7_fu_44095_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_52_6_fu_44053_p3.read()) - sc_bigint<15>(p_Val2_6_52_7_fu_44095_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_52_fu_9656_p2() {
    p_Val2_7_52_fu_9656_p2 = (!y0_V_52_cast_fu_9618_p1.read().is_01() || !x0_V_52_cast_fu_9630_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_52_cast_fu_9618_p1.read()) - sc_biguint<14>(x0_V_52_cast_fu_9630_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_1_fu_9706_p2() {
    p_Val2_7_53_1_fu_9706_p2 = (!p_Val2_7_52_fu_9656_p2.read().is_01() || !tmp_1065_fu_9702_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_52_fu_9656_p2.read()) - sc_biguint<14>(tmp_1065_fu_9702_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_2_fu_22074_p2() {
    p_Val2_7_53_2_fu_22074_p2 = (!y_V_1_53_1_cast_fu_22026_p1.read().is_01() || !p_Val2_6_53_2_fu_22070_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_53_1_cast_fu_22026_p1.read()) - sc_bigint<15>(p_Val2_6_53_2_fu_22070_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_3_fu_22152_p2() {
    p_Val2_7_53_3_fu_22152_p2 = (!y_V_1_53_2_fu_22104_p3.read().is_01() || !p_Val2_6_53_3_fu_22148_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_53_2_fu_22104_p3.read()) - sc_bigint<15>(p_Val2_6_53_3_fu_22148_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_4_fu_33368_p2() {
    p_Val2_7_53_4_fu_33368_p2 = (!y_V_1_53_3_reg_62267.read().is_01() || !p_Val2_6_53_4_fu_33365_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_53_3_reg_62267.read()) - sc_bigint<15>(p_Val2_6_53_4_fu_33365_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_5_fu_33442_p2() {
    p_Val2_7_53_5_fu_33442_p2 = (!y_V_1_53_4_fu_33394_p3.read().is_01() || !p_Val2_6_53_5_fu_33438_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_53_4_fu_33394_p3.read()) - sc_bigint<15>(p_Val2_6_53_5_fu_33438_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_6_fu_44188_p2() {
    p_Val2_7_53_6_fu_44188_p2 = (!y_V_1_53_5_reg_64681.read().is_01() || !p_Val2_6_53_6_fu_44185_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_53_5_reg_64681.read()) - sc_bigint<15>(p_Val2_6_53_6_fu_44185_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_7_fu_44252_p2() {
    p_Val2_7_53_7_fu_44252_p2 = (!y_V_1_53_6_fu_44206_p3.read().is_01() || !p_Val2_6_53_7_fu_44248_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_53_6_fu_44206_p3.read()) - sc_bigint<15>(p_Val2_6_53_7_fu_44248_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_53_fu_9774_p2() {
    p_Val2_7_53_fu_9774_p2 = (!y0_V_53_cast_fu_9736_p1.read().is_01() || !x0_V_53_cast_fu_9748_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_53_cast_fu_9736_p1.read()) - sc_biguint<14>(x0_V_53_cast_fu_9748_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_1_fu_9824_p2() {
    p_Val2_7_54_1_fu_9824_p2 = (!p_Val2_7_53_fu_9774_p2.read().is_01() || !tmp_1085_fu_9820_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_53_fu_9774_p2.read()) - sc_biguint<14>(tmp_1085_fu_9820_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_2_fu_22268_p2() {
    p_Val2_7_54_2_fu_22268_p2 = (!y_V_1_54_1_cast_fu_22220_p1.read().is_01() || !p_Val2_6_54_2_fu_22264_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_54_1_cast_fu_22220_p1.read()) - sc_bigint<15>(p_Val2_6_54_2_fu_22264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_3_fu_22346_p2() {
    p_Val2_7_54_3_fu_22346_p2 = (!y_V_1_54_2_fu_22298_p3.read().is_01() || !p_Val2_6_54_3_fu_22342_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_54_2_fu_22298_p3.read()) - sc_bigint<15>(p_Val2_6_54_3_fu_22342_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_4_fu_33516_p2() {
    p_Val2_7_54_4_fu_33516_p2 = (!y_V_1_54_3_reg_62301.read().is_01() || !p_Val2_6_54_4_fu_33513_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_54_3_reg_62301.read()) - sc_bigint<15>(p_Val2_6_54_4_fu_33513_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_5_fu_33590_p2() {
    p_Val2_7_54_5_fu_33590_p2 = (!y_V_1_54_4_fu_33542_p3.read().is_01() || !p_Val2_6_54_5_fu_33586_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_54_4_fu_33542_p3.read()) - sc_bigint<15>(p_Val2_6_54_5_fu_33586_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_6_fu_44341_p2() {
    p_Val2_7_54_6_fu_44341_p2 = (!y_V_1_54_5_reg_64715.read().is_01() || !p_Val2_6_54_6_fu_44338_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_54_5_reg_64715.read()) - sc_bigint<15>(p_Val2_6_54_6_fu_44338_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_7_fu_44405_p2() {
    p_Val2_7_54_7_fu_44405_p2 = (!y_V_1_54_6_fu_44359_p3.read().is_01() || !p_Val2_6_54_7_fu_44401_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_54_6_fu_44359_p3.read()) - sc_bigint<15>(p_Val2_6_54_7_fu_44401_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_54_fu_9892_p2() {
    p_Val2_7_54_fu_9892_p2 = (!y0_V_54_cast_fu_9854_p1.read().is_01() || !x0_V_54_cast_fu_9866_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_54_cast_fu_9854_p1.read()) - sc_biguint<14>(x0_V_54_cast_fu_9866_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_1_fu_9942_p2() {
    p_Val2_7_55_1_fu_9942_p2 = (!p_Val2_7_54_fu_9892_p2.read().is_01() || !tmp_1105_fu_9938_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_54_fu_9892_p2.read()) - sc_biguint<14>(tmp_1105_fu_9938_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_2_fu_22462_p2() {
    p_Val2_7_55_2_fu_22462_p2 = (!y_V_1_55_1_cast_fu_22414_p1.read().is_01() || !p_Val2_6_55_2_fu_22458_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_55_1_cast_fu_22414_p1.read()) - sc_bigint<15>(p_Val2_6_55_2_fu_22458_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_3_fu_22540_p2() {
    p_Val2_7_55_3_fu_22540_p2 = (!y_V_1_55_2_fu_22492_p3.read().is_01() || !p_Val2_6_55_3_fu_22536_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_55_2_fu_22492_p3.read()) - sc_bigint<15>(p_Val2_6_55_3_fu_22536_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_4_fu_33664_p2() {
    p_Val2_7_55_4_fu_33664_p2 = (!y_V_1_55_3_reg_62335.read().is_01() || !p_Val2_6_55_4_fu_33661_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_55_3_reg_62335.read()) - sc_bigint<15>(p_Val2_6_55_4_fu_33661_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_5_fu_33738_p2() {
    p_Val2_7_55_5_fu_33738_p2 = (!y_V_1_55_4_fu_33690_p3.read().is_01() || !p_Val2_6_55_5_fu_33734_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_55_4_fu_33690_p3.read()) - sc_bigint<15>(p_Val2_6_55_5_fu_33734_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_6_fu_44494_p2() {
    p_Val2_7_55_6_fu_44494_p2 = (!y_V_1_55_5_reg_64749.read().is_01() || !p_Val2_6_55_6_fu_44491_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_55_5_reg_64749.read()) - sc_bigint<15>(p_Val2_6_55_6_fu_44491_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_7_fu_44558_p2() {
    p_Val2_7_55_7_fu_44558_p2 = (!y_V_1_55_6_fu_44512_p3.read().is_01() || !p_Val2_6_55_7_fu_44554_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_55_6_fu_44512_p3.read()) - sc_bigint<15>(p_Val2_6_55_7_fu_44554_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_55_fu_10010_p2() {
    p_Val2_7_55_fu_10010_p2 = (!y0_V_55_cast_fu_9972_p1.read().is_01() || !x0_V_55_cast_fu_9984_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_55_cast_fu_9972_p1.read()) - sc_biguint<14>(x0_V_55_cast_fu_9984_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_1_fu_10060_p2() {
    p_Val2_7_56_1_fu_10060_p2 = (!p_Val2_7_55_fu_10010_p2.read().is_01() || !tmp_1125_fu_10056_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_55_fu_10010_p2.read()) - sc_biguint<14>(tmp_1125_fu_10056_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_2_fu_22656_p2() {
    p_Val2_7_56_2_fu_22656_p2 = (!y_V_1_56_1_cast_fu_22608_p1.read().is_01() || !p_Val2_6_56_2_fu_22652_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_56_1_cast_fu_22608_p1.read()) - sc_bigint<15>(p_Val2_6_56_2_fu_22652_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_3_fu_22734_p2() {
    p_Val2_7_56_3_fu_22734_p2 = (!y_V_1_56_2_fu_22686_p3.read().is_01() || !p_Val2_6_56_3_fu_22730_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_56_2_fu_22686_p3.read()) - sc_bigint<15>(p_Val2_6_56_3_fu_22730_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_4_fu_33812_p2() {
    p_Val2_7_56_4_fu_33812_p2 = (!y_V_1_56_3_reg_62369.read().is_01() || !p_Val2_6_56_4_fu_33809_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_56_3_reg_62369.read()) - sc_bigint<15>(p_Val2_6_56_4_fu_33809_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_5_fu_33886_p2() {
    p_Val2_7_56_5_fu_33886_p2 = (!y_V_1_56_4_fu_33838_p3.read().is_01() || !p_Val2_6_56_5_fu_33882_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_56_4_fu_33838_p3.read()) - sc_bigint<15>(p_Val2_6_56_5_fu_33882_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_6_fu_44647_p2() {
    p_Val2_7_56_6_fu_44647_p2 = (!y_V_1_56_5_reg_64783.read().is_01() || !p_Val2_6_56_6_fu_44644_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_56_5_reg_64783.read()) - sc_bigint<15>(p_Val2_6_56_6_fu_44644_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_7_fu_44711_p2() {
    p_Val2_7_56_7_fu_44711_p2 = (!y_V_1_56_6_fu_44665_p3.read().is_01() || !p_Val2_6_56_7_fu_44707_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_56_6_fu_44665_p3.read()) - sc_bigint<15>(p_Val2_6_56_7_fu_44707_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_56_fu_10128_p2() {
    p_Val2_7_56_fu_10128_p2 = (!y0_V_56_cast_fu_10090_p1.read().is_01() || !x0_V_56_cast_fu_10102_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_56_cast_fu_10090_p1.read()) - sc_biguint<14>(x0_V_56_cast_fu_10102_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_1_fu_10178_p2() {
    p_Val2_7_57_1_fu_10178_p2 = (!p_Val2_7_56_fu_10128_p2.read().is_01() || !tmp_1145_fu_10174_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_56_fu_10128_p2.read()) - sc_biguint<14>(tmp_1145_fu_10174_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_2_fu_22850_p2() {
    p_Val2_7_57_2_fu_22850_p2 = (!y_V_1_57_1_cast_fu_22802_p1.read().is_01() || !p_Val2_6_57_2_fu_22846_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_57_1_cast_fu_22802_p1.read()) - sc_bigint<15>(p_Val2_6_57_2_fu_22846_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_3_fu_22928_p2() {
    p_Val2_7_57_3_fu_22928_p2 = (!y_V_1_57_2_fu_22880_p3.read().is_01() || !p_Val2_6_57_3_fu_22924_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_57_2_fu_22880_p3.read()) - sc_bigint<15>(p_Val2_6_57_3_fu_22924_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_4_fu_33960_p2() {
    p_Val2_7_57_4_fu_33960_p2 = (!y_V_1_57_3_reg_62403.read().is_01() || !p_Val2_6_57_4_fu_33957_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_57_3_reg_62403.read()) - sc_bigint<15>(p_Val2_6_57_4_fu_33957_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_5_fu_34034_p2() {
    p_Val2_7_57_5_fu_34034_p2 = (!y_V_1_57_4_fu_33986_p3.read().is_01() || !p_Val2_6_57_5_fu_34030_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_57_4_fu_33986_p3.read()) - sc_bigint<15>(p_Val2_6_57_5_fu_34030_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_6_fu_44800_p2() {
    p_Val2_7_57_6_fu_44800_p2 = (!y_V_1_57_5_reg_64817.read().is_01() || !p_Val2_6_57_6_fu_44797_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_57_5_reg_64817.read()) - sc_bigint<15>(p_Val2_6_57_6_fu_44797_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_7_fu_44864_p2() {
    p_Val2_7_57_7_fu_44864_p2 = (!y_V_1_57_6_fu_44818_p3.read().is_01() || !p_Val2_6_57_7_fu_44860_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_57_6_fu_44818_p3.read()) - sc_bigint<15>(p_Val2_6_57_7_fu_44860_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_57_fu_10246_p2() {
    p_Val2_7_57_fu_10246_p2 = (!y0_V_57_cast_fu_10208_p1.read().is_01() || !x0_V_57_cast_fu_10220_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_57_cast_fu_10208_p1.read()) - sc_biguint<14>(x0_V_57_cast_fu_10220_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_1_fu_10296_p2() {
    p_Val2_7_58_1_fu_10296_p2 = (!p_Val2_7_57_fu_10246_p2.read().is_01() || !tmp_1165_fu_10292_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_57_fu_10246_p2.read()) - sc_biguint<14>(tmp_1165_fu_10292_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_2_fu_23044_p2() {
    p_Val2_7_58_2_fu_23044_p2 = (!y_V_1_58_1_cast_fu_22996_p1.read().is_01() || !p_Val2_6_58_2_fu_23040_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_58_1_cast_fu_22996_p1.read()) - sc_bigint<15>(p_Val2_6_58_2_fu_23040_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_3_fu_23122_p2() {
    p_Val2_7_58_3_fu_23122_p2 = (!y_V_1_58_2_fu_23074_p3.read().is_01() || !p_Val2_6_58_3_fu_23118_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_58_2_fu_23074_p3.read()) - sc_bigint<15>(p_Val2_6_58_3_fu_23118_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_4_fu_34108_p2() {
    p_Val2_7_58_4_fu_34108_p2 = (!y_V_1_58_3_reg_62437.read().is_01() || !p_Val2_6_58_4_fu_34105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_58_3_reg_62437.read()) - sc_bigint<15>(p_Val2_6_58_4_fu_34105_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_5_fu_34182_p2() {
    p_Val2_7_58_5_fu_34182_p2 = (!y_V_1_58_4_fu_34134_p3.read().is_01() || !p_Val2_6_58_5_fu_34178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_58_4_fu_34134_p3.read()) - sc_bigint<15>(p_Val2_6_58_5_fu_34178_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_6_fu_44953_p2() {
    p_Val2_7_58_6_fu_44953_p2 = (!y_V_1_58_5_reg_64851.read().is_01() || !p_Val2_6_58_6_fu_44950_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_58_5_reg_64851.read()) - sc_bigint<15>(p_Val2_6_58_6_fu_44950_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_7_fu_45017_p2() {
    p_Val2_7_58_7_fu_45017_p2 = (!y_V_1_58_6_fu_44971_p3.read().is_01() || !p_Val2_6_58_7_fu_45013_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_58_6_fu_44971_p3.read()) - sc_bigint<15>(p_Val2_6_58_7_fu_45013_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_58_fu_10364_p2() {
    p_Val2_7_58_fu_10364_p2 = (!y0_V_58_cast_fu_10326_p1.read().is_01() || !x0_V_58_cast_fu_10338_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_58_cast_fu_10326_p1.read()) - sc_biguint<14>(x0_V_58_cast_fu_10338_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_1_fu_10414_p2() {
    p_Val2_7_59_1_fu_10414_p2 = (!p_Val2_7_58_fu_10364_p2.read().is_01() || !tmp_1185_fu_10410_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_58_fu_10364_p2.read()) - sc_biguint<14>(tmp_1185_fu_10410_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_2_fu_23238_p2() {
    p_Val2_7_59_2_fu_23238_p2 = (!y_V_1_59_1_cast_fu_23190_p1.read().is_01() || !p_Val2_6_59_2_fu_23234_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_59_1_cast_fu_23190_p1.read()) - sc_bigint<15>(p_Val2_6_59_2_fu_23234_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_3_fu_23316_p2() {
    p_Val2_7_59_3_fu_23316_p2 = (!y_V_1_59_2_fu_23268_p3.read().is_01() || !p_Val2_6_59_3_fu_23312_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_59_2_fu_23268_p3.read()) - sc_bigint<15>(p_Val2_6_59_3_fu_23312_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_4_fu_34256_p2() {
    p_Val2_7_59_4_fu_34256_p2 = (!y_V_1_59_3_reg_62471.read().is_01() || !p_Val2_6_59_4_fu_34253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_59_3_reg_62471.read()) - sc_bigint<15>(p_Val2_6_59_4_fu_34253_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_5_fu_34330_p2() {
    p_Val2_7_59_5_fu_34330_p2 = (!y_V_1_59_4_fu_34282_p3.read().is_01() || !p_Val2_6_59_5_fu_34326_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_59_4_fu_34282_p3.read()) - sc_bigint<15>(p_Val2_6_59_5_fu_34326_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_6_fu_45106_p2() {
    p_Val2_7_59_6_fu_45106_p2 = (!y_V_1_59_5_reg_64885.read().is_01() || !p_Val2_6_59_6_fu_45103_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_59_5_reg_64885.read()) - sc_bigint<15>(p_Val2_6_59_6_fu_45103_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_7_fu_45170_p2() {
    p_Val2_7_59_7_fu_45170_p2 = (!y_V_1_59_6_fu_45124_p3.read().is_01() || !p_Val2_6_59_7_fu_45166_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_59_6_fu_45124_p3.read()) - sc_bigint<15>(p_Val2_6_59_7_fu_45166_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_59_fu_10482_p2() {
    p_Val2_7_59_fu_10482_p2 = (!y0_V_59_cast_fu_10444_p1.read().is_01() || !x0_V_59_cast_fu_10456_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_59_cast_fu_10444_p1.read()) - sc_biguint<14>(x0_V_59_cast_fu_10456_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_1_fu_4042_p2() {
    p_Val2_7_5_1_fu_4042_p2 = (!p_Val2_7_5_fu_3992_p2.read().is_01() || !tmp_105_fu_4038_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_5_fu_3992_p2.read()) - sc_biguint<14>(tmp_105_fu_4038_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_2_fu_12762_p2() {
    p_Val2_7_5_2_fu_12762_p2 = (!y_V_1_5_1_cast_fu_12714_p1.read().is_01() || !p_Val2_6_5_2_fu_12758_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_5_1_cast_fu_12714_p1.read()) - sc_bigint<15>(p_Val2_6_5_2_fu_12758_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_3_fu_12840_p2() {
    p_Val2_7_5_3_fu_12840_p2 = (!y_V_1_5_2_fu_12792_p3.read().is_01() || !p_Val2_6_5_3_fu_12836_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_5_2_fu_12792_p3.read()) - sc_bigint<15>(p_Val2_6_5_3_fu_12836_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_4_fu_26264_p2() {
    p_Val2_7_5_4_fu_26264_p2 = (!y_V_1_5_3_reg_60635.read().is_01() || !p_Val2_6_5_4_fu_26261_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_5_3_reg_60635.read()) - sc_bigint<15>(p_Val2_6_5_4_fu_26261_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_5_fu_26338_p2() {
    p_Val2_7_5_5_fu_26338_p2 = (!y_V_1_5_4_fu_26290_p3.read().is_01() || !p_Val2_6_5_5_fu_26334_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_5_4_fu_26290_p3.read()) - sc_bigint<15>(p_Val2_6_5_5_fu_26334_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_6_fu_36844_p2() {
    p_Val2_7_5_6_fu_36844_p2 = (!y_V_1_5_5_reg_63049.read().is_01() || !p_Val2_6_5_6_fu_36841_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_5_5_reg_63049.read()) - sc_bigint<15>(p_Val2_6_5_6_fu_36841_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_7_fu_36908_p2() {
    p_Val2_7_5_7_fu_36908_p2 = (!y_V_1_5_6_fu_36862_p3.read().is_01() || !p_Val2_6_5_7_fu_36904_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_5_6_fu_36862_p3.read()) - sc_bigint<15>(p_Val2_6_5_7_fu_36904_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_5_fu_3992_p2() {
    p_Val2_7_5_fu_3992_p2 = (!y0_V_5_cast_fu_3954_p1.read().is_01() || !x0_V_5_cast_fu_3966_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_5_cast_fu_3954_p1.read()) - sc_biguint<14>(x0_V_5_cast_fu_3966_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_1_fu_10532_p2() {
    p_Val2_7_60_1_fu_10532_p2 = (!p_Val2_7_59_fu_10482_p2.read().is_01() || !tmp_1205_fu_10528_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_59_fu_10482_p2.read()) - sc_biguint<14>(tmp_1205_fu_10528_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_2_fu_23432_p2() {
    p_Val2_7_60_2_fu_23432_p2 = (!y_V_1_60_1_cast_fu_23384_p1.read().is_01() || !p_Val2_6_60_2_fu_23428_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_60_1_cast_fu_23384_p1.read()) - sc_bigint<15>(p_Val2_6_60_2_fu_23428_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_3_fu_23510_p2() {
    p_Val2_7_60_3_fu_23510_p2 = (!y_V_1_60_2_fu_23462_p3.read().is_01() || !p_Val2_6_60_3_fu_23506_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_60_2_fu_23462_p3.read()) - sc_bigint<15>(p_Val2_6_60_3_fu_23506_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_4_fu_34404_p2() {
    p_Val2_7_60_4_fu_34404_p2 = (!y_V_1_60_3_reg_62505.read().is_01() || !p_Val2_6_60_4_fu_34401_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_60_3_reg_62505.read()) - sc_bigint<15>(p_Val2_6_60_4_fu_34401_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_5_fu_34478_p2() {
    p_Val2_7_60_5_fu_34478_p2 = (!y_V_1_60_4_fu_34430_p3.read().is_01() || !p_Val2_6_60_5_fu_34474_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_60_4_fu_34430_p3.read()) - sc_bigint<15>(p_Val2_6_60_5_fu_34474_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_6_fu_45259_p2() {
    p_Val2_7_60_6_fu_45259_p2 = (!y_V_1_60_5_reg_64919.read().is_01() || !p_Val2_6_60_6_fu_45256_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_60_5_reg_64919.read()) - sc_bigint<15>(p_Val2_6_60_6_fu_45256_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_7_fu_45323_p2() {
    p_Val2_7_60_7_fu_45323_p2 = (!y_V_1_60_6_fu_45277_p3.read().is_01() || !p_Val2_6_60_7_fu_45319_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_60_6_fu_45277_p3.read()) - sc_bigint<15>(p_Val2_6_60_7_fu_45319_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_60_fu_10600_p2() {
    p_Val2_7_60_fu_10600_p2 = (!y0_V_60_cast_fu_10562_p1.read().is_01() || !x0_V_60_cast_fu_10574_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_60_cast_fu_10562_p1.read()) - sc_biguint<14>(x0_V_60_cast_fu_10574_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_1_fu_10650_p2() {
    p_Val2_7_61_1_fu_10650_p2 = (!p_Val2_7_60_fu_10600_p2.read().is_01() || !tmp_1225_fu_10646_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_60_fu_10600_p2.read()) - sc_biguint<14>(tmp_1225_fu_10646_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_2_fu_23626_p2() {
    p_Val2_7_61_2_fu_23626_p2 = (!y_V_1_61_1_cast_fu_23578_p1.read().is_01() || !p_Val2_6_61_2_fu_23622_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_61_1_cast_fu_23578_p1.read()) - sc_bigint<15>(p_Val2_6_61_2_fu_23622_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_3_fu_23704_p2() {
    p_Val2_7_61_3_fu_23704_p2 = (!y_V_1_61_2_fu_23656_p3.read().is_01() || !p_Val2_6_61_3_fu_23700_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_61_2_fu_23656_p3.read()) - sc_bigint<15>(p_Val2_6_61_3_fu_23700_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_4_fu_34552_p2() {
    p_Val2_7_61_4_fu_34552_p2 = (!y_V_1_61_3_reg_62539.read().is_01() || !p_Val2_6_61_4_fu_34549_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_61_3_reg_62539.read()) - sc_bigint<15>(p_Val2_6_61_4_fu_34549_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_5_fu_34626_p2() {
    p_Val2_7_61_5_fu_34626_p2 = (!y_V_1_61_4_fu_34578_p3.read().is_01() || !p_Val2_6_61_5_fu_34622_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_61_4_fu_34578_p3.read()) - sc_bigint<15>(p_Val2_6_61_5_fu_34622_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_6_fu_45412_p2() {
    p_Val2_7_61_6_fu_45412_p2 = (!y_V_1_61_5_reg_64953.read().is_01() || !p_Val2_6_61_6_fu_45409_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_61_5_reg_64953.read()) - sc_bigint<15>(p_Val2_6_61_6_fu_45409_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_7_fu_45476_p2() {
    p_Val2_7_61_7_fu_45476_p2 = (!y_V_1_61_6_fu_45430_p3.read().is_01() || !p_Val2_6_61_7_fu_45472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_61_6_fu_45430_p3.read()) - sc_bigint<15>(p_Val2_6_61_7_fu_45472_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_61_fu_10718_p2() {
    p_Val2_7_61_fu_10718_p2 = (!y0_V_61_cast_fu_10680_p1.read().is_01() || !x0_V_61_cast_fu_10692_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_61_cast_fu_10680_p1.read()) - sc_biguint<14>(x0_V_61_cast_fu_10692_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_1_fu_10768_p2() {
    p_Val2_7_62_1_fu_10768_p2 = (!p_Val2_7_61_fu_10718_p2.read().is_01() || !tmp_1245_fu_10764_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_61_fu_10718_p2.read()) - sc_biguint<14>(tmp_1245_fu_10764_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_2_fu_23820_p2() {
    p_Val2_7_62_2_fu_23820_p2 = (!y_V_1_62_1_cast_fu_23772_p1.read().is_01() || !p_Val2_6_62_2_fu_23816_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_62_1_cast_fu_23772_p1.read()) - sc_bigint<15>(p_Val2_6_62_2_fu_23816_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_3_fu_23898_p2() {
    p_Val2_7_62_3_fu_23898_p2 = (!y_V_1_62_2_fu_23850_p3.read().is_01() || !p_Val2_6_62_3_fu_23894_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_62_2_fu_23850_p3.read()) - sc_bigint<15>(p_Val2_6_62_3_fu_23894_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_4_fu_34700_p2() {
    p_Val2_7_62_4_fu_34700_p2 = (!y_V_1_62_3_reg_62573.read().is_01() || !p_Val2_6_62_4_fu_34697_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_62_3_reg_62573.read()) - sc_bigint<15>(p_Val2_6_62_4_fu_34697_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_5_fu_34774_p2() {
    p_Val2_7_62_5_fu_34774_p2 = (!y_V_1_62_4_fu_34726_p3.read().is_01() || !p_Val2_6_62_5_fu_34770_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_62_4_fu_34726_p3.read()) - sc_bigint<15>(p_Val2_6_62_5_fu_34770_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_6_fu_45565_p2() {
    p_Val2_7_62_6_fu_45565_p2 = (!y_V_1_62_5_reg_64987.read().is_01() || !p_Val2_6_62_6_fu_45562_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_62_5_reg_64987.read()) - sc_bigint<15>(p_Val2_6_62_6_fu_45562_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_7_fu_45629_p2() {
    p_Val2_7_62_7_fu_45629_p2 = (!y_V_1_62_6_fu_45583_p3.read().is_01() || !p_Val2_6_62_7_fu_45625_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_62_6_fu_45583_p3.read()) - sc_bigint<15>(p_Val2_6_62_7_fu_45625_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_62_fu_10836_p2() {
    p_Val2_7_62_fu_10836_p2 = (!y0_V_62_cast_fu_10798_p1.read().is_01() || !x0_V_62_cast_fu_10810_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_62_cast_fu_10798_p1.read()) - sc_biguint<14>(x0_V_62_cast_fu_10810_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_1_fu_10886_p2() {
    p_Val2_7_63_1_fu_10886_p2 = (!p_Val2_7_62_fu_10836_p2.read().is_01() || !tmp_1265_fu_10882_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_62_fu_10836_p2.read()) - sc_biguint<14>(tmp_1265_fu_10882_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_2_fu_24014_p2() {
    p_Val2_7_63_2_fu_24014_p2 = (!y_V_1_63_1_cast_fu_23966_p1.read().is_01() || !p_Val2_6_63_2_fu_24010_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_63_1_cast_fu_23966_p1.read()) - sc_bigint<15>(p_Val2_6_63_2_fu_24010_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_3_fu_24092_p2() {
    p_Val2_7_63_3_fu_24092_p2 = (!y_V_1_63_2_fu_24044_p3.read().is_01() || !p_Val2_6_63_3_fu_24088_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_63_2_fu_24044_p3.read()) - sc_bigint<15>(p_Val2_6_63_3_fu_24088_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_4_fu_34848_p2() {
    p_Val2_7_63_4_fu_34848_p2 = (!y_V_1_63_3_reg_62607.read().is_01() || !p_Val2_6_63_4_fu_34845_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_63_3_reg_62607.read()) - sc_bigint<15>(p_Val2_6_63_4_fu_34845_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_5_fu_34922_p2() {
    p_Val2_7_63_5_fu_34922_p2 = (!y_V_1_63_4_fu_34874_p3.read().is_01() || !p_Val2_6_63_5_fu_34918_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_63_4_fu_34874_p3.read()) - sc_bigint<15>(p_Val2_6_63_5_fu_34918_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_6_fu_45718_p2() {
    p_Val2_7_63_6_fu_45718_p2 = (!y_V_1_63_5_reg_65021.read().is_01() || !p_Val2_6_63_6_fu_45715_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_63_5_reg_65021.read()) - sc_bigint<15>(p_Val2_6_63_6_fu_45715_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_7_fu_45782_p2() {
    p_Val2_7_63_7_fu_45782_p2 = (!y_V_1_63_6_fu_45736_p3.read().is_01() || !p_Val2_6_63_7_fu_45778_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_63_6_fu_45736_p3.read()) - sc_bigint<15>(p_Val2_6_63_7_fu_45778_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_63_fu_10954_p2() {
    p_Val2_7_63_fu_10954_p2 = (!y0_V_63_cast_fu_10916_p1.read().is_01() || !x0_V_63_cast_fu_10928_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_63_cast_fu_10916_p1.read()) - sc_biguint<14>(x0_V_63_cast_fu_10928_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_1_fu_11004_p2() {
    p_Val2_7_64_1_fu_11004_p2 = (!p_Val2_7_63_fu_10954_p2.read().is_01() || !tmp_1285_fu_11000_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_63_fu_10954_p2.read()) - sc_biguint<14>(tmp_1285_fu_11000_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_2_fu_24208_p2() {
    p_Val2_7_64_2_fu_24208_p2 = (!y_V_1_64_1_cast_fu_24160_p1.read().is_01() || !p_Val2_6_64_2_fu_24204_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_64_1_cast_fu_24160_p1.read()) - sc_bigint<15>(p_Val2_6_64_2_fu_24204_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_3_fu_24286_p2() {
    p_Val2_7_64_3_fu_24286_p2 = (!y_V_1_64_2_fu_24238_p3.read().is_01() || !p_Val2_6_64_3_fu_24282_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_64_2_fu_24238_p3.read()) - sc_bigint<15>(p_Val2_6_64_3_fu_24282_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_4_fu_34996_p2() {
    p_Val2_7_64_4_fu_34996_p2 = (!y_V_1_64_3_reg_62641.read().is_01() || !p_Val2_6_64_4_fu_34993_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_64_3_reg_62641.read()) - sc_bigint<15>(p_Val2_6_64_4_fu_34993_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_5_fu_35070_p2() {
    p_Val2_7_64_5_fu_35070_p2 = (!y_V_1_64_4_fu_35022_p3.read().is_01() || !p_Val2_6_64_5_fu_35066_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_64_4_fu_35022_p3.read()) - sc_bigint<15>(p_Val2_6_64_5_fu_35066_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_6_fu_45871_p2() {
    p_Val2_7_64_6_fu_45871_p2 = (!y_V_1_64_5_reg_65055.read().is_01() || !p_Val2_6_64_6_fu_45868_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_64_5_reg_65055.read()) - sc_bigint<15>(p_Val2_6_64_6_fu_45868_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_7_fu_45935_p2() {
    p_Val2_7_64_7_fu_45935_p2 = (!y_V_1_64_6_fu_45889_p3.read().is_01() || !p_Val2_6_64_7_fu_45931_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_64_6_fu_45889_p3.read()) - sc_bigint<15>(p_Val2_6_64_7_fu_45931_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_64_fu_11072_p2() {
    p_Val2_7_64_fu_11072_p2 = (!y0_V_64_cast_fu_11034_p1.read().is_01() || !x0_V_64_cast_fu_11046_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_64_cast_fu_11034_p1.read()) - sc_biguint<14>(x0_V_64_cast_fu_11046_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_1_fu_11122_p2() {
    p_Val2_7_65_1_fu_11122_p2 = (!p_Val2_7_64_fu_11072_p2.read().is_01() || !tmp_1305_fu_11118_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_64_fu_11072_p2.read()) - sc_biguint<14>(tmp_1305_fu_11118_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_2_fu_24402_p2() {
    p_Val2_7_65_2_fu_24402_p2 = (!y_V_1_65_1_cast_fu_24354_p1.read().is_01() || !p_Val2_6_65_2_fu_24398_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_65_1_cast_fu_24354_p1.read()) - sc_bigint<15>(p_Val2_6_65_2_fu_24398_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_3_fu_24480_p2() {
    p_Val2_7_65_3_fu_24480_p2 = (!y_V_1_65_2_fu_24432_p3.read().is_01() || !p_Val2_6_65_3_fu_24476_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_65_2_fu_24432_p3.read()) - sc_bigint<15>(p_Val2_6_65_3_fu_24476_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_4_fu_35144_p2() {
    p_Val2_7_65_4_fu_35144_p2 = (!y_V_1_65_3_reg_62675.read().is_01() || !p_Val2_6_65_4_fu_35141_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_65_3_reg_62675.read()) - sc_bigint<15>(p_Val2_6_65_4_fu_35141_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_5_fu_35218_p2() {
    p_Val2_7_65_5_fu_35218_p2 = (!y_V_1_65_4_fu_35170_p3.read().is_01() || !p_Val2_6_65_5_fu_35214_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_65_4_fu_35170_p3.read()) - sc_bigint<15>(p_Val2_6_65_5_fu_35214_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_6_fu_46024_p2() {
    p_Val2_7_65_6_fu_46024_p2 = (!y_V_1_65_5_reg_65089.read().is_01() || !p_Val2_6_65_6_fu_46021_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_65_5_reg_65089.read()) - sc_bigint<15>(p_Val2_6_65_6_fu_46021_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_7_fu_46088_p2() {
    p_Val2_7_65_7_fu_46088_p2 = (!y_V_1_65_6_fu_46042_p3.read().is_01() || !p_Val2_6_65_7_fu_46084_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_65_6_fu_46042_p3.read()) - sc_bigint<15>(p_Val2_6_65_7_fu_46084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_65_fu_11190_p2() {
    p_Val2_7_65_fu_11190_p2 = (!y0_V_65_cast_fu_11152_p1.read().is_01() || !x0_V_65_cast_fu_11164_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_65_cast_fu_11152_p1.read()) - sc_biguint<14>(x0_V_65_cast_fu_11164_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_1_fu_11240_p2() {
    p_Val2_7_66_1_fu_11240_p2 = (!p_Val2_7_65_fu_11190_p2.read().is_01() || !tmp_1325_fu_11236_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_65_fu_11190_p2.read()) - sc_biguint<14>(tmp_1325_fu_11236_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_2_fu_24596_p2() {
    p_Val2_7_66_2_fu_24596_p2 = (!y_V_1_66_1_cast_fu_24548_p1.read().is_01() || !p_Val2_6_66_2_fu_24592_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_66_1_cast_fu_24548_p1.read()) - sc_bigint<15>(p_Val2_6_66_2_fu_24592_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_3_fu_24674_p2() {
    p_Val2_7_66_3_fu_24674_p2 = (!y_V_1_66_2_fu_24626_p3.read().is_01() || !p_Val2_6_66_3_fu_24670_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_66_2_fu_24626_p3.read()) - sc_bigint<15>(p_Val2_6_66_3_fu_24670_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_4_fu_35292_p2() {
    p_Val2_7_66_4_fu_35292_p2 = (!y_V_1_66_3_reg_62709.read().is_01() || !p_Val2_6_66_4_fu_35289_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_66_3_reg_62709.read()) - sc_bigint<15>(p_Val2_6_66_4_fu_35289_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_5_fu_35366_p2() {
    p_Val2_7_66_5_fu_35366_p2 = (!y_V_1_66_4_fu_35318_p3.read().is_01() || !p_Val2_6_66_5_fu_35362_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_66_4_fu_35318_p3.read()) - sc_bigint<15>(p_Val2_6_66_5_fu_35362_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_6_fu_46177_p2() {
    p_Val2_7_66_6_fu_46177_p2 = (!y_V_1_66_5_reg_65123.read().is_01() || !p_Val2_6_66_6_fu_46174_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_66_5_reg_65123.read()) - sc_bigint<15>(p_Val2_6_66_6_fu_46174_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_7_fu_46241_p2() {
    p_Val2_7_66_7_fu_46241_p2 = (!y_V_1_66_6_fu_46195_p3.read().is_01() || !p_Val2_6_66_7_fu_46237_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_66_6_fu_46195_p3.read()) - sc_bigint<15>(p_Val2_6_66_7_fu_46237_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_66_fu_11308_p2() {
    p_Val2_7_66_fu_11308_p2 = (!y0_V_66_cast_fu_11270_p1.read().is_01() || !x0_V_66_cast_fu_11282_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_66_cast_fu_11270_p1.read()) - sc_biguint<14>(x0_V_66_cast_fu_11282_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_1_fu_11358_p2() {
    p_Val2_7_67_1_fu_11358_p2 = (!p_Val2_7_66_fu_11308_p2.read().is_01() || !tmp_1345_fu_11354_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_66_fu_11308_p2.read()) - sc_biguint<14>(tmp_1345_fu_11354_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_2_fu_24790_p2() {
    p_Val2_7_67_2_fu_24790_p2 = (!y_V_1_67_1_cast_fu_24742_p1.read().is_01() || !p_Val2_6_67_2_fu_24786_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_67_1_cast_fu_24742_p1.read()) - sc_bigint<15>(p_Val2_6_67_2_fu_24786_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_3_fu_24868_p2() {
    p_Val2_7_67_3_fu_24868_p2 = (!y_V_1_67_2_fu_24820_p3.read().is_01() || !p_Val2_6_67_3_fu_24864_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_67_2_fu_24820_p3.read()) - sc_bigint<15>(p_Val2_6_67_3_fu_24864_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_4_fu_35440_p2() {
    p_Val2_7_67_4_fu_35440_p2 = (!y_V_1_67_3_reg_62743.read().is_01() || !p_Val2_6_67_4_fu_35437_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_67_3_reg_62743.read()) - sc_bigint<15>(p_Val2_6_67_4_fu_35437_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_5_fu_35514_p2() {
    p_Val2_7_67_5_fu_35514_p2 = (!y_V_1_67_4_fu_35466_p3.read().is_01() || !p_Val2_6_67_5_fu_35510_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_67_4_fu_35466_p3.read()) - sc_bigint<15>(p_Val2_6_67_5_fu_35510_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_6_fu_46330_p2() {
    p_Val2_7_67_6_fu_46330_p2 = (!y_V_1_67_5_reg_65157.read().is_01() || !p_Val2_6_67_6_fu_46327_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_67_5_reg_65157.read()) - sc_bigint<15>(p_Val2_6_67_6_fu_46327_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_7_fu_46394_p2() {
    p_Val2_7_67_7_fu_46394_p2 = (!y_V_1_67_6_fu_46348_p3.read().is_01() || !p_Val2_6_67_7_fu_46390_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_67_6_fu_46348_p3.read()) - sc_bigint<15>(p_Val2_6_67_7_fu_46390_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_67_fu_11426_p2() {
    p_Val2_7_67_fu_11426_p2 = (!y0_V_67_cast_fu_11388_p1.read().is_01() || !x0_V_67_cast_fu_11400_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_67_cast_fu_11388_p1.read()) - sc_biguint<14>(x0_V_67_cast_fu_11400_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_1_fu_11476_p2() {
    p_Val2_7_68_1_fu_11476_p2 = (!p_Val2_7_67_fu_11426_p2.read().is_01() || !tmp_1365_fu_11472_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_67_fu_11426_p2.read()) - sc_biguint<14>(tmp_1365_fu_11472_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_2_fu_24984_p2() {
    p_Val2_7_68_2_fu_24984_p2 = (!y_V_1_68_1_cast_fu_24936_p1.read().is_01() || !p_Val2_6_68_2_fu_24980_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_68_1_cast_fu_24936_p1.read()) - sc_bigint<15>(p_Val2_6_68_2_fu_24980_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_3_fu_25062_p2() {
    p_Val2_7_68_3_fu_25062_p2 = (!y_V_1_68_2_fu_25014_p3.read().is_01() || !p_Val2_6_68_3_fu_25058_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_68_2_fu_25014_p3.read()) - sc_bigint<15>(p_Val2_6_68_3_fu_25058_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_4_fu_35588_p2() {
    p_Val2_7_68_4_fu_35588_p2 = (!y_V_1_68_3_reg_62777.read().is_01() || !p_Val2_6_68_4_fu_35585_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_68_3_reg_62777.read()) - sc_bigint<15>(p_Val2_6_68_4_fu_35585_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_5_fu_35662_p2() {
    p_Val2_7_68_5_fu_35662_p2 = (!y_V_1_68_4_fu_35614_p3.read().is_01() || !p_Val2_6_68_5_fu_35658_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_68_4_fu_35614_p3.read()) - sc_bigint<15>(p_Val2_6_68_5_fu_35658_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_6_fu_46483_p2() {
    p_Val2_7_68_6_fu_46483_p2 = (!y_V_1_68_5_reg_65191.read().is_01() || !p_Val2_6_68_6_fu_46480_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_68_5_reg_65191.read()) - sc_bigint<15>(p_Val2_6_68_6_fu_46480_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_7_fu_46547_p2() {
    p_Val2_7_68_7_fu_46547_p2 = (!y_V_1_68_6_fu_46501_p3.read().is_01() || !p_Val2_6_68_7_fu_46543_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_68_6_fu_46501_p3.read()) - sc_bigint<15>(p_Val2_6_68_7_fu_46543_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_68_fu_11544_p2() {
    p_Val2_7_68_fu_11544_p2 = (!y0_V_68_cast_fu_11506_p1.read().is_01() || !x0_V_68_cast_fu_11518_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_68_cast_fu_11506_p1.read()) - sc_biguint<14>(x0_V_68_cast_fu_11518_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_1_fu_11594_p2() {
    p_Val2_7_69_1_fu_11594_p2 = (!p_Val2_7_68_fu_11544_p2.read().is_01() || !tmp_1385_fu_11590_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_68_fu_11544_p2.read()) - sc_biguint<14>(tmp_1385_fu_11590_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_2_fu_25178_p2() {
    p_Val2_7_69_2_fu_25178_p2 = (!y_V_1_69_1_cast_fu_25130_p1.read().is_01() || !p_Val2_6_69_2_fu_25174_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_69_1_cast_fu_25130_p1.read()) - sc_bigint<15>(p_Val2_6_69_2_fu_25174_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_3_fu_25256_p2() {
    p_Val2_7_69_3_fu_25256_p2 = (!y_V_1_69_2_fu_25208_p3.read().is_01() || !p_Val2_6_69_3_fu_25252_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_69_2_fu_25208_p3.read()) - sc_bigint<15>(p_Val2_6_69_3_fu_25252_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_4_fu_35736_p2() {
    p_Val2_7_69_4_fu_35736_p2 = (!y_V_1_69_3_reg_62811.read().is_01() || !p_Val2_6_69_4_fu_35733_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_69_3_reg_62811.read()) - sc_bigint<15>(p_Val2_6_69_4_fu_35733_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_5_fu_35810_p2() {
    p_Val2_7_69_5_fu_35810_p2 = (!y_V_1_69_4_fu_35762_p3.read().is_01() || !p_Val2_6_69_5_fu_35806_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_69_4_fu_35762_p3.read()) - sc_bigint<15>(p_Val2_6_69_5_fu_35806_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_6_fu_46636_p2() {
    p_Val2_7_69_6_fu_46636_p2 = (!y_V_1_69_5_reg_65225.read().is_01() || !p_Val2_6_69_6_fu_46633_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_69_5_reg_65225.read()) - sc_bigint<15>(p_Val2_6_69_6_fu_46633_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_7_fu_46700_p2() {
    p_Val2_7_69_7_fu_46700_p2 = (!y_V_1_69_6_fu_46654_p3.read().is_01() || !p_Val2_6_69_7_fu_46696_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_69_6_fu_46654_p3.read()) - sc_bigint<15>(p_Val2_6_69_7_fu_46696_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_69_fu_11662_p2() {
    p_Val2_7_69_fu_11662_p2 = (!y0_V_69_cast_fu_11624_p1.read().is_01() || !x0_V_69_cast_fu_11636_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_69_cast_fu_11624_p1.read()) - sc_biguint<14>(x0_V_69_cast_fu_11636_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_1_fu_4160_p2() {
    p_Val2_7_6_1_fu_4160_p2 = (!p_Val2_7_6_fu_4110_p2.read().is_01() || !tmp_125_fu_4156_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_6_fu_4110_p2.read()) - sc_biguint<14>(tmp_125_fu_4156_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_2_fu_12956_p2() {
    p_Val2_7_6_2_fu_12956_p2 = (!y_V_1_6_1_cast_fu_12908_p1.read().is_01() || !p_Val2_6_6_2_fu_12952_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_6_1_cast_fu_12908_p1.read()) - sc_bigint<15>(p_Val2_6_6_2_fu_12952_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_3_fu_13034_p2() {
    p_Val2_7_6_3_fu_13034_p2 = (!y_V_1_6_2_fu_12986_p3.read().is_01() || !p_Val2_6_6_3_fu_13030_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_6_2_fu_12986_p3.read()) - sc_bigint<15>(p_Val2_6_6_3_fu_13030_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_4_fu_26412_p2() {
    p_Val2_7_6_4_fu_26412_p2 = (!y_V_1_6_3_reg_60669.read().is_01() || !p_Val2_6_6_4_fu_26409_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_6_3_reg_60669.read()) - sc_bigint<15>(p_Val2_6_6_4_fu_26409_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_5_fu_26486_p2() {
    p_Val2_7_6_5_fu_26486_p2 = (!y_V_1_6_4_fu_26438_p3.read().is_01() || !p_Val2_6_6_5_fu_26482_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_6_4_fu_26438_p3.read()) - sc_bigint<15>(p_Val2_6_6_5_fu_26482_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_6_fu_36997_p2() {
    p_Val2_7_6_6_fu_36997_p2 = (!y_V_1_6_5_reg_63083.read().is_01() || !p_Val2_6_6_6_fu_36994_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_6_5_reg_63083.read()) - sc_bigint<15>(p_Val2_6_6_6_fu_36994_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_7_fu_37061_p2() {
    p_Val2_7_6_7_fu_37061_p2 = (!y_V_1_6_6_fu_37015_p3.read().is_01() || !p_Val2_6_6_7_fu_37057_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_6_6_fu_37015_p3.read()) - sc_bigint<15>(p_Val2_6_6_7_fu_37057_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_6_fu_4110_p2() {
    p_Val2_7_6_fu_4110_p2 = (!y0_V_6_cast_fu_4072_p1.read().is_01() || !x0_V_6_cast_fu_4084_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_6_cast_fu_4072_p1.read()) - sc_biguint<14>(x0_V_6_cast_fu_4084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_1_fu_11712_p2() {
    p_Val2_7_70_1_fu_11712_p2 = (!p_Val2_7_69_fu_11662_p2.read().is_01() || !tmp_1405_fu_11708_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_69_fu_11662_p2.read()) - sc_biguint<14>(tmp_1405_fu_11708_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_2_fu_25372_p2() {
    p_Val2_7_70_2_fu_25372_p2 = (!y_V_1_70_1_cast_fu_25324_p1.read().is_01() || !p_Val2_6_70_2_fu_25368_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_70_1_cast_fu_25324_p1.read()) - sc_bigint<15>(p_Val2_6_70_2_fu_25368_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_3_fu_25450_p2() {
    p_Val2_7_70_3_fu_25450_p2 = (!y_V_1_70_2_fu_25402_p3.read().is_01() || !p_Val2_6_70_3_fu_25446_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_70_2_fu_25402_p3.read()) - sc_bigint<15>(p_Val2_6_70_3_fu_25446_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_4_fu_35884_p2() {
    p_Val2_7_70_4_fu_35884_p2 = (!y_V_1_70_3_reg_62845.read().is_01() || !p_Val2_6_70_4_fu_35881_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_70_3_reg_62845.read()) - sc_bigint<15>(p_Val2_6_70_4_fu_35881_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_5_fu_35958_p2() {
    p_Val2_7_70_5_fu_35958_p2 = (!y_V_1_70_4_fu_35910_p3.read().is_01() || !p_Val2_6_70_5_fu_35954_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_70_4_fu_35910_p3.read()) - sc_bigint<15>(p_Val2_6_70_5_fu_35954_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_6_fu_46789_p2() {
    p_Val2_7_70_6_fu_46789_p2 = (!y_V_1_70_5_reg_65259.read().is_01() || !p_Val2_6_70_6_fu_46786_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_70_5_reg_65259.read()) - sc_bigint<15>(p_Val2_6_70_6_fu_46786_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_70_7_fu_46853_p2() {
    p_Val2_7_70_7_fu_46853_p2 = (!y_V_1_70_6_fu_46807_p3.read().is_01() || !p_Val2_6_70_7_fu_46849_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_70_6_fu_46807_p3.read()) - sc_bigint<15>(p_Val2_6_70_7_fu_46849_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_1_fu_4278_p2() {
    p_Val2_7_7_1_fu_4278_p2 = (!p_Val2_7_7_fu_4228_p2.read().is_01() || !tmp_145_fu_4274_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_7_fu_4228_p2.read()) - sc_biguint<14>(tmp_145_fu_4274_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_2_fu_13150_p2() {
    p_Val2_7_7_2_fu_13150_p2 = (!y_V_1_7_1_cast_fu_13102_p1.read().is_01() || !p_Val2_6_7_2_fu_13146_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_7_1_cast_fu_13102_p1.read()) - sc_bigint<15>(p_Val2_6_7_2_fu_13146_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_3_fu_13228_p2() {
    p_Val2_7_7_3_fu_13228_p2 = (!y_V_1_7_2_fu_13180_p3.read().is_01() || !p_Val2_6_7_3_fu_13224_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_7_2_fu_13180_p3.read()) - sc_bigint<15>(p_Val2_6_7_3_fu_13224_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_4_fu_26560_p2() {
    p_Val2_7_7_4_fu_26560_p2 = (!y_V_1_7_3_reg_60703.read().is_01() || !p_Val2_6_7_4_fu_26557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_7_3_reg_60703.read()) - sc_bigint<15>(p_Val2_6_7_4_fu_26557_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_5_fu_26634_p2() {
    p_Val2_7_7_5_fu_26634_p2 = (!y_V_1_7_4_fu_26586_p3.read().is_01() || !p_Val2_6_7_5_fu_26630_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_7_4_fu_26586_p3.read()) - sc_bigint<15>(p_Val2_6_7_5_fu_26630_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_6_fu_37150_p2() {
    p_Val2_7_7_6_fu_37150_p2 = (!y_V_1_7_5_reg_63117.read().is_01() || !p_Val2_6_7_6_fu_37147_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_7_5_reg_63117.read()) - sc_bigint<15>(p_Val2_6_7_6_fu_37147_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_7_fu_37214_p2() {
    p_Val2_7_7_7_fu_37214_p2 = (!y_V_1_7_6_fu_37168_p3.read().is_01() || !p_Val2_6_7_7_fu_37210_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_7_6_fu_37168_p3.read()) - sc_bigint<15>(p_Val2_6_7_7_fu_37210_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_7_fu_4228_p2() {
    p_Val2_7_7_fu_4228_p2 = (!y0_V_7_cast_fu_4190_p1.read().is_01() || !x0_V_7_cast_fu_4202_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_7_cast_fu_4190_p1.read()) - sc_biguint<14>(x0_V_7_cast_fu_4202_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_1_fu_4396_p2() {
    p_Val2_7_8_1_fu_4396_p2 = (!p_Val2_7_8_fu_4346_p2.read().is_01() || !tmp_165_fu_4392_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_8_fu_4346_p2.read()) - sc_biguint<14>(tmp_165_fu_4392_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_2_fu_13344_p2() {
    p_Val2_7_8_2_fu_13344_p2 = (!y_V_1_8_1_cast_fu_13296_p1.read().is_01() || !p_Val2_6_8_2_fu_13340_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_8_1_cast_fu_13296_p1.read()) - sc_bigint<15>(p_Val2_6_8_2_fu_13340_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_3_fu_13422_p2() {
    p_Val2_7_8_3_fu_13422_p2 = (!y_V_1_8_2_fu_13374_p3.read().is_01() || !p_Val2_6_8_3_fu_13418_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_8_2_fu_13374_p3.read()) - sc_bigint<15>(p_Val2_6_8_3_fu_13418_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_4_fu_26708_p2() {
    p_Val2_7_8_4_fu_26708_p2 = (!y_V_1_8_3_reg_60737.read().is_01() || !p_Val2_6_8_4_fu_26705_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_8_3_reg_60737.read()) - sc_bigint<15>(p_Val2_6_8_4_fu_26705_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_5_fu_26782_p2() {
    p_Val2_7_8_5_fu_26782_p2 = (!y_V_1_8_4_fu_26734_p3.read().is_01() || !p_Val2_6_8_5_fu_26778_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_8_4_fu_26734_p3.read()) - sc_bigint<15>(p_Val2_6_8_5_fu_26778_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_6_fu_37303_p2() {
    p_Val2_7_8_6_fu_37303_p2 = (!y_V_1_8_5_reg_63151.read().is_01() || !p_Val2_6_8_6_fu_37300_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_8_5_reg_63151.read()) - sc_bigint<15>(p_Val2_6_8_6_fu_37300_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_7_fu_37367_p2() {
    p_Val2_7_8_7_fu_37367_p2 = (!y_V_1_8_6_fu_37321_p3.read().is_01() || !p_Val2_6_8_7_fu_37363_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_8_6_fu_37321_p3.read()) - sc_bigint<15>(p_Val2_6_8_7_fu_37363_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_8_fu_4346_p2() {
    p_Val2_7_8_fu_4346_p2 = (!y0_V_8_cast_fu_4308_p1.read().is_01() || !x0_V_8_cast_fu_4320_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_8_cast_fu_4308_p1.read()) - sc_biguint<14>(x0_V_8_cast_fu_4320_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_1_fu_4514_p2() {
    p_Val2_7_9_1_fu_4514_p2 = (!p_Val2_7_9_fu_4464_p2.read().is_01() || !tmp_185_fu_4510_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_9_fu_4464_p2.read()) - sc_biguint<14>(tmp_185_fu_4510_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_2_fu_13538_p2() {
    p_Val2_7_9_2_fu_13538_p2 = (!y_V_1_9_1_cast_fu_13490_p1.read().is_01() || !p_Val2_6_9_2_fu_13534_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_9_1_cast_fu_13490_p1.read()) - sc_bigint<15>(p_Val2_6_9_2_fu_13534_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_3_fu_13616_p2() {
    p_Val2_7_9_3_fu_13616_p2 = (!y_V_1_9_2_fu_13568_p3.read().is_01() || !p_Val2_6_9_3_fu_13612_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_9_2_fu_13568_p3.read()) - sc_bigint<15>(p_Val2_6_9_3_fu_13612_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_4_fu_26856_p2() {
    p_Val2_7_9_4_fu_26856_p2 = (!y_V_1_9_3_reg_60771.read().is_01() || !p_Val2_6_9_4_fu_26853_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_9_3_reg_60771.read()) - sc_bigint<15>(p_Val2_6_9_4_fu_26853_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_5_fu_26930_p2() {
    p_Val2_7_9_5_fu_26930_p2 = (!y_V_1_9_4_fu_26882_p3.read().is_01() || !p_Val2_6_9_5_fu_26926_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_9_4_fu_26882_p3.read()) - sc_bigint<15>(p_Val2_6_9_5_fu_26926_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_6_fu_37456_p2() {
    p_Val2_7_9_6_fu_37456_p2 = (!y_V_1_9_5_reg_63185.read().is_01() || !p_Val2_6_9_6_fu_37453_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_9_5_reg_63185.read()) - sc_bigint<15>(p_Val2_6_9_6_fu_37453_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_7_fu_37520_p2() {
    p_Val2_7_9_7_fu_37520_p2 = (!y_V_1_9_6_fu_37474_p3.read().is_01() || !p_Val2_6_9_7_fu_37516_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_9_6_fu_37474_p3.read()) - sc_bigint<15>(p_Val2_6_9_7_fu_37516_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_9_fu_4464_p2() {
    p_Val2_7_9_fu_4464_p2 = (!y0_V_9_cast_fu_4426_p1.read().is_01() || !x0_V_9_cast_fu_4438_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_9_cast_fu_4426_p1.read()) - sc_biguint<14>(x0_V_9_cast_fu_4438_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_fu_3402_p2() {
    p_Val2_7_fu_3402_p2 = (!y0_V_cast_fu_3364_p1.read().is_01() || !x0_V_cast_fu_3376_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_cast_fu_3364_p1.read()) - sc_biguint<14>(x0_V_cast_fu_3376_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_s_fu_4582_p2() {
    p_Val2_7_s_fu_4582_p2 = (!y0_V_cast_1174_fu_4544_p1.read().is_01() || !x0_V_cast_1175_fu_4556_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_cast_1174_fu_4544_p1.read()) - sc_biguint<14>(x0_V_cast_1175_fu_4556_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_s_fu_46978_p3() {
    p_Val2_s_fu_46978_p3 = (!tmp_18_fu_46973_p2.read()[0].is_01())? sc_lv<13>(): ((tmp_18_fu_46973_p2.read()[0].to_bool())? sel_tmp_cast_fu_46965_p3.read(): z_V_0_8_fu_46949_p2.read());
}

void Sobel_phase_strm::thread_p_i_10_fu_56194_p3() {
    p_i_10_fu_56194_p3 = (!tmp_55_10_reg_66896.read()[0].is_01())? sc_lv<8>(): ((tmp_55_10_reg_66896.read()[0].to_bool())? tmp_240_reg_66889.read(): ret_V_1_10_fu_56189_p2.read());
}

void Sobel_phase_strm::thread_p_i_11_fu_56220_p3() {
    p_i_11_fu_56220_p3 = (!tmp_55_11_reg_66913.read()[0].is_01())? sc_lv<8>(): ((tmp_55_11_reg_66913.read()[0].to_bool())? tmp_260_reg_66906.read(): ret_V_1_11_fu_56215_p2.read());
}

void Sobel_phase_strm::thread_p_i_12_fu_56246_p3() {
    p_i_12_fu_56246_p3 = (!tmp_55_12_reg_66930.read()[0].is_01())? sc_lv<8>(): ((tmp_55_12_reg_66930.read()[0].to_bool())? tmp_280_reg_66923.read(): ret_V_1_12_fu_56241_p2.read());
}

void Sobel_phase_strm::thread_p_i_13_fu_56272_p3() {
    p_i_13_fu_56272_p3 = (!tmp_55_13_reg_66947.read()[0].is_01())? sc_lv<8>(): ((tmp_55_13_reg_66947.read()[0].to_bool())? tmp_300_reg_66940.read(): ret_V_1_13_fu_56267_p2.read());
}

void Sobel_phase_strm::thread_p_i_14_fu_56298_p3() {
    p_i_14_fu_56298_p3 = (!tmp_55_14_reg_66964.read()[0].is_01())? sc_lv<8>(): ((tmp_55_14_reg_66964.read()[0].to_bool())? tmp_320_reg_66957.read(): ret_V_1_14_fu_56293_p2.read());
}

void Sobel_phase_strm::thread_p_i_15_fu_56324_p3() {
    p_i_15_fu_56324_p3 = (!tmp_55_15_reg_66981.read()[0].is_01())? sc_lv<8>(): ((tmp_55_15_reg_66981.read()[0].to_bool())? tmp_340_reg_66974.read(): ret_V_1_15_fu_56319_p2.read());
}

void Sobel_phase_strm::thread_p_i_16_fu_56350_p3() {
    p_i_16_fu_56350_p3 = (!tmp_55_16_reg_66998.read()[0].is_01())? sc_lv<8>(): ((tmp_55_16_reg_66998.read()[0].to_bool())? tmp_360_reg_66991.read(): ret_V_1_16_fu_56345_p2.read());
}

void Sobel_phase_strm::thread_p_i_17_fu_56376_p3() {
    p_i_17_fu_56376_p3 = (!tmp_55_17_reg_67015.read()[0].is_01())? sc_lv<8>(): ((tmp_55_17_reg_67015.read()[0].to_bool())? tmp_380_reg_67008.read(): ret_V_1_17_fu_56371_p2.read());
}

void Sobel_phase_strm::thread_p_i_18_fu_56402_p3() {
    p_i_18_fu_56402_p3 = (!tmp_55_18_reg_67032.read()[0].is_01())? sc_lv<8>(): ((tmp_55_18_reg_67032.read()[0].to_bool())? tmp_400_reg_67025.read(): ret_V_1_18_fu_56397_p2.read());
}

void Sobel_phase_strm::thread_p_i_19_fu_56428_p3() {
    p_i_19_fu_56428_p3 = (!tmp_55_19_reg_67049.read()[0].is_01())? sc_lv<8>(): ((tmp_55_19_reg_67049.read()[0].to_bool())? tmp_420_reg_67042.read(): ret_V_1_19_fu_56423_p2.read());
}

void Sobel_phase_strm::thread_p_i_1_fu_55934_p3() {
    p_i_1_fu_55934_p3 = (!tmp_55_1_reg_66726.read()[0].is_01())? sc_lv<8>(): ((tmp_55_1_reg_66726.read()[0].to_bool())? tmp_40_reg_66719.read(): ret_V_1_1_fu_55929_p2.read());
}

void Sobel_phase_strm::thread_p_i_20_fu_56454_p3() {
    p_i_20_fu_56454_p3 = (!tmp_55_20_reg_67066.read()[0].is_01())? sc_lv<8>(): ((tmp_55_20_reg_67066.read()[0].to_bool())? tmp_440_reg_67059.read(): ret_V_1_20_fu_56449_p2.read());
}

void Sobel_phase_strm::thread_p_i_21_fu_56480_p3() {
    p_i_21_fu_56480_p3 = (!tmp_55_21_reg_67083.read()[0].is_01())? sc_lv<8>(): ((tmp_55_21_reg_67083.read()[0].to_bool())? tmp_460_reg_67076.read(): ret_V_1_21_fu_56475_p2.read());
}

void Sobel_phase_strm::thread_p_i_22_fu_56506_p3() {
    p_i_22_fu_56506_p3 = (!tmp_55_22_reg_67100.read()[0].is_01())? sc_lv<8>(): ((tmp_55_22_reg_67100.read()[0].to_bool())? tmp_480_reg_67093.read(): ret_V_1_22_fu_56501_p2.read());
}

void Sobel_phase_strm::thread_p_i_23_fu_56532_p3() {
    p_i_23_fu_56532_p3 = (!tmp_55_23_reg_67117.read()[0].is_01())? sc_lv<8>(): ((tmp_55_23_reg_67117.read()[0].to_bool())? tmp_500_reg_67110.read(): ret_V_1_23_fu_56527_p2.read());
}

void Sobel_phase_strm::thread_p_i_24_fu_56558_p3() {
    p_i_24_fu_56558_p3 = (!tmp_55_24_reg_67134.read()[0].is_01())? sc_lv<8>(): ((tmp_55_24_reg_67134.read()[0].to_bool())? tmp_520_reg_67127.read(): ret_V_1_24_fu_56553_p2.read());
}

void Sobel_phase_strm::thread_p_i_25_fu_56584_p3() {
    p_i_25_fu_56584_p3 = (!tmp_55_25_reg_67151.read()[0].is_01())? sc_lv<8>(): ((tmp_55_25_reg_67151.read()[0].to_bool())? tmp_540_reg_67144.read(): ret_V_1_25_fu_56579_p2.read());
}

void Sobel_phase_strm::thread_p_i_26_fu_56610_p3() {
    p_i_26_fu_56610_p3 = (!tmp_55_26_reg_67168.read()[0].is_01())? sc_lv<8>(): ((tmp_55_26_reg_67168.read()[0].to_bool())? tmp_560_reg_67161.read(): ret_V_1_26_fu_56605_p2.read());
}

void Sobel_phase_strm::thread_p_i_27_fu_56636_p3() {
    p_i_27_fu_56636_p3 = (!tmp_55_27_reg_67185.read()[0].is_01())? sc_lv<8>(): ((tmp_55_27_reg_67185.read()[0].to_bool())? tmp_580_reg_67178.read(): ret_V_1_27_fu_56631_p2.read());
}

void Sobel_phase_strm::thread_p_i_28_fu_56662_p3() {
    p_i_28_fu_56662_p3 = (!tmp_55_28_reg_67202.read()[0].is_01())? sc_lv<8>(): ((tmp_55_28_reg_67202.read()[0].to_bool())? tmp_600_reg_67195.read(): ret_V_1_28_fu_56657_p2.read());
}

void Sobel_phase_strm::thread_p_i_29_fu_56688_p3() {
    p_i_29_fu_56688_p3 = (!tmp_55_29_reg_67219.read()[0].is_01())? sc_lv<8>(): ((tmp_55_29_reg_67219.read()[0].to_bool())? tmp_620_reg_67212.read(): ret_V_1_29_fu_56683_p2.read());
}

void Sobel_phase_strm::thread_p_i_2_fu_55960_p3() {
    p_i_2_fu_55960_p3 = (!tmp_55_2_reg_66743.read()[0].is_01())? sc_lv<8>(): ((tmp_55_2_reg_66743.read()[0].to_bool())? tmp_60_reg_66736.read(): ret_V_1_2_fu_55955_p2.read());
}

void Sobel_phase_strm::thread_p_i_30_fu_56714_p3() {
    p_i_30_fu_56714_p3 = (!tmp_55_30_reg_67236.read()[0].is_01())? sc_lv<8>(): ((tmp_55_30_reg_67236.read()[0].to_bool())? tmp_640_reg_67229.read(): ret_V_1_30_fu_56709_p2.read());
}

void Sobel_phase_strm::thread_p_i_31_fu_56740_p3() {
    p_i_31_fu_56740_p3 = (!tmp_55_31_reg_67253.read()[0].is_01())? sc_lv<8>(): ((tmp_55_31_reg_67253.read()[0].to_bool())? tmp_660_reg_67246.read(): ret_V_1_31_fu_56735_p2.read());
}

void Sobel_phase_strm::thread_p_i_32_fu_56766_p3() {
    p_i_32_fu_56766_p3 = (!tmp_55_32_reg_67270.read()[0].is_01())? sc_lv<8>(): ((tmp_55_32_reg_67270.read()[0].to_bool())? tmp_680_reg_67263.read(): ret_V_1_32_fu_56761_p2.read());
}

void Sobel_phase_strm::thread_p_i_33_fu_56792_p3() {
    p_i_33_fu_56792_p3 = (!tmp_55_33_reg_67287.read()[0].is_01())? sc_lv<8>(): ((tmp_55_33_reg_67287.read()[0].to_bool())? tmp_700_reg_67280.read(): ret_V_1_33_fu_56787_p2.read());
}

void Sobel_phase_strm::thread_p_i_34_fu_56818_p3() {
    p_i_34_fu_56818_p3 = (!tmp_55_34_reg_67304.read()[0].is_01())? sc_lv<8>(): ((tmp_55_34_reg_67304.read()[0].to_bool())? tmp_720_reg_67297.read(): ret_V_1_34_fu_56813_p2.read());
}

void Sobel_phase_strm::thread_p_i_35_fu_56844_p3() {
    p_i_35_fu_56844_p3 = (!tmp_55_35_reg_67321.read()[0].is_01())? sc_lv<8>(): ((tmp_55_35_reg_67321.read()[0].to_bool())? tmp_740_reg_67314.read(): ret_V_1_35_fu_56839_p2.read());
}

void Sobel_phase_strm::thread_p_i_36_fu_56870_p3() {
    p_i_36_fu_56870_p3 = (!tmp_55_36_reg_67338.read()[0].is_01())? sc_lv<8>(): ((tmp_55_36_reg_67338.read()[0].to_bool())? tmp_760_reg_67331.read(): ret_V_1_36_fu_56865_p2.read());
}

void Sobel_phase_strm::thread_p_i_37_fu_56896_p3() {
    p_i_37_fu_56896_p3 = (!tmp_55_37_reg_67355.read()[0].is_01())? sc_lv<8>(): ((tmp_55_37_reg_67355.read()[0].to_bool())? tmp_780_reg_67348.read(): ret_V_1_37_fu_56891_p2.read());
}

void Sobel_phase_strm::thread_p_i_38_fu_56922_p3() {
    p_i_38_fu_56922_p3 = (!tmp_55_38_reg_67372.read()[0].is_01())? sc_lv<8>(): ((tmp_55_38_reg_67372.read()[0].to_bool())? tmp_800_reg_67365.read(): ret_V_1_38_fu_56917_p2.read());
}

void Sobel_phase_strm::thread_p_i_39_fu_56948_p3() {
    p_i_39_fu_56948_p3 = (!tmp_55_39_reg_67389.read()[0].is_01())? sc_lv<8>(): ((tmp_55_39_reg_67389.read()[0].to_bool())? tmp_820_reg_67382.read(): ret_V_1_39_fu_56943_p2.read());
}

void Sobel_phase_strm::thread_p_i_3_fu_55986_p3() {
    p_i_3_fu_55986_p3 = (!tmp_55_3_reg_66760.read()[0].is_01())? sc_lv<8>(): ((tmp_55_3_reg_66760.read()[0].to_bool())? tmp_80_reg_66753.read(): ret_V_1_3_fu_55981_p2.read());
}

void Sobel_phase_strm::thread_p_i_40_fu_56974_p3() {
    p_i_40_fu_56974_p3 = (!tmp_55_40_reg_67406.read()[0].is_01())? sc_lv<8>(): ((tmp_55_40_reg_67406.read()[0].to_bool())? tmp_840_reg_67399.read(): ret_V_1_40_fu_56969_p2.read());
}

void Sobel_phase_strm::thread_p_i_41_fu_57000_p3() {
    p_i_41_fu_57000_p3 = (!tmp_55_41_reg_67423.read()[0].is_01())? sc_lv<8>(): ((tmp_55_41_reg_67423.read()[0].to_bool())? tmp_860_reg_67416.read(): ret_V_1_41_fu_56995_p2.read());
}

void Sobel_phase_strm::thread_p_i_42_fu_57026_p3() {
    p_i_42_fu_57026_p3 = (!tmp_55_42_reg_67440.read()[0].is_01())? sc_lv<8>(): ((tmp_55_42_reg_67440.read()[0].to_bool())? tmp_880_reg_67433.read(): ret_V_1_42_fu_57021_p2.read());
}

void Sobel_phase_strm::thread_p_i_43_fu_57052_p3() {
    p_i_43_fu_57052_p3 = (!tmp_55_43_reg_67457.read()[0].is_01())? sc_lv<8>(): ((tmp_55_43_reg_67457.read()[0].to_bool())? tmp_900_reg_67450.read(): ret_V_1_43_fu_57047_p2.read());
}

void Sobel_phase_strm::thread_p_i_44_fu_57078_p3() {
    p_i_44_fu_57078_p3 = (!tmp_55_44_reg_67474.read()[0].is_01())? sc_lv<8>(): ((tmp_55_44_reg_67474.read()[0].to_bool())? tmp_920_reg_67467.read(): ret_V_1_44_fu_57073_p2.read());
}

void Sobel_phase_strm::thread_p_i_45_fu_57104_p3() {
    p_i_45_fu_57104_p3 = (!tmp_55_45_reg_67491.read()[0].is_01())? sc_lv<8>(): ((tmp_55_45_reg_67491.read()[0].to_bool())? tmp_940_reg_67484.read(): ret_V_1_45_fu_57099_p2.read());
}

void Sobel_phase_strm::thread_p_i_46_fu_57130_p3() {
    p_i_46_fu_57130_p3 = (!tmp_55_46_reg_67508.read()[0].is_01())? sc_lv<8>(): ((tmp_55_46_reg_67508.read()[0].to_bool())? tmp_960_reg_67501.read(): ret_V_1_46_fu_57125_p2.read());
}

void Sobel_phase_strm::thread_p_i_47_fu_57156_p3() {
    p_i_47_fu_57156_p3 = (!tmp_55_47_reg_67525.read()[0].is_01())? sc_lv<8>(): ((tmp_55_47_reg_67525.read()[0].to_bool())? tmp_980_reg_67518.read(): ret_V_1_47_fu_57151_p2.read());
}

void Sobel_phase_strm::thread_p_i_48_fu_57182_p3() {
    p_i_48_fu_57182_p3 = (!tmp_55_48_reg_67542.read()[0].is_01())? sc_lv<8>(): ((tmp_55_48_reg_67542.read()[0].to_bool())? tmp_1000_reg_67535.read(): ret_V_1_48_fu_57177_p2.read());
}

void Sobel_phase_strm::thread_p_i_49_fu_57208_p3() {
    p_i_49_fu_57208_p3 = (!tmp_55_49_reg_67559.read()[0].is_01())? sc_lv<8>(): ((tmp_55_49_reg_67559.read()[0].to_bool())? tmp_1020_reg_67552.read(): ret_V_1_49_fu_57203_p2.read());
}

void Sobel_phase_strm::thread_p_i_4_fu_56012_p3() {
    p_i_4_fu_56012_p3 = (!tmp_55_4_reg_66777.read()[0].is_01())? sc_lv<8>(): ((tmp_55_4_reg_66777.read()[0].to_bool())? tmp_100_reg_66770.read(): ret_V_1_4_fu_56007_p2.read());
}

void Sobel_phase_strm::thread_p_i_50_fu_57234_p3() {
    p_i_50_fu_57234_p3 = (!tmp_55_50_reg_67576.read()[0].is_01())? sc_lv<8>(): ((tmp_55_50_reg_67576.read()[0].to_bool())? tmp_1040_reg_67569.read(): ret_V_1_50_fu_57229_p2.read());
}

void Sobel_phase_strm::thread_p_i_51_fu_57260_p3() {
    p_i_51_fu_57260_p3 = (!tmp_55_51_reg_67593.read()[0].is_01())? sc_lv<8>(): ((tmp_55_51_reg_67593.read()[0].to_bool())? tmp_1060_reg_67586.read(): ret_V_1_51_fu_57255_p2.read());
}

void Sobel_phase_strm::thread_p_i_52_fu_57286_p3() {
    p_i_52_fu_57286_p3 = (!tmp_55_52_reg_67610.read()[0].is_01())? sc_lv<8>(): ((tmp_55_52_reg_67610.read()[0].to_bool())? tmp_1080_reg_67603.read(): ret_V_1_52_fu_57281_p2.read());
}

void Sobel_phase_strm::thread_p_i_53_fu_57312_p3() {
    p_i_53_fu_57312_p3 = (!tmp_55_53_reg_67627.read()[0].is_01())? sc_lv<8>(): ((tmp_55_53_reg_67627.read()[0].to_bool())? tmp_1100_reg_67620.read(): ret_V_1_53_fu_57307_p2.read());
}

void Sobel_phase_strm::thread_p_i_54_fu_57338_p3() {
    p_i_54_fu_57338_p3 = (!tmp_55_54_reg_67644.read()[0].is_01())? sc_lv<8>(): ((tmp_55_54_reg_67644.read()[0].to_bool())? tmp_1120_reg_67637.read(): ret_V_1_54_fu_57333_p2.read());
}

void Sobel_phase_strm::thread_p_i_55_fu_57364_p3() {
    p_i_55_fu_57364_p3 = (!tmp_55_55_reg_67661.read()[0].is_01())? sc_lv<8>(): ((tmp_55_55_reg_67661.read()[0].to_bool())? tmp_1140_reg_67654.read(): ret_V_1_55_fu_57359_p2.read());
}

void Sobel_phase_strm::thread_p_i_56_fu_57390_p3() {
    p_i_56_fu_57390_p3 = (!tmp_55_56_reg_67678.read()[0].is_01())? sc_lv<8>(): ((tmp_55_56_reg_67678.read()[0].to_bool())? tmp_1160_reg_67671.read(): ret_V_1_56_fu_57385_p2.read());
}

void Sobel_phase_strm::thread_p_i_57_fu_57416_p3() {
    p_i_57_fu_57416_p3 = (!tmp_55_57_reg_67695.read()[0].is_01())? sc_lv<8>(): ((tmp_55_57_reg_67695.read()[0].to_bool())? tmp_1180_reg_67688.read(): ret_V_1_57_fu_57411_p2.read());
}

void Sobel_phase_strm::thread_p_i_58_fu_57442_p3() {
    p_i_58_fu_57442_p3 = (!tmp_55_58_reg_67712.read()[0].is_01())? sc_lv<8>(): ((tmp_55_58_reg_67712.read()[0].to_bool())? tmp_1200_reg_67705.read(): ret_V_1_58_fu_57437_p2.read());
}

void Sobel_phase_strm::thread_p_i_59_fu_57468_p3() {
    p_i_59_fu_57468_p3 = (!tmp_55_59_reg_67729.read()[0].is_01())? sc_lv<8>(): ((tmp_55_59_reg_67729.read()[0].to_bool())? tmp_1220_reg_67722.read(): ret_V_1_59_fu_57463_p2.read());
}

void Sobel_phase_strm::thread_p_i_5_fu_56038_p3() {
    p_i_5_fu_56038_p3 = (!tmp_55_5_reg_66794.read()[0].is_01())? sc_lv<8>(): ((tmp_55_5_reg_66794.read()[0].to_bool())? tmp_120_reg_66787.read(): ret_V_1_5_fu_56033_p2.read());
}

void Sobel_phase_strm::thread_p_i_60_fu_57494_p3() {
    p_i_60_fu_57494_p3 = (!tmp_55_60_reg_67746.read()[0].is_01())? sc_lv<8>(): ((tmp_55_60_reg_67746.read()[0].to_bool())? tmp_1240_reg_67739.read(): ret_V_1_60_fu_57489_p2.read());
}

void Sobel_phase_strm::thread_p_i_61_fu_57520_p3() {
    p_i_61_fu_57520_p3 = (!tmp_55_61_reg_67763.read()[0].is_01())? sc_lv<8>(): ((tmp_55_61_reg_67763.read()[0].to_bool())? tmp_1260_reg_67756.read(): ret_V_1_61_fu_57515_p2.read());
}

void Sobel_phase_strm::thread_p_i_62_fu_57546_p3() {
    p_i_62_fu_57546_p3 = (!tmp_55_62_reg_67780.read()[0].is_01())? sc_lv<8>(): ((tmp_55_62_reg_67780.read()[0].to_bool())? tmp_1280_reg_67773.read(): ret_V_1_62_fu_57541_p2.read());
}

void Sobel_phase_strm::thread_p_i_63_fu_57572_p3() {
    p_i_63_fu_57572_p3 = (!tmp_55_63_reg_67797.read()[0].is_01())? sc_lv<8>(): ((tmp_55_63_reg_67797.read()[0].to_bool())? tmp_1300_reg_67790.read(): ret_V_1_63_fu_57567_p2.read());
}

void Sobel_phase_strm::thread_p_i_64_fu_57598_p3() {
    p_i_64_fu_57598_p3 = (!tmp_55_64_reg_67814.read()[0].is_01())? sc_lv<8>(): ((tmp_55_64_reg_67814.read()[0].to_bool())? tmp_1320_reg_67807.read(): ret_V_1_64_fu_57593_p2.read());
}

void Sobel_phase_strm::thread_p_i_65_fu_57624_p3() {
    p_i_65_fu_57624_p3 = (!tmp_55_65_reg_67831.read()[0].is_01())? sc_lv<8>(): ((tmp_55_65_reg_67831.read()[0].to_bool())? tmp_1340_reg_67824.read(): ret_V_1_65_fu_57619_p2.read());
}

void Sobel_phase_strm::thread_p_i_66_fu_57650_p3() {
    p_i_66_fu_57650_p3 = (!tmp_55_66_reg_67848.read()[0].is_01())? sc_lv<8>(): ((tmp_55_66_reg_67848.read()[0].to_bool())? tmp_1360_reg_67841.read(): ret_V_1_66_fu_57645_p2.read());
}

void Sobel_phase_strm::thread_p_i_67_fu_57676_p3() {
    p_i_67_fu_57676_p3 = (!tmp_55_67_reg_67865.read()[0].is_01())? sc_lv<8>(): ((tmp_55_67_reg_67865.read()[0].to_bool())? tmp_1380_reg_67858.read(): ret_V_1_67_fu_57671_p2.read());
}

void Sobel_phase_strm::thread_p_i_68_fu_57702_p3() {
    p_i_68_fu_57702_p3 = (!tmp_55_68_reg_67882.read()[0].is_01())? sc_lv<8>(): ((tmp_55_68_reg_67882.read()[0].to_bool())? tmp_1400_reg_67875.read(): ret_V_1_68_fu_57697_p2.read());
}

void Sobel_phase_strm::thread_p_i_69_fu_57728_p3() {
    p_i_69_fu_57728_p3 = (!tmp_55_69_reg_67899.read()[0].is_01())? sc_lv<8>(): ((tmp_55_69_reg_67899.read()[0].to_bool())? tmp_1420_reg_67892.read(): ret_V_1_69_fu_57723_p2.read());
}

void Sobel_phase_strm::thread_p_i_6_fu_56064_p3() {
    p_i_6_fu_56064_p3 = (!tmp_55_6_reg_66811.read()[0].is_01())? sc_lv<8>(): ((tmp_55_6_reg_66811.read()[0].to_bool())? tmp_140_reg_66804.read(): ret_V_1_6_fu_56059_p2.read());
}

void Sobel_phase_strm::thread_p_i_7_fu_56090_p3() {
    p_i_7_fu_56090_p3 = (!tmp_55_7_reg_66828.read()[0].is_01())? sc_lv<8>(): ((tmp_55_7_reg_66828.read()[0].to_bool())? tmp_160_reg_66821.read(): ret_V_1_7_fu_56085_p2.read());
}

void Sobel_phase_strm::thread_p_i_8_fu_56116_p3() {
    p_i_8_fu_56116_p3 = (!tmp_55_8_reg_66845.read()[0].is_01())? sc_lv<8>(): ((tmp_55_8_reg_66845.read()[0].to_bool())? tmp_180_reg_66838.read(): ret_V_1_8_fu_56111_p2.read());
}

void Sobel_phase_strm::thread_p_i_9_fu_56142_p3() {
    p_i_9_fu_56142_p3 = (!tmp_55_9_reg_66862.read()[0].is_01())? sc_lv<8>(): ((tmp_55_9_reg_66862.read()[0].to_bool())? tmp_200_reg_66855.read(): ret_V_1_9_fu_56137_p2.read());
}

void Sobel_phase_strm::thread_p_i_fu_55908_p3() {
    p_i_fu_55908_p3 = (!tmp_22_reg_66709.read()[0].is_01())? sc_lv<8>(): ((tmp_22_reg_66709.read()[0].to_bool())? tmp_19_reg_66702.read(): ret_V_1_fu_55903_p2.read());
}

void Sobel_phase_strm::thread_p_i_s_fu_56168_p3() {
    p_i_s_fu_56168_p3 = (!tmp_55_s_reg_66879.read()[0].is_01())? sc_lv<8>(): ((tmp_55_s_reg_66879.read()[0].to_bool())? tmp_220_reg_66872.read(): ret_V_1_s_fu_56163_p2.read());
}

void Sobel_phase_strm::thread_ret_V_1_10_fu_56189_p2() {
    ret_V_1_10_fu_56189_p2 = (!ap_const_lv8_1.is_01() || !tmp_240_reg_66889.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_240_reg_66889.read()));
}

void Sobel_phase_strm::thread_ret_V_1_11_fu_56215_p2() {
    ret_V_1_11_fu_56215_p2 = (!ap_const_lv8_1.is_01() || !tmp_260_reg_66906.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_260_reg_66906.read()));
}

void Sobel_phase_strm::thread_ret_V_1_12_fu_56241_p2() {
    ret_V_1_12_fu_56241_p2 = (!ap_const_lv8_1.is_01() || !tmp_280_reg_66923.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_280_reg_66923.read()));
}

void Sobel_phase_strm::thread_ret_V_1_13_fu_56267_p2() {
    ret_V_1_13_fu_56267_p2 = (!ap_const_lv8_1.is_01() || !tmp_300_reg_66940.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_300_reg_66940.read()));
}

void Sobel_phase_strm::thread_ret_V_1_14_fu_56293_p2() {
    ret_V_1_14_fu_56293_p2 = (!ap_const_lv8_1.is_01() || !tmp_320_reg_66957.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_320_reg_66957.read()));
}

void Sobel_phase_strm::thread_ret_V_1_15_fu_56319_p2() {
    ret_V_1_15_fu_56319_p2 = (!ap_const_lv8_1.is_01() || !tmp_340_reg_66974.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_340_reg_66974.read()));
}

void Sobel_phase_strm::thread_ret_V_1_16_fu_56345_p2() {
    ret_V_1_16_fu_56345_p2 = (!ap_const_lv8_1.is_01() || !tmp_360_reg_66991.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_360_reg_66991.read()));
}

void Sobel_phase_strm::thread_ret_V_1_17_fu_56371_p2() {
    ret_V_1_17_fu_56371_p2 = (!ap_const_lv8_1.is_01() || !tmp_380_reg_67008.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_380_reg_67008.read()));
}

void Sobel_phase_strm::thread_ret_V_1_18_fu_56397_p2() {
    ret_V_1_18_fu_56397_p2 = (!ap_const_lv8_1.is_01() || !tmp_400_reg_67025.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_400_reg_67025.read()));
}

void Sobel_phase_strm::thread_ret_V_1_19_fu_56423_p2() {
    ret_V_1_19_fu_56423_p2 = (!ap_const_lv8_1.is_01() || !tmp_420_reg_67042.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_420_reg_67042.read()));
}

void Sobel_phase_strm::thread_ret_V_1_1_fu_55929_p2() {
    ret_V_1_1_fu_55929_p2 = (!ap_const_lv8_1.is_01() || !tmp_40_reg_66719.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_40_reg_66719.read()));
}

void Sobel_phase_strm::thread_ret_V_1_20_fu_56449_p2() {
    ret_V_1_20_fu_56449_p2 = (!ap_const_lv8_1.is_01() || !tmp_440_reg_67059.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_440_reg_67059.read()));
}

void Sobel_phase_strm::thread_ret_V_1_21_fu_56475_p2() {
    ret_V_1_21_fu_56475_p2 = (!ap_const_lv8_1.is_01() || !tmp_460_reg_67076.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_460_reg_67076.read()));
}

void Sobel_phase_strm::thread_ret_V_1_22_fu_56501_p2() {
    ret_V_1_22_fu_56501_p2 = (!ap_const_lv8_1.is_01() || !tmp_480_reg_67093.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_480_reg_67093.read()));
}

void Sobel_phase_strm::thread_ret_V_1_23_fu_56527_p2() {
    ret_V_1_23_fu_56527_p2 = (!ap_const_lv8_1.is_01() || !tmp_500_reg_67110.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_500_reg_67110.read()));
}

void Sobel_phase_strm::thread_ret_V_1_24_fu_56553_p2() {
    ret_V_1_24_fu_56553_p2 = (!ap_const_lv8_1.is_01() || !tmp_520_reg_67127.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_520_reg_67127.read()));
}

void Sobel_phase_strm::thread_ret_V_1_25_fu_56579_p2() {
    ret_V_1_25_fu_56579_p2 = (!ap_const_lv8_1.is_01() || !tmp_540_reg_67144.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_540_reg_67144.read()));
}

void Sobel_phase_strm::thread_ret_V_1_26_fu_56605_p2() {
    ret_V_1_26_fu_56605_p2 = (!ap_const_lv8_1.is_01() || !tmp_560_reg_67161.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_560_reg_67161.read()));
}

void Sobel_phase_strm::thread_ret_V_1_27_fu_56631_p2() {
    ret_V_1_27_fu_56631_p2 = (!ap_const_lv8_1.is_01() || !tmp_580_reg_67178.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_580_reg_67178.read()));
}

void Sobel_phase_strm::thread_ret_V_1_28_fu_56657_p2() {
    ret_V_1_28_fu_56657_p2 = (!ap_const_lv8_1.is_01() || !tmp_600_reg_67195.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_600_reg_67195.read()));
}

void Sobel_phase_strm::thread_ret_V_1_29_fu_56683_p2() {
    ret_V_1_29_fu_56683_p2 = (!ap_const_lv8_1.is_01() || !tmp_620_reg_67212.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_620_reg_67212.read()));
}

void Sobel_phase_strm::thread_ret_V_1_2_fu_55955_p2() {
    ret_V_1_2_fu_55955_p2 = (!ap_const_lv8_1.is_01() || !tmp_60_reg_66736.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_60_reg_66736.read()));
}

void Sobel_phase_strm::thread_ret_V_1_30_fu_56709_p2() {
    ret_V_1_30_fu_56709_p2 = (!ap_const_lv8_1.is_01() || !tmp_640_reg_67229.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_640_reg_67229.read()));
}

void Sobel_phase_strm::thread_ret_V_1_31_fu_56735_p2() {
    ret_V_1_31_fu_56735_p2 = (!ap_const_lv8_1.is_01() || !tmp_660_reg_67246.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_660_reg_67246.read()));
}

void Sobel_phase_strm::thread_ret_V_1_32_fu_56761_p2() {
    ret_V_1_32_fu_56761_p2 = (!ap_const_lv8_1.is_01() || !tmp_680_reg_67263.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_680_reg_67263.read()));
}

void Sobel_phase_strm::thread_ret_V_1_33_fu_56787_p2() {
    ret_V_1_33_fu_56787_p2 = (!ap_const_lv8_1.is_01() || !tmp_700_reg_67280.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_700_reg_67280.read()));
}

void Sobel_phase_strm::thread_ret_V_1_34_fu_56813_p2() {
    ret_V_1_34_fu_56813_p2 = (!ap_const_lv8_1.is_01() || !tmp_720_reg_67297.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_720_reg_67297.read()));
}

void Sobel_phase_strm::thread_ret_V_1_35_fu_56839_p2() {
    ret_V_1_35_fu_56839_p2 = (!ap_const_lv8_1.is_01() || !tmp_740_reg_67314.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_740_reg_67314.read()));
}

void Sobel_phase_strm::thread_ret_V_1_36_fu_56865_p2() {
    ret_V_1_36_fu_56865_p2 = (!ap_const_lv8_1.is_01() || !tmp_760_reg_67331.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_760_reg_67331.read()));
}

void Sobel_phase_strm::thread_ret_V_1_37_fu_56891_p2() {
    ret_V_1_37_fu_56891_p2 = (!ap_const_lv8_1.is_01() || !tmp_780_reg_67348.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_780_reg_67348.read()));
}

void Sobel_phase_strm::thread_ret_V_1_38_fu_56917_p2() {
    ret_V_1_38_fu_56917_p2 = (!ap_const_lv8_1.is_01() || !tmp_800_reg_67365.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_800_reg_67365.read()));
}

void Sobel_phase_strm::thread_ret_V_1_39_fu_56943_p2() {
    ret_V_1_39_fu_56943_p2 = (!ap_const_lv8_1.is_01() || !tmp_820_reg_67382.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_820_reg_67382.read()));
}

void Sobel_phase_strm::thread_ret_V_1_3_fu_55981_p2() {
    ret_V_1_3_fu_55981_p2 = (!ap_const_lv8_1.is_01() || !tmp_80_reg_66753.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_80_reg_66753.read()));
}

void Sobel_phase_strm::thread_ret_V_1_40_fu_56969_p2() {
    ret_V_1_40_fu_56969_p2 = (!ap_const_lv8_1.is_01() || !tmp_840_reg_67399.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_840_reg_67399.read()));
}

void Sobel_phase_strm::thread_ret_V_1_41_fu_56995_p2() {
    ret_V_1_41_fu_56995_p2 = (!ap_const_lv8_1.is_01() || !tmp_860_reg_67416.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_860_reg_67416.read()));
}

void Sobel_phase_strm::thread_ret_V_1_42_fu_57021_p2() {
    ret_V_1_42_fu_57021_p2 = (!ap_const_lv8_1.is_01() || !tmp_880_reg_67433.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_880_reg_67433.read()));
}

void Sobel_phase_strm::thread_ret_V_1_43_fu_57047_p2() {
    ret_V_1_43_fu_57047_p2 = (!ap_const_lv8_1.is_01() || !tmp_900_reg_67450.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_900_reg_67450.read()));
}

void Sobel_phase_strm::thread_ret_V_1_44_fu_57073_p2() {
    ret_V_1_44_fu_57073_p2 = (!ap_const_lv8_1.is_01() || !tmp_920_reg_67467.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_920_reg_67467.read()));
}

void Sobel_phase_strm::thread_ret_V_1_45_fu_57099_p2() {
    ret_V_1_45_fu_57099_p2 = (!ap_const_lv8_1.is_01() || !tmp_940_reg_67484.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_940_reg_67484.read()));
}

void Sobel_phase_strm::thread_ret_V_1_46_fu_57125_p2() {
    ret_V_1_46_fu_57125_p2 = (!ap_const_lv8_1.is_01() || !tmp_960_reg_67501.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_960_reg_67501.read()));
}

void Sobel_phase_strm::thread_ret_V_1_47_fu_57151_p2() {
    ret_V_1_47_fu_57151_p2 = (!ap_const_lv8_1.is_01() || !tmp_980_reg_67518.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_980_reg_67518.read()));
}

void Sobel_phase_strm::thread_ret_V_1_48_fu_57177_p2() {
    ret_V_1_48_fu_57177_p2 = (!ap_const_lv8_1.is_01() || !tmp_1000_reg_67535.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1000_reg_67535.read()));
}

void Sobel_phase_strm::thread_ret_V_1_49_fu_57203_p2() {
    ret_V_1_49_fu_57203_p2 = (!ap_const_lv8_1.is_01() || !tmp_1020_reg_67552.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1020_reg_67552.read()));
}

void Sobel_phase_strm::thread_ret_V_1_4_fu_56007_p2() {
    ret_V_1_4_fu_56007_p2 = (!ap_const_lv8_1.is_01() || !tmp_100_reg_66770.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_100_reg_66770.read()));
}

void Sobel_phase_strm::thread_ret_V_1_50_fu_57229_p2() {
    ret_V_1_50_fu_57229_p2 = (!ap_const_lv8_1.is_01() || !tmp_1040_reg_67569.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1040_reg_67569.read()));
}

void Sobel_phase_strm::thread_ret_V_1_51_fu_57255_p2() {
    ret_V_1_51_fu_57255_p2 = (!ap_const_lv8_1.is_01() || !tmp_1060_reg_67586.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1060_reg_67586.read()));
}

void Sobel_phase_strm::thread_ret_V_1_52_fu_57281_p2() {
    ret_V_1_52_fu_57281_p2 = (!ap_const_lv8_1.is_01() || !tmp_1080_reg_67603.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1080_reg_67603.read()));
}

void Sobel_phase_strm::thread_ret_V_1_53_fu_57307_p2() {
    ret_V_1_53_fu_57307_p2 = (!ap_const_lv8_1.is_01() || !tmp_1100_reg_67620.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1100_reg_67620.read()));
}

void Sobel_phase_strm::thread_ret_V_1_54_fu_57333_p2() {
    ret_V_1_54_fu_57333_p2 = (!ap_const_lv8_1.is_01() || !tmp_1120_reg_67637.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1120_reg_67637.read()));
}

void Sobel_phase_strm::thread_ret_V_1_55_fu_57359_p2() {
    ret_V_1_55_fu_57359_p2 = (!ap_const_lv8_1.is_01() || !tmp_1140_reg_67654.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1140_reg_67654.read()));
}

void Sobel_phase_strm::thread_ret_V_1_56_fu_57385_p2() {
    ret_V_1_56_fu_57385_p2 = (!ap_const_lv8_1.is_01() || !tmp_1160_reg_67671.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1160_reg_67671.read()));
}

void Sobel_phase_strm::thread_ret_V_1_57_fu_57411_p2() {
    ret_V_1_57_fu_57411_p2 = (!ap_const_lv8_1.is_01() || !tmp_1180_reg_67688.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1180_reg_67688.read()));
}

void Sobel_phase_strm::thread_ret_V_1_58_fu_57437_p2() {
    ret_V_1_58_fu_57437_p2 = (!ap_const_lv8_1.is_01() || !tmp_1200_reg_67705.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1200_reg_67705.read()));
}

void Sobel_phase_strm::thread_ret_V_1_59_fu_57463_p2() {
    ret_V_1_59_fu_57463_p2 = (!ap_const_lv8_1.is_01() || !tmp_1220_reg_67722.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1220_reg_67722.read()));
}

void Sobel_phase_strm::thread_ret_V_1_5_fu_56033_p2() {
    ret_V_1_5_fu_56033_p2 = (!ap_const_lv8_1.is_01() || !tmp_120_reg_66787.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_120_reg_66787.read()));
}

void Sobel_phase_strm::thread_ret_V_1_60_fu_57489_p2() {
    ret_V_1_60_fu_57489_p2 = (!ap_const_lv8_1.is_01() || !tmp_1240_reg_67739.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1240_reg_67739.read()));
}

void Sobel_phase_strm::thread_ret_V_1_61_fu_57515_p2() {
    ret_V_1_61_fu_57515_p2 = (!ap_const_lv8_1.is_01() || !tmp_1260_reg_67756.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1260_reg_67756.read()));
}

void Sobel_phase_strm::thread_ret_V_1_62_fu_57541_p2() {
    ret_V_1_62_fu_57541_p2 = (!ap_const_lv8_1.is_01() || !tmp_1280_reg_67773.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1280_reg_67773.read()));
}

void Sobel_phase_strm::thread_ret_V_1_63_fu_57567_p2() {
    ret_V_1_63_fu_57567_p2 = (!ap_const_lv8_1.is_01() || !tmp_1300_reg_67790.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1300_reg_67790.read()));
}

void Sobel_phase_strm::thread_ret_V_1_64_fu_57593_p2() {
    ret_V_1_64_fu_57593_p2 = (!ap_const_lv8_1.is_01() || !tmp_1320_reg_67807.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1320_reg_67807.read()));
}

void Sobel_phase_strm::thread_ret_V_1_65_fu_57619_p2() {
    ret_V_1_65_fu_57619_p2 = (!ap_const_lv8_1.is_01() || !tmp_1340_reg_67824.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1340_reg_67824.read()));
}

void Sobel_phase_strm::thread_ret_V_1_66_fu_57645_p2() {
    ret_V_1_66_fu_57645_p2 = (!ap_const_lv8_1.is_01() || !tmp_1360_reg_67841.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1360_reg_67841.read()));
}

void Sobel_phase_strm::thread_ret_V_1_67_fu_57671_p2() {
    ret_V_1_67_fu_57671_p2 = (!ap_const_lv8_1.is_01() || !tmp_1380_reg_67858.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1380_reg_67858.read()));
}

void Sobel_phase_strm::thread_ret_V_1_68_fu_57697_p2() {
    ret_V_1_68_fu_57697_p2 = (!ap_const_lv8_1.is_01() || !tmp_1400_reg_67875.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1400_reg_67875.read()));
}

void Sobel_phase_strm::thread_ret_V_1_69_fu_57723_p2() {
    ret_V_1_69_fu_57723_p2 = (!ap_const_lv8_1.is_01() || !tmp_1420_reg_67892.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_1420_reg_67892.read()));
}

void Sobel_phase_strm::thread_ret_V_1_6_fu_56059_p2() {
    ret_V_1_6_fu_56059_p2 = (!ap_const_lv8_1.is_01() || !tmp_140_reg_66804.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_140_reg_66804.read()));
}

void Sobel_phase_strm::thread_ret_V_1_7_fu_56085_p2() {
    ret_V_1_7_fu_56085_p2 = (!ap_const_lv8_1.is_01() || !tmp_160_reg_66821.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_160_reg_66821.read()));
}

void Sobel_phase_strm::thread_ret_V_1_8_fu_56111_p2() {
    ret_V_1_8_fu_56111_p2 = (!ap_const_lv8_1.is_01() || !tmp_180_reg_66838.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_180_reg_66838.read()));
}

void Sobel_phase_strm::thread_ret_V_1_9_fu_56137_p2() {
    ret_V_1_9_fu_56137_p2 = (!ap_const_lv8_1.is_01() || !tmp_200_reg_66855.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_200_reg_66855.read()));
}

void Sobel_phase_strm::thread_ret_V_1_fu_55903_p2() {
    ret_V_1_fu_55903_p2 = (!ap_const_lv8_1.is_01() || !tmp_19_reg_66702.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_19_reg_66702.read()));
}

void Sobel_phase_strm::thread_ret_V_1_s_fu_56163_p2() {
    ret_V_1_s_fu_56163_p2 = (!ap_const_lv8_1.is_01() || !tmp_220_reg_66872.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(tmp_220_reg_66872.read()));
}

void Sobel_phase_strm::thread_sel_tmp100_fu_53305_p2() {
    sel_tmp100_fu_53305_p2 = (ap_reg_ppstg_tmp_19_49_reg_59651_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp101_cast_fu_51156_p3() {
    sel_tmp101_cast_fu_51156_p3 = (!sel_tmp67_fu_51151_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp67_fu_51151_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp101_fu_53310_p2() {
    sel_tmp101_fu_53310_p2 = (ap_reg_ppstg_tmp_20_49_reg_59657_pp0_iter4.read() & sel_tmp100_fu_53305_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp102_fu_53432_p2() {
    sel_tmp102_fu_53432_p2 = (ap_reg_ppstg_tmp_19_50_reg_59689_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp103_fu_53437_p2() {
    sel_tmp103_fu_53437_p2 = (ap_reg_ppstg_tmp_20_50_reg_59695_pp0_iter4.read() & sel_tmp102_fu_53432_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp104_cast_fu_51283_p3() {
    sel_tmp104_cast_fu_51283_p3 = (!sel_tmp69_fu_51278_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp69_fu_51278_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp104_fu_53559_p2() {
    sel_tmp104_fu_53559_p2 = (ap_reg_ppstg_tmp_19_51_reg_59727_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp105_fu_53564_p2() {
    sel_tmp105_fu_53564_p2 = (ap_reg_ppstg_tmp_20_51_reg_59733_pp0_iter4.read() & sel_tmp104_fu_53559_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp106_fu_53686_p2() {
    sel_tmp106_fu_53686_p2 = (ap_reg_ppstg_tmp_19_52_reg_59765_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp107_cast_fu_51410_p3() {
    sel_tmp107_cast_fu_51410_p3 = (!sel_tmp71_fu_51405_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp71_fu_51405_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp107_fu_53691_p2() {
    sel_tmp107_fu_53691_p2 = (ap_reg_ppstg_tmp_20_52_reg_59771_pp0_iter4.read() & sel_tmp106_fu_53686_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp108_fu_53813_p2() {
    sel_tmp108_fu_53813_p2 = (ap_reg_ppstg_tmp_19_53_reg_59803_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp109_fu_53818_p2() {
    sel_tmp109_fu_53818_p2 = (ap_reg_ppstg_tmp_20_53_reg_59809_pp0_iter4.read() & sel_tmp108_fu_53813_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp10_fu_47590_p2() {
    sel_tmp10_fu_47590_p2 = (ap_reg_ppstg_tmp_19_5_reg_57941_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp110_cast_fu_51537_p3() {
    sel_tmp110_cast_fu_51537_p3 = (!sel_tmp73_fu_51532_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp73_fu_51532_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp110_fu_53940_p2() {
    sel_tmp110_fu_53940_p2 = (ap_reg_ppstg_tmp_19_54_reg_59841_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp111_fu_53945_p2() {
    sel_tmp111_fu_53945_p2 = (ap_reg_ppstg_tmp_20_54_reg_59847_pp0_iter4.read() & sel_tmp110_fu_53940_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp112_fu_54067_p2() {
    sel_tmp112_fu_54067_p2 = (ap_reg_ppstg_tmp_19_55_reg_59879_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp113_cast_fu_51664_p3() {
    sel_tmp113_cast_fu_51664_p3 = (!sel_tmp75_fu_51659_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp75_fu_51659_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp113_fu_54072_p2() {
    sel_tmp113_fu_54072_p2 = (ap_reg_ppstg_tmp_20_55_reg_59885_pp0_iter4.read() & sel_tmp112_fu_54067_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp114_fu_54194_p2() {
    sel_tmp114_fu_54194_p2 = (ap_reg_ppstg_tmp_19_56_reg_59917_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp115_fu_54199_p2() {
    sel_tmp115_fu_54199_p2 = (ap_reg_ppstg_tmp_20_56_reg_59923_pp0_iter4.read() & sel_tmp114_fu_54194_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp116_cast_fu_51791_p3() {
    sel_tmp116_cast_fu_51791_p3 = (!sel_tmp77_fu_51786_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp77_fu_51786_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp116_fu_54321_p2() {
    sel_tmp116_fu_54321_p2 = (ap_reg_ppstg_tmp_19_57_reg_59955_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp117_fu_54326_p2() {
    sel_tmp117_fu_54326_p2 = (ap_reg_ppstg_tmp_20_57_reg_59961_pp0_iter4.read() & sel_tmp116_fu_54321_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp118_fu_54448_p2() {
    sel_tmp118_fu_54448_p2 = (ap_reg_ppstg_tmp_19_58_reg_59993_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp119_cast_fu_51918_p3() {
    sel_tmp119_cast_fu_51918_p3 = (!sel_tmp79_fu_51913_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp79_fu_51913_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp119_fu_54453_p2() {
    sel_tmp119_fu_54453_p2 = (ap_reg_ppstg_tmp_20_58_reg_59999_pp0_iter4.read() & sel_tmp118_fu_54448_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp11_cast_fu_47346_p3() {
    sel_tmp11_cast_fu_47346_p3 = (!sel_tmp_fu_47341_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp_fu_47341_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp11_fu_47595_p2() {
    sel_tmp11_fu_47595_p2 = (ap_reg_ppstg_tmp_20_5_reg_57947_pp0_iter4.read() & sel_tmp10_fu_47590_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp120_fu_54575_p2() {
    sel_tmp120_fu_54575_p2 = (ap_reg_ppstg_tmp_19_59_reg_60031_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp121_fu_54580_p2() {
    sel_tmp121_fu_54580_p2 = (ap_reg_ppstg_tmp_20_59_reg_60037_pp0_iter4.read() & sel_tmp120_fu_54575_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp122_cast_fu_52045_p3() {
    sel_tmp122_cast_fu_52045_p3 = (!sel_tmp81_fu_52040_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp81_fu_52040_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp122_fu_54702_p2() {
    sel_tmp122_fu_54702_p2 = (ap_reg_ppstg_tmp_19_60_reg_60069_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp123_fu_54707_p2() {
    sel_tmp123_fu_54707_p2 = (ap_reg_ppstg_tmp_20_60_reg_60075_pp0_iter4.read() & sel_tmp122_fu_54702_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp124_fu_54829_p2() {
    sel_tmp124_fu_54829_p2 = (ap_reg_ppstg_tmp_19_61_reg_60107_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp125_cast_fu_52172_p3() {
    sel_tmp125_cast_fu_52172_p3 = (!sel_tmp83_fu_52167_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp83_fu_52167_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp125_fu_54834_p2() {
    sel_tmp125_fu_54834_p2 = (ap_reg_ppstg_tmp_20_61_reg_60113_pp0_iter4.read() & sel_tmp124_fu_54829_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp126_fu_54956_p2() {
    sel_tmp126_fu_54956_p2 = (ap_reg_ppstg_tmp_19_62_reg_60145_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp127_fu_54961_p2() {
    sel_tmp127_fu_54961_p2 = (ap_reg_ppstg_tmp_20_62_reg_60151_pp0_iter4.read() & sel_tmp126_fu_54956_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp128_cast_fu_52299_p3() {
    sel_tmp128_cast_fu_52299_p3 = (!sel_tmp85_fu_52294_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp85_fu_52294_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp128_fu_55083_p2() {
    sel_tmp128_fu_55083_p2 = (ap_reg_ppstg_tmp_19_63_reg_60183_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp129_fu_55088_p2() {
    sel_tmp129_fu_55088_p2 = (ap_reg_ppstg_tmp_20_63_reg_60189_pp0_iter4.read() & sel_tmp128_fu_55083_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp12_fu_47717_p2() {
    sel_tmp12_fu_47717_p2 = (ap_reg_ppstg_tmp_19_6_reg_57979_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp130_fu_55210_p2() {
    sel_tmp130_fu_55210_p2 = (ap_reg_ppstg_tmp_19_64_reg_60221_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp131_cast_fu_52426_p3() {
    sel_tmp131_cast_fu_52426_p3 = (!sel_tmp87_fu_52421_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp87_fu_52421_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp131_fu_55215_p2() {
    sel_tmp131_fu_55215_p2 = (ap_reg_ppstg_tmp_20_64_reg_60227_pp0_iter4.read() & sel_tmp130_fu_55210_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp132_fu_55337_p2() {
    sel_tmp132_fu_55337_p2 = (ap_reg_ppstg_tmp_19_65_reg_60259_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp133_fu_55342_p2() {
    sel_tmp133_fu_55342_p2 = (ap_reg_ppstg_tmp_20_65_reg_60265_pp0_iter4.read() & sel_tmp132_fu_55337_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp134_cast_fu_52553_p3() {
    sel_tmp134_cast_fu_52553_p3 = (!sel_tmp89_fu_52548_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp89_fu_52548_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp134_fu_55464_p2() {
    sel_tmp134_fu_55464_p2 = (ap_reg_ppstg_tmp_19_66_reg_60297_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp135_fu_55469_p2() {
    sel_tmp135_fu_55469_p2 = (ap_reg_ppstg_tmp_20_66_reg_60303_pp0_iter4.read() & sel_tmp134_fu_55464_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp136_fu_55591_p2() {
    sel_tmp136_fu_55591_p2 = (ap_reg_ppstg_tmp_19_67_reg_60335_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp137_cast_fu_52680_p3() {
    sel_tmp137_cast_fu_52680_p3 = (!sel_tmp91_fu_52675_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp91_fu_52675_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp137_fu_55596_p2() {
    sel_tmp137_fu_55596_p2 = (ap_reg_ppstg_tmp_20_67_reg_60341_pp0_iter4.read() & sel_tmp136_fu_55591_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp138_fu_55718_p2() {
    sel_tmp138_fu_55718_p2 = (ap_reg_ppstg_tmp_19_68_reg_60373_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp139_fu_55723_p2() {
    sel_tmp139_fu_55723_p2 = (ap_reg_ppstg_tmp_20_68_reg_60379_pp0_iter4.read() & sel_tmp138_fu_55718_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp13_fu_47722_p2() {
    sel_tmp13_fu_47722_p2 = (ap_reg_ppstg_tmp_20_6_reg_57985_pp0_iter4.read() & sel_tmp12_fu_47717_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp140_cast_fu_52807_p3() {
    sel_tmp140_cast_fu_52807_p3 = (!sel_tmp93_fu_52802_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp93_fu_52802_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp140_fu_55845_p2() {
    sel_tmp140_fu_55845_p2 = (ap_reg_ppstg_tmp_19_69_reg_60411_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp141_fu_55850_p2() {
    sel_tmp141_fu_55850_p2 = (ap_reg_ppstg_tmp_20_69_reg_60417_pp0_iter4.read() & sel_tmp140_fu_55845_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp143_cast_fu_52934_p3() {
    sel_tmp143_cast_fu_52934_p3 = (!sel_tmp95_fu_52929_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp95_fu_52929_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp146_cast_fu_53061_p3() {
    sel_tmp146_cast_fu_53061_p3 = (!sel_tmp97_fu_53056_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp97_fu_53056_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp149_cast_fu_53188_p3() {
    sel_tmp149_cast_fu_53188_p3 = (!sel_tmp99_fu_53183_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp99_fu_53183_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp14_cast_fu_47473_p3() {
    sel_tmp14_cast_fu_47473_p3 = (!sel_tmp8_fu_47468_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp8_fu_47468_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp14_fu_47844_p2() {
    sel_tmp14_fu_47844_p2 = (ap_reg_ppstg_tmp_19_7_reg_58017_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp152_cast_fu_53315_p3() {
    sel_tmp152_cast_fu_53315_p3 = (!sel_tmp101_fu_53310_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp101_fu_53310_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp155_cast_fu_53442_p3() {
    sel_tmp155_cast_fu_53442_p3 = (!sel_tmp103_fu_53437_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp103_fu_53437_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp158_cast_fu_53569_p3() {
    sel_tmp158_cast_fu_53569_p3 = (!sel_tmp105_fu_53564_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp105_fu_53564_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp15_fu_47849_p2() {
    sel_tmp15_fu_47849_p2 = (ap_reg_ppstg_tmp_20_7_reg_58023_pp0_iter4.read() & sel_tmp14_fu_47844_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp161_cast_fu_53696_p3() {
    sel_tmp161_cast_fu_53696_p3 = (!sel_tmp107_fu_53691_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp107_fu_53691_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp164_cast_fu_53823_p3() {
    sel_tmp164_cast_fu_53823_p3 = (!sel_tmp109_fu_53818_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp109_fu_53818_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp167_cast_fu_53950_p3() {
    sel_tmp167_cast_fu_53950_p3 = (!sel_tmp111_fu_53945_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp111_fu_53945_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp16_fu_47971_p2() {
    sel_tmp16_fu_47971_p2 = (ap_reg_ppstg_tmp_19_8_reg_58055_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp170_cast_fu_54077_p3() {
    sel_tmp170_cast_fu_54077_p3 = (!sel_tmp113_fu_54072_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp113_fu_54072_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp173_cast_fu_54204_p3() {
    sel_tmp173_cast_fu_54204_p3 = (!sel_tmp115_fu_54199_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp115_fu_54199_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp176_cast_fu_54331_p3() {
    sel_tmp176_cast_fu_54331_p3 = (!sel_tmp117_fu_54326_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp117_fu_54326_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp179_cast_fu_54458_p3() {
    sel_tmp179_cast_fu_54458_p3 = (!sel_tmp119_fu_54453_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp119_fu_54453_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp17_cast_fu_47600_p3() {
    sel_tmp17_cast_fu_47600_p3 = (!sel_tmp11_fu_47595_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp11_fu_47595_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp17_fu_47976_p2() {
    sel_tmp17_fu_47976_p2 = (ap_reg_ppstg_tmp_20_8_reg_58061_pp0_iter4.read() & sel_tmp16_fu_47971_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp182_cast_fu_54585_p3() {
    sel_tmp182_cast_fu_54585_p3 = (!sel_tmp121_fu_54580_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp121_fu_54580_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp185_cast_fu_54712_p3() {
    sel_tmp185_cast_fu_54712_p3 = (!sel_tmp123_fu_54707_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp123_fu_54707_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp188_cast_fu_54839_p3() {
    sel_tmp188_cast_fu_54839_p3 = (!sel_tmp125_fu_54834_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp125_fu_54834_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp18_fu_48098_p2() {
    sel_tmp18_fu_48098_p2 = (ap_reg_ppstg_tmp_19_9_reg_58093_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp191_cast_fu_54966_p3() {
    sel_tmp191_cast_fu_54966_p3 = (!sel_tmp127_fu_54961_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp127_fu_54961_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp194_cast_fu_55093_p3() {
    sel_tmp194_cast_fu_55093_p3 = (!sel_tmp129_fu_55088_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp129_fu_55088_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp197_cast_fu_55220_p3() {
    sel_tmp197_cast_fu_55220_p3 = (!sel_tmp131_fu_55215_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp131_fu_55215_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp19_fu_48103_p2() {
    sel_tmp19_fu_48103_p2 = (ap_reg_ppstg_tmp_20_9_reg_58099_pp0_iter4.read() & sel_tmp18_fu_48098_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp1_fu_46955_p2() {
    sel_tmp1_fu_46955_p2 = (ap_reg_ppstg_tmp_s_reg_57751_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp200_cast_fu_55347_p3() {
    sel_tmp200_cast_fu_55347_p3 = (!sel_tmp133_fu_55342_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp133_fu_55342_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp203_cast_fu_55474_p3() {
    sel_tmp203_cast_fu_55474_p3 = (!sel_tmp135_fu_55469_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp135_fu_55469_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp206_cast_fu_55601_p3() {
    sel_tmp206_cast_fu_55601_p3 = (!sel_tmp137_fu_55596_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp137_fu_55596_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp209_cast_fu_55728_p3() {
    sel_tmp209_cast_fu_55728_p3 = (!sel_tmp139_fu_55723_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp139_fu_55723_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp20_cast_fu_47727_p3() {
    sel_tmp20_cast_fu_47727_p3 = (!sel_tmp13_fu_47722_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp13_fu_47722_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp20_fu_48225_p2() {
    sel_tmp20_fu_48225_p2 = (ap_reg_ppstg_tmp_19_s_reg_58131_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp212_cast_fu_55855_p3() {
    sel_tmp212_cast_fu_55855_p3 = (!sel_tmp141_fu_55850_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp141_fu_55850_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp21_fu_48230_p2() {
    sel_tmp21_fu_48230_p2 = (ap_reg_ppstg_tmp_20_s_reg_58137_pp0_iter4.read() & sel_tmp20_fu_48225_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp22_fu_48352_p2() {
    sel_tmp22_fu_48352_p2 = (ap_reg_ppstg_tmp_19_10_reg_58169_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp23_cast_fu_47854_p3() {
    sel_tmp23_cast_fu_47854_p3 = (!sel_tmp15_fu_47849_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp15_fu_47849_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp23_fu_48357_p2() {
    sel_tmp23_fu_48357_p2 = (ap_reg_ppstg_tmp_20_10_reg_58175_pp0_iter4.read() & sel_tmp22_fu_48352_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp24_fu_48479_p2() {
    sel_tmp24_fu_48479_p2 = (ap_reg_ppstg_tmp_19_11_reg_58207_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp25_fu_48484_p2() {
    sel_tmp25_fu_48484_p2 = (ap_reg_ppstg_tmp_20_11_reg_58213_pp0_iter4.read() & sel_tmp24_fu_48479_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp26_cast_fu_47981_p3() {
    sel_tmp26_cast_fu_47981_p3 = (!sel_tmp17_fu_47976_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp17_fu_47976_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp26_fu_48606_p2() {
    sel_tmp26_fu_48606_p2 = (ap_reg_ppstg_tmp_19_12_reg_58245_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp27_fu_48611_p2() {
    sel_tmp27_fu_48611_p2 = (ap_reg_ppstg_tmp_20_12_reg_58251_pp0_iter4.read() & sel_tmp26_fu_48606_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp28_fu_48733_p2() {
    sel_tmp28_fu_48733_p2 = (ap_reg_ppstg_tmp_19_13_reg_58283_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp29_cast_fu_48108_p3() {
    sel_tmp29_cast_fu_48108_p3 = (!sel_tmp19_fu_48103_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp19_fu_48103_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp29_fu_48738_p2() {
    sel_tmp29_fu_48738_p2 = (ap_reg_ppstg_tmp_20_13_reg_58289_pp0_iter4.read() & sel_tmp28_fu_48733_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp2_fu_46960_p2() {
    sel_tmp2_fu_46960_p2 = (ap_reg_ppstg_tmp_1_reg_57757_pp0_iter4.read() & sel_tmp1_fu_46955_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp30_fu_48860_p2() {
    sel_tmp30_fu_48860_p2 = (ap_reg_ppstg_tmp_19_14_reg_58321_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp31_fu_48865_p2() {
    sel_tmp31_fu_48865_p2 = (ap_reg_ppstg_tmp_20_14_reg_58327_pp0_iter4.read() & sel_tmp30_fu_48860_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp32_cast_fu_48235_p3() {
    sel_tmp32_cast_fu_48235_p3 = (!sel_tmp21_fu_48230_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp21_fu_48230_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp32_fu_48987_p2() {
    sel_tmp32_fu_48987_p2 = (ap_reg_ppstg_tmp_19_15_reg_58359_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp33_fu_48992_p2() {
    sel_tmp33_fu_48992_p2 = (ap_reg_ppstg_tmp_20_15_reg_58365_pp0_iter4.read() & sel_tmp32_fu_48987_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp34_fu_49114_p2() {
    sel_tmp34_fu_49114_p2 = (ap_reg_ppstg_tmp_19_16_reg_58397_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp35_cast_fu_48362_p3() {
    sel_tmp35_cast_fu_48362_p3 = (!sel_tmp23_fu_48357_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp23_fu_48357_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp35_fu_49119_p2() {
    sel_tmp35_fu_49119_p2 = (ap_reg_ppstg_tmp_20_16_reg_58403_pp0_iter4.read() & sel_tmp34_fu_49114_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp36_fu_49241_p2() {
    sel_tmp36_fu_49241_p2 = (ap_reg_ppstg_tmp_19_17_reg_58435_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp37_fu_49246_p2() {
    sel_tmp37_fu_49246_p2 = (ap_reg_ppstg_tmp_20_17_reg_58441_pp0_iter4.read() & sel_tmp36_fu_49241_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp38_cast_fu_48489_p3() {
    sel_tmp38_cast_fu_48489_p3 = (!sel_tmp25_fu_48484_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp25_fu_48484_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp38_fu_49368_p2() {
    sel_tmp38_fu_49368_p2 = (ap_reg_ppstg_tmp_19_18_reg_58473_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp39_fu_49373_p2() {
    sel_tmp39_fu_49373_p2 = (ap_reg_ppstg_tmp_20_18_reg_58479_pp0_iter4.read() & sel_tmp38_fu_49368_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp3_fu_47082_p2() {
    sel_tmp3_fu_47082_p2 = (ap_reg_ppstg_tmp_19_1_reg_57789_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp40_fu_49495_p2() {
    sel_tmp40_fu_49495_p2 = (ap_reg_ppstg_tmp_19_19_reg_58511_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp41_cast_fu_48616_p3() {
    sel_tmp41_cast_fu_48616_p3 = (!sel_tmp27_fu_48611_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp27_fu_48611_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp41_fu_49500_p2() {
    sel_tmp41_fu_49500_p2 = (ap_reg_ppstg_tmp_20_19_reg_58517_pp0_iter4.read() & sel_tmp40_fu_49495_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp42_fu_49622_p2() {
    sel_tmp42_fu_49622_p2 = (ap_reg_ppstg_tmp_19_20_reg_58549_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp43_fu_49627_p2() {
    sel_tmp43_fu_49627_p2 = (ap_reg_ppstg_tmp_20_20_reg_58555_pp0_iter4.read() & sel_tmp42_fu_49622_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp44_cast_fu_48743_p3() {
    sel_tmp44_cast_fu_48743_p3 = (!sel_tmp29_fu_48738_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp29_fu_48738_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp44_fu_49749_p2() {
    sel_tmp44_fu_49749_p2 = (ap_reg_ppstg_tmp_19_21_reg_58587_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp45_fu_49754_p2() {
    sel_tmp45_fu_49754_p2 = (ap_reg_ppstg_tmp_20_21_reg_58593_pp0_iter4.read() & sel_tmp44_fu_49749_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp46_fu_49876_p2() {
    sel_tmp46_fu_49876_p2 = (ap_reg_ppstg_tmp_19_22_reg_58625_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp47_cast_fu_48870_p3() {
    sel_tmp47_cast_fu_48870_p3 = (!sel_tmp31_fu_48865_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp31_fu_48865_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp47_fu_49881_p2() {
    sel_tmp47_fu_49881_p2 = (ap_reg_ppstg_tmp_20_22_reg_58631_pp0_iter4.read() & sel_tmp46_fu_49876_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp48_fu_50003_p2() {
    sel_tmp48_fu_50003_p2 = (ap_reg_ppstg_tmp_19_23_reg_58663_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp49_fu_50008_p2() {
    sel_tmp49_fu_50008_p2 = (ap_reg_ppstg_tmp_20_23_reg_58669_pp0_iter4.read() & sel_tmp48_fu_50003_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp4_fu_47087_p2() {
    sel_tmp4_fu_47087_p2 = (ap_reg_ppstg_tmp_20_1_reg_57795_pp0_iter4.read() & sel_tmp3_fu_47082_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp50_cast_fu_48997_p3() {
    sel_tmp50_cast_fu_48997_p3 = (!sel_tmp33_fu_48992_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp33_fu_48992_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp50_fu_50130_p2() {
    sel_tmp50_fu_50130_p2 = (ap_reg_ppstg_tmp_19_24_reg_58701_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp51_fu_50135_p2() {
    sel_tmp51_fu_50135_p2 = (ap_reg_ppstg_tmp_20_24_reg_58707_pp0_iter4.read() & sel_tmp50_fu_50130_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp52_fu_50257_p2() {
    sel_tmp52_fu_50257_p2 = (ap_reg_ppstg_tmp_19_25_reg_58739_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp53_cast_fu_49124_p3() {
    sel_tmp53_cast_fu_49124_p3 = (!sel_tmp35_fu_49119_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp35_fu_49119_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp53_fu_50262_p2() {
    sel_tmp53_fu_50262_p2 = (ap_reg_ppstg_tmp_20_25_reg_58745_pp0_iter4.read() & sel_tmp52_fu_50257_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp54_fu_50384_p2() {
    sel_tmp54_fu_50384_p2 = (ap_reg_ppstg_tmp_19_26_reg_58777_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp55_fu_50389_p2() {
    sel_tmp55_fu_50389_p2 = (ap_reg_ppstg_tmp_20_26_reg_58783_pp0_iter4.read() & sel_tmp54_fu_50384_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp56_cast_fu_49251_p3() {
    sel_tmp56_cast_fu_49251_p3 = (!sel_tmp37_fu_49246_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp37_fu_49246_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp56_fu_50511_p2() {
    sel_tmp56_fu_50511_p2 = (ap_reg_ppstg_tmp_19_27_reg_58815_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp57_fu_50516_p2() {
    sel_tmp57_fu_50516_p2 = (ap_reg_ppstg_tmp_20_27_reg_58821_pp0_iter4.read() & sel_tmp56_fu_50511_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp58_fu_50638_p2() {
    sel_tmp58_fu_50638_p2 = (ap_reg_ppstg_tmp_19_28_reg_58853_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp59_cast_fu_49378_p3() {
    sel_tmp59_cast_fu_49378_p3 = (!sel_tmp39_fu_49373_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp39_fu_49373_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp59_fu_50643_p2() {
    sel_tmp59_fu_50643_p2 = (ap_reg_ppstg_tmp_20_28_reg_58859_pp0_iter4.read() & sel_tmp58_fu_50638_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp5_cast_fu_47092_p3() {
    sel_tmp5_cast_fu_47092_p3 = (!sel_tmp4_fu_47087_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp4_fu_47087_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp5_fu_47463_p2() {
    sel_tmp5_fu_47463_p2 = (ap_reg_ppstg_tmp_19_4_reg_57903_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp60_fu_50765_p2() {
    sel_tmp60_fu_50765_p2 = (ap_reg_ppstg_tmp_19_29_reg_58891_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp61_fu_50770_p2() {
    sel_tmp61_fu_50770_p2 = (ap_reg_ppstg_tmp_20_29_reg_58897_pp0_iter4.read() & sel_tmp60_fu_50765_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp62_cast_fu_49505_p3() {
    sel_tmp62_cast_fu_49505_p3 = (!sel_tmp41_fu_49500_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp41_fu_49500_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp62_fu_50892_p2() {
    sel_tmp62_fu_50892_p2 = (ap_reg_ppstg_tmp_19_30_reg_58929_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp63_fu_50897_p2() {
    sel_tmp63_fu_50897_p2 = (ap_reg_ppstg_tmp_20_30_reg_58935_pp0_iter4.read() & sel_tmp62_fu_50892_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp64_fu_51019_p2() {
    sel_tmp64_fu_51019_p2 = (ap_reg_ppstg_tmp_19_31_reg_58967_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp65_cast_fu_49632_p3() {
    sel_tmp65_cast_fu_49632_p3 = (!sel_tmp43_fu_49627_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp43_fu_49627_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp65_fu_51024_p2() {
    sel_tmp65_fu_51024_p2 = (ap_reg_ppstg_tmp_20_31_reg_58973_pp0_iter4.read() & sel_tmp64_fu_51019_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp66_fu_51146_p2() {
    sel_tmp66_fu_51146_p2 = (ap_reg_ppstg_tmp_19_32_reg_59005_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp67_fu_51151_p2() {
    sel_tmp67_fu_51151_p2 = (ap_reg_ppstg_tmp_20_32_reg_59011_pp0_iter4.read() & sel_tmp66_fu_51146_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp68_cast_fu_49759_p3() {
    sel_tmp68_cast_fu_49759_p3 = (!sel_tmp45_fu_49754_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp45_fu_49754_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp68_fu_51273_p2() {
    sel_tmp68_fu_51273_p2 = (ap_reg_ppstg_tmp_19_33_reg_59043_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp69_fu_51278_p2() {
    sel_tmp69_fu_51278_p2 = (ap_reg_ppstg_tmp_20_33_reg_59049_pp0_iter4.read() & sel_tmp68_fu_51273_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp6_fu_47209_p2() {
    sel_tmp6_fu_47209_p2 = (ap_reg_ppstg_tmp_19_2_reg_57827_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp70_fu_51400_p2() {
    sel_tmp70_fu_51400_p2 = (ap_reg_ppstg_tmp_19_34_reg_59081_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp71_cast_fu_49886_p3() {
    sel_tmp71_cast_fu_49886_p3 = (!sel_tmp47_fu_49881_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp47_fu_49881_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp71_fu_51405_p2() {
    sel_tmp71_fu_51405_p2 = (ap_reg_ppstg_tmp_20_34_reg_59087_pp0_iter4.read() & sel_tmp70_fu_51400_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp72_fu_51527_p2() {
    sel_tmp72_fu_51527_p2 = (ap_reg_ppstg_tmp_19_35_reg_59119_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp73_fu_51532_p2() {
    sel_tmp73_fu_51532_p2 = (ap_reg_ppstg_tmp_20_35_reg_59125_pp0_iter4.read() & sel_tmp72_fu_51527_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp74_cast_fu_50013_p3() {
    sel_tmp74_cast_fu_50013_p3 = (!sel_tmp49_fu_50008_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp49_fu_50008_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp74_fu_51654_p2() {
    sel_tmp74_fu_51654_p2 = (ap_reg_ppstg_tmp_19_36_reg_59157_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp75_fu_51659_p2() {
    sel_tmp75_fu_51659_p2 = (ap_reg_ppstg_tmp_20_36_reg_59163_pp0_iter4.read() & sel_tmp74_fu_51654_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp76_fu_51781_p2() {
    sel_tmp76_fu_51781_p2 = (ap_reg_ppstg_tmp_19_37_reg_59195_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp77_cast_fu_50140_p3() {
    sel_tmp77_cast_fu_50140_p3 = (!sel_tmp51_fu_50135_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp51_fu_50135_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp77_fu_51786_p2() {
    sel_tmp77_fu_51786_p2 = (ap_reg_ppstg_tmp_20_37_reg_59201_pp0_iter4.read() & sel_tmp76_fu_51781_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp78_fu_51908_p2() {
    sel_tmp78_fu_51908_p2 = (ap_reg_ppstg_tmp_19_38_reg_59233_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp79_fu_51913_p2() {
    sel_tmp79_fu_51913_p2 = (ap_reg_ppstg_tmp_20_38_reg_59239_pp0_iter4.read() & sel_tmp78_fu_51908_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp7_fu_47214_p2() {
    sel_tmp7_fu_47214_p2 = (ap_reg_ppstg_tmp_20_2_reg_57833_pp0_iter4.read() & sel_tmp6_fu_47209_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp80_cast_fu_50267_p3() {
    sel_tmp80_cast_fu_50267_p3 = (!sel_tmp53_fu_50262_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp53_fu_50262_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp80_fu_52035_p2() {
    sel_tmp80_fu_52035_p2 = (ap_reg_ppstg_tmp_19_39_reg_59271_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp81_fu_52040_p2() {
    sel_tmp81_fu_52040_p2 = (ap_reg_ppstg_tmp_20_39_reg_59277_pp0_iter4.read() & sel_tmp80_fu_52035_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp82_fu_52162_p2() {
    sel_tmp82_fu_52162_p2 = (ap_reg_ppstg_tmp_19_40_reg_59309_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp83_cast_fu_50394_p3() {
    sel_tmp83_cast_fu_50394_p3 = (!sel_tmp55_fu_50389_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp55_fu_50389_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp83_fu_52167_p2() {
    sel_tmp83_fu_52167_p2 = (ap_reg_ppstg_tmp_20_40_reg_59315_pp0_iter4.read() & sel_tmp82_fu_52162_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp84_fu_52289_p2() {
    sel_tmp84_fu_52289_p2 = (ap_reg_ppstg_tmp_19_41_reg_59347_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp85_fu_52294_p2() {
    sel_tmp85_fu_52294_p2 = (ap_reg_ppstg_tmp_20_41_reg_59353_pp0_iter4.read() & sel_tmp84_fu_52289_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp86_cast_fu_50521_p3() {
    sel_tmp86_cast_fu_50521_p3 = (!sel_tmp57_fu_50516_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp57_fu_50516_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp86_fu_52416_p2() {
    sel_tmp86_fu_52416_p2 = (ap_reg_ppstg_tmp_19_42_reg_59385_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp87_fu_52421_p2() {
    sel_tmp87_fu_52421_p2 = (ap_reg_ppstg_tmp_20_42_reg_59391_pp0_iter4.read() & sel_tmp86_fu_52416_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp88_fu_52543_p2() {
    sel_tmp88_fu_52543_p2 = (ap_reg_ppstg_tmp_19_43_reg_59423_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp89_cast_fu_50648_p3() {
    sel_tmp89_cast_fu_50648_p3 = (!sel_tmp59_fu_50643_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp59_fu_50643_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp89_fu_52548_p2() {
    sel_tmp89_fu_52548_p2 = (ap_reg_ppstg_tmp_20_43_reg_59429_pp0_iter4.read() & sel_tmp88_fu_52543_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp8_cast_fu_47219_p3() {
    sel_tmp8_cast_fu_47219_p3 = (!sel_tmp7_fu_47214_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp7_fu_47214_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp8_fu_47468_p2() {
    sel_tmp8_fu_47468_p2 = (ap_reg_ppstg_tmp_20_4_reg_57909_pp0_iter4.read() & sel_tmp5_fu_47463_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp90_fu_52670_p2() {
    sel_tmp90_fu_52670_p2 = (ap_reg_ppstg_tmp_19_44_reg_59461_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp91_fu_52675_p2() {
    sel_tmp91_fu_52675_p2 = (ap_reg_ppstg_tmp_20_44_reg_59467_pp0_iter4.read() & sel_tmp90_fu_52670_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp92_cast_fu_50775_p3() {
    sel_tmp92_cast_fu_50775_p3 = (!sel_tmp61_fu_50770_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp61_fu_50770_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp92_fu_52797_p2() {
    sel_tmp92_fu_52797_p2 = (ap_reg_ppstg_tmp_19_45_reg_59499_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp93_fu_52802_p2() {
    sel_tmp93_fu_52802_p2 = (ap_reg_ppstg_tmp_20_45_reg_59505_pp0_iter4.read() & sel_tmp92_fu_52797_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp94_fu_52924_p2() {
    sel_tmp94_fu_52924_p2 = (ap_reg_ppstg_tmp_19_46_reg_59537_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp95_cast_fu_50902_p3() {
    sel_tmp95_cast_fu_50902_p3 = (!sel_tmp63_fu_50897_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp63_fu_50897_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp95_fu_52929_p2() {
    sel_tmp95_fu_52929_p2 = (ap_reg_ppstg_tmp_20_46_reg_59543_pp0_iter4.read() & sel_tmp94_fu_52924_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp96_fu_53051_p2() {
    sel_tmp96_fu_53051_p2 = (ap_reg_ppstg_tmp_19_47_reg_59575_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp97_fu_53056_p2() {
    sel_tmp97_fu_53056_p2 = (ap_reg_ppstg_tmp_20_47_reg_59581_pp0_iter4.read() & sel_tmp96_fu_53051_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp98_cast_fu_51029_p3() {
    sel_tmp98_cast_fu_51029_p3 = (!sel_tmp65_fu_51024_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp65_fu_51024_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp98_fu_53178_p2() {
    sel_tmp98_fu_53178_p2 = (ap_reg_ppstg_tmp_19_48_reg_59613_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp99_fu_53183_p2() {
    sel_tmp99_fu_53183_p2 = (ap_reg_ppstg_tmp_20_48_reg_59619_pp0_iter4.read() & sel_tmp98_fu_53178_p2.read());
}

void Sobel_phase_strm::thread_sel_tmp9_fu_47336_p2() {
    sel_tmp9_fu_47336_p2 = (ap_reg_ppstg_tmp_19_3_reg_57865_pp0_iter4.read() ^ ap_const_lv1_1);
}

void Sobel_phase_strm::thread_sel_tmp_cast_fu_46965_p3() {
    sel_tmp_cast_fu_46965_p3 = (!sel_tmp2_fu_46960_p2.read()[0].is_01())? sc_lv<13>(): ((sel_tmp2_fu_46960_p2.read()[0].to_bool())? ap_const_lv13_B40: ap_const_lv13_0);
}

void Sobel_phase_strm::thread_sel_tmp_fu_47341_p2() {
    sel_tmp_fu_47341_p2 = (ap_reg_ppstg_tmp_20_3_reg_57871_pp0_iter4.read() & sel_tmp9_fu_47336_p2.read());
}

void Sobel_phase_strm::thread_tmp1003_fu_53264_p2() {
    tmp1003_fu_53264_p2 = (!z_V_50_5_v_cast_cast_fu_53236_p3.read().is_01() || !z_V_50_4_v_cast_cast_fu_53229_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_50_5_v_cast_cast_fu_53236_p3.read()) + sc_biguint<9>(z_V_50_4_v_cast_cast_fu_53229_p3.read()));
}

void Sobel_phase_strm::thread_tmp1004_fu_53274_p2() {
    tmp1004_fu_53274_p2 = (!z_V_50_3_reg_66277.read().is_01() || !tmp1956_cast_fu_53270_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_50_3_reg_66277.read()) + sc_bigint<13>(tmp1956_cast_fu_53270_p1.read()));
}

void Sobel_phase_strm::thread_tmp1005_fu_53279_p2() {
    tmp1005_fu_53279_p2 = (!z_V_50_8_v_cast_cast_cast_fu_53257_p3.read().is_01() || !z_V_50_7_v_cast_cast_fu_53250_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_50_8_v_cast_cast_cast_fu_53257_p3.read()) + sc_biguint<6>(z_V_50_7_v_cast_cast_fu_53250_p3.read()));
}

void Sobel_phase_strm::thread_tmp1006_fu_53289_p2() {
    tmp1006_fu_53289_p2 = (!z_V_50_6_v_cast_cast_fu_53243_p3.read().is_01() || !tmp1958_cast_fu_53285_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_50_6_v_cast_cast_fu_53243_p3.read()) + sc_bigint<7>(tmp1958_cast_fu_53285_p1.read()));
}

void Sobel_phase_strm::thread_tmp1023_fu_53391_p2() {
    tmp1023_fu_53391_p2 = (!z_V_51_5_v_cast_cast_fu_53363_p3.read().is_01() || !z_V_51_4_v_cast_cast_fu_53356_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_51_5_v_cast_cast_fu_53363_p3.read()) + sc_biguint<9>(z_V_51_4_v_cast_cast_fu_53356_p3.read()));
}

void Sobel_phase_strm::thread_tmp1024_fu_53401_p2() {
    tmp1024_fu_53401_p2 = (!z_V_51_3_reg_66297.read().is_01() || !tmp1960_cast_fu_53397_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_51_3_reg_66297.read()) + sc_bigint<13>(tmp1960_cast_fu_53397_p1.read()));
}

void Sobel_phase_strm::thread_tmp1025_fu_53406_p2() {
    tmp1025_fu_53406_p2 = (!z_V_51_8_v_cast_cast_cast_fu_53384_p3.read().is_01() || !z_V_51_7_v_cast_cast_fu_53377_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_51_8_v_cast_cast_cast_fu_53384_p3.read()) + sc_biguint<6>(z_V_51_7_v_cast_cast_fu_53377_p3.read()));
}

void Sobel_phase_strm::thread_tmp1026_fu_53416_p2() {
    tmp1026_fu_53416_p2 = (!z_V_51_6_v_cast_cast_fu_53370_p3.read().is_01() || !tmp1962_cast_fu_53412_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_51_6_v_cast_cast_fu_53370_p3.read()) + sc_bigint<7>(tmp1962_cast_fu_53412_p1.read()));
}

void Sobel_phase_strm::thread_tmp103_fu_47549_p2() {
    tmp103_fu_47549_p2 = (!z_V_5_5_v_cast_cast_fu_47521_p3.read().is_01() || !z_V_5_4_v_cast_cast_fu_47514_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_5_5_v_cast_cast_fu_47521_p3.read()) + sc_biguint<9>(z_V_5_4_v_cast_cast_fu_47514_p3.read()));
}

void Sobel_phase_strm::thread_tmp1043_fu_53518_p2() {
    tmp1043_fu_53518_p2 = (!z_V_52_5_v_cast_cast_fu_53490_p3.read().is_01() || !z_V_52_4_v_cast_cast_fu_53483_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_52_5_v_cast_cast_fu_53490_p3.read()) + sc_biguint<9>(z_V_52_4_v_cast_cast_fu_53483_p3.read()));
}

void Sobel_phase_strm::thread_tmp1044_fu_53528_p2() {
    tmp1044_fu_53528_p2 = (!z_V_52_3_reg_66317.read().is_01() || !tmp1964_cast_fu_53524_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_52_3_reg_66317.read()) + sc_bigint<13>(tmp1964_cast_fu_53524_p1.read()));
}

void Sobel_phase_strm::thread_tmp1045_fu_53533_p2() {
    tmp1045_fu_53533_p2 = (!z_V_52_8_v_cast_cast_cast_fu_53511_p3.read().is_01() || !z_V_52_7_v_cast_cast_fu_53504_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_52_8_v_cast_cast_cast_fu_53511_p3.read()) + sc_biguint<6>(z_V_52_7_v_cast_cast_fu_53504_p3.read()));
}

void Sobel_phase_strm::thread_tmp1046_fu_53543_p2() {
    tmp1046_fu_53543_p2 = (!z_V_52_6_v_cast_cast_fu_53497_p3.read().is_01() || !tmp1966_cast_fu_53539_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_52_6_v_cast_cast_fu_53497_p3.read()) + sc_bigint<7>(tmp1966_cast_fu_53539_p1.read()));
}

void Sobel_phase_strm::thread_tmp104_fu_47559_p2() {
    tmp104_fu_47559_p2 = (!z_V_5_3_reg_65377.read().is_01() || !tmp1776_cast_fu_47555_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_5_3_reg_65377.read()) + sc_bigint<13>(tmp1776_cast_fu_47555_p1.read()));
}

void Sobel_phase_strm::thread_tmp105_fu_47564_p2() {
    tmp105_fu_47564_p2 = (!z_V_5_8_v_cast_cast_cast_fu_47542_p3.read().is_01() || !z_V_5_7_v_cast_cast_fu_47535_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_5_8_v_cast_cast_cast_fu_47542_p3.read()) + sc_biguint<6>(z_V_5_7_v_cast_cast_fu_47535_p3.read()));
}

void Sobel_phase_strm::thread_tmp1063_fu_53645_p2() {
    tmp1063_fu_53645_p2 = (!z_V_53_5_v_cast_cast_fu_53617_p3.read().is_01() || !z_V_53_4_v_cast_cast_fu_53610_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_53_5_v_cast_cast_fu_53617_p3.read()) + sc_biguint<9>(z_V_53_4_v_cast_cast_fu_53610_p3.read()));
}

void Sobel_phase_strm::thread_tmp1064_fu_53655_p2() {
    tmp1064_fu_53655_p2 = (!z_V_53_3_reg_66337.read().is_01() || !tmp1968_cast_fu_53651_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_53_3_reg_66337.read()) + sc_bigint<13>(tmp1968_cast_fu_53651_p1.read()));
}

void Sobel_phase_strm::thread_tmp1065_fu_53660_p2() {
    tmp1065_fu_53660_p2 = (!z_V_53_8_v_cast_cast_cast_fu_53638_p3.read().is_01() || !z_V_53_7_v_cast_cast_fu_53631_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_53_8_v_cast_cast_cast_fu_53638_p3.read()) + sc_biguint<6>(z_V_53_7_v_cast_cast_fu_53631_p3.read()));
}

void Sobel_phase_strm::thread_tmp1066_fu_53670_p2() {
    tmp1066_fu_53670_p2 = (!z_V_53_6_v_cast_cast_fu_53624_p3.read().is_01() || !tmp1970_cast_fu_53666_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_53_6_v_cast_cast_fu_53624_p3.read()) + sc_bigint<7>(tmp1970_cast_fu_53666_p1.read()));
}

void Sobel_phase_strm::thread_tmp106_fu_47574_p2() {
    tmp106_fu_47574_p2 = (!z_V_5_6_v_cast_cast_fu_47528_p3.read().is_01() || !tmp1778_cast_fu_47570_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_5_6_v_cast_cast_fu_47528_p3.read()) + sc_bigint<7>(tmp1778_cast_fu_47570_p1.read()));
}

void Sobel_phase_strm::thread_tmp1083_fu_53772_p2() {
    tmp1083_fu_53772_p2 = (!z_V_54_5_v_cast_cast_fu_53744_p3.read().is_01() || !z_V_54_4_v_cast_cast_fu_53737_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_54_5_v_cast_cast_fu_53744_p3.read()) + sc_biguint<9>(z_V_54_4_v_cast_cast_fu_53737_p3.read()));
}

void Sobel_phase_strm::thread_tmp1084_fu_53782_p2() {
    tmp1084_fu_53782_p2 = (!z_V_54_3_reg_66357.read().is_01() || !tmp1972_cast_fu_53778_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_54_3_reg_66357.read()) + sc_bigint<13>(tmp1972_cast_fu_53778_p1.read()));
}

void Sobel_phase_strm::thread_tmp1085_fu_53787_p2() {
    tmp1085_fu_53787_p2 = (!z_V_54_8_v_cast_cast_cast_fu_53765_p3.read().is_01() || !z_V_54_7_v_cast_cast_fu_53758_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_54_8_v_cast_cast_cast_fu_53765_p3.read()) + sc_biguint<6>(z_V_54_7_v_cast_cast_fu_53758_p3.read()));
}

void Sobel_phase_strm::thread_tmp1086_fu_53797_p2() {
    tmp1086_fu_53797_p2 = (!z_V_54_6_v_cast_cast_fu_53751_p3.read().is_01() || !tmp1974_cast_fu_53793_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_54_6_v_cast_cast_fu_53751_p3.read()) + sc_bigint<7>(tmp1974_cast_fu_53793_p1.read()));
}

void Sobel_phase_strm::thread_tmp1103_fu_53899_p2() {
    tmp1103_fu_53899_p2 = (!z_V_55_5_v_cast_cast_fu_53871_p3.read().is_01() || !z_V_55_4_v_cast_cast_fu_53864_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_55_5_v_cast_cast_fu_53871_p3.read()) + sc_biguint<9>(z_V_55_4_v_cast_cast_fu_53864_p3.read()));
}

void Sobel_phase_strm::thread_tmp1104_fu_53909_p2() {
    tmp1104_fu_53909_p2 = (!z_V_55_3_reg_66377.read().is_01() || !tmp1976_cast_fu_53905_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_55_3_reg_66377.read()) + sc_bigint<13>(tmp1976_cast_fu_53905_p1.read()));
}

void Sobel_phase_strm::thread_tmp1105_fu_53914_p2() {
    tmp1105_fu_53914_p2 = (!z_V_55_8_v_cast_cast_cast_fu_53892_p3.read().is_01() || !z_V_55_7_v_cast_cast_fu_53885_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_55_8_v_cast_cast_cast_fu_53892_p3.read()) + sc_biguint<6>(z_V_55_7_v_cast_cast_fu_53885_p3.read()));
}

void Sobel_phase_strm::thread_tmp1106_fu_53924_p2() {
    tmp1106_fu_53924_p2 = (!z_V_55_6_v_cast_cast_fu_53878_p3.read().is_01() || !tmp1978_cast_fu_53920_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_55_6_v_cast_cast_fu_53878_p3.read()) + sc_bigint<7>(tmp1978_cast_fu_53920_p1.read()));
}

void Sobel_phase_strm::thread_tmp1123_fu_54026_p2() {
    tmp1123_fu_54026_p2 = (!z_V_56_5_v_cast_cast_fu_53998_p3.read().is_01() || !z_V_56_4_v_cast_cast_fu_53991_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_56_5_v_cast_cast_fu_53998_p3.read()) + sc_biguint<9>(z_V_56_4_v_cast_cast_fu_53991_p3.read()));
}

void Sobel_phase_strm::thread_tmp1124_fu_54036_p2() {
    tmp1124_fu_54036_p2 = (!z_V_56_3_reg_66397.read().is_01() || !tmp1980_cast_fu_54032_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_56_3_reg_66397.read()) + sc_bigint<13>(tmp1980_cast_fu_54032_p1.read()));
}

void Sobel_phase_strm::thread_tmp1125_fu_54041_p2() {
    tmp1125_fu_54041_p2 = (!z_V_56_8_v_cast_cast_cast_fu_54019_p3.read().is_01() || !z_V_56_7_v_cast_cast_fu_54012_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_56_8_v_cast_cast_cast_fu_54019_p3.read()) + sc_biguint<6>(z_V_56_7_v_cast_cast_fu_54012_p3.read()));
}

void Sobel_phase_strm::thread_tmp1126_fu_54051_p2() {
    tmp1126_fu_54051_p2 = (!z_V_56_6_v_cast_cast_fu_54005_p3.read().is_01() || !tmp1982_cast_fu_54047_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_56_6_v_cast_cast_fu_54005_p3.read()) + sc_bigint<7>(tmp1982_cast_fu_54047_p1.read()));
}

void Sobel_phase_strm::thread_tmp1143_fu_54153_p2() {
    tmp1143_fu_54153_p2 = (!z_V_57_5_v_cast_cast_fu_54125_p3.read().is_01() || !z_V_57_4_v_cast_cast_fu_54118_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_57_5_v_cast_cast_fu_54125_p3.read()) + sc_biguint<9>(z_V_57_4_v_cast_cast_fu_54118_p3.read()));
}

void Sobel_phase_strm::thread_tmp1144_fu_54163_p2() {
    tmp1144_fu_54163_p2 = (!z_V_57_3_reg_66417.read().is_01() || !tmp1984_cast_fu_54159_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_57_3_reg_66417.read()) + sc_bigint<13>(tmp1984_cast_fu_54159_p1.read()));
}

void Sobel_phase_strm::thread_tmp1145_fu_54168_p2() {
    tmp1145_fu_54168_p2 = (!z_V_57_8_v_cast_cast_cast_fu_54146_p3.read().is_01() || !z_V_57_7_v_cast_cast_fu_54139_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_57_8_v_cast_cast_cast_fu_54146_p3.read()) + sc_biguint<6>(z_V_57_7_v_cast_cast_fu_54139_p3.read()));
}

void Sobel_phase_strm::thread_tmp1146_fu_54178_p2() {
    tmp1146_fu_54178_p2 = (!z_V_57_6_v_cast_cast_fu_54132_p3.read().is_01() || !tmp1986_cast_fu_54174_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_57_6_v_cast_cast_fu_54132_p3.read()) + sc_bigint<7>(tmp1986_cast_fu_54174_p1.read()));
}

void Sobel_phase_strm::thread_tmp1163_fu_54280_p2() {
    tmp1163_fu_54280_p2 = (!z_V_58_5_v_cast_cast_fu_54252_p3.read().is_01() || !z_V_58_4_v_cast_cast_fu_54245_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_58_5_v_cast_cast_fu_54252_p3.read()) + sc_biguint<9>(z_V_58_4_v_cast_cast_fu_54245_p3.read()));
}

void Sobel_phase_strm::thread_tmp1164_fu_54290_p2() {
    tmp1164_fu_54290_p2 = (!z_V_58_3_reg_66437.read().is_01() || !tmp1988_cast_fu_54286_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_58_3_reg_66437.read()) + sc_bigint<13>(tmp1988_cast_fu_54286_p1.read()));
}

void Sobel_phase_strm::thread_tmp1165_fu_54295_p2() {
    tmp1165_fu_54295_p2 = (!z_V_58_8_v_cast_cast_cast_fu_54273_p3.read().is_01() || !z_V_58_7_v_cast_cast_fu_54266_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_58_8_v_cast_cast_cast_fu_54273_p3.read()) + sc_biguint<6>(z_V_58_7_v_cast_cast_fu_54266_p3.read()));
}

void Sobel_phase_strm::thread_tmp1166_fu_54305_p2() {
    tmp1166_fu_54305_p2 = (!z_V_58_6_v_cast_cast_fu_54259_p3.read().is_01() || !tmp1990_cast_fu_54301_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_58_6_v_cast_cast_fu_54259_p3.read()) + sc_bigint<7>(tmp1990_cast_fu_54301_p1.read()));
}

void Sobel_phase_strm::thread_tmp1183_fu_54407_p2() {
    tmp1183_fu_54407_p2 = (!z_V_59_5_v_cast_cast_fu_54379_p3.read().is_01() || !z_V_59_4_v_cast_cast_fu_54372_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_59_5_v_cast_cast_fu_54379_p3.read()) + sc_biguint<9>(z_V_59_4_v_cast_cast_fu_54372_p3.read()));
}

void Sobel_phase_strm::thread_tmp1184_fu_54417_p2() {
    tmp1184_fu_54417_p2 = (!z_V_59_3_reg_66457.read().is_01() || !tmp1992_cast_fu_54413_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_59_3_reg_66457.read()) + sc_bigint<13>(tmp1992_cast_fu_54413_p1.read()));
}

void Sobel_phase_strm::thread_tmp1185_fu_54422_p2() {
    tmp1185_fu_54422_p2 = (!z_V_59_8_v_cast_cast_cast_fu_54400_p3.read().is_01() || !z_V_59_7_v_cast_cast_fu_54393_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_59_8_v_cast_cast_cast_fu_54400_p3.read()) + sc_biguint<6>(z_V_59_7_v_cast_cast_fu_54393_p3.read()));
}

void Sobel_phase_strm::thread_tmp1186_fu_54432_p2() {
    tmp1186_fu_54432_p2 = (!z_V_59_6_v_cast_cast_fu_54386_p3.read().is_01() || !tmp1994_cast_fu_54428_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_59_6_v_cast_cast_fu_54386_p3.read()) + sc_bigint<7>(tmp1994_cast_fu_54428_p1.read()));
}

void Sobel_phase_strm::thread_tmp1203_fu_54534_p2() {
    tmp1203_fu_54534_p2 = (!z_V_60_5_v_cast_cast_fu_54506_p3.read().is_01() || !z_V_60_4_v_cast_cast_fu_54499_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_60_5_v_cast_cast_fu_54506_p3.read()) + sc_biguint<9>(z_V_60_4_v_cast_cast_fu_54499_p3.read()));
}

void Sobel_phase_strm::thread_tmp1204_fu_54544_p2() {
    tmp1204_fu_54544_p2 = (!z_V_60_3_reg_66477.read().is_01() || !tmp1996_cast_fu_54540_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_60_3_reg_66477.read()) + sc_bigint<13>(tmp1996_cast_fu_54540_p1.read()));
}

void Sobel_phase_strm::thread_tmp1205_fu_54549_p2() {
    tmp1205_fu_54549_p2 = (!z_V_60_8_v_cast_cast_cast_fu_54527_p3.read().is_01() || !z_V_60_7_v_cast_cast_fu_54520_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_60_8_v_cast_cast_cast_fu_54527_p3.read()) + sc_biguint<6>(z_V_60_7_v_cast_cast_fu_54520_p3.read()));
}

void Sobel_phase_strm::thread_tmp1206_fu_54559_p2() {
    tmp1206_fu_54559_p2 = (!z_V_60_6_v_cast_cast_fu_54513_p3.read().is_01() || !tmp1998_cast_fu_54555_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_60_6_v_cast_cast_fu_54513_p3.read()) + sc_bigint<7>(tmp1998_cast_fu_54555_p1.read()));
}

void Sobel_phase_strm::thread_tmp1223_fu_54661_p2() {
    tmp1223_fu_54661_p2 = (!z_V_61_5_v_cast_cast_fu_54633_p3.read().is_01() || !z_V_61_4_v_cast_cast_fu_54626_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_61_5_v_cast_cast_fu_54633_p3.read()) + sc_biguint<9>(z_V_61_4_v_cast_cast_fu_54626_p3.read()));
}

void Sobel_phase_strm::thread_tmp1224_fu_54671_p2() {
    tmp1224_fu_54671_p2 = (!z_V_61_3_reg_66497.read().is_01() || !tmp2000_cast_fu_54667_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_61_3_reg_66497.read()) + sc_bigint<13>(tmp2000_cast_fu_54667_p1.read()));
}

void Sobel_phase_strm::thread_tmp1225_fu_54676_p2() {
    tmp1225_fu_54676_p2 = (!z_V_61_8_v_cast_cast_cast_fu_54654_p3.read().is_01() || !z_V_61_7_v_cast_cast_fu_54647_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_61_8_v_cast_cast_cast_fu_54654_p3.read()) + sc_biguint<6>(z_V_61_7_v_cast_cast_fu_54647_p3.read()));
}

void Sobel_phase_strm::thread_tmp1226_fu_54686_p2() {
    tmp1226_fu_54686_p2 = (!z_V_61_6_v_cast_cast_fu_54640_p3.read().is_01() || !tmp2002_cast_fu_54682_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_61_6_v_cast_cast_fu_54640_p3.read()) + sc_bigint<7>(tmp2002_cast_fu_54682_p1.read()));
}

void Sobel_phase_strm::thread_tmp123_fu_47676_p2() {
    tmp123_fu_47676_p2 = (!z_V_6_5_v_cast_cast_fu_47648_p3.read().is_01() || !z_V_6_4_v_cast_cast_fu_47641_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_6_5_v_cast_cast_fu_47648_p3.read()) + sc_biguint<9>(z_V_6_4_v_cast_cast_fu_47641_p3.read()));
}

void Sobel_phase_strm::thread_tmp1243_fu_54788_p2() {
    tmp1243_fu_54788_p2 = (!z_V_62_5_v_cast_cast_fu_54760_p3.read().is_01() || !z_V_62_4_v_cast_cast_fu_54753_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_62_5_v_cast_cast_fu_54760_p3.read()) + sc_biguint<9>(z_V_62_4_v_cast_cast_fu_54753_p3.read()));
}

void Sobel_phase_strm::thread_tmp1244_fu_54798_p2() {
    tmp1244_fu_54798_p2 = (!z_V_62_3_reg_66517.read().is_01() || !tmp2004_cast_fu_54794_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_62_3_reg_66517.read()) + sc_bigint<13>(tmp2004_cast_fu_54794_p1.read()));
}

void Sobel_phase_strm::thread_tmp1245_fu_54803_p2() {
    tmp1245_fu_54803_p2 = (!z_V_62_8_v_cast_cast_cast_fu_54781_p3.read().is_01() || !z_V_62_7_v_cast_cast_fu_54774_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_62_8_v_cast_cast_cast_fu_54781_p3.read()) + sc_biguint<6>(z_V_62_7_v_cast_cast_fu_54774_p3.read()));
}

void Sobel_phase_strm::thread_tmp1246_fu_54813_p2() {
    tmp1246_fu_54813_p2 = (!z_V_62_6_v_cast_cast_fu_54767_p3.read().is_01() || !tmp2006_cast_fu_54809_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_62_6_v_cast_cast_fu_54767_p3.read()) + sc_bigint<7>(tmp2006_cast_fu_54809_p1.read()));
}

void Sobel_phase_strm::thread_tmp124_fu_47686_p2() {
    tmp124_fu_47686_p2 = (!z_V_6_3_reg_65397.read().is_01() || !tmp1780_cast_fu_47682_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_6_3_reg_65397.read()) + sc_bigint<13>(tmp1780_cast_fu_47682_p1.read()));
}

void Sobel_phase_strm::thread_tmp125_fu_47691_p2() {
    tmp125_fu_47691_p2 = (!z_V_6_8_v_cast_cast_cast_fu_47669_p3.read().is_01() || !z_V_6_7_v_cast_cast_fu_47662_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_6_8_v_cast_cast_cast_fu_47669_p3.read()) + sc_biguint<6>(z_V_6_7_v_cast_cast_fu_47662_p3.read()));
}

void Sobel_phase_strm::thread_tmp1263_fu_54915_p2() {
    tmp1263_fu_54915_p2 = (!z_V_63_5_v_cast_cast_fu_54887_p3.read().is_01() || !z_V_63_4_v_cast_cast_fu_54880_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_63_5_v_cast_cast_fu_54887_p3.read()) + sc_biguint<9>(z_V_63_4_v_cast_cast_fu_54880_p3.read()));
}

void Sobel_phase_strm::thread_tmp1264_fu_54925_p2() {
    tmp1264_fu_54925_p2 = (!z_V_63_3_reg_66537.read().is_01() || !tmp2008_cast_fu_54921_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_63_3_reg_66537.read()) + sc_bigint<13>(tmp2008_cast_fu_54921_p1.read()));
}

void Sobel_phase_strm::thread_tmp1265_fu_54930_p2() {
    tmp1265_fu_54930_p2 = (!z_V_63_8_v_cast_cast_cast_fu_54908_p3.read().is_01() || !z_V_63_7_v_cast_cast_fu_54901_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_63_8_v_cast_cast_cast_fu_54908_p3.read()) + sc_biguint<6>(z_V_63_7_v_cast_cast_fu_54901_p3.read()));
}

void Sobel_phase_strm::thread_tmp1266_fu_54940_p2() {
    tmp1266_fu_54940_p2 = (!z_V_63_6_v_cast_cast_fu_54894_p3.read().is_01() || !tmp2010_cast_fu_54936_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_63_6_v_cast_cast_fu_54894_p3.read()) + sc_bigint<7>(tmp2010_cast_fu_54936_p1.read()));
}

void Sobel_phase_strm::thread_tmp126_fu_47701_p2() {
    tmp126_fu_47701_p2 = (!z_V_6_6_v_cast_cast_fu_47655_p3.read().is_01() || !tmp1782_cast_fu_47697_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_6_6_v_cast_cast_fu_47655_p3.read()) + sc_bigint<7>(tmp1782_cast_fu_47697_p1.read()));
}

void Sobel_phase_strm::thread_tmp1283_fu_55042_p2() {
    tmp1283_fu_55042_p2 = (!z_V_64_5_v_cast_cast_fu_55014_p3.read().is_01() || !z_V_64_4_v_cast_cast_fu_55007_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_64_5_v_cast_cast_fu_55014_p3.read()) + sc_biguint<9>(z_V_64_4_v_cast_cast_fu_55007_p3.read()));
}

void Sobel_phase_strm::thread_tmp1284_fu_55052_p2() {
    tmp1284_fu_55052_p2 = (!z_V_64_3_reg_66557.read().is_01() || !tmp2012_cast_fu_55048_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_64_3_reg_66557.read()) + sc_bigint<13>(tmp2012_cast_fu_55048_p1.read()));
}

void Sobel_phase_strm::thread_tmp1285_fu_55057_p2() {
    tmp1285_fu_55057_p2 = (!z_V_64_8_v_cast_cast_cast_fu_55035_p3.read().is_01() || !z_V_64_7_v_cast_cast_fu_55028_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_64_8_v_cast_cast_cast_fu_55035_p3.read()) + sc_biguint<6>(z_V_64_7_v_cast_cast_fu_55028_p3.read()));
}

void Sobel_phase_strm::thread_tmp1286_fu_55067_p2() {
    tmp1286_fu_55067_p2 = (!z_V_64_6_v_cast_cast_fu_55021_p3.read().is_01() || !tmp2014_cast_fu_55063_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_64_6_v_cast_cast_fu_55021_p3.read()) + sc_bigint<7>(tmp2014_cast_fu_55063_p1.read()));
}

void Sobel_phase_strm::thread_tmp1303_fu_55169_p2() {
    tmp1303_fu_55169_p2 = (!z_V_65_5_v_cast_cast_fu_55141_p3.read().is_01() || !z_V_65_4_v_cast_cast_fu_55134_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_65_5_v_cast_cast_fu_55141_p3.read()) + sc_biguint<9>(z_V_65_4_v_cast_cast_fu_55134_p3.read()));
}

void Sobel_phase_strm::thread_tmp1304_fu_55179_p2() {
    tmp1304_fu_55179_p2 = (!z_V_65_3_reg_66577.read().is_01() || !tmp2016_cast_fu_55175_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_65_3_reg_66577.read()) + sc_bigint<13>(tmp2016_cast_fu_55175_p1.read()));
}

void Sobel_phase_strm::thread_tmp1305_fu_55184_p2() {
    tmp1305_fu_55184_p2 = (!z_V_65_8_v_cast_cast_cast_fu_55162_p3.read().is_01() || !z_V_65_7_v_cast_cast_fu_55155_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_65_8_v_cast_cast_cast_fu_55162_p3.read()) + sc_biguint<6>(z_V_65_7_v_cast_cast_fu_55155_p3.read()));
}

void Sobel_phase_strm::thread_tmp1306_fu_55194_p2() {
    tmp1306_fu_55194_p2 = (!z_V_65_6_v_cast_cast_fu_55148_p3.read().is_01() || !tmp2018_cast_fu_55190_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_65_6_v_cast_cast_fu_55148_p3.read()) + sc_bigint<7>(tmp2018_cast_fu_55190_p1.read()));
}

void Sobel_phase_strm::thread_tmp1323_fu_55296_p2() {
    tmp1323_fu_55296_p2 = (!z_V_66_5_v_cast_cast_fu_55268_p3.read().is_01() || !z_V_66_4_v_cast_cast_fu_55261_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_66_5_v_cast_cast_fu_55268_p3.read()) + sc_biguint<9>(z_V_66_4_v_cast_cast_fu_55261_p3.read()));
}

void Sobel_phase_strm::thread_tmp1324_fu_55306_p2() {
    tmp1324_fu_55306_p2 = (!z_V_66_3_reg_66597.read().is_01() || !tmp2020_cast_fu_55302_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_66_3_reg_66597.read()) + sc_bigint<13>(tmp2020_cast_fu_55302_p1.read()));
}

void Sobel_phase_strm::thread_tmp1325_fu_55311_p2() {
    tmp1325_fu_55311_p2 = (!z_V_66_8_v_cast_cast_cast_fu_55289_p3.read().is_01() || !z_V_66_7_v_cast_cast_fu_55282_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_66_8_v_cast_cast_cast_fu_55289_p3.read()) + sc_biguint<6>(z_V_66_7_v_cast_cast_fu_55282_p3.read()));
}

void Sobel_phase_strm::thread_tmp1326_fu_55321_p2() {
    tmp1326_fu_55321_p2 = (!z_V_66_6_v_cast_cast_fu_55275_p3.read().is_01() || !tmp2022_cast_fu_55317_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_66_6_v_cast_cast_fu_55275_p3.read()) + sc_bigint<7>(tmp2022_cast_fu_55317_p1.read()));
}

void Sobel_phase_strm::thread_tmp1343_fu_55423_p2() {
    tmp1343_fu_55423_p2 = (!z_V_67_5_v_cast_cast_fu_55395_p3.read().is_01() || !z_V_67_4_v_cast_cast_fu_55388_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_67_5_v_cast_cast_fu_55395_p3.read()) + sc_biguint<9>(z_V_67_4_v_cast_cast_fu_55388_p3.read()));
}

void Sobel_phase_strm::thread_tmp1344_fu_55433_p2() {
    tmp1344_fu_55433_p2 = (!z_V_67_3_reg_66617.read().is_01() || !tmp2024_cast_fu_55429_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_67_3_reg_66617.read()) + sc_bigint<13>(tmp2024_cast_fu_55429_p1.read()));
}

void Sobel_phase_strm::thread_tmp1345_fu_55438_p2() {
    tmp1345_fu_55438_p2 = (!z_V_67_8_v_cast_cast_cast_fu_55416_p3.read().is_01() || !z_V_67_7_v_cast_cast_fu_55409_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_67_8_v_cast_cast_cast_fu_55416_p3.read()) + sc_biguint<6>(z_V_67_7_v_cast_cast_fu_55409_p3.read()));
}

void Sobel_phase_strm::thread_tmp1346_fu_55448_p2() {
    tmp1346_fu_55448_p2 = (!z_V_67_6_v_cast_cast_fu_55402_p3.read().is_01() || !tmp2026_cast_fu_55444_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_67_6_v_cast_cast_fu_55402_p3.read()) + sc_bigint<7>(tmp2026_cast_fu_55444_p1.read()));
}

void Sobel_phase_strm::thread_tmp1363_fu_55550_p2() {
    tmp1363_fu_55550_p2 = (!z_V_68_5_v_cast_cast_fu_55522_p3.read().is_01() || !z_V_68_4_v_cast_cast_fu_55515_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_68_5_v_cast_cast_fu_55522_p3.read()) + sc_biguint<9>(z_V_68_4_v_cast_cast_fu_55515_p3.read()));
}

void Sobel_phase_strm::thread_tmp1364_fu_55560_p2() {
    tmp1364_fu_55560_p2 = (!z_V_68_3_reg_66637.read().is_01() || !tmp2028_cast_fu_55556_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_68_3_reg_66637.read()) + sc_bigint<13>(tmp2028_cast_fu_55556_p1.read()));
}

void Sobel_phase_strm::thread_tmp1365_fu_55565_p2() {
    tmp1365_fu_55565_p2 = (!z_V_68_8_v_cast_cast_cast_fu_55543_p3.read().is_01() || !z_V_68_7_v_cast_cast_fu_55536_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_68_8_v_cast_cast_cast_fu_55543_p3.read()) + sc_biguint<6>(z_V_68_7_v_cast_cast_fu_55536_p3.read()));
}

void Sobel_phase_strm::thread_tmp1366_fu_55575_p2() {
    tmp1366_fu_55575_p2 = (!z_V_68_6_v_cast_cast_fu_55529_p3.read().is_01() || !tmp2030_cast_fu_55571_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_68_6_v_cast_cast_fu_55529_p3.read()) + sc_bigint<7>(tmp2030_cast_fu_55571_p1.read()));
}

void Sobel_phase_strm::thread_tmp1383_fu_55677_p2() {
    tmp1383_fu_55677_p2 = (!z_V_69_5_v_cast_cast_fu_55649_p3.read().is_01() || !z_V_69_4_v_cast_cast_fu_55642_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_69_5_v_cast_cast_fu_55649_p3.read()) + sc_biguint<9>(z_V_69_4_v_cast_cast_fu_55642_p3.read()));
}

void Sobel_phase_strm::thread_tmp1384_fu_55687_p2() {
    tmp1384_fu_55687_p2 = (!z_V_69_3_reg_66657.read().is_01() || !tmp2032_cast_fu_55683_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_69_3_reg_66657.read()) + sc_bigint<13>(tmp2032_cast_fu_55683_p1.read()));
}

void Sobel_phase_strm::thread_tmp1385_fu_55692_p2() {
    tmp1385_fu_55692_p2 = (!z_V_69_8_v_cast_cast_cast_fu_55670_p3.read().is_01() || !z_V_69_7_v_cast_cast_fu_55663_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_69_8_v_cast_cast_cast_fu_55670_p3.read()) + sc_biguint<6>(z_V_69_7_v_cast_cast_fu_55663_p3.read()));
}

void Sobel_phase_strm::thread_tmp1386_fu_55702_p2() {
    tmp1386_fu_55702_p2 = (!z_V_69_6_v_cast_cast_fu_55656_p3.read().is_01() || !tmp2034_cast_fu_55698_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_69_6_v_cast_cast_fu_55656_p3.read()) + sc_bigint<7>(tmp2034_cast_fu_55698_p1.read()));
}

void Sobel_phase_strm::thread_tmp1403_fu_55804_p2() {
    tmp1403_fu_55804_p2 = (!z_V_70_5_v_cast_cast_fu_55776_p3.read().is_01() || !z_V_70_4_v_cast_cast_fu_55769_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_70_5_v_cast_cast_fu_55776_p3.read()) + sc_biguint<9>(z_V_70_4_v_cast_cast_fu_55769_p3.read()));
}

void Sobel_phase_strm::thread_tmp1404_fu_55814_p2() {
    tmp1404_fu_55814_p2 = (!z_V_70_3_reg_66677.read().is_01() || !tmp2036_cast_fu_55810_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_70_3_reg_66677.read()) + sc_bigint<13>(tmp2036_cast_fu_55810_p1.read()));
}

void Sobel_phase_strm::thread_tmp1405_fu_55819_p2() {
    tmp1405_fu_55819_p2 = (!z_V_70_8_v_cast_cast_cast_fu_55797_p3.read().is_01() || !z_V_70_7_v_cast_cast_fu_55790_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_70_8_v_cast_cast_cast_fu_55797_p3.read()) + sc_biguint<6>(z_V_70_7_v_cast_cast_fu_55790_p3.read()));
}

void Sobel_phase_strm::thread_tmp1406_fu_55829_p2() {
    tmp1406_fu_55829_p2 = (!z_V_70_6_v_cast_cast_fu_55783_p3.read().is_01() || !tmp2038_cast_fu_55825_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_70_6_v_cast_cast_fu_55783_p3.read()) + sc_bigint<7>(tmp2038_cast_fu_55825_p1.read()));
}

void Sobel_phase_strm::thread_tmp143_fu_47803_p2() {
    tmp143_fu_47803_p2 = (!z_V_7_5_v_cast_cast_fu_47775_p3.read().is_01() || !z_V_7_4_v_cast_cast_fu_47768_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_7_5_v_cast_cast_fu_47775_p3.read()) + sc_biguint<9>(z_V_7_4_v_cast_cast_fu_47768_p3.read()));
}

void Sobel_phase_strm::thread_tmp144_fu_47813_p2() {
    tmp144_fu_47813_p2 = (!z_V_7_3_reg_65417.read().is_01() || !tmp1784_cast_fu_47809_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_7_3_reg_65417.read()) + sc_bigint<13>(tmp1784_cast_fu_47809_p1.read()));
}

void Sobel_phase_strm::thread_tmp145_fu_47818_p2() {
    tmp145_fu_47818_p2 = (!z_V_7_8_v_cast_cast_cast_fu_47796_p3.read().is_01() || !z_V_7_7_v_cast_cast_fu_47789_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_7_8_v_cast_cast_cast_fu_47796_p3.read()) + sc_biguint<6>(z_V_7_7_v_cast_cast_fu_47789_p3.read()));
}

void Sobel_phase_strm::thread_tmp146_fu_47828_p2() {
    tmp146_fu_47828_p2 = (!z_V_7_6_v_cast_cast_fu_47782_p3.read().is_01() || !tmp1786_cast_fu_47824_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_7_6_v_cast_cast_fu_47782_p3.read()) + sc_bigint<7>(tmp1786_cast_fu_47824_p1.read()));
}

void Sobel_phase_strm::thread_tmp163_fu_47930_p2() {
    tmp163_fu_47930_p2 = (!z_V_8_5_v_cast_cast_fu_47902_p3.read().is_01() || !z_V_8_4_v_cast_cast_fu_47895_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_8_5_v_cast_cast_fu_47902_p3.read()) + sc_biguint<9>(z_V_8_4_v_cast_cast_fu_47895_p3.read()));
}

void Sobel_phase_strm::thread_tmp164_fu_47940_p2() {
    tmp164_fu_47940_p2 = (!z_V_8_3_reg_65437.read().is_01() || !tmp1788_cast_fu_47936_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_8_3_reg_65437.read()) + sc_bigint<13>(tmp1788_cast_fu_47936_p1.read()));
}

void Sobel_phase_strm::thread_tmp165_fu_47945_p2() {
    tmp165_fu_47945_p2 = (!z_V_8_8_v_cast_cast_cast_fu_47923_p3.read().is_01() || !z_V_8_7_v_cast_cast_fu_47916_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_8_8_v_cast_cast_cast_fu_47923_p3.read()) + sc_biguint<6>(z_V_8_7_v_cast_cast_fu_47916_p3.read()));
}

void Sobel_phase_strm::thread_tmp166_fu_47955_p2() {
    tmp166_fu_47955_p2 = (!z_V_8_6_v_cast_cast_fu_47909_p3.read().is_01() || !tmp1790_cast_fu_47951_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_8_6_v_cast_cast_fu_47909_p3.read()) + sc_bigint<7>(tmp1790_cast_fu_47951_p1.read()));
}

void Sobel_phase_strm::thread_tmp1756_cast_fu_46920_p1() {
    tmp1756_cast_fu_46920_p1 = esl_sext<13,9>(tmp9_fu_46914_p2.read());
}

void Sobel_phase_strm::thread_tmp1757_cast_fu_46945_p1() {
    tmp1757_cast_fu_46945_p1 = esl_sext<13,7>(tmp3_fu_46939_p2.read());
}

void Sobel_phase_strm::thread_tmp1758_cast_fu_46935_p1() {
    tmp1758_cast_fu_46935_p1 = esl_sext<7,6>(tmp2_fu_46929_p2.read());
}

void Sobel_phase_strm::thread_tmp1760_cast_fu_47047_p1() {
    tmp1760_cast_fu_47047_p1 = esl_sext<13,9>(tmp22_fu_47041_p2.read());
}

void Sobel_phase_strm::thread_tmp1761_cast_fu_47072_p1() {
    tmp1761_cast_fu_47072_p1 = esl_sext<13,7>(tmp25_fu_47066_p2.read());
}

void Sobel_phase_strm::thread_tmp1762_cast_fu_47062_p1() {
    tmp1762_cast_fu_47062_p1 = esl_sext<7,6>(tmp24_fu_47056_p2.read());
}

void Sobel_phase_strm::thread_tmp1764_cast_fu_47174_p1() {
    tmp1764_cast_fu_47174_p1 = esl_sext<13,9>(tmp43_fu_47168_p2.read());
}

void Sobel_phase_strm::thread_tmp1765_cast_fu_47199_p1() {
    tmp1765_cast_fu_47199_p1 = esl_sext<13,7>(tmp46_fu_47193_p2.read());
}

void Sobel_phase_strm::thread_tmp1766_cast_fu_47189_p1() {
    tmp1766_cast_fu_47189_p1 = esl_sext<7,6>(tmp45_fu_47183_p2.read());
}

void Sobel_phase_strm::thread_tmp1768_cast_fu_47301_p1() {
    tmp1768_cast_fu_47301_p1 = esl_sext<13,9>(tmp63_fu_47295_p2.read());
}

void Sobel_phase_strm::thread_tmp1769_cast_fu_47326_p1() {
    tmp1769_cast_fu_47326_p1 = esl_sext<13,7>(tmp66_fu_47320_p2.read());
}

void Sobel_phase_strm::thread_tmp1770_cast_fu_47316_p1() {
    tmp1770_cast_fu_47316_p1 = esl_sext<7,6>(tmp65_fu_47310_p2.read());
}

void Sobel_phase_strm::thread_tmp1772_cast_fu_47428_p1() {
    tmp1772_cast_fu_47428_p1 = esl_sext<13,9>(tmp83_fu_47422_p2.read());
}

void Sobel_phase_strm::thread_tmp1773_cast_fu_47453_p1() {
    tmp1773_cast_fu_47453_p1 = esl_sext<13,7>(tmp86_fu_47447_p2.read());
}

void Sobel_phase_strm::thread_tmp1774_cast_fu_47443_p1() {
    tmp1774_cast_fu_47443_p1 = esl_sext<7,6>(tmp85_fu_47437_p2.read());
}

void Sobel_phase_strm::thread_tmp1776_cast_fu_47555_p1() {
    tmp1776_cast_fu_47555_p1 = esl_sext<13,9>(tmp103_fu_47549_p2.read());
}

void Sobel_phase_strm::thread_tmp1777_cast_fu_47580_p1() {
    tmp1777_cast_fu_47580_p1 = esl_sext<13,7>(tmp106_fu_47574_p2.read());
}

void Sobel_phase_strm::thread_tmp1778_cast_fu_47570_p1() {
    tmp1778_cast_fu_47570_p1 = esl_sext<7,6>(tmp105_fu_47564_p2.read());
}

void Sobel_phase_strm::thread_tmp1780_cast_fu_47682_p1() {
    tmp1780_cast_fu_47682_p1 = esl_sext<13,9>(tmp123_fu_47676_p2.read());
}

void Sobel_phase_strm::thread_tmp1781_cast_fu_47707_p1() {
    tmp1781_cast_fu_47707_p1 = esl_sext<13,7>(tmp126_fu_47701_p2.read());
}

void Sobel_phase_strm::thread_tmp1782_cast_fu_47697_p1() {
    tmp1782_cast_fu_47697_p1 = esl_sext<7,6>(tmp125_fu_47691_p2.read());
}

void Sobel_phase_strm::thread_tmp1784_cast_fu_47809_p1() {
    tmp1784_cast_fu_47809_p1 = esl_sext<13,9>(tmp143_fu_47803_p2.read());
}

void Sobel_phase_strm::thread_tmp1785_cast_fu_47834_p1() {
    tmp1785_cast_fu_47834_p1 = esl_sext<13,7>(tmp146_fu_47828_p2.read());
}

void Sobel_phase_strm::thread_tmp1786_cast_fu_47824_p1() {
    tmp1786_cast_fu_47824_p1 = esl_sext<7,6>(tmp145_fu_47818_p2.read());
}

void Sobel_phase_strm::thread_tmp1788_cast_fu_47936_p1() {
    tmp1788_cast_fu_47936_p1 = esl_sext<13,9>(tmp163_fu_47930_p2.read());
}

void Sobel_phase_strm::thread_tmp1789_cast_fu_47961_p1() {
    tmp1789_cast_fu_47961_p1 = esl_sext<13,7>(tmp166_fu_47955_p2.read());
}

void Sobel_phase_strm::thread_tmp1790_cast_fu_47951_p1() {
    tmp1790_cast_fu_47951_p1 = esl_sext<7,6>(tmp165_fu_47945_p2.read());
}

void Sobel_phase_strm::thread_tmp1792_cast_fu_48063_p1() {
    tmp1792_cast_fu_48063_p1 = esl_sext<13,9>(tmp183_fu_48057_p2.read());
}

void Sobel_phase_strm::thread_tmp1793_cast_fu_48088_p1() {
    tmp1793_cast_fu_48088_p1 = esl_sext<13,7>(tmp186_fu_48082_p2.read());
}

void Sobel_phase_strm::thread_tmp1794_cast_fu_48078_p1() {
    tmp1794_cast_fu_48078_p1 = esl_sext<7,6>(tmp185_fu_48072_p2.read());
}

void Sobel_phase_strm::thread_tmp1796_cast_fu_48190_p1() {
    tmp1796_cast_fu_48190_p1 = esl_sext<13,9>(tmp203_fu_48184_p2.read());
}

void Sobel_phase_strm::thread_tmp1797_cast_fu_48215_p1() {
    tmp1797_cast_fu_48215_p1 = esl_sext<13,7>(tmp206_fu_48209_p2.read());
}

void Sobel_phase_strm::thread_tmp1798_cast_fu_48205_p1() {
    tmp1798_cast_fu_48205_p1 = esl_sext<7,6>(tmp205_fu_48199_p2.read());
}

void Sobel_phase_strm::thread_tmp1800_cast_fu_48317_p1() {
    tmp1800_cast_fu_48317_p1 = esl_sext<13,9>(tmp223_fu_48311_p2.read());
}

void Sobel_phase_strm::thread_tmp1801_cast_fu_48342_p1() {
    tmp1801_cast_fu_48342_p1 = esl_sext<13,7>(tmp226_fu_48336_p2.read());
}

void Sobel_phase_strm::thread_tmp1802_cast_fu_48332_p1() {
    tmp1802_cast_fu_48332_p1 = esl_sext<7,6>(tmp225_fu_48326_p2.read());
}

void Sobel_phase_strm::thread_tmp1804_cast_fu_48444_p1() {
    tmp1804_cast_fu_48444_p1 = esl_sext<13,9>(tmp243_fu_48438_p2.read());
}

void Sobel_phase_strm::thread_tmp1805_cast_fu_48469_p1() {
    tmp1805_cast_fu_48469_p1 = esl_sext<13,7>(tmp246_fu_48463_p2.read());
}

void Sobel_phase_strm::thread_tmp1806_cast_fu_48459_p1() {
    tmp1806_cast_fu_48459_p1 = esl_sext<7,6>(tmp245_fu_48453_p2.read());
}

void Sobel_phase_strm::thread_tmp1808_cast_fu_48571_p1() {
    tmp1808_cast_fu_48571_p1 = esl_sext<13,9>(tmp263_fu_48565_p2.read());
}

void Sobel_phase_strm::thread_tmp1809_cast_fu_48596_p1() {
    tmp1809_cast_fu_48596_p1 = esl_sext<13,7>(tmp266_fu_48590_p2.read());
}

void Sobel_phase_strm::thread_tmp1810_cast_fu_48586_p1() {
    tmp1810_cast_fu_48586_p1 = esl_sext<7,6>(tmp265_fu_48580_p2.read());
}

void Sobel_phase_strm::thread_tmp1812_cast_fu_48698_p1() {
    tmp1812_cast_fu_48698_p1 = esl_sext<13,9>(tmp283_fu_48692_p2.read());
}

void Sobel_phase_strm::thread_tmp1813_cast_fu_48723_p1() {
    tmp1813_cast_fu_48723_p1 = esl_sext<13,7>(tmp286_fu_48717_p2.read());
}

void Sobel_phase_strm::thread_tmp1814_cast_fu_48713_p1() {
    tmp1814_cast_fu_48713_p1 = esl_sext<7,6>(tmp285_fu_48707_p2.read());
}

void Sobel_phase_strm::thread_tmp1816_cast_fu_48825_p1() {
    tmp1816_cast_fu_48825_p1 = esl_sext<13,9>(tmp303_fu_48819_p2.read());
}

void Sobel_phase_strm::thread_tmp1817_cast_fu_48850_p1() {
    tmp1817_cast_fu_48850_p1 = esl_sext<13,7>(tmp306_fu_48844_p2.read());
}

void Sobel_phase_strm::thread_tmp1818_cast_fu_48840_p1() {
    tmp1818_cast_fu_48840_p1 = esl_sext<7,6>(tmp305_fu_48834_p2.read());
}

void Sobel_phase_strm::thread_tmp1820_cast_fu_48952_p1() {
    tmp1820_cast_fu_48952_p1 = esl_sext<13,9>(tmp323_fu_48946_p2.read());
}

void Sobel_phase_strm::thread_tmp1821_cast_fu_48977_p1() {
    tmp1821_cast_fu_48977_p1 = esl_sext<13,7>(tmp326_fu_48971_p2.read());
}

void Sobel_phase_strm::thread_tmp1822_cast_fu_48967_p1() {
    tmp1822_cast_fu_48967_p1 = esl_sext<7,6>(tmp325_fu_48961_p2.read());
}

void Sobel_phase_strm::thread_tmp1824_cast_fu_49079_p1() {
    tmp1824_cast_fu_49079_p1 = esl_sext<13,9>(tmp343_fu_49073_p2.read());
}

void Sobel_phase_strm::thread_tmp1825_cast_fu_49104_p1() {
    tmp1825_cast_fu_49104_p1 = esl_sext<13,7>(tmp346_fu_49098_p2.read());
}

void Sobel_phase_strm::thread_tmp1826_cast_fu_49094_p1() {
    tmp1826_cast_fu_49094_p1 = esl_sext<7,6>(tmp345_fu_49088_p2.read());
}

void Sobel_phase_strm::thread_tmp1828_cast_fu_49206_p1() {
    tmp1828_cast_fu_49206_p1 = esl_sext<13,9>(tmp363_fu_49200_p2.read());
}

void Sobel_phase_strm::thread_tmp1829_cast_fu_49231_p1() {
    tmp1829_cast_fu_49231_p1 = esl_sext<13,7>(tmp366_fu_49225_p2.read());
}

void Sobel_phase_strm::thread_tmp1830_cast_fu_49221_p1() {
    tmp1830_cast_fu_49221_p1 = esl_sext<7,6>(tmp365_fu_49215_p2.read());
}

void Sobel_phase_strm::thread_tmp1832_cast_fu_49333_p1() {
    tmp1832_cast_fu_49333_p1 = esl_sext<13,9>(tmp383_fu_49327_p2.read());
}

void Sobel_phase_strm::thread_tmp1833_cast_fu_49358_p1() {
    tmp1833_cast_fu_49358_p1 = esl_sext<13,7>(tmp386_fu_49352_p2.read());
}

void Sobel_phase_strm::thread_tmp1834_cast_fu_49348_p1() {
    tmp1834_cast_fu_49348_p1 = esl_sext<7,6>(tmp385_fu_49342_p2.read());
}

void Sobel_phase_strm::thread_tmp1836_cast_fu_49460_p1() {
    tmp1836_cast_fu_49460_p1 = esl_sext<13,9>(tmp403_fu_49454_p2.read());
}

void Sobel_phase_strm::thread_tmp1837_cast_fu_49485_p1() {
    tmp1837_cast_fu_49485_p1 = esl_sext<13,7>(tmp406_fu_49479_p2.read());
}

void Sobel_phase_strm::thread_tmp1838_cast_fu_49475_p1() {
    tmp1838_cast_fu_49475_p1 = esl_sext<7,6>(tmp405_fu_49469_p2.read());
}

void Sobel_phase_strm::thread_tmp183_fu_48057_p2() {
    tmp183_fu_48057_p2 = (!z_V_9_5_v_cast_cast_fu_48029_p3.read().is_01() || !z_V_9_4_v_cast_cast_fu_48022_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_9_5_v_cast_cast_fu_48029_p3.read()) + sc_biguint<9>(z_V_9_4_v_cast_cast_fu_48022_p3.read()));
}

void Sobel_phase_strm::thread_tmp1840_cast_fu_49587_p1() {
    tmp1840_cast_fu_49587_p1 = esl_sext<13,9>(tmp423_fu_49581_p2.read());
}

void Sobel_phase_strm::thread_tmp1841_cast_fu_49612_p1() {
    tmp1841_cast_fu_49612_p1 = esl_sext<13,7>(tmp426_fu_49606_p2.read());
}

void Sobel_phase_strm::thread_tmp1842_cast_fu_49602_p1() {
    tmp1842_cast_fu_49602_p1 = esl_sext<7,6>(tmp425_fu_49596_p2.read());
}

void Sobel_phase_strm::thread_tmp1844_cast_fu_49714_p1() {
    tmp1844_cast_fu_49714_p1 = esl_sext<13,9>(tmp443_fu_49708_p2.read());
}

void Sobel_phase_strm::thread_tmp1845_cast_fu_49739_p1() {
    tmp1845_cast_fu_49739_p1 = esl_sext<13,7>(tmp446_fu_49733_p2.read());
}

void Sobel_phase_strm::thread_tmp1846_cast_fu_49729_p1() {
    tmp1846_cast_fu_49729_p1 = esl_sext<7,6>(tmp445_fu_49723_p2.read());
}

void Sobel_phase_strm::thread_tmp1848_cast_fu_49841_p1() {
    tmp1848_cast_fu_49841_p1 = esl_sext<13,9>(tmp463_fu_49835_p2.read());
}

void Sobel_phase_strm::thread_tmp1849_cast_fu_49866_p1() {
    tmp1849_cast_fu_49866_p1 = esl_sext<13,7>(tmp466_fu_49860_p2.read());
}

void Sobel_phase_strm::thread_tmp184_fu_48067_p2() {
    tmp184_fu_48067_p2 = (!z_V_9_3_reg_65457.read().is_01() || !tmp1792_cast_fu_48063_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_9_3_reg_65457.read()) + sc_bigint<13>(tmp1792_cast_fu_48063_p1.read()));
}

void Sobel_phase_strm::thread_tmp1850_cast_fu_49856_p1() {
    tmp1850_cast_fu_49856_p1 = esl_sext<7,6>(tmp465_fu_49850_p2.read());
}

void Sobel_phase_strm::thread_tmp1852_cast_fu_49968_p1() {
    tmp1852_cast_fu_49968_p1 = esl_sext<13,9>(tmp483_fu_49962_p2.read());
}

void Sobel_phase_strm::thread_tmp1853_cast_fu_49993_p1() {
    tmp1853_cast_fu_49993_p1 = esl_sext<13,7>(tmp486_fu_49987_p2.read());
}

void Sobel_phase_strm::thread_tmp1854_cast_fu_49983_p1() {
    tmp1854_cast_fu_49983_p1 = esl_sext<7,6>(tmp485_fu_49977_p2.read());
}

void Sobel_phase_strm::thread_tmp1856_cast_fu_50095_p1() {
    tmp1856_cast_fu_50095_p1 = esl_sext<13,9>(tmp503_fu_50089_p2.read());
}

void Sobel_phase_strm::thread_tmp1857_cast_fu_50120_p1() {
    tmp1857_cast_fu_50120_p1 = esl_sext<13,7>(tmp506_fu_50114_p2.read());
}

void Sobel_phase_strm::thread_tmp1858_cast_fu_50110_p1() {
    tmp1858_cast_fu_50110_p1 = esl_sext<7,6>(tmp505_fu_50104_p2.read());
}

void Sobel_phase_strm::thread_tmp185_fu_48072_p2() {
    tmp185_fu_48072_p2 = (!z_V_9_8_v_cast_cast_cast_fu_48050_p3.read().is_01() || !z_V_9_7_v_cast_cast_fu_48043_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_9_8_v_cast_cast_cast_fu_48050_p3.read()) + sc_biguint<6>(z_V_9_7_v_cast_cast_fu_48043_p3.read()));
}

void Sobel_phase_strm::thread_tmp1860_cast_fu_50222_p1() {
    tmp1860_cast_fu_50222_p1 = esl_sext<13,9>(tmp523_fu_50216_p2.read());
}

void Sobel_phase_strm::thread_tmp1861_cast_fu_50247_p1() {
    tmp1861_cast_fu_50247_p1 = esl_sext<13,7>(tmp526_fu_50241_p2.read());
}

void Sobel_phase_strm::thread_tmp1862_cast_fu_50237_p1() {
    tmp1862_cast_fu_50237_p1 = esl_sext<7,6>(tmp525_fu_50231_p2.read());
}

void Sobel_phase_strm::thread_tmp1864_cast_fu_50349_p1() {
    tmp1864_cast_fu_50349_p1 = esl_sext<13,9>(tmp543_fu_50343_p2.read());
}

void Sobel_phase_strm::thread_tmp1865_cast_fu_50374_p1() {
    tmp1865_cast_fu_50374_p1 = esl_sext<13,7>(tmp546_fu_50368_p2.read());
}

void Sobel_phase_strm::thread_tmp1866_cast_fu_50364_p1() {
    tmp1866_cast_fu_50364_p1 = esl_sext<7,6>(tmp545_fu_50358_p2.read());
}

void Sobel_phase_strm::thread_tmp1868_cast_fu_50476_p1() {
    tmp1868_cast_fu_50476_p1 = esl_sext<13,9>(tmp563_fu_50470_p2.read());
}

void Sobel_phase_strm::thread_tmp1869_cast_fu_50501_p1() {
    tmp1869_cast_fu_50501_p1 = esl_sext<13,7>(tmp566_fu_50495_p2.read());
}

void Sobel_phase_strm::thread_tmp186_fu_48082_p2() {
    tmp186_fu_48082_p2 = (!z_V_9_6_v_cast_cast_fu_48036_p3.read().is_01() || !tmp1794_cast_fu_48078_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_9_6_v_cast_cast_fu_48036_p3.read()) + sc_bigint<7>(tmp1794_cast_fu_48078_p1.read()));
}

void Sobel_phase_strm::thread_tmp1870_cast_fu_50491_p1() {
    tmp1870_cast_fu_50491_p1 = esl_sext<7,6>(tmp565_fu_50485_p2.read());
}

void Sobel_phase_strm::thread_tmp1872_cast_fu_50603_p1() {
    tmp1872_cast_fu_50603_p1 = esl_sext<13,9>(tmp583_fu_50597_p2.read());
}

void Sobel_phase_strm::thread_tmp1873_cast_fu_50628_p1() {
    tmp1873_cast_fu_50628_p1 = esl_sext<13,7>(tmp586_fu_50622_p2.read());
}

void Sobel_phase_strm::thread_tmp1874_cast_fu_50618_p1() {
    tmp1874_cast_fu_50618_p1 = esl_sext<7,6>(tmp585_fu_50612_p2.read());
}

void Sobel_phase_strm::thread_tmp1876_cast_fu_50730_p1() {
    tmp1876_cast_fu_50730_p1 = esl_sext<13,9>(tmp603_fu_50724_p2.read());
}

void Sobel_phase_strm::thread_tmp1877_cast_fu_50755_p1() {
    tmp1877_cast_fu_50755_p1 = esl_sext<13,7>(tmp606_fu_50749_p2.read());
}

void Sobel_phase_strm::thread_tmp1878_cast_fu_50745_p1() {
    tmp1878_cast_fu_50745_p1 = esl_sext<7,6>(tmp605_fu_50739_p2.read());
}

void Sobel_phase_strm::thread_tmp1880_cast_fu_50857_p1() {
    tmp1880_cast_fu_50857_p1 = esl_sext<13,9>(tmp623_fu_50851_p2.read());
}

void Sobel_phase_strm::thread_tmp1881_cast_fu_50882_p1() {
    tmp1881_cast_fu_50882_p1 = esl_sext<13,7>(tmp626_fu_50876_p2.read());
}

void Sobel_phase_strm::thread_tmp1882_cast_fu_50872_p1() {
    tmp1882_cast_fu_50872_p1 = esl_sext<7,6>(tmp625_fu_50866_p2.read());
}

void Sobel_phase_strm::thread_tmp1884_cast_fu_50984_p1() {
    tmp1884_cast_fu_50984_p1 = esl_sext<13,9>(tmp643_fu_50978_p2.read());
}

void Sobel_phase_strm::thread_tmp1885_cast_fu_51009_p1() {
    tmp1885_cast_fu_51009_p1 = esl_sext<13,7>(tmp646_fu_51003_p2.read());
}

void Sobel_phase_strm::thread_tmp1886_cast_fu_50999_p1() {
    tmp1886_cast_fu_50999_p1 = esl_sext<7,6>(tmp645_fu_50993_p2.read());
}

void Sobel_phase_strm::thread_tmp1888_cast_fu_51111_p1() {
    tmp1888_cast_fu_51111_p1 = esl_sext<13,9>(tmp663_fu_51105_p2.read());
}

void Sobel_phase_strm::thread_tmp1889_cast_fu_51136_p1() {
    tmp1889_cast_fu_51136_p1 = esl_sext<13,7>(tmp666_fu_51130_p2.read());
}

void Sobel_phase_strm::thread_tmp1890_cast_fu_51126_p1() {
    tmp1890_cast_fu_51126_p1 = esl_sext<7,6>(tmp665_fu_51120_p2.read());
}

void Sobel_phase_strm::thread_tmp1892_cast_fu_51238_p1() {
    tmp1892_cast_fu_51238_p1 = esl_sext<13,9>(tmp683_fu_51232_p2.read());
}

void Sobel_phase_strm::thread_tmp1893_cast_fu_51263_p1() {
    tmp1893_cast_fu_51263_p1 = esl_sext<13,7>(tmp686_fu_51257_p2.read());
}

void Sobel_phase_strm::thread_tmp1894_cast_fu_51253_p1() {
    tmp1894_cast_fu_51253_p1 = esl_sext<7,6>(tmp685_fu_51247_p2.read());
}

void Sobel_phase_strm::thread_tmp1896_cast_fu_51365_p1() {
    tmp1896_cast_fu_51365_p1 = esl_sext<13,9>(tmp703_fu_51359_p2.read());
}

void Sobel_phase_strm::thread_tmp1897_cast_fu_51390_p1() {
    tmp1897_cast_fu_51390_p1 = esl_sext<13,7>(tmp706_fu_51384_p2.read());
}

void Sobel_phase_strm::thread_tmp1898_cast_fu_51380_p1() {
    tmp1898_cast_fu_51380_p1 = esl_sext<7,6>(tmp705_fu_51374_p2.read());
}

void Sobel_phase_strm::thread_tmp1900_cast_fu_51492_p1() {
    tmp1900_cast_fu_51492_p1 = esl_sext<13,9>(tmp723_fu_51486_p2.read());
}

void Sobel_phase_strm::thread_tmp1901_cast_fu_51517_p1() {
    tmp1901_cast_fu_51517_p1 = esl_sext<13,7>(tmp726_fu_51511_p2.read());
}

void Sobel_phase_strm::thread_tmp1902_cast_fu_51507_p1() {
    tmp1902_cast_fu_51507_p1 = esl_sext<7,6>(tmp725_fu_51501_p2.read());
}

void Sobel_phase_strm::thread_tmp1904_cast_fu_51619_p1() {
    tmp1904_cast_fu_51619_p1 = esl_sext<13,9>(tmp743_fu_51613_p2.read());
}

void Sobel_phase_strm::thread_tmp1905_cast_fu_51644_p1() {
    tmp1905_cast_fu_51644_p1 = esl_sext<13,7>(tmp746_fu_51638_p2.read());
}

void Sobel_phase_strm::thread_tmp1906_cast_fu_51634_p1() {
    tmp1906_cast_fu_51634_p1 = esl_sext<7,6>(tmp745_fu_51628_p2.read());
}

void Sobel_phase_strm::thread_tmp1908_cast_fu_51746_p1() {
    tmp1908_cast_fu_51746_p1 = esl_sext<13,9>(tmp763_fu_51740_p2.read());
}

void Sobel_phase_strm::thread_tmp1909_cast_fu_51771_p1() {
    tmp1909_cast_fu_51771_p1 = esl_sext<13,7>(tmp766_fu_51765_p2.read());
}

void Sobel_phase_strm::thread_tmp1910_cast_fu_51761_p1() {
    tmp1910_cast_fu_51761_p1 = esl_sext<7,6>(tmp765_fu_51755_p2.read());
}

void Sobel_phase_strm::thread_tmp1912_cast_fu_51873_p1() {
    tmp1912_cast_fu_51873_p1 = esl_sext<13,9>(tmp783_fu_51867_p2.read());
}

void Sobel_phase_strm::thread_tmp1913_cast_fu_51898_p1() {
    tmp1913_cast_fu_51898_p1 = esl_sext<13,7>(tmp786_fu_51892_p2.read());
}

void Sobel_phase_strm::thread_tmp1914_cast_fu_51888_p1() {
    tmp1914_cast_fu_51888_p1 = esl_sext<7,6>(tmp785_fu_51882_p2.read());
}

void Sobel_phase_strm::thread_tmp1916_cast_fu_52000_p1() {
    tmp1916_cast_fu_52000_p1 = esl_sext<13,9>(tmp803_fu_51994_p2.read());
}

void Sobel_phase_strm::thread_tmp1917_cast_fu_52025_p1() {
    tmp1917_cast_fu_52025_p1 = esl_sext<13,7>(tmp806_fu_52019_p2.read());
}

void Sobel_phase_strm::thread_tmp1918_cast_fu_52015_p1() {
    tmp1918_cast_fu_52015_p1 = esl_sext<7,6>(tmp805_fu_52009_p2.read());
}

void Sobel_phase_strm::thread_tmp1920_cast_fu_52127_p1() {
    tmp1920_cast_fu_52127_p1 = esl_sext<13,9>(tmp823_fu_52121_p2.read());
}

void Sobel_phase_strm::thread_tmp1921_cast_fu_52152_p1() {
    tmp1921_cast_fu_52152_p1 = esl_sext<13,7>(tmp826_fu_52146_p2.read());
}

void Sobel_phase_strm::thread_tmp1922_cast_fu_52142_p1() {
    tmp1922_cast_fu_52142_p1 = esl_sext<7,6>(tmp825_fu_52136_p2.read());
}

void Sobel_phase_strm::thread_tmp1924_cast_fu_52254_p1() {
    tmp1924_cast_fu_52254_p1 = esl_sext<13,9>(tmp843_fu_52248_p2.read());
}

void Sobel_phase_strm::thread_tmp1925_cast_fu_52279_p1() {
    tmp1925_cast_fu_52279_p1 = esl_sext<13,7>(tmp846_fu_52273_p2.read());
}

void Sobel_phase_strm::thread_tmp1926_cast_fu_52269_p1() {
    tmp1926_cast_fu_52269_p1 = esl_sext<7,6>(tmp845_fu_52263_p2.read());
}

void Sobel_phase_strm::thread_tmp1928_cast_fu_52381_p1() {
    tmp1928_cast_fu_52381_p1 = esl_sext<13,9>(tmp863_fu_52375_p2.read());
}

void Sobel_phase_strm::thread_tmp1929_cast_fu_52406_p1() {
    tmp1929_cast_fu_52406_p1 = esl_sext<13,7>(tmp866_fu_52400_p2.read());
}

void Sobel_phase_strm::thread_tmp1930_cast_fu_52396_p1() {
    tmp1930_cast_fu_52396_p1 = esl_sext<7,6>(tmp865_fu_52390_p2.read());
}

void Sobel_phase_strm::thread_tmp1932_cast_fu_52508_p1() {
    tmp1932_cast_fu_52508_p1 = esl_sext<13,9>(tmp883_fu_52502_p2.read());
}

void Sobel_phase_strm::thread_tmp1933_cast_fu_52533_p1() {
    tmp1933_cast_fu_52533_p1 = esl_sext<13,7>(tmp886_fu_52527_p2.read());
}

void Sobel_phase_strm::thread_tmp1934_cast_fu_52523_p1() {
    tmp1934_cast_fu_52523_p1 = esl_sext<7,6>(tmp885_fu_52517_p2.read());
}

void Sobel_phase_strm::thread_tmp1936_cast_fu_52635_p1() {
    tmp1936_cast_fu_52635_p1 = esl_sext<13,9>(tmp903_fu_52629_p2.read());
}

void Sobel_phase_strm::thread_tmp1937_cast_fu_52660_p1() {
    tmp1937_cast_fu_52660_p1 = esl_sext<13,7>(tmp906_fu_52654_p2.read());
}

void Sobel_phase_strm::thread_tmp1938_cast_fu_52650_p1() {
    tmp1938_cast_fu_52650_p1 = esl_sext<7,6>(tmp905_fu_52644_p2.read());
}

void Sobel_phase_strm::thread_tmp1940_cast_fu_52762_p1() {
    tmp1940_cast_fu_52762_p1 = esl_sext<13,9>(tmp923_fu_52756_p2.read());
}

void Sobel_phase_strm::thread_tmp1941_cast_fu_52787_p1() {
    tmp1941_cast_fu_52787_p1 = esl_sext<13,7>(tmp926_fu_52781_p2.read());
}

void Sobel_phase_strm::thread_tmp1942_cast_fu_52777_p1() {
    tmp1942_cast_fu_52777_p1 = esl_sext<7,6>(tmp925_fu_52771_p2.read());
}

void Sobel_phase_strm::thread_tmp1944_cast_fu_52889_p1() {
    tmp1944_cast_fu_52889_p1 = esl_sext<13,9>(tmp943_fu_52883_p2.read());
}

void Sobel_phase_strm::thread_tmp1945_cast_fu_52914_p1() {
    tmp1945_cast_fu_52914_p1 = esl_sext<13,7>(tmp946_fu_52908_p2.read());
}

void Sobel_phase_strm::thread_tmp1946_cast_fu_52904_p1() {
    tmp1946_cast_fu_52904_p1 = esl_sext<7,6>(tmp945_fu_52898_p2.read());
}

void Sobel_phase_strm::thread_tmp1948_cast_fu_53016_p1() {
    tmp1948_cast_fu_53016_p1 = esl_sext<13,9>(tmp963_fu_53010_p2.read());
}

void Sobel_phase_strm::thread_tmp1949_cast_fu_53041_p1() {
    tmp1949_cast_fu_53041_p1 = esl_sext<13,7>(tmp966_fu_53035_p2.read());
}

void Sobel_phase_strm::thread_tmp1950_cast_fu_53031_p1() {
    tmp1950_cast_fu_53031_p1 = esl_sext<7,6>(tmp965_fu_53025_p2.read());
}

void Sobel_phase_strm::thread_tmp1952_cast_fu_53143_p1() {
    tmp1952_cast_fu_53143_p1 = esl_sext<13,9>(tmp983_fu_53137_p2.read());
}

void Sobel_phase_strm::thread_tmp1953_cast_fu_53168_p1() {
    tmp1953_cast_fu_53168_p1 = esl_sext<13,7>(tmp986_fu_53162_p2.read());
}

void Sobel_phase_strm::thread_tmp1954_cast_fu_53158_p1() {
    tmp1954_cast_fu_53158_p1 = esl_sext<7,6>(tmp985_fu_53152_p2.read());
}

void Sobel_phase_strm::thread_tmp1956_cast_fu_53270_p1() {
    tmp1956_cast_fu_53270_p1 = esl_sext<13,9>(tmp1003_fu_53264_p2.read());
}

void Sobel_phase_strm::thread_tmp1957_cast_fu_53295_p1() {
    tmp1957_cast_fu_53295_p1 = esl_sext<13,7>(tmp1006_fu_53289_p2.read());
}

void Sobel_phase_strm::thread_tmp1958_cast_fu_53285_p1() {
    tmp1958_cast_fu_53285_p1 = esl_sext<7,6>(tmp1005_fu_53279_p2.read());
}

void Sobel_phase_strm::thread_tmp1960_cast_fu_53397_p1() {
    tmp1960_cast_fu_53397_p1 = esl_sext<13,9>(tmp1023_fu_53391_p2.read());
}

void Sobel_phase_strm::thread_tmp1961_cast_fu_53422_p1() {
    tmp1961_cast_fu_53422_p1 = esl_sext<13,7>(tmp1026_fu_53416_p2.read());
}

void Sobel_phase_strm::thread_tmp1962_cast_fu_53412_p1() {
    tmp1962_cast_fu_53412_p1 = esl_sext<7,6>(tmp1025_fu_53406_p2.read());
}

void Sobel_phase_strm::thread_tmp1964_cast_fu_53524_p1() {
    tmp1964_cast_fu_53524_p1 = esl_sext<13,9>(tmp1043_fu_53518_p2.read());
}

void Sobel_phase_strm::thread_tmp1965_cast_fu_53549_p1() {
    tmp1965_cast_fu_53549_p1 = esl_sext<13,7>(tmp1046_fu_53543_p2.read());
}

void Sobel_phase_strm::thread_tmp1966_cast_fu_53539_p1() {
    tmp1966_cast_fu_53539_p1 = esl_sext<7,6>(tmp1045_fu_53533_p2.read());
}

void Sobel_phase_strm::thread_tmp1968_cast_fu_53651_p1() {
    tmp1968_cast_fu_53651_p1 = esl_sext<13,9>(tmp1063_fu_53645_p2.read());
}

void Sobel_phase_strm::thread_tmp1969_cast_fu_53676_p1() {
    tmp1969_cast_fu_53676_p1 = esl_sext<13,7>(tmp1066_fu_53670_p2.read());
}

void Sobel_phase_strm::thread_tmp1970_cast_fu_53666_p1() {
    tmp1970_cast_fu_53666_p1 = esl_sext<7,6>(tmp1065_fu_53660_p2.read());
}

void Sobel_phase_strm::thread_tmp1972_cast_fu_53778_p1() {
    tmp1972_cast_fu_53778_p1 = esl_sext<13,9>(tmp1083_fu_53772_p2.read());
}

void Sobel_phase_strm::thread_tmp1973_cast_fu_53803_p1() {
    tmp1973_cast_fu_53803_p1 = esl_sext<13,7>(tmp1086_fu_53797_p2.read());
}

void Sobel_phase_strm::thread_tmp1974_cast_fu_53793_p1() {
    tmp1974_cast_fu_53793_p1 = esl_sext<7,6>(tmp1085_fu_53787_p2.read());
}

void Sobel_phase_strm::thread_tmp1976_cast_fu_53905_p1() {
    tmp1976_cast_fu_53905_p1 = esl_sext<13,9>(tmp1103_fu_53899_p2.read());
}

void Sobel_phase_strm::thread_tmp1977_cast_fu_53930_p1() {
    tmp1977_cast_fu_53930_p1 = esl_sext<13,7>(tmp1106_fu_53924_p2.read());
}

void Sobel_phase_strm::thread_tmp1978_cast_fu_53920_p1() {
    tmp1978_cast_fu_53920_p1 = esl_sext<7,6>(tmp1105_fu_53914_p2.read());
}

void Sobel_phase_strm::thread_tmp1980_cast_fu_54032_p1() {
    tmp1980_cast_fu_54032_p1 = esl_sext<13,9>(tmp1123_fu_54026_p2.read());
}

void Sobel_phase_strm::thread_tmp1981_cast_fu_54057_p1() {
    tmp1981_cast_fu_54057_p1 = esl_sext<13,7>(tmp1126_fu_54051_p2.read());
}

void Sobel_phase_strm::thread_tmp1982_cast_fu_54047_p1() {
    tmp1982_cast_fu_54047_p1 = esl_sext<7,6>(tmp1125_fu_54041_p2.read());
}

void Sobel_phase_strm::thread_tmp1984_cast_fu_54159_p1() {
    tmp1984_cast_fu_54159_p1 = esl_sext<13,9>(tmp1143_fu_54153_p2.read());
}

void Sobel_phase_strm::thread_tmp1985_cast_fu_54184_p1() {
    tmp1985_cast_fu_54184_p1 = esl_sext<13,7>(tmp1146_fu_54178_p2.read());
}

void Sobel_phase_strm::thread_tmp1986_cast_fu_54174_p1() {
    tmp1986_cast_fu_54174_p1 = esl_sext<7,6>(tmp1145_fu_54168_p2.read());
}

void Sobel_phase_strm::thread_tmp1988_cast_fu_54286_p1() {
    tmp1988_cast_fu_54286_p1 = esl_sext<13,9>(tmp1163_fu_54280_p2.read());
}

void Sobel_phase_strm::thread_tmp1989_cast_fu_54311_p1() {
    tmp1989_cast_fu_54311_p1 = esl_sext<13,7>(tmp1166_fu_54305_p2.read());
}

void Sobel_phase_strm::thread_tmp1990_cast_fu_54301_p1() {
    tmp1990_cast_fu_54301_p1 = esl_sext<7,6>(tmp1165_fu_54295_p2.read());
}

void Sobel_phase_strm::thread_tmp1992_cast_fu_54413_p1() {
    tmp1992_cast_fu_54413_p1 = esl_sext<13,9>(tmp1183_fu_54407_p2.read());
}

void Sobel_phase_strm::thread_tmp1993_cast_fu_54438_p1() {
    tmp1993_cast_fu_54438_p1 = esl_sext<13,7>(tmp1186_fu_54432_p2.read());
}

void Sobel_phase_strm::thread_tmp1994_cast_fu_54428_p1() {
    tmp1994_cast_fu_54428_p1 = esl_sext<7,6>(tmp1185_fu_54422_p2.read());
}

void Sobel_phase_strm::thread_tmp1996_cast_fu_54540_p1() {
    tmp1996_cast_fu_54540_p1 = esl_sext<13,9>(tmp1203_fu_54534_p2.read());
}

void Sobel_phase_strm::thread_tmp1997_cast_fu_54565_p1() {
    tmp1997_cast_fu_54565_p1 = esl_sext<13,7>(tmp1206_fu_54559_p2.read());
}

void Sobel_phase_strm::thread_tmp1998_cast_fu_54555_p1() {
    tmp1998_cast_fu_54555_p1 = esl_sext<7,6>(tmp1205_fu_54549_p2.read());
}

void Sobel_phase_strm::thread_tmp1_fu_46924_p2() {
    tmp1_fu_46924_p2 = (!z_V_0_3_reg_65277.read().is_01() || !tmp1756_cast_fu_46920_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_0_3_reg_65277.read()) + sc_bigint<13>(tmp1756_cast_fu_46920_p1.read()));
}

void Sobel_phase_strm::thread_tmp2000_cast_fu_54667_p1() {
    tmp2000_cast_fu_54667_p1 = esl_sext<13,9>(tmp1223_fu_54661_p2.read());
}

void Sobel_phase_strm::thread_tmp2001_cast_fu_54692_p1() {
    tmp2001_cast_fu_54692_p1 = esl_sext<13,7>(tmp1226_fu_54686_p2.read());
}

void Sobel_phase_strm::thread_tmp2002_cast_fu_54682_p1() {
    tmp2002_cast_fu_54682_p1 = esl_sext<7,6>(tmp1225_fu_54676_p2.read());
}

void Sobel_phase_strm::thread_tmp2004_cast_fu_54794_p1() {
    tmp2004_cast_fu_54794_p1 = esl_sext<13,9>(tmp1243_fu_54788_p2.read());
}

void Sobel_phase_strm::thread_tmp2005_cast_fu_54819_p1() {
    tmp2005_cast_fu_54819_p1 = esl_sext<13,7>(tmp1246_fu_54813_p2.read());
}

void Sobel_phase_strm::thread_tmp2006_cast_fu_54809_p1() {
    tmp2006_cast_fu_54809_p1 = esl_sext<7,6>(tmp1245_fu_54803_p2.read());
}

void Sobel_phase_strm::thread_tmp2008_cast_fu_54921_p1() {
    tmp2008_cast_fu_54921_p1 = esl_sext<13,9>(tmp1263_fu_54915_p2.read());
}

void Sobel_phase_strm::thread_tmp2009_cast_fu_54946_p1() {
    tmp2009_cast_fu_54946_p1 = esl_sext<13,7>(tmp1266_fu_54940_p2.read());
}

void Sobel_phase_strm::thread_tmp2010_cast_fu_54936_p1() {
    tmp2010_cast_fu_54936_p1 = esl_sext<7,6>(tmp1265_fu_54930_p2.read());
}

void Sobel_phase_strm::thread_tmp2012_cast_fu_55048_p1() {
    tmp2012_cast_fu_55048_p1 = esl_sext<13,9>(tmp1283_fu_55042_p2.read());
}

void Sobel_phase_strm::thread_tmp2013_cast_fu_55073_p1() {
    tmp2013_cast_fu_55073_p1 = esl_sext<13,7>(tmp1286_fu_55067_p2.read());
}

void Sobel_phase_strm::thread_tmp2014_cast_fu_55063_p1() {
    tmp2014_cast_fu_55063_p1 = esl_sext<7,6>(tmp1285_fu_55057_p2.read());
}

void Sobel_phase_strm::thread_tmp2016_cast_fu_55175_p1() {
    tmp2016_cast_fu_55175_p1 = esl_sext<13,9>(tmp1303_fu_55169_p2.read());
}

void Sobel_phase_strm::thread_tmp2017_cast_fu_55200_p1() {
    tmp2017_cast_fu_55200_p1 = esl_sext<13,7>(tmp1306_fu_55194_p2.read());
}

void Sobel_phase_strm::thread_tmp2018_cast_fu_55190_p1() {
    tmp2018_cast_fu_55190_p1 = esl_sext<7,6>(tmp1305_fu_55184_p2.read());
}

void Sobel_phase_strm::thread_tmp2020_cast_fu_55302_p1() {
    tmp2020_cast_fu_55302_p1 = esl_sext<13,9>(tmp1323_fu_55296_p2.read());
}

void Sobel_phase_strm::thread_tmp2021_cast_fu_55327_p1() {
    tmp2021_cast_fu_55327_p1 = esl_sext<13,7>(tmp1326_fu_55321_p2.read());
}

void Sobel_phase_strm::thread_tmp2022_cast_fu_55317_p1() {
    tmp2022_cast_fu_55317_p1 = esl_sext<7,6>(tmp1325_fu_55311_p2.read());
}

void Sobel_phase_strm::thread_tmp2024_cast_fu_55429_p1() {
    tmp2024_cast_fu_55429_p1 = esl_sext<13,9>(tmp1343_fu_55423_p2.read());
}

void Sobel_phase_strm::thread_tmp2025_cast_fu_55454_p1() {
    tmp2025_cast_fu_55454_p1 = esl_sext<13,7>(tmp1346_fu_55448_p2.read());
}

void Sobel_phase_strm::thread_tmp2026_cast_fu_55444_p1() {
    tmp2026_cast_fu_55444_p1 = esl_sext<7,6>(tmp1345_fu_55438_p2.read());
}

void Sobel_phase_strm::thread_tmp2028_cast_fu_55556_p1() {
    tmp2028_cast_fu_55556_p1 = esl_sext<13,9>(tmp1363_fu_55550_p2.read());
}

void Sobel_phase_strm::thread_tmp2029_cast_fu_55581_p1() {
    tmp2029_cast_fu_55581_p1 = esl_sext<13,7>(tmp1366_fu_55575_p2.read());
}

void Sobel_phase_strm::thread_tmp2030_cast_fu_55571_p1() {
    tmp2030_cast_fu_55571_p1 = esl_sext<7,6>(tmp1365_fu_55565_p2.read());
}

void Sobel_phase_strm::thread_tmp2032_cast_fu_55683_p1() {
    tmp2032_cast_fu_55683_p1 = esl_sext<13,9>(tmp1383_fu_55677_p2.read());
}

void Sobel_phase_strm::thread_tmp2033_cast_fu_55708_p1() {
    tmp2033_cast_fu_55708_p1 = esl_sext<13,7>(tmp1386_fu_55702_p2.read());
}

void Sobel_phase_strm::thread_tmp2034_cast_fu_55698_p1() {
    tmp2034_cast_fu_55698_p1 = esl_sext<7,6>(tmp1385_fu_55692_p2.read());
}

void Sobel_phase_strm::thread_tmp2036_cast_fu_55810_p1() {
    tmp2036_cast_fu_55810_p1 = esl_sext<13,9>(tmp1403_fu_55804_p2.read());
}

void Sobel_phase_strm::thread_tmp2037_cast_fu_55835_p1() {
    tmp2037_cast_fu_55835_p1 = esl_sext<13,7>(tmp1406_fu_55829_p2.read());
}

void Sobel_phase_strm::thread_tmp2038_cast_fu_55825_p1() {
    tmp2038_cast_fu_55825_p1 = esl_sext<7,6>(tmp1405_fu_55819_p2.read());
}

void Sobel_phase_strm::thread_tmp203_fu_48184_p2() {
    tmp203_fu_48184_p2 = (!z_V_10_5_v_cast_cast_fu_48156_p3.read().is_01() || !z_V_10_4_v_cast_cast_fu_48149_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_10_5_v_cast_cast_fu_48156_p3.read()) + sc_biguint<9>(z_V_10_4_v_cast_cast_fu_48149_p3.read()));
}

void Sobel_phase_strm::thread_tmp204_fu_48194_p2() {
    tmp204_fu_48194_p2 = (!z_V_10_3_reg_65477.read().is_01() || !tmp1796_cast_fu_48190_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_10_3_reg_65477.read()) + sc_bigint<13>(tmp1796_cast_fu_48190_p1.read()));
}

void Sobel_phase_strm::thread_tmp205_fu_48199_p2() {
    tmp205_fu_48199_p2 = (!z_V_10_8_v_cast_cast_cast_fu_48177_p3.read().is_01() || !z_V_10_7_v_cast_cast_fu_48170_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_10_8_v_cast_cast_cast_fu_48177_p3.read()) + sc_biguint<6>(z_V_10_7_v_cast_cast_fu_48170_p3.read()));
}

void Sobel_phase_strm::thread_tmp206_fu_48209_p2() {
    tmp206_fu_48209_p2 = (!z_V_10_6_v_cast_cast_fu_48163_p3.read().is_01() || !tmp1798_cast_fu_48205_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_10_6_v_cast_cast_fu_48163_p3.read()) + sc_bigint<7>(tmp1798_cast_fu_48205_p1.read()));
}

void Sobel_phase_strm::thread_tmp223_fu_48311_p2() {
    tmp223_fu_48311_p2 = (!z_V_11_5_v_cast_cast_fu_48283_p3.read().is_01() || !z_V_11_4_v_cast_cast_fu_48276_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_11_5_v_cast_cast_fu_48283_p3.read()) + sc_biguint<9>(z_V_11_4_v_cast_cast_fu_48276_p3.read()));
}

void Sobel_phase_strm::thread_tmp224_fu_48321_p2() {
    tmp224_fu_48321_p2 = (!z_V_11_3_reg_65497.read().is_01() || !tmp1800_cast_fu_48317_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_11_3_reg_65497.read()) + sc_bigint<13>(tmp1800_cast_fu_48317_p1.read()));
}

void Sobel_phase_strm::thread_tmp225_fu_48326_p2() {
    tmp225_fu_48326_p2 = (!z_V_11_8_v_cast_cast_cast_fu_48304_p3.read().is_01() || !z_V_11_7_v_cast_cast_fu_48297_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_11_8_v_cast_cast_cast_fu_48304_p3.read()) + sc_biguint<6>(z_V_11_7_v_cast_cast_fu_48297_p3.read()));
}

void Sobel_phase_strm::thread_tmp226_fu_48336_p2() {
    tmp226_fu_48336_p2 = (!z_V_11_6_v_cast_cast_fu_48290_p3.read().is_01() || !tmp1802_cast_fu_48332_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_11_6_v_cast_cast_fu_48290_p3.read()) + sc_bigint<7>(tmp1802_cast_fu_48332_p1.read()));
}

void Sobel_phase_strm::thread_tmp22_fu_47041_p2() {
    tmp22_fu_47041_p2 = (!z_V_1_5_v_cast_cast_fu_47013_p3.read().is_01() || !z_V_1_4_v_cast_cast_fu_47006_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_1_5_v_cast_cast_fu_47013_p3.read()) + sc_biguint<9>(z_V_1_4_v_cast_cast_fu_47006_p3.read()));
}

void Sobel_phase_strm::thread_tmp23_fu_47051_p2() {
    tmp23_fu_47051_p2 = (!z_V_1_3_reg_65297.read().is_01() || !tmp1760_cast_fu_47047_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_1_3_reg_65297.read()) + sc_bigint<13>(tmp1760_cast_fu_47047_p1.read()));
}

void Sobel_phase_strm::thread_tmp243_fu_48438_p2() {
    tmp243_fu_48438_p2 = (!z_V_12_5_v_cast_cast_fu_48410_p3.read().is_01() || !z_V_12_4_v_cast_cast_fu_48403_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_12_5_v_cast_cast_fu_48410_p3.read()) + sc_biguint<9>(z_V_12_4_v_cast_cast_fu_48403_p3.read()));
}

void Sobel_phase_strm::thread_tmp244_fu_48448_p2() {
    tmp244_fu_48448_p2 = (!z_V_12_3_reg_65517.read().is_01() || !tmp1804_cast_fu_48444_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_12_3_reg_65517.read()) + sc_bigint<13>(tmp1804_cast_fu_48444_p1.read()));
}

void Sobel_phase_strm::thread_tmp245_fu_48453_p2() {
    tmp245_fu_48453_p2 = (!z_V_12_8_v_cast_cast_cast_fu_48431_p3.read().is_01() || !z_V_12_7_v_cast_cast_fu_48424_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_12_8_v_cast_cast_cast_fu_48431_p3.read()) + sc_biguint<6>(z_V_12_7_v_cast_cast_fu_48424_p3.read()));
}

void Sobel_phase_strm::thread_tmp246_fu_48463_p2() {
    tmp246_fu_48463_p2 = (!z_V_12_6_v_cast_cast_fu_48417_p3.read().is_01() || !tmp1806_cast_fu_48459_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_12_6_v_cast_cast_fu_48417_p3.read()) + sc_bigint<7>(tmp1806_cast_fu_48459_p1.read()));
}

void Sobel_phase_strm::thread_tmp24_fu_47056_p2() {
    tmp24_fu_47056_p2 = (!z_V_1_8_v_cast_cast_cast_fu_47034_p3.read().is_01() || !z_V_1_7_v_cast_cast_fu_47027_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_1_8_v_cast_cast_cast_fu_47034_p3.read()) + sc_biguint<6>(z_V_1_7_v_cast_cast_fu_47027_p3.read()));
}

void Sobel_phase_strm::thread_tmp25_fu_47066_p2() {
    tmp25_fu_47066_p2 = (!z_V_1_6_v_cast_cast_fu_47020_p3.read().is_01() || !tmp1762_cast_fu_47062_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_1_6_v_cast_cast_fu_47020_p3.read()) + sc_bigint<7>(tmp1762_cast_fu_47062_p1.read()));
}

void Sobel_phase_strm::thread_tmp263_fu_48565_p2() {
    tmp263_fu_48565_p2 = (!z_V_13_5_v_cast_cast_fu_48537_p3.read().is_01() || !z_V_13_4_v_cast_cast_fu_48530_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_13_5_v_cast_cast_fu_48537_p3.read()) + sc_biguint<9>(z_V_13_4_v_cast_cast_fu_48530_p3.read()));
}

void Sobel_phase_strm::thread_tmp264_fu_48575_p2() {
    tmp264_fu_48575_p2 = (!z_V_13_3_reg_65537.read().is_01() || !tmp1808_cast_fu_48571_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_13_3_reg_65537.read()) + sc_bigint<13>(tmp1808_cast_fu_48571_p1.read()));
}

void Sobel_phase_strm::thread_tmp265_fu_48580_p2() {
    tmp265_fu_48580_p2 = (!z_V_13_8_v_cast_cast_cast_fu_48558_p3.read().is_01() || !z_V_13_7_v_cast_cast_fu_48551_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_13_8_v_cast_cast_cast_fu_48558_p3.read()) + sc_biguint<6>(z_V_13_7_v_cast_cast_fu_48551_p3.read()));
}

void Sobel_phase_strm::thread_tmp266_fu_48590_p2() {
    tmp266_fu_48590_p2 = (!z_V_13_6_v_cast_cast_fu_48544_p3.read().is_01() || !tmp1810_cast_fu_48586_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_13_6_v_cast_cast_fu_48544_p3.read()) + sc_bigint<7>(tmp1810_cast_fu_48586_p1.read()));
}

void Sobel_phase_strm::thread_tmp283_fu_48692_p2() {
    tmp283_fu_48692_p2 = (!z_V_14_5_v_cast_cast_fu_48664_p3.read().is_01() || !z_V_14_4_v_cast_cast_fu_48657_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_14_5_v_cast_cast_fu_48664_p3.read()) + sc_biguint<9>(z_V_14_4_v_cast_cast_fu_48657_p3.read()));
}

void Sobel_phase_strm::thread_tmp284_fu_48702_p2() {
    tmp284_fu_48702_p2 = (!z_V_14_3_reg_65557.read().is_01() || !tmp1812_cast_fu_48698_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_14_3_reg_65557.read()) + sc_bigint<13>(tmp1812_cast_fu_48698_p1.read()));
}

void Sobel_phase_strm::thread_tmp285_fu_48707_p2() {
    tmp285_fu_48707_p2 = (!z_V_14_8_v_cast_cast_cast_fu_48685_p3.read().is_01() || !z_V_14_7_v_cast_cast_fu_48678_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_14_8_v_cast_cast_cast_fu_48685_p3.read()) + sc_biguint<6>(z_V_14_7_v_cast_cast_fu_48678_p3.read()));
}

void Sobel_phase_strm::thread_tmp286_fu_48717_p2() {
    tmp286_fu_48717_p2 = (!z_V_14_6_v_cast_cast_fu_48671_p3.read().is_01() || !tmp1814_cast_fu_48713_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_14_6_v_cast_cast_fu_48671_p3.read()) + sc_bigint<7>(tmp1814_cast_fu_48713_p1.read()));
}

void Sobel_phase_strm::thread_tmp2_fu_46929_p2() {
    tmp2_fu_46929_p2 = (!z_V_0_8_v_cast_cast_cast_fu_46907_p3.read().is_01() || !z_V_0_7_v_cast_cast_fu_46900_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_0_8_v_cast_cast_cast_fu_46907_p3.read()) + sc_biguint<6>(z_V_0_7_v_cast_cast_fu_46900_p3.read()));
}

void Sobel_phase_strm::thread_tmp303_fu_48819_p2() {
    tmp303_fu_48819_p2 = (!z_V_15_5_v_cast_cast_fu_48791_p3.read().is_01() || !z_V_15_4_v_cast_cast_fu_48784_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_15_5_v_cast_cast_fu_48791_p3.read()) + sc_biguint<9>(z_V_15_4_v_cast_cast_fu_48784_p3.read()));
}

void Sobel_phase_strm::thread_tmp304_fu_48829_p2() {
    tmp304_fu_48829_p2 = (!z_V_15_3_reg_65577.read().is_01() || !tmp1816_cast_fu_48825_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_15_3_reg_65577.read()) + sc_bigint<13>(tmp1816_cast_fu_48825_p1.read()));
}

void Sobel_phase_strm::thread_tmp305_fu_48834_p2() {
    tmp305_fu_48834_p2 = (!z_V_15_8_v_cast_cast_cast_fu_48812_p3.read().is_01() || !z_V_15_7_v_cast_cast_fu_48805_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_15_8_v_cast_cast_cast_fu_48812_p3.read()) + sc_biguint<6>(z_V_15_7_v_cast_cast_fu_48805_p3.read()));
}

void Sobel_phase_strm::thread_tmp306_fu_48844_p2() {
    tmp306_fu_48844_p2 = (!z_V_15_6_v_cast_cast_fu_48798_p3.read().is_01() || !tmp1818_cast_fu_48840_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_15_6_v_cast_cast_fu_48798_p3.read()) + sc_bigint<7>(tmp1818_cast_fu_48840_p1.read()));
}

void Sobel_phase_strm::thread_tmp323_fu_48946_p2() {
    tmp323_fu_48946_p2 = (!z_V_16_5_v_cast_cast_fu_48918_p3.read().is_01() || !z_V_16_4_v_cast_cast_fu_48911_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_16_5_v_cast_cast_fu_48918_p3.read()) + sc_biguint<9>(z_V_16_4_v_cast_cast_fu_48911_p3.read()));
}

void Sobel_phase_strm::thread_tmp324_fu_48956_p2() {
    tmp324_fu_48956_p2 = (!z_V_16_3_reg_65597.read().is_01() || !tmp1820_cast_fu_48952_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_16_3_reg_65597.read()) + sc_bigint<13>(tmp1820_cast_fu_48952_p1.read()));
}

void Sobel_phase_strm::thread_tmp325_fu_48961_p2() {
    tmp325_fu_48961_p2 = (!z_V_16_8_v_cast_cast_cast_fu_48939_p3.read().is_01() || !z_V_16_7_v_cast_cast_fu_48932_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_16_8_v_cast_cast_cast_fu_48939_p3.read()) + sc_biguint<6>(z_V_16_7_v_cast_cast_fu_48932_p3.read()));
}

void Sobel_phase_strm::thread_tmp326_fu_48971_p2() {
    tmp326_fu_48971_p2 = (!z_V_16_6_v_cast_cast_fu_48925_p3.read().is_01() || !tmp1822_cast_fu_48967_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_16_6_v_cast_cast_fu_48925_p3.read()) + sc_bigint<7>(tmp1822_cast_fu_48967_p1.read()));
}

void Sobel_phase_strm::thread_tmp343_fu_49073_p2() {
    tmp343_fu_49073_p2 = (!z_V_17_5_v_cast_cast_fu_49045_p3.read().is_01() || !z_V_17_4_v_cast_cast_fu_49038_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_17_5_v_cast_cast_fu_49045_p3.read()) + sc_biguint<9>(z_V_17_4_v_cast_cast_fu_49038_p3.read()));
}

void Sobel_phase_strm::thread_tmp344_fu_49083_p2() {
    tmp344_fu_49083_p2 = (!z_V_17_3_reg_65617.read().is_01() || !tmp1824_cast_fu_49079_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_17_3_reg_65617.read()) + sc_bigint<13>(tmp1824_cast_fu_49079_p1.read()));
}

void Sobel_phase_strm::thread_tmp345_fu_49088_p2() {
    tmp345_fu_49088_p2 = (!z_V_17_8_v_cast_cast_cast_fu_49066_p3.read().is_01() || !z_V_17_7_v_cast_cast_fu_49059_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_17_8_v_cast_cast_cast_fu_49066_p3.read()) + sc_biguint<6>(z_V_17_7_v_cast_cast_fu_49059_p3.read()));
}

void Sobel_phase_strm::thread_tmp346_fu_49098_p2() {
    tmp346_fu_49098_p2 = (!z_V_17_6_v_cast_cast_fu_49052_p3.read().is_01() || !tmp1826_cast_fu_49094_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_17_6_v_cast_cast_fu_49052_p3.read()) + sc_bigint<7>(tmp1826_cast_fu_49094_p1.read()));
}

void Sobel_phase_strm::thread_tmp363_fu_49200_p2() {
    tmp363_fu_49200_p2 = (!z_V_18_5_v_cast_cast_fu_49172_p3.read().is_01() || !z_V_18_4_v_cast_cast_fu_49165_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_18_5_v_cast_cast_fu_49172_p3.read()) + sc_biguint<9>(z_V_18_4_v_cast_cast_fu_49165_p3.read()));
}

void Sobel_phase_strm::thread_tmp364_fu_49210_p2() {
    tmp364_fu_49210_p2 = (!z_V_18_3_reg_65637.read().is_01() || !tmp1828_cast_fu_49206_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_18_3_reg_65637.read()) + sc_bigint<13>(tmp1828_cast_fu_49206_p1.read()));
}

void Sobel_phase_strm::thread_tmp365_fu_49215_p2() {
    tmp365_fu_49215_p2 = (!z_V_18_8_v_cast_cast_cast_fu_49193_p3.read().is_01() || !z_V_18_7_v_cast_cast_fu_49186_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_18_8_v_cast_cast_cast_fu_49193_p3.read()) + sc_biguint<6>(z_V_18_7_v_cast_cast_fu_49186_p3.read()));
}

void Sobel_phase_strm::thread_tmp366_fu_49225_p2() {
    tmp366_fu_49225_p2 = (!z_V_18_6_v_cast_cast_fu_49179_p3.read().is_01() || !tmp1830_cast_fu_49221_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_18_6_v_cast_cast_fu_49179_p3.read()) + sc_bigint<7>(tmp1830_cast_fu_49221_p1.read()));
}

void Sobel_phase_strm::thread_tmp383_fu_49327_p2() {
    tmp383_fu_49327_p2 = (!z_V_19_5_v_cast_cast_fu_49299_p3.read().is_01() || !z_V_19_4_v_cast_cast_fu_49292_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_19_5_v_cast_cast_fu_49299_p3.read()) + sc_biguint<9>(z_V_19_4_v_cast_cast_fu_49292_p3.read()));
}

void Sobel_phase_strm::thread_tmp384_fu_49337_p2() {
    tmp384_fu_49337_p2 = (!z_V_19_3_reg_65657.read().is_01() || !tmp1832_cast_fu_49333_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_19_3_reg_65657.read()) + sc_bigint<13>(tmp1832_cast_fu_49333_p1.read()));
}

void Sobel_phase_strm::thread_tmp385_fu_49342_p2() {
    tmp385_fu_49342_p2 = (!z_V_19_8_v_cast_cast_cast_fu_49320_p3.read().is_01() || !z_V_19_7_v_cast_cast_fu_49313_p3.read().is_01())? sc_lv<6>(): (sc_biguint<6>(z_V_19_8_v_cast_cast_cast_fu_49320_p3.read()) + sc_biguint<6>(z_V_19_7_v_cast_cast_fu_49313_p3.read()));
}

void Sobel_phase_strm::thread_tmp386_fu_49352_p2() {
    tmp386_fu_49352_p2 = (!z_V_19_6_v_cast_cast_fu_49306_p3.read().is_01() || !tmp1834_cast_fu_49348_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_19_6_v_cast_cast_fu_49306_p3.read()) + sc_bigint<7>(tmp1834_cast_fu_49348_p1.read()));
}

void Sobel_phase_strm::thread_tmp3_fu_46939_p2() {
    tmp3_fu_46939_p2 = (!z_V_0_6_v_cast_cast_fu_46893_p3.read().is_01() || !tmp1758_cast_fu_46935_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(z_V_0_6_v_cast_cast_fu_46893_p3.read()) + sc_bigint<7>(tmp1758_cast_fu_46935_p1.read()));
}

void Sobel_phase_strm::thread_tmp403_fu_49454_p2() {
    tmp403_fu_49454_p2 = (!z_V_20_5_v_cast_cast_fu_49426_p3.read().is_01() || !z_V_20_4_v_cast_cast_fu_49419_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(z_V_20_5_v_cast_cast_fu_49426_p3.read()) + sc_biguint<9>(z_V_20_4_v_cast_cast_fu_49419_p3.read()));
}

void Sobel_phase_strm::thread_tmp404_fu_49464_p2() {
    tmp404_fu_49464_p2 = (!z_V_20_3_reg_65677.read().is_01() || !tmp1836_cast_fu_49460_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(z_V_20_3_reg_65677.read()) + sc_bigint<13>(tmp1836_cast_fu_49460_p1.read()));
}

}

