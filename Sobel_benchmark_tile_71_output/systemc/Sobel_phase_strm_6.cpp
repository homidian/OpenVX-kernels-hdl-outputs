#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_p_Val2_4_41_6_fu_42344_p2() {
    p_Val2_4_41_6_fu_42344_p2 = (!tmp_834_fu_42341_p1.read().is_01() || !x_V_1_41_5_reg_64267.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_834_fu_42341_p1.read()) + sc_biguint<15>(x_V_1_41_5_reg_64267.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_41_cast_fu_8236_p1() {
    p_Val2_4_41_cast_fu_8236_p1 = esl_zext<15,14>(p_Val2_4_40_fu_8230_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_41_fu_8348_p2() {
    p_Val2_4_41_fu_8348_p2 = (!x0_V_41_cast_fu_8332_p1.read().is_01() || !y0_V_41_cast_fu_8320_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_41_cast_fu_8332_p1.read()) + sc_biguint<14>(y0_V_41_cast_fu_8320_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_1_fu_8388_p2() {
    p_Val2_4_42_1_fu_8388_p2 = (!tmp_27_42_cast_fu_8384_p1.read().is_01() || !p_Val2_4_42_cast_fu_8354_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_42_cast_fu_8384_p1.read()) + sc_biguint<15>(p_Val2_4_42_cast_fu_8354_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_2_fu_19920_p2() {
    p_Val2_4_42_2_fu_19920_p2 = (!tmp_27_42_1_cast_fu_19916_p1.read().is_01() || !x_V_1_42_1_fu_19882_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_42_1_cast_fu_19916_p1.read()) + sc_biguint<15>(x_V_1_42_1_fu_19882_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_3_fu_19998_p2() {
    p_Val2_4_42_3_fu_19998_p2 = (!tmp_848_fu_19994_p1.read().is_01() || !x_V_1_42_2_fu_19962_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_848_fu_19994_p1.read()) + sc_biguint<15>(x_V_1_42_2_fu_19962_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_4_fu_31732_p2() {
    p_Val2_4_42_4_fu_31732_p2 = (!tmp_850_fu_31729_p1.read().is_01() || !x_V_1_42_3_reg_61887.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_850_fu_31729_p1.read()) + sc_biguint<15>(x_V_1_42_3_reg_61887.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_5_fu_31794_p2() {
    p_Val2_4_42_5_fu_31794_p2 = (!tmp_852_fu_31790_p1.read().is_01() || !x_V_1_42_4_fu_31758_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_852_fu_31790_p1.read()) + sc_biguint<15>(x_V_1_42_4_fu_31758_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_6_fu_42497_p2() {
    p_Val2_4_42_6_fu_42497_p2 = (!tmp_854_fu_42494_p1.read().is_01() || !x_V_1_42_5_reg_64301.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_854_fu_42494_p1.read()) + sc_biguint<15>(x_V_1_42_5_reg_64301.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_42_cast_fu_8354_p1() {
    p_Val2_4_42_cast_fu_8354_p1 = esl_zext<15,14>(p_Val2_4_41_fu_8348_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_42_fu_8466_p2() {
    p_Val2_4_42_fu_8466_p2 = (!x0_V_42_cast_fu_8450_p1.read().is_01() || !y0_V_42_cast_fu_8438_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_42_cast_fu_8450_p1.read()) + sc_biguint<14>(y0_V_42_cast_fu_8438_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_1_fu_8506_p2() {
    p_Val2_4_43_1_fu_8506_p2 = (!tmp_27_43_cast_fu_8502_p1.read().is_01() || !p_Val2_4_43_cast_fu_8472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_43_cast_fu_8502_p1.read()) + sc_biguint<15>(p_Val2_4_43_cast_fu_8472_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_2_fu_20114_p2() {
    p_Val2_4_43_2_fu_20114_p2 = (!tmp_27_43_1_cast_fu_20110_p1.read().is_01() || !x_V_1_43_1_fu_20076_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_43_1_cast_fu_20110_p1.read()) + sc_biguint<15>(x_V_1_43_1_fu_20076_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_3_fu_20192_p2() {
    p_Val2_4_43_3_fu_20192_p2 = (!tmp_868_fu_20188_p1.read().is_01() || !x_V_1_43_2_fu_20156_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_868_fu_20188_p1.read()) + sc_biguint<15>(x_V_1_43_2_fu_20156_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_4_fu_31880_p2() {
    p_Val2_4_43_4_fu_31880_p2 = (!tmp_870_fu_31877_p1.read().is_01() || !x_V_1_43_3_reg_61921.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_870_fu_31877_p1.read()) + sc_biguint<15>(x_V_1_43_3_reg_61921.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_5_fu_31942_p2() {
    p_Val2_4_43_5_fu_31942_p2 = (!tmp_872_fu_31938_p1.read().is_01() || !x_V_1_43_4_fu_31906_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_872_fu_31938_p1.read()) + sc_biguint<15>(x_V_1_43_4_fu_31906_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_6_fu_42650_p2() {
    p_Val2_4_43_6_fu_42650_p2 = (!tmp_874_fu_42647_p1.read().is_01() || !x_V_1_43_5_reg_64335.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_874_fu_42647_p1.read()) + sc_biguint<15>(x_V_1_43_5_reg_64335.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_43_cast_fu_8472_p1() {
    p_Val2_4_43_cast_fu_8472_p1 = esl_zext<15,14>(p_Val2_4_42_fu_8466_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_43_fu_8584_p2() {
    p_Val2_4_43_fu_8584_p2 = (!x0_V_43_cast_fu_8568_p1.read().is_01() || !y0_V_43_cast_fu_8556_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_43_cast_fu_8568_p1.read()) + sc_biguint<14>(y0_V_43_cast_fu_8556_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_1_fu_8624_p2() {
    p_Val2_4_44_1_fu_8624_p2 = (!tmp_27_44_cast_fu_8620_p1.read().is_01() || !p_Val2_4_44_cast_fu_8590_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_44_cast_fu_8620_p1.read()) + sc_biguint<15>(p_Val2_4_44_cast_fu_8590_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_2_fu_20308_p2() {
    p_Val2_4_44_2_fu_20308_p2 = (!tmp_27_44_1_cast_fu_20304_p1.read().is_01() || !x_V_1_44_1_fu_20270_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_44_1_cast_fu_20304_p1.read()) + sc_biguint<15>(x_V_1_44_1_fu_20270_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_3_fu_20386_p2() {
    p_Val2_4_44_3_fu_20386_p2 = (!tmp_888_fu_20382_p1.read().is_01() || !x_V_1_44_2_fu_20350_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_888_fu_20382_p1.read()) + sc_biguint<15>(x_V_1_44_2_fu_20350_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_4_fu_32028_p2() {
    p_Val2_4_44_4_fu_32028_p2 = (!tmp_890_fu_32025_p1.read().is_01() || !x_V_1_44_3_reg_61955.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_890_fu_32025_p1.read()) + sc_biguint<15>(x_V_1_44_3_reg_61955.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_5_fu_32090_p2() {
    p_Val2_4_44_5_fu_32090_p2 = (!tmp_892_fu_32086_p1.read().is_01() || !x_V_1_44_4_fu_32054_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_892_fu_32086_p1.read()) + sc_biguint<15>(x_V_1_44_4_fu_32054_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_6_fu_42803_p2() {
    p_Val2_4_44_6_fu_42803_p2 = (!tmp_894_fu_42800_p1.read().is_01() || !x_V_1_44_5_reg_64369.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_894_fu_42800_p1.read()) + sc_biguint<15>(x_V_1_44_5_reg_64369.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_44_cast_fu_8590_p1() {
    p_Val2_4_44_cast_fu_8590_p1 = esl_zext<15,14>(p_Val2_4_43_fu_8584_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_44_fu_8702_p2() {
    p_Val2_4_44_fu_8702_p2 = (!x0_V_44_cast_fu_8686_p1.read().is_01() || !y0_V_44_cast_fu_8674_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_44_cast_fu_8686_p1.read()) + sc_biguint<14>(y0_V_44_cast_fu_8674_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_1_fu_8742_p2() {
    p_Val2_4_45_1_fu_8742_p2 = (!tmp_27_45_cast_fu_8738_p1.read().is_01() || !p_Val2_4_45_cast_fu_8708_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_45_cast_fu_8738_p1.read()) + sc_biguint<15>(p_Val2_4_45_cast_fu_8708_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_2_fu_20502_p2() {
    p_Val2_4_45_2_fu_20502_p2 = (!tmp_27_45_1_cast_fu_20498_p1.read().is_01() || !x_V_1_45_1_fu_20464_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_45_1_cast_fu_20498_p1.read()) + sc_biguint<15>(x_V_1_45_1_fu_20464_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_3_fu_20580_p2() {
    p_Val2_4_45_3_fu_20580_p2 = (!tmp_908_fu_20576_p1.read().is_01() || !x_V_1_45_2_fu_20544_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_908_fu_20576_p1.read()) + sc_biguint<15>(x_V_1_45_2_fu_20544_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_4_fu_32176_p2() {
    p_Val2_4_45_4_fu_32176_p2 = (!tmp_910_fu_32173_p1.read().is_01() || !x_V_1_45_3_reg_61989.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_910_fu_32173_p1.read()) + sc_biguint<15>(x_V_1_45_3_reg_61989.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_5_fu_32238_p2() {
    p_Val2_4_45_5_fu_32238_p2 = (!tmp_912_fu_32234_p1.read().is_01() || !x_V_1_45_4_fu_32202_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_912_fu_32234_p1.read()) + sc_biguint<15>(x_V_1_45_4_fu_32202_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_6_fu_42956_p2() {
    p_Val2_4_45_6_fu_42956_p2 = (!tmp_914_fu_42953_p1.read().is_01() || !x_V_1_45_5_reg_64403.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_914_fu_42953_p1.read()) + sc_biguint<15>(x_V_1_45_5_reg_64403.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_45_cast_fu_8708_p1() {
    p_Val2_4_45_cast_fu_8708_p1 = esl_zext<15,14>(p_Val2_4_44_fu_8702_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_45_fu_8820_p2() {
    p_Val2_4_45_fu_8820_p2 = (!x0_V_45_cast_fu_8804_p1.read().is_01() || !y0_V_45_cast_fu_8792_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_45_cast_fu_8804_p1.read()) + sc_biguint<14>(y0_V_45_cast_fu_8792_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_1_fu_8860_p2() {
    p_Val2_4_46_1_fu_8860_p2 = (!tmp_27_46_cast_fu_8856_p1.read().is_01() || !p_Val2_4_46_cast_fu_8826_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_46_cast_fu_8856_p1.read()) + sc_biguint<15>(p_Val2_4_46_cast_fu_8826_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_2_fu_20696_p2() {
    p_Val2_4_46_2_fu_20696_p2 = (!tmp_27_46_1_cast_fu_20692_p1.read().is_01() || !x_V_1_46_1_fu_20658_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_46_1_cast_fu_20692_p1.read()) + sc_biguint<15>(x_V_1_46_1_fu_20658_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_3_fu_20774_p2() {
    p_Val2_4_46_3_fu_20774_p2 = (!tmp_928_fu_20770_p1.read().is_01() || !x_V_1_46_2_fu_20738_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_928_fu_20770_p1.read()) + sc_biguint<15>(x_V_1_46_2_fu_20738_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_4_fu_32324_p2() {
    p_Val2_4_46_4_fu_32324_p2 = (!tmp_930_fu_32321_p1.read().is_01() || !x_V_1_46_3_reg_62023.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_930_fu_32321_p1.read()) + sc_biguint<15>(x_V_1_46_3_reg_62023.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_5_fu_32386_p2() {
    p_Val2_4_46_5_fu_32386_p2 = (!tmp_932_fu_32382_p1.read().is_01() || !x_V_1_46_4_fu_32350_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_932_fu_32382_p1.read()) + sc_biguint<15>(x_V_1_46_4_fu_32350_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_6_fu_43109_p2() {
    p_Val2_4_46_6_fu_43109_p2 = (!tmp_934_fu_43106_p1.read().is_01() || !x_V_1_46_5_reg_64437.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_934_fu_43106_p1.read()) + sc_biguint<15>(x_V_1_46_5_reg_64437.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_46_cast_fu_8826_p1() {
    p_Val2_4_46_cast_fu_8826_p1 = esl_zext<15,14>(p_Val2_4_45_fu_8820_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_46_fu_8938_p2() {
    p_Val2_4_46_fu_8938_p2 = (!x0_V_46_cast_fu_8922_p1.read().is_01() || !y0_V_46_cast_fu_8910_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_46_cast_fu_8922_p1.read()) + sc_biguint<14>(y0_V_46_cast_fu_8910_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_1_fu_8978_p2() {
    p_Val2_4_47_1_fu_8978_p2 = (!tmp_27_47_cast_fu_8974_p1.read().is_01() || !p_Val2_4_47_cast_fu_8944_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_47_cast_fu_8974_p1.read()) + sc_biguint<15>(p_Val2_4_47_cast_fu_8944_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_2_fu_20890_p2() {
    p_Val2_4_47_2_fu_20890_p2 = (!tmp_27_47_1_cast_fu_20886_p1.read().is_01() || !x_V_1_47_1_fu_20852_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_47_1_cast_fu_20886_p1.read()) + sc_biguint<15>(x_V_1_47_1_fu_20852_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_3_fu_20968_p2() {
    p_Val2_4_47_3_fu_20968_p2 = (!tmp_948_fu_20964_p1.read().is_01() || !x_V_1_47_2_fu_20932_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_948_fu_20964_p1.read()) + sc_biguint<15>(x_V_1_47_2_fu_20932_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_4_fu_32472_p2() {
    p_Val2_4_47_4_fu_32472_p2 = (!tmp_950_fu_32469_p1.read().is_01() || !x_V_1_47_3_reg_62057.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_950_fu_32469_p1.read()) + sc_biguint<15>(x_V_1_47_3_reg_62057.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_5_fu_32534_p2() {
    p_Val2_4_47_5_fu_32534_p2 = (!tmp_952_fu_32530_p1.read().is_01() || !x_V_1_47_4_fu_32498_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_952_fu_32530_p1.read()) + sc_biguint<15>(x_V_1_47_4_fu_32498_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_6_fu_43262_p2() {
    p_Val2_4_47_6_fu_43262_p2 = (!tmp_954_fu_43259_p1.read().is_01() || !x_V_1_47_5_reg_64471.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_954_fu_43259_p1.read()) + sc_biguint<15>(x_V_1_47_5_reg_64471.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_47_cast_fu_8944_p1() {
    p_Val2_4_47_cast_fu_8944_p1 = esl_zext<15,14>(p_Val2_4_46_fu_8938_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_47_fu_9056_p2() {
    p_Val2_4_47_fu_9056_p2 = (!x0_V_47_cast_fu_9040_p1.read().is_01() || !y0_V_47_cast_fu_9028_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_47_cast_fu_9040_p1.read()) + sc_biguint<14>(y0_V_47_cast_fu_9028_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_1_fu_9096_p2() {
    p_Val2_4_48_1_fu_9096_p2 = (!tmp_27_48_cast_fu_9092_p1.read().is_01() || !p_Val2_4_48_cast_fu_9062_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_48_cast_fu_9092_p1.read()) + sc_biguint<15>(p_Val2_4_48_cast_fu_9062_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_2_fu_21084_p2() {
    p_Val2_4_48_2_fu_21084_p2 = (!tmp_27_48_1_cast_fu_21080_p1.read().is_01() || !x_V_1_48_1_fu_21046_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_48_1_cast_fu_21080_p1.read()) + sc_biguint<15>(x_V_1_48_1_fu_21046_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_3_fu_21162_p2() {
    p_Val2_4_48_3_fu_21162_p2 = (!tmp_968_fu_21158_p1.read().is_01() || !x_V_1_48_2_fu_21126_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_968_fu_21158_p1.read()) + sc_biguint<15>(x_V_1_48_2_fu_21126_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_4_fu_32620_p2() {
    p_Val2_4_48_4_fu_32620_p2 = (!tmp_970_fu_32617_p1.read().is_01() || !x_V_1_48_3_reg_62091.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_970_fu_32617_p1.read()) + sc_biguint<15>(x_V_1_48_3_reg_62091.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_5_fu_32682_p2() {
    p_Val2_4_48_5_fu_32682_p2 = (!tmp_972_fu_32678_p1.read().is_01() || !x_V_1_48_4_fu_32646_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_972_fu_32678_p1.read()) + sc_biguint<15>(x_V_1_48_4_fu_32646_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_6_fu_43415_p2() {
    p_Val2_4_48_6_fu_43415_p2 = (!tmp_974_fu_43412_p1.read().is_01() || !x_V_1_48_5_reg_64505.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_974_fu_43412_p1.read()) + sc_biguint<15>(x_V_1_48_5_reg_64505.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_48_cast_fu_9062_p1() {
    p_Val2_4_48_cast_fu_9062_p1 = esl_zext<15,14>(p_Val2_4_47_fu_9056_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_48_fu_9174_p2() {
    p_Val2_4_48_fu_9174_p2 = (!x0_V_48_cast_fu_9158_p1.read().is_01() || !y0_V_48_cast_fu_9146_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_48_cast_fu_9158_p1.read()) + sc_biguint<14>(y0_V_48_cast_fu_9146_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_1_fu_9214_p2() {
    p_Val2_4_49_1_fu_9214_p2 = (!tmp_27_49_cast_fu_9210_p1.read().is_01() || !p_Val2_4_49_cast_fu_9180_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_49_cast_fu_9210_p1.read()) + sc_biguint<15>(p_Val2_4_49_cast_fu_9180_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_2_fu_21278_p2() {
    p_Val2_4_49_2_fu_21278_p2 = (!tmp_27_49_1_cast_fu_21274_p1.read().is_01() || !x_V_1_49_1_fu_21240_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_49_1_cast_fu_21274_p1.read()) + sc_biguint<15>(x_V_1_49_1_fu_21240_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_3_fu_21356_p2() {
    p_Val2_4_49_3_fu_21356_p2 = (!tmp_988_fu_21352_p1.read().is_01() || !x_V_1_49_2_fu_21320_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_988_fu_21352_p1.read()) + sc_biguint<15>(x_V_1_49_2_fu_21320_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_4_fu_32768_p2() {
    p_Val2_4_49_4_fu_32768_p2 = (!tmp_990_fu_32765_p1.read().is_01() || !x_V_1_49_3_reg_62125.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_990_fu_32765_p1.read()) + sc_biguint<15>(x_V_1_49_3_reg_62125.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_5_fu_32830_p2() {
    p_Val2_4_49_5_fu_32830_p2 = (!tmp_992_fu_32826_p1.read().is_01() || !x_V_1_49_4_fu_32794_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_992_fu_32826_p1.read()) + sc_biguint<15>(x_V_1_49_4_fu_32794_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_6_fu_43568_p2() {
    p_Val2_4_49_6_fu_43568_p2 = (!tmp_994_fu_43565_p1.read().is_01() || !x_V_1_49_5_reg_64539.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_994_fu_43565_p1.read()) + sc_biguint<15>(x_V_1_49_5_reg_64539.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_49_cast_fu_9180_p1() {
    p_Val2_4_49_cast_fu_9180_p1 = esl_zext<15,14>(p_Val2_4_48_fu_9174_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_49_fu_9292_p2() {
    p_Val2_4_49_fu_9292_p2 = (!x0_V_49_cast_fu_9276_p1.read().is_01() || !y0_V_49_cast_fu_9264_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_49_cast_fu_9276_p1.read()) + sc_biguint<14>(y0_V_49_cast_fu_9264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_1_fu_3904_p2() {
    p_Val2_4_4_1_fu_3904_p2 = (!tmp_27_4_cast_fu_3900_p1.read().is_01() || !p_Val2_4_4_cast_fu_3870_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_4_cast_fu_3900_p1.read()) + sc_biguint<15>(p_Val2_4_4_cast_fu_3870_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_2_fu_12548_p2() {
    p_Val2_4_4_2_fu_12548_p2 = (!tmp_27_4_1_cast_fu_12544_p1.read().is_01() || !x_V_1_4_1_fu_12510_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_4_1_cast_fu_12544_p1.read()) + sc_biguint<15>(x_V_1_4_1_fu_12510_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_3_fu_12626_p2() {
    p_Val2_4_4_3_fu_12626_p2 = (!tmp_88_fu_12622_p1.read().is_01() || !x_V_1_4_2_fu_12590_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_88_fu_12622_p1.read()) + sc_biguint<15>(x_V_1_4_2_fu_12590_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_4_fu_26108_p2() {
    p_Val2_4_4_4_fu_26108_p2 = (!tmp_90_fu_26105_p1.read().is_01() || !x_V_1_4_3_reg_60595.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_90_fu_26105_p1.read()) + sc_biguint<15>(x_V_1_4_3_reg_60595.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_5_fu_26170_p2() {
    p_Val2_4_4_5_fu_26170_p2 = (!tmp_92_fu_26166_p1.read().is_01() || !x_V_1_4_4_fu_26134_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_92_fu_26166_p1.read()) + sc_biguint<15>(x_V_1_4_4_fu_26134_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_6_fu_36683_p2() {
    p_Val2_4_4_6_fu_36683_p2 = (!tmp_94_fu_36680_p1.read().is_01() || !x_V_1_4_5_reg_63009.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_94_fu_36680_p1.read()) + sc_biguint<15>(x_V_1_4_5_reg_63009.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_4_cast_fu_3870_p1() {
    p_Val2_4_4_cast_fu_3870_p1 = esl_zext<15,14>(p_Val2_4_4_fu_3864_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_4_fu_3864_p2() {
    p_Val2_4_4_fu_3864_p2 = (!x0_V_4_cast_fu_3848_p1.read().is_01() || !y0_V_4_cast_fu_3836_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_4_cast_fu_3848_p1.read()) + sc_biguint<14>(y0_V_4_cast_fu_3836_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_1_fu_9332_p2() {
    p_Val2_4_50_1_fu_9332_p2 = (!tmp_27_50_cast_fu_9328_p1.read().is_01() || !p_Val2_4_50_cast_fu_9298_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_50_cast_fu_9328_p1.read()) + sc_biguint<15>(p_Val2_4_50_cast_fu_9298_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_2_fu_21472_p2() {
    p_Val2_4_50_2_fu_21472_p2 = (!tmp_27_50_1_cast_fu_21468_p1.read().is_01() || !x_V_1_50_1_fu_21434_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_50_1_cast_fu_21468_p1.read()) + sc_biguint<15>(x_V_1_50_1_fu_21434_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_3_fu_21550_p2() {
    p_Val2_4_50_3_fu_21550_p2 = (!tmp_1008_fu_21546_p1.read().is_01() || !x_V_1_50_2_fu_21514_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1008_fu_21546_p1.read()) + sc_biguint<15>(x_V_1_50_2_fu_21514_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_4_fu_32916_p2() {
    p_Val2_4_50_4_fu_32916_p2 = (!tmp_1010_fu_32913_p1.read().is_01() || !x_V_1_50_3_reg_62159.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1010_fu_32913_p1.read()) + sc_biguint<15>(x_V_1_50_3_reg_62159.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_5_fu_32978_p2() {
    p_Val2_4_50_5_fu_32978_p2 = (!tmp_1012_fu_32974_p1.read().is_01() || !x_V_1_50_4_fu_32942_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1012_fu_32974_p1.read()) + sc_biguint<15>(x_V_1_50_4_fu_32942_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_6_fu_43721_p2() {
    p_Val2_4_50_6_fu_43721_p2 = (!tmp_1014_fu_43718_p1.read().is_01() || !x_V_1_50_5_reg_64573.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1014_fu_43718_p1.read()) + sc_biguint<15>(x_V_1_50_5_reg_64573.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_50_cast_fu_9298_p1() {
    p_Val2_4_50_cast_fu_9298_p1 = esl_zext<15,14>(p_Val2_4_49_fu_9292_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_50_fu_9410_p2() {
    p_Val2_4_50_fu_9410_p2 = (!x0_V_50_cast_fu_9394_p1.read().is_01() || !y0_V_50_cast_fu_9382_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_50_cast_fu_9394_p1.read()) + sc_biguint<14>(y0_V_50_cast_fu_9382_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_1_fu_9450_p2() {
    p_Val2_4_51_1_fu_9450_p2 = (!tmp_27_51_cast_fu_9446_p1.read().is_01() || !p_Val2_4_51_cast_fu_9416_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_51_cast_fu_9446_p1.read()) + sc_biguint<15>(p_Val2_4_51_cast_fu_9416_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_2_fu_21666_p2() {
    p_Val2_4_51_2_fu_21666_p2 = (!tmp_27_51_1_cast_fu_21662_p1.read().is_01() || !x_V_1_51_1_fu_21628_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_51_1_cast_fu_21662_p1.read()) + sc_biguint<15>(x_V_1_51_1_fu_21628_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_3_fu_21744_p2() {
    p_Val2_4_51_3_fu_21744_p2 = (!tmp_1028_fu_21740_p1.read().is_01() || !x_V_1_51_2_fu_21708_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1028_fu_21740_p1.read()) + sc_biguint<15>(x_V_1_51_2_fu_21708_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_4_fu_33064_p2() {
    p_Val2_4_51_4_fu_33064_p2 = (!tmp_1030_fu_33061_p1.read().is_01() || !x_V_1_51_3_reg_62193.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1030_fu_33061_p1.read()) + sc_biguint<15>(x_V_1_51_3_reg_62193.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_5_fu_33126_p2() {
    p_Val2_4_51_5_fu_33126_p2 = (!tmp_1032_fu_33122_p1.read().is_01() || !x_V_1_51_4_fu_33090_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1032_fu_33122_p1.read()) + sc_biguint<15>(x_V_1_51_4_fu_33090_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_6_fu_43874_p2() {
    p_Val2_4_51_6_fu_43874_p2 = (!tmp_1034_fu_43871_p1.read().is_01() || !x_V_1_51_5_reg_64607.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1034_fu_43871_p1.read()) + sc_biguint<15>(x_V_1_51_5_reg_64607.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_51_cast_fu_9416_p1() {
    p_Val2_4_51_cast_fu_9416_p1 = esl_zext<15,14>(p_Val2_4_50_fu_9410_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_51_fu_9528_p2() {
    p_Val2_4_51_fu_9528_p2 = (!x0_V_51_cast_fu_9512_p1.read().is_01() || !y0_V_51_cast_fu_9500_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_51_cast_fu_9512_p1.read()) + sc_biguint<14>(y0_V_51_cast_fu_9500_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_1_fu_9568_p2() {
    p_Val2_4_52_1_fu_9568_p2 = (!tmp_27_52_cast_fu_9564_p1.read().is_01() || !p_Val2_4_52_cast_fu_9534_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_52_cast_fu_9564_p1.read()) + sc_biguint<15>(p_Val2_4_52_cast_fu_9534_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_2_fu_21860_p2() {
    p_Val2_4_52_2_fu_21860_p2 = (!tmp_27_52_1_cast_fu_21856_p1.read().is_01() || !x_V_1_52_1_fu_21822_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_52_1_cast_fu_21856_p1.read()) + sc_biguint<15>(x_V_1_52_1_fu_21822_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_3_fu_21938_p2() {
    p_Val2_4_52_3_fu_21938_p2 = (!tmp_1048_fu_21934_p1.read().is_01() || !x_V_1_52_2_fu_21902_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1048_fu_21934_p1.read()) + sc_biguint<15>(x_V_1_52_2_fu_21902_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_4_fu_33212_p2() {
    p_Val2_4_52_4_fu_33212_p2 = (!tmp_1050_fu_33209_p1.read().is_01() || !x_V_1_52_3_reg_62227.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1050_fu_33209_p1.read()) + sc_biguint<15>(x_V_1_52_3_reg_62227.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_5_fu_33274_p2() {
    p_Val2_4_52_5_fu_33274_p2 = (!tmp_1052_fu_33270_p1.read().is_01() || !x_V_1_52_4_fu_33238_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1052_fu_33270_p1.read()) + sc_biguint<15>(x_V_1_52_4_fu_33238_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_6_fu_44027_p2() {
    p_Val2_4_52_6_fu_44027_p2 = (!tmp_1054_fu_44024_p1.read().is_01() || !x_V_1_52_5_reg_64641.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1054_fu_44024_p1.read()) + sc_biguint<15>(x_V_1_52_5_reg_64641.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_52_cast_fu_9534_p1() {
    p_Val2_4_52_cast_fu_9534_p1 = esl_zext<15,14>(p_Val2_4_51_fu_9528_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_52_fu_9646_p2() {
    p_Val2_4_52_fu_9646_p2 = (!x0_V_52_cast_fu_9630_p1.read().is_01() || !y0_V_52_cast_fu_9618_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_52_cast_fu_9630_p1.read()) + sc_biguint<14>(y0_V_52_cast_fu_9618_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_1_fu_9686_p2() {
    p_Val2_4_53_1_fu_9686_p2 = (!tmp_27_53_cast_fu_9682_p1.read().is_01() || !p_Val2_4_53_cast_fu_9652_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_53_cast_fu_9682_p1.read()) + sc_biguint<15>(p_Val2_4_53_cast_fu_9652_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_2_fu_22054_p2() {
    p_Val2_4_53_2_fu_22054_p2 = (!tmp_27_53_1_cast_fu_22050_p1.read().is_01() || !x_V_1_53_1_fu_22016_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_53_1_cast_fu_22050_p1.read()) + sc_biguint<15>(x_V_1_53_1_fu_22016_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_3_fu_22132_p2() {
    p_Val2_4_53_3_fu_22132_p2 = (!tmp_1068_fu_22128_p1.read().is_01() || !x_V_1_53_2_fu_22096_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1068_fu_22128_p1.read()) + sc_biguint<15>(x_V_1_53_2_fu_22096_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_4_fu_33360_p2() {
    p_Val2_4_53_4_fu_33360_p2 = (!tmp_1070_fu_33357_p1.read().is_01() || !x_V_1_53_3_reg_62261.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1070_fu_33357_p1.read()) + sc_biguint<15>(x_V_1_53_3_reg_62261.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_5_fu_33422_p2() {
    p_Val2_4_53_5_fu_33422_p2 = (!tmp_1072_fu_33418_p1.read().is_01() || !x_V_1_53_4_fu_33386_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1072_fu_33418_p1.read()) + sc_biguint<15>(x_V_1_53_4_fu_33386_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_6_fu_44180_p2() {
    p_Val2_4_53_6_fu_44180_p2 = (!tmp_1074_fu_44177_p1.read().is_01() || !x_V_1_53_5_reg_64675.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1074_fu_44177_p1.read()) + sc_biguint<15>(x_V_1_53_5_reg_64675.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_53_cast_fu_9652_p1() {
    p_Val2_4_53_cast_fu_9652_p1 = esl_zext<15,14>(p_Val2_4_52_fu_9646_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_53_fu_9764_p2() {
    p_Val2_4_53_fu_9764_p2 = (!x0_V_53_cast_fu_9748_p1.read().is_01() || !y0_V_53_cast_fu_9736_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_53_cast_fu_9748_p1.read()) + sc_biguint<14>(y0_V_53_cast_fu_9736_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_1_fu_9804_p2() {
    p_Val2_4_54_1_fu_9804_p2 = (!tmp_27_54_cast_fu_9800_p1.read().is_01() || !p_Val2_4_54_cast_fu_9770_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_54_cast_fu_9800_p1.read()) + sc_biguint<15>(p_Val2_4_54_cast_fu_9770_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_2_fu_22248_p2() {
    p_Val2_4_54_2_fu_22248_p2 = (!tmp_27_54_1_cast_fu_22244_p1.read().is_01() || !x_V_1_54_1_fu_22210_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_54_1_cast_fu_22244_p1.read()) + sc_biguint<15>(x_V_1_54_1_fu_22210_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_3_fu_22326_p2() {
    p_Val2_4_54_3_fu_22326_p2 = (!tmp_1088_fu_22322_p1.read().is_01() || !x_V_1_54_2_fu_22290_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1088_fu_22322_p1.read()) + sc_biguint<15>(x_V_1_54_2_fu_22290_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_4_fu_33508_p2() {
    p_Val2_4_54_4_fu_33508_p2 = (!tmp_1090_fu_33505_p1.read().is_01() || !x_V_1_54_3_reg_62295.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1090_fu_33505_p1.read()) + sc_biguint<15>(x_V_1_54_3_reg_62295.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_5_fu_33570_p2() {
    p_Val2_4_54_5_fu_33570_p2 = (!tmp_1092_fu_33566_p1.read().is_01() || !x_V_1_54_4_fu_33534_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1092_fu_33566_p1.read()) + sc_biguint<15>(x_V_1_54_4_fu_33534_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_6_fu_44333_p2() {
    p_Val2_4_54_6_fu_44333_p2 = (!tmp_1094_fu_44330_p1.read().is_01() || !x_V_1_54_5_reg_64709.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1094_fu_44330_p1.read()) + sc_biguint<15>(x_V_1_54_5_reg_64709.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_54_cast_fu_9770_p1() {
    p_Val2_4_54_cast_fu_9770_p1 = esl_zext<15,14>(p_Val2_4_53_fu_9764_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_54_fu_9882_p2() {
    p_Val2_4_54_fu_9882_p2 = (!x0_V_54_cast_fu_9866_p1.read().is_01() || !y0_V_54_cast_fu_9854_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_54_cast_fu_9866_p1.read()) + sc_biguint<14>(y0_V_54_cast_fu_9854_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_1_fu_9922_p2() {
    p_Val2_4_55_1_fu_9922_p2 = (!tmp_27_55_cast_fu_9918_p1.read().is_01() || !p_Val2_4_55_cast_fu_9888_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_55_cast_fu_9918_p1.read()) + sc_biguint<15>(p_Val2_4_55_cast_fu_9888_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_2_fu_22442_p2() {
    p_Val2_4_55_2_fu_22442_p2 = (!tmp_27_55_1_cast_fu_22438_p1.read().is_01() || !x_V_1_55_1_fu_22404_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_55_1_cast_fu_22438_p1.read()) + sc_biguint<15>(x_V_1_55_1_fu_22404_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_3_fu_22520_p2() {
    p_Val2_4_55_3_fu_22520_p2 = (!tmp_1108_fu_22516_p1.read().is_01() || !x_V_1_55_2_fu_22484_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1108_fu_22516_p1.read()) + sc_biguint<15>(x_V_1_55_2_fu_22484_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_4_fu_33656_p2() {
    p_Val2_4_55_4_fu_33656_p2 = (!tmp_1110_fu_33653_p1.read().is_01() || !x_V_1_55_3_reg_62329.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1110_fu_33653_p1.read()) + sc_biguint<15>(x_V_1_55_3_reg_62329.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_5_fu_33718_p2() {
    p_Val2_4_55_5_fu_33718_p2 = (!tmp_1112_fu_33714_p1.read().is_01() || !x_V_1_55_4_fu_33682_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1112_fu_33714_p1.read()) + sc_biguint<15>(x_V_1_55_4_fu_33682_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_6_fu_44486_p2() {
    p_Val2_4_55_6_fu_44486_p2 = (!tmp_1114_fu_44483_p1.read().is_01() || !x_V_1_55_5_reg_64743.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1114_fu_44483_p1.read()) + sc_biguint<15>(x_V_1_55_5_reg_64743.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_55_cast_fu_9888_p1() {
    p_Val2_4_55_cast_fu_9888_p1 = esl_zext<15,14>(p_Val2_4_54_fu_9882_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_55_fu_10000_p2() {
    p_Val2_4_55_fu_10000_p2 = (!x0_V_55_cast_fu_9984_p1.read().is_01() || !y0_V_55_cast_fu_9972_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_55_cast_fu_9984_p1.read()) + sc_biguint<14>(y0_V_55_cast_fu_9972_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_1_fu_10040_p2() {
    p_Val2_4_56_1_fu_10040_p2 = (!tmp_27_56_cast_fu_10036_p1.read().is_01() || !p_Val2_4_56_cast_fu_10006_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_56_cast_fu_10036_p1.read()) + sc_biguint<15>(p_Val2_4_56_cast_fu_10006_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_2_fu_22636_p2() {
    p_Val2_4_56_2_fu_22636_p2 = (!tmp_27_56_1_cast_fu_22632_p1.read().is_01() || !x_V_1_56_1_fu_22598_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_56_1_cast_fu_22632_p1.read()) + sc_biguint<15>(x_V_1_56_1_fu_22598_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_3_fu_22714_p2() {
    p_Val2_4_56_3_fu_22714_p2 = (!tmp_1128_fu_22710_p1.read().is_01() || !x_V_1_56_2_fu_22678_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1128_fu_22710_p1.read()) + sc_biguint<15>(x_V_1_56_2_fu_22678_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_4_fu_33804_p2() {
    p_Val2_4_56_4_fu_33804_p2 = (!tmp_1130_fu_33801_p1.read().is_01() || !x_V_1_56_3_reg_62363.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1130_fu_33801_p1.read()) + sc_biguint<15>(x_V_1_56_3_reg_62363.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_5_fu_33866_p2() {
    p_Val2_4_56_5_fu_33866_p2 = (!tmp_1132_fu_33862_p1.read().is_01() || !x_V_1_56_4_fu_33830_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1132_fu_33862_p1.read()) + sc_biguint<15>(x_V_1_56_4_fu_33830_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_6_fu_44639_p2() {
    p_Val2_4_56_6_fu_44639_p2 = (!tmp_1134_fu_44636_p1.read().is_01() || !x_V_1_56_5_reg_64777.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1134_fu_44636_p1.read()) + sc_biguint<15>(x_V_1_56_5_reg_64777.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_56_cast_fu_10006_p1() {
    p_Val2_4_56_cast_fu_10006_p1 = esl_zext<15,14>(p_Val2_4_55_fu_10000_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_56_fu_10118_p2() {
    p_Val2_4_56_fu_10118_p2 = (!x0_V_56_cast_fu_10102_p1.read().is_01() || !y0_V_56_cast_fu_10090_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_56_cast_fu_10102_p1.read()) + sc_biguint<14>(y0_V_56_cast_fu_10090_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_1_fu_10158_p2() {
    p_Val2_4_57_1_fu_10158_p2 = (!tmp_27_57_cast_fu_10154_p1.read().is_01() || !p_Val2_4_57_cast_fu_10124_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_57_cast_fu_10154_p1.read()) + sc_biguint<15>(p_Val2_4_57_cast_fu_10124_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_2_fu_22830_p2() {
    p_Val2_4_57_2_fu_22830_p2 = (!tmp_27_57_1_cast_fu_22826_p1.read().is_01() || !x_V_1_57_1_fu_22792_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_57_1_cast_fu_22826_p1.read()) + sc_biguint<15>(x_V_1_57_1_fu_22792_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_3_fu_22908_p2() {
    p_Val2_4_57_3_fu_22908_p2 = (!tmp_1148_fu_22904_p1.read().is_01() || !x_V_1_57_2_fu_22872_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1148_fu_22904_p1.read()) + sc_biguint<15>(x_V_1_57_2_fu_22872_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_4_fu_33952_p2() {
    p_Val2_4_57_4_fu_33952_p2 = (!tmp_1150_fu_33949_p1.read().is_01() || !x_V_1_57_3_reg_62397.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1150_fu_33949_p1.read()) + sc_biguint<15>(x_V_1_57_3_reg_62397.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_5_fu_34014_p2() {
    p_Val2_4_57_5_fu_34014_p2 = (!tmp_1152_fu_34010_p1.read().is_01() || !x_V_1_57_4_fu_33978_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1152_fu_34010_p1.read()) + sc_biguint<15>(x_V_1_57_4_fu_33978_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_6_fu_44792_p2() {
    p_Val2_4_57_6_fu_44792_p2 = (!tmp_1154_fu_44789_p1.read().is_01() || !x_V_1_57_5_reg_64811.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1154_fu_44789_p1.read()) + sc_biguint<15>(x_V_1_57_5_reg_64811.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_57_cast_fu_10124_p1() {
    p_Val2_4_57_cast_fu_10124_p1 = esl_zext<15,14>(p_Val2_4_56_fu_10118_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_57_fu_10236_p2() {
    p_Val2_4_57_fu_10236_p2 = (!x0_V_57_cast_fu_10220_p1.read().is_01() || !y0_V_57_cast_fu_10208_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_57_cast_fu_10220_p1.read()) + sc_biguint<14>(y0_V_57_cast_fu_10208_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_1_fu_10276_p2() {
    p_Val2_4_58_1_fu_10276_p2 = (!tmp_27_58_cast_fu_10272_p1.read().is_01() || !p_Val2_4_58_cast_fu_10242_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_58_cast_fu_10272_p1.read()) + sc_biguint<15>(p_Val2_4_58_cast_fu_10242_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_2_fu_23024_p2() {
    p_Val2_4_58_2_fu_23024_p2 = (!tmp_27_58_1_cast_fu_23020_p1.read().is_01() || !x_V_1_58_1_fu_22986_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_58_1_cast_fu_23020_p1.read()) + sc_biguint<15>(x_V_1_58_1_fu_22986_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_3_fu_23102_p2() {
    p_Val2_4_58_3_fu_23102_p2 = (!tmp_1168_fu_23098_p1.read().is_01() || !x_V_1_58_2_fu_23066_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1168_fu_23098_p1.read()) + sc_biguint<15>(x_V_1_58_2_fu_23066_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_4_fu_34100_p2() {
    p_Val2_4_58_4_fu_34100_p2 = (!tmp_1170_fu_34097_p1.read().is_01() || !x_V_1_58_3_reg_62431.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1170_fu_34097_p1.read()) + sc_biguint<15>(x_V_1_58_3_reg_62431.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_5_fu_34162_p2() {
    p_Val2_4_58_5_fu_34162_p2 = (!tmp_1172_fu_34158_p1.read().is_01() || !x_V_1_58_4_fu_34126_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1172_fu_34158_p1.read()) + sc_biguint<15>(x_V_1_58_4_fu_34126_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_6_fu_44945_p2() {
    p_Val2_4_58_6_fu_44945_p2 = (!tmp_1174_fu_44942_p1.read().is_01() || !x_V_1_58_5_reg_64845.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1174_fu_44942_p1.read()) + sc_biguint<15>(x_V_1_58_5_reg_64845.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_58_cast_fu_10242_p1() {
    p_Val2_4_58_cast_fu_10242_p1 = esl_zext<15,14>(p_Val2_4_57_fu_10236_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_58_fu_10354_p2() {
    p_Val2_4_58_fu_10354_p2 = (!x0_V_58_cast_fu_10338_p1.read().is_01() || !y0_V_58_cast_fu_10326_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_58_cast_fu_10338_p1.read()) + sc_biguint<14>(y0_V_58_cast_fu_10326_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_1_fu_10394_p2() {
    p_Val2_4_59_1_fu_10394_p2 = (!tmp_27_59_cast_fu_10390_p1.read().is_01() || !p_Val2_4_59_cast_fu_10360_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_59_cast_fu_10390_p1.read()) + sc_biguint<15>(p_Val2_4_59_cast_fu_10360_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_2_fu_23218_p2() {
    p_Val2_4_59_2_fu_23218_p2 = (!tmp_27_59_1_cast_fu_23214_p1.read().is_01() || !x_V_1_59_1_fu_23180_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_59_1_cast_fu_23214_p1.read()) + sc_biguint<15>(x_V_1_59_1_fu_23180_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_3_fu_23296_p2() {
    p_Val2_4_59_3_fu_23296_p2 = (!tmp_1188_fu_23292_p1.read().is_01() || !x_V_1_59_2_fu_23260_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1188_fu_23292_p1.read()) + sc_biguint<15>(x_V_1_59_2_fu_23260_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_4_fu_34248_p2() {
    p_Val2_4_59_4_fu_34248_p2 = (!tmp_1190_fu_34245_p1.read().is_01() || !x_V_1_59_3_reg_62465.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1190_fu_34245_p1.read()) + sc_biguint<15>(x_V_1_59_3_reg_62465.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_5_fu_34310_p2() {
    p_Val2_4_59_5_fu_34310_p2 = (!tmp_1192_fu_34306_p1.read().is_01() || !x_V_1_59_4_fu_34274_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1192_fu_34306_p1.read()) + sc_biguint<15>(x_V_1_59_4_fu_34274_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_6_fu_45098_p2() {
    p_Val2_4_59_6_fu_45098_p2 = (!tmp_1194_fu_45095_p1.read().is_01() || !x_V_1_59_5_reg_64879.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1194_fu_45095_p1.read()) + sc_biguint<15>(x_V_1_59_5_reg_64879.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_59_cast_fu_10360_p1() {
    p_Val2_4_59_cast_fu_10360_p1 = esl_zext<15,14>(p_Val2_4_58_fu_10354_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_59_fu_10472_p2() {
    p_Val2_4_59_fu_10472_p2 = (!x0_V_59_cast_fu_10456_p1.read().is_01() || !y0_V_59_cast_fu_10444_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_59_cast_fu_10456_p1.read()) + sc_biguint<14>(y0_V_59_cast_fu_10444_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_1_fu_4022_p2() {
    p_Val2_4_5_1_fu_4022_p2 = (!tmp_27_5_cast_fu_4018_p1.read().is_01() || !p_Val2_4_5_cast_fu_3988_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_5_cast_fu_4018_p1.read()) + sc_biguint<15>(p_Val2_4_5_cast_fu_3988_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_2_fu_12742_p2() {
    p_Val2_4_5_2_fu_12742_p2 = (!tmp_27_5_1_cast_fu_12738_p1.read().is_01() || !x_V_1_5_1_fu_12704_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_5_1_cast_fu_12738_p1.read()) + sc_biguint<15>(x_V_1_5_1_fu_12704_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_3_fu_12820_p2() {
    p_Val2_4_5_3_fu_12820_p2 = (!tmp_108_fu_12816_p1.read().is_01() || !x_V_1_5_2_fu_12784_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_108_fu_12816_p1.read()) + sc_biguint<15>(x_V_1_5_2_fu_12784_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_4_fu_26256_p2() {
    p_Val2_4_5_4_fu_26256_p2 = (!tmp_110_fu_26253_p1.read().is_01() || !x_V_1_5_3_reg_60629.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_110_fu_26253_p1.read()) + sc_biguint<15>(x_V_1_5_3_reg_60629.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_5_fu_26318_p2() {
    p_Val2_4_5_5_fu_26318_p2 = (!tmp_112_fu_26314_p1.read().is_01() || !x_V_1_5_4_fu_26282_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_112_fu_26314_p1.read()) + sc_biguint<15>(x_V_1_5_4_fu_26282_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_6_fu_36836_p2() {
    p_Val2_4_5_6_fu_36836_p2 = (!tmp_114_fu_36833_p1.read().is_01() || !x_V_1_5_5_reg_63043.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_114_fu_36833_p1.read()) + sc_biguint<15>(x_V_1_5_5_reg_63043.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_5_cast_fu_3988_p1() {
    p_Val2_4_5_cast_fu_3988_p1 = esl_zext<15,14>(p_Val2_4_5_fu_3982_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_5_fu_3982_p2() {
    p_Val2_4_5_fu_3982_p2 = (!x0_V_5_cast_fu_3966_p1.read().is_01() || !y0_V_5_cast_fu_3954_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_5_cast_fu_3966_p1.read()) + sc_biguint<14>(y0_V_5_cast_fu_3954_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_1_fu_10512_p2() {
    p_Val2_4_60_1_fu_10512_p2 = (!tmp_27_60_cast_fu_10508_p1.read().is_01() || !p_Val2_4_60_cast_fu_10478_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_60_cast_fu_10508_p1.read()) + sc_biguint<15>(p_Val2_4_60_cast_fu_10478_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_2_fu_23412_p2() {
    p_Val2_4_60_2_fu_23412_p2 = (!tmp_27_60_1_cast_fu_23408_p1.read().is_01() || !x_V_1_60_1_fu_23374_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_60_1_cast_fu_23408_p1.read()) + sc_biguint<15>(x_V_1_60_1_fu_23374_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_3_fu_23490_p2() {
    p_Val2_4_60_3_fu_23490_p2 = (!tmp_1208_fu_23486_p1.read().is_01() || !x_V_1_60_2_fu_23454_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1208_fu_23486_p1.read()) + sc_biguint<15>(x_V_1_60_2_fu_23454_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_4_fu_34396_p2() {
    p_Val2_4_60_4_fu_34396_p2 = (!tmp_1210_fu_34393_p1.read().is_01() || !x_V_1_60_3_reg_62499.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1210_fu_34393_p1.read()) + sc_biguint<15>(x_V_1_60_3_reg_62499.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_5_fu_34458_p2() {
    p_Val2_4_60_5_fu_34458_p2 = (!tmp_1212_fu_34454_p1.read().is_01() || !x_V_1_60_4_fu_34422_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1212_fu_34454_p1.read()) + sc_biguint<15>(x_V_1_60_4_fu_34422_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_6_fu_45251_p2() {
    p_Val2_4_60_6_fu_45251_p2 = (!tmp_1214_fu_45248_p1.read().is_01() || !x_V_1_60_5_reg_64913.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1214_fu_45248_p1.read()) + sc_biguint<15>(x_V_1_60_5_reg_64913.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_60_cast_fu_10478_p1() {
    p_Val2_4_60_cast_fu_10478_p1 = esl_zext<15,14>(p_Val2_4_59_fu_10472_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_60_fu_10590_p2() {
    p_Val2_4_60_fu_10590_p2 = (!x0_V_60_cast_fu_10574_p1.read().is_01() || !y0_V_60_cast_fu_10562_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_60_cast_fu_10574_p1.read()) + sc_biguint<14>(y0_V_60_cast_fu_10562_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_1_fu_10630_p2() {
    p_Val2_4_61_1_fu_10630_p2 = (!tmp_27_61_cast_fu_10626_p1.read().is_01() || !p_Val2_4_61_cast_fu_10596_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_61_cast_fu_10626_p1.read()) + sc_biguint<15>(p_Val2_4_61_cast_fu_10596_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_2_fu_23606_p2() {
    p_Val2_4_61_2_fu_23606_p2 = (!tmp_27_61_1_cast_fu_23602_p1.read().is_01() || !x_V_1_61_1_fu_23568_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_61_1_cast_fu_23602_p1.read()) + sc_biguint<15>(x_V_1_61_1_fu_23568_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_3_fu_23684_p2() {
    p_Val2_4_61_3_fu_23684_p2 = (!tmp_1228_fu_23680_p1.read().is_01() || !x_V_1_61_2_fu_23648_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1228_fu_23680_p1.read()) + sc_biguint<15>(x_V_1_61_2_fu_23648_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_4_fu_34544_p2() {
    p_Val2_4_61_4_fu_34544_p2 = (!tmp_1230_fu_34541_p1.read().is_01() || !x_V_1_61_3_reg_62533.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1230_fu_34541_p1.read()) + sc_biguint<15>(x_V_1_61_3_reg_62533.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_5_fu_34606_p2() {
    p_Val2_4_61_5_fu_34606_p2 = (!tmp_1232_fu_34602_p1.read().is_01() || !x_V_1_61_4_fu_34570_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1232_fu_34602_p1.read()) + sc_biguint<15>(x_V_1_61_4_fu_34570_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_6_fu_45404_p2() {
    p_Val2_4_61_6_fu_45404_p2 = (!tmp_1234_fu_45401_p1.read().is_01() || !x_V_1_61_5_reg_64947.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1234_fu_45401_p1.read()) + sc_biguint<15>(x_V_1_61_5_reg_64947.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_61_cast_fu_10596_p1() {
    p_Val2_4_61_cast_fu_10596_p1 = esl_zext<15,14>(p_Val2_4_60_fu_10590_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_61_fu_10708_p2() {
    p_Val2_4_61_fu_10708_p2 = (!x0_V_61_cast_fu_10692_p1.read().is_01() || !y0_V_61_cast_fu_10680_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_61_cast_fu_10692_p1.read()) + sc_biguint<14>(y0_V_61_cast_fu_10680_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_1_fu_10748_p2() {
    p_Val2_4_62_1_fu_10748_p2 = (!tmp_27_62_cast_fu_10744_p1.read().is_01() || !p_Val2_4_62_cast_fu_10714_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_62_cast_fu_10744_p1.read()) + sc_biguint<15>(p_Val2_4_62_cast_fu_10714_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_2_fu_23800_p2() {
    p_Val2_4_62_2_fu_23800_p2 = (!tmp_27_62_1_cast_fu_23796_p1.read().is_01() || !x_V_1_62_1_fu_23762_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_62_1_cast_fu_23796_p1.read()) + sc_biguint<15>(x_V_1_62_1_fu_23762_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_3_fu_23878_p2() {
    p_Val2_4_62_3_fu_23878_p2 = (!tmp_1248_fu_23874_p1.read().is_01() || !x_V_1_62_2_fu_23842_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1248_fu_23874_p1.read()) + sc_biguint<15>(x_V_1_62_2_fu_23842_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_4_fu_34692_p2() {
    p_Val2_4_62_4_fu_34692_p2 = (!tmp_1250_fu_34689_p1.read().is_01() || !x_V_1_62_3_reg_62567.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1250_fu_34689_p1.read()) + sc_biguint<15>(x_V_1_62_3_reg_62567.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_5_fu_34754_p2() {
    p_Val2_4_62_5_fu_34754_p2 = (!tmp_1252_fu_34750_p1.read().is_01() || !x_V_1_62_4_fu_34718_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1252_fu_34750_p1.read()) + sc_biguint<15>(x_V_1_62_4_fu_34718_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_6_fu_45557_p2() {
    p_Val2_4_62_6_fu_45557_p2 = (!tmp_1254_fu_45554_p1.read().is_01() || !x_V_1_62_5_reg_64981.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1254_fu_45554_p1.read()) + sc_biguint<15>(x_V_1_62_5_reg_64981.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_62_cast_fu_10714_p1() {
    p_Val2_4_62_cast_fu_10714_p1 = esl_zext<15,14>(p_Val2_4_61_fu_10708_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_62_fu_10826_p2() {
    p_Val2_4_62_fu_10826_p2 = (!x0_V_62_cast_fu_10810_p1.read().is_01() || !y0_V_62_cast_fu_10798_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_62_cast_fu_10810_p1.read()) + sc_biguint<14>(y0_V_62_cast_fu_10798_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_1_fu_10866_p2() {
    p_Val2_4_63_1_fu_10866_p2 = (!tmp_27_63_cast_fu_10862_p1.read().is_01() || !p_Val2_4_63_cast_fu_10832_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_63_cast_fu_10862_p1.read()) + sc_biguint<15>(p_Val2_4_63_cast_fu_10832_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_2_fu_23994_p2() {
    p_Val2_4_63_2_fu_23994_p2 = (!tmp_27_63_1_cast_fu_23990_p1.read().is_01() || !x_V_1_63_1_fu_23956_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_63_1_cast_fu_23990_p1.read()) + sc_biguint<15>(x_V_1_63_1_fu_23956_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_3_fu_24072_p2() {
    p_Val2_4_63_3_fu_24072_p2 = (!tmp_1268_fu_24068_p1.read().is_01() || !x_V_1_63_2_fu_24036_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1268_fu_24068_p1.read()) + sc_biguint<15>(x_V_1_63_2_fu_24036_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_4_fu_34840_p2() {
    p_Val2_4_63_4_fu_34840_p2 = (!tmp_1270_fu_34837_p1.read().is_01() || !x_V_1_63_3_reg_62601.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1270_fu_34837_p1.read()) + sc_biguint<15>(x_V_1_63_3_reg_62601.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_5_fu_34902_p2() {
    p_Val2_4_63_5_fu_34902_p2 = (!tmp_1272_fu_34898_p1.read().is_01() || !x_V_1_63_4_fu_34866_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1272_fu_34898_p1.read()) + sc_biguint<15>(x_V_1_63_4_fu_34866_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_6_fu_45710_p2() {
    p_Val2_4_63_6_fu_45710_p2 = (!tmp_1274_fu_45707_p1.read().is_01() || !x_V_1_63_5_reg_65015.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1274_fu_45707_p1.read()) + sc_biguint<15>(x_V_1_63_5_reg_65015.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_63_cast_fu_10832_p1() {
    p_Val2_4_63_cast_fu_10832_p1 = esl_zext<15,14>(p_Val2_4_62_fu_10826_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_63_fu_10944_p2() {
    p_Val2_4_63_fu_10944_p2 = (!x0_V_63_cast_fu_10928_p1.read().is_01() || !y0_V_63_cast_fu_10916_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_63_cast_fu_10928_p1.read()) + sc_biguint<14>(y0_V_63_cast_fu_10916_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_1_fu_10984_p2() {
    p_Val2_4_64_1_fu_10984_p2 = (!tmp_27_64_cast_fu_10980_p1.read().is_01() || !p_Val2_4_64_cast_fu_10950_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_64_cast_fu_10980_p1.read()) + sc_biguint<15>(p_Val2_4_64_cast_fu_10950_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_2_fu_24188_p2() {
    p_Val2_4_64_2_fu_24188_p2 = (!tmp_27_64_1_cast_fu_24184_p1.read().is_01() || !x_V_1_64_1_fu_24150_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_64_1_cast_fu_24184_p1.read()) + sc_biguint<15>(x_V_1_64_1_fu_24150_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_3_fu_24266_p2() {
    p_Val2_4_64_3_fu_24266_p2 = (!tmp_1288_fu_24262_p1.read().is_01() || !x_V_1_64_2_fu_24230_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1288_fu_24262_p1.read()) + sc_biguint<15>(x_V_1_64_2_fu_24230_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_4_fu_34988_p2() {
    p_Val2_4_64_4_fu_34988_p2 = (!tmp_1290_fu_34985_p1.read().is_01() || !x_V_1_64_3_reg_62635.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1290_fu_34985_p1.read()) + sc_biguint<15>(x_V_1_64_3_reg_62635.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_5_fu_35050_p2() {
    p_Val2_4_64_5_fu_35050_p2 = (!tmp_1292_fu_35046_p1.read().is_01() || !x_V_1_64_4_fu_35014_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1292_fu_35046_p1.read()) + sc_biguint<15>(x_V_1_64_4_fu_35014_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_6_fu_45863_p2() {
    p_Val2_4_64_6_fu_45863_p2 = (!tmp_1294_fu_45860_p1.read().is_01() || !x_V_1_64_5_reg_65049.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1294_fu_45860_p1.read()) + sc_biguint<15>(x_V_1_64_5_reg_65049.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_64_cast_fu_10950_p1() {
    p_Val2_4_64_cast_fu_10950_p1 = esl_zext<15,14>(p_Val2_4_63_fu_10944_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_64_fu_11062_p2() {
    p_Val2_4_64_fu_11062_p2 = (!x0_V_64_cast_fu_11046_p1.read().is_01() || !y0_V_64_cast_fu_11034_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_64_cast_fu_11046_p1.read()) + sc_biguint<14>(y0_V_64_cast_fu_11034_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_1_fu_11102_p2() {
    p_Val2_4_65_1_fu_11102_p2 = (!tmp_27_65_cast_fu_11098_p1.read().is_01() || !p_Val2_4_65_cast_fu_11068_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_65_cast_fu_11098_p1.read()) + sc_biguint<15>(p_Val2_4_65_cast_fu_11068_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_2_fu_24382_p2() {
    p_Val2_4_65_2_fu_24382_p2 = (!tmp_27_65_1_cast_fu_24378_p1.read().is_01() || !x_V_1_65_1_fu_24344_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_65_1_cast_fu_24378_p1.read()) + sc_biguint<15>(x_V_1_65_1_fu_24344_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_3_fu_24460_p2() {
    p_Val2_4_65_3_fu_24460_p2 = (!tmp_1308_fu_24456_p1.read().is_01() || !x_V_1_65_2_fu_24424_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1308_fu_24456_p1.read()) + sc_biguint<15>(x_V_1_65_2_fu_24424_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_4_fu_35136_p2() {
    p_Val2_4_65_4_fu_35136_p2 = (!tmp_1310_fu_35133_p1.read().is_01() || !x_V_1_65_3_reg_62669.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1310_fu_35133_p1.read()) + sc_biguint<15>(x_V_1_65_3_reg_62669.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_5_fu_35198_p2() {
    p_Val2_4_65_5_fu_35198_p2 = (!tmp_1312_fu_35194_p1.read().is_01() || !x_V_1_65_4_fu_35162_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1312_fu_35194_p1.read()) + sc_biguint<15>(x_V_1_65_4_fu_35162_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_6_fu_46016_p2() {
    p_Val2_4_65_6_fu_46016_p2 = (!tmp_1314_fu_46013_p1.read().is_01() || !x_V_1_65_5_reg_65083.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1314_fu_46013_p1.read()) + sc_biguint<15>(x_V_1_65_5_reg_65083.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_65_cast_fu_11068_p1() {
    p_Val2_4_65_cast_fu_11068_p1 = esl_zext<15,14>(p_Val2_4_64_fu_11062_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_65_fu_11180_p2() {
    p_Val2_4_65_fu_11180_p2 = (!x0_V_65_cast_fu_11164_p1.read().is_01() || !y0_V_65_cast_fu_11152_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_65_cast_fu_11164_p1.read()) + sc_biguint<14>(y0_V_65_cast_fu_11152_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_1_fu_11220_p2() {
    p_Val2_4_66_1_fu_11220_p2 = (!tmp_27_66_cast_fu_11216_p1.read().is_01() || !p_Val2_4_66_cast_fu_11186_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_66_cast_fu_11216_p1.read()) + sc_biguint<15>(p_Val2_4_66_cast_fu_11186_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_2_fu_24576_p2() {
    p_Val2_4_66_2_fu_24576_p2 = (!tmp_27_66_1_cast_fu_24572_p1.read().is_01() || !x_V_1_66_1_fu_24538_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_66_1_cast_fu_24572_p1.read()) + sc_biguint<15>(x_V_1_66_1_fu_24538_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_3_fu_24654_p2() {
    p_Val2_4_66_3_fu_24654_p2 = (!tmp_1328_fu_24650_p1.read().is_01() || !x_V_1_66_2_fu_24618_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1328_fu_24650_p1.read()) + sc_biguint<15>(x_V_1_66_2_fu_24618_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_4_fu_35284_p2() {
    p_Val2_4_66_4_fu_35284_p2 = (!tmp_1330_fu_35281_p1.read().is_01() || !x_V_1_66_3_reg_62703.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1330_fu_35281_p1.read()) + sc_biguint<15>(x_V_1_66_3_reg_62703.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_5_fu_35346_p2() {
    p_Val2_4_66_5_fu_35346_p2 = (!tmp_1332_fu_35342_p1.read().is_01() || !x_V_1_66_4_fu_35310_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1332_fu_35342_p1.read()) + sc_biguint<15>(x_V_1_66_4_fu_35310_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_6_fu_46169_p2() {
    p_Val2_4_66_6_fu_46169_p2 = (!tmp_1334_fu_46166_p1.read().is_01() || !x_V_1_66_5_reg_65117.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1334_fu_46166_p1.read()) + sc_biguint<15>(x_V_1_66_5_reg_65117.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_66_cast_fu_11186_p1() {
    p_Val2_4_66_cast_fu_11186_p1 = esl_zext<15,14>(p_Val2_4_65_fu_11180_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_66_fu_11298_p2() {
    p_Val2_4_66_fu_11298_p2 = (!x0_V_66_cast_fu_11282_p1.read().is_01() || !y0_V_66_cast_fu_11270_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_66_cast_fu_11282_p1.read()) + sc_biguint<14>(y0_V_66_cast_fu_11270_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_1_fu_11338_p2() {
    p_Val2_4_67_1_fu_11338_p2 = (!tmp_27_67_cast_fu_11334_p1.read().is_01() || !p_Val2_4_67_cast_fu_11304_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_67_cast_fu_11334_p1.read()) + sc_biguint<15>(p_Val2_4_67_cast_fu_11304_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_2_fu_24770_p2() {
    p_Val2_4_67_2_fu_24770_p2 = (!tmp_27_67_1_cast_fu_24766_p1.read().is_01() || !x_V_1_67_1_fu_24732_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_67_1_cast_fu_24766_p1.read()) + sc_biguint<15>(x_V_1_67_1_fu_24732_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_3_fu_24848_p2() {
    p_Val2_4_67_3_fu_24848_p2 = (!tmp_1348_fu_24844_p1.read().is_01() || !x_V_1_67_2_fu_24812_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1348_fu_24844_p1.read()) + sc_biguint<15>(x_V_1_67_2_fu_24812_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_4_fu_35432_p2() {
    p_Val2_4_67_4_fu_35432_p2 = (!tmp_1350_fu_35429_p1.read().is_01() || !x_V_1_67_3_reg_62737.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1350_fu_35429_p1.read()) + sc_biguint<15>(x_V_1_67_3_reg_62737.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_5_fu_35494_p2() {
    p_Val2_4_67_5_fu_35494_p2 = (!tmp_1352_fu_35490_p1.read().is_01() || !x_V_1_67_4_fu_35458_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1352_fu_35490_p1.read()) + sc_biguint<15>(x_V_1_67_4_fu_35458_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_6_fu_46322_p2() {
    p_Val2_4_67_6_fu_46322_p2 = (!tmp_1354_fu_46319_p1.read().is_01() || !x_V_1_67_5_reg_65151.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1354_fu_46319_p1.read()) + sc_biguint<15>(x_V_1_67_5_reg_65151.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_67_cast_fu_11304_p1() {
    p_Val2_4_67_cast_fu_11304_p1 = esl_zext<15,14>(p_Val2_4_66_fu_11298_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_67_fu_11416_p2() {
    p_Val2_4_67_fu_11416_p2 = (!x0_V_67_cast_fu_11400_p1.read().is_01() || !y0_V_67_cast_fu_11388_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_67_cast_fu_11400_p1.read()) + sc_biguint<14>(y0_V_67_cast_fu_11388_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_1_fu_11456_p2() {
    p_Val2_4_68_1_fu_11456_p2 = (!tmp_27_68_cast_fu_11452_p1.read().is_01() || !p_Val2_4_68_cast_fu_11422_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_68_cast_fu_11452_p1.read()) + sc_biguint<15>(p_Val2_4_68_cast_fu_11422_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_2_fu_24964_p2() {
    p_Val2_4_68_2_fu_24964_p2 = (!tmp_27_68_1_cast_fu_24960_p1.read().is_01() || !x_V_1_68_1_fu_24926_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_68_1_cast_fu_24960_p1.read()) + sc_biguint<15>(x_V_1_68_1_fu_24926_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_3_fu_25042_p2() {
    p_Val2_4_68_3_fu_25042_p2 = (!tmp_1368_fu_25038_p1.read().is_01() || !x_V_1_68_2_fu_25006_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1368_fu_25038_p1.read()) + sc_biguint<15>(x_V_1_68_2_fu_25006_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_4_fu_35580_p2() {
    p_Val2_4_68_4_fu_35580_p2 = (!tmp_1370_fu_35577_p1.read().is_01() || !x_V_1_68_3_reg_62771.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1370_fu_35577_p1.read()) + sc_biguint<15>(x_V_1_68_3_reg_62771.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_5_fu_35642_p2() {
    p_Val2_4_68_5_fu_35642_p2 = (!tmp_1372_fu_35638_p1.read().is_01() || !x_V_1_68_4_fu_35606_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1372_fu_35638_p1.read()) + sc_biguint<15>(x_V_1_68_4_fu_35606_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_6_fu_46475_p2() {
    p_Val2_4_68_6_fu_46475_p2 = (!tmp_1374_fu_46472_p1.read().is_01() || !x_V_1_68_5_reg_65185.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1374_fu_46472_p1.read()) + sc_biguint<15>(x_V_1_68_5_reg_65185.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_68_cast_fu_11422_p1() {
    p_Val2_4_68_cast_fu_11422_p1 = esl_zext<15,14>(p_Val2_4_67_fu_11416_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_68_fu_11534_p2() {
    p_Val2_4_68_fu_11534_p2 = (!x0_V_68_cast_fu_11518_p1.read().is_01() || !y0_V_68_cast_fu_11506_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_68_cast_fu_11518_p1.read()) + sc_biguint<14>(y0_V_68_cast_fu_11506_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_1_fu_11574_p2() {
    p_Val2_4_69_1_fu_11574_p2 = (!tmp_27_69_cast_fu_11570_p1.read().is_01() || !p_Val2_4_69_cast_fu_11540_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_69_cast_fu_11570_p1.read()) + sc_biguint<15>(p_Val2_4_69_cast_fu_11540_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_2_fu_25158_p2() {
    p_Val2_4_69_2_fu_25158_p2 = (!tmp_27_69_1_cast_fu_25154_p1.read().is_01() || !x_V_1_69_1_fu_25120_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_69_1_cast_fu_25154_p1.read()) + sc_biguint<15>(x_V_1_69_1_fu_25120_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_3_fu_25236_p2() {
    p_Val2_4_69_3_fu_25236_p2 = (!tmp_1388_fu_25232_p1.read().is_01() || !x_V_1_69_2_fu_25200_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1388_fu_25232_p1.read()) + sc_biguint<15>(x_V_1_69_2_fu_25200_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_4_fu_35728_p2() {
    p_Val2_4_69_4_fu_35728_p2 = (!tmp_1390_fu_35725_p1.read().is_01() || !x_V_1_69_3_reg_62805.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1390_fu_35725_p1.read()) + sc_biguint<15>(x_V_1_69_3_reg_62805.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_5_fu_35790_p2() {
    p_Val2_4_69_5_fu_35790_p2 = (!tmp_1392_fu_35786_p1.read().is_01() || !x_V_1_69_4_fu_35754_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1392_fu_35786_p1.read()) + sc_biguint<15>(x_V_1_69_4_fu_35754_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_6_fu_46628_p2() {
    p_Val2_4_69_6_fu_46628_p2 = (!tmp_1394_fu_46625_p1.read().is_01() || !x_V_1_69_5_reg_65219.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1394_fu_46625_p1.read()) + sc_biguint<15>(x_V_1_69_5_reg_65219.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_69_cast_fu_11540_p1() {
    p_Val2_4_69_cast_fu_11540_p1 = esl_zext<15,14>(p_Val2_4_68_fu_11534_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_69_fu_11652_p2() {
    p_Val2_4_69_fu_11652_p2 = (!x0_V_69_cast_fu_11636_p1.read().is_01() || !y0_V_69_cast_fu_11624_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_69_cast_fu_11636_p1.read()) + sc_biguint<14>(y0_V_69_cast_fu_11624_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_1_fu_4140_p2() {
    p_Val2_4_6_1_fu_4140_p2 = (!tmp_27_6_cast_fu_4136_p1.read().is_01() || !p_Val2_4_6_cast_fu_4106_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_6_cast_fu_4136_p1.read()) + sc_biguint<15>(p_Val2_4_6_cast_fu_4106_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_2_fu_12936_p2() {
    p_Val2_4_6_2_fu_12936_p2 = (!tmp_27_6_1_cast_fu_12932_p1.read().is_01() || !x_V_1_6_1_fu_12898_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_6_1_cast_fu_12932_p1.read()) + sc_biguint<15>(x_V_1_6_1_fu_12898_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_3_fu_13014_p2() {
    p_Val2_4_6_3_fu_13014_p2 = (!tmp_128_fu_13010_p1.read().is_01() || !x_V_1_6_2_fu_12978_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_128_fu_13010_p1.read()) + sc_biguint<15>(x_V_1_6_2_fu_12978_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_4_fu_26404_p2() {
    p_Val2_4_6_4_fu_26404_p2 = (!tmp_130_fu_26401_p1.read().is_01() || !x_V_1_6_3_reg_60663.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_130_fu_26401_p1.read()) + sc_biguint<15>(x_V_1_6_3_reg_60663.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_5_fu_26466_p2() {
    p_Val2_4_6_5_fu_26466_p2 = (!tmp_132_fu_26462_p1.read().is_01() || !x_V_1_6_4_fu_26430_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_132_fu_26462_p1.read()) + sc_biguint<15>(x_V_1_6_4_fu_26430_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_6_fu_36989_p2() {
    p_Val2_4_6_6_fu_36989_p2 = (!tmp_134_fu_36986_p1.read().is_01() || !x_V_1_6_5_reg_63077.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_134_fu_36986_p1.read()) + sc_biguint<15>(x_V_1_6_5_reg_63077.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_6_cast_fu_4106_p1() {
    p_Val2_4_6_cast_fu_4106_p1 = esl_zext<15,14>(p_Val2_4_6_fu_4100_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_6_fu_4100_p2() {
    p_Val2_4_6_fu_4100_p2 = (!x0_V_6_cast_fu_4084_p1.read().is_01() || !y0_V_6_cast_fu_4072_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_6_cast_fu_4084_p1.read()) + sc_biguint<14>(y0_V_6_cast_fu_4072_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_1_fu_11692_p2() {
    p_Val2_4_70_1_fu_11692_p2 = (!tmp_27_70_cast_fu_11688_p1.read().is_01() || !p_Val2_4_70_cast_fu_11658_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_70_cast_fu_11688_p1.read()) + sc_biguint<15>(p_Val2_4_70_cast_fu_11658_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_2_fu_25352_p2() {
    p_Val2_4_70_2_fu_25352_p2 = (!tmp_27_70_1_cast_fu_25348_p1.read().is_01() || !x_V_1_70_1_fu_25314_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_70_1_cast_fu_25348_p1.read()) + sc_biguint<15>(x_V_1_70_1_fu_25314_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_3_fu_25430_p2() {
    p_Val2_4_70_3_fu_25430_p2 = (!tmp_1408_fu_25426_p1.read().is_01() || !x_V_1_70_2_fu_25394_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1408_fu_25426_p1.read()) + sc_biguint<15>(x_V_1_70_2_fu_25394_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_4_fu_35876_p2() {
    p_Val2_4_70_4_fu_35876_p2 = (!tmp_1410_fu_35873_p1.read().is_01() || !x_V_1_70_3_reg_62839.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1410_fu_35873_p1.read()) + sc_biguint<15>(x_V_1_70_3_reg_62839.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_5_fu_35938_p2() {
    p_Val2_4_70_5_fu_35938_p2 = (!tmp_1412_fu_35934_p1.read().is_01() || !x_V_1_70_4_fu_35902_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1412_fu_35934_p1.read()) + sc_biguint<15>(x_V_1_70_4_fu_35902_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_6_fu_46781_p2() {
    p_Val2_4_70_6_fu_46781_p2 = (!tmp_1414_fu_46778_p1.read().is_01() || !x_V_1_70_5_reg_65253.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1414_fu_46778_p1.read()) + sc_biguint<15>(x_V_1_70_5_reg_65253.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_70_cast_fu_11658_p1() {
    p_Val2_4_70_cast_fu_11658_p1 = esl_zext<15,14>(p_Val2_4_69_fu_11652_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_7_1_fu_4258_p2() {
    p_Val2_4_7_1_fu_4258_p2 = (!tmp_27_7_cast_fu_4254_p1.read().is_01() || !p_Val2_4_7_cast_fu_4224_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_7_cast_fu_4254_p1.read()) + sc_biguint<15>(p_Val2_4_7_cast_fu_4224_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_2_fu_13130_p2() {
    p_Val2_4_7_2_fu_13130_p2 = (!tmp_27_7_1_cast_fu_13126_p1.read().is_01() || !x_V_1_7_1_fu_13092_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_7_1_cast_fu_13126_p1.read()) + sc_biguint<15>(x_V_1_7_1_fu_13092_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_3_fu_13208_p2() {
    p_Val2_4_7_3_fu_13208_p2 = (!tmp_148_fu_13204_p1.read().is_01() || !x_V_1_7_2_fu_13172_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_148_fu_13204_p1.read()) + sc_biguint<15>(x_V_1_7_2_fu_13172_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_4_fu_26552_p2() {
    p_Val2_4_7_4_fu_26552_p2 = (!tmp_150_fu_26549_p1.read().is_01() || !x_V_1_7_3_reg_60697.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_150_fu_26549_p1.read()) + sc_biguint<15>(x_V_1_7_3_reg_60697.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_5_fu_26614_p2() {
    p_Val2_4_7_5_fu_26614_p2 = (!tmp_152_fu_26610_p1.read().is_01() || !x_V_1_7_4_fu_26578_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_152_fu_26610_p1.read()) + sc_biguint<15>(x_V_1_7_4_fu_26578_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_6_fu_37142_p2() {
    p_Val2_4_7_6_fu_37142_p2 = (!tmp_154_fu_37139_p1.read().is_01() || !x_V_1_7_5_reg_63111.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_154_fu_37139_p1.read()) + sc_biguint<15>(x_V_1_7_5_reg_63111.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_7_cast_fu_4224_p1() {
    p_Val2_4_7_cast_fu_4224_p1 = esl_zext<15,14>(p_Val2_4_7_fu_4218_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_7_fu_4218_p2() {
    p_Val2_4_7_fu_4218_p2 = (!x0_V_7_cast_fu_4202_p1.read().is_01() || !y0_V_7_cast_fu_4190_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_7_cast_fu_4202_p1.read()) + sc_biguint<14>(y0_V_7_cast_fu_4190_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_1_fu_4376_p2() {
    p_Val2_4_8_1_fu_4376_p2 = (!tmp_27_8_cast_fu_4372_p1.read().is_01() || !p_Val2_4_8_cast_fu_4342_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_8_cast_fu_4372_p1.read()) + sc_biguint<15>(p_Val2_4_8_cast_fu_4342_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_2_fu_13324_p2() {
    p_Val2_4_8_2_fu_13324_p2 = (!tmp_27_8_1_cast_fu_13320_p1.read().is_01() || !x_V_1_8_1_fu_13286_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_8_1_cast_fu_13320_p1.read()) + sc_biguint<15>(x_V_1_8_1_fu_13286_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_3_fu_13402_p2() {
    p_Val2_4_8_3_fu_13402_p2 = (!tmp_168_fu_13398_p1.read().is_01() || !x_V_1_8_2_fu_13366_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_168_fu_13398_p1.read()) + sc_biguint<15>(x_V_1_8_2_fu_13366_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_4_fu_26700_p2() {
    p_Val2_4_8_4_fu_26700_p2 = (!tmp_170_fu_26697_p1.read().is_01() || !x_V_1_8_3_reg_60731.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_170_fu_26697_p1.read()) + sc_biguint<15>(x_V_1_8_3_reg_60731.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_5_fu_26762_p2() {
    p_Val2_4_8_5_fu_26762_p2 = (!tmp_172_fu_26758_p1.read().is_01() || !x_V_1_8_4_fu_26726_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_172_fu_26758_p1.read()) + sc_biguint<15>(x_V_1_8_4_fu_26726_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_6_fu_37295_p2() {
    p_Val2_4_8_6_fu_37295_p2 = (!tmp_174_fu_37292_p1.read().is_01() || !x_V_1_8_5_reg_63145.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_174_fu_37292_p1.read()) + sc_biguint<15>(x_V_1_8_5_reg_63145.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_8_cast_fu_4342_p1() {
    p_Val2_4_8_cast_fu_4342_p1 = esl_zext<15,14>(p_Val2_4_8_fu_4336_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_8_fu_4336_p2() {
    p_Val2_4_8_fu_4336_p2 = (!x0_V_8_cast_fu_4320_p1.read().is_01() || !y0_V_8_cast_fu_4308_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_8_cast_fu_4320_p1.read()) + sc_biguint<14>(y0_V_8_cast_fu_4308_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_1_fu_4494_p2() {
    p_Val2_4_9_1_fu_4494_p2 = (!tmp_27_9_cast_fu_4490_p1.read().is_01() || !p_Val2_4_9_cast_fu_4460_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_9_cast_fu_4490_p1.read()) + sc_biguint<15>(p_Val2_4_9_cast_fu_4460_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_2_fu_13518_p2() {
    p_Val2_4_9_2_fu_13518_p2 = (!tmp_27_9_1_cast_fu_13514_p1.read().is_01() || !x_V_1_9_1_fu_13480_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_27_9_1_cast_fu_13514_p1.read()) + sc_biguint<15>(x_V_1_9_1_fu_13480_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_3_fu_13596_p2() {
    p_Val2_4_9_3_fu_13596_p2 = (!tmp_188_fu_13592_p1.read().is_01() || !x_V_1_9_2_fu_13560_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_188_fu_13592_p1.read()) + sc_biguint<15>(x_V_1_9_2_fu_13560_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_4_fu_26848_p2() {
    p_Val2_4_9_4_fu_26848_p2 = (!tmp_190_fu_26845_p1.read().is_01() || !x_V_1_9_3_reg_60765.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_190_fu_26845_p1.read()) + sc_biguint<15>(x_V_1_9_3_reg_60765.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_5_fu_26910_p2() {
    p_Val2_4_9_5_fu_26910_p2 = (!tmp_192_fu_26906_p1.read().is_01() || !x_V_1_9_4_fu_26874_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_192_fu_26906_p1.read()) + sc_biguint<15>(x_V_1_9_4_fu_26874_p3.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_6_fu_37448_p2() {
    p_Val2_4_9_6_fu_37448_p2 = (!tmp_194_fu_37445_p1.read().is_01() || !x_V_1_9_5_reg_63179.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_194_fu_37445_p1.read()) + sc_biguint<15>(x_V_1_9_5_reg_63179.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_9_cast_fu_4460_p1() {
    p_Val2_4_9_cast_fu_4460_p1 = esl_zext<15,14>(p_Val2_4_9_fu_4454_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_4_9_fu_4454_p2() {
    p_Val2_4_9_fu_4454_p2 = (!x0_V_9_cast_fu_4438_p1.read().is_01() || !y0_V_9_cast_fu_4426_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_9_cast_fu_4438_p1.read()) + sc_biguint<14>(y0_V_9_cast_fu_4426_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_fu_3392_p2() {
    p_Val2_4_fu_3392_p2 = (!x0_V_cast_fu_3376_p1.read().is_01() || !y0_V_cast_fu_3364_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_cast_fu_3376_p1.read()) + sc_biguint<14>(y0_V_cast_fu_3364_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_4_s_fu_4572_p2() {
    p_Val2_4_s_fu_4572_p2 = (!x0_V_cast_1175_fu_4556_p1.read().is_01() || !y0_V_cast_1174_fu_4544_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(x0_V_cast_1175_fu_4556_p1.read()) + sc_biguint<14>(y0_V_cast_1174_fu_4544_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_6_0_2_fu_11788_p1() {
    p_Val2_6_0_2_fu_11788_p1 = esl_sext<15,13>(tmp_6_fu_11778_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_0_3_fu_11866_p1() {
    p_Val2_6_0_3_fu_11866_p1 = esl_sext<15,12>(tmp_7_fu_11856_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_0_4_fu_25521_p1() {
    p_Val2_6_0_4_fu_25521_p1 = esl_sext<15,11>(tmp_10_reg_60478.read());
}

void Sobel_phase_strm::thread_p_Val2_6_0_5_fu_25594_p1() {
    p_Val2_6_0_5_fu_25594_p1 = esl_sext<15,10>(tmp_12_fu_25584_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_0_6_fu_36076_p1() {
    p_Val2_6_0_6_fu_36076_p1 = esl_sext<15,9>(tmp_14_reg_62892.read());
}

void Sobel_phase_strm::thread_p_Val2_6_0_7_fu_36139_p1() {
    p_Val2_6_0_7_fu_36139_p1 = esl_sext<15,8>(tmp_17_fu_36131_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_2_fu_13728_p1() {
    p_Val2_6_10_2_fu_13728_p1 = esl_sext<15,13>(tmp_207_fu_13718_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_3_fu_13806_p1() {
    p_Val2_6_10_3_fu_13806_p1 = esl_sext<15,12>(tmp_209_fu_13796_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_4_fu_27001_p1() {
    p_Val2_6_10_4_fu_27001_p1 = esl_sext<15,11>(tmp_211_reg_60818.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_5_fu_27074_p1() {
    p_Val2_6_10_5_fu_27074_p1 = esl_sext<15,10>(tmp_213_fu_27064_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_6_fu_37606_p1() {
    p_Val2_6_10_6_fu_37606_p1 = esl_sext<15,9>(tmp_215_reg_63232.read());
}

void Sobel_phase_strm::thread_p_Val2_6_10_7_fu_37669_p1() {
    p_Val2_6_10_7_fu_37669_p1 = esl_sext<15,8>(tmp_218_fu_37661_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_2_fu_13922_p1() {
    p_Val2_6_11_2_fu_13922_p1 = esl_sext<15,13>(tmp_227_fu_13912_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_3_fu_14000_p1() {
    p_Val2_6_11_3_fu_14000_p1 = esl_sext<15,12>(tmp_229_fu_13990_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_4_fu_27149_p1() {
    p_Val2_6_11_4_fu_27149_p1 = esl_sext<15,11>(tmp_231_reg_60852.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_5_fu_27222_p1() {
    p_Val2_6_11_5_fu_27222_p1 = esl_sext<15,10>(tmp_233_fu_27212_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_6_fu_37759_p1() {
    p_Val2_6_11_6_fu_37759_p1 = esl_sext<15,9>(tmp_235_reg_63266.read());
}

void Sobel_phase_strm::thread_p_Val2_6_11_7_fu_37822_p1() {
    p_Val2_6_11_7_fu_37822_p1 = esl_sext<15,8>(tmp_238_fu_37814_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_2_fu_14116_p1() {
    p_Val2_6_12_2_fu_14116_p1 = esl_sext<15,13>(tmp_247_fu_14106_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_3_fu_14194_p1() {
    p_Val2_6_12_3_fu_14194_p1 = esl_sext<15,12>(tmp_249_fu_14184_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_4_fu_27297_p1() {
    p_Val2_6_12_4_fu_27297_p1 = esl_sext<15,11>(tmp_251_reg_60886.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_5_fu_27370_p1() {
    p_Val2_6_12_5_fu_27370_p1 = esl_sext<15,10>(tmp_253_fu_27360_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_6_fu_37912_p1() {
    p_Val2_6_12_6_fu_37912_p1 = esl_sext<15,9>(tmp_255_reg_63300.read());
}

void Sobel_phase_strm::thread_p_Val2_6_12_7_fu_37975_p1() {
    p_Val2_6_12_7_fu_37975_p1 = esl_sext<15,8>(tmp_258_fu_37967_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_2_fu_14310_p1() {
    p_Val2_6_13_2_fu_14310_p1 = esl_sext<15,13>(tmp_267_fu_14300_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_3_fu_14388_p1() {
    p_Val2_6_13_3_fu_14388_p1 = esl_sext<15,12>(tmp_269_fu_14378_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_4_fu_27445_p1() {
    p_Val2_6_13_4_fu_27445_p1 = esl_sext<15,11>(tmp_271_reg_60920.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_5_fu_27518_p1() {
    p_Val2_6_13_5_fu_27518_p1 = esl_sext<15,10>(tmp_273_fu_27508_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_6_fu_38065_p1() {
    p_Val2_6_13_6_fu_38065_p1 = esl_sext<15,9>(tmp_275_reg_63334.read());
}

void Sobel_phase_strm::thread_p_Val2_6_13_7_fu_38128_p1() {
    p_Val2_6_13_7_fu_38128_p1 = esl_sext<15,8>(tmp_278_fu_38120_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_2_fu_14504_p1() {
    p_Val2_6_14_2_fu_14504_p1 = esl_sext<15,13>(tmp_287_fu_14494_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_3_fu_14582_p1() {
    p_Val2_6_14_3_fu_14582_p1 = esl_sext<15,12>(tmp_289_fu_14572_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_4_fu_27593_p1() {
    p_Val2_6_14_4_fu_27593_p1 = esl_sext<15,11>(tmp_291_reg_60954.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_5_fu_27666_p1() {
    p_Val2_6_14_5_fu_27666_p1 = esl_sext<15,10>(tmp_293_fu_27656_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_6_fu_38218_p1() {
    p_Val2_6_14_6_fu_38218_p1 = esl_sext<15,9>(tmp_295_reg_63368.read());
}

void Sobel_phase_strm::thread_p_Val2_6_14_7_fu_38281_p1() {
    p_Val2_6_14_7_fu_38281_p1 = esl_sext<15,8>(tmp_298_fu_38273_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_2_fu_14698_p1() {
    p_Val2_6_15_2_fu_14698_p1 = esl_sext<15,13>(tmp_307_fu_14688_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_3_fu_14776_p1() {
    p_Val2_6_15_3_fu_14776_p1 = esl_sext<15,12>(tmp_309_fu_14766_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_4_fu_27741_p1() {
    p_Val2_6_15_4_fu_27741_p1 = esl_sext<15,11>(tmp_311_reg_60988.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_5_fu_27814_p1() {
    p_Val2_6_15_5_fu_27814_p1 = esl_sext<15,10>(tmp_313_fu_27804_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_6_fu_38371_p1() {
    p_Val2_6_15_6_fu_38371_p1 = esl_sext<15,9>(tmp_315_reg_63402.read());
}

void Sobel_phase_strm::thread_p_Val2_6_15_7_fu_38434_p1() {
    p_Val2_6_15_7_fu_38434_p1 = esl_sext<15,8>(tmp_318_fu_38426_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_2_fu_14892_p1() {
    p_Val2_6_16_2_fu_14892_p1 = esl_sext<15,13>(tmp_327_fu_14882_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_3_fu_14970_p1() {
    p_Val2_6_16_3_fu_14970_p1 = esl_sext<15,12>(tmp_329_fu_14960_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_4_fu_27889_p1() {
    p_Val2_6_16_4_fu_27889_p1 = esl_sext<15,11>(tmp_331_reg_61022.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_5_fu_27962_p1() {
    p_Val2_6_16_5_fu_27962_p1 = esl_sext<15,10>(tmp_333_fu_27952_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_6_fu_38524_p1() {
    p_Val2_6_16_6_fu_38524_p1 = esl_sext<15,9>(tmp_335_reg_63436.read());
}

void Sobel_phase_strm::thread_p_Val2_6_16_7_fu_38587_p1() {
    p_Val2_6_16_7_fu_38587_p1 = esl_sext<15,8>(tmp_338_fu_38579_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_2_fu_15086_p1() {
    p_Val2_6_17_2_fu_15086_p1 = esl_sext<15,13>(tmp_347_fu_15076_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_3_fu_15164_p1() {
    p_Val2_6_17_3_fu_15164_p1 = esl_sext<15,12>(tmp_349_fu_15154_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_4_fu_28037_p1() {
    p_Val2_6_17_4_fu_28037_p1 = esl_sext<15,11>(tmp_351_reg_61056.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_5_fu_28110_p1() {
    p_Val2_6_17_5_fu_28110_p1 = esl_sext<15,10>(tmp_353_fu_28100_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_6_fu_38677_p1() {
    p_Val2_6_17_6_fu_38677_p1 = esl_sext<15,9>(tmp_355_reg_63470.read());
}

void Sobel_phase_strm::thread_p_Val2_6_17_7_fu_38740_p1() {
    p_Val2_6_17_7_fu_38740_p1 = esl_sext<15,8>(tmp_358_fu_38732_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_2_fu_15280_p1() {
    p_Val2_6_18_2_fu_15280_p1 = esl_sext<15,13>(tmp_367_fu_15270_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_3_fu_15358_p1() {
    p_Val2_6_18_3_fu_15358_p1 = esl_sext<15,12>(tmp_369_fu_15348_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_4_fu_28185_p1() {
    p_Val2_6_18_4_fu_28185_p1 = esl_sext<15,11>(tmp_371_reg_61090.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_5_fu_28258_p1() {
    p_Val2_6_18_5_fu_28258_p1 = esl_sext<15,10>(tmp_373_fu_28248_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_6_fu_38830_p1() {
    p_Val2_6_18_6_fu_38830_p1 = esl_sext<15,9>(tmp_375_reg_63504.read());
}

void Sobel_phase_strm::thread_p_Val2_6_18_7_fu_38893_p1() {
    p_Val2_6_18_7_fu_38893_p1 = esl_sext<15,8>(tmp_378_fu_38885_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_2_fu_15474_p1() {
    p_Val2_6_19_2_fu_15474_p1 = esl_sext<15,13>(tmp_387_fu_15464_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_3_fu_15552_p1() {
    p_Val2_6_19_3_fu_15552_p1 = esl_sext<15,12>(tmp_389_fu_15542_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_4_fu_28333_p1() {
    p_Val2_6_19_4_fu_28333_p1 = esl_sext<15,11>(tmp_391_reg_61124.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_5_fu_28406_p1() {
    p_Val2_6_19_5_fu_28406_p1 = esl_sext<15,10>(tmp_393_fu_28396_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_6_fu_38983_p1() {
    p_Val2_6_19_6_fu_38983_p1 = esl_sext<15,9>(tmp_395_reg_63538.read());
}

void Sobel_phase_strm::thread_p_Val2_6_19_7_fu_39046_p1() {
    p_Val2_6_19_7_fu_39046_p1 = esl_sext<15,8>(tmp_398_fu_39038_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_2_fu_11982_p1() {
    p_Val2_6_1_2_fu_11982_p1 = esl_sext<15,13>(tmp_27_fu_11972_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_3_fu_12060_p1() {
    p_Val2_6_1_3_fu_12060_p1 = esl_sext<15,12>(tmp_29_fu_12050_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_4_fu_25669_p1() {
    p_Val2_6_1_4_fu_25669_p1 = esl_sext<15,11>(tmp_31_reg_60512.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_5_fu_25742_p1() {
    p_Val2_6_1_5_fu_25742_p1 = esl_sext<15,10>(tmp_33_fu_25732_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_6_fu_36229_p1() {
    p_Val2_6_1_6_fu_36229_p1 = esl_sext<15,9>(tmp_35_reg_62926.read());
}

void Sobel_phase_strm::thread_p_Val2_6_1_7_fu_36292_p1() {
    p_Val2_6_1_7_fu_36292_p1 = esl_sext<15,8>(tmp_38_fu_36284_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_2_fu_15668_p1() {
    p_Val2_6_20_2_fu_15668_p1 = esl_sext<15,13>(tmp_407_fu_15658_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_3_fu_15746_p1() {
    p_Val2_6_20_3_fu_15746_p1 = esl_sext<15,12>(tmp_409_fu_15736_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_4_fu_28481_p1() {
    p_Val2_6_20_4_fu_28481_p1 = esl_sext<15,11>(tmp_411_reg_61158.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_5_fu_28554_p1() {
    p_Val2_6_20_5_fu_28554_p1 = esl_sext<15,10>(tmp_413_fu_28544_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_6_fu_39136_p1() {
    p_Val2_6_20_6_fu_39136_p1 = esl_sext<15,9>(tmp_415_reg_63572.read());
}

void Sobel_phase_strm::thread_p_Val2_6_20_7_fu_39199_p1() {
    p_Val2_6_20_7_fu_39199_p1 = esl_sext<15,8>(tmp_418_fu_39191_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_2_fu_15862_p1() {
    p_Val2_6_21_2_fu_15862_p1 = esl_sext<15,13>(tmp_427_fu_15852_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_3_fu_15940_p1() {
    p_Val2_6_21_3_fu_15940_p1 = esl_sext<15,12>(tmp_429_fu_15930_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_4_fu_28629_p1() {
    p_Val2_6_21_4_fu_28629_p1 = esl_sext<15,11>(tmp_431_reg_61192.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_5_fu_28702_p1() {
    p_Val2_6_21_5_fu_28702_p1 = esl_sext<15,10>(tmp_433_fu_28692_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_6_fu_39289_p1() {
    p_Val2_6_21_6_fu_39289_p1 = esl_sext<15,9>(tmp_435_reg_63606.read());
}

void Sobel_phase_strm::thread_p_Val2_6_21_7_fu_39352_p1() {
    p_Val2_6_21_7_fu_39352_p1 = esl_sext<15,8>(tmp_438_fu_39344_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_2_fu_16056_p1() {
    p_Val2_6_22_2_fu_16056_p1 = esl_sext<15,13>(tmp_447_fu_16046_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_3_fu_16134_p1() {
    p_Val2_6_22_3_fu_16134_p1 = esl_sext<15,12>(tmp_449_fu_16124_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_4_fu_28777_p1() {
    p_Val2_6_22_4_fu_28777_p1 = esl_sext<15,11>(tmp_451_reg_61226.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_5_fu_28850_p1() {
    p_Val2_6_22_5_fu_28850_p1 = esl_sext<15,10>(tmp_453_fu_28840_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_6_fu_39442_p1() {
    p_Val2_6_22_6_fu_39442_p1 = esl_sext<15,9>(tmp_455_reg_63640.read());
}

void Sobel_phase_strm::thread_p_Val2_6_22_7_fu_39505_p1() {
    p_Val2_6_22_7_fu_39505_p1 = esl_sext<15,8>(tmp_458_fu_39497_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_2_fu_16250_p1() {
    p_Val2_6_23_2_fu_16250_p1 = esl_sext<15,13>(tmp_467_fu_16240_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_3_fu_16328_p1() {
    p_Val2_6_23_3_fu_16328_p1 = esl_sext<15,12>(tmp_469_fu_16318_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_4_fu_28925_p1() {
    p_Val2_6_23_4_fu_28925_p1 = esl_sext<15,11>(tmp_471_reg_61260.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_5_fu_28998_p1() {
    p_Val2_6_23_5_fu_28998_p1 = esl_sext<15,10>(tmp_473_fu_28988_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_6_fu_39595_p1() {
    p_Val2_6_23_6_fu_39595_p1 = esl_sext<15,9>(tmp_475_reg_63674.read());
}

void Sobel_phase_strm::thread_p_Val2_6_23_7_fu_39658_p1() {
    p_Val2_6_23_7_fu_39658_p1 = esl_sext<15,8>(tmp_478_fu_39650_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_2_fu_16444_p1() {
    p_Val2_6_24_2_fu_16444_p1 = esl_sext<15,13>(tmp_487_fu_16434_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_3_fu_16522_p1() {
    p_Val2_6_24_3_fu_16522_p1 = esl_sext<15,12>(tmp_489_fu_16512_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_4_fu_29073_p1() {
    p_Val2_6_24_4_fu_29073_p1 = esl_sext<15,11>(tmp_491_reg_61294.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_5_fu_29146_p1() {
    p_Val2_6_24_5_fu_29146_p1 = esl_sext<15,10>(tmp_493_fu_29136_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_6_fu_39748_p1() {
    p_Val2_6_24_6_fu_39748_p1 = esl_sext<15,9>(tmp_495_reg_63708.read());
}

void Sobel_phase_strm::thread_p_Val2_6_24_7_fu_39811_p1() {
    p_Val2_6_24_7_fu_39811_p1 = esl_sext<15,8>(tmp_498_fu_39803_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_2_fu_16638_p1() {
    p_Val2_6_25_2_fu_16638_p1 = esl_sext<15,13>(tmp_507_fu_16628_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_3_fu_16716_p1() {
    p_Val2_6_25_3_fu_16716_p1 = esl_sext<15,12>(tmp_509_fu_16706_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_4_fu_29221_p1() {
    p_Val2_6_25_4_fu_29221_p1 = esl_sext<15,11>(tmp_511_reg_61328.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_5_fu_29294_p1() {
    p_Val2_6_25_5_fu_29294_p1 = esl_sext<15,10>(tmp_513_fu_29284_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_6_fu_39901_p1() {
    p_Val2_6_25_6_fu_39901_p1 = esl_sext<15,9>(tmp_515_reg_63742.read());
}

void Sobel_phase_strm::thread_p_Val2_6_25_7_fu_39964_p1() {
    p_Val2_6_25_7_fu_39964_p1 = esl_sext<15,8>(tmp_518_fu_39956_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_2_fu_16832_p1() {
    p_Val2_6_26_2_fu_16832_p1 = esl_sext<15,13>(tmp_527_fu_16822_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_3_fu_16910_p1() {
    p_Val2_6_26_3_fu_16910_p1 = esl_sext<15,12>(tmp_529_fu_16900_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_4_fu_29369_p1() {
    p_Val2_6_26_4_fu_29369_p1 = esl_sext<15,11>(tmp_531_reg_61362.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_5_fu_29442_p1() {
    p_Val2_6_26_5_fu_29442_p1 = esl_sext<15,10>(tmp_533_fu_29432_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_6_fu_40054_p1() {
    p_Val2_6_26_6_fu_40054_p1 = esl_sext<15,9>(tmp_535_reg_63776.read());
}

void Sobel_phase_strm::thread_p_Val2_6_26_7_fu_40117_p1() {
    p_Val2_6_26_7_fu_40117_p1 = esl_sext<15,8>(tmp_538_fu_40109_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_2_fu_17026_p1() {
    p_Val2_6_27_2_fu_17026_p1 = esl_sext<15,13>(tmp_547_fu_17016_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_3_fu_17104_p1() {
    p_Val2_6_27_3_fu_17104_p1 = esl_sext<15,12>(tmp_549_fu_17094_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_4_fu_29517_p1() {
    p_Val2_6_27_4_fu_29517_p1 = esl_sext<15,11>(tmp_551_reg_61396.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_5_fu_29590_p1() {
    p_Val2_6_27_5_fu_29590_p1 = esl_sext<15,10>(tmp_553_fu_29580_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_6_fu_40207_p1() {
    p_Val2_6_27_6_fu_40207_p1 = esl_sext<15,9>(tmp_555_reg_63810.read());
}

void Sobel_phase_strm::thread_p_Val2_6_27_7_fu_40270_p1() {
    p_Val2_6_27_7_fu_40270_p1 = esl_sext<15,8>(tmp_558_fu_40262_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_2_fu_17220_p1() {
    p_Val2_6_28_2_fu_17220_p1 = esl_sext<15,13>(tmp_567_fu_17210_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_3_fu_17298_p1() {
    p_Val2_6_28_3_fu_17298_p1 = esl_sext<15,12>(tmp_569_fu_17288_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_4_fu_29665_p1() {
    p_Val2_6_28_4_fu_29665_p1 = esl_sext<15,11>(tmp_571_reg_61430.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_5_fu_29738_p1() {
    p_Val2_6_28_5_fu_29738_p1 = esl_sext<15,10>(tmp_573_fu_29728_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_6_fu_40360_p1() {
    p_Val2_6_28_6_fu_40360_p1 = esl_sext<15,9>(tmp_575_reg_63844.read());
}

void Sobel_phase_strm::thread_p_Val2_6_28_7_fu_40423_p1() {
    p_Val2_6_28_7_fu_40423_p1 = esl_sext<15,8>(tmp_578_fu_40415_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_2_fu_17414_p1() {
    p_Val2_6_29_2_fu_17414_p1 = esl_sext<15,13>(tmp_587_fu_17404_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_3_fu_17492_p1() {
    p_Val2_6_29_3_fu_17492_p1 = esl_sext<15,12>(tmp_589_fu_17482_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_4_fu_29813_p1() {
    p_Val2_6_29_4_fu_29813_p1 = esl_sext<15,11>(tmp_591_reg_61464.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_5_fu_29886_p1() {
    p_Val2_6_29_5_fu_29886_p1 = esl_sext<15,10>(tmp_593_fu_29876_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_6_fu_40513_p1() {
    p_Val2_6_29_6_fu_40513_p1 = esl_sext<15,9>(tmp_595_reg_63878.read());
}

void Sobel_phase_strm::thread_p_Val2_6_29_7_fu_40576_p1() {
    p_Val2_6_29_7_fu_40576_p1 = esl_sext<15,8>(tmp_598_fu_40568_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_2_fu_12176_p1() {
    p_Val2_6_2_2_fu_12176_p1 = esl_sext<15,13>(tmp_47_fu_12166_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_3_fu_12254_p1() {
    p_Val2_6_2_3_fu_12254_p1 = esl_sext<15,12>(tmp_49_fu_12244_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_4_fu_25817_p1() {
    p_Val2_6_2_4_fu_25817_p1 = esl_sext<15,11>(tmp_51_reg_60546.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_5_fu_25890_p1() {
    p_Val2_6_2_5_fu_25890_p1 = esl_sext<15,10>(tmp_53_fu_25880_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_6_fu_36382_p1() {
    p_Val2_6_2_6_fu_36382_p1 = esl_sext<15,9>(tmp_55_reg_62960.read());
}

void Sobel_phase_strm::thread_p_Val2_6_2_7_fu_36445_p1() {
    p_Val2_6_2_7_fu_36445_p1 = esl_sext<15,8>(tmp_58_fu_36437_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_2_fu_17608_p1() {
    p_Val2_6_30_2_fu_17608_p1 = esl_sext<15,13>(tmp_607_fu_17598_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_3_fu_17686_p1() {
    p_Val2_6_30_3_fu_17686_p1 = esl_sext<15,12>(tmp_609_fu_17676_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_4_fu_29961_p1() {
    p_Val2_6_30_4_fu_29961_p1 = esl_sext<15,11>(tmp_611_reg_61498.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_5_fu_30034_p1() {
    p_Val2_6_30_5_fu_30034_p1 = esl_sext<15,10>(tmp_613_fu_30024_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_6_fu_40666_p1() {
    p_Val2_6_30_6_fu_40666_p1 = esl_sext<15,9>(tmp_615_reg_63912.read());
}

void Sobel_phase_strm::thread_p_Val2_6_30_7_fu_40729_p1() {
    p_Val2_6_30_7_fu_40729_p1 = esl_sext<15,8>(tmp_618_fu_40721_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_2_fu_17802_p1() {
    p_Val2_6_31_2_fu_17802_p1 = esl_sext<15,13>(tmp_627_fu_17792_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_3_fu_17880_p1() {
    p_Val2_6_31_3_fu_17880_p1 = esl_sext<15,12>(tmp_629_fu_17870_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_4_fu_30109_p1() {
    p_Val2_6_31_4_fu_30109_p1 = esl_sext<15,11>(tmp_631_reg_61532.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_5_fu_30182_p1() {
    p_Val2_6_31_5_fu_30182_p1 = esl_sext<15,10>(tmp_633_fu_30172_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_6_fu_40819_p1() {
    p_Val2_6_31_6_fu_40819_p1 = esl_sext<15,9>(tmp_635_reg_63946.read());
}

void Sobel_phase_strm::thread_p_Val2_6_31_7_fu_40882_p1() {
    p_Val2_6_31_7_fu_40882_p1 = esl_sext<15,8>(tmp_638_fu_40874_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_2_fu_17996_p1() {
    p_Val2_6_32_2_fu_17996_p1 = esl_sext<15,13>(tmp_647_fu_17986_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_3_fu_18074_p1() {
    p_Val2_6_32_3_fu_18074_p1 = esl_sext<15,12>(tmp_649_fu_18064_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_4_fu_30257_p1() {
    p_Val2_6_32_4_fu_30257_p1 = esl_sext<15,11>(tmp_651_reg_61566.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_5_fu_30330_p1() {
    p_Val2_6_32_5_fu_30330_p1 = esl_sext<15,10>(tmp_653_fu_30320_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_6_fu_40972_p1() {
    p_Val2_6_32_6_fu_40972_p1 = esl_sext<15,9>(tmp_655_reg_63980.read());
}

void Sobel_phase_strm::thread_p_Val2_6_32_7_fu_41035_p1() {
    p_Val2_6_32_7_fu_41035_p1 = esl_sext<15,8>(tmp_658_fu_41027_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_2_fu_18190_p1() {
    p_Val2_6_33_2_fu_18190_p1 = esl_sext<15,13>(tmp_667_fu_18180_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_3_fu_18268_p1() {
    p_Val2_6_33_3_fu_18268_p1 = esl_sext<15,12>(tmp_669_fu_18258_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_4_fu_30405_p1() {
    p_Val2_6_33_4_fu_30405_p1 = esl_sext<15,11>(tmp_671_reg_61600.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_5_fu_30478_p1() {
    p_Val2_6_33_5_fu_30478_p1 = esl_sext<15,10>(tmp_673_fu_30468_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_6_fu_41125_p1() {
    p_Val2_6_33_6_fu_41125_p1 = esl_sext<15,9>(tmp_675_reg_64014.read());
}

void Sobel_phase_strm::thread_p_Val2_6_33_7_fu_41188_p1() {
    p_Val2_6_33_7_fu_41188_p1 = esl_sext<15,8>(tmp_678_fu_41180_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_2_fu_18384_p1() {
    p_Val2_6_34_2_fu_18384_p1 = esl_sext<15,13>(tmp_687_fu_18374_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_3_fu_18462_p1() {
    p_Val2_6_34_3_fu_18462_p1 = esl_sext<15,12>(tmp_689_fu_18452_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_4_fu_30553_p1() {
    p_Val2_6_34_4_fu_30553_p1 = esl_sext<15,11>(tmp_691_reg_61634.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_5_fu_30626_p1() {
    p_Val2_6_34_5_fu_30626_p1 = esl_sext<15,10>(tmp_693_fu_30616_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_6_fu_41278_p1() {
    p_Val2_6_34_6_fu_41278_p1 = esl_sext<15,9>(tmp_695_reg_64048.read());
}

void Sobel_phase_strm::thread_p_Val2_6_34_7_fu_41341_p1() {
    p_Val2_6_34_7_fu_41341_p1 = esl_sext<15,8>(tmp_698_fu_41333_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_2_fu_18578_p1() {
    p_Val2_6_35_2_fu_18578_p1 = esl_sext<15,13>(tmp_707_fu_18568_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_3_fu_18656_p1() {
    p_Val2_6_35_3_fu_18656_p1 = esl_sext<15,12>(tmp_709_fu_18646_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_4_fu_30701_p1() {
    p_Val2_6_35_4_fu_30701_p1 = esl_sext<15,11>(tmp_711_reg_61668.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_5_fu_30774_p1() {
    p_Val2_6_35_5_fu_30774_p1 = esl_sext<15,10>(tmp_713_fu_30764_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_6_fu_41431_p1() {
    p_Val2_6_35_6_fu_41431_p1 = esl_sext<15,9>(tmp_715_reg_64082.read());
}

void Sobel_phase_strm::thread_p_Val2_6_35_7_fu_41494_p1() {
    p_Val2_6_35_7_fu_41494_p1 = esl_sext<15,8>(tmp_718_fu_41486_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_2_fu_18772_p1() {
    p_Val2_6_36_2_fu_18772_p1 = esl_sext<15,13>(tmp_727_fu_18762_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_3_fu_18850_p1() {
    p_Val2_6_36_3_fu_18850_p1 = esl_sext<15,12>(tmp_729_fu_18840_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_4_fu_30849_p1() {
    p_Val2_6_36_4_fu_30849_p1 = esl_sext<15,11>(tmp_731_reg_61702.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_5_fu_30922_p1() {
    p_Val2_6_36_5_fu_30922_p1 = esl_sext<15,10>(tmp_733_fu_30912_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_6_fu_41584_p1() {
    p_Val2_6_36_6_fu_41584_p1 = esl_sext<15,9>(tmp_735_reg_64116.read());
}

void Sobel_phase_strm::thread_p_Val2_6_36_7_fu_41647_p1() {
    p_Val2_6_36_7_fu_41647_p1 = esl_sext<15,8>(tmp_738_fu_41639_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_2_fu_18966_p1() {
    p_Val2_6_37_2_fu_18966_p1 = esl_sext<15,13>(tmp_747_fu_18956_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_3_fu_19044_p1() {
    p_Val2_6_37_3_fu_19044_p1 = esl_sext<15,12>(tmp_749_fu_19034_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_4_fu_30997_p1() {
    p_Val2_6_37_4_fu_30997_p1 = esl_sext<15,11>(tmp_751_reg_61736.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_5_fu_31070_p1() {
    p_Val2_6_37_5_fu_31070_p1 = esl_sext<15,10>(tmp_753_fu_31060_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_6_fu_41737_p1() {
    p_Val2_6_37_6_fu_41737_p1 = esl_sext<15,9>(tmp_755_reg_64150.read());
}

void Sobel_phase_strm::thread_p_Val2_6_37_7_fu_41800_p1() {
    p_Val2_6_37_7_fu_41800_p1 = esl_sext<15,8>(tmp_758_fu_41792_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_2_fu_19160_p1() {
    p_Val2_6_38_2_fu_19160_p1 = esl_sext<15,13>(tmp_767_fu_19150_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_3_fu_19238_p1() {
    p_Val2_6_38_3_fu_19238_p1 = esl_sext<15,12>(tmp_769_fu_19228_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_4_fu_31145_p1() {
    p_Val2_6_38_4_fu_31145_p1 = esl_sext<15,11>(tmp_771_reg_61770.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_5_fu_31218_p1() {
    p_Val2_6_38_5_fu_31218_p1 = esl_sext<15,10>(tmp_773_fu_31208_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_6_fu_41890_p1() {
    p_Val2_6_38_6_fu_41890_p1 = esl_sext<15,9>(tmp_775_reg_64184.read());
}

void Sobel_phase_strm::thread_p_Val2_6_38_7_fu_41953_p1() {
    p_Val2_6_38_7_fu_41953_p1 = esl_sext<15,8>(tmp_778_fu_41945_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_2_fu_19354_p1() {
    p_Val2_6_39_2_fu_19354_p1 = esl_sext<15,13>(tmp_787_fu_19344_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_3_fu_19432_p1() {
    p_Val2_6_39_3_fu_19432_p1 = esl_sext<15,12>(tmp_789_fu_19422_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_4_fu_31293_p1() {
    p_Val2_6_39_4_fu_31293_p1 = esl_sext<15,11>(tmp_791_reg_61804.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_5_fu_31366_p1() {
    p_Val2_6_39_5_fu_31366_p1 = esl_sext<15,10>(tmp_793_fu_31356_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_6_fu_42043_p1() {
    p_Val2_6_39_6_fu_42043_p1 = esl_sext<15,9>(tmp_795_reg_64218.read());
}

void Sobel_phase_strm::thread_p_Val2_6_39_7_fu_42106_p1() {
    p_Val2_6_39_7_fu_42106_p1 = esl_sext<15,8>(tmp_798_fu_42098_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_2_fu_12370_p1() {
    p_Val2_6_3_2_fu_12370_p1 = esl_sext<15,13>(tmp_67_fu_12360_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_3_fu_12448_p1() {
    p_Val2_6_3_3_fu_12448_p1 = esl_sext<15,12>(tmp_69_fu_12438_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_4_fu_25965_p1() {
    p_Val2_6_3_4_fu_25965_p1 = esl_sext<15,11>(tmp_71_reg_60580.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_5_fu_26038_p1() {
    p_Val2_6_3_5_fu_26038_p1 = esl_sext<15,10>(tmp_73_fu_26028_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_6_fu_36535_p1() {
    p_Val2_6_3_6_fu_36535_p1 = esl_sext<15,9>(tmp_75_reg_62994.read());
}

void Sobel_phase_strm::thread_p_Val2_6_3_7_fu_36598_p1() {
    p_Val2_6_3_7_fu_36598_p1 = esl_sext<15,8>(tmp_78_fu_36590_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_2_fu_19548_p1() {
    p_Val2_6_40_2_fu_19548_p1 = esl_sext<15,13>(tmp_807_fu_19538_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_3_fu_19626_p1() {
    p_Val2_6_40_3_fu_19626_p1 = esl_sext<15,12>(tmp_809_fu_19616_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_4_fu_31441_p1() {
    p_Val2_6_40_4_fu_31441_p1 = esl_sext<15,11>(tmp_811_reg_61838.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_5_fu_31514_p1() {
    p_Val2_6_40_5_fu_31514_p1 = esl_sext<15,10>(tmp_813_fu_31504_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_6_fu_42196_p1() {
    p_Val2_6_40_6_fu_42196_p1 = esl_sext<15,9>(tmp_815_reg_64252.read());
}

void Sobel_phase_strm::thread_p_Val2_6_40_7_fu_42259_p1() {
    p_Val2_6_40_7_fu_42259_p1 = esl_sext<15,8>(tmp_818_fu_42251_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_2_fu_19742_p1() {
    p_Val2_6_41_2_fu_19742_p1 = esl_sext<15,13>(tmp_827_fu_19732_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_3_fu_19820_p1() {
    p_Val2_6_41_3_fu_19820_p1 = esl_sext<15,12>(tmp_829_fu_19810_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_4_fu_31589_p1() {
    p_Val2_6_41_4_fu_31589_p1 = esl_sext<15,11>(tmp_831_reg_61872.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_5_fu_31662_p1() {
    p_Val2_6_41_5_fu_31662_p1 = esl_sext<15,10>(tmp_833_fu_31652_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_6_fu_42349_p1() {
    p_Val2_6_41_6_fu_42349_p1 = esl_sext<15,9>(tmp_835_reg_64286.read());
}

void Sobel_phase_strm::thread_p_Val2_6_41_7_fu_42412_p1() {
    p_Val2_6_41_7_fu_42412_p1 = esl_sext<15,8>(tmp_838_fu_42404_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_2_fu_19936_p1() {
    p_Val2_6_42_2_fu_19936_p1 = esl_sext<15,13>(tmp_847_fu_19926_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_3_fu_20014_p1() {
    p_Val2_6_42_3_fu_20014_p1 = esl_sext<15,12>(tmp_849_fu_20004_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_4_fu_31737_p1() {
    p_Val2_6_42_4_fu_31737_p1 = esl_sext<15,11>(tmp_851_reg_61906.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_5_fu_31810_p1() {
    p_Val2_6_42_5_fu_31810_p1 = esl_sext<15,10>(tmp_853_fu_31800_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_6_fu_42502_p1() {
    p_Val2_6_42_6_fu_42502_p1 = esl_sext<15,9>(tmp_855_reg_64320.read());
}

void Sobel_phase_strm::thread_p_Val2_6_42_7_fu_42565_p1() {
    p_Val2_6_42_7_fu_42565_p1 = esl_sext<15,8>(tmp_858_fu_42557_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_2_fu_20130_p1() {
    p_Val2_6_43_2_fu_20130_p1 = esl_sext<15,13>(tmp_867_fu_20120_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_3_fu_20208_p1() {
    p_Val2_6_43_3_fu_20208_p1 = esl_sext<15,12>(tmp_869_fu_20198_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_4_fu_31885_p1() {
    p_Val2_6_43_4_fu_31885_p1 = esl_sext<15,11>(tmp_871_reg_61940.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_5_fu_31958_p1() {
    p_Val2_6_43_5_fu_31958_p1 = esl_sext<15,10>(tmp_873_fu_31948_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_6_fu_42655_p1() {
    p_Val2_6_43_6_fu_42655_p1 = esl_sext<15,9>(tmp_875_reg_64354.read());
}

void Sobel_phase_strm::thread_p_Val2_6_43_7_fu_42718_p1() {
    p_Val2_6_43_7_fu_42718_p1 = esl_sext<15,8>(tmp_878_fu_42710_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_2_fu_20324_p1() {
    p_Val2_6_44_2_fu_20324_p1 = esl_sext<15,13>(tmp_887_fu_20314_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_3_fu_20402_p1() {
    p_Val2_6_44_3_fu_20402_p1 = esl_sext<15,12>(tmp_889_fu_20392_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_4_fu_32033_p1() {
    p_Val2_6_44_4_fu_32033_p1 = esl_sext<15,11>(tmp_891_reg_61974.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_5_fu_32106_p1() {
    p_Val2_6_44_5_fu_32106_p1 = esl_sext<15,10>(tmp_893_fu_32096_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_6_fu_42808_p1() {
    p_Val2_6_44_6_fu_42808_p1 = esl_sext<15,9>(tmp_895_reg_64388.read());
}

void Sobel_phase_strm::thread_p_Val2_6_44_7_fu_42871_p1() {
    p_Val2_6_44_7_fu_42871_p1 = esl_sext<15,8>(tmp_898_fu_42863_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_2_fu_20518_p1() {
    p_Val2_6_45_2_fu_20518_p1 = esl_sext<15,13>(tmp_907_fu_20508_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_3_fu_20596_p1() {
    p_Val2_6_45_3_fu_20596_p1 = esl_sext<15,12>(tmp_909_fu_20586_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_4_fu_32181_p1() {
    p_Val2_6_45_4_fu_32181_p1 = esl_sext<15,11>(tmp_911_reg_62008.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_5_fu_32254_p1() {
    p_Val2_6_45_5_fu_32254_p1 = esl_sext<15,10>(tmp_913_fu_32244_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_6_fu_42961_p1() {
    p_Val2_6_45_6_fu_42961_p1 = esl_sext<15,9>(tmp_915_reg_64422.read());
}

void Sobel_phase_strm::thread_p_Val2_6_45_7_fu_43024_p1() {
    p_Val2_6_45_7_fu_43024_p1 = esl_sext<15,8>(tmp_918_fu_43016_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_2_fu_20712_p1() {
    p_Val2_6_46_2_fu_20712_p1 = esl_sext<15,13>(tmp_927_fu_20702_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_3_fu_20790_p1() {
    p_Val2_6_46_3_fu_20790_p1 = esl_sext<15,12>(tmp_929_fu_20780_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_4_fu_32329_p1() {
    p_Val2_6_46_4_fu_32329_p1 = esl_sext<15,11>(tmp_931_reg_62042.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_5_fu_32402_p1() {
    p_Val2_6_46_5_fu_32402_p1 = esl_sext<15,10>(tmp_933_fu_32392_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_6_fu_43114_p1() {
    p_Val2_6_46_6_fu_43114_p1 = esl_sext<15,9>(tmp_935_reg_64456.read());
}

void Sobel_phase_strm::thread_p_Val2_6_46_7_fu_43177_p1() {
    p_Val2_6_46_7_fu_43177_p1 = esl_sext<15,8>(tmp_938_fu_43169_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_2_fu_20906_p1() {
    p_Val2_6_47_2_fu_20906_p1 = esl_sext<15,13>(tmp_947_fu_20896_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_3_fu_20984_p1() {
    p_Val2_6_47_3_fu_20984_p1 = esl_sext<15,12>(tmp_949_fu_20974_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_4_fu_32477_p1() {
    p_Val2_6_47_4_fu_32477_p1 = esl_sext<15,11>(tmp_951_reg_62076.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_5_fu_32550_p1() {
    p_Val2_6_47_5_fu_32550_p1 = esl_sext<15,10>(tmp_953_fu_32540_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_6_fu_43267_p1() {
    p_Val2_6_47_6_fu_43267_p1 = esl_sext<15,9>(tmp_955_reg_64490.read());
}

void Sobel_phase_strm::thread_p_Val2_6_47_7_fu_43330_p1() {
    p_Val2_6_47_7_fu_43330_p1 = esl_sext<15,8>(tmp_958_fu_43322_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_2_fu_21100_p1() {
    p_Val2_6_48_2_fu_21100_p1 = esl_sext<15,13>(tmp_967_fu_21090_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_3_fu_21178_p1() {
    p_Val2_6_48_3_fu_21178_p1 = esl_sext<15,12>(tmp_969_fu_21168_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_4_fu_32625_p1() {
    p_Val2_6_48_4_fu_32625_p1 = esl_sext<15,11>(tmp_971_reg_62110.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_5_fu_32698_p1() {
    p_Val2_6_48_5_fu_32698_p1 = esl_sext<15,10>(tmp_973_fu_32688_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_6_fu_43420_p1() {
    p_Val2_6_48_6_fu_43420_p1 = esl_sext<15,9>(tmp_975_reg_64524.read());
}

void Sobel_phase_strm::thread_p_Val2_6_48_7_fu_43483_p1() {
    p_Val2_6_48_7_fu_43483_p1 = esl_sext<15,8>(tmp_978_fu_43475_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_2_fu_21294_p1() {
    p_Val2_6_49_2_fu_21294_p1 = esl_sext<15,13>(tmp_987_fu_21284_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_3_fu_21372_p1() {
    p_Val2_6_49_3_fu_21372_p1 = esl_sext<15,12>(tmp_989_fu_21362_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_4_fu_32773_p1() {
    p_Val2_6_49_4_fu_32773_p1 = esl_sext<15,11>(tmp_991_reg_62144.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_5_fu_32846_p1() {
    p_Val2_6_49_5_fu_32846_p1 = esl_sext<15,10>(tmp_993_fu_32836_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_6_fu_43573_p1() {
    p_Val2_6_49_6_fu_43573_p1 = esl_sext<15,9>(tmp_995_reg_64558.read());
}

void Sobel_phase_strm::thread_p_Val2_6_49_7_fu_43636_p1() {
    p_Val2_6_49_7_fu_43636_p1 = esl_sext<15,8>(tmp_998_fu_43628_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_2_fu_12564_p1() {
    p_Val2_6_4_2_fu_12564_p1 = esl_sext<15,13>(tmp_87_fu_12554_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_3_fu_12642_p1() {
    p_Val2_6_4_3_fu_12642_p1 = esl_sext<15,12>(tmp_89_fu_12632_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_4_fu_26113_p1() {
    p_Val2_6_4_4_fu_26113_p1 = esl_sext<15,11>(tmp_91_reg_60614.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_5_fu_26186_p1() {
    p_Val2_6_4_5_fu_26186_p1 = esl_sext<15,10>(tmp_93_fu_26176_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_6_fu_36688_p1() {
    p_Val2_6_4_6_fu_36688_p1 = esl_sext<15,9>(tmp_95_reg_63028.read());
}

void Sobel_phase_strm::thread_p_Val2_6_4_7_fu_36751_p1() {
    p_Val2_6_4_7_fu_36751_p1 = esl_sext<15,8>(tmp_98_fu_36743_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_2_fu_21488_p1() {
    p_Val2_6_50_2_fu_21488_p1 = esl_sext<15,13>(tmp_1007_fu_21478_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_3_fu_21566_p1() {
    p_Val2_6_50_3_fu_21566_p1 = esl_sext<15,12>(tmp_1009_fu_21556_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_4_fu_32921_p1() {
    p_Val2_6_50_4_fu_32921_p1 = esl_sext<15,11>(tmp_1011_reg_62178.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_5_fu_32994_p1() {
    p_Val2_6_50_5_fu_32994_p1 = esl_sext<15,10>(tmp_1013_fu_32984_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_6_fu_43726_p1() {
    p_Val2_6_50_6_fu_43726_p1 = esl_sext<15,9>(tmp_1015_reg_64592.read());
}

void Sobel_phase_strm::thread_p_Val2_6_50_7_fu_43789_p1() {
    p_Val2_6_50_7_fu_43789_p1 = esl_sext<15,8>(tmp_1018_fu_43781_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_2_fu_21682_p1() {
    p_Val2_6_51_2_fu_21682_p1 = esl_sext<15,13>(tmp_1027_fu_21672_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_3_fu_21760_p1() {
    p_Val2_6_51_3_fu_21760_p1 = esl_sext<15,12>(tmp_1029_fu_21750_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_4_fu_33069_p1() {
    p_Val2_6_51_4_fu_33069_p1 = esl_sext<15,11>(tmp_1031_reg_62212.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_5_fu_33142_p1() {
    p_Val2_6_51_5_fu_33142_p1 = esl_sext<15,10>(tmp_1033_fu_33132_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_6_fu_43879_p1() {
    p_Val2_6_51_6_fu_43879_p1 = esl_sext<15,9>(tmp_1035_reg_64626.read());
}

void Sobel_phase_strm::thread_p_Val2_6_51_7_fu_43942_p1() {
    p_Val2_6_51_7_fu_43942_p1 = esl_sext<15,8>(tmp_1038_fu_43934_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_2_fu_21876_p1() {
    p_Val2_6_52_2_fu_21876_p1 = esl_sext<15,13>(tmp_1047_fu_21866_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_3_fu_21954_p1() {
    p_Val2_6_52_3_fu_21954_p1 = esl_sext<15,12>(tmp_1049_fu_21944_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_4_fu_33217_p1() {
    p_Val2_6_52_4_fu_33217_p1 = esl_sext<15,11>(tmp_1051_reg_62246.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_5_fu_33290_p1() {
    p_Val2_6_52_5_fu_33290_p1 = esl_sext<15,10>(tmp_1053_fu_33280_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_6_fu_44032_p1() {
    p_Val2_6_52_6_fu_44032_p1 = esl_sext<15,9>(tmp_1055_reg_64660.read());
}

void Sobel_phase_strm::thread_p_Val2_6_52_7_fu_44095_p1() {
    p_Val2_6_52_7_fu_44095_p1 = esl_sext<15,8>(tmp_1058_fu_44087_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_2_fu_22070_p1() {
    p_Val2_6_53_2_fu_22070_p1 = esl_sext<15,13>(tmp_1067_fu_22060_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_3_fu_22148_p1() {
    p_Val2_6_53_3_fu_22148_p1 = esl_sext<15,12>(tmp_1069_fu_22138_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_4_fu_33365_p1() {
    p_Val2_6_53_4_fu_33365_p1 = esl_sext<15,11>(tmp_1071_reg_62280.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_5_fu_33438_p1() {
    p_Val2_6_53_5_fu_33438_p1 = esl_sext<15,10>(tmp_1073_fu_33428_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_6_fu_44185_p1() {
    p_Val2_6_53_6_fu_44185_p1 = esl_sext<15,9>(tmp_1075_reg_64694.read());
}

void Sobel_phase_strm::thread_p_Val2_6_53_7_fu_44248_p1() {
    p_Val2_6_53_7_fu_44248_p1 = esl_sext<15,8>(tmp_1078_fu_44240_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_2_fu_22264_p1() {
    p_Val2_6_54_2_fu_22264_p1 = esl_sext<15,13>(tmp_1087_fu_22254_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_3_fu_22342_p1() {
    p_Val2_6_54_3_fu_22342_p1 = esl_sext<15,12>(tmp_1089_fu_22332_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_4_fu_33513_p1() {
    p_Val2_6_54_4_fu_33513_p1 = esl_sext<15,11>(tmp_1091_reg_62314.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_5_fu_33586_p1() {
    p_Val2_6_54_5_fu_33586_p1 = esl_sext<15,10>(tmp_1093_fu_33576_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_6_fu_44338_p1() {
    p_Val2_6_54_6_fu_44338_p1 = esl_sext<15,9>(tmp_1095_reg_64728.read());
}

void Sobel_phase_strm::thread_p_Val2_6_54_7_fu_44401_p1() {
    p_Val2_6_54_7_fu_44401_p1 = esl_sext<15,8>(tmp_1098_fu_44393_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_2_fu_22458_p1() {
    p_Val2_6_55_2_fu_22458_p1 = esl_sext<15,13>(tmp_1107_fu_22448_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_3_fu_22536_p1() {
    p_Val2_6_55_3_fu_22536_p1 = esl_sext<15,12>(tmp_1109_fu_22526_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_4_fu_33661_p1() {
    p_Val2_6_55_4_fu_33661_p1 = esl_sext<15,11>(tmp_1111_reg_62348.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_5_fu_33734_p1() {
    p_Val2_6_55_5_fu_33734_p1 = esl_sext<15,10>(tmp_1113_fu_33724_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_6_fu_44491_p1() {
    p_Val2_6_55_6_fu_44491_p1 = esl_sext<15,9>(tmp_1115_reg_64762.read());
}

void Sobel_phase_strm::thread_p_Val2_6_55_7_fu_44554_p1() {
    p_Val2_6_55_7_fu_44554_p1 = esl_sext<15,8>(tmp_1118_fu_44546_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_2_fu_22652_p1() {
    p_Val2_6_56_2_fu_22652_p1 = esl_sext<15,13>(tmp_1127_fu_22642_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_3_fu_22730_p1() {
    p_Val2_6_56_3_fu_22730_p1 = esl_sext<15,12>(tmp_1129_fu_22720_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_4_fu_33809_p1() {
    p_Val2_6_56_4_fu_33809_p1 = esl_sext<15,11>(tmp_1131_reg_62382.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_5_fu_33882_p1() {
    p_Val2_6_56_5_fu_33882_p1 = esl_sext<15,10>(tmp_1133_fu_33872_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_6_fu_44644_p1() {
    p_Val2_6_56_6_fu_44644_p1 = esl_sext<15,9>(tmp_1135_reg_64796.read());
}

void Sobel_phase_strm::thread_p_Val2_6_56_7_fu_44707_p1() {
    p_Val2_6_56_7_fu_44707_p1 = esl_sext<15,8>(tmp_1138_fu_44699_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_2_fu_22846_p1() {
    p_Val2_6_57_2_fu_22846_p1 = esl_sext<15,13>(tmp_1147_fu_22836_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_3_fu_22924_p1() {
    p_Val2_6_57_3_fu_22924_p1 = esl_sext<15,12>(tmp_1149_fu_22914_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_4_fu_33957_p1() {
    p_Val2_6_57_4_fu_33957_p1 = esl_sext<15,11>(tmp_1151_reg_62416.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_5_fu_34030_p1() {
    p_Val2_6_57_5_fu_34030_p1 = esl_sext<15,10>(tmp_1153_fu_34020_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_6_fu_44797_p1() {
    p_Val2_6_57_6_fu_44797_p1 = esl_sext<15,9>(tmp_1155_reg_64830.read());
}

void Sobel_phase_strm::thread_p_Val2_6_57_7_fu_44860_p1() {
    p_Val2_6_57_7_fu_44860_p1 = esl_sext<15,8>(tmp_1158_fu_44852_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_2_fu_23040_p1() {
    p_Val2_6_58_2_fu_23040_p1 = esl_sext<15,13>(tmp_1167_fu_23030_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_3_fu_23118_p1() {
    p_Val2_6_58_3_fu_23118_p1 = esl_sext<15,12>(tmp_1169_fu_23108_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_4_fu_34105_p1() {
    p_Val2_6_58_4_fu_34105_p1 = esl_sext<15,11>(tmp_1171_reg_62450.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_5_fu_34178_p1() {
    p_Val2_6_58_5_fu_34178_p1 = esl_sext<15,10>(tmp_1173_fu_34168_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_6_fu_44950_p1() {
    p_Val2_6_58_6_fu_44950_p1 = esl_sext<15,9>(tmp_1175_reg_64864.read());
}

void Sobel_phase_strm::thread_p_Val2_6_58_7_fu_45013_p1() {
    p_Val2_6_58_7_fu_45013_p1 = esl_sext<15,8>(tmp_1178_fu_45005_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_2_fu_23234_p1() {
    p_Val2_6_59_2_fu_23234_p1 = esl_sext<15,13>(tmp_1187_fu_23224_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_3_fu_23312_p1() {
    p_Val2_6_59_3_fu_23312_p1 = esl_sext<15,12>(tmp_1189_fu_23302_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_4_fu_34253_p1() {
    p_Val2_6_59_4_fu_34253_p1 = esl_sext<15,11>(tmp_1191_reg_62484.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_5_fu_34326_p1() {
    p_Val2_6_59_5_fu_34326_p1 = esl_sext<15,10>(tmp_1193_fu_34316_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_6_fu_45103_p1() {
    p_Val2_6_59_6_fu_45103_p1 = esl_sext<15,9>(tmp_1195_reg_64898.read());
}

void Sobel_phase_strm::thread_p_Val2_6_59_7_fu_45166_p1() {
    p_Val2_6_59_7_fu_45166_p1 = esl_sext<15,8>(tmp_1198_fu_45158_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_2_fu_12758_p1() {
    p_Val2_6_5_2_fu_12758_p1 = esl_sext<15,13>(tmp_107_fu_12748_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_3_fu_12836_p1() {
    p_Val2_6_5_3_fu_12836_p1 = esl_sext<15,12>(tmp_109_fu_12826_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_4_fu_26261_p1() {
    p_Val2_6_5_4_fu_26261_p1 = esl_sext<15,11>(tmp_111_reg_60648.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_5_fu_26334_p1() {
    p_Val2_6_5_5_fu_26334_p1 = esl_sext<15,10>(tmp_113_fu_26324_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_6_fu_36841_p1() {
    p_Val2_6_5_6_fu_36841_p1 = esl_sext<15,9>(tmp_115_reg_63062.read());
}

void Sobel_phase_strm::thread_p_Val2_6_5_7_fu_36904_p1() {
    p_Val2_6_5_7_fu_36904_p1 = esl_sext<15,8>(tmp_118_fu_36896_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_2_fu_23428_p1() {
    p_Val2_6_60_2_fu_23428_p1 = esl_sext<15,13>(tmp_1207_fu_23418_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_3_fu_23506_p1() {
    p_Val2_6_60_3_fu_23506_p1 = esl_sext<15,12>(tmp_1209_fu_23496_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_4_fu_34401_p1() {
    p_Val2_6_60_4_fu_34401_p1 = esl_sext<15,11>(tmp_1211_reg_62518.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_5_fu_34474_p1() {
    p_Val2_6_60_5_fu_34474_p1 = esl_sext<15,10>(tmp_1213_fu_34464_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_6_fu_45256_p1() {
    p_Val2_6_60_6_fu_45256_p1 = esl_sext<15,9>(tmp_1215_reg_64932.read());
}

void Sobel_phase_strm::thread_p_Val2_6_60_7_fu_45319_p1() {
    p_Val2_6_60_7_fu_45319_p1 = esl_sext<15,8>(tmp_1218_fu_45311_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_2_fu_23622_p1() {
    p_Val2_6_61_2_fu_23622_p1 = esl_sext<15,13>(tmp_1227_fu_23612_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_3_fu_23700_p1() {
    p_Val2_6_61_3_fu_23700_p1 = esl_sext<15,12>(tmp_1229_fu_23690_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_4_fu_34549_p1() {
    p_Val2_6_61_4_fu_34549_p1 = esl_sext<15,11>(tmp_1231_reg_62552.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_5_fu_34622_p1() {
    p_Val2_6_61_5_fu_34622_p1 = esl_sext<15,10>(tmp_1233_fu_34612_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_6_fu_45409_p1() {
    p_Val2_6_61_6_fu_45409_p1 = esl_sext<15,9>(tmp_1235_reg_64966.read());
}

void Sobel_phase_strm::thread_p_Val2_6_61_7_fu_45472_p1() {
    p_Val2_6_61_7_fu_45472_p1 = esl_sext<15,8>(tmp_1238_fu_45464_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_2_fu_23816_p1() {
    p_Val2_6_62_2_fu_23816_p1 = esl_sext<15,13>(tmp_1247_fu_23806_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_3_fu_23894_p1() {
    p_Val2_6_62_3_fu_23894_p1 = esl_sext<15,12>(tmp_1249_fu_23884_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_4_fu_34697_p1() {
    p_Val2_6_62_4_fu_34697_p1 = esl_sext<15,11>(tmp_1251_reg_62586.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_5_fu_34770_p1() {
    p_Val2_6_62_5_fu_34770_p1 = esl_sext<15,10>(tmp_1253_fu_34760_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_6_fu_45562_p1() {
    p_Val2_6_62_6_fu_45562_p1 = esl_sext<15,9>(tmp_1255_reg_65000.read());
}

void Sobel_phase_strm::thread_p_Val2_6_62_7_fu_45625_p1() {
    p_Val2_6_62_7_fu_45625_p1 = esl_sext<15,8>(tmp_1258_fu_45617_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_2_fu_24010_p1() {
    p_Val2_6_63_2_fu_24010_p1 = esl_sext<15,13>(tmp_1267_fu_24000_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_3_fu_24088_p1() {
    p_Val2_6_63_3_fu_24088_p1 = esl_sext<15,12>(tmp_1269_fu_24078_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_4_fu_34845_p1() {
    p_Val2_6_63_4_fu_34845_p1 = esl_sext<15,11>(tmp_1271_reg_62620.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_5_fu_34918_p1() {
    p_Val2_6_63_5_fu_34918_p1 = esl_sext<15,10>(tmp_1273_fu_34908_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_6_fu_45715_p1() {
    p_Val2_6_63_6_fu_45715_p1 = esl_sext<15,9>(tmp_1275_reg_65034.read());
}

void Sobel_phase_strm::thread_p_Val2_6_63_7_fu_45778_p1() {
    p_Val2_6_63_7_fu_45778_p1 = esl_sext<15,8>(tmp_1278_fu_45770_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_2_fu_24204_p1() {
    p_Val2_6_64_2_fu_24204_p1 = esl_sext<15,13>(tmp_1287_fu_24194_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_3_fu_24282_p1() {
    p_Val2_6_64_3_fu_24282_p1 = esl_sext<15,12>(tmp_1289_fu_24272_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_4_fu_34993_p1() {
    p_Val2_6_64_4_fu_34993_p1 = esl_sext<15,11>(tmp_1291_reg_62654.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_5_fu_35066_p1() {
    p_Val2_6_64_5_fu_35066_p1 = esl_sext<15,10>(tmp_1293_fu_35056_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_6_fu_45868_p1() {
    p_Val2_6_64_6_fu_45868_p1 = esl_sext<15,9>(tmp_1295_reg_65068.read());
}

void Sobel_phase_strm::thread_p_Val2_6_64_7_fu_45931_p1() {
    p_Val2_6_64_7_fu_45931_p1 = esl_sext<15,8>(tmp_1298_fu_45923_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_2_fu_24398_p1() {
    p_Val2_6_65_2_fu_24398_p1 = esl_sext<15,13>(tmp_1307_fu_24388_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_3_fu_24476_p1() {
    p_Val2_6_65_3_fu_24476_p1 = esl_sext<15,12>(tmp_1309_fu_24466_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_4_fu_35141_p1() {
    p_Val2_6_65_4_fu_35141_p1 = esl_sext<15,11>(tmp_1311_reg_62688.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_5_fu_35214_p1() {
    p_Val2_6_65_5_fu_35214_p1 = esl_sext<15,10>(tmp_1313_fu_35204_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_6_fu_46021_p1() {
    p_Val2_6_65_6_fu_46021_p1 = esl_sext<15,9>(tmp_1315_reg_65102.read());
}

void Sobel_phase_strm::thread_p_Val2_6_65_7_fu_46084_p1() {
    p_Val2_6_65_7_fu_46084_p1 = esl_sext<15,8>(tmp_1318_fu_46076_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_2_fu_24592_p1() {
    p_Val2_6_66_2_fu_24592_p1 = esl_sext<15,13>(tmp_1327_fu_24582_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_3_fu_24670_p1() {
    p_Val2_6_66_3_fu_24670_p1 = esl_sext<15,12>(tmp_1329_fu_24660_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_4_fu_35289_p1() {
    p_Val2_6_66_4_fu_35289_p1 = esl_sext<15,11>(tmp_1331_reg_62722.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_5_fu_35362_p1() {
    p_Val2_6_66_5_fu_35362_p1 = esl_sext<15,10>(tmp_1333_fu_35352_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_6_fu_46174_p1() {
    p_Val2_6_66_6_fu_46174_p1 = esl_sext<15,9>(tmp_1335_reg_65136.read());
}

void Sobel_phase_strm::thread_p_Val2_6_66_7_fu_46237_p1() {
    p_Val2_6_66_7_fu_46237_p1 = esl_sext<15,8>(tmp_1338_fu_46229_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_2_fu_24786_p1() {
    p_Val2_6_67_2_fu_24786_p1 = esl_sext<15,13>(tmp_1347_fu_24776_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_3_fu_24864_p1() {
    p_Val2_6_67_3_fu_24864_p1 = esl_sext<15,12>(tmp_1349_fu_24854_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_4_fu_35437_p1() {
    p_Val2_6_67_4_fu_35437_p1 = esl_sext<15,11>(tmp_1351_reg_62756.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_5_fu_35510_p1() {
    p_Val2_6_67_5_fu_35510_p1 = esl_sext<15,10>(tmp_1353_fu_35500_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_6_fu_46327_p1() {
    p_Val2_6_67_6_fu_46327_p1 = esl_sext<15,9>(tmp_1355_reg_65170.read());
}

void Sobel_phase_strm::thread_p_Val2_6_67_7_fu_46390_p1() {
    p_Val2_6_67_7_fu_46390_p1 = esl_sext<15,8>(tmp_1358_fu_46382_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_2_fu_24980_p1() {
    p_Val2_6_68_2_fu_24980_p1 = esl_sext<15,13>(tmp_1367_fu_24970_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_3_fu_25058_p1() {
    p_Val2_6_68_3_fu_25058_p1 = esl_sext<15,12>(tmp_1369_fu_25048_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_4_fu_35585_p1() {
    p_Val2_6_68_4_fu_35585_p1 = esl_sext<15,11>(tmp_1371_reg_62790.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_5_fu_35658_p1() {
    p_Val2_6_68_5_fu_35658_p1 = esl_sext<15,10>(tmp_1373_fu_35648_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_6_fu_46480_p1() {
    p_Val2_6_68_6_fu_46480_p1 = esl_sext<15,9>(tmp_1375_reg_65204.read());
}

void Sobel_phase_strm::thread_p_Val2_6_68_7_fu_46543_p1() {
    p_Val2_6_68_7_fu_46543_p1 = esl_sext<15,8>(tmp_1378_fu_46535_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_2_fu_25174_p1() {
    p_Val2_6_69_2_fu_25174_p1 = esl_sext<15,13>(tmp_1387_fu_25164_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_3_fu_25252_p1() {
    p_Val2_6_69_3_fu_25252_p1 = esl_sext<15,12>(tmp_1389_fu_25242_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_4_fu_35733_p1() {
    p_Val2_6_69_4_fu_35733_p1 = esl_sext<15,11>(tmp_1391_reg_62824.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_5_fu_35806_p1() {
    p_Val2_6_69_5_fu_35806_p1 = esl_sext<15,10>(tmp_1393_fu_35796_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_6_fu_46633_p1() {
    p_Val2_6_69_6_fu_46633_p1 = esl_sext<15,9>(tmp_1395_reg_65238.read());
}

void Sobel_phase_strm::thread_p_Val2_6_69_7_fu_46696_p1() {
    p_Val2_6_69_7_fu_46696_p1 = esl_sext<15,8>(tmp_1398_fu_46688_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_2_fu_12952_p1() {
    p_Val2_6_6_2_fu_12952_p1 = esl_sext<15,13>(tmp_127_fu_12942_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_3_fu_13030_p1() {
    p_Val2_6_6_3_fu_13030_p1 = esl_sext<15,12>(tmp_129_fu_13020_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_4_fu_26409_p1() {
    p_Val2_6_6_4_fu_26409_p1 = esl_sext<15,11>(tmp_131_reg_60682.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_5_fu_26482_p1() {
    p_Val2_6_6_5_fu_26482_p1 = esl_sext<15,10>(tmp_133_fu_26472_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_6_fu_36994_p1() {
    p_Val2_6_6_6_fu_36994_p1 = esl_sext<15,9>(tmp_135_reg_63096.read());
}

void Sobel_phase_strm::thread_p_Val2_6_6_7_fu_37057_p1() {
    p_Val2_6_6_7_fu_37057_p1 = esl_sext<15,8>(tmp_138_fu_37049_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_2_fu_25368_p1() {
    p_Val2_6_70_2_fu_25368_p1 = esl_sext<15,13>(tmp_1407_fu_25358_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_3_fu_25446_p1() {
    p_Val2_6_70_3_fu_25446_p1 = esl_sext<15,12>(tmp_1409_fu_25436_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_4_fu_35881_p1() {
    p_Val2_6_70_4_fu_35881_p1 = esl_sext<15,11>(tmp_1411_reg_62858.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_5_fu_35954_p1() {
    p_Val2_6_70_5_fu_35954_p1 = esl_sext<15,10>(tmp_1413_fu_35944_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_6_fu_46786_p1() {
    p_Val2_6_70_6_fu_46786_p1 = esl_sext<15,9>(tmp_1415_reg_65272.read());
}

void Sobel_phase_strm::thread_p_Val2_6_70_7_fu_46849_p1() {
    p_Val2_6_70_7_fu_46849_p1 = esl_sext<15,8>(tmp_1418_fu_46841_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_2_fu_13146_p1() {
    p_Val2_6_7_2_fu_13146_p1 = esl_sext<15,13>(tmp_147_fu_13136_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_3_fu_13224_p1() {
    p_Val2_6_7_3_fu_13224_p1 = esl_sext<15,12>(tmp_149_fu_13214_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_4_fu_26557_p1() {
    p_Val2_6_7_4_fu_26557_p1 = esl_sext<15,11>(tmp_151_reg_60716.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_5_fu_26630_p1() {
    p_Val2_6_7_5_fu_26630_p1 = esl_sext<15,10>(tmp_153_fu_26620_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_6_fu_37147_p1() {
    p_Val2_6_7_6_fu_37147_p1 = esl_sext<15,9>(tmp_155_reg_63130.read());
}

void Sobel_phase_strm::thread_p_Val2_6_7_7_fu_37210_p1() {
    p_Val2_6_7_7_fu_37210_p1 = esl_sext<15,8>(tmp_158_fu_37202_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_2_fu_13340_p1() {
    p_Val2_6_8_2_fu_13340_p1 = esl_sext<15,13>(tmp_167_fu_13330_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_3_fu_13418_p1() {
    p_Val2_6_8_3_fu_13418_p1 = esl_sext<15,12>(tmp_169_fu_13408_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_4_fu_26705_p1() {
    p_Val2_6_8_4_fu_26705_p1 = esl_sext<15,11>(tmp_171_reg_60750.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_5_fu_26778_p1() {
    p_Val2_6_8_5_fu_26778_p1 = esl_sext<15,10>(tmp_173_fu_26768_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_6_fu_37300_p1() {
    p_Val2_6_8_6_fu_37300_p1 = esl_sext<15,9>(tmp_175_reg_63164.read());
}

void Sobel_phase_strm::thread_p_Val2_6_8_7_fu_37363_p1() {
    p_Val2_6_8_7_fu_37363_p1 = esl_sext<15,8>(tmp_178_fu_37355_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_2_fu_13534_p1() {
    p_Val2_6_9_2_fu_13534_p1 = esl_sext<15,13>(tmp_187_fu_13524_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_3_fu_13612_p1() {
    p_Val2_6_9_3_fu_13612_p1 = esl_sext<15,12>(tmp_189_fu_13602_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_4_fu_26853_p1() {
    p_Val2_6_9_4_fu_26853_p1 = esl_sext<15,11>(tmp_191_reg_60784.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_5_fu_26926_p1() {
    p_Val2_6_9_5_fu_26926_p1 = esl_sext<15,10>(tmp_193_fu_26916_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_6_fu_37453_p1() {
    p_Val2_6_9_6_fu_37453_p1 = esl_sext<15,9>(tmp_195_reg_63198.read());
}

void Sobel_phase_strm::thread_p_Val2_6_9_7_fu_37516_p1() {
    p_Val2_6_9_7_fu_37516_p1 = esl_sext<15,8>(tmp_198_fu_37508_p3.read());
}

void Sobel_phase_strm::thread_p_Val2_7_0_1_fu_3452_p2() {
    p_Val2_7_0_1_fu_3452_p2 = (!p_Val2_7_fu_3402_p2.read().is_01() || !tmp_3_fu_3448_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_fu_3402_p2.read()) - sc_biguint<14>(tmp_3_fu_3448_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_2_fu_11792_p2() {
    p_Val2_7_0_2_fu_11792_p2 = (!y_V_1_0_1_cast_fu_11744_p1.read().is_01() || !p_Val2_6_0_2_fu_11788_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_0_1_cast_fu_11744_p1.read()) - sc_bigint<15>(p_Val2_6_0_2_fu_11788_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_3_fu_11870_p2() {
    p_Val2_7_0_3_fu_11870_p2 = (!y_V_1_0_2_fu_11822_p3.read().is_01() || !p_Val2_6_0_3_fu_11866_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_0_2_fu_11822_p3.read()) - sc_bigint<15>(p_Val2_6_0_3_fu_11866_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_4_fu_25524_p2() {
    p_Val2_7_0_4_fu_25524_p2 = (!y_V_1_0_3_reg_60465.read().is_01() || !p_Val2_6_0_4_fu_25521_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_0_3_reg_60465.read()) - sc_bigint<15>(p_Val2_6_0_4_fu_25521_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_5_fu_25598_p2() {
    p_Val2_7_0_5_fu_25598_p2 = (!y_V_1_0_4_fu_25550_p3.read().is_01() || !p_Val2_6_0_5_fu_25594_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_0_4_fu_25550_p3.read()) - sc_bigint<15>(p_Val2_6_0_5_fu_25594_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_6_fu_36079_p2() {
    p_Val2_7_0_6_fu_36079_p2 = (!y_V_1_0_5_reg_62879.read().is_01() || !p_Val2_6_0_6_fu_36076_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_0_5_reg_62879.read()) - sc_bigint<15>(p_Val2_6_0_6_fu_36076_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_0_7_fu_36143_p2() {
    p_Val2_7_0_7_fu_36143_p2 = (!y_V_1_0_6_fu_36097_p3.read().is_01() || !p_Val2_6_0_7_fu_36139_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_0_6_fu_36097_p3.read()) - sc_bigint<15>(p_Val2_6_0_7_fu_36139_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_1_fu_4632_p2() {
    p_Val2_7_10_1_fu_4632_p2 = (!p_Val2_7_s_fu_4582_p2.read().is_01() || !tmp_205_fu_4628_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_s_fu_4582_p2.read()) - sc_biguint<14>(tmp_205_fu_4628_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_2_fu_13732_p2() {
    p_Val2_7_10_2_fu_13732_p2 = (!y_V_1_10_1_cast_fu_13684_p1.read().is_01() || !p_Val2_6_10_2_fu_13728_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_10_1_cast_fu_13684_p1.read()) - sc_bigint<15>(p_Val2_6_10_2_fu_13728_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_3_fu_13810_p2() {
    p_Val2_7_10_3_fu_13810_p2 = (!y_V_1_10_2_fu_13762_p3.read().is_01() || !p_Val2_6_10_3_fu_13806_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_10_2_fu_13762_p3.read()) - sc_bigint<15>(p_Val2_6_10_3_fu_13806_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_4_fu_27004_p2() {
    p_Val2_7_10_4_fu_27004_p2 = (!y_V_1_10_3_reg_60805.read().is_01() || !p_Val2_6_10_4_fu_27001_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_10_3_reg_60805.read()) - sc_bigint<15>(p_Val2_6_10_4_fu_27001_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_5_fu_27078_p2() {
    p_Val2_7_10_5_fu_27078_p2 = (!y_V_1_10_4_fu_27030_p3.read().is_01() || !p_Val2_6_10_5_fu_27074_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_10_4_fu_27030_p3.read()) - sc_bigint<15>(p_Val2_6_10_5_fu_27074_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_6_fu_37609_p2() {
    p_Val2_7_10_6_fu_37609_p2 = (!y_V_1_10_5_reg_63219.read().is_01() || !p_Val2_6_10_6_fu_37606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_10_5_reg_63219.read()) - sc_bigint<15>(p_Val2_6_10_6_fu_37606_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_7_fu_37673_p2() {
    p_Val2_7_10_7_fu_37673_p2 = (!y_V_1_10_6_fu_37627_p3.read().is_01() || !p_Val2_6_10_7_fu_37669_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_10_6_fu_37627_p3.read()) - sc_bigint<15>(p_Val2_6_10_7_fu_37669_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_10_fu_4700_p2() {
    p_Val2_7_10_fu_4700_p2 = (!y0_V_10_cast_fu_4662_p1.read().is_01() || !x0_V_10_cast_fu_4674_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_10_cast_fu_4662_p1.read()) - sc_biguint<14>(x0_V_10_cast_fu_4674_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_1_fu_4750_p2() {
    p_Val2_7_11_1_fu_4750_p2 = (!p_Val2_7_10_fu_4700_p2.read().is_01() || !tmp_225_fu_4746_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_10_fu_4700_p2.read()) - sc_biguint<14>(tmp_225_fu_4746_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_2_fu_13926_p2() {
    p_Val2_7_11_2_fu_13926_p2 = (!y_V_1_11_1_cast_fu_13878_p1.read().is_01() || !p_Val2_6_11_2_fu_13922_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_11_1_cast_fu_13878_p1.read()) - sc_bigint<15>(p_Val2_6_11_2_fu_13922_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_3_fu_14004_p2() {
    p_Val2_7_11_3_fu_14004_p2 = (!y_V_1_11_2_fu_13956_p3.read().is_01() || !p_Val2_6_11_3_fu_14000_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_11_2_fu_13956_p3.read()) - sc_bigint<15>(p_Val2_6_11_3_fu_14000_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_4_fu_27152_p2() {
    p_Val2_7_11_4_fu_27152_p2 = (!y_V_1_11_3_reg_60839.read().is_01() || !p_Val2_6_11_4_fu_27149_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_11_3_reg_60839.read()) - sc_bigint<15>(p_Val2_6_11_4_fu_27149_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_5_fu_27226_p2() {
    p_Val2_7_11_5_fu_27226_p2 = (!y_V_1_11_4_fu_27178_p3.read().is_01() || !p_Val2_6_11_5_fu_27222_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_11_4_fu_27178_p3.read()) - sc_bigint<15>(p_Val2_6_11_5_fu_27222_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_6_fu_37762_p2() {
    p_Val2_7_11_6_fu_37762_p2 = (!y_V_1_11_5_reg_63253.read().is_01() || !p_Val2_6_11_6_fu_37759_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_11_5_reg_63253.read()) - sc_bigint<15>(p_Val2_6_11_6_fu_37759_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_7_fu_37826_p2() {
    p_Val2_7_11_7_fu_37826_p2 = (!y_V_1_11_6_fu_37780_p3.read().is_01() || !p_Val2_6_11_7_fu_37822_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_11_6_fu_37780_p3.read()) - sc_bigint<15>(p_Val2_6_11_7_fu_37822_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_11_fu_4818_p2() {
    p_Val2_7_11_fu_4818_p2 = (!y0_V_11_cast_fu_4780_p1.read().is_01() || !x0_V_11_cast_fu_4792_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_11_cast_fu_4780_p1.read()) - sc_biguint<14>(x0_V_11_cast_fu_4792_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_1_fu_4868_p2() {
    p_Val2_7_12_1_fu_4868_p2 = (!p_Val2_7_11_fu_4818_p2.read().is_01() || !tmp_245_fu_4864_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_11_fu_4818_p2.read()) - sc_biguint<14>(tmp_245_fu_4864_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_2_fu_14120_p2() {
    p_Val2_7_12_2_fu_14120_p2 = (!y_V_1_12_1_cast_fu_14072_p1.read().is_01() || !p_Val2_6_12_2_fu_14116_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_12_1_cast_fu_14072_p1.read()) - sc_bigint<15>(p_Val2_6_12_2_fu_14116_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_3_fu_14198_p2() {
    p_Val2_7_12_3_fu_14198_p2 = (!y_V_1_12_2_fu_14150_p3.read().is_01() || !p_Val2_6_12_3_fu_14194_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_12_2_fu_14150_p3.read()) - sc_bigint<15>(p_Val2_6_12_3_fu_14194_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_4_fu_27300_p2() {
    p_Val2_7_12_4_fu_27300_p2 = (!y_V_1_12_3_reg_60873.read().is_01() || !p_Val2_6_12_4_fu_27297_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_12_3_reg_60873.read()) - sc_bigint<15>(p_Val2_6_12_4_fu_27297_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_5_fu_27374_p2() {
    p_Val2_7_12_5_fu_27374_p2 = (!y_V_1_12_4_fu_27326_p3.read().is_01() || !p_Val2_6_12_5_fu_27370_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_12_4_fu_27326_p3.read()) - sc_bigint<15>(p_Val2_6_12_5_fu_27370_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_6_fu_37915_p2() {
    p_Val2_7_12_6_fu_37915_p2 = (!y_V_1_12_5_reg_63287.read().is_01() || !p_Val2_6_12_6_fu_37912_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_12_5_reg_63287.read()) - sc_bigint<15>(p_Val2_6_12_6_fu_37912_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_7_fu_37979_p2() {
    p_Val2_7_12_7_fu_37979_p2 = (!y_V_1_12_6_fu_37933_p3.read().is_01() || !p_Val2_6_12_7_fu_37975_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_12_6_fu_37933_p3.read()) - sc_bigint<15>(p_Val2_6_12_7_fu_37975_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_12_fu_4936_p2() {
    p_Val2_7_12_fu_4936_p2 = (!y0_V_12_cast_fu_4898_p1.read().is_01() || !x0_V_12_cast_fu_4910_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_12_cast_fu_4898_p1.read()) - sc_biguint<14>(x0_V_12_cast_fu_4910_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_1_fu_4986_p2() {
    p_Val2_7_13_1_fu_4986_p2 = (!p_Val2_7_12_fu_4936_p2.read().is_01() || !tmp_265_fu_4982_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_12_fu_4936_p2.read()) - sc_biguint<14>(tmp_265_fu_4982_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_2_fu_14314_p2() {
    p_Val2_7_13_2_fu_14314_p2 = (!y_V_1_13_1_cast_fu_14266_p1.read().is_01() || !p_Val2_6_13_2_fu_14310_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_13_1_cast_fu_14266_p1.read()) - sc_bigint<15>(p_Val2_6_13_2_fu_14310_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_3_fu_14392_p2() {
    p_Val2_7_13_3_fu_14392_p2 = (!y_V_1_13_2_fu_14344_p3.read().is_01() || !p_Val2_6_13_3_fu_14388_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_13_2_fu_14344_p3.read()) - sc_bigint<15>(p_Val2_6_13_3_fu_14388_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_4_fu_27448_p2() {
    p_Val2_7_13_4_fu_27448_p2 = (!y_V_1_13_3_reg_60907.read().is_01() || !p_Val2_6_13_4_fu_27445_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_13_3_reg_60907.read()) - sc_bigint<15>(p_Val2_6_13_4_fu_27445_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_5_fu_27522_p2() {
    p_Val2_7_13_5_fu_27522_p2 = (!y_V_1_13_4_fu_27474_p3.read().is_01() || !p_Val2_6_13_5_fu_27518_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_13_4_fu_27474_p3.read()) - sc_bigint<15>(p_Val2_6_13_5_fu_27518_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_6_fu_38068_p2() {
    p_Val2_7_13_6_fu_38068_p2 = (!y_V_1_13_5_reg_63321.read().is_01() || !p_Val2_6_13_6_fu_38065_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_13_5_reg_63321.read()) - sc_bigint<15>(p_Val2_6_13_6_fu_38065_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_7_fu_38132_p2() {
    p_Val2_7_13_7_fu_38132_p2 = (!y_V_1_13_6_fu_38086_p3.read().is_01() || !p_Val2_6_13_7_fu_38128_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_13_6_fu_38086_p3.read()) - sc_bigint<15>(p_Val2_6_13_7_fu_38128_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_13_fu_5054_p2() {
    p_Val2_7_13_fu_5054_p2 = (!y0_V_13_cast_fu_5016_p1.read().is_01() || !x0_V_13_cast_fu_5028_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_13_cast_fu_5016_p1.read()) - sc_biguint<14>(x0_V_13_cast_fu_5028_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_1_fu_5104_p2() {
    p_Val2_7_14_1_fu_5104_p2 = (!p_Val2_7_13_fu_5054_p2.read().is_01() || !tmp_285_fu_5100_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_13_fu_5054_p2.read()) - sc_biguint<14>(tmp_285_fu_5100_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_2_fu_14508_p2() {
    p_Val2_7_14_2_fu_14508_p2 = (!y_V_1_14_1_cast_fu_14460_p1.read().is_01() || !p_Val2_6_14_2_fu_14504_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_14_1_cast_fu_14460_p1.read()) - sc_bigint<15>(p_Val2_6_14_2_fu_14504_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_3_fu_14586_p2() {
    p_Val2_7_14_3_fu_14586_p2 = (!y_V_1_14_2_fu_14538_p3.read().is_01() || !p_Val2_6_14_3_fu_14582_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_14_2_fu_14538_p3.read()) - sc_bigint<15>(p_Val2_6_14_3_fu_14582_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_4_fu_27596_p2() {
    p_Val2_7_14_4_fu_27596_p2 = (!y_V_1_14_3_reg_60941.read().is_01() || !p_Val2_6_14_4_fu_27593_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_14_3_reg_60941.read()) - sc_bigint<15>(p_Val2_6_14_4_fu_27593_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_5_fu_27670_p2() {
    p_Val2_7_14_5_fu_27670_p2 = (!y_V_1_14_4_fu_27622_p3.read().is_01() || !p_Val2_6_14_5_fu_27666_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_14_4_fu_27622_p3.read()) - sc_bigint<15>(p_Val2_6_14_5_fu_27666_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_6_fu_38221_p2() {
    p_Val2_7_14_6_fu_38221_p2 = (!y_V_1_14_5_reg_63355.read().is_01() || !p_Val2_6_14_6_fu_38218_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_14_5_reg_63355.read()) - sc_bigint<15>(p_Val2_6_14_6_fu_38218_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_7_fu_38285_p2() {
    p_Val2_7_14_7_fu_38285_p2 = (!y_V_1_14_6_fu_38239_p3.read().is_01() || !p_Val2_6_14_7_fu_38281_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_14_6_fu_38239_p3.read()) - sc_bigint<15>(p_Val2_6_14_7_fu_38281_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_14_fu_5172_p2() {
    p_Val2_7_14_fu_5172_p2 = (!y0_V_14_cast_fu_5134_p1.read().is_01() || !x0_V_14_cast_fu_5146_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_14_cast_fu_5134_p1.read()) - sc_biguint<14>(x0_V_14_cast_fu_5146_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_1_fu_5222_p2() {
    p_Val2_7_15_1_fu_5222_p2 = (!p_Val2_7_14_fu_5172_p2.read().is_01() || !tmp_305_fu_5218_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_14_fu_5172_p2.read()) - sc_biguint<14>(tmp_305_fu_5218_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_2_fu_14702_p2() {
    p_Val2_7_15_2_fu_14702_p2 = (!y_V_1_15_1_cast_fu_14654_p1.read().is_01() || !p_Val2_6_15_2_fu_14698_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_15_1_cast_fu_14654_p1.read()) - sc_bigint<15>(p_Val2_6_15_2_fu_14698_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_3_fu_14780_p2() {
    p_Val2_7_15_3_fu_14780_p2 = (!y_V_1_15_2_fu_14732_p3.read().is_01() || !p_Val2_6_15_3_fu_14776_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_15_2_fu_14732_p3.read()) - sc_bigint<15>(p_Val2_6_15_3_fu_14776_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_4_fu_27744_p2() {
    p_Val2_7_15_4_fu_27744_p2 = (!y_V_1_15_3_reg_60975.read().is_01() || !p_Val2_6_15_4_fu_27741_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_15_3_reg_60975.read()) - sc_bigint<15>(p_Val2_6_15_4_fu_27741_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_5_fu_27818_p2() {
    p_Val2_7_15_5_fu_27818_p2 = (!y_V_1_15_4_fu_27770_p3.read().is_01() || !p_Val2_6_15_5_fu_27814_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_15_4_fu_27770_p3.read()) - sc_bigint<15>(p_Val2_6_15_5_fu_27814_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_6_fu_38374_p2() {
    p_Val2_7_15_6_fu_38374_p2 = (!y_V_1_15_5_reg_63389.read().is_01() || !p_Val2_6_15_6_fu_38371_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_15_5_reg_63389.read()) - sc_bigint<15>(p_Val2_6_15_6_fu_38371_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_7_fu_38438_p2() {
    p_Val2_7_15_7_fu_38438_p2 = (!y_V_1_15_6_fu_38392_p3.read().is_01() || !p_Val2_6_15_7_fu_38434_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_15_6_fu_38392_p3.read()) - sc_bigint<15>(p_Val2_6_15_7_fu_38434_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_15_fu_5290_p2() {
    p_Val2_7_15_fu_5290_p2 = (!y0_V_15_cast_fu_5252_p1.read().is_01() || !x0_V_15_cast_fu_5264_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_15_cast_fu_5252_p1.read()) - sc_biguint<14>(x0_V_15_cast_fu_5264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_1_fu_5340_p2() {
    p_Val2_7_16_1_fu_5340_p2 = (!p_Val2_7_15_fu_5290_p2.read().is_01() || !tmp_325_fu_5336_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_15_fu_5290_p2.read()) - sc_biguint<14>(tmp_325_fu_5336_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_2_fu_14896_p2() {
    p_Val2_7_16_2_fu_14896_p2 = (!y_V_1_16_1_cast_fu_14848_p1.read().is_01() || !p_Val2_6_16_2_fu_14892_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_16_1_cast_fu_14848_p1.read()) - sc_bigint<15>(p_Val2_6_16_2_fu_14892_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_3_fu_14974_p2() {
    p_Val2_7_16_3_fu_14974_p2 = (!y_V_1_16_2_fu_14926_p3.read().is_01() || !p_Val2_6_16_3_fu_14970_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_16_2_fu_14926_p3.read()) - sc_bigint<15>(p_Val2_6_16_3_fu_14970_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_4_fu_27892_p2() {
    p_Val2_7_16_4_fu_27892_p2 = (!y_V_1_16_3_reg_61009.read().is_01() || !p_Val2_6_16_4_fu_27889_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_16_3_reg_61009.read()) - sc_bigint<15>(p_Val2_6_16_4_fu_27889_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_5_fu_27966_p2() {
    p_Val2_7_16_5_fu_27966_p2 = (!y_V_1_16_4_fu_27918_p3.read().is_01() || !p_Val2_6_16_5_fu_27962_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_16_4_fu_27918_p3.read()) - sc_bigint<15>(p_Val2_6_16_5_fu_27962_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_6_fu_38527_p2() {
    p_Val2_7_16_6_fu_38527_p2 = (!y_V_1_16_5_reg_63423.read().is_01() || !p_Val2_6_16_6_fu_38524_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_16_5_reg_63423.read()) - sc_bigint<15>(p_Val2_6_16_6_fu_38524_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_7_fu_38591_p2() {
    p_Val2_7_16_7_fu_38591_p2 = (!y_V_1_16_6_fu_38545_p3.read().is_01() || !p_Val2_6_16_7_fu_38587_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_16_6_fu_38545_p3.read()) - sc_bigint<15>(p_Val2_6_16_7_fu_38587_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_16_fu_5408_p2() {
    p_Val2_7_16_fu_5408_p2 = (!y0_V_16_cast_fu_5370_p1.read().is_01() || !x0_V_16_cast_fu_5382_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_16_cast_fu_5370_p1.read()) - sc_biguint<14>(x0_V_16_cast_fu_5382_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_1_fu_5458_p2() {
    p_Val2_7_17_1_fu_5458_p2 = (!p_Val2_7_16_fu_5408_p2.read().is_01() || !tmp_345_fu_5454_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_16_fu_5408_p2.read()) - sc_biguint<14>(tmp_345_fu_5454_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_2_fu_15090_p2() {
    p_Val2_7_17_2_fu_15090_p2 = (!y_V_1_17_1_cast_fu_15042_p1.read().is_01() || !p_Val2_6_17_2_fu_15086_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_17_1_cast_fu_15042_p1.read()) - sc_bigint<15>(p_Val2_6_17_2_fu_15086_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_3_fu_15168_p2() {
    p_Val2_7_17_3_fu_15168_p2 = (!y_V_1_17_2_fu_15120_p3.read().is_01() || !p_Val2_6_17_3_fu_15164_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_17_2_fu_15120_p3.read()) - sc_bigint<15>(p_Val2_6_17_3_fu_15164_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_4_fu_28040_p2() {
    p_Val2_7_17_4_fu_28040_p2 = (!y_V_1_17_3_reg_61043.read().is_01() || !p_Val2_6_17_4_fu_28037_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_17_3_reg_61043.read()) - sc_bigint<15>(p_Val2_6_17_4_fu_28037_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_5_fu_28114_p2() {
    p_Val2_7_17_5_fu_28114_p2 = (!y_V_1_17_4_fu_28066_p3.read().is_01() || !p_Val2_6_17_5_fu_28110_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_17_4_fu_28066_p3.read()) - sc_bigint<15>(p_Val2_6_17_5_fu_28110_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_6_fu_38680_p2() {
    p_Val2_7_17_6_fu_38680_p2 = (!y_V_1_17_5_reg_63457.read().is_01() || !p_Val2_6_17_6_fu_38677_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_17_5_reg_63457.read()) - sc_bigint<15>(p_Val2_6_17_6_fu_38677_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_7_fu_38744_p2() {
    p_Val2_7_17_7_fu_38744_p2 = (!y_V_1_17_6_fu_38698_p3.read().is_01() || !p_Val2_6_17_7_fu_38740_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_17_6_fu_38698_p3.read()) - sc_bigint<15>(p_Val2_6_17_7_fu_38740_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_17_fu_5526_p2() {
    p_Val2_7_17_fu_5526_p2 = (!y0_V_17_cast_fu_5488_p1.read().is_01() || !x0_V_17_cast_fu_5500_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_17_cast_fu_5488_p1.read()) - sc_biguint<14>(x0_V_17_cast_fu_5500_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_1_fu_5576_p2() {
    p_Val2_7_18_1_fu_5576_p2 = (!p_Val2_7_17_fu_5526_p2.read().is_01() || !tmp_365_fu_5572_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_17_fu_5526_p2.read()) - sc_biguint<14>(tmp_365_fu_5572_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_2_fu_15284_p2() {
    p_Val2_7_18_2_fu_15284_p2 = (!y_V_1_18_1_cast_fu_15236_p1.read().is_01() || !p_Val2_6_18_2_fu_15280_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_18_1_cast_fu_15236_p1.read()) - sc_bigint<15>(p_Val2_6_18_2_fu_15280_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_3_fu_15362_p2() {
    p_Val2_7_18_3_fu_15362_p2 = (!y_V_1_18_2_fu_15314_p3.read().is_01() || !p_Val2_6_18_3_fu_15358_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_18_2_fu_15314_p3.read()) - sc_bigint<15>(p_Val2_6_18_3_fu_15358_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_4_fu_28188_p2() {
    p_Val2_7_18_4_fu_28188_p2 = (!y_V_1_18_3_reg_61077.read().is_01() || !p_Val2_6_18_4_fu_28185_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_18_3_reg_61077.read()) - sc_bigint<15>(p_Val2_6_18_4_fu_28185_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_5_fu_28262_p2() {
    p_Val2_7_18_5_fu_28262_p2 = (!y_V_1_18_4_fu_28214_p3.read().is_01() || !p_Val2_6_18_5_fu_28258_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_18_4_fu_28214_p3.read()) - sc_bigint<15>(p_Val2_6_18_5_fu_28258_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_6_fu_38833_p2() {
    p_Val2_7_18_6_fu_38833_p2 = (!y_V_1_18_5_reg_63491.read().is_01() || !p_Val2_6_18_6_fu_38830_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_18_5_reg_63491.read()) - sc_bigint<15>(p_Val2_6_18_6_fu_38830_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_7_fu_38897_p2() {
    p_Val2_7_18_7_fu_38897_p2 = (!y_V_1_18_6_fu_38851_p3.read().is_01() || !p_Val2_6_18_7_fu_38893_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_18_6_fu_38851_p3.read()) - sc_bigint<15>(p_Val2_6_18_7_fu_38893_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_18_fu_5644_p2() {
    p_Val2_7_18_fu_5644_p2 = (!y0_V_18_cast_fu_5606_p1.read().is_01() || !x0_V_18_cast_fu_5618_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_18_cast_fu_5606_p1.read()) - sc_biguint<14>(x0_V_18_cast_fu_5618_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_1_fu_5694_p2() {
    p_Val2_7_19_1_fu_5694_p2 = (!p_Val2_7_18_fu_5644_p2.read().is_01() || !tmp_385_fu_5690_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_18_fu_5644_p2.read()) - sc_biguint<14>(tmp_385_fu_5690_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_2_fu_15478_p2() {
    p_Val2_7_19_2_fu_15478_p2 = (!y_V_1_19_1_cast_fu_15430_p1.read().is_01() || !p_Val2_6_19_2_fu_15474_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_19_1_cast_fu_15430_p1.read()) - sc_bigint<15>(p_Val2_6_19_2_fu_15474_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_3_fu_15556_p2() {
    p_Val2_7_19_3_fu_15556_p2 = (!y_V_1_19_2_fu_15508_p3.read().is_01() || !p_Val2_6_19_3_fu_15552_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_19_2_fu_15508_p3.read()) - sc_bigint<15>(p_Val2_6_19_3_fu_15552_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_4_fu_28336_p2() {
    p_Val2_7_19_4_fu_28336_p2 = (!y_V_1_19_3_reg_61111.read().is_01() || !p_Val2_6_19_4_fu_28333_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_19_3_reg_61111.read()) - sc_bigint<15>(p_Val2_6_19_4_fu_28333_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_5_fu_28410_p2() {
    p_Val2_7_19_5_fu_28410_p2 = (!y_V_1_19_4_fu_28362_p3.read().is_01() || !p_Val2_6_19_5_fu_28406_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_19_4_fu_28362_p3.read()) - sc_bigint<15>(p_Val2_6_19_5_fu_28406_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_6_fu_38986_p2() {
    p_Val2_7_19_6_fu_38986_p2 = (!y_V_1_19_5_reg_63525.read().is_01() || !p_Val2_6_19_6_fu_38983_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_19_5_reg_63525.read()) - sc_bigint<15>(p_Val2_6_19_6_fu_38983_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_7_fu_39050_p2() {
    p_Val2_7_19_7_fu_39050_p2 = (!y_V_1_19_6_fu_39004_p3.read().is_01() || !p_Val2_6_19_7_fu_39046_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_19_6_fu_39004_p3.read()) - sc_bigint<15>(p_Val2_6_19_7_fu_39046_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_19_fu_5762_p2() {
    p_Val2_7_19_fu_5762_p2 = (!y0_V_19_cast_fu_5724_p1.read().is_01() || !x0_V_19_cast_fu_5736_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_19_cast_fu_5724_p1.read()) - sc_biguint<14>(x0_V_19_cast_fu_5736_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_1_fu_3570_p2() {
    p_Val2_7_1_1_fu_3570_p2 = (!p_Val2_7_1_fu_3520_p2.read().is_01() || !tmp_25_fu_3566_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_1_fu_3520_p2.read()) - sc_biguint<14>(tmp_25_fu_3566_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_2_fu_11986_p2() {
    p_Val2_7_1_2_fu_11986_p2 = (!y_V_1_1_1_cast_fu_11938_p1.read().is_01() || !p_Val2_6_1_2_fu_11982_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_1_1_cast_fu_11938_p1.read()) - sc_bigint<15>(p_Val2_6_1_2_fu_11982_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_3_fu_12064_p2() {
    p_Val2_7_1_3_fu_12064_p2 = (!y_V_1_1_2_fu_12016_p3.read().is_01() || !p_Val2_6_1_3_fu_12060_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_1_2_fu_12016_p3.read()) - sc_bigint<15>(p_Val2_6_1_3_fu_12060_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_4_fu_25672_p2() {
    p_Val2_7_1_4_fu_25672_p2 = (!y_V_1_1_3_reg_60499.read().is_01() || !p_Val2_6_1_4_fu_25669_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_1_3_reg_60499.read()) - sc_bigint<15>(p_Val2_6_1_4_fu_25669_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_5_fu_25746_p2() {
    p_Val2_7_1_5_fu_25746_p2 = (!y_V_1_1_4_fu_25698_p3.read().is_01() || !p_Val2_6_1_5_fu_25742_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_1_4_fu_25698_p3.read()) - sc_bigint<15>(p_Val2_6_1_5_fu_25742_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_6_fu_36232_p2() {
    p_Val2_7_1_6_fu_36232_p2 = (!y_V_1_1_5_reg_62913.read().is_01() || !p_Val2_6_1_6_fu_36229_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_1_5_reg_62913.read()) - sc_bigint<15>(p_Val2_6_1_6_fu_36229_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_7_fu_36296_p2() {
    p_Val2_7_1_7_fu_36296_p2 = (!y_V_1_1_6_fu_36250_p3.read().is_01() || !p_Val2_6_1_7_fu_36292_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_1_6_fu_36250_p3.read()) - sc_bigint<15>(p_Val2_6_1_7_fu_36292_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_1_fu_3520_p2() {
    p_Val2_7_1_fu_3520_p2 = (!y0_V_1_cast_fu_3482_p1.read().is_01() || !x0_V_1_cast_fu_3494_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_1_cast_fu_3482_p1.read()) - sc_biguint<14>(x0_V_1_cast_fu_3494_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_1_fu_5812_p2() {
    p_Val2_7_20_1_fu_5812_p2 = (!p_Val2_7_19_fu_5762_p2.read().is_01() || !tmp_405_fu_5808_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_19_fu_5762_p2.read()) - sc_biguint<14>(tmp_405_fu_5808_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_2_fu_15672_p2() {
    p_Val2_7_20_2_fu_15672_p2 = (!y_V_1_20_1_cast_fu_15624_p1.read().is_01() || !p_Val2_6_20_2_fu_15668_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_20_1_cast_fu_15624_p1.read()) - sc_bigint<15>(p_Val2_6_20_2_fu_15668_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_3_fu_15750_p2() {
    p_Val2_7_20_3_fu_15750_p2 = (!y_V_1_20_2_fu_15702_p3.read().is_01() || !p_Val2_6_20_3_fu_15746_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_20_2_fu_15702_p3.read()) - sc_bigint<15>(p_Val2_6_20_3_fu_15746_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_4_fu_28484_p2() {
    p_Val2_7_20_4_fu_28484_p2 = (!y_V_1_20_3_reg_61145.read().is_01() || !p_Val2_6_20_4_fu_28481_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_20_3_reg_61145.read()) - sc_bigint<15>(p_Val2_6_20_4_fu_28481_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_5_fu_28558_p2() {
    p_Val2_7_20_5_fu_28558_p2 = (!y_V_1_20_4_fu_28510_p3.read().is_01() || !p_Val2_6_20_5_fu_28554_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_20_4_fu_28510_p3.read()) - sc_bigint<15>(p_Val2_6_20_5_fu_28554_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_6_fu_39139_p2() {
    p_Val2_7_20_6_fu_39139_p2 = (!y_V_1_20_5_reg_63559.read().is_01() || !p_Val2_6_20_6_fu_39136_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_20_5_reg_63559.read()) - sc_bigint<15>(p_Val2_6_20_6_fu_39136_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_7_fu_39203_p2() {
    p_Val2_7_20_7_fu_39203_p2 = (!y_V_1_20_6_fu_39157_p3.read().is_01() || !p_Val2_6_20_7_fu_39199_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_20_6_fu_39157_p3.read()) - sc_bigint<15>(p_Val2_6_20_7_fu_39199_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_20_fu_5880_p2() {
    p_Val2_7_20_fu_5880_p2 = (!y0_V_20_cast_fu_5842_p1.read().is_01() || !x0_V_20_cast_fu_5854_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_20_cast_fu_5842_p1.read()) - sc_biguint<14>(x0_V_20_cast_fu_5854_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_1_fu_5930_p2() {
    p_Val2_7_21_1_fu_5930_p2 = (!p_Val2_7_20_fu_5880_p2.read().is_01() || !tmp_425_fu_5926_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_20_fu_5880_p2.read()) - sc_biguint<14>(tmp_425_fu_5926_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_2_fu_15866_p2() {
    p_Val2_7_21_2_fu_15866_p2 = (!y_V_1_21_1_cast_fu_15818_p1.read().is_01() || !p_Val2_6_21_2_fu_15862_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_21_1_cast_fu_15818_p1.read()) - sc_bigint<15>(p_Val2_6_21_2_fu_15862_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_3_fu_15944_p2() {
    p_Val2_7_21_3_fu_15944_p2 = (!y_V_1_21_2_fu_15896_p3.read().is_01() || !p_Val2_6_21_3_fu_15940_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_21_2_fu_15896_p3.read()) - sc_bigint<15>(p_Val2_6_21_3_fu_15940_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_4_fu_28632_p2() {
    p_Val2_7_21_4_fu_28632_p2 = (!y_V_1_21_3_reg_61179.read().is_01() || !p_Val2_6_21_4_fu_28629_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_21_3_reg_61179.read()) - sc_bigint<15>(p_Val2_6_21_4_fu_28629_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_5_fu_28706_p2() {
    p_Val2_7_21_5_fu_28706_p2 = (!y_V_1_21_4_fu_28658_p3.read().is_01() || !p_Val2_6_21_5_fu_28702_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_21_4_fu_28658_p3.read()) - sc_bigint<15>(p_Val2_6_21_5_fu_28702_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_6_fu_39292_p2() {
    p_Val2_7_21_6_fu_39292_p2 = (!y_V_1_21_5_reg_63593.read().is_01() || !p_Val2_6_21_6_fu_39289_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_21_5_reg_63593.read()) - sc_bigint<15>(p_Val2_6_21_6_fu_39289_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_7_fu_39356_p2() {
    p_Val2_7_21_7_fu_39356_p2 = (!y_V_1_21_6_fu_39310_p3.read().is_01() || !p_Val2_6_21_7_fu_39352_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_21_6_fu_39310_p3.read()) - sc_bigint<15>(p_Val2_6_21_7_fu_39352_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_21_fu_5998_p2() {
    p_Val2_7_21_fu_5998_p2 = (!y0_V_21_cast_fu_5960_p1.read().is_01() || !x0_V_21_cast_fu_5972_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_21_cast_fu_5960_p1.read()) - sc_biguint<14>(x0_V_21_cast_fu_5972_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_1_fu_6048_p2() {
    p_Val2_7_22_1_fu_6048_p2 = (!p_Val2_7_21_fu_5998_p2.read().is_01() || !tmp_445_fu_6044_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_21_fu_5998_p2.read()) - sc_biguint<14>(tmp_445_fu_6044_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_2_fu_16060_p2() {
    p_Val2_7_22_2_fu_16060_p2 = (!y_V_1_22_1_cast_fu_16012_p1.read().is_01() || !p_Val2_6_22_2_fu_16056_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_22_1_cast_fu_16012_p1.read()) - sc_bigint<15>(p_Val2_6_22_2_fu_16056_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_3_fu_16138_p2() {
    p_Val2_7_22_3_fu_16138_p2 = (!y_V_1_22_2_fu_16090_p3.read().is_01() || !p_Val2_6_22_3_fu_16134_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_22_2_fu_16090_p3.read()) - sc_bigint<15>(p_Val2_6_22_3_fu_16134_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_4_fu_28780_p2() {
    p_Val2_7_22_4_fu_28780_p2 = (!y_V_1_22_3_reg_61213.read().is_01() || !p_Val2_6_22_4_fu_28777_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_22_3_reg_61213.read()) - sc_bigint<15>(p_Val2_6_22_4_fu_28777_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_5_fu_28854_p2() {
    p_Val2_7_22_5_fu_28854_p2 = (!y_V_1_22_4_fu_28806_p3.read().is_01() || !p_Val2_6_22_5_fu_28850_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_22_4_fu_28806_p3.read()) - sc_bigint<15>(p_Val2_6_22_5_fu_28850_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_6_fu_39445_p2() {
    p_Val2_7_22_6_fu_39445_p2 = (!y_V_1_22_5_reg_63627.read().is_01() || !p_Val2_6_22_6_fu_39442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_22_5_reg_63627.read()) - sc_bigint<15>(p_Val2_6_22_6_fu_39442_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_7_fu_39509_p2() {
    p_Val2_7_22_7_fu_39509_p2 = (!y_V_1_22_6_fu_39463_p3.read().is_01() || !p_Val2_6_22_7_fu_39505_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_22_6_fu_39463_p3.read()) - sc_bigint<15>(p_Val2_6_22_7_fu_39505_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_22_fu_6116_p2() {
    p_Val2_7_22_fu_6116_p2 = (!y0_V_22_cast_fu_6078_p1.read().is_01() || !x0_V_22_cast_fu_6090_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_22_cast_fu_6078_p1.read()) - sc_biguint<14>(x0_V_22_cast_fu_6090_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_1_fu_6166_p2() {
    p_Val2_7_23_1_fu_6166_p2 = (!p_Val2_7_22_fu_6116_p2.read().is_01() || !tmp_465_fu_6162_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_22_fu_6116_p2.read()) - sc_biguint<14>(tmp_465_fu_6162_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_2_fu_16254_p2() {
    p_Val2_7_23_2_fu_16254_p2 = (!y_V_1_23_1_cast_fu_16206_p1.read().is_01() || !p_Val2_6_23_2_fu_16250_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_23_1_cast_fu_16206_p1.read()) - sc_bigint<15>(p_Val2_6_23_2_fu_16250_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_3_fu_16332_p2() {
    p_Val2_7_23_3_fu_16332_p2 = (!y_V_1_23_2_fu_16284_p3.read().is_01() || !p_Val2_6_23_3_fu_16328_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_23_2_fu_16284_p3.read()) - sc_bigint<15>(p_Val2_6_23_3_fu_16328_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_4_fu_28928_p2() {
    p_Val2_7_23_4_fu_28928_p2 = (!y_V_1_23_3_reg_61247.read().is_01() || !p_Val2_6_23_4_fu_28925_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_23_3_reg_61247.read()) - sc_bigint<15>(p_Val2_6_23_4_fu_28925_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_5_fu_29002_p2() {
    p_Val2_7_23_5_fu_29002_p2 = (!y_V_1_23_4_fu_28954_p3.read().is_01() || !p_Val2_6_23_5_fu_28998_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_23_4_fu_28954_p3.read()) - sc_bigint<15>(p_Val2_6_23_5_fu_28998_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_6_fu_39598_p2() {
    p_Val2_7_23_6_fu_39598_p2 = (!y_V_1_23_5_reg_63661.read().is_01() || !p_Val2_6_23_6_fu_39595_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_23_5_reg_63661.read()) - sc_bigint<15>(p_Val2_6_23_6_fu_39595_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_7_fu_39662_p2() {
    p_Val2_7_23_7_fu_39662_p2 = (!y_V_1_23_6_fu_39616_p3.read().is_01() || !p_Val2_6_23_7_fu_39658_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_23_6_fu_39616_p3.read()) - sc_bigint<15>(p_Val2_6_23_7_fu_39658_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_23_fu_6234_p2() {
    p_Val2_7_23_fu_6234_p2 = (!y0_V_23_cast_fu_6196_p1.read().is_01() || !x0_V_23_cast_fu_6208_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_23_cast_fu_6196_p1.read()) - sc_biguint<14>(x0_V_23_cast_fu_6208_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_1_fu_6284_p2() {
    p_Val2_7_24_1_fu_6284_p2 = (!p_Val2_7_23_fu_6234_p2.read().is_01() || !tmp_485_fu_6280_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_23_fu_6234_p2.read()) - sc_biguint<14>(tmp_485_fu_6280_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_2_fu_16448_p2() {
    p_Val2_7_24_2_fu_16448_p2 = (!y_V_1_24_1_cast_fu_16400_p1.read().is_01() || !p_Val2_6_24_2_fu_16444_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_24_1_cast_fu_16400_p1.read()) - sc_bigint<15>(p_Val2_6_24_2_fu_16444_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_3_fu_16526_p2() {
    p_Val2_7_24_3_fu_16526_p2 = (!y_V_1_24_2_fu_16478_p3.read().is_01() || !p_Val2_6_24_3_fu_16522_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_24_2_fu_16478_p3.read()) - sc_bigint<15>(p_Val2_6_24_3_fu_16522_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_4_fu_29076_p2() {
    p_Val2_7_24_4_fu_29076_p2 = (!y_V_1_24_3_reg_61281.read().is_01() || !p_Val2_6_24_4_fu_29073_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_24_3_reg_61281.read()) - sc_bigint<15>(p_Val2_6_24_4_fu_29073_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_5_fu_29150_p2() {
    p_Val2_7_24_5_fu_29150_p2 = (!y_V_1_24_4_fu_29102_p3.read().is_01() || !p_Val2_6_24_5_fu_29146_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_24_4_fu_29102_p3.read()) - sc_bigint<15>(p_Val2_6_24_5_fu_29146_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_6_fu_39751_p2() {
    p_Val2_7_24_6_fu_39751_p2 = (!y_V_1_24_5_reg_63695.read().is_01() || !p_Val2_6_24_6_fu_39748_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_24_5_reg_63695.read()) - sc_bigint<15>(p_Val2_6_24_6_fu_39748_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_7_fu_39815_p2() {
    p_Val2_7_24_7_fu_39815_p2 = (!y_V_1_24_6_fu_39769_p3.read().is_01() || !p_Val2_6_24_7_fu_39811_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_24_6_fu_39769_p3.read()) - sc_bigint<15>(p_Val2_6_24_7_fu_39811_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_24_fu_6352_p2() {
    p_Val2_7_24_fu_6352_p2 = (!y0_V_24_cast_fu_6314_p1.read().is_01() || !x0_V_24_cast_fu_6326_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_24_cast_fu_6314_p1.read()) - sc_biguint<14>(x0_V_24_cast_fu_6326_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_1_fu_6402_p2() {
    p_Val2_7_25_1_fu_6402_p2 = (!p_Val2_7_24_fu_6352_p2.read().is_01() || !tmp_505_fu_6398_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_24_fu_6352_p2.read()) - sc_biguint<14>(tmp_505_fu_6398_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_2_fu_16642_p2() {
    p_Val2_7_25_2_fu_16642_p2 = (!y_V_1_25_1_cast_fu_16594_p1.read().is_01() || !p_Val2_6_25_2_fu_16638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_25_1_cast_fu_16594_p1.read()) - sc_bigint<15>(p_Val2_6_25_2_fu_16638_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_3_fu_16720_p2() {
    p_Val2_7_25_3_fu_16720_p2 = (!y_V_1_25_2_fu_16672_p3.read().is_01() || !p_Val2_6_25_3_fu_16716_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_25_2_fu_16672_p3.read()) - sc_bigint<15>(p_Val2_6_25_3_fu_16716_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_4_fu_29224_p2() {
    p_Val2_7_25_4_fu_29224_p2 = (!y_V_1_25_3_reg_61315.read().is_01() || !p_Val2_6_25_4_fu_29221_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_25_3_reg_61315.read()) - sc_bigint<15>(p_Val2_6_25_4_fu_29221_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_5_fu_29298_p2() {
    p_Val2_7_25_5_fu_29298_p2 = (!y_V_1_25_4_fu_29250_p3.read().is_01() || !p_Val2_6_25_5_fu_29294_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_25_4_fu_29250_p3.read()) - sc_bigint<15>(p_Val2_6_25_5_fu_29294_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_6_fu_39904_p2() {
    p_Val2_7_25_6_fu_39904_p2 = (!y_V_1_25_5_reg_63729.read().is_01() || !p_Val2_6_25_6_fu_39901_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_25_5_reg_63729.read()) - sc_bigint<15>(p_Val2_6_25_6_fu_39901_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_7_fu_39968_p2() {
    p_Val2_7_25_7_fu_39968_p2 = (!y_V_1_25_6_fu_39922_p3.read().is_01() || !p_Val2_6_25_7_fu_39964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_25_6_fu_39922_p3.read()) - sc_bigint<15>(p_Val2_6_25_7_fu_39964_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_25_fu_6470_p2() {
    p_Val2_7_25_fu_6470_p2 = (!y0_V_25_cast_fu_6432_p1.read().is_01() || !x0_V_25_cast_fu_6444_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_25_cast_fu_6432_p1.read()) - sc_biguint<14>(x0_V_25_cast_fu_6444_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_1_fu_6520_p2() {
    p_Val2_7_26_1_fu_6520_p2 = (!p_Val2_7_25_fu_6470_p2.read().is_01() || !tmp_525_fu_6516_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_25_fu_6470_p2.read()) - sc_biguint<14>(tmp_525_fu_6516_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_2_fu_16836_p2() {
    p_Val2_7_26_2_fu_16836_p2 = (!y_V_1_26_1_cast_fu_16788_p1.read().is_01() || !p_Val2_6_26_2_fu_16832_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_26_1_cast_fu_16788_p1.read()) - sc_bigint<15>(p_Val2_6_26_2_fu_16832_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_3_fu_16914_p2() {
    p_Val2_7_26_3_fu_16914_p2 = (!y_V_1_26_2_fu_16866_p3.read().is_01() || !p_Val2_6_26_3_fu_16910_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_26_2_fu_16866_p3.read()) - sc_bigint<15>(p_Val2_6_26_3_fu_16910_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_4_fu_29372_p2() {
    p_Val2_7_26_4_fu_29372_p2 = (!y_V_1_26_3_reg_61349.read().is_01() || !p_Val2_6_26_4_fu_29369_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_26_3_reg_61349.read()) - sc_bigint<15>(p_Val2_6_26_4_fu_29369_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_5_fu_29446_p2() {
    p_Val2_7_26_5_fu_29446_p2 = (!y_V_1_26_4_fu_29398_p3.read().is_01() || !p_Val2_6_26_5_fu_29442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_26_4_fu_29398_p3.read()) - sc_bigint<15>(p_Val2_6_26_5_fu_29442_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_6_fu_40057_p2() {
    p_Val2_7_26_6_fu_40057_p2 = (!y_V_1_26_5_reg_63763.read().is_01() || !p_Val2_6_26_6_fu_40054_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_26_5_reg_63763.read()) - sc_bigint<15>(p_Val2_6_26_6_fu_40054_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_7_fu_40121_p2() {
    p_Val2_7_26_7_fu_40121_p2 = (!y_V_1_26_6_fu_40075_p3.read().is_01() || !p_Val2_6_26_7_fu_40117_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_26_6_fu_40075_p3.read()) - sc_bigint<15>(p_Val2_6_26_7_fu_40117_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_26_fu_6588_p2() {
    p_Val2_7_26_fu_6588_p2 = (!y0_V_26_cast_fu_6550_p1.read().is_01() || !x0_V_26_cast_fu_6562_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_26_cast_fu_6550_p1.read()) - sc_biguint<14>(x0_V_26_cast_fu_6562_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_1_fu_6638_p2() {
    p_Val2_7_27_1_fu_6638_p2 = (!p_Val2_7_26_fu_6588_p2.read().is_01() || !tmp_545_fu_6634_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_26_fu_6588_p2.read()) - sc_biguint<14>(tmp_545_fu_6634_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_2_fu_17030_p2() {
    p_Val2_7_27_2_fu_17030_p2 = (!y_V_1_27_1_cast_fu_16982_p1.read().is_01() || !p_Val2_6_27_2_fu_17026_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_27_1_cast_fu_16982_p1.read()) - sc_bigint<15>(p_Val2_6_27_2_fu_17026_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_3_fu_17108_p2() {
    p_Val2_7_27_3_fu_17108_p2 = (!y_V_1_27_2_fu_17060_p3.read().is_01() || !p_Val2_6_27_3_fu_17104_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_27_2_fu_17060_p3.read()) - sc_bigint<15>(p_Val2_6_27_3_fu_17104_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_4_fu_29520_p2() {
    p_Val2_7_27_4_fu_29520_p2 = (!y_V_1_27_3_reg_61383.read().is_01() || !p_Val2_6_27_4_fu_29517_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_27_3_reg_61383.read()) - sc_bigint<15>(p_Val2_6_27_4_fu_29517_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_5_fu_29594_p2() {
    p_Val2_7_27_5_fu_29594_p2 = (!y_V_1_27_4_fu_29546_p3.read().is_01() || !p_Val2_6_27_5_fu_29590_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_27_4_fu_29546_p3.read()) - sc_bigint<15>(p_Val2_6_27_5_fu_29590_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_6_fu_40210_p2() {
    p_Val2_7_27_6_fu_40210_p2 = (!y_V_1_27_5_reg_63797.read().is_01() || !p_Val2_6_27_6_fu_40207_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_27_5_reg_63797.read()) - sc_bigint<15>(p_Val2_6_27_6_fu_40207_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_7_fu_40274_p2() {
    p_Val2_7_27_7_fu_40274_p2 = (!y_V_1_27_6_fu_40228_p3.read().is_01() || !p_Val2_6_27_7_fu_40270_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_27_6_fu_40228_p3.read()) - sc_bigint<15>(p_Val2_6_27_7_fu_40270_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_27_fu_6706_p2() {
    p_Val2_7_27_fu_6706_p2 = (!y0_V_27_cast_fu_6668_p1.read().is_01() || !x0_V_27_cast_fu_6680_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_27_cast_fu_6668_p1.read()) - sc_biguint<14>(x0_V_27_cast_fu_6680_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_1_fu_6756_p2() {
    p_Val2_7_28_1_fu_6756_p2 = (!p_Val2_7_27_fu_6706_p2.read().is_01() || !tmp_565_fu_6752_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_27_fu_6706_p2.read()) - sc_biguint<14>(tmp_565_fu_6752_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_2_fu_17224_p2() {
    p_Val2_7_28_2_fu_17224_p2 = (!y_V_1_28_1_cast_fu_17176_p1.read().is_01() || !p_Val2_6_28_2_fu_17220_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_28_1_cast_fu_17176_p1.read()) - sc_bigint<15>(p_Val2_6_28_2_fu_17220_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_3_fu_17302_p2() {
    p_Val2_7_28_3_fu_17302_p2 = (!y_V_1_28_2_fu_17254_p3.read().is_01() || !p_Val2_6_28_3_fu_17298_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_28_2_fu_17254_p3.read()) - sc_bigint<15>(p_Val2_6_28_3_fu_17298_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_4_fu_29668_p2() {
    p_Val2_7_28_4_fu_29668_p2 = (!y_V_1_28_3_reg_61417.read().is_01() || !p_Val2_6_28_4_fu_29665_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_28_3_reg_61417.read()) - sc_bigint<15>(p_Val2_6_28_4_fu_29665_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_5_fu_29742_p2() {
    p_Val2_7_28_5_fu_29742_p2 = (!y_V_1_28_4_fu_29694_p3.read().is_01() || !p_Val2_6_28_5_fu_29738_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_28_4_fu_29694_p3.read()) - sc_bigint<15>(p_Val2_6_28_5_fu_29738_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_6_fu_40363_p2() {
    p_Val2_7_28_6_fu_40363_p2 = (!y_V_1_28_5_reg_63831.read().is_01() || !p_Val2_6_28_6_fu_40360_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_28_5_reg_63831.read()) - sc_bigint<15>(p_Val2_6_28_6_fu_40360_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_7_fu_40427_p2() {
    p_Val2_7_28_7_fu_40427_p2 = (!y_V_1_28_6_fu_40381_p3.read().is_01() || !p_Val2_6_28_7_fu_40423_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_28_6_fu_40381_p3.read()) - sc_bigint<15>(p_Val2_6_28_7_fu_40423_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_28_fu_6824_p2() {
    p_Val2_7_28_fu_6824_p2 = (!y0_V_28_cast_fu_6786_p1.read().is_01() || !x0_V_28_cast_fu_6798_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_28_cast_fu_6786_p1.read()) - sc_biguint<14>(x0_V_28_cast_fu_6798_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_1_fu_6874_p2() {
    p_Val2_7_29_1_fu_6874_p2 = (!p_Val2_7_28_fu_6824_p2.read().is_01() || !tmp_585_fu_6870_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_28_fu_6824_p2.read()) - sc_biguint<14>(tmp_585_fu_6870_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_2_fu_17418_p2() {
    p_Val2_7_29_2_fu_17418_p2 = (!y_V_1_29_1_cast_fu_17370_p1.read().is_01() || !p_Val2_6_29_2_fu_17414_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_29_1_cast_fu_17370_p1.read()) - sc_bigint<15>(p_Val2_6_29_2_fu_17414_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_3_fu_17496_p2() {
    p_Val2_7_29_3_fu_17496_p2 = (!y_V_1_29_2_fu_17448_p3.read().is_01() || !p_Val2_6_29_3_fu_17492_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_29_2_fu_17448_p3.read()) - sc_bigint<15>(p_Val2_6_29_3_fu_17492_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_4_fu_29816_p2() {
    p_Val2_7_29_4_fu_29816_p2 = (!y_V_1_29_3_reg_61451.read().is_01() || !p_Val2_6_29_4_fu_29813_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_29_3_reg_61451.read()) - sc_bigint<15>(p_Val2_6_29_4_fu_29813_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_5_fu_29890_p2() {
    p_Val2_7_29_5_fu_29890_p2 = (!y_V_1_29_4_fu_29842_p3.read().is_01() || !p_Val2_6_29_5_fu_29886_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_29_4_fu_29842_p3.read()) - sc_bigint<15>(p_Val2_6_29_5_fu_29886_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_6_fu_40516_p2() {
    p_Val2_7_29_6_fu_40516_p2 = (!y_V_1_29_5_reg_63865.read().is_01() || !p_Val2_6_29_6_fu_40513_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_29_5_reg_63865.read()) - sc_bigint<15>(p_Val2_6_29_6_fu_40513_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_7_fu_40580_p2() {
    p_Val2_7_29_7_fu_40580_p2 = (!y_V_1_29_6_fu_40534_p3.read().is_01() || !p_Val2_6_29_7_fu_40576_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_29_6_fu_40534_p3.read()) - sc_bigint<15>(p_Val2_6_29_7_fu_40576_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_29_fu_6942_p2() {
    p_Val2_7_29_fu_6942_p2 = (!y0_V_29_cast_fu_6904_p1.read().is_01() || !x0_V_29_cast_fu_6916_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_29_cast_fu_6904_p1.read()) - sc_biguint<14>(x0_V_29_cast_fu_6916_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_1_fu_3688_p2() {
    p_Val2_7_2_1_fu_3688_p2 = (!p_Val2_7_2_fu_3638_p2.read().is_01() || !tmp_45_fu_3684_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_2_fu_3638_p2.read()) - sc_biguint<14>(tmp_45_fu_3684_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_2_fu_12180_p2() {
    p_Val2_7_2_2_fu_12180_p2 = (!y_V_1_2_1_cast_fu_12132_p1.read().is_01() || !p_Val2_6_2_2_fu_12176_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_2_1_cast_fu_12132_p1.read()) - sc_bigint<15>(p_Val2_6_2_2_fu_12176_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_3_fu_12258_p2() {
    p_Val2_7_2_3_fu_12258_p2 = (!y_V_1_2_2_fu_12210_p3.read().is_01() || !p_Val2_6_2_3_fu_12254_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_2_2_fu_12210_p3.read()) - sc_bigint<15>(p_Val2_6_2_3_fu_12254_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_4_fu_25820_p2() {
    p_Val2_7_2_4_fu_25820_p2 = (!y_V_1_2_3_reg_60533.read().is_01() || !p_Val2_6_2_4_fu_25817_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_2_3_reg_60533.read()) - sc_bigint<15>(p_Val2_6_2_4_fu_25817_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_5_fu_25894_p2() {
    p_Val2_7_2_5_fu_25894_p2 = (!y_V_1_2_4_fu_25846_p3.read().is_01() || !p_Val2_6_2_5_fu_25890_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_2_4_fu_25846_p3.read()) - sc_bigint<15>(p_Val2_6_2_5_fu_25890_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_6_fu_36385_p2() {
    p_Val2_7_2_6_fu_36385_p2 = (!y_V_1_2_5_reg_62947.read().is_01() || !p_Val2_6_2_6_fu_36382_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_2_5_reg_62947.read()) - sc_bigint<15>(p_Val2_6_2_6_fu_36382_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_7_fu_36449_p2() {
    p_Val2_7_2_7_fu_36449_p2 = (!y_V_1_2_6_fu_36403_p3.read().is_01() || !p_Val2_6_2_7_fu_36445_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_2_6_fu_36403_p3.read()) - sc_bigint<15>(p_Val2_6_2_7_fu_36445_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_2_fu_3638_p2() {
    p_Val2_7_2_fu_3638_p2 = (!y0_V_2_cast_fu_3600_p1.read().is_01() || !x0_V_2_cast_fu_3612_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_2_cast_fu_3600_p1.read()) - sc_biguint<14>(x0_V_2_cast_fu_3612_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_1_fu_6992_p2() {
    p_Val2_7_30_1_fu_6992_p2 = (!p_Val2_7_29_fu_6942_p2.read().is_01() || !tmp_605_fu_6988_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_29_fu_6942_p2.read()) - sc_biguint<14>(tmp_605_fu_6988_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_2_fu_17612_p2() {
    p_Val2_7_30_2_fu_17612_p2 = (!y_V_1_30_1_cast_fu_17564_p1.read().is_01() || !p_Val2_6_30_2_fu_17608_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_30_1_cast_fu_17564_p1.read()) - sc_bigint<15>(p_Val2_6_30_2_fu_17608_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_3_fu_17690_p2() {
    p_Val2_7_30_3_fu_17690_p2 = (!y_V_1_30_2_fu_17642_p3.read().is_01() || !p_Val2_6_30_3_fu_17686_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_30_2_fu_17642_p3.read()) - sc_bigint<15>(p_Val2_6_30_3_fu_17686_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_4_fu_29964_p2() {
    p_Val2_7_30_4_fu_29964_p2 = (!y_V_1_30_3_reg_61485.read().is_01() || !p_Val2_6_30_4_fu_29961_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_30_3_reg_61485.read()) - sc_bigint<15>(p_Val2_6_30_4_fu_29961_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_5_fu_30038_p2() {
    p_Val2_7_30_5_fu_30038_p2 = (!y_V_1_30_4_fu_29990_p3.read().is_01() || !p_Val2_6_30_5_fu_30034_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_30_4_fu_29990_p3.read()) - sc_bigint<15>(p_Val2_6_30_5_fu_30034_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_6_fu_40669_p2() {
    p_Val2_7_30_6_fu_40669_p2 = (!y_V_1_30_5_reg_63899.read().is_01() || !p_Val2_6_30_6_fu_40666_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_30_5_reg_63899.read()) - sc_bigint<15>(p_Val2_6_30_6_fu_40666_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_7_fu_40733_p2() {
    p_Val2_7_30_7_fu_40733_p2 = (!y_V_1_30_6_fu_40687_p3.read().is_01() || !p_Val2_6_30_7_fu_40729_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_30_6_fu_40687_p3.read()) - sc_bigint<15>(p_Val2_6_30_7_fu_40729_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_30_fu_7060_p2() {
    p_Val2_7_30_fu_7060_p2 = (!y0_V_30_cast_fu_7022_p1.read().is_01() || !x0_V_30_cast_fu_7034_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_30_cast_fu_7022_p1.read()) - sc_biguint<14>(x0_V_30_cast_fu_7034_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_1_fu_7110_p2() {
    p_Val2_7_31_1_fu_7110_p2 = (!p_Val2_7_30_fu_7060_p2.read().is_01() || !tmp_625_fu_7106_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_30_fu_7060_p2.read()) - sc_biguint<14>(tmp_625_fu_7106_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_2_fu_17806_p2() {
    p_Val2_7_31_2_fu_17806_p2 = (!y_V_1_31_1_cast_fu_17758_p1.read().is_01() || !p_Val2_6_31_2_fu_17802_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_31_1_cast_fu_17758_p1.read()) - sc_bigint<15>(p_Val2_6_31_2_fu_17802_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_3_fu_17884_p2() {
    p_Val2_7_31_3_fu_17884_p2 = (!y_V_1_31_2_fu_17836_p3.read().is_01() || !p_Val2_6_31_3_fu_17880_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_31_2_fu_17836_p3.read()) - sc_bigint<15>(p_Val2_6_31_3_fu_17880_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_4_fu_30112_p2() {
    p_Val2_7_31_4_fu_30112_p2 = (!y_V_1_31_3_reg_61519.read().is_01() || !p_Val2_6_31_4_fu_30109_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_31_3_reg_61519.read()) - sc_bigint<15>(p_Val2_6_31_4_fu_30109_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_5_fu_30186_p2() {
    p_Val2_7_31_5_fu_30186_p2 = (!y_V_1_31_4_fu_30138_p3.read().is_01() || !p_Val2_6_31_5_fu_30182_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_31_4_fu_30138_p3.read()) - sc_bigint<15>(p_Val2_6_31_5_fu_30182_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_6_fu_40822_p2() {
    p_Val2_7_31_6_fu_40822_p2 = (!y_V_1_31_5_reg_63933.read().is_01() || !p_Val2_6_31_6_fu_40819_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_31_5_reg_63933.read()) - sc_bigint<15>(p_Val2_6_31_6_fu_40819_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_7_fu_40886_p2() {
    p_Val2_7_31_7_fu_40886_p2 = (!y_V_1_31_6_fu_40840_p3.read().is_01() || !p_Val2_6_31_7_fu_40882_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_31_6_fu_40840_p3.read()) - sc_bigint<15>(p_Val2_6_31_7_fu_40882_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_31_fu_7178_p2() {
    p_Val2_7_31_fu_7178_p2 = (!y0_V_31_cast_fu_7140_p1.read().is_01() || !x0_V_31_cast_fu_7152_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_31_cast_fu_7140_p1.read()) - sc_biguint<14>(x0_V_31_cast_fu_7152_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_1_fu_7228_p2() {
    p_Val2_7_32_1_fu_7228_p2 = (!p_Val2_7_31_fu_7178_p2.read().is_01() || !tmp_645_fu_7224_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_31_fu_7178_p2.read()) - sc_biguint<14>(tmp_645_fu_7224_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_2_fu_18000_p2() {
    p_Val2_7_32_2_fu_18000_p2 = (!y_V_1_32_1_cast_fu_17952_p1.read().is_01() || !p_Val2_6_32_2_fu_17996_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_32_1_cast_fu_17952_p1.read()) - sc_bigint<15>(p_Val2_6_32_2_fu_17996_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_3_fu_18078_p2() {
    p_Val2_7_32_3_fu_18078_p2 = (!y_V_1_32_2_fu_18030_p3.read().is_01() || !p_Val2_6_32_3_fu_18074_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_32_2_fu_18030_p3.read()) - sc_bigint<15>(p_Val2_6_32_3_fu_18074_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_4_fu_30260_p2() {
    p_Val2_7_32_4_fu_30260_p2 = (!y_V_1_32_3_reg_61553.read().is_01() || !p_Val2_6_32_4_fu_30257_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_32_3_reg_61553.read()) - sc_bigint<15>(p_Val2_6_32_4_fu_30257_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_5_fu_30334_p2() {
    p_Val2_7_32_5_fu_30334_p2 = (!y_V_1_32_4_fu_30286_p3.read().is_01() || !p_Val2_6_32_5_fu_30330_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_32_4_fu_30286_p3.read()) - sc_bigint<15>(p_Val2_6_32_5_fu_30330_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_6_fu_40975_p2() {
    p_Val2_7_32_6_fu_40975_p2 = (!y_V_1_32_5_reg_63967.read().is_01() || !p_Val2_6_32_6_fu_40972_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_32_5_reg_63967.read()) - sc_bigint<15>(p_Val2_6_32_6_fu_40972_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_7_fu_41039_p2() {
    p_Val2_7_32_7_fu_41039_p2 = (!y_V_1_32_6_fu_40993_p3.read().is_01() || !p_Val2_6_32_7_fu_41035_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_32_6_fu_40993_p3.read()) - sc_bigint<15>(p_Val2_6_32_7_fu_41035_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_32_fu_7296_p2() {
    p_Val2_7_32_fu_7296_p2 = (!y0_V_32_cast_fu_7258_p1.read().is_01() || !x0_V_32_cast_fu_7270_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_32_cast_fu_7258_p1.read()) - sc_biguint<14>(x0_V_32_cast_fu_7270_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_1_fu_7346_p2() {
    p_Val2_7_33_1_fu_7346_p2 = (!p_Val2_7_32_fu_7296_p2.read().is_01() || !tmp_665_fu_7342_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_32_fu_7296_p2.read()) - sc_biguint<14>(tmp_665_fu_7342_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_2_fu_18194_p2() {
    p_Val2_7_33_2_fu_18194_p2 = (!y_V_1_33_1_cast_fu_18146_p1.read().is_01() || !p_Val2_6_33_2_fu_18190_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_33_1_cast_fu_18146_p1.read()) - sc_bigint<15>(p_Val2_6_33_2_fu_18190_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_3_fu_18272_p2() {
    p_Val2_7_33_3_fu_18272_p2 = (!y_V_1_33_2_fu_18224_p3.read().is_01() || !p_Val2_6_33_3_fu_18268_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_33_2_fu_18224_p3.read()) - sc_bigint<15>(p_Val2_6_33_3_fu_18268_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_4_fu_30408_p2() {
    p_Val2_7_33_4_fu_30408_p2 = (!y_V_1_33_3_reg_61587.read().is_01() || !p_Val2_6_33_4_fu_30405_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_33_3_reg_61587.read()) - sc_bigint<15>(p_Val2_6_33_4_fu_30405_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_5_fu_30482_p2() {
    p_Val2_7_33_5_fu_30482_p2 = (!y_V_1_33_4_fu_30434_p3.read().is_01() || !p_Val2_6_33_5_fu_30478_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_33_4_fu_30434_p3.read()) - sc_bigint<15>(p_Val2_6_33_5_fu_30478_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_6_fu_41128_p2() {
    p_Val2_7_33_6_fu_41128_p2 = (!y_V_1_33_5_reg_64001.read().is_01() || !p_Val2_6_33_6_fu_41125_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_33_5_reg_64001.read()) - sc_bigint<15>(p_Val2_6_33_6_fu_41125_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_7_fu_41192_p2() {
    p_Val2_7_33_7_fu_41192_p2 = (!y_V_1_33_6_fu_41146_p3.read().is_01() || !p_Val2_6_33_7_fu_41188_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_33_6_fu_41146_p3.read()) - sc_bigint<15>(p_Val2_6_33_7_fu_41188_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_33_fu_7414_p2() {
    p_Val2_7_33_fu_7414_p2 = (!y0_V_33_cast_fu_7376_p1.read().is_01() || !x0_V_33_cast_fu_7388_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_33_cast_fu_7376_p1.read()) - sc_biguint<14>(x0_V_33_cast_fu_7388_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_1_fu_7464_p2() {
    p_Val2_7_34_1_fu_7464_p2 = (!p_Val2_7_33_fu_7414_p2.read().is_01() || !tmp_685_fu_7460_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_33_fu_7414_p2.read()) - sc_biguint<14>(tmp_685_fu_7460_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_2_fu_18388_p2() {
    p_Val2_7_34_2_fu_18388_p2 = (!y_V_1_34_1_cast_fu_18340_p1.read().is_01() || !p_Val2_6_34_2_fu_18384_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_34_1_cast_fu_18340_p1.read()) - sc_bigint<15>(p_Val2_6_34_2_fu_18384_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_3_fu_18466_p2() {
    p_Val2_7_34_3_fu_18466_p2 = (!y_V_1_34_2_fu_18418_p3.read().is_01() || !p_Val2_6_34_3_fu_18462_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_34_2_fu_18418_p3.read()) - sc_bigint<15>(p_Val2_6_34_3_fu_18462_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_4_fu_30556_p2() {
    p_Val2_7_34_4_fu_30556_p2 = (!y_V_1_34_3_reg_61621.read().is_01() || !p_Val2_6_34_4_fu_30553_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_34_3_reg_61621.read()) - sc_bigint<15>(p_Val2_6_34_4_fu_30553_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_5_fu_30630_p2() {
    p_Val2_7_34_5_fu_30630_p2 = (!y_V_1_34_4_fu_30582_p3.read().is_01() || !p_Val2_6_34_5_fu_30626_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_34_4_fu_30582_p3.read()) - sc_bigint<15>(p_Val2_6_34_5_fu_30626_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_6_fu_41281_p2() {
    p_Val2_7_34_6_fu_41281_p2 = (!y_V_1_34_5_reg_64035.read().is_01() || !p_Val2_6_34_6_fu_41278_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_34_5_reg_64035.read()) - sc_bigint<15>(p_Val2_6_34_6_fu_41278_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_7_fu_41345_p2() {
    p_Val2_7_34_7_fu_41345_p2 = (!y_V_1_34_6_fu_41299_p3.read().is_01() || !p_Val2_6_34_7_fu_41341_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_34_6_fu_41299_p3.read()) - sc_bigint<15>(p_Val2_6_34_7_fu_41341_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_34_fu_7532_p2() {
    p_Val2_7_34_fu_7532_p2 = (!y0_V_34_cast_fu_7494_p1.read().is_01() || !x0_V_34_cast_fu_7506_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_34_cast_fu_7494_p1.read()) - sc_biguint<14>(x0_V_34_cast_fu_7506_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_1_fu_7582_p2() {
    p_Val2_7_35_1_fu_7582_p2 = (!p_Val2_7_34_fu_7532_p2.read().is_01() || !tmp_705_fu_7578_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_34_fu_7532_p2.read()) - sc_biguint<14>(tmp_705_fu_7578_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_2_fu_18582_p2() {
    p_Val2_7_35_2_fu_18582_p2 = (!y_V_1_35_1_cast_fu_18534_p1.read().is_01() || !p_Val2_6_35_2_fu_18578_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_35_1_cast_fu_18534_p1.read()) - sc_bigint<15>(p_Val2_6_35_2_fu_18578_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_3_fu_18660_p2() {
    p_Val2_7_35_3_fu_18660_p2 = (!y_V_1_35_2_fu_18612_p3.read().is_01() || !p_Val2_6_35_3_fu_18656_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_35_2_fu_18612_p3.read()) - sc_bigint<15>(p_Val2_6_35_3_fu_18656_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_4_fu_30704_p2() {
    p_Val2_7_35_4_fu_30704_p2 = (!y_V_1_35_3_reg_61655.read().is_01() || !p_Val2_6_35_4_fu_30701_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_35_3_reg_61655.read()) - sc_bigint<15>(p_Val2_6_35_4_fu_30701_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_5_fu_30778_p2() {
    p_Val2_7_35_5_fu_30778_p2 = (!y_V_1_35_4_fu_30730_p3.read().is_01() || !p_Val2_6_35_5_fu_30774_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_35_4_fu_30730_p3.read()) - sc_bigint<15>(p_Val2_6_35_5_fu_30774_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_6_fu_41434_p2() {
    p_Val2_7_35_6_fu_41434_p2 = (!y_V_1_35_5_reg_64069.read().is_01() || !p_Val2_6_35_6_fu_41431_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_35_5_reg_64069.read()) - sc_bigint<15>(p_Val2_6_35_6_fu_41431_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_7_fu_41498_p2() {
    p_Val2_7_35_7_fu_41498_p2 = (!y_V_1_35_6_fu_41452_p3.read().is_01() || !p_Val2_6_35_7_fu_41494_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_35_6_fu_41452_p3.read()) - sc_bigint<15>(p_Val2_6_35_7_fu_41494_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_35_fu_7650_p2() {
    p_Val2_7_35_fu_7650_p2 = (!y0_V_35_cast_fu_7612_p1.read().is_01() || !x0_V_35_cast_fu_7624_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_35_cast_fu_7612_p1.read()) - sc_biguint<14>(x0_V_35_cast_fu_7624_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_1_fu_7700_p2() {
    p_Val2_7_36_1_fu_7700_p2 = (!p_Val2_7_35_fu_7650_p2.read().is_01() || !tmp_725_fu_7696_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_35_fu_7650_p2.read()) - sc_biguint<14>(tmp_725_fu_7696_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_2_fu_18776_p2() {
    p_Val2_7_36_2_fu_18776_p2 = (!y_V_1_36_1_cast_fu_18728_p1.read().is_01() || !p_Val2_6_36_2_fu_18772_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_36_1_cast_fu_18728_p1.read()) - sc_bigint<15>(p_Val2_6_36_2_fu_18772_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_3_fu_18854_p2() {
    p_Val2_7_36_3_fu_18854_p2 = (!y_V_1_36_2_fu_18806_p3.read().is_01() || !p_Val2_6_36_3_fu_18850_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_36_2_fu_18806_p3.read()) - sc_bigint<15>(p_Val2_6_36_3_fu_18850_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_4_fu_30852_p2() {
    p_Val2_7_36_4_fu_30852_p2 = (!y_V_1_36_3_reg_61689.read().is_01() || !p_Val2_6_36_4_fu_30849_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_36_3_reg_61689.read()) - sc_bigint<15>(p_Val2_6_36_4_fu_30849_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_5_fu_30926_p2() {
    p_Val2_7_36_5_fu_30926_p2 = (!y_V_1_36_4_fu_30878_p3.read().is_01() || !p_Val2_6_36_5_fu_30922_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_36_4_fu_30878_p3.read()) - sc_bigint<15>(p_Val2_6_36_5_fu_30922_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_6_fu_41587_p2() {
    p_Val2_7_36_6_fu_41587_p2 = (!y_V_1_36_5_reg_64103.read().is_01() || !p_Val2_6_36_6_fu_41584_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_36_5_reg_64103.read()) - sc_bigint<15>(p_Val2_6_36_6_fu_41584_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_7_fu_41651_p2() {
    p_Val2_7_36_7_fu_41651_p2 = (!y_V_1_36_6_fu_41605_p3.read().is_01() || !p_Val2_6_36_7_fu_41647_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_36_6_fu_41605_p3.read()) - sc_bigint<15>(p_Val2_6_36_7_fu_41647_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_36_fu_7768_p2() {
    p_Val2_7_36_fu_7768_p2 = (!y0_V_36_cast_fu_7730_p1.read().is_01() || !x0_V_36_cast_fu_7742_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_36_cast_fu_7730_p1.read()) - sc_biguint<14>(x0_V_36_cast_fu_7742_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_1_fu_7818_p2() {
    p_Val2_7_37_1_fu_7818_p2 = (!p_Val2_7_36_fu_7768_p2.read().is_01() || !tmp_745_fu_7814_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_36_fu_7768_p2.read()) - sc_biguint<14>(tmp_745_fu_7814_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_2_fu_18970_p2() {
    p_Val2_7_37_2_fu_18970_p2 = (!y_V_1_37_1_cast_fu_18922_p1.read().is_01() || !p_Val2_6_37_2_fu_18966_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_37_1_cast_fu_18922_p1.read()) - sc_bigint<15>(p_Val2_6_37_2_fu_18966_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_3_fu_19048_p2() {
    p_Val2_7_37_3_fu_19048_p2 = (!y_V_1_37_2_fu_19000_p3.read().is_01() || !p_Val2_6_37_3_fu_19044_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_37_2_fu_19000_p3.read()) - sc_bigint<15>(p_Val2_6_37_3_fu_19044_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_4_fu_31000_p2() {
    p_Val2_7_37_4_fu_31000_p2 = (!y_V_1_37_3_reg_61723.read().is_01() || !p_Val2_6_37_4_fu_30997_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_37_3_reg_61723.read()) - sc_bigint<15>(p_Val2_6_37_4_fu_30997_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_5_fu_31074_p2() {
    p_Val2_7_37_5_fu_31074_p2 = (!y_V_1_37_4_fu_31026_p3.read().is_01() || !p_Val2_6_37_5_fu_31070_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_37_4_fu_31026_p3.read()) - sc_bigint<15>(p_Val2_6_37_5_fu_31070_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_6_fu_41740_p2() {
    p_Val2_7_37_6_fu_41740_p2 = (!y_V_1_37_5_reg_64137.read().is_01() || !p_Val2_6_37_6_fu_41737_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_37_5_reg_64137.read()) - sc_bigint<15>(p_Val2_6_37_6_fu_41737_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_7_fu_41804_p2() {
    p_Val2_7_37_7_fu_41804_p2 = (!y_V_1_37_6_fu_41758_p3.read().is_01() || !p_Val2_6_37_7_fu_41800_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_37_6_fu_41758_p3.read()) - sc_bigint<15>(p_Val2_6_37_7_fu_41800_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_37_fu_7886_p2() {
    p_Val2_7_37_fu_7886_p2 = (!y0_V_37_cast_fu_7848_p1.read().is_01() || !x0_V_37_cast_fu_7860_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_37_cast_fu_7848_p1.read()) - sc_biguint<14>(x0_V_37_cast_fu_7860_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_1_fu_7936_p2() {
    p_Val2_7_38_1_fu_7936_p2 = (!p_Val2_7_37_fu_7886_p2.read().is_01() || !tmp_765_fu_7932_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_37_fu_7886_p2.read()) - sc_biguint<14>(tmp_765_fu_7932_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_2_fu_19164_p2() {
    p_Val2_7_38_2_fu_19164_p2 = (!y_V_1_38_1_cast_fu_19116_p1.read().is_01() || !p_Val2_6_38_2_fu_19160_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_38_1_cast_fu_19116_p1.read()) - sc_bigint<15>(p_Val2_6_38_2_fu_19160_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_3_fu_19242_p2() {
    p_Val2_7_38_3_fu_19242_p2 = (!y_V_1_38_2_fu_19194_p3.read().is_01() || !p_Val2_6_38_3_fu_19238_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_38_2_fu_19194_p3.read()) - sc_bigint<15>(p_Val2_6_38_3_fu_19238_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_4_fu_31148_p2() {
    p_Val2_7_38_4_fu_31148_p2 = (!y_V_1_38_3_reg_61757.read().is_01() || !p_Val2_6_38_4_fu_31145_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_38_3_reg_61757.read()) - sc_bigint<15>(p_Val2_6_38_4_fu_31145_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_5_fu_31222_p2() {
    p_Val2_7_38_5_fu_31222_p2 = (!y_V_1_38_4_fu_31174_p3.read().is_01() || !p_Val2_6_38_5_fu_31218_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_38_4_fu_31174_p3.read()) - sc_bigint<15>(p_Val2_6_38_5_fu_31218_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_6_fu_41893_p2() {
    p_Val2_7_38_6_fu_41893_p2 = (!y_V_1_38_5_reg_64171.read().is_01() || !p_Val2_6_38_6_fu_41890_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_38_5_reg_64171.read()) - sc_bigint<15>(p_Val2_6_38_6_fu_41890_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_7_fu_41957_p2() {
    p_Val2_7_38_7_fu_41957_p2 = (!y_V_1_38_6_fu_41911_p3.read().is_01() || !p_Val2_6_38_7_fu_41953_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_38_6_fu_41911_p3.read()) - sc_bigint<15>(p_Val2_6_38_7_fu_41953_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_38_fu_8004_p2() {
    p_Val2_7_38_fu_8004_p2 = (!y0_V_38_cast_fu_7966_p1.read().is_01() || !x0_V_38_cast_fu_7978_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_38_cast_fu_7966_p1.read()) - sc_biguint<14>(x0_V_38_cast_fu_7978_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_1_fu_8054_p2() {
    p_Val2_7_39_1_fu_8054_p2 = (!p_Val2_7_38_fu_8004_p2.read().is_01() || !tmp_785_fu_8050_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_38_fu_8004_p2.read()) - sc_biguint<14>(tmp_785_fu_8050_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_2_fu_19358_p2() {
    p_Val2_7_39_2_fu_19358_p2 = (!y_V_1_39_1_cast_fu_19310_p1.read().is_01() || !p_Val2_6_39_2_fu_19354_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_39_1_cast_fu_19310_p1.read()) - sc_bigint<15>(p_Val2_6_39_2_fu_19354_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_3_fu_19436_p2() {
    p_Val2_7_39_3_fu_19436_p2 = (!y_V_1_39_2_fu_19388_p3.read().is_01() || !p_Val2_6_39_3_fu_19432_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_39_2_fu_19388_p3.read()) - sc_bigint<15>(p_Val2_6_39_3_fu_19432_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_4_fu_31296_p2() {
    p_Val2_7_39_4_fu_31296_p2 = (!y_V_1_39_3_reg_61791.read().is_01() || !p_Val2_6_39_4_fu_31293_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_39_3_reg_61791.read()) - sc_bigint<15>(p_Val2_6_39_4_fu_31293_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_5_fu_31370_p2() {
    p_Val2_7_39_5_fu_31370_p2 = (!y_V_1_39_4_fu_31322_p3.read().is_01() || !p_Val2_6_39_5_fu_31366_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_39_4_fu_31322_p3.read()) - sc_bigint<15>(p_Val2_6_39_5_fu_31366_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_6_fu_42046_p2() {
    p_Val2_7_39_6_fu_42046_p2 = (!y_V_1_39_5_reg_64205.read().is_01() || !p_Val2_6_39_6_fu_42043_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_39_5_reg_64205.read()) - sc_bigint<15>(p_Val2_6_39_6_fu_42043_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_7_fu_42110_p2() {
    p_Val2_7_39_7_fu_42110_p2 = (!y_V_1_39_6_fu_42064_p3.read().is_01() || !p_Val2_6_39_7_fu_42106_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_39_6_fu_42064_p3.read()) - sc_bigint<15>(p_Val2_6_39_7_fu_42106_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_39_fu_8122_p2() {
    p_Val2_7_39_fu_8122_p2 = (!y0_V_39_cast_fu_8084_p1.read().is_01() || !x0_V_39_cast_fu_8096_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_39_cast_fu_8084_p1.read()) - sc_biguint<14>(x0_V_39_cast_fu_8096_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_1_fu_3806_p2() {
    p_Val2_7_3_1_fu_3806_p2 = (!p_Val2_7_3_fu_3756_p2.read().is_01() || !tmp_65_fu_3802_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_3_fu_3756_p2.read()) - sc_biguint<14>(tmp_65_fu_3802_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_2_fu_12374_p2() {
    p_Val2_7_3_2_fu_12374_p2 = (!y_V_1_3_1_cast_fu_12326_p1.read().is_01() || !p_Val2_6_3_2_fu_12370_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_3_1_cast_fu_12326_p1.read()) - sc_bigint<15>(p_Val2_6_3_2_fu_12370_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_3_fu_12452_p2() {
    p_Val2_7_3_3_fu_12452_p2 = (!y_V_1_3_2_fu_12404_p3.read().is_01() || !p_Val2_6_3_3_fu_12448_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_3_2_fu_12404_p3.read()) - sc_bigint<15>(p_Val2_6_3_3_fu_12448_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_4_fu_25968_p2() {
    p_Val2_7_3_4_fu_25968_p2 = (!y_V_1_3_3_reg_60567.read().is_01() || !p_Val2_6_3_4_fu_25965_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_3_3_reg_60567.read()) - sc_bigint<15>(p_Val2_6_3_4_fu_25965_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_5_fu_26042_p2() {
    p_Val2_7_3_5_fu_26042_p2 = (!y_V_1_3_4_fu_25994_p3.read().is_01() || !p_Val2_6_3_5_fu_26038_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_3_4_fu_25994_p3.read()) - sc_bigint<15>(p_Val2_6_3_5_fu_26038_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_6_fu_36538_p2() {
    p_Val2_7_3_6_fu_36538_p2 = (!y_V_1_3_5_reg_62981.read().is_01() || !p_Val2_6_3_6_fu_36535_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_3_5_reg_62981.read()) - sc_bigint<15>(p_Val2_6_3_6_fu_36535_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_7_fu_36602_p2() {
    p_Val2_7_3_7_fu_36602_p2 = (!y_V_1_3_6_fu_36556_p3.read().is_01() || !p_Val2_6_3_7_fu_36598_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_3_6_fu_36556_p3.read()) - sc_bigint<15>(p_Val2_6_3_7_fu_36598_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_3_fu_3756_p2() {
    p_Val2_7_3_fu_3756_p2 = (!y0_V_3_cast_fu_3718_p1.read().is_01() || !x0_V_3_cast_fu_3730_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_3_cast_fu_3718_p1.read()) - sc_biguint<14>(x0_V_3_cast_fu_3730_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_1_fu_8172_p2() {
    p_Val2_7_40_1_fu_8172_p2 = (!p_Val2_7_39_fu_8122_p2.read().is_01() || !tmp_805_fu_8168_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_39_fu_8122_p2.read()) - sc_biguint<14>(tmp_805_fu_8168_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_2_fu_19552_p2() {
    p_Val2_7_40_2_fu_19552_p2 = (!y_V_1_40_1_cast_fu_19504_p1.read().is_01() || !p_Val2_6_40_2_fu_19548_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_40_1_cast_fu_19504_p1.read()) - sc_bigint<15>(p_Val2_6_40_2_fu_19548_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_3_fu_19630_p2() {
    p_Val2_7_40_3_fu_19630_p2 = (!y_V_1_40_2_fu_19582_p3.read().is_01() || !p_Val2_6_40_3_fu_19626_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_40_2_fu_19582_p3.read()) - sc_bigint<15>(p_Val2_6_40_3_fu_19626_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_4_fu_31444_p2() {
    p_Val2_7_40_4_fu_31444_p2 = (!y_V_1_40_3_reg_61825.read().is_01() || !p_Val2_6_40_4_fu_31441_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_40_3_reg_61825.read()) - sc_bigint<15>(p_Val2_6_40_4_fu_31441_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_5_fu_31518_p2() {
    p_Val2_7_40_5_fu_31518_p2 = (!y_V_1_40_4_fu_31470_p3.read().is_01() || !p_Val2_6_40_5_fu_31514_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_40_4_fu_31470_p3.read()) - sc_bigint<15>(p_Val2_6_40_5_fu_31514_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_6_fu_42199_p2() {
    p_Val2_7_40_6_fu_42199_p2 = (!y_V_1_40_5_reg_64239.read().is_01() || !p_Val2_6_40_6_fu_42196_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_40_5_reg_64239.read()) - sc_bigint<15>(p_Val2_6_40_6_fu_42196_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_7_fu_42263_p2() {
    p_Val2_7_40_7_fu_42263_p2 = (!y_V_1_40_6_fu_42217_p3.read().is_01() || !p_Val2_6_40_7_fu_42259_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_40_6_fu_42217_p3.read()) - sc_bigint<15>(p_Val2_6_40_7_fu_42259_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_40_fu_8240_p2() {
    p_Val2_7_40_fu_8240_p2 = (!y0_V_40_cast_fu_8202_p1.read().is_01() || !x0_V_40_cast_fu_8214_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_40_cast_fu_8202_p1.read()) - sc_biguint<14>(x0_V_40_cast_fu_8214_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_1_fu_8290_p2() {
    p_Val2_7_41_1_fu_8290_p2 = (!p_Val2_7_40_fu_8240_p2.read().is_01() || !tmp_825_fu_8286_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_40_fu_8240_p2.read()) - sc_biguint<14>(tmp_825_fu_8286_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_2_fu_19746_p2() {
    p_Val2_7_41_2_fu_19746_p2 = (!y_V_1_41_1_cast_fu_19698_p1.read().is_01() || !p_Val2_6_41_2_fu_19742_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_41_1_cast_fu_19698_p1.read()) - sc_bigint<15>(p_Val2_6_41_2_fu_19742_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_3_fu_19824_p2() {
    p_Val2_7_41_3_fu_19824_p2 = (!y_V_1_41_2_fu_19776_p3.read().is_01() || !p_Val2_6_41_3_fu_19820_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_41_2_fu_19776_p3.read()) - sc_bigint<15>(p_Val2_6_41_3_fu_19820_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_4_fu_31592_p2() {
    p_Val2_7_41_4_fu_31592_p2 = (!y_V_1_41_3_reg_61859.read().is_01() || !p_Val2_6_41_4_fu_31589_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_41_3_reg_61859.read()) - sc_bigint<15>(p_Val2_6_41_4_fu_31589_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_5_fu_31666_p2() {
    p_Val2_7_41_5_fu_31666_p2 = (!y_V_1_41_4_fu_31618_p3.read().is_01() || !p_Val2_6_41_5_fu_31662_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_41_4_fu_31618_p3.read()) - sc_bigint<15>(p_Val2_6_41_5_fu_31662_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_6_fu_42352_p2() {
    p_Val2_7_41_6_fu_42352_p2 = (!y_V_1_41_5_reg_64273.read().is_01() || !p_Val2_6_41_6_fu_42349_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_41_5_reg_64273.read()) - sc_bigint<15>(p_Val2_6_41_6_fu_42349_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_7_fu_42416_p2() {
    p_Val2_7_41_7_fu_42416_p2 = (!y_V_1_41_6_fu_42370_p3.read().is_01() || !p_Val2_6_41_7_fu_42412_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_41_6_fu_42370_p3.read()) - sc_bigint<15>(p_Val2_6_41_7_fu_42412_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_41_fu_8358_p2() {
    p_Val2_7_41_fu_8358_p2 = (!y0_V_41_cast_fu_8320_p1.read().is_01() || !x0_V_41_cast_fu_8332_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(y0_V_41_cast_fu_8320_p1.read()) - sc_biguint<14>(x0_V_41_cast_fu_8332_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_1_fu_8408_p2() {
    p_Val2_7_42_1_fu_8408_p2 = (!p_Val2_7_41_fu_8358_p2.read().is_01() || !tmp_845_fu_8404_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_Val2_7_41_fu_8358_p2.read()) - sc_biguint<14>(tmp_845_fu_8404_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_2_fu_19940_p2() {
    p_Val2_7_42_2_fu_19940_p2 = (!y_V_1_42_1_cast_fu_19892_p1.read().is_01() || !p_Val2_6_42_2_fu_19936_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(y_V_1_42_1_cast_fu_19892_p1.read()) - sc_bigint<15>(p_Val2_6_42_2_fu_19936_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_7_42_3_fu_20018_p2() {
    p_Val2_7_42_3_fu_20018_p2 = (!y_V_1_42_2_fu_19970_p3.read().is_01() || !p_Val2_6_42_3_fu_20014_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(y_V_1_42_2_fu_19970_p3.read()) - sc_bigint<15>(p_Val2_6_42_3_fu_20014_p1.read()));
}

}

