#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_y_V_1_52_7_fu_44111_p3() {
    y_V_1_52_7_fu_44111_p3 = (!dneg_52_7_fu_44061_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_7_fu_44061_p2.read()[0].to_bool())? p_Val2_7_52_7_fu_44099_p2.read(): p_Val2_14_52_7_fu_44105_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_1_cast_fu_22026_p1() {
    y_V_1_53_1_cast_fu_22026_p1 = esl_sext<15,14>(y_V_1_53_1_fu_22021_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_53_1_fu_22021_p3() {
    y_V_1_53_1_fu_22021_p3 = (!dneg_53_1_reg_59776.read()[0].is_01())? sc_lv<14>(): ((dneg_53_1_reg_59776.read()[0].to_bool())? p_Val2_7_53_1_reg_59788.read(): p_Val2_14_53_1_reg_59798.read());
}

void Sobel_phase_strm::thread_y_V_1_53_2_fu_22104_p3() {
    y_V_1_53_2_fu_22104_p3 = (!dneg_53_2_fu_22030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_2_fu_22030_p2.read()[0].to_bool())? p_Val2_7_53_2_fu_22074_p2.read(): p_Val2_14_53_2_fu_22090_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_3_fu_22182_p3() {
    y_V_1_53_3_fu_22182_p3 = (!dneg_53_3_fu_22112_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_3_fu_22112_p2.read()[0].to_bool())? p_Val2_7_53_3_fu_22152_p2.read(): p_Val2_14_53_3_fu_22168_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_4_fu_33394_p3() {
    y_V_1_53_4_fu_33394_p3 = (!dneg_53_4_fu_33352_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_4_fu_33352_p2.read()[0].to_bool())? p_Val2_7_53_4_fu_33368_p2.read(): p_Val2_14_53_4_fu_33381_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_5_fu_33472_p3() {
    y_V_1_53_5_fu_33472_p3 = (!dneg_53_5_fu_33402_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_5_fu_33402_p2.read()[0].to_bool())? p_Val2_7_53_5_fu_33442_p2.read(): p_Val2_14_53_5_fu_33458_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_6_fu_44206_p3() {
    y_V_1_53_6_fu_44206_p3 = (!dneg_53_6_fu_44172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_6_fu_44172_p2.read()[0].to_bool())? p_Val2_7_53_6_fu_44188_p2.read(): p_Val2_14_53_6_fu_44201_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_53_7_fu_44264_p3() {
    y_V_1_53_7_fu_44264_p3 = (!dneg_53_7_fu_44214_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_7_fu_44214_p2.read()[0].to_bool())? p_Val2_7_53_7_fu_44252_p2.read(): p_Val2_14_53_7_fu_44258_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_1_cast_fu_22220_p1() {
    y_V_1_54_1_cast_fu_22220_p1 = esl_sext<15,14>(y_V_1_54_1_fu_22215_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_54_1_fu_22215_p3() {
    y_V_1_54_1_fu_22215_p3 = (!dneg_54_1_reg_59814.read()[0].is_01())? sc_lv<14>(): ((dneg_54_1_reg_59814.read()[0].to_bool())? p_Val2_7_54_1_reg_59826.read(): p_Val2_14_54_1_reg_59836.read());
}

void Sobel_phase_strm::thread_y_V_1_54_2_fu_22298_p3() {
    y_V_1_54_2_fu_22298_p3 = (!dneg_54_2_fu_22224_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_2_fu_22224_p2.read()[0].to_bool())? p_Val2_7_54_2_fu_22268_p2.read(): p_Val2_14_54_2_fu_22284_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_3_fu_22376_p3() {
    y_V_1_54_3_fu_22376_p3 = (!dneg_54_3_fu_22306_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_3_fu_22306_p2.read()[0].to_bool())? p_Val2_7_54_3_fu_22346_p2.read(): p_Val2_14_54_3_fu_22362_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_4_fu_33542_p3() {
    y_V_1_54_4_fu_33542_p3 = (!dneg_54_4_fu_33500_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_4_fu_33500_p2.read()[0].to_bool())? p_Val2_7_54_4_fu_33516_p2.read(): p_Val2_14_54_4_fu_33529_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_5_fu_33620_p3() {
    y_V_1_54_5_fu_33620_p3 = (!dneg_54_5_fu_33550_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_5_fu_33550_p2.read()[0].to_bool())? p_Val2_7_54_5_fu_33590_p2.read(): p_Val2_14_54_5_fu_33606_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_6_fu_44359_p3() {
    y_V_1_54_6_fu_44359_p3 = (!dneg_54_6_fu_44325_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_6_fu_44325_p2.read()[0].to_bool())? p_Val2_7_54_6_fu_44341_p2.read(): p_Val2_14_54_6_fu_44354_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_54_7_fu_44417_p3() {
    y_V_1_54_7_fu_44417_p3 = (!dneg_54_7_fu_44367_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_7_fu_44367_p2.read()[0].to_bool())? p_Val2_7_54_7_fu_44405_p2.read(): p_Val2_14_54_7_fu_44411_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_1_cast_fu_22414_p1() {
    y_V_1_55_1_cast_fu_22414_p1 = esl_sext<15,14>(y_V_1_55_1_fu_22409_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_55_1_fu_22409_p3() {
    y_V_1_55_1_fu_22409_p3 = (!dneg_55_1_reg_59852.read()[0].is_01())? sc_lv<14>(): ((dneg_55_1_reg_59852.read()[0].to_bool())? p_Val2_7_55_1_reg_59864.read(): p_Val2_14_55_1_reg_59874.read());
}

void Sobel_phase_strm::thread_y_V_1_55_2_fu_22492_p3() {
    y_V_1_55_2_fu_22492_p3 = (!dneg_55_2_fu_22418_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_2_fu_22418_p2.read()[0].to_bool())? p_Val2_7_55_2_fu_22462_p2.read(): p_Val2_14_55_2_fu_22478_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_3_fu_22570_p3() {
    y_V_1_55_3_fu_22570_p3 = (!dneg_55_3_fu_22500_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_3_fu_22500_p2.read()[0].to_bool())? p_Val2_7_55_3_fu_22540_p2.read(): p_Val2_14_55_3_fu_22556_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_4_fu_33690_p3() {
    y_V_1_55_4_fu_33690_p3 = (!dneg_55_4_fu_33648_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_4_fu_33648_p2.read()[0].to_bool())? p_Val2_7_55_4_fu_33664_p2.read(): p_Val2_14_55_4_fu_33677_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_5_fu_33768_p3() {
    y_V_1_55_5_fu_33768_p3 = (!dneg_55_5_fu_33698_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_5_fu_33698_p2.read()[0].to_bool())? p_Val2_7_55_5_fu_33738_p2.read(): p_Val2_14_55_5_fu_33754_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_6_fu_44512_p3() {
    y_V_1_55_6_fu_44512_p3 = (!dneg_55_6_fu_44478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_6_fu_44478_p2.read()[0].to_bool())? p_Val2_7_55_6_fu_44494_p2.read(): p_Val2_14_55_6_fu_44507_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_55_7_fu_44570_p3() {
    y_V_1_55_7_fu_44570_p3 = (!dneg_55_7_fu_44520_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_7_fu_44520_p2.read()[0].to_bool())? p_Val2_7_55_7_fu_44558_p2.read(): p_Val2_14_55_7_fu_44564_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_1_cast_fu_22608_p1() {
    y_V_1_56_1_cast_fu_22608_p1 = esl_sext<15,14>(y_V_1_56_1_fu_22603_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_56_1_fu_22603_p3() {
    y_V_1_56_1_fu_22603_p3 = (!dneg_56_1_reg_59890.read()[0].is_01())? sc_lv<14>(): ((dneg_56_1_reg_59890.read()[0].to_bool())? p_Val2_7_56_1_reg_59902.read(): p_Val2_14_56_1_reg_59912.read());
}

void Sobel_phase_strm::thread_y_V_1_56_2_fu_22686_p3() {
    y_V_1_56_2_fu_22686_p3 = (!dneg_56_2_fu_22612_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_2_fu_22612_p2.read()[0].to_bool())? p_Val2_7_56_2_fu_22656_p2.read(): p_Val2_14_56_2_fu_22672_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_3_fu_22764_p3() {
    y_V_1_56_3_fu_22764_p3 = (!dneg_56_3_fu_22694_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_3_fu_22694_p2.read()[0].to_bool())? p_Val2_7_56_3_fu_22734_p2.read(): p_Val2_14_56_3_fu_22750_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_4_fu_33838_p3() {
    y_V_1_56_4_fu_33838_p3 = (!dneg_56_4_fu_33796_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_4_fu_33796_p2.read()[0].to_bool())? p_Val2_7_56_4_fu_33812_p2.read(): p_Val2_14_56_4_fu_33825_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_5_fu_33916_p3() {
    y_V_1_56_5_fu_33916_p3 = (!dneg_56_5_fu_33846_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_5_fu_33846_p2.read()[0].to_bool())? p_Val2_7_56_5_fu_33886_p2.read(): p_Val2_14_56_5_fu_33902_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_6_fu_44665_p3() {
    y_V_1_56_6_fu_44665_p3 = (!dneg_56_6_fu_44631_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_6_fu_44631_p2.read()[0].to_bool())? p_Val2_7_56_6_fu_44647_p2.read(): p_Val2_14_56_6_fu_44660_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_56_7_fu_44723_p3() {
    y_V_1_56_7_fu_44723_p3 = (!dneg_56_7_fu_44673_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_7_fu_44673_p2.read()[0].to_bool())? p_Val2_7_56_7_fu_44711_p2.read(): p_Val2_14_56_7_fu_44717_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_1_cast_fu_22802_p1() {
    y_V_1_57_1_cast_fu_22802_p1 = esl_sext<15,14>(y_V_1_57_1_fu_22797_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_57_1_fu_22797_p3() {
    y_V_1_57_1_fu_22797_p3 = (!dneg_57_1_reg_59928.read()[0].is_01())? sc_lv<14>(): ((dneg_57_1_reg_59928.read()[0].to_bool())? p_Val2_7_57_1_reg_59940.read(): p_Val2_14_57_1_reg_59950.read());
}

void Sobel_phase_strm::thread_y_V_1_57_2_fu_22880_p3() {
    y_V_1_57_2_fu_22880_p3 = (!dneg_57_2_fu_22806_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_2_fu_22806_p2.read()[0].to_bool())? p_Val2_7_57_2_fu_22850_p2.read(): p_Val2_14_57_2_fu_22866_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_3_fu_22958_p3() {
    y_V_1_57_3_fu_22958_p3 = (!dneg_57_3_fu_22888_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_3_fu_22888_p2.read()[0].to_bool())? p_Val2_7_57_3_fu_22928_p2.read(): p_Val2_14_57_3_fu_22944_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_4_fu_33986_p3() {
    y_V_1_57_4_fu_33986_p3 = (!dneg_57_4_fu_33944_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_4_fu_33944_p2.read()[0].to_bool())? p_Val2_7_57_4_fu_33960_p2.read(): p_Val2_14_57_4_fu_33973_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_5_fu_34064_p3() {
    y_V_1_57_5_fu_34064_p3 = (!dneg_57_5_fu_33994_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_5_fu_33994_p2.read()[0].to_bool())? p_Val2_7_57_5_fu_34034_p2.read(): p_Val2_14_57_5_fu_34050_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_6_fu_44818_p3() {
    y_V_1_57_6_fu_44818_p3 = (!dneg_57_6_fu_44784_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_6_fu_44784_p2.read()[0].to_bool())? p_Val2_7_57_6_fu_44800_p2.read(): p_Val2_14_57_6_fu_44813_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_57_7_fu_44876_p3() {
    y_V_1_57_7_fu_44876_p3 = (!dneg_57_7_fu_44826_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_7_fu_44826_p2.read()[0].to_bool())? p_Val2_7_57_7_fu_44864_p2.read(): p_Val2_14_57_7_fu_44870_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_1_cast_fu_22996_p1() {
    y_V_1_58_1_cast_fu_22996_p1 = esl_sext<15,14>(y_V_1_58_1_fu_22991_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_58_1_fu_22991_p3() {
    y_V_1_58_1_fu_22991_p3 = (!dneg_58_1_reg_59966.read()[0].is_01())? sc_lv<14>(): ((dneg_58_1_reg_59966.read()[0].to_bool())? p_Val2_7_58_1_reg_59978.read(): p_Val2_14_58_1_reg_59988.read());
}

void Sobel_phase_strm::thread_y_V_1_58_2_fu_23074_p3() {
    y_V_1_58_2_fu_23074_p3 = (!dneg_58_2_fu_23000_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_2_fu_23000_p2.read()[0].to_bool())? p_Val2_7_58_2_fu_23044_p2.read(): p_Val2_14_58_2_fu_23060_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_3_fu_23152_p3() {
    y_V_1_58_3_fu_23152_p3 = (!dneg_58_3_fu_23082_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_3_fu_23082_p2.read()[0].to_bool())? p_Val2_7_58_3_fu_23122_p2.read(): p_Val2_14_58_3_fu_23138_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_4_fu_34134_p3() {
    y_V_1_58_4_fu_34134_p3 = (!dneg_58_4_fu_34092_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_4_fu_34092_p2.read()[0].to_bool())? p_Val2_7_58_4_fu_34108_p2.read(): p_Val2_14_58_4_fu_34121_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_5_fu_34212_p3() {
    y_V_1_58_5_fu_34212_p3 = (!dneg_58_5_fu_34142_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_5_fu_34142_p2.read()[0].to_bool())? p_Val2_7_58_5_fu_34182_p2.read(): p_Val2_14_58_5_fu_34198_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_6_fu_44971_p3() {
    y_V_1_58_6_fu_44971_p3 = (!dneg_58_6_fu_44937_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_6_fu_44937_p2.read()[0].to_bool())? p_Val2_7_58_6_fu_44953_p2.read(): p_Val2_14_58_6_fu_44966_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_58_7_fu_45029_p3() {
    y_V_1_58_7_fu_45029_p3 = (!dneg_58_7_fu_44979_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_7_fu_44979_p2.read()[0].to_bool())? p_Val2_7_58_7_fu_45017_p2.read(): p_Val2_14_58_7_fu_45023_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_1_cast_fu_23190_p1() {
    y_V_1_59_1_cast_fu_23190_p1 = esl_sext<15,14>(y_V_1_59_1_fu_23185_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_59_1_fu_23185_p3() {
    y_V_1_59_1_fu_23185_p3 = (!dneg_59_1_reg_60004.read()[0].is_01())? sc_lv<14>(): ((dneg_59_1_reg_60004.read()[0].to_bool())? p_Val2_7_59_1_reg_60016.read(): p_Val2_14_59_1_reg_60026.read());
}

void Sobel_phase_strm::thread_y_V_1_59_2_fu_23268_p3() {
    y_V_1_59_2_fu_23268_p3 = (!dneg_59_2_fu_23194_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_2_fu_23194_p2.read()[0].to_bool())? p_Val2_7_59_2_fu_23238_p2.read(): p_Val2_14_59_2_fu_23254_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_3_fu_23346_p3() {
    y_V_1_59_3_fu_23346_p3 = (!dneg_59_3_fu_23276_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_3_fu_23276_p2.read()[0].to_bool())? p_Val2_7_59_3_fu_23316_p2.read(): p_Val2_14_59_3_fu_23332_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_4_fu_34282_p3() {
    y_V_1_59_4_fu_34282_p3 = (!dneg_59_4_fu_34240_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_4_fu_34240_p2.read()[0].to_bool())? p_Val2_7_59_4_fu_34256_p2.read(): p_Val2_14_59_4_fu_34269_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_5_fu_34360_p3() {
    y_V_1_59_5_fu_34360_p3 = (!dneg_59_5_fu_34290_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_5_fu_34290_p2.read()[0].to_bool())? p_Val2_7_59_5_fu_34330_p2.read(): p_Val2_14_59_5_fu_34346_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_6_fu_45124_p3() {
    y_V_1_59_6_fu_45124_p3 = (!dneg_59_6_fu_45090_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_6_fu_45090_p2.read()[0].to_bool())? p_Val2_7_59_6_fu_45106_p2.read(): p_Val2_14_59_6_fu_45119_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_59_7_fu_45182_p3() {
    y_V_1_59_7_fu_45182_p3 = (!dneg_59_7_fu_45132_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_7_fu_45132_p2.read()[0].to_bool())? p_Val2_7_59_7_fu_45170_p2.read(): p_Val2_14_59_7_fu_45176_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_1_cast_fu_12714_p1() {
    y_V_1_5_1_cast_fu_12714_p1 = esl_sext<15,14>(y_V_1_5_1_fu_12709_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_5_1_fu_12709_p3() {
    y_V_1_5_1_fu_12709_p3 = (!dneg_5_1_reg_57952.read()[0].is_01())? sc_lv<14>(): ((dneg_5_1_reg_57952.read()[0].to_bool())? p_Val2_7_5_1_reg_57964.read(): p_Val2_14_5_1_reg_57974.read());
}

void Sobel_phase_strm::thread_y_V_1_5_2_fu_12792_p3() {
    y_V_1_5_2_fu_12792_p3 = (!dneg_5_2_fu_12718_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_2_fu_12718_p2.read()[0].to_bool())? p_Val2_7_5_2_fu_12762_p2.read(): p_Val2_14_5_2_fu_12778_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_3_fu_12870_p3() {
    y_V_1_5_3_fu_12870_p3 = (!dneg_5_3_fu_12800_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_3_fu_12800_p2.read()[0].to_bool())? p_Val2_7_5_3_fu_12840_p2.read(): p_Val2_14_5_3_fu_12856_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_4_fu_26290_p3() {
    y_V_1_5_4_fu_26290_p3 = (!dneg_5_4_fu_26248_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_4_fu_26248_p2.read()[0].to_bool())? p_Val2_7_5_4_fu_26264_p2.read(): p_Val2_14_5_4_fu_26277_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_5_fu_26368_p3() {
    y_V_1_5_5_fu_26368_p3 = (!dneg_5_5_fu_26298_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_5_fu_26298_p2.read()[0].to_bool())? p_Val2_7_5_5_fu_26338_p2.read(): p_Val2_14_5_5_fu_26354_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_6_fu_36862_p3() {
    y_V_1_5_6_fu_36862_p3 = (!dneg_5_6_fu_36828_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_6_fu_36828_p2.read()[0].to_bool())? p_Val2_7_5_6_fu_36844_p2.read(): p_Val2_14_5_6_fu_36857_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_7_fu_36920_p3() {
    y_V_1_5_7_fu_36920_p3 = (!dneg_5_7_fu_36870_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_7_fu_36870_p2.read()[0].to_bool())? p_Val2_7_5_7_fu_36908_p2.read(): p_Val2_14_5_7_fu_36914_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_1_cast_fu_23384_p1() {
    y_V_1_60_1_cast_fu_23384_p1 = esl_sext<15,14>(y_V_1_60_1_fu_23379_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_60_1_fu_23379_p3() {
    y_V_1_60_1_fu_23379_p3 = (!dneg_60_1_reg_60042.read()[0].is_01())? sc_lv<14>(): ((dneg_60_1_reg_60042.read()[0].to_bool())? p_Val2_7_60_1_reg_60054.read(): p_Val2_14_60_1_reg_60064.read());
}

void Sobel_phase_strm::thread_y_V_1_60_2_fu_23462_p3() {
    y_V_1_60_2_fu_23462_p3 = (!dneg_60_2_fu_23388_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_2_fu_23388_p2.read()[0].to_bool())? p_Val2_7_60_2_fu_23432_p2.read(): p_Val2_14_60_2_fu_23448_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_3_fu_23540_p3() {
    y_V_1_60_3_fu_23540_p3 = (!dneg_60_3_fu_23470_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_3_fu_23470_p2.read()[0].to_bool())? p_Val2_7_60_3_fu_23510_p2.read(): p_Val2_14_60_3_fu_23526_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_4_fu_34430_p3() {
    y_V_1_60_4_fu_34430_p3 = (!dneg_60_4_fu_34388_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_4_fu_34388_p2.read()[0].to_bool())? p_Val2_7_60_4_fu_34404_p2.read(): p_Val2_14_60_4_fu_34417_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_5_fu_34508_p3() {
    y_V_1_60_5_fu_34508_p3 = (!dneg_60_5_fu_34438_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_5_fu_34438_p2.read()[0].to_bool())? p_Val2_7_60_5_fu_34478_p2.read(): p_Val2_14_60_5_fu_34494_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_6_fu_45277_p3() {
    y_V_1_60_6_fu_45277_p3 = (!dneg_60_6_fu_45243_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_6_fu_45243_p2.read()[0].to_bool())? p_Val2_7_60_6_fu_45259_p2.read(): p_Val2_14_60_6_fu_45272_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_60_7_fu_45335_p3() {
    y_V_1_60_7_fu_45335_p3 = (!dneg_60_7_fu_45285_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_7_fu_45285_p2.read()[0].to_bool())? p_Val2_7_60_7_fu_45323_p2.read(): p_Val2_14_60_7_fu_45329_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_1_cast_fu_23578_p1() {
    y_V_1_61_1_cast_fu_23578_p1 = esl_sext<15,14>(y_V_1_61_1_fu_23573_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_61_1_fu_23573_p3() {
    y_V_1_61_1_fu_23573_p3 = (!dneg_61_1_reg_60080.read()[0].is_01())? sc_lv<14>(): ((dneg_61_1_reg_60080.read()[0].to_bool())? p_Val2_7_61_1_reg_60092.read(): p_Val2_14_61_1_reg_60102.read());
}

void Sobel_phase_strm::thread_y_V_1_61_2_fu_23656_p3() {
    y_V_1_61_2_fu_23656_p3 = (!dneg_61_2_fu_23582_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_2_fu_23582_p2.read()[0].to_bool())? p_Val2_7_61_2_fu_23626_p2.read(): p_Val2_14_61_2_fu_23642_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_3_fu_23734_p3() {
    y_V_1_61_3_fu_23734_p3 = (!dneg_61_3_fu_23664_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_3_fu_23664_p2.read()[0].to_bool())? p_Val2_7_61_3_fu_23704_p2.read(): p_Val2_14_61_3_fu_23720_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_4_fu_34578_p3() {
    y_V_1_61_4_fu_34578_p3 = (!dneg_61_4_fu_34536_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_4_fu_34536_p2.read()[0].to_bool())? p_Val2_7_61_4_fu_34552_p2.read(): p_Val2_14_61_4_fu_34565_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_5_fu_34656_p3() {
    y_V_1_61_5_fu_34656_p3 = (!dneg_61_5_fu_34586_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_5_fu_34586_p2.read()[0].to_bool())? p_Val2_7_61_5_fu_34626_p2.read(): p_Val2_14_61_5_fu_34642_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_6_fu_45430_p3() {
    y_V_1_61_6_fu_45430_p3 = (!dneg_61_6_fu_45396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_6_fu_45396_p2.read()[0].to_bool())? p_Val2_7_61_6_fu_45412_p2.read(): p_Val2_14_61_6_fu_45425_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_61_7_fu_45488_p3() {
    y_V_1_61_7_fu_45488_p3 = (!dneg_61_7_fu_45438_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_7_fu_45438_p2.read()[0].to_bool())? p_Val2_7_61_7_fu_45476_p2.read(): p_Val2_14_61_7_fu_45482_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_1_cast_fu_23772_p1() {
    y_V_1_62_1_cast_fu_23772_p1 = esl_sext<15,14>(y_V_1_62_1_fu_23767_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_62_1_fu_23767_p3() {
    y_V_1_62_1_fu_23767_p3 = (!dneg_62_1_reg_60118.read()[0].is_01())? sc_lv<14>(): ((dneg_62_1_reg_60118.read()[0].to_bool())? p_Val2_7_62_1_reg_60130.read(): p_Val2_14_62_1_reg_60140.read());
}

void Sobel_phase_strm::thread_y_V_1_62_2_fu_23850_p3() {
    y_V_1_62_2_fu_23850_p3 = (!dneg_62_2_fu_23776_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_2_fu_23776_p2.read()[0].to_bool())? p_Val2_7_62_2_fu_23820_p2.read(): p_Val2_14_62_2_fu_23836_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_3_fu_23928_p3() {
    y_V_1_62_3_fu_23928_p3 = (!dneg_62_3_fu_23858_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_3_fu_23858_p2.read()[0].to_bool())? p_Val2_7_62_3_fu_23898_p2.read(): p_Val2_14_62_3_fu_23914_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_4_fu_34726_p3() {
    y_V_1_62_4_fu_34726_p3 = (!dneg_62_4_fu_34684_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_4_fu_34684_p2.read()[0].to_bool())? p_Val2_7_62_4_fu_34700_p2.read(): p_Val2_14_62_4_fu_34713_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_5_fu_34804_p3() {
    y_V_1_62_5_fu_34804_p3 = (!dneg_62_5_fu_34734_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_5_fu_34734_p2.read()[0].to_bool())? p_Val2_7_62_5_fu_34774_p2.read(): p_Val2_14_62_5_fu_34790_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_6_fu_45583_p3() {
    y_V_1_62_6_fu_45583_p3 = (!dneg_62_6_fu_45549_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_6_fu_45549_p2.read()[0].to_bool())? p_Val2_7_62_6_fu_45565_p2.read(): p_Val2_14_62_6_fu_45578_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_62_7_fu_45641_p3() {
    y_V_1_62_7_fu_45641_p3 = (!dneg_62_7_fu_45591_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_7_fu_45591_p2.read()[0].to_bool())? p_Val2_7_62_7_fu_45629_p2.read(): p_Val2_14_62_7_fu_45635_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_1_cast_fu_23966_p1() {
    y_V_1_63_1_cast_fu_23966_p1 = esl_sext<15,14>(y_V_1_63_1_fu_23961_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_63_1_fu_23961_p3() {
    y_V_1_63_1_fu_23961_p3 = (!dneg_63_1_reg_60156.read()[0].is_01())? sc_lv<14>(): ((dneg_63_1_reg_60156.read()[0].to_bool())? p_Val2_7_63_1_reg_60168.read(): p_Val2_14_63_1_reg_60178.read());
}

void Sobel_phase_strm::thread_y_V_1_63_2_fu_24044_p3() {
    y_V_1_63_2_fu_24044_p3 = (!dneg_63_2_fu_23970_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_2_fu_23970_p2.read()[0].to_bool())? p_Val2_7_63_2_fu_24014_p2.read(): p_Val2_14_63_2_fu_24030_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_3_fu_24122_p3() {
    y_V_1_63_3_fu_24122_p3 = (!dneg_63_3_fu_24052_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_3_fu_24052_p2.read()[0].to_bool())? p_Val2_7_63_3_fu_24092_p2.read(): p_Val2_14_63_3_fu_24108_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_4_fu_34874_p3() {
    y_V_1_63_4_fu_34874_p3 = (!dneg_63_4_fu_34832_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_4_fu_34832_p2.read()[0].to_bool())? p_Val2_7_63_4_fu_34848_p2.read(): p_Val2_14_63_4_fu_34861_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_5_fu_34952_p3() {
    y_V_1_63_5_fu_34952_p3 = (!dneg_63_5_fu_34882_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_5_fu_34882_p2.read()[0].to_bool())? p_Val2_7_63_5_fu_34922_p2.read(): p_Val2_14_63_5_fu_34938_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_6_fu_45736_p3() {
    y_V_1_63_6_fu_45736_p3 = (!dneg_63_6_fu_45702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_6_fu_45702_p2.read()[0].to_bool())? p_Val2_7_63_6_fu_45718_p2.read(): p_Val2_14_63_6_fu_45731_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_63_7_fu_45794_p3() {
    y_V_1_63_7_fu_45794_p3 = (!dneg_63_7_fu_45744_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_7_fu_45744_p2.read()[0].to_bool())? p_Val2_7_63_7_fu_45782_p2.read(): p_Val2_14_63_7_fu_45788_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_1_cast_fu_24160_p1() {
    y_V_1_64_1_cast_fu_24160_p1 = esl_sext<15,14>(y_V_1_64_1_fu_24155_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_64_1_fu_24155_p3() {
    y_V_1_64_1_fu_24155_p3 = (!dneg_64_1_reg_60194.read()[0].is_01())? sc_lv<14>(): ((dneg_64_1_reg_60194.read()[0].to_bool())? p_Val2_7_64_1_reg_60206.read(): p_Val2_14_64_1_reg_60216.read());
}

void Sobel_phase_strm::thread_y_V_1_64_2_fu_24238_p3() {
    y_V_1_64_2_fu_24238_p3 = (!dneg_64_2_fu_24164_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_2_fu_24164_p2.read()[0].to_bool())? p_Val2_7_64_2_fu_24208_p2.read(): p_Val2_14_64_2_fu_24224_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_3_fu_24316_p3() {
    y_V_1_64_3_fu_24316_p3 = (!dneg_64_3_fu_24246_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_3_fu_24246_p2.read()[0].to_bool())? p_Val2_7_64_3_fu_24286_p2.read(): p_Val2_14_64_3_fu_24302_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_4_fu_35022_p3() {
    y_V_1_64_4_fu_35022_p3 = (!dneg_64_4_fu_34980_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_4_fu_34980_p2.read()[0].to_bool())? p_Val2_7_64_4_fu_34996_p2.read(): p_Val2_14_64_4_fu_35009_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_5_fu_35100_p3() {
    y_V_1_64_5_fu_35100_p3 = (!dneg_64_5_fu_35030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_5_fu_35030_p2.read()[0].to_bool())? p_Val2_7_64_5_fu_35070_p2.read(): p_Val2_14_64_5_fu_35086_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_6_fu_45889_p3() {
    y_V_1_64_6_fu_45889_p3 = (!dneg_64_6_fu_45855_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_6_fu_45855_p2.read()[0].to_bool())? p_Val2_7_64_6_fu_45871_p2.read(): p_Val2_14_64_6_fu_45884_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_64_7_fu_45947_p3() {
    y_V_1_64_7_fu_45947_p3 = (!dneg_64_7_fu_45897_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_7_fu_45897_p2.read()[0].to_bool())? p_Val2_7_64_7_fu_45935_p2.read(): p_Val2_14_64_7_fu_45941_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_1_cast_fu_24354_p1() {
    y_V_1_65_1_cast_fu_24354_p1 = esl_sext<15,14>(y_V_1_65_1_fu_24349_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_65_1_fu_24349_p3() {
    y_V_1_65_1_fu_24349_p3 = (!dneg_65_1_reg_60232.read()[0].is_01())? sc_lv<14>(): ((dneg_65_1_reg_60232.read()[0].to_bool())? p_Val2_7_65_1_reg_60244.read(): p_Val2_14_65_1_reg_60254.read());
}

void Sobel_phase_strm::thread_y_V_1_65_2_fu_24432_p3() {
    y_V_1_65_2_fu_24432_p3 = (!dneg_65_2_fu_24358_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_2_fu_24358_p2.read()[0].to_bool())? p_Val2_7_65_2_fu_24402_p2.read(): p_Val2_14_65_2_fu_24418_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_3_fu_24510_p3() {
    y_V_1_65_3_fu_24510_p3 = (!dneg_65_3_fu_24440_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_3_fu_24440_p2.read()[0].to_bool())? p_Val2_7_65_3_fu_24480_p2.read(): p_Val2_14_65_3_fu_24496_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_4_fu_35170_p3() {
    y_V_1_65_4_fu_35170_p3 = (!dneg_65_4_fu_35128_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_4_fu_35128_p2.read()[0].to_bool())? p_Val2_7_65_4_fu_35144_p2.read(): p_Val2_14_65_4_fu_35157_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_5_fu_35248_p3() {
    y_V_1_65_5_fu_35248_p3 = (!dneg_65_5_fu_35178_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_5_fu_35178_p2.read()[0].to_bool())? p_Val2_7_65_5_fu_35218_p2.read(): p_Val2_14_65_5_fu_35234_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_6_fu_46042_p3() {
    y_V_1_65_6_fu_46042_p3 = (!dneg_65_6_fu_46008_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_6_fu_46008_p2.read()[0].to_bool())? p_Val2_7_65_6_fu_46024_p2.read(): p_Val2_14_65_6_fu_46037_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_65_7_fu_46100_p3() {
    y_V_1_65_7_fu_46100_p3 = (!dneg_65_7_fu_46050_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_7_fu_46050_p2.read()[0].to_bool())? p_Val2_7_65_7_fu_46088_p2.read(): p_Val2_14_65_7_fu_46094_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_1_cast_fu_24548_p1() {
    y_V_1_66_1_cast_fu_24548_p1 = esl_sext<15,14>(y_V_1_66_1_fu_24543_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_66_1_fu_24543_p3() {
    y_V_1_66_1_fu_24543_p3 = (!dneg_66_1_reg_60270.read()[0].is_01())? sc_lv<14>(): ((dneg_66_1_reg_60270.read()[0].to_bool())? p_Val2_7_66_1_reg_60282.read(): p_Val2_14_66_1_reg_60292.read());
}

void Sobel_phase_strm::thread_y_V_1_66_2_fu_24626_p3() {
    y_V_1_66_2_fu_24626_p3 = (!dneg_66_2_fu_24552_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_2_fu_24552_p2.read()[0].to_bool())? p_Val2_7_66_2_fu_24596_p2.read(): p_Val2_14_66_2_fu_24612_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_3_fu_24704_p3() {
    y_V_1_66_3_fu_24704_p3 = (!dneg_66_3_fu_24634_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_3_fu_24634_p2.read()[0].to_bool())? p_Val2_7_66_3_fu_24674_p2.read(): p_Val2_14_66_3_fu_24690_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_4_fu_35318_p3() {
    y_V_1_66_4_fu_35318_p3 = (!dneg_66_4_fu_35276_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_4_fu_35276_p2.read()[0].to_bool())? p_Val2_7_66_4_fu_35292_p2.read(): p_Val2_14_66_4_fu_35305_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_5_fu_35396_p3() {
    y_V_1_66_5_fu_35396_p3 = (!dneg_66_5_fu_35326_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_5_fu_35326_p2.read()[0].to_bool())? p_Val2_7_66_5_fu_35366_p2.read(): p_Val2_14_66_5_fu_35382_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_6_fu_46195_p3() {
    y_V_1_66_6_fu_46195_p3 = (!dneg_66_6_fu_46161_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_6_fu_46161_p2.read()[0].to_bool())? p_Val2_7_66_6_fu_46177_p2.read(): p_Val2_14_66_6_fu_46190_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_66_7_fu_46253_p3() {
    y_V_1_66_7_fu_46253_p3 = (!dneg_66_7_fu_46203_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_7_fu_46203_p2.read()[0].to_bool())? p_Val2_7_66_7_fu_46241_p2.read(): p_Val2_14_66_7_fu_46247_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_1_cast_fu_24742_p1() {
    y_V_1_67_1_cast_fu_24742_p1 = esl_sext<15,14>(y_V_1_67_1_fu_24737_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_67_1_fu_24737_p3() {
    y_V_1_67_1_fu_24737_p3 = (!dneg_67_1_reg_60308.read()[0].is_01())? sc_lv<14>(): ((dneg_67_1_reg_60308.read()[0].to_bool())? p_Val2_7_67_1_reg_60320.read(): p_Val2_14_67_1_reg_60330.read());
}

void Sobel_phase_strm::thread_y_V_1_67_2_fu_24820_p3() {
    y_V_1_67_2_fu_24820_p3 = (!dneg_67_2_fu_24746_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_2_fu_24746_p2.read()[0].to_bool())? p_Val2_7_67_2_fu_24790_p2.read(): p_Val2_14_67_2_fu_24806_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_3_fu_24898_p3() {
    y_V_1_67_3_fu_24898_p3 = (!dneg_67_3_fu_24828_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_3_fu_24828_p2.read()[0].to_bool())? p_Val2_7_67_3_fu_24868_p2.read(): p_Val2_14_67_3_fu_24884_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_4_fu_35466_p3() {
    y_V_1_67_4_fu_35466_p3 = (!dneg_67_4_fu_35424_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_4_fu_35424_p2.read()[0].to_bool())? p_Val2_7_67_4_fu_35440_p2.read(): p_Val2_14_67_4_fu_35453_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_5_fu_35544_p3() {
    y_V_1_67_5_fu_35544_p3 = (!dneg_67_5_fu_35474_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_5_fu_35474_p2.read()[0].to_bool())? p_Val2_7_67_5_fu_35514_p2.read(): p_Val2_14_67_5_fu_35530_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_6_fu_46348_p3() {
    y_V_1_67_6_fu_46348_p3 = (!dneg_67_6_fu_46314_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_6_fu_46314_p2.read()[0].to_bool())? p_Val2_7_67_6_fu_46330_p2.read(): p_Val2_14_67_6_fu_46343_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_67_7_fu_46406_p3() {
    y_V_1_67_7_fu_46406_p3 = (!dneg_67_7_fu_46356_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_7_fu_46356_p2.read()[0].to_bool())? p_Val2_7_67_7_fu_46394_p2.read(): p_Val2_14_67_7_fu_46400_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_1_cast_fu_24936_p1() {
    y_V_1_68_1_cast_fu_24936_p1 = esl_sext<15,14>(y_V_1_68_1_fu_24931_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_68_1_fu_24931_p3() {
    y_V_1_68_1_fu_24931_p3 = (!dneg_68_1_reg_60346.read()[0].is_01())? sc_lv<14>(): ((dneg_68_1_reg_60346.read()[0].to_bool())? p_Val2_7_68_1_reg_60358.read(): p_Val2_14_68_1_reg_60368.read());
}

void Sobel_phase_strm::thread_y_V_1_68_2_fu_25014_p3() {
    y_V_1_68_2_fu_25014_p3 = (!dneg_68_2_fu_24940_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_2_fu_24940_p2.read()[0].to_bool())? p_Val2_7_68_2_fu_24984_p2.read(): p_Val2_14_68_2_fu_25000_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_3_fu_25092_p3() {
    y_V_1_68_3_fu_25092_p3 = (!dneg_68_3_fu_25022_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_3_fu_25022_p2.read()[0].to_bool())? p_Val2_7_68_3_fu_25062_p2.read(): p_Val2_14_68_3_fu_25078_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_4_fu_35614_p3() {
    y_V_1_68_4_fu_35614_p3 = (!dneg_68_4_fu_35572_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_4_fu_35572_p2.read()[0].to_bool())? p_Val2_7_68_4_fu_35588_p2.read(): p_Val2_14_68_4_fu_35601_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_5_fu_35692_p3() {
    y_V_1_68_5_fu_35692_p3 = (!dneg_68_5_fu_35622_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_5_fu_35622_p2.read()[0].to_bool())? p_Val2_7_68_5_fu_35662_p2.read(): p_Val2_14_68_5_fu_35678_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_6_fu_46501_p3() {
    y_V_1_68_6_fu_46501_p3 = (!dneg_68_6_fu_46467_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_6_fu_46467_p2.read()[0].to_bool())? p_Val2_7_68_6_fu_46483_p2.read(): p_Val2_14_68_6_fu_46496_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_68_7_fu_46559_p3() {
    y_V_1_68_7_fu_46559_p3 = (!dneg_68_7_fu_46509_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_7_fu_46509_p2.read()[0].to_bool())? p_Val2_7_68_7_fu_46547_p2.read(): p_Val2_14_68_7_fu_46553_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_1_cast_fu_25130_p1() {
    y_V_1_69_1_cast_fu_25130_p1 = esl_sext<15,14>(y_V_1_69_1_fu_25125_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_69_1_fu_25125_p3() {
    y_V_1_69_1_fu_25125_p3 = (!dneg_69_1_reg_60384.read()[0].is_01())? sc_lv<14>(): ((dneg_69_1_reg_60384.read()[0].to_bool())? p_Val2_7_69_1_reg_60396.read(): p_Val2_14_69_1_reg_60406.read());
}

void Sobel_phase_strm::thread_y_V_1_69_2_fu_25208_p3() {
    y_V_1_69_2_fu_25208_p3 = (!dneg_69_2_fu_25134_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_2_fu_25134_p2.read()[0].to_bool())? p_Val2_7_69_2_fu_25178_p2.read(): p_Val2_14_69_2_fu_25194_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_3_fu_25286_p3() {
    y_V_1_69_3_fu_25286_p3 = (!dneg_69_3_fu_25216_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_3_fu_25216_p2.read()[0].to_bool())? p_Val2_7_69_3_fu_25256_p2.read(): p_Val2_14_69_3_fu_25272_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_4_fu_35762_p3() {
    y_V_1_69_4_fu_35762_p3 = (!dneg_69_4_fu_35720_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_4_fu_35720_p2.read()[0].to_bool())? p_Val2_7_69_4_fu_35736_p2.read(): p_Val2_14_69_4_fu_35749_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_5_fu_35840_p3() {
    y_V_1_69_5_fu_35840_p3 = (!dneg_69_5_fu_35770_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_5_fu_35770_p2.read()[0].to_bool())? p_Val2_7_69_5_fu_35810_p2.read(): p_Val2_14_69_5_fu_35826_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_6_fu_46654_p3() {
    y_V_1_69_6_fu_46654_p3 = (!dneg_69_6_fu_46620_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_6_fu_46620_p2.read()[0].to_bool())? p_Val2_7_69_6_fu_46636_p2.read(): p_Val2_14_69_6_fu_46649_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_69_7_fu_46712_p3() {
    y_V_1_69_7_fu_46712_p3 = (!dneg_69_7_fu_46662_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_7_fu_46662_p2.read()[0].to_bool())? p_Val2_7_69_7_fu_46700_p2.read(): p_Val2_14_69_7_fu_46706_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_1_cast_fu_12908_p1() {
    y_V_1_6_1_cast_fu_12908_p1 = esl_sext<15,14>(y_V_1_6_1_fu_12903_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_6_1_fu_12903_p3() {
    y_V_1_6_1_fu_12903_p3 = (!dneg_6_1_reg_57990.read()[0].is_01())? sc_lv<14>(): ((dneg_6_1_reg_57990.read()[0].to_bool())? p_Val2_7_6_1_reg_58002.read(): p_Val2_14_6_1_reg_58012.read());
}

void Sobel_phase_strm::thread_y_V_1_6_2_fu_12986_p3() {
    y_V_1_6_2_fu_12986_p3 = (!dneg_6_2_fu_12912_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_2_fu_12912_p2.read()[0].to_bool())? p_Val2_7_6_2_fu_12956_p2.read(): p_Val2_14_6_2_fu_12972_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_3_fu_13064_p3() {
    y_V_1_6_3_fu_13064_p3 = (!dneg_6_3_fu_12994_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_3_fu_12994_p2.read()[0].to_bool())? p_Val2_7_6_3_fu_13034_p2.read(): p_Val2_14_6_3_fu_13050_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_4_fu_26438_p3() {
    y_V_1_6_4_fu_26438_p3 = (!dneg_6_4_fu_26396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_4_fu_26396_p2.read()[0].to_bool())? p_Val2_7_6_4_fu_26412_p2.read(): p_Val2_14_6_4_fu_26425_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_5_fu_26516_p3() {
    y_V_1_6_5_fu_26516_p3 = (!dneg_6_5_fu_26446_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_5_fu_26446_p2.read()[0].to_bool())? p_Val2_7_6_5_fu_26486_p2.read(): p_Val2_14_6_5_fu_26502_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_6_fu_37015_p3() {
    y_V_1_6_6_fu_37015_p3 = (!dneg_6_6_fu_36981_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_6_fu_36981_p2.read()[0].to_bool())? p_Val2_7_6_6_fu_36997_p2.read(): p_Val2_14_6_6_fu_37010_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_7_fu_37073_p3() {
    y_V_1_6_7_fu_37073_p3 = (!dneg_6_7_fu_37023_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_7_fu_37023_p2.read()[0].to_bool())? p_Val2_7_6_7_fu_37061_p2.read(): p_Val2_14_6_7_fu_37067_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_1_cast_fu_25324_p1() {
    y_V_1_70_1_cast_fu_25324_p1 = esl_sext<15,14>(y_V_1_70_1_fu_25319_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_70_1_fu_25319_p3() {
    y_V_1_70_1_fu_25319_p3 = (!dneg_70_1_reg_60422.read()[0].is_01())? sc_lv<14>(): ((dneg_70_1_reg_60422.read()[0].to_bool())? p_Val2_7_70_1_reg_60434.read(): p_Val2_14_70_1_reg_60444.read());
}

void Sobel_phase_strm::thread_y_V_1_70_2_fu_25402_p3() {
    y_V_1_70_2_fu_25402_p3 = (!dneg_70_2_fu_25328_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_2_fu_25328_p2.read()[0].to_bool())? p_Val2_7_70_2_fu_25372_p2.read(): p_Val2_14_70_2_fu_25388_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_3_fu_25480_p3() {
    y_V_1_70_3_fu_25480_p3 = (!dneg_70_3_fu_25410_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_3_fu_25410_p2.read()[0].to_bool())? p_Val2_7_70_3_fu_25450_p2.read(): p_Val2_14_70_3_fu_25466_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_4_fu_35910_p3() {
    y_V_1_70_4_fu_35910_p3 = (!dneg_70_4_fu_35868_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_4_fu_35868_p2.read()[0].to_bool())? p_Val2_7_70_4_fu_35884_p2.read(): p_Val2_14_70_4_fu_35897_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_5_fu_35988_p3() {
    y_V_1_70_5_fu_35988_p3 = (!dneg_70_5_fu_35918_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_5_fu_35918_p2.read()[0].to_bool())? p_Val2_7_70_5_fu_35958_p2.read(): p_Val2_14_70_5_fu_35974_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_6_fu_46807_p3() {
    y_V_1_70_6_fu_46807_p3 = (!dneg_70_6_fu_46773_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_6_fu_46773_p2.read()[0].to_bool())? p_Val2_7_70_6_fu_46789_p2.read(): p_Val2_14_70_6_fu_46802_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_70_7_fu_46865_p3() {
    y_V_1_70_7_fu_46865_p3 = (!dneg_70_7_fu_46815_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_7_fu_46815_p2.read()[0].to_bool())? p_Val2_7_70_7_fu_46853_p2.read(): p_Val2_14_70_7_fu_46859_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_1_cast_fu_13102_p1() {
    y_V_1_7_1_cast_fu_13102_p1 = esl_sext<15,14>(y_V_1_7_1_fu_13097_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_7_1_fu_13097_p3() {
    y_V_1_7_1_fu_13097_p3 = (!dneg_7_1_reg_58028.read()[0].is_01())? sc_lv<14>(): ((dneg_7_1_reg_58028.read()[0].to_bool())? p_Val2_7_7_1_reg_58040.read(): p_Val2_14_7_1_reg_58050.read());
}

void Sobel_phase_strm::thread_y_V_1_7_2_fu_13180_p3() {
    y_V_1_7_2_fu_13180_p3 = (!dneg_7_2_fu_13106_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_2_fu_13106_p2.read()[0].to_bool())? p_Val2_7_7_2_fu_13150_p2.read(): p_Val2_14_7_2_fu_13166_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_3_fu_13258_p3() {
    y_V_1_7_3_fu_13258_p3 = (!dneg_7_3_fu_13188_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_3_fu_13188_p2.read()[0].to_bool())? p_Val2_7_7_3_fu_13228_p2.read(): p_Val2_14_7_3_fu_13244_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_4_fu_26586_p3() {
    y_V_1_7_4_fu_26586_p3 = (!dneg_7_4_fu_26544_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_4_fu_26544_p2.read()[0].to_bool())? p_Val2_7_7_4_fu_26560_p2.read(): p_Val2_14_7_4_fu_26573_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_5_fu_26664_p3() {
    y_V_1_7_5_fu_26664_p3 = (!dneg_7_5_fu_26594_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_5_fu_26594_p2.read()[0].to_bool())? p_Val2_7_7_5_fu_26634_p2.read(): p_Val2_14_7_5_fu_26650_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_6_fu_37168_p3() {
    y_V_1_7_6_fu_37168_p3 = (!dneg_7_6_fu_37134_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_6_fu_37134_p2.read()[0].to_bool())? p_Val2_7_7_6_fu_37150_p2.read(): p_Val2_14_7_6_fu_37163_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_7_fu_37226_p3() {
    y_V_1_7_7_fu_37226_p3 = (!dneg_7_7_fu_37176_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_7_fu_37176_p2.read()[0].to_bool())? p_Val2_7_7_7_fu_37214_p2.read(): p_Val2_14_7_7_fu_37220_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_1_cast_fu_13296_p1() {
    y_V_1_8_1_cast_fu_13296_p1 = esl_sext<15,14>(y_V_1_8_1_fu_13291_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_8_1_fu_13291_p3() {
    y_V_1_8_1_fu_13291_p3 = (!dneg_8_1_reg_58066.read()[0].is_01())? sc_lv<14>(): ((dneg_8_1_reg_58066.read()[0].to_bool())? p_Val2_7_8_1_reg_58078.read(): p_Val2_14_8_1_reg_58088.read());
}

void Sobel_phase_strm::thread_y_V_1_8_2_fu_13374_p3() {
    y_V_1_8_2_fu_13374_p3 = (!dneg_8_2_fu_13300_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_2_fu_13300_p2.read()[0].to_bool())? p_Val2_7_8_2_fu_13344_p2.read(): p_Val2_14_8_2_fu_13360_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_3_fu_13452_p3() {
    y_V_1_8_3_fu_13452_p3 = (!dneg_8_3_fu_13382_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_3_fu_13382_p2.read()[0].to_bool())? p_Val2_7_8_3_fu_13422_p2.read(): p_Val2_14_8_3_fu_13438_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_4_fu_26734_p3() {
    y_V_1_8_4_fu_26734_p3 = (!dneg_8_4_fu_26692_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_4_fu_26692_p2.read()[0].to_bool())? p_Val2_7_8_4_fu_26708_p2.read(): p_Val2_14_8_4_fu_26721_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_5_fu_26812_p3() {
    y_V_1_8_5_fu_26812_p3 = (!dneg_8_5_fu_26742_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_5_fu_26742_p2.read()[0].to_bool())? p_Val2_7_8_5_fu_26782_p2.read(): p_Val2_14_8_5_fu_26798_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_6_fu_37321_p3() {
    y_V_1_8_6_fu_37321_p3 = (!dneg_8_6_fu_37287_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_6_fu_37287_p2.read()[0].to_bool())? p_Val2_7_8_6_fu_37303_p2.read(): p_Val2_14_8_6_fu_37316_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_7_fu_37379_p3() {
    y_V_1_8_7_fu_37379_p3 = (!dneg_8_7_fu_37329_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_7_fu_37329_p2.read()[0].to_bool())? p_Val2_7_8_7_fu_37367_p2.read(): p_Val2_14_8_7_fu_37373_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_1_cast_fu_13490_p1() {
    y_V_1_9_1_cast_fu_13490_p1 = esl_sext<15,14>(y_V_1_9_1_fu_13485_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_9_1_fu_13485_p3() {
    y_V_1_9_1_fu_13485_p3 = (!dneg_9_1_reg_58104.read()[0].is_01())? sc_lv<14>(): ((dneg_9_1_reg_58104.read()[0].to_bool())? p_Val2_7_9_1_reg_58116.read(): p_Val2_14_9_1_reg_58126.read());
}

void Sobel_phase_strm::thread_y_V_1_9_2_fu_13568_p3() {
    y_V_1_9_2_fu_13568_p3 = (!dneg_9_2_fu_13494_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_2_fu_13494_p2.read()[0].to_bool())? p_Val2_7_9_2_fu_13538_p2.read(): p_Val2_14_9_2_fu_13554_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_3_fu_13646_p3() {
    y_V_1_9_3_fu_13646_p3 = (!dneg_9_3_fu_13576_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_3_fu_13576_p2.read()[0].to_bool())? p_Val2_7_9_3_fu_13616_p2.read(): p_Val2_14_9_3_fu_13632_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_4_fu_26882_p3() {
    y_V_1_9_4_fu_26882_p3 = (!dneg_9_4_fu_26840_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_4_fu_26840_p2.read()[0].to_bool())? p_Val2_7_9_4_fu_26856_p2.read(): p_Val2_14_9_4_fu_26869_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_5_fu_26960_p3() {
    y_V_1_9_5_fu_26960_p3 = (!dneg_9_5_fu_26890_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_5_fu_26890_p2.read()[0].to_bool())? p_Val2_7_9_5_fu_26930_p2.read(): p_Val2_14_9_5_fu_26946_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_6_fu_37474_p3() {
    y_V_1_9_6_fu_37474_p3 = (!dneg_9_6_fu_37440_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_6_fu_37440_p2.read()[0].to_bool())? p_Val2_7_9_6_fu_37456_p2.read(): p_Val2_14_9_6_fu_37469_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_7_fu_37532_p3() {
    y_V_1_9_7_fu_37532_p3 = (!dneg_9_7_fu_37482_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_7_fu_37482_p2.read()[0].to_bool())? p_Val2_7_9_7_fu_37520_p2.read(): p_Val2_14_9_7_fu_37526_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_1_fu_36016_p3() {
    z_V_0_1_fu_36016_p3 = (!ap_reg_ppstg_dneg_0_1_reg_57762_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_0_1_reg_57762_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_0_2_cast_fu_36036_p1() {
    z_V_0_2_cast_fu_36036_p1 = esl_zext<13,12>(z_V_0_2_fu_36030_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_2_fu_36030_p2() {
    z_V_0_2_fu_36030_p2 = (!z_V_0_2_v_cast_cast_fu_36023_p3.read().is_01() || !z_V_0_1_fu_36016_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_0_2_v_cast_cast_fu_36023_p3.read()) + sc_biguint<12>(z_V_0_1_fu_36016_p3.read()));
}

void Sobel_phase_strm::thread_z_V_0_2_v_cast_cast_fu_36023_p3() {
    z_V_0_2_v_cast_cast_fu_36023_p3 = (!ap_reg_ppstg_dneg_0_2_reg_60449_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_0_2_reg_60449_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_0_3_fu_36056_p3() {
    z_V_0_3_fu_36056_p3 = (!ap_reg_ppstg_dneg_0_3_reg_60454_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_0_3_reg_60454_pp0_iter3.read()[0].to_bool())? p_Val2_10_0_3_cast_fu_36046_p1.read(): p_Val2_16_0_3_fu_36050_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_4_v_cast_cast_fu_46879_p3() {
    z_V_0_4_v_cast_cast_fu_46879_p3 = (!ap_reg_ppstg_dneg_0_4_reg_62863_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_0_4_reg_62863_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_0_5_v_cast_cast_fu_46886_p3() {
    z_V_0_5_v_cast_cast_fu_46886_p3 = (!ap_reg_ppstg_dneg_0_5_reg_62868_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_0_5_reg_62868_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_0_6_v_cast_cast_fu_46893_p3() {
    z_V_0_6_v_cast_cast_fu_46893_p3 = (!dneg_0_6_reg_65282.read()[0].is_01())? sc_lv<7>(): ((dneg_0_6_reg_65282.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_0_7_v_cast_cast_fu_46900_p3() {
    z_V_0_7_v_cast_cast_fu_46900_p3 = (!dneg_0_7_reg_65287.read()[0].is_01())? sc_lv<6>(): ((dneg_0_7_reg_65287.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_0_8_fu_46949_p2() {
    z_V_0_8_fu_46949_p2 = (!tmp1_fu_46924_p2.read().is_01() || !tmp1757_cast_fu_46945_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1_fu_46924_p2.read()) + sc_bigint<13>(tmp1757_cast_fu_46945_p1.read()));
}

void Sobel_phase_strm::thread_z_V_0_8_v_cast_cast_cast_fu_46907_p3() {
    z_V_0_8_v_cast_cast_cast_fu_46907_p3 = (!dneg_0_8_reg_65292.read()[0].is_01())? sc_lv<6>(): ((dneg_0_8_reg_65292.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_10_1_fu_37546_p3() {
    z_V_10_1_fu_37546_p3 = (!ap_reg_ppstg_dneg_10_1_reg_58142_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_10_1_reg_58142_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_10_2_cast_fu_37566_p1() {
    z_V_10_2_cast_fu_37566_p1 = esl_zext<13,12>(z_V_10_2_fu_37560_p2.read());
}

void Sobel_phase_strm::thread_z_V_10_2_fu_37560_p2() {
    z_V_10_2_fu_37560_p2 = (!z_V_10_2_v_cast_cast_fu_37553_p3.read().is_01() || !z_V_10_1_fu_37546_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_10_2_v_cast_cast_fu_37553_p3.read()) + sc_biguint<12>(z_V_10_1_fu_37546_p3.read()));
}

void Sobel_phase_strm::thread_z_V_10_2_v_cast_cast_fu_37553_p3() {
    z_V_10_2_v_cast_cast_fu_37553_p3 = (!ap_reg_ppstg_dneg_10_2_reg_60789_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_10_2_reg_60789_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_10_3_fu_37586_p3() {
    z_V_10_3_fu_37586_p3 = (!ap_reg_ppstg_dneg_10_3_reg_60794_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_10_3_reg_60794_pp0_iter3.read()[0].to_bool())? p_Val2_10_10_3_cast_fu_37576_p1.read(): p_Val2_16_10_3_fu_37580_p2.read());
}

void Sobel_phase_strm::thread_z_V_10_4_v_cast_cast_fu_48149_p3() {
    z_V_10_4_v_cast_cast_fu_48149_p3 = (!ap_reg_ppstg_dneg_10_4_reg_63203_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_10_4_reg_63203_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_10_5_v_cast_cast_fu_48156_p3() {
    z_V_10_5_v_cast_cast_fu_48156_p3 = (!ap_reg_ppstg_dneg_10_5_reg_63208_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_10_5_reg_63208_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_10_6_v_cast_cast_fu_48163_p3() {
    z_V_10_6_v_cast_cast_fu_48163_p3 = (!dneg_10_6_reg_65482.read()[0].is_01())? sc_lv<7>(): ((dneg_10_6_reg_65482.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_10_7_v_cast_cast_fu_48170_p3() {
    z_V_10_7_v_cast_cast_fu_48170_p3 = (!dneg_10_7_reg_65487.read()[0].is_01())? sc_lv<6>(): ((dneg_10_7_reg_65487.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_10_8_fu_48219_p2() {
    z_V_10_8_fu_48219_p2 = (!tmp204_fu_48194_p2.read().is_01() || !tmp1797_cast_fu_48215_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp204_fu_48194_p2.read()) + sc_bigint<13>(tmp1797_cast_fu_48215_p1.read()));
}

void Sobel_phase_strm::thread_z_V_10_8_v_cast_cast_cast_fu_48177_p3() {
    z_V_10_8_v_cast_cast_cast_fu_48177_p3 = (!dneg_10_8_reg_65492.read()[0].is_01())? sc_lv<6>(): ((dneg_10_8_reg_65492.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_11_1_fu_37699_p3() {
    z_V_11_1_fu_37699_p3 = (!ap_reg_ppstg_dneg_11_1_reg_58180_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_11_1_reg_58180_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_11_2_cast_fu_37719_p1() {
    z_V_11_2_cast_fu_37719_p1 = esl_zext<13,12>(z_V_11_2_fu_37713_p2.read());
}

void Sobel_phase_strm::thread_z_V_11_2_fu_37713_p2() {
    z_V_11_2_fu_37713_p2 = (!z_V_11_2_v_cast_cast_fu_37706_p3.read().is_01() || !z_V_11_1_fu_37699_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_11_2_v_cast_cast_fu_37706_p3.read()) + sc_biguint<12>(z_V_11_1_fu_37699_p3.read()));
}

void Sobel_phase_strm::thread_z_V_11_2_v_cast_cast_fu_37706_p3() {
    z_V_11_2_v_cast_cast_fu_37706_p3 = (!ap_reg_ppstg_dneg_11_2_reg_60823_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_11_2_reg_60823_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_11_3_fu_37739_p3() {
    z_V_11_3_fu_37739_p3 = (!ap_reg_ppstg_dneg_11_3_reg_60828_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_11_3_reg_60828_pp0_iter3.read()[0].to_bool())? p_Val2_10_11_3_cast_fu_37729_p1.read(): p_Val2_16_11_3_fu_37733_p2.read());
}

void Sobel_phase_strm::thread_z_V_11_4_v_cast_cast_fu_48276_p3() {
    z_V_11_4_v_cast_cast_fu_48276_p3 = (!ap_reg_ppstg_dneg_11_4_reg_63237_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_11_4_reg_63237_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_11_5_v_cast_cast_fu_48283_p3() {
    z_V_11_5_v_cast_cast_fu_48283_p3 = (!ap_reg_ppstg_dneg_11_5_reg_63242_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_11_5_reg_63242_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_11_6_v_cast_cast_fu_48290_p3() {
    z_V_11_6_v_cast_cast_fu_48290_p3 = (!dneg_11_6_reg_65502.read()[0].is_01())? sc_lv<7>(): ((dneg_11_6_reg_65502.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_11_7_v_cast_cast_fu_48297_p3() {
    z_V_11_7_v_cast_cast_fu_48297_p3 = (!dneg_11_7_reg_65507.read()[0].is_01())? sc_lv<6>(): ((dneg_11_7_reg_65507.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_11_8_fu_48346_p2() {
    z_V_11_8_fu_48346_p2 = (!tmp224_fu_48321_p2.read().is_01() || !tmp1801_cast_fu_48342_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp224_fu_48321_p2.read()) + sc_bigint<13>(tmp1801_cast_fu_48342_p1.read()));
}

void Sobel_phase_strm::thread_z_V_11_8_v_cast_cast_cast_fu_48304_p3() {
    z_V_11_8_v_cast_cast_cast_fu_48304_p3 = (!dneg_11_8_reg_65512.read()[0].is_01())? sc_lv<6>(): ((dneg_11_8_reg_65512.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_12_1_fu_37852_p3() {
    z_V_12_1_fu_37852_p3 = (!ap_reg_ppstg_dneg_12_1_reg_58218_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_12_1_reg_58218_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_12_2_cast_fu_37872_p1() {
    z_V_12_2_cast_fu_37872_p1 = esl_zext<13,12>(z_V_12_2_fu_37866_p2.read());
}

void Sobel_phase_strm::thread_z_V_12_2_fu_37866_p2() {
    z_V_12_2_fu_37866_p2 = (!z_V_12_2_v_cast_cast_fu_37859_p3.read().is_01() || !z_V_12_1_fu_37852_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_12_2_v_cast_cast_fu_37859_p3.read()) + sc_biguint<12>(z_V_12_1_fu_37852_p3.read()));
}

void Sobel_phase_strm::thread_z_V_12_2_v_cast_cast_fu_37859_p3() {
    z_V_12_2_v_cast_cast_fu_37859_p3 = (!ap_reg_ppstg_dneg_12_2_reg_60857_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_12_2_reg_60857_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_12_3_fu_37892_p3() {
    z_V_12_3_fu_37892_p3 = (!ap_reg_ppstg_dneg_12_3_reg_60862_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_12_3_reg_60862_pp0_iter3.read()[0].to_bool())? p_Val2_10_12_3_cast_fu_37882_p1.read(): p_Val2_16_12_3_fu_37886_p2.read());
}

void Sobel_phase_strm::thread_z_V_12_4_v_cast_cast_fu_48403_p3() {
    z_V_12_4_v_cast_cast_fu_48403_p3 = (!ap_reg_ppstg_dneg_12_4_reg_63271_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_12_4_reg_63271_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_12_5_v_cast_cast_fu_48410_p3() {
    z_V_12_5_v_cast_cast_fu_48410_p3 = (!ap_reg_ppstg_dneg_12_5_reg_63276_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_12_5_reg_63276_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_12_6_v_cast_cast_fu_48417_p3() {
    z_V_12_6_v_cast_cast_fu_48417_p3 = (!dneg_12_6_reg_65522.read()[0].is_01())? sc_lv<7>(): ((dneg_12_6_reg_65522.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_12_7_v_cast_cast_fu_48424_p3() {
    z_V_12_7_v_cast_cast_fu_48424_p3 = (!dneg_12_7_reg_65527.read()[0].is_01())? sc_lv<6>(): ((dneg_12_7_reg_65527.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_12_8_fu_48473_p2() {
    z_V_12_8_fu_48473_p2 = (!tmp244_fu_48448_p2.read().is_01() || !tmp1805_cast_fu_48469_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp244_fu_48448_p2.read()) + sc_bigint<13>(tmp1805_cast_fu_48469_p1.read()));
}

void Sobel_phase_strm::thread_z_V_12_8_v_cast_cast_cast_fu_48431_p3() {
    z_V_12_8_v_cast_cast_cast_fu_48431_p3 = (!dneg_12_8_reg_65532.read()[0].is_01())? sc_lv<6>(): ((dneg_12_8_reg_65532.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_13_1_fu_38005_p3() {
    z_V_13_1_fu_38005_p3 = (!ap_reg_ppstg_dneg_13_1_reg_58256_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_13_1_reg_58256_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_13_2_cast_fu_38025_p1() {
    z_V_13_2_cast_fu_38025_p1 = esl_zext<13,12>(z_V_13_2_fu_38019_p2.read());
}

void Sobel_phase_strm::thread_z_V_13_2_fu_38019_p2() {
    z_V_13_2_fu_38019_p2 = (!z_V_13_2_v_cast_cast_fu_38012_p3.read().is_01() || !z_V_13_1_fu_38005_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_13_2_v_cast_cast_fu_38012_p3.read()) + sc_biguint<12>(z_V_13_1_fu_38005_p3.read()));
}

void Sobel_phase_strm::thread_z_V_13_2_v_cast_cast_fu_38012_p3() {
    z_V_13_2_v_cast_cast_fu_38012_p3 = (!ap_reg_ppstg_dneg_13_2_reg_60891_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_13_2_reg_60891_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_13_3_fu_38045_p3() {
    z_V_13_3_fu_38045_p3 = (!ap_reg_ppstg_dneg_13_3_reg_60896_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_13_3_reg_60896_pp0_iter3.read()[0].to_bool())? p_Val2_10_13_3_cast_fu_38035_p1.read(): p_Val2_16_13_3_fu_38039_p2.read());
}

void Sobel_phase_strm::thread_z_V_13_4_v_cast_cast_fu_48530_p3() {
    z_V_13_4_v_cast_cast_fu_48530_p3 = (!ap_reg_ppstg_dneg_13_4_reg_63305_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_13_4_reg_63305_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_13_5_v_cast_cast_fu_48537_p3() {
    z_V_13_5_v_cast_cast_fu_48537_p3 = (!ap_reg_ppstg_dneg_13_5_reg_63310_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_13_5_reg_63310_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_13_6_v_cast_cast_fu_48544_p3() {
    z_V_13_6_v_cast_cast_fu_48544_p3 = (!dneg_13_6_reg_65542.read()[0].is_01())? sc_lv<7>(): ((dneg_13_6_reg_65542.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_13_7_v_cast_cast_fu_48551_p3() {
    z_V_13_7_v_cast_cast_fu_48551_p3 = (!dneg_13_7_reg_65547.read()[0].is_01())? sc_lv<6>(): ((dneg_13_7_reg_65547.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_13_8_fu_48600_p2() {
    z_V_13_8_fu_48600_p2 = (!tmp264_fu_48575_p2.read().is_01() || !tmp1809_cast_fu_48596_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp264_fu_48575_p2.read()) + sc_bigint<13>(tmp1809_cast_fu_48596_p1.read()));
}

void Sobel_phase_strm::thread_z_V_13_8_v_cast_cast_cast_fu_48558_p3() {
    z_V_13_8_v_cast_cast_cast_fu_48558_p3 = (!dneg_13_8_reg_65552.read()[0].is_01())? sc_lv<6>(): ((dneg_13_8_reg_65552.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_14_1_fu_38158_p3() {
    z_V_14_1_fu_38158_p3 = (!ap_reg_ppstg_dneg_14_1_reg_58294_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_14_1_reg_58294_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_14_2_cast_fu_38178_p1() {
    z_V_14_2_cast_fu_38178_p1 = esl_zext<13,12>(z_V_14_2_fu_38172_p2.read());
}

void Sobel_phase_strm::thread_z_V_14_2_fu_38172_p2() {
    z_V_14_2_fu_38172_p2 = (!z_V_14_2_v_cast_cast_fu_38165_p3.read().is_01() || !z_V_14_1_fu_38158_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_14_2_v_cast_cast_fu_38165_p3.read()) + sc_biguint<12>(z_V_14_1_fu_38158_p3.read()));
}

void Sobel_phase_strm::thread_z_V_14_2_v_cast_cast_fu_38165_p3() {
    z_V_14_2_v_cast_cast_fu_38165_p3 = (!ap_reg_ppstg_dneg_14_2_reg_60925_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_14_2_reg_60925_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_14_3_fu_38198_p3() {
    z_V_14_3_fu_38198_p3 = (!ap_reg_ppstg_dneg_14_3_reg_60930_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_14_3_reg_60930_pp0_iter3.read()[0].to_bool())? p_Val2_10_14_3_cast_fu_38188_p1.read(): p_Val2_16_14_3_fu_38192_p2.read());
}

void Sobel_phase_strm::thread_z_V_14_4_v_cast_cast_fu_48657_p3() {
    z_V_14_4_v_cast_cast_fu_48657_p3 = (!ap_reg_ppstg_dneg_14_4_reg_63339_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_14_4_reg_63339_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_14_5_v_cast_cast_fu_48664_p3() {
    z_V_14_5_v_cast_cast_fu_48664_p3 = (!ap_reg_ppstg_dneg_14_5_reg_63344_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_14_5_reg_63344_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_14_6_v_cast_cast_fu_48671_p3() {
    z_V_14_6_v_cast_cast_fu_48671_p3 = (!dneg_14_6_reg_65562.read()[0].is_01())? sc_lv<7>(): ((dneg_14_6_reg_65562.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_14_7_v_cast_cast_fu_48678_p3() {
    z_V_14_7_v_cast_cast_fu_48678_p3 = (!dneg_14_7_reg_65567.read()[0].is_01())? sc_lv<6>(): ((dneg_14_7_reg_65567.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_14_8_fu_48727_p2() {
    z_V_14_8_fu_48727_p2 = (!tmp284_fu_48702_p2.read().is_01() || !tmp1813_cast_fu_48723_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp284_fu_48702_p2.read()) + sc_bigint<13>(tmp1813_cast_fu_48723_p1.read()));
}

void Sobel_phase_strm::thread_z_V_14_8_v_cast_cast_cast_fu_48685_p3() {
    z_V_14_8_v_cast_cast_cast_fu_48685_p3 = (!dneg_14_8_reg_65572.read()[0].is_01())? sc_lv<6>(): ((dneg_14_8_reg_65572.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_15_1_fu_38311_p3() {
    z_V_15_1_fu_38311_p3 = (!ap_reg_ppstg_dneg_15_1_reg_58332_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_15_1_reg_58332_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_15_2_cast_fu_38331_p1() {
    z_V_15_2_cast_fu_38331_p1 = esl_zext<13,12>(z_V_15_2_fu_38325_p2.read());
}

void Sobel_phase_strm::thread_z_V_15_2_fu_38325_p2() {
    z_V_15_2_fu_38325_p2 = (!z_V_15_2_v_cast_cast_fu_38318_p3.read().is_01() || !z_V_15_1_fu_38311_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_15_2_v_cast_cast_fu_38318_p3.read()) + sc_biguint<12>(z_V_15_1_fu_38311_p3.read()));
}

void Sobel_phase_strm::thread_z_V_15_2_v_cast_cast_fu_38318_p3() {
    z_V_15_2_v_cast_cast_fu_38318_p3 = (!ap_reg_ppstg_dneg_15_2_reg_60959_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_15_2_reg_60959_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_15_3_fu_38351_p3() {
    z_V_15_3_fu_38351_p3 = (!ap_reg_ppstg_dneg_15_3_reg_60964_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_15_3_reg_60964_pp0_iter3.read()[0].to_bool())? p_Val2_10_15_3_cast_fu_38341_p1.read(): p_Val2_16_15_3_fu_38345_p2.read());
}

void Sobel_phase_strm::thread_z_V_15_4_v_cast_cast_fu_48784_p3() {
    z_V_15_4_v_cast_cast_fu_48784_p3 = (!ap_reg_ppstg_dneg_15_4_reg_63373_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_15_4_reg_63373_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_15_5_v_cast_cast_fu_48791_p3() {
    z_V_15_5_v_cast_cast_fu_48791_p3 = (!ap_reg_ppstg_dneg_15_5_reg_63378_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_15_5_reg_63378_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_15_6_v_cast_cast_fu_48798_p3() {
    z_V_15_6_v_cast_cast_fu_48798_p3 = (!dneg_15_6_reg_65582.read()[0].is_01())? sc_lv<7>(): ((dneg_15_6_reg_65582.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_15_7_v_cast_cast_fu_48805_p3() {
    z_V_15_7_v_cast_cast_fu_48805_p3 = (!dneg_15_7_reg_65587.read()[0].is_01())? sc_lv<6>(): ((dneg_15_7_reg_65587.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_15_8_fu_48854_p2() {
    z_V_15_8_fu_48854_p2 = (!tmp304_fu_48829_p2.read().is_01() || !tmp1817_cast_fu_48850_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp304_fu_48829_p2.read()) + sc_bigint<13>(tmp1817_cast_fu_48850_p1.read()));
}

void Sobel_phase_strm::thread_z_V_15_8_v_cast_cast_cast_fu_48812_p3() {
    z_V_15_8_v_cast_cast_cast_fu_48812_p3 = (!dneg_15_8_reg_65592.read()[0].is_01())? sc_lv<6>(): ((dneg_15_8_reg_65592.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_16_1_fu_38464_p3() {
    z_V_16_1_fu_38464_p3 = (!ap_reg_ppstg_dneg_16_1_reg_58370_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_16_1_reg_58370_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_16_2_cast_fu_38484_p1() {
    z_V_16_2_cast_fu_38484_p1 = esl_zext<13,12>(z_V_16_2_fu_38478_p2.read());
}

void Sobel_phase_strm::thread_z_V_16_2_fu_38478_p2() {
    z_V_16_2_fu_38478_p2 = (!z_V_16_2_v_cast_cast_fu_38471_p3.read().is_01() || !z_V_16_1_fu_38464_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_16_2_v_cast_cast_fu_38471_p3.read()) + sc_biguint<12>(z_V_16_1_fu_38464_p3.read()));
}

void Sobel_phase_strm::thread_z_V_16_2_v_cast_cast_fu_38471_p3() {
    z_V_16_2_v_cast_cast_fu_38471_p3 = (!ap_reg_ppstg_dneg_16_2_reg_60993_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_16_2_reg_60993_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_16_3_fu_38504_p3() {
    z_V_16_3_fu_38504_p3 = (!ap_reg_ppstg_dneg_16_3_reg_60998_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_16_3_reg_60998_pp0_iter3.read()[0].to_bool())? p_Val2_10_16_3_cast_fu_38494_p1.read(): p_Val2_16_16_3_fu_38498_p2.read());
}

void Sobel_phase_strm::thread_z_V_16_4_v_cast_cast_fu_48911_p3() {
    z_V_16_4_v_cast_cast_fu_48911_p3 = (!ap_reg_ppstg_dneg_16_4_reg_63407_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_16_4_reg_63407_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_16_5_v_cast_cast_fu_48918_p3() {
    z_V_16_5_v_cast_cast_fu_48918_p3 = (!ap_reg_ppstg_dneg_16_5_reg_63412_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_16_5_reg_63412_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_16_6_v_cast_cast_fu_48925_p3() {
    z_V_16_6_v_cast_cast_fu_48925_p3 = (!dneg_16_6_reg_65602.read()[0].is_01())? sc_lv<7>(): ((dneg_16_6_reg_65602.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_16_7_v_cast_cast_fu_48932_p3() {
    z_V_16_7_v_cast_cast_fu_48932_p3 = (!dneg_16_7_reg_65607.read()[0].is_01())? sc_lv<6>(): ((dneg_16_7_reg_65607.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_16_8_fu_48981_p2() {
    z_V_16_8_fu_48981_p2 = (!tmp324_fu_48956_p2.read().is_01() || !tmp1821_cast_fu_48977_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp324_fu_48956_p2.read()) + sc_bigint<13>(tmp1821_cast_fu_48977_p1.read()));
}

void Sobel_phase_strm::thread_z_V_16_8_v_cast_cast_cast_fu_48939_p3() {
    z_V_16_8_v_cast_cast_cast_fu_48939_p3 = (!dneg_16_8_reg_65612.read()[0].is_01())? sc_lv<6>(): ((dneg_16_8_reg_65612.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_17_1_fu_38617_p3() {
    z_V_17_1_fu_38617_p3 = (!ap_reg_ppstg_dneg_17_1_reg_58408_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_17_1_reg_58408_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_17_2_cast_fu_38637_p1() {
    z_V_17_2_cast_fu_38637_p1 = esl_zext<13,12>(z_V_17_2_fu_38631_p2.read());
}

void Sobel_phase_strm::thread_z_V_17_2_fu_38631_p2() {
    z_V_17_2_fu_38631_p2 = (!z_V_17_2_v_cast_cast_fu_38624_p3.read().is_01() || !z_V_17_1_fu_38617_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_17_2_v_cast_cast_fu_38624_p3.read()) + sc_biguint<12>(z_V_17_1_fu_38617_p3.read()));
}

void Sobel_phase_strm::thread_z_V_17_2_v_cast_cast_fu_38624_p3() {
    z_V_17_2_v_cast_cast_fu_38624_p3 = (!ap_reg_ppstg_dneg_17_2_reg_61027_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_17_2_reg_61027_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_17_3_fu_38657_p3() {
    z_V_17_3_fu_38657_p3 = (!ap_reg_ppstg_dneg_17_3_reg_61032_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_17_3_reg_61032_pp0_iter3.read()[0].to_bool())? p_Val2_10_17_3_cast_fu_38647_p1.read(): p_Val2_16_17_3_fu_38651_p2.read());
}

void Sobel_phase_strm::thread_z_V_17_4_v_cast_cast_fu_49038_p3() {
    z_V_17_4_v_cast_cast_fu_49038_p3 = (!ap_reg_ppstg_dneg_17_4_reg_63441_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_17_4_reg_63441_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_17_5_v_cast_cast_fu_49045_p3() {
    z_V_17_5_v_cast_cast_fu_49045_p3 = (!ap_reg_ppstg_dneg_17_5_reg_63446_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_17_5_reg_63446_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_17_6_v_cast_cast_fu_49052_p3() {
    z_V_17_6_v_cast_cast_fu_49052_p3 = (!dneg_17_6_reg_65622.read()[0].is_01())? sc_lv<7>(): ((dneg_17_6_reg_65622.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_17_7_v_cast_cast_fu_49059_p3() {
    z_V_17_7_v_cast_cast_fu_49059_p3 = (!dneg_17_7_reg_65627.read()[0].is_01())? sc_lv<6>(): ((dneg_17_7_reg_65627.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_17_8_fu_49108_p2() {
    z_V_17_8_fu_49108_p2 = (!tmp344_fu_49083_p2.read().is_01() || !tmp1825_cast_fu_49104_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp344_fu_49083_p2.read()) + sc_bigint<13>(tmp1825_cast_fu_49104_p1.read()));
}

void Sobel_phase_strm::thread_z_V_17_8_v_cast_cast_cast_fu_49066_p3() {
    z_V_17_8_v_cast_cast_cast_fu_49066_p3 = (!dneg_17_8_reg_65632.read()[0].is_01())? sc_lv<6>(): ((dneg_17_8_reg_65632.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_18_1_fu_38770_p3() {
    z_V_18_1_fu_38770_p3 = (!ap_reg_ppstg_dneg_18_1_reg_58446_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_18_1_reg_58446_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_18_2_cast_fu_38790_p1() {
    z_V_18_2_cast_fu_38790_p1 = esl_zext<13,12>(z_V_18_2_fu_38784_p2.read());
}

void Sobel_phase_strm::thread_z_V_18_2_fu_38784_p2() {
    z_V_18_2_fu_38784_p2 = (!z_V_18_2_v_cast_cast_fu_38777_p3.read().is_01() || !z_V_18_1_fu_38770_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_18_2_v_cast_cast_fu_38777_p3.read()) + sc_biguint<12>(z_V_18_1_fu_38770_p3.read()));
}

void Sobel_phase_strm::thread_z_V_18_2_v_cast_cast_fu_38777_p3() {
    z_V_18_2_v_cast_cast_fu_38777_p3 = (!ap_reg_ppstg_dneg_18_2_reg_61061_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_18_2_reg_61061_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_18_3_fu_38810_p3() {
    z_V_18_3_fu_38810_p3 = (!ap_reg_ppstg_dneg_18_3_reg_61066_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_18_3_reg_61066_pp0_iter3.read()[0].to_bool())? p_Val2_10_18_3_cast_fu_38800_p1.read(): p_Val2_16_18_3_fu_38804_p2.read());
}

void Sobel_phase_strm::thread_z_V_18_4_v_cast_cast_fu_49165_p3() {
    z_V_18_4_v_cast_cast_fu_49165_p3 = (!ap_reg_ppstg_dneg_18_4_reg_63475_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_18_4_reg_63475_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_18_5_v_cast_cast_fu_49172_p3() {
    z_V_18_5_v_cast_cast_fu_49172_p3 = (!ap_reg_ppstg_dneg_18_5_reg_63480_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_18_5_reg_63480_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_18_6_v_cast_cast_fu_49179_p3() {
    z_V_18_6_v_cast_cast_fu_49179_p3 = (!dneg_18_6_reg_65642.read()[0].is_01())? sc_lv<7>(): ((dneg_18_6_reg_65642.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_18_7_v_cast_cast_fu_49186_p3() {
    z_V_18_7_v_cast_cast_fu_49186_p3 = (!dneg_18_7_reg_65647.read()[0].is_01())? sc_lv<6>(): ((dneg_18_7_reg_65647.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_18_8_fu_49235_p2() {
    z_V_18_8_fu_49235_p2 = (!tmp364_fu_49210_p2.read().is_01() || !tmp1829_cast_fu_49231_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp364_fu_49210_p2.read()) + sc_bigint<13>(tmp1829_cast_fu_49231_p1.read()));
}

void Sobel_phase_strm::thread_z_V_18_8_v_cast_cast_cast_fu_49193_p3() {
    z_V_18_8_v_cast_cast_cast_fu_49193_p3 = (!dneg_18_8_reg_65652.read()[0].is_01())? sc_lv<6>(): ((dneg_18_8_reg_65652.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_19_1_fu_38923_p3() {
    z_V_19_1_fu_38923_p3 = (!ap_reg_ppstg_dneg_19_1_reg_58484_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_19_1_reg_58484_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_19_2_cast_fu_38943_p1() {
    z_V_19_2_cast_fu_38943_p1 = esl_zext<13,12>(z_V_19_2_fu_38937_p2.read());
}

void Sobel_phase_strm::thread_z_V_19_2_fu_38937_p2() {
    z_V_19_2_fu_38937_p2 = (!z_V_19_2_v_cast_cast_fu_38930_p3.read().is_01() || !z_V_19_1_fu_38923_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_19_2_v_cast_cast_fu_38930_p3.read()) + sc_biguint<12>(z_V_19_1_fu_38923_p3.read()));
}

void Sobel_phase_strm::thread_z_V_19_2_v_cast_cast_fu_38930_p3() {
    z_V_19_2_v_cast_cast_fu_38930_p3 = (!ap_reg_ppstg_dneg_19_2_reg_61095_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_19_2_reg_61095_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_19_3_fu_38963_p3() {
    z_V_19_3_fu_38963_p3 = (!ap_reg_ppstg_dneg_19_3_reg_61100_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_19_3_reg_61100_pp0_iter3.read()[0].to_bool())? p_Val2_10_19_3_cast_fu_38953_p1.read(): p_Val2_16_19_3_fu_38957_p2.read());
}

void Sobel_phase_strm::thread_z_V_19_4_v_cast_cast_fu_49292_p3() {
    z_V_19_4_v_cast_cast_fu_49292_p3 = (!ap_reg_ppstg_dneg_19_4_reg_63509_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_19_4_reg_63509_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_19_5_v_cast_cast_fu_49299_p3() {
    z_V_19_5_v_cast_cast_fu_49299_p3 = (!ap_reg_ppstg_dneg_19_5_reg_63514_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_19_5_reg_63514_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_19_6_v_cast_cast_fu_49306_p3() {
    z_V_19_6_v_cast_cast_fu_49306_p3 = (!dneg_19_6_reg_65662.read()[0].is_01())? sc_lv<7>(): ((dneg_19_6_reg_65662.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_19_7_v_cast_cast_fu_49313_p3() {
    z_V_19_7_v_cast_cast_fu_49313_p3 = (!dneg_19_7_reg_65667.read()[0].is_01())? sc_lv<6>(): ((dneg_19_7_reg_65667.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_19_8_fu_49362_p2() {
    z_V_19_8_fu_49362_p2 = (!tmp384_fu_49337_p2.read().is_01() || !tmp1833_cast_fu_49358_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp384_fu_49337_p2.read()) + sc_bigint<13>(tmp1833_cast_fu_49358_p1.read()));
}

void Sobel_phase_strm::thread_z_V_19_8_v_cast_cast_cast_fu_49320_p3() {
    z_V_19_8_v_cast_cast_cast_fu_49320_p3 = (!dneg_19_8_reg_65672.read()[0].is_01())? sc_lv<6>(): ((dneg_19_8_reg_65672.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_1_1_fu_36169_p3() {
    z_V_1_1_fu_36169_p3 = (!ap_reg_ppstg_dneg_1_1_reg_57800_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_1_1_reg_57800_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_1_2_cast_fu_36189_p1() {
    z_V_1_2_cast_fu_36189_p1 = esl_zext<13,12>(z_V_1_2_fu_36183_p2.read());
}

void Sobel_phase_strm::thread_z_V_1_2_fu_36183_p2() {
    z_V_1_2_fu_36183_p2 = (!z_V_1_2_v_cast_cast_fu_36176_p3.read().is_01() || !z_V_1_1_fu_36169_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_1_2_v_cast_cast_fu_36176_p3.read()) + sc_biguint<12>(z_V_1_1_fu_36169_p3.read()));
}

void Sobel_phase_strm::thread_z_V_1_2_v_cast_cast_fu_36176_p3() {
    z_V_1_2_v_cast_cast_fu_36176_p3 = (!ap_reg_ppstg_dneg_1_2_reg_60483_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_1_2_reg_60483_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_1_3_fu_36209_p3() {
    z_V_1_3_fu_36209_p3 = (!ap_reg_ppstg_dneg_1_3_reg_60488_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_1_3_reg_60488_pp0_iter3.read()[0].to_bool())? p_Val2_10_1_3_cast_fu_36199_p1.read(): p_Val2_16_1_3_fu_36203_p2.read());
}

void Sobel_phase_strm::thread_z_V_1_4_v_cast_cast_fu_47006_p3() {
    z_V_1_4_v_cast_cast_fu_47006_p3 = (!ap_reg_ppstg_dneg_1_4_reg_62897_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_1_4_reg_62897_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_1_5_v_cast_cast_fu_47013_p3() {
    z_V_1_5_v_cast_cast_fu_47013_p3 = (!ap_reg_ppstg_dneg_1_5_reg_62902_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_1_5_reg_62902_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_1_6_v_cast_cast_fu_47020_p3() {
    z_V_1_6_v_cast_cast_fu_47020_p3 = (!dneg_1_6_reg_65302.read()[0].is_01())? sc_lv<7>(): ((dneg_1_6_reg_65302.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_1_7_v_cast_cast_fu_47027_p3() {
    z_V_1_7_v_cast_cast_fu_47027_p3 = (!dneg_1_7_reg_65307.read()[0].is_01())? sc_lv<6>(): ((dneg_1_7_reg_65307.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_1_8_fu_47076_p2() {
    z_V_1_8_fu_47076_p2 = (!tmp23_fu_47051_p2.read().is_01() || !tmp1761_cast_fu_47072_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp23_fu_47051_p2.read()) + sc_bigint<13>(tmp1761_cast_fu_47072_p1.read()));
}

void Sobel_phase_strm::thread_z_V_1_8_v_cast_cast_cast_fu_47034_p3() {
    z_V_1_8_v_cast_cast_cast_fu_47034_p3 = (!dneg_1_8_reg_65312.read()[0].is_01())? sc_lv<6>(): ((dneg_1_8_reg_65312.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_20_1_fu_39076_p3() {
    z_V_20_1_fu_39076_p3 = (!ap_reg_ppstg_dneg_20_1_reg_58522_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_20_1_reg_58522_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_20_2_cast_fu_39096_p1() {
    z_V_20_2_cast_fu_39096_p1 = esl_zext<13,12>(z_V_20_2_fu_39090_p2.read());
}

void Sobel_phase_strm::thread_z_V_20_2_fu_39090_p2() {
    z_V_20_2_fu_39090_p2 = (!z_V_20_2_v_cast_cast_fu_39083_p3.read().is_01() || !z_V_20_1_fu_39076_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_20_2_v_cast_cast_fu_39083_p3.read()) + sc_biguint<12>(z_V_20_1_fu_39076_p3.read()));
}

void Sobel_phase_strm::thread_z_V_20_2_v_cast_cast_fu_39083_p3() {
    z_V_20_2_v_cast_cast_fu_39083_p3 = (!ap_reg_ppstg_dneg_20_2_reg_61129_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_20_2_reg_61129_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_20_3_fu_39116_p3() {
    z_V_20_3_fu_39116_p3 = (!ap_reg_ppstg_dneg_20_3_reg_61134_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_20_3_reg_61134_pp0_iter3.read()[0].to_bool())? p_Val2_10_20_3_cast_fu_39106_p1.read(): p_Val2_16_20_3_fu_39110_p2.read());
}

void Sobel_phase_strm::thread_z_V_20_4_v_cast_cast_fu_49419_p3() {
    z_V_20_4_v_cast_cast_fu_49419_p3 = (!ap_reg_ppstg_dneg_20_4_reg_63543_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_20_4_reg_63543_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_20_5_v_cast_cast_fu_49426_p3() {
    z_V_20_5_v_cast_cast_fu_49426_p3 = (!ap_reg_ppstg_dneg_20_5_reg_63548_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_20_5_reg_63548_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_20_6_v_cast_cast_fu_49433_p3() {
    z_V_20_6_v_cast_cast_fu_49433_p3 = (!dneg_20_6_reg_65682.read()[0].is_01())? sc_lv<7>(): ((dneg_20_6_reg_65682.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_20_7_v_cast_cast_fu_49440_p3() {
    z_V_20_7_v_cast_cast_fu_49440_p3 = (!dneg_20_7_reg_65687.read()[0].is_01())? sc_lv<6>(): ((dneg_20_7_reg_65687.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_20_8_fu_49489_p2() {
    z_V_20_8_fu_49489_p2 = (!tmp404_fu_49464_p2.read().is_01() || !tmp1837_cast_fu_49485_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp404_fu_49464_p2.read()) + sc_bigint<13>(tmp1837_cast_fu_49485_p1.read()));
}

void Sobel_phase_strm::thread_z_V_20_8_v_cast_cast_cast_fu_49447_p3() {
    z_V_20_8_v_cast_cast_cast_fu_49447_p3 = (!dneg_20_8_reg_65692.read()[0].is_01())? sc_lv<6>(): ((dneg_20_8_reg_65692.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_21_1_fu_39229_p3() {
    z_V_21_1_fu_39229_p3 = (!ap_reg_ppstg_dneg_21_1_reg_58560_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_21_1_reg_58560_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_21_2_cast_fu_39249_p1() {
    z_V_21_2_cast_fu_39249_p1 = esl_zext<13,12>(z_V_21_2_fu_39243_p2.read());
}

void Sobel_phase_strm::thread_z_V_21_2_fu_39243_p2() {
    z_V_21_2_fu_39243_p2 = (!z_V_21_2_v_cast_cast_fu_39236_p3.read().is_01() || !z_V_21_1_fu_39229_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_21_2_v_cast_cast_fu_39236_p3.read()) + sc_biguint<12>(z_V_21_1_fu_39229_p3.read()));
}

void Sobel_phase_strm::thread_z_V_21_2_v_cast_cast_fu_39236_p3() {
    z_V_21_2_v_cast_cast_fu_39236_p3 = (!ap_reg_ppstg_dneg_21_2_reg_61163_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_21_2_reg_61163_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_21_3_fu_39269_p3() {
    z_V_21_3_fu_39269_p3 = (!ap_reg_ppstg_dneg_21_3_reg_61168_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_21_3_reg_61168_pp0_iter3.read()[0].to_bool())? p_Val2_10_21_3_cast_fu_39259_p1.read(): p_Val2_16_21_3_fu_39263_p2.read());
}

void Sobel_phase_strm::thread_z_V_21_4_v_cast_cast_fu_49546_p3() {
    z_V_21_4_v_cast_cast_fu_49546_p3 = (!ap_reg_ppstg_dneg_21_4_reg_63577_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_21_4_reg_63577_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_21_5_v_cast_cast_fu_49553_p3() {
    z_V_21_5_v_cast_cast_fu_49553_p3 = (!ap_reg_ppstg_dneg_21_5_reg_63582_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_21_5_reg_63582_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_21_6_v_cast_cast_fu_49560_p3() {
    z_V_21_6_v_cast_cast_fu_49560_p3 = (!dneg_21_6_reg_65702.read()[0].is_01())? sc_lv<7>(): ((dneg_21_6_reg_65702.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_21_7_v_cast_cast_fu_49567_p3() {
    z_V_21_7_v_cast_cast_fu_49567_p3 = (!dneg_21_7_reg_65707.read()[0].is_01())? sc_lv<6>(): ((dneg_21_7_reg_65707.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_21_8_fu_49616_p2() {
    z_V_21_8_fu_49616_p2 = (!tmp424_fu_49591_p2.read().is_01() || !tmp1841_cast_fu_49612_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp424_fu_49591_p2.read()) + sc_bigint<13>(tmp1841_cast_fu_49612_p1.read()));
}

void Sobel_phase_strm::thread_z_V_21_8_v_cast_cast_cast_fu_49574_p3() {
    z_V_21_8_v_cast_cast_cast_fu_49574_p3 = (!dneg_21_8_reg_65712.read()[0].is_01())? sc_lv<6>(): ((dneg_21_8_reg_65712.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_22_1_fu_39382_p3() {
    z_V_22_1_fu_39382_p3 = (!ap_reg_ppstg_dneg_22_1_reg_58598_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_22_1_reg_58598_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_22_2_cast_fu_39402_p1() {
    z_V_22_2_cast_fu_39402_p1 = esl_zext<13,12>(z_V_22_2_fu_39396_p2.read());
}

void Sobel_phase_strm::thread_z_V_22_2_fu_39396_p2() {
    z_V_22_2_fu_39396_p2 = (!z_V_22_2_v_cast_cast_fu_39389_p3.read().is_01() || !z_V_22_1_fu_39382_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_22_2_v_cast_cast_fu_39389_p3.read()) + sc_biguint<12>(z_V_22_1_fu_39382_p3.read()));
}

void Sobel_phase_strm::thread_z_V_22_2_v_cast_cast_fu_39389_p3() {
    z_V_22_2_v_cast_cast_fu_39389_p3 = (!ap_reg_ppstg_dneg_22_2_reg_61197_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_22_2_reg_61197_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_22_3_fu_39422_p3() {
    z_V_22_3_fu_39422_p3 = (!ap_reg_ppstg_dneg_22_3_reg_61202_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_22_3_reg_61202_pp0_iter3.read()[0].to_bool())? p_Val2_10_22_3_cast_fu_39412_p1.read(): p_Val2_16_22_3_fu_39416_p2.read());
}

void Sobel_phase_strm::thread_z_V_22_4_v_cast_cast_fu_49673_p3() {
    z_V_22_4_v_cast_cast_fu_49673_p3 = (!ap_reg_ppstg_dneg_22_4_reg_63611_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_22_4_reg_63611_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_22_5_v_cast_cast_fu_49680_p3() {
    z_V_22_5_v_cast_cast_fu_49680_p3 = (!ap_reg_ppstg_dneg_22_5_reg_63616_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_22_5_reg_63616_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_22_6_v_cast_cast_fu_49687_p3() {
    z_V_22_6_v_cast_cast_fu_49687_p3 = (!dneg_22_6_reg_65722.read()[0].is_01())? sc_lv<7>(): ((dneg_22_6_reg_65722.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_22_7_v_cast_cast_fu_49694_p3() {
    z_V_22_7_v_cast_cast_fu_49694_p3 = (!dneg_22_7_reg_65727.read()[0].is_01())? sc_lv<6>(): ((dneg_22_7_reg_65727.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_22_8_fu_49743_p2() {
    z_V_22_8_fu_49743_p2 = (!tmp444_fu_49718_p2.read().is_01() || !tmp1845_cast_fu_49739_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp444_fu_49718_p2.read()) + sc_bigint<13>(tmp1845_cast_fu_49739_p1.read()));
}

void Sobel_phase_strm::thread_z_V_22_8_v_cast_cast_cast_fu_49701_p3() {
    z_V_22_8_v_cast_cast_cast_fu_49701_p3 = (!dneg_22_8_reg_65732.read()[0].is_01())? sc_lv<6>(): ((dneg_22_8_reg_65732.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_23_1_fu_39535_p3() {
    z_V_23_1_fu_39535_p3 = (!ap_reg_ppstg_dneg_23_1_reg_58636_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_23_1_reg_58636_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_23_2_cast_fu_39555_p1() {
    z_V_23_2_cast_fu_39555_p1 = esl_zext<13,12>(z_V_23_2_fu_39549_p2.read());
}

void Sobel_phase_strm::thread_z_V_23_2_fu_39549_p2() {
    z_V_23_2_fu_39549_p2 = (!z_V_23_2_v_cast_cast_fu_39542_p3.read().is_01() || !z_V_23_1_fu_39535_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_23_2_v_cast_cast_fu_39542_p3.read()) + sc_biguint<12>(z_V_23_1_fu_39535_p3.read()));
}

void Sobel_phase_strm::thread_z_V_23_2_v_cast_cast_fu_39542_p3() {
    z_V_23_2_v_cast_cast_fu_39542_p3 = (!ap_reg_ppstg_dneg_23_2_reg_61231_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_23_2_reg_61231_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_23_3_fu_39575_p3() {
    z_V_23_3_fu_39575_p3 = (!ap_reg_ppstg_dneg_23_3_reg_61236_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_23_3_reg_61236_pp0_iter3.read()[0].to_bool())? p_Val2_10_23_3_cast_fu_39565_p1.read(): p_Val2_16_23_3_fu_39569_p2.read());
}

void Sobel_phase_strm::thread_z_V_23_4_v_cast_cast_fu_49800_p3() {
    z_V_23_4_v_cast_cast_fu_49800_p3 = (!ap_reg_ppstg_dneg_23_4_reg_63645_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_23_4_reg_63645_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_23_5_v_cast_cast_fu_49807_p3() {
    z_V_23_5_v_cast_cast_fu_49807_p3 = (!ap_reg_ppstg_dneg_23_5_reg_63650_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_23_5_reg_63650_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_23_6_v_cast_cast_fu_49814_p3() {
    z_V_23_6_v_cast_cast_fu_49814_p3 = (!dneg_23_6_reg_65742.read()[0].is_01())? sc_lv<7>(): ((dneg_23_6_reg_65742.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_23_7_v_cast_cast_fu_49821_p3() {
    z_V_23_7_v_cast_cast_fu_49821_p3 = (!dneg_23_7_reg_65747.read()[0].is_01())? sc_lv<6>(): ((dneg_23_7_reg_65747.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_23_8_fu_49870_p2() {
    z_V_23_8_fu_49870_p2 = (!tmp464_fu_49845_p2.read().is_01() || !tmp1849_cast_fu_49866_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp464_fu_49845_p2.read()) + sc_bigint<13>(tmp1849_cast_fu_49866_p1.read()));
}

void Sobel_phase_strm::thread_z_V_23_8_v_cast_cast_cast_fu_49828_p3() {
    z_V_23_8_v_cast_cast_cast_fu_49828_p3 = (!dneg_23_8_reg_65752.read()[0].is_01())? sc_lv<6>(): ((dneg_23_8_reg_65752.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_24_1_fu_39688_p3() {
    z_V_24_1_fu_39688_p3 = (!ap_reg_ppstg_dneg_24_1_reg_58674_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_24_1_reg_58674_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_24_2_cast_fu_39708_p1() {
    z_V_24_2_cast_fu_39708_p1 = esl_zext<13,12>(z_V_24_2_fu_39702_p2.read());
}

void Sobel_phase_strm::thread_z_V_24_2_fu_39702_p2() {
    z_V_24_2_fu_39702_p2 = (!z_V_24_2_v_cast_cast_fu_39695_p3.read().is_01() || !z_V_24_1_fu_39688_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_24_2_v_cast_cast_fu_39695_p3.read()) + sc_biguint<12>(z_V_24_1_fu_39688_p3.read()));
}

void Sobel_phase_strm::thread_z_V_24_2_v_cast_cast_fu_39695_p3() {
    z_V_24_2_v_cast_cast_fu_39695_p3 = (!ap_reg_ppstg_dneg_24_2_reg_61265_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_24_2_reg_61265_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_24_3_fu_39728_p3() {
    z_V_24_3_fu_39728_p3 = (!ap_reg_ppstg_dneg_24_3_reg_61270_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_24_3_reg_61270_pp0_iter3.read()[0].to_bool())? p_Val2_10_24_3_cast_fu_39718_p1.read(): p_Val2_16_24_3_fu_39722_p2.read());
}

void Sobel_phase_strm::thread_z_V_24_4_v_cast_cast_fu_49927_p3() {
    z_V_24_4_v_cast_cast_fu_49927_p3 = (!ap_reg_ppstg_dneg_24_4_reg_63679_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_24_4_reg_63679_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_24_5_v_cast_cast_fu_49934_p3() {
    z_V_24_5_v_cast_cast_fu_49934_p3 = (!ap_reg_ppstg_dneg_24_5_reg_63684_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_24_5_reg_63684_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_24_6_v_cast_cast_fu_49941_p3() {
    z_V_24_6_v_cast_cast_fu_49941_p3 = (!dneg_24_6_reg_65762.read()[0].is_01())? sc_lv<7>(): ((dneg_24_6_reg_65762.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_24_7_v_cast_cast_fu_49948_p3() {
    z_V_24_7_v_cast_cast_fu_49948_p3 = (!dneg_24_7_reg_65767.read()[0].is_01())? sc_lv<6>(): ((dneg_24_7_reg_65767.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_24_8_fu_49997_p2() {
    z_V_24_8_fu_49997_p2 = (!tmp484_fu_49972_p2.read().is_01() || !tmp1853_cast_fu_49993_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp484_fu_49972_p2.read()) + sc_bigint<13>(tmp1853_cast_fu_49993_p1.read()));
}

void Sobel_phase_strm::thread_z_V_24_8_v_cast_cast_cast_fu_49955_p3() {
    z_V_24_8_v_cast_cast_cast_fu_49955_p3 = (!dneg_24_8_reg_65772.read()[0].is_01())? sc_lv<6>(): ((dneg_24_8_reg_65772.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_25_1_fu_39841_p3() {
    z_V_25_1_fu_39841_p3 = (!ap_reg_ppstg_dneg_25_1_reg_58712_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_25_1_reg_58712_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_25_2_cast_fu_39861_p1() {
    z_V_25_2_cast_fu_39861_p1 = esl_zext<13,12>(z_V_25_2_fu_39855_p2.read());
}

void Sobel_phase_strm::thread_z_V_25_2_fu_39855_p2() {
    z_V_25_2_fu_39855_p2 = (!z_V_25_2_v_cast_cast_fu_39848_p3.read().is_01() || !z_V_25_1_fu_39841_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_25_2_v_cast_cast_fu_39848_p3.read()) + sc_biguint<12>(z_V_25_1_fu_39841_p3.read()));
}

void Sobel_phase_strm::thread_z_V_25_2_v_cast_cast_fu_39848_p3() {
    z_V_25_2_v_cast_cast_fu_39848_p3 = (!ap_reg_ppstg_dneg_25_2_reg_61299_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_25_2_reg_61299_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_25_3_fu_39881_p3() {
    z_V_25_3_fu_39881_p3 = (!ap_reg_ppstg_dneg_25_3_reg_61304_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_25_3_reg_61304_pp0_iter3.read()[0].to_bool())? p_Val2_10_25_3_cast_fu_39871_p1.read(): p_Val2_16_25_3_fu_39875_p2.read());
}

void Sobel_phase_strm::thread_z_V_25_4_v_cast_cast_fu_50054_p3() {
    z_V_25_4_v_cast_cast_fu_50054_p3 = (!ap_reg_ppstg_dneg_25_4_reg_63713_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_25_4_reg_63713_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_25_5_v_cast_cast_fu_50061_p3() {
    z_V_25_5_v_cast_cast_fu_50061_p3 = (!ap_reg_ppstg_dneg_25_5_reg_63718_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_25_5_reg_63718_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_25_6_v_cast_cast_fu_50068_p3() {
    z_V_25_6_v_cast_cast_fu_50068_p3 = (!dneg_25_6_reg_65782.read()[0].is_01())? sc_lv<7>(): ((dneg_25_6_reg_65782.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_25_7_v_cast_cast_fu_50075_p3() {
    z_V_25_7_v_cast_cast_fu_50075_p3 = (!dneg_25_7_reg_65787.read()[0].is_01())? sc_lv<6>(): ((dneg_25_7_reg_65787.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_25_8_fu_50124_p2() {
    z_V_25_8_fu_50124_p2 = (!tmp504_fu_50099_p2.read().is_01() || !tmp1857_cast_fu_50120_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp504_fu_50099_p2.read()) + sc_bigint<13>(tmp1857_cast_fu_50120_p1.read()));
}

void Sobel_phase_strm::thread_z_V_25_8_v_cast_cast_cast_fu_50082_p3() {
    z_V_25_8_v_cast_cast_cast_fu_50082_p3 = (!dneg_25_8_reg_65792.read()[0].is_01())? sc_lv<6>(): ((dneg_25_8_reg_65792.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_26_1_fu_39994_p3() {
    z_V_26_1_fu_39994_p3 = (!ap_reg_ppstg_dneg_26_1_reg_58750_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_26_1_reg_58750_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_26_2_cast_fu_40014_p1() {
    z_V_26_2_cast_fu_40014_p1 = esl_zext<13,12>(z_V_26_2_fu_40008_p2.read());
}

void Sobel_phase_strm::thread_z_V_26_2_fu_40008_p2() {
    z_V_26_2_fu_40008_p2 = (!z_V_26_2_v_cast_cast_fu_40001_p3.read().is_01() || !z_V_26_1_fu_39994_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_26_2_v_cast_cast_fu_40001_p3.read()) + sc_biguint<12>(z_V_26_1_fu_39994_p3.read()));
}

void Sobel_phase_strm::thread_z_V_26_2_v_cast_cast_fu_40001_p3() {
    z_V_26_2_v_cast_cast_fu_40001_p3 = (!ap_reg_ppstg_dneg_26_2_reg_61333_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_26_2_reg_61333_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_26_3_fu_40034_p3() {
    z_V_26_3_fu_40034_p3 = (!ap_reg_ppstg_dneg_26_3_reg_61338_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_26_3_reg_61338_pp0_iter3.read()[0].to_bool())? p_Val2_10_26_3_cast_fu_40024_p1.read(): p_Val2_16_26_3_fu_40028_p2.read());
}

void Sobel_phase_strm::thread_z_V_26_4_v_cast_cast_fu_50181_p3() {
    z_V_26_4_v_cast_cast_fu_50181_p3 = (!ap_reg_ppstg_dneg_26_4_reg_63747_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_26_4_reg_63747_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_26_5_v_cast_cast_fu_50188_p3() {
    z_V_26_5_v_cast_cast_fu_50188_p3 = (!ap_reg_ppstg_dneg_26_5_reg_63752_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_26_5_reg_63752_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_26_6_v_cast_cast_fu_50195_p3() {
    z_V_26_6_v_cast_cast_fu_50195_p3 = (!dneg_26_6_reg_65802.read()[0].is_01())? sc_lv<7>(): ((dneg_26_6_reg_65802.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_26_7_v_cast_cast_fu_50202_p3() {
    z_V_26_7_v_cast_cast_fu_50202_p3 = (!dneg_26_7_reg_65807.read()[0].is_01())? sc_lv<6>(): ((dneg_26_7_reg_65807.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_26_8_fu_50251_p2() {
    z_V_26_8_fu_50251_p2 = (!tmp524_fu_50226_p2.read().is_01() || !tmp1861_cast_fu_50247_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp524_fu_50226_p2.read()) + sc_bigint<13>(tmp1861_cast_fu_50247_p1.read()));
}

void Sobel_phase_strm::thread_z_V_26_8_v_cast_cast_cast_fu_50209_p3() {
    z_V_26_8_v_cast_cast_cast_fu_50209_p3 = (!dneg_26_8_reg_65812.read()[0].is_01())? sc_lv<6>(): ((dneg_26_8_reg_65812.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_27_1_fu_40147_p3() {
    z_V_27_1_fu_40147_p3 = (!ap_reg_ppstg_dneg_27_1_reg_58788_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_27_1_reg_58788_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_27_2_cast_fu_40167_p1() {
    z_V_27_2_cast_fu_40167_p1 = esl_zext<13,12>(z_V_27_2_fu_40161_p2.read());
}

void Sobel_phase_strm::thread_z_V_27_2_fu_40161_p2() {
    z_V_27_2_fu_40161_p2 = (!z_V_27_2_v_cast_cast_fu_40154_p3.read().is_01() || !z_V_27_1_fu_40147_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_27_2_v_cast_cast_fu_40154_p3.read()) + sc_biguint<12>(z_V_27_1_fu_40147_p3.read()));
}

void Sobel_phase_strm::thread_z_V_27_2_v_cast_cast_fu_40154_p3() {
    z_V_27_2_v_cast_cast_fu_40154_p3 = (!ap_reg_ppstg_dneg_27_2_reg_61367_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_27_2_reg_61367_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_27_3_fu_40187_p3() {
    z_V_27_3_fu_40187_p3 = (!ap_reg_ppstg_dneg_27_3_reg_61372_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_27_3_reg_61372_pp0_iter3.read()[0].to_bool())? p_Val2_10_27_3_cast_fu_40177_p1.read(): p_Val2_16_27_3_fu_40181_p2.read());
}

void Sobel_phase_strm::thread_z_V_27_4_v_cast_cast_fu_50308_p3() {
    z_V_27_4_v_cast_cast_fu_50308_p3 = (!ap_reg_ppstg_dneg_27_4_reg_63781_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_27_4_reg_63781_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_27_5_v_cast_cast_fu_50315_p3() {
    z_V_27_5_v_cast_cast_fu_50315_p3 = (!ap_reg_ppstg_dneg_27_5_reg_63786_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_27_5_reg_63786_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_27_6_v_cast_cast_fu_50322_p3() {
    z_V_27_6_v_cast_cast_fu_50322_p3 = (!dneg_27_6_reg_65822.read()[0].is_01())? sc_lv<7>(): ((dneg_27_6_reg_65822.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_27_7_v_cast_cast_fu_50329_p3() {
    z_V_27_7_v_cast_cast_fu_50329_p3 = (!dneg_27_7_reg_65827.read()[0].is_01())? sc_lv<6>(): ((dneg_27_7_reg_65827.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_27_8_fu_50378_p2() {
    z_V_27_8_fu_50378_p2 = (!tmp544_fu_50353_p2.read().is_01() || !tmp1865_cast_fu_50374_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp544_fu_50353_p2.read()) + sc_bigint<13>(tmp1865_cast_fu_50374_p1.read()));
}

void Sobel_phase_strm::thread_z_V_27_8_v_cast_cast_cast_fu_50336_p3() {
    z_V_27_8_v_cast_cast_cast_fu_50336_p3 = (!dneg_27_8_reg_65832.read()[0].is_01())? sc_lv<6>(): ((dneg_27_8_reg_65832.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_28_1_fu_40300_p3() {
    z_V_28_1_fu_40300_p3 = (!ap_reg_ppstg_dneg_28_1_reg_58826_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_28_1_reg_58826_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_28_2_cast_fu_40320_p1() {
    z_V_28_2_cast_fu_40320_p1 = esl_zext<13,12>(z_V_28_2_fu_40314_p2.read());
}

void Sobel_phase_strm::thread_z_V_28_2_fu_40314_p2() {
    z_V_28_2_fu_40314_p2 = (!z_V_28_2_v_cast_cast_fu_40307_p3.read().is_01() || !z_V_28_1_fu_40300_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_28_2_v_cast_cast_fu_40307_p3.read()) + sc_biguint<12>(z_V_28_1_fu_40300_p3.read()));
}

void Sobel_phase_strm::thread_z_V_28_2_v_cast_cast_fu_40307_p3() {
    z_V_28_2_v_cast_cast_fu_40307_p3 = (!ap_reg_ppstg_dneg_28_2_reg_61401_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_28_2_reg_61401_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_28_3_fu_40340_p3() {
    z_V_28_3_fu_40340_p3 = (!ap_reg_ppstg_dneg_28_3_reg_61406_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_28_3_reg_61406_pp0_iter3.read()[0].to_bool())? p_Val2_10_28_3_cast_fu_40330_p1.read(): p_Val2_16_28_3_fu_40334_p2.read());
}

void Sobel_phase_strm::thread_z_V_28_4_v_cast_cast_fu_50435_p3() {
    z_V_28_4_v_cast_cast_fu_50435_p3 = (!ap_reg_ppstg_dneg_28_4_reg_63815_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_28_4_reg_63815_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_28_5_v_cast_cast_fu_50442_p3() {
    z_V_28_5_v_cast_cast_fu_50442_p3 = (!ap_reg_ppstg_dneg_28_5_reg_63820_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_28_5_reg_63820_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_28_6_v_cast_cast_fu_50449_p3() {
    z_V_28_6_v_cast_cast_fu_50449_p3 = (!dneg_28_6_reg_65842.read()[0].is_01())? sc_lv<7>(): ((dneg_28_6_reg_65842.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_28_7_v_cast_cast_fu_50456_p3() {
    z_V_28_7_v_cast_cast_fu_50456_p3 = (!dneg_28_7_reg_65847.read()[0].is_01())? sc_lv<6>(): ((dneg_28_7_reg_65847.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_28_8_fu_50505_p2() {
    z_V_28_8_fu_50505_p2 = (!tmp564_fu_50480_p2.read().is_01() || !tmp1869_cast_fu_50501_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp564_fu_50480_p2.read()) + sc_bigint<13>(tmp1869_cast_fu_50501_p1.read()));
}

void Sobel_phase_strm::thread_z_V_28_8_v_cast_cast_cast_fu_50463_p3() {
    z_V_28_8_v_cast_cast_cast_fu_50463_p3 = (!dneg_28_8_reg_65852.read()[0].is_01())? sc_lv<6>(): ((dneg_28_8_reg_65852.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_29_1_fu_40453_p3() {
    z_V_29_1_fu_40453_p3 = (!ap_reg_ppstg_dneg_29_1_reg_58864_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_29_1_reg_58864_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_29_2_cast_fu_40473_p1() {
    z_V_29_2_cast_fu_40473_p1 = esl_zext<13,12>(z_V_29_2_fu_40467_p2.read());
}

void Sobel_phase_strm::thread_z_V_29_2_fu_40467_p2() {
    z_V_29_2_fu_40467_p2 = (!z_V_29_2_v_cast_cast_fu_40460_p3.read().is_01() || !z_V_29_1_fu_40453_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_29_2_v_cast_cast_fu_40460_p3.read()) + sc_biguint<12>(z_V_29_1_fu_40453_p3.read()));
}

void Sobel_phase_strm::thread_z_V_29_2_v_cast_cast_fu_40460_p3() {
    z_V_29_2_v_cast_cast_fu_40460_p3 = (!ap_reg_ppstg_dneg_29_2_reg_61435_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_29_2_reg_61435_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_29_3_fu_40493_p3() {
    z_V_29_3_fu_40493_p3 = (!ap_reg_ppstg_dneg_29_3_reg_61440_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_29_3_reg_61440_pp0_iter3.read()[0].to_bool())? p_Val2_10_29_3_cast_fu_40483_p1.read(): p_Val2_16_29_3_fu_40487_p2.read());
}

void Sobel_phase_strm::thread_z_V_29_4_v_cast_cast_fu_50562_p3() {
    z_V_29_4_v_cast_cast_fu_50562_p3 = (!ap_reg_ppstg_dneg_29_4_reg_63849_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_29_4_reg_63849_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_29_5_v_cast_cast_fu_50569_p3() {
    z_V_29_5_v_cast_cast_fu_50569_p3 = (!ap_reg_ppstg_dneg_29_5_reg_63854_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_29_5_reg_63854_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_29_6_v_cast_cast_fu_50576_p3() {
    z_V_29_6_v_cast_cast_fu_50576_p3 = (!dneg_29_6_reg_65862.read()[0].is_01())? sc_lv<7>(): ((dneg_29_6_reg_65862.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_29_7_v_cast_cast_fu_50583_p3() {
    z_V_29_7_v_cast_cast_fu_50583_p3 = (!dneg_29_7_reg_65867.read()[0].is_01())? sc_lv<6>(): ((dneg_29_7_reg_65867.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_29_8_fu_50632_p2() {
    z_V_29_8_fu_50632_p2 = (!tmp584_fu_50607_p2.read().is_01() || !tmp1873_cast_fu_50628_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp584_fu_50607_p2.read()) + sc_bigint<13>(tmp1873_cast_fu_50628_p1.read()));
}

void Sobel_phase_strm::thread_z_V_29_8_v_cast_cast_cast_fu_50590_p3() {
    z_V_29_8_v_cast_cast_cast_fu_50590_p3 = (!dneg_29_8_reg_65872.read()[0].is_01())? sc_lv<6>(): ((dneg_29_8_reg_65872.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_2_1_fu_36322_p3() {
    z_V_2_1_fu_36322_p3 = (!ap_reg_ppstg_dneg_2_1_reg_57838_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_2_1_reg_57838_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_2_2_cast_fu_36342_p1() {
    z_V_2_2_cast_fu_36342_p1 = esl_zext<13,12>(z_V_2_2_fu_36336_p2.read());
}

void Sobel_phase_strm::thread_z_V_2_2_fu_36336_p2() {
    z_V_2_2_fu_36336_p2 = (!z_V_2_2_v_cast_cast_fu_36329_p3.read().is_01() || !z_V_2_1_fu_36322_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_2_2_v_cast_cast_fu_36329_p3.read()) + sc_biguint<12>(z_V_2_1_fu_36322_p3.read()));
}

void Sobel_phase_strm::thread_z_V_2_2_v_cast_cast_fu_36329_p3() {
    z_V_2_2_v_cast_cast_fu_36329_p3 = (!ap_reg_ppstg_dneg_2_2_reg_60517_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_2_2_reg_60517_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_2_3_fu_36362_p3() {
    z_V_2_3_fu_36362_p3 = (!ap_reg_ppstg_dneg_2_3_reg_60522_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_2_3_reg_60522_pp0_iter3.read()[0].to_bool())? p_Val2_10_2_3_cast_fu_36352_p1.read(): p_Val2_16_2_3_fu_36356_p2.read());
}

void Sobel_phase_strm::thread_z_V_2_4_v_cast_cast_fu_47133_p3() {
    z_V_2_4_v_cast_cast_fu_47133_p3 = (!ap_reg_ppstg_dneg_2_4_reg_62931_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_2_4_reg_62931_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_2_5_v_cast_cast_fu_47140_p3() {
    z_V_2_5_v_cast_cast_fu_47140_p3 = (!ap_reg_ppstg_dneg_2_5_reg_62936_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_2_5_reg_62936_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_2_6_v_cast_cast_fu_47147_p3() {
    z_V_2_6_v_cast_cast_fu_47147_p3 = (!dneg_2_6_reg_65322.read()[0].is_01())? sc_lv<7>(): ((dneg_2_6_reg_65322.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_2_7_v_cast_cast_fu_47154_p3() {
    z_V_2_7_v_cast_cast_fu_47154_p3 = (!dneg_2_7_reg_65327.read()[0].is_01())? sc_lv<6>(): ((dneg_2_7_reg_65327.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_2_8_fu_47203_p2() {
    z_V_2_8_fu_47203_p2 = (!tmp44_fu_47178_p2.read().is_01() || !tmp1765_cast_fu_47199_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp44_fu_47178_p2.read()) + sc_bigint<13>(tmp1765_cast_fu_47199_p1.read()));
}

void Sobel_phase_strm::thread_z_V_2_8_v_cast_cast_cast_fu_47161_p3() {
    z_V_2_8_v_cast_cast_cast_fu_47161_p3 = (!dneg_2_8_reg_65332.read()[0].is_01())? sc_lv<6>(): ((dneg_2_8_reg_65332.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_30_1_fu_40606_p3() {
    z_V_30_1_fu_40606_p3 = (!ap_reg_ppstg_dneg_30_1_reg_58902_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_30_1_reg_58902_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_30_2_cast_fu_40626_p1() {
    z_V_30_2_cast_fu_40626_p1 = esl_zext<13,12>(z_V_30_2_fu_40620_p2.read());
}

void Sobel_phase_strm::thread_z_V_30_2_fu_40620_p2() {
    z_V_30_2_fu_40620_p2 = (!z_V_30_2_v_cast_cast_fu_40613_p3.read().is_01() || !z_V_30_1_fu_40606_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_30_2_v_cast_cast_fu_40613_p3.read()) + sc_biguint<12>(z_V_30_1_fu_40606_p3.read()));
}

void Sobel_phase_strm::thread_z_V_30_2_v_cast_cast_fu_40613_p3() {
    z_V_30_2_v_cast_cast_fu_40613_p3 = (!ap_reg_ppstg_dneg_30_2_reg_61469_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_30_2_reg_61469_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_30_3_fu_40646_p3() {
    z_V_30_3_fu_40646_p3 = (!ap_reg_ppstg_dneg_30_3_reg_61474_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_30_3_reg_61474_pp0_iter3.read()[0].to_bool())? p_Val2_10_30_3_cast_fu_40636_p1.read(): p_Val2_16_30_3_fu_40640_p2.read());
}

void Sobel_phase_strm::thread_z_V_30_4_v_cast_cast_fu_50689_p3() {
    z_V_30_4_v_cast_cast_fu_50689_p3 = (!ap_reg_ppstg_dneg_30_4_reg_63883_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_30_4_reg_63883_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_30_5_v_cast_cast_fu_50696_p3() {
    z_V_30_5_v_cast_cast_fu_50696_p3 = (!ap_reg_ppstg_dneg_30_5_reg_63888_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_30_5_reg_63888_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_30_6_v_cast_cast_fu_50703_p3() {
    z_V_30_6_v_cast_cast_fu_50703_p3 = (!dneg_30_6_reg_65882.read()[0].is_01())? sc_lv<7>(): ((dneg_30_6_reg_65882.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_30_7_v_cast_cast_fu_50710_p3() {
    z_V_30_7_v_cast_cast_fu_50710_p3 = (!dneg_30_7_reg_65887.read()[0].is_01())? sc_lv<6>(): ((dneg_30_7_reg_65887.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_30_8_fu_50759_p2() {
    z_V_30_8_fu_50759_p2 = (!tmp604_fu_50734_p2.read().is_01() || !tmp1877_cast_fu_50755_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp604_fu_50734_p2.read()) + sc_bigint<13>(tmp1877_cast_fu_50755_p1.read()));
}

void Sobel_phase_strm::thread_z_V_30_8_v_cast_cast_cast_fu_50717_p3() {
    z_V_30_8_v_cast_cast_cast_fu_50717_p3 = (!dneg_30_8_reg_65892.read()[0].is_01())? sc_lv<6>(): ((dneg_30_8_reg_65892.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_31_1_fu_40759_p3() {
    z_V_31_1_fu_40759_p3 = (!ap_reg_ppstg_dneg_31_1_reg_58940_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_31_1_reg_58940_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_31_2_cast_fu_40779_p1() {
    z_V_31_2_cast_fu_40779_p1 = esl_zext<13,12>(z_V_31_2_fu_40773_p2.read());
}

void Sobel_phase_strm::thread_z_V_31_2_fu_40773_p2() {
    z_V_31_2_fu_40773_p2 = (!z_V_31_2_v_cast_cast_fu_40766_p3.read().is_01() || !z_V_31_1_fu_40759_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_31_2_v_cast_cast_fu_40766_p3.read()) + sc_biguint<12>(z_V_31_1_fu_40759_p3.read()));
}

void Sobel_phase_strm::thread_z_V_31_2_v_cast_cast_fu_40766_p3() {
    z_V_31_2_v_cast_cast_fu_40766_p3 = (!ap_reg_ppstg_dneg_31_2_reg_61503_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_31_2_reg_61503_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_31_3_fu_40799_p3() {
    z_V_31_3_fu_40799_p3 = (!ap_reg_ppstg_dneg_31_3_reg_61508_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_31_3_reg_61508_pp0_iter3.read()[0].to_bool())? p_Val2_10_31_3_cast_fu_40789_p1.read(): p_Val2_16_31_3_fu_40793_p2.read());
}

void Sobel_phase_strm::thread_z_V_31_4_v_cast_cast_fu_50816_p3() {
    z_V_31_4_v_cast_cast_fu_50816_p3 = (!ap_reg_ppstg_dneg_31_4_reg_63917_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_31_4_reg_63917_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_31_5_v_cast_cast_fu_50823_p3() {
    z_V_31_5_v_cast_cast_fu_50823_p3 = (!ap_reg_ppstg_dneg_31_5_reg_63922_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_31_5_reg_63922_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_31_6_v_cast_cast_fu_50830_p3() {
    z_V_31_6_v_cast_cast_fu_50830_p3 = (!dneg_31_6_reg_65902.read()[0].is_01())? sc_lv<7>(): ((dneg_31_6_reg_65902.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_31_7_v_cast_cast_fu_50837_p3() {
    z_V_31_7_v_cast_cast_fu_50837_p3 = (!dneg_31_7_reg_65907.read()[0].is_01())? sc_lv<6>(): ((dneg_31_7_reg_65907.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_31_8_fu_50886_p2() {
    z_V_31_8_fu_50886_p2 = (!tmp624_fu_50861_p2.read().is_01() || !tmp1881_cast_fu_50882_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp624_fu_50861_p2.read()) + sc_bigint<13>(tmp1881_cast_fu_50882_p1.read()));
}

void Sobel_phase_strm::thread_z_V_31_8_v_cast_cast_cast_fu_50844_p3() {
    z_V_31_8_v_cast_cast_cast_fu_50844_p3 = (!dneg_31_8_reg_65912.read()[0].is_01())? sc_lv<6>(): ((dneg_31_8_reg_65912.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_32_1_fu_40912_p3() {
    z_V_32_1_fu_40912_p3 = (!ap_reg_ppstg_dneg_32_1_reg_58978_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_32_1_reg_58978_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_32_2_cast_fu_40932_p1() {
    z_V_32_2_cast_fu_40932_p1 = esl_zext<13,12>(z_V_32_2_fu_40926_p2.read());
}

void Sobel_phase_strm::thread_z_V_32_2_fu_40926_p2() {
    z_V_32_2_fu_40926_p2 = (!z_V_32_2_v_cast_cast_fu_40919_p3.read().is_01() || !z_V_32_1_fu_40912_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_32_2_v_cast_cast_fu_40919_p3.read()) + sc_biguint<12>(z_V_32_1_fu_40912_p3.read()));
}

void Sobel_phase_strm::thread_z_V_32_2_v_cast_cast_fu_40919_p3() {
    z_V_32_2_v_cast_cast_fu_40919_p3 = (!ap_reg_ppstg_dneg_32_2_reg_61537_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_32_2_reg_61537_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_32_3_fu_40952_p3() {
    z_V_32_3_fu_40952_p3 = (!ap_reg_ppstg_dneg_32_3_reg_61542_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_32_3_reg_61542_pp0_iter3.read()[0].to_bool())? p_Val2_10_32_3_cast_fu_40942_p1.read(): p_Val2_16_32_3_fu_40946_p2.read());
}

void Sobel_phase_strm::thread_z_V_32_4_v_cast_cast_fu_50943_p3() {
    z_V_32_4_v_cast_cast_fu_50943_p3 = (!ap_reg_ppstg_dneg_32_4_reg_63951_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_32_4_reg_63951_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_32_5_v_cast_cast_fu_50950_p3() {
    z_V_32_5_v_cast_cast_fu_50950_p3 = (!ap_reg_ppstg_dneg_32_5_reg_63956_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_32_5_reg_63956_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_32_6_v_cast_cast_fu_50957_p3() {
    z_V_32_6_v_cast_cast_fu_50957_p3 = (!dneg_32_6_reg_65922.read()[0].is_01())? sc_lv<7>(): ((dneg_32_6_reg_65922.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_32_7_v_cast_cast_fu_50964_p3() {
    z_V_32_7_v_cast_cast_fu_50964_p3 = (!dneg_32_7_reg_65927.read()[0].is_01())? sc_lv<6>(): ((dneg_32_7_reg_65927.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_32_8_fu_51013_p2() {
    z_V_32_8_fu_51013_p2 = (!tmp644_fu_50988_p2.read().is_01() || !tmp1885_cast_fu_51009_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp644_fu_50988_p2.read()) + sc_bigint<13>(tmp1885_cast_fu_51009_p1.read()));
}

void Sobel_phase_strm::thread_z_V_32_8_v_cast_cast_cast_fu_50971_p3() {
    z_V_32_8_v_cast_cast_cast_fu_50971_p3 = (!dneg_32_8_reg_65932.read()[0].is_01())? sc_lv<6>(): ((dneg_32_8_reg_65932.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_33_1_fu_41065_p3() {
    z_V_33_1_fu_41065_p3 = (!ap_reg_ppstg_dneg_33_1_reg_59016_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_33_1_reg_59016_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_33_2_cast_fu_41085_p1() {
    z_V_33_2_cast_fu_41085_p1 = esl_zext<13,12>(z_V_33_2_fu_41079_p2.read());
}

void Sobel_phase_strm::thread_z_V_33_2_fu_41079_p2() {
    z_V_33_2_fu_41079_p2 = (!z_V_33_2_v_cast_cast_fu_41072_p3.read().is_01() || !z_V_33_1_fu_41065_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_33_2_v_cast_cast_fu_41072_p3.read()) + sc_biguint<12>(z_V_33_1_fu_41065_p3.read()));
}

void Sobel_phase_strm::thread_z_V_33_2_v_cast_cast_fu_41072_p3() {
    z_V_33_2_v_cast_cast_fu_41072_p3 = (!ap_reg_ppstg_dneg_33_2_reg_61571_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_33_2_reg_61571_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_33_3_fu_41105_p3() {
    z_V_33_3_fu_41105_p3 = (!ap_reg_ppstg_dneg_33_3_reg_61576_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_33_3_reg_61576_pp0_iter3.read()[0].to_bool())? p_Val2_10_33_3_cast_fu_41095_p1.read(): p_Val2_16_33_3_fu_41099_p2.read());
}

void Sobel_phase_strm::thread_z_V_33_4_v_cast_cast_fu_51070_p3() {
    z_V_33_4_v_cast_cast_fu_51070_p3 = (!ap_reg_ppstg_dneg_33_4_reg_63985_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_33_4_reg_63985_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_33_5_v_cast_cast_fu_51077_p3() {
    z_V_33_5_v_cast_cast_fu_51077_p3 = (!ap_reg_ppstg_dneg_33_5_reg_63990_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_33_5_reg_63990_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_33_6_v_cast_cast_fu_51084_p3() {
    z_V_33_6_v_cast_cast_fu_51084_p3 = (!dneg_33_6_reg_65942.read()[0].is_01())? sc_lv<7>(): ((dneg_33_6_reg_65942.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_33_7_v_cast_cast_fu_51091_p3() {
    z_V_33_7_v_cast_cast_fu_51091_p3 = (!dneg_33_7_reg_65947.read()[0].is_01())? sc_lv<6>(): ((dneg_33_7_reg_65947.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_33_8_fu_51140_p2() {
    z_V_33_8_fu_51140_p2 = (!tmp664_fu_51115_p2.read().is_01() || !tmp1889_cast_fu_51136_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp664_fu_51115_p2.read()) + sc_bigint<13>(tmp1889_cast_fu_51136_p1.read()));
}

void Sobel_phase_strm::thread_z_V_33_8_v_cast_cast_cast_fu_51098_p3() {
    z_V_33_8_v_cast_cast_cast_fu_51098_p3 = (!dneg_33_8_reg_65952.read()[0].is_01())? sc_lv<6>(): ((dneg_33_8_reg_65952.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_34_1_fu_41218_p3() {
    z_V_34_1_fu_41218_p3 = (!ap_reg_ppstg_dneg_34_1_reg_59054_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_34_1_reg_59054_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_34_2_cast_fu_41238_p1() {
    z_V_34_2_cast_fu_41238_p1 = esl_zext<13,12>(z_V_34_2_fu_41232_p2.read());
}

void Sobel_phase_strm::thread_z_V_34_2_fu_41232_p2() {
    z_V_34_2_fu_41232_p2 = (!z_V_34_2_v_cast_cast_fu_41225_p3.read().is_01() || !z_V_34_1_fu_41218_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_34_2_v_cast_cast_fu_41225_p3.read()) + sc_biguint<12>(z_V_34_1_fu_41218_p3.read()));
}

void Sobel_phase_strm::thread_z_V_34_2_v_cast_cast_fu_41225_p3() {
    z_V_34_2_v_cast_cast_fu_41225_p3 = (!ap_reg_ppstg_dneg_34_2_reg_61605_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_34_2_reg_61605_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_34_3_fu_41258_p3() {
    z_V_34_3_fu_41258_p3 = (!ap_reg_ppstg_dneg_34_3_reg_61610_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_34_3_reg_61610_pp0_iter3.read()[0].to_bool())? p_Val2_10_34_3_cast_fu_41248_p1.read(): p_Val2_16_34_3_fu_41252_p2.read());
}

void Sobel_phase_strm::thread_z_V_34_4_v_cast_cast_fu_51197_p3() {
    z_V_34_4_v_cast_cast_fu_51197_p3 = (!ap_reg_ppstg_dneg_34_4_reg_64019_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_34_4_reg_64019_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_34_5_v_cast_cast_fu_51204_p3() {
    z_V_34_5_v_cast_cast_fu_51204_p3 = (!ap_reg_ppstg_dneg_34_5_reg_64024_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_34_5_reg_64024_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_34_6_v_cast_cast_fu_51211_p3() {
    z_V_34_6_v_cast_cast_fu_51211_p3 = (!dneg_34_6_reg_65962.read()[0].is_01())? sc_lv<7>(): ((dneg_34_6_reg_65962.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_34_7_v_cast_cast_fu_51218_p3() {
    z_V_34_7_v_cast_cast_fu_51218_p3 = (!dneg_34_7_reg_65967.read()[0].is_01())? sc_lv<6>(): ((dneg_34_7_reg_65967.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_34_8_fu_51267_p2() {
    z_V_34_8_fu_51267_p2 = (!tmp684_fu_51242_p2.read().is_01() || !tmp1893_cast_fu_51263_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp684_fu_51242_p2.read()) + sc_bigint<13>(tmp1893_cast_fu_51263_p1.read()));
}

void Sobel_phase_strm::thread_z_V_34_8_v_cast_cast_cast_fu_51225_p3() {
    z_V_34_8_v_cast_cast_cast_fu_51225_p3 = (!dneg_34_8_reg_65972.read()[0].is_01())? sc_lv<6>(): ((dneg_34_8_reg_65972.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_35_1_fu_41371_p3() {
    z_V_35_1_fu_41371_p3 = (!ap_reg_ppstg_dneg_35_1_reg_59092_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_35_1_reg_59092_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_35_2_cast_fu_41391_p1() {
    z_V_35_2_cast_fu_41391_p1 = esl_zext<13,12>(z_V_35_2_fu_41385_p2.read());
}

void Sobel_phase_strm::thread_z_V_35_2_fu_41385_p2() {
    z_V_35_2_fu_41385_p2 = (!z_V_35_2_v_cast_cast_fu_41378_p3.read().is_01() || !z_V_35_1_fu_41371_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_35_2_v_cast_cast_fu_41378_p3.read()) + sc_biguint<12>(z_V_35_1_fu_41371_p3.read()));
}

void Sobel_phase_strm::thread_z_V_35_2_v_cast_cast_fu_41378_p3() {
    z_V_35_2_v_cast_cast_fu_41378_p3 = (!ap_reg_ppstg_dneg_35_2_reg_61639_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_35_2_reg_61639_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_35_3_fu_41411_p3() {
    z_V_35_3_fu_41411_p3 = (!ap_reg_ppstg_dneg_35_3_reg_61644_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_35_3_reg_61644_pp0_iter3.read()[0].to_bool())? p_Val2_10_35_3_cast_fu_41401_p1.read(): p_Val2_16_35_3_fu_41405_p2.read());
}

void Sobel_phase_strm::thread_z_V_35_4_v_cast_cast_fu_51324_p3() {
    z_V_35_4_v_cast_cast_fu_51324_p3 = (!ap_reg_ppstg_dneg_35_4_reg_64053_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_35_4_reg_64053_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_35_5_v_cast_cast_fu_51331_p3() {
    z_V_35_5_v_cast_cast_fu_51331_p3 = (!ap_reg_ppstg_dneg_35_5_reg_64058_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_35_5_reg_64058_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_35_6_v_cast_cast_fu_51338_p3() {
    z_V_35_6_v_cast_cast_fu_51338_p3 = (!dneg_35_6_reg_65982.read()[0].is_01())? sc_lv<7>(): ((dneg_35_6_reg_65982.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_35_7_v_cast_cast_fu_51345_p3() {
    z_V_35_7_v_cast_cast_fu_51345_p3 = (!dneg_35_7_reg_65987.read()[0].is_01())? sc_lv<6>(): ((dneg_35_7_reg_65987.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_35_8_fu_51394_p2() {
    z_V_35_8_fu_51394_p2 = (!tmp704_fu_51369_p2.read().is_01() || !tmp1897_cast_fu_51390_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp704_fu_51369_p2.read()) + sc_bigint<13>(tmp1897_cast_fu_51390_p1.read()));
}

void Sobel_phase_strm::thread_z_V_35_8_v_cast_cast_cast_fu_51352_p3() {
    z_V_35_8_v_cast_cast_cast_fu_51352_p3 = (!dneg_35_8_reg_65992.read()[0].is_01())? sc_lv<6>(): ((dneg_35_8_reg_65992.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_36_1_fu_41524_p3() {
    z_V_36_1_fu_41524_p3 = (!ap_reg_ppstg_dneg_36_1_reg_59130_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_36_1_reg_59130_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_36_2_cast_fu_41544_p1() {
    z_V_36_2_cast_fu_41544_p1 = esl_zext<13,12>(z_V_36_2_fu_41538_p2.read());
}

void Sobel_phase_strm::thread_z_V_36_2_fu_41538_p2() {
    z_V_36_2_fu_41538_p2 = (!z_V_36_2_v_cast_cast_fu_41531_p3.read().is_01() || !z_V_36_1_fu_41524_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_36_2_v_cast_cast_fu_41531_p3.read()) + sc_biguint<12>(z_V_36_1_fu_41524_p3.read()));
}

void Sobel_phase_strm::thread_z_V_36_2_v_cast_cast_fu_41531_p3() {
    z_V_36_2_v_cast_cast_fu_41531_p3 = (!ap_reg_ppstg_dneg_36_2_reg_61673_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_36_2_reg_61673_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_36_3_fu_41564_p3() {
    z_V_36_3_fu_41564_p3 = (!ap_reg_ppstg_dneg_36_3_reg_61678_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_36_3_reg_61678_pp0_iter3.read()[0].to_bool())? p_Val2_10_36_3_cast_fu_41554_p1.read(): p_Val2_16_36_3_fu_41558_p2.read());
}

void Sobel_phase_strm::thread_z_V_36_4_v_cast_cast_fu_51451_p3() {
    z_V_36_4_v_cast_cast_fu_51451_p3 = (!ap_reg_ppstg_dneg_36_4_reg_64087_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_36_4_reg_64087_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_36_5_v_cast_cast_fu_51458_p3() {
    z_V_36_5_v_cast_cast_fu_51458_p3 = (!ap_reg_ppstg_dneg_36_5_reg_64092_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_36_5_reg_64092_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_36_6_v_cast_cast_fu_51465_p3() {
    z_V_36_6_v_cast_cast_fu_51465_p3 = (!dneg_36_6_reg_66002.read()[0].is_01())? sc_lv<7>(): ((dneg_36_6_reg_66002.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_36_7_v_cast_cast_fu_51472_p3() {
    z_V_36_7_v_cast_cast_fu_51472_p3 = (!dneg_36_7_reg_66007.read()[0].is_01())? sc_lv<6>(): ((dneg_36_7_reg_66007.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_36_8_fu_51521_p2() {
    z_V_36_8_fu_51521_p2 = (!tmp724_fu_51496_p2.read().is_01() || !tmp1901_cast_fu_51517_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp724_fu_51496_p2.read()) + sc_bigint<13>(tmp1901_cast_fu_51517_p1.read()));
}

void Sobel_phase_strm::thread_z_V_36_8_v_cast_cast_cast_fu_51479_p3() {
    z_V_36_8_v_cast_cast_cast_fu_51479_p3 = (!dneg_36_8_reg_66012.read()[0].is_01())? sc_lv<6>(): ((dneg_36_8_reg_66012.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_37_1_fu_41677_p3() {
    z_V_37_1_fu_41677_p3 = (!ap_reg_ppstg_dneg_37_1_reg_59168_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_37_1_reg_59168_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_37_2_cast_fu_41697_p1() {
    z_V_37_2_cast_fu_41697_p1 = esl_zext<13,12>(z_V_37_2_fu_41691_p2.read());
}

void Sobel_phase_strm::thread_z_V_37_2_fu_41691_p2() {
    z_V_37_2_fu_41691_p2 = (!z_V_37_2_v_cast_cast_fu_41684_p3.read().is_01() || !z_V_37_1_fu_41677_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_37_2_v_cast_cast_fu_41684_p3.read()) + sc_biguint<12>(z_V_37_1_fu_41677_p3.read()));
}

void Sobel_phase_strm::thread_z_V_37_2_v_cast_cast_fu_41684_p3() {
    z_V_37_2_v_cast_cast_fu_41684_p3 = (!ap_reg_ppstg_dneg_37_2_reg_61707_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_37_2_reg_61707_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_37_3_fu_41717_p3() {
    z_V_37_3_fu_41717_p3 = (!ap_reg_ppstg_dneg_37_3_reg_61712_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_37_3_reg_61712_pp0_iter3.read()[0].to_bool())? p_Val2_10_37_3_cast_fu_41707_p1.read(): p_Val2_16_37_3_fu_41711_p2.read());
}

void Sobel_phase_strm::thread_z_V_37_4_v_cast_cast_fu_51578_p3() {
    z_V_37_4_v_cast_cast_fu_51578_p3 = (!ap_reg_ppstg_dneg_37_4_reg_64121_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_37_4_reg_64121_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_37_5_v_cast_cast_fu_51585_p3() {
    z_V_37_5_v_cast_cast_fu_51585_p3 = (!ap_reg_ppstg_dneg_37_5_reg_64126_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_37_5_reg_64126_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_37_6_v_cast_cast_fu_51592_p3() {
    z_V_37_6_v_cast_cast_fu_51592_p3 = (!dneg_37_6_reg_66022.read()[0].is_01())? sc_lv<7>(): ((dneg_37_6_reg_66022.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_37_7_v_cast_cast_fu_51599_p3() {
    z_V_37_7_v_cast_cast_fu_51599_p3 = (!dneg_37_7_reg_66027.read()[0].is_01())? sc_lv<6>(): ((dneg_37_7_reg_66027.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_37_8_fu_51648_p2() {
    z_V_37_8_fu_51648_p2 = (!tmp744_fu_51623_p2.read().is_01() || !tmp1905_cast_fu_51644_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp744_fu_51623_p2.read()) + sc_bigint<13>(tmp1905_cast_fu_51644_p1.read()));
}

void Sobel_phase_strm::thread_z_V_37_8_v_cast_cast_cast_fu_51606_p3() {
    z_V_37_8_v_cast_cast_cast_fu_51606_p3 = (!dneg_37_8_reg_66032.read()[0].is_01())? sc_lv<6>(): ((dneg_37_8_reg_66032.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_38_1_fu_41830_p3() {
    z_V_38_1_fu_41830_p3 = (!ap_reg_ppstg_dneg_38_1_reg_59206_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_38_1_reg_59206_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_38_2_cast_fu_41850_p1() {
    z_V_38_2_cast_fu_41850_p1 = esl_zext<13,12>(z_V_38_2_fu_41844_p2.read());
}

void Sobel_phase_strm::thread_z_V_38_2_fu_41844_p2() {
    z_V_38_2_fu_41844_p2 = (!z_V_38_2_v_cast_cast_fu_41837_p3.read().is_01() || !z_V_38_1_fu_41830_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_38_2_v_cast_cast_fu_41837_p3.read()) + sc_biguint<12>(z_V_38_1_fu_41830_p3.read()));
}

void Sobel_phase_strm::thread_z_V_38_2_v_cast_cast_fu_41837_p3() {
    z_V_38_2_v_cast_cast_fu_41837_p3 = (!ap_reg_ppstg_dneg_38_2_reg_61741_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_38_2_reg_61741_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_38_3_fu_41870_p3() {
    z_V_38_3_fu_41870_p3 = (!ap_reg_ppstg_dneg_38_3_reg_61746_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_38_3_reg_61746_pp0_iter3.read()[0].to_bool())? p_Val2_10_38_3_cast_fu_41860_p1.read(): p_Val2_16_38_3_fu_41864_p2.read());
}

void Sobel_phase_strm::thread_z_V_38_4_v_cast_cast_fu_51705_p3() {
    z_V_38_4_v_cast_cast_fu_51705_p3 = (!ap_reg_ppstg_dneg_38_4_reg_64155_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_38_4_reg_64155_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_38_5_v_cast_cast_fu_51712_p3() {
    z_V_38_5_v_cast_cast_fu_51712_p3 = (!ap_reg_ppstg_dneg_38_5_reg_64160_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_38_5_reg_64160_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_38_6_v_cast_cast_fu_51719_p3() {
    z_V_38_6_v_cast_cast_fu_51719_p3 = (!dneg_38_6_reg_66042.read()[0].is_01())? sc_lv<7>(): ((dneg_38_6_reg_66042.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_38_7_v_cast_cast_fu_51726_p3() {
    z_V_38_7_v_cast_cast_fu_51726_p3 = (!dneg_38_7_reg_66047.read()[0].is_01())? sc_lv<6>(): ((dneg_38_7_reg_66047.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_38_8_fu_51775_p2() {
    z_V_38_8_fu_51775_p2 = (!tmp764_fu_51750_p2.read().is_01() || !tmp1909_cast_fu_51771_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp764_fu_51750_p2.read()) + sc_bigint<13>(tmp1909_cast_fu_51771_p1.read()));
}

void Sobel_phase_strm::thread_z_V_38_8_v_cast_cast_cast_fu_51733_p3() {
    z_V_38_8_v_cast_cast_cast_fu_51733_p3 = (!dneg_38_8_reg_66052.read()[0].is_01())? sc_lv<6>(): ((dneg_38_8_reg_66052.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_39_1_fu_41983_p3() {
    z_V_39_1_fu_41983_p3 = (!ap_reg_ppstg_dneg_39_1_reg_59244_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_39_1_reg_59244_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_39_2_cast_fu_42003_p1() {
    z_V_39_2_cast_fu_42003_p1 = esl_zext<13,12>(z_V_39_2_fu_41997_p2.read());
}

void Sobel_phase_strm::thread_z_V_39_2_fu_41997_p2() {
    z_V_39_2_fu_41997_p2 = (!z_V_39_2_v_cast_cast_fu_41990_p3.read().is_01() || !z_V_39_1_fu_41983_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_39_2_v_cast_cast_fu_41990_p3.read()) + sc_biguint<12>(z_V_39_1_fu_41983_p3.read()));
}

void Sobel_phase_strm::thread_z_V_39_2_v_cast_cast_fu_41990_p3() {
    z_V_39_2_v_cast_cast_fu_41990_p3 = (!ap_reg_ppstg_dneg_39_2_reg_61775_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_39_2_reg_61775_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_39_3_fu_42023_p3() {
    z_V_39_3_fu_42023_p3 = (!ap_reg_ppstg_dneg_39_3_reg_61780_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_39_3_reg_61780_pp0_iter3.read()[0].to_bool())? p_Val2_10_39_3_cast_fu_42013_p1.read(): p_Val2_16_39_3_fu_42017_p2.read());
}

void Sobel_phase_strm::thread_z_V_39_4_v_cast_cast_fu_51832_p3() {
    z_V_39_4_v_cast_cast_fu_51832_p3 = (!ap_reg_ppstg_dneg_39_4_reg_64189_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_39_4_reg_64189_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_39_5_v_cast_cast_fu_51839_p3() {
    z_V_39_5_v_cast_cast_fu_51839_p3 = (!ap_reg_ppstg_dneg_39_5_reg_64194_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_39_5_reg_64194_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_39_6_v_cast_cast_fu_51846_p3() {
    z_V_39_6_v_cast_cast_fu_51846_p3 = (!dneg_39_6_reg_66062.read()[0].is_01())? sc_lv<7>(): ((dneg_39_6_reg_66062.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_39_7_v_cast_cast_fu_51853_p3() {
    z_V_39_7_v_cast_cast_fu_51853_p3 = (!dneg_39_7_reg_66067.read()[0].is_01())? sc_lv<6>(): ((dneg_39_7_reg_66067.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_39_8_fu_51902_p2() {
    z_V_39_8_fu_51902_p2 = (!tmp784_fu_51877_p2.read().is_01() || !tmp1913_cast_fu_51898_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp784_fu_51877_p2.read()) + sc_bigint<13>(tmp1913_cast_fu_51898_p1.read()));
}

void Sobel_phase_strm::thread_z_V_39_8_v_cast_cast_cast_fu_51860_p3() {
    z_V_39_8_v_cast_cast_cast_fu_51860_p3 = (!dneg_39_8_reg_66072.read()[0].is_01())? sc_lv<6>(): ((dneg_39_8_reg_66072.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_3_1_fu_36475_p3() {
    z_V_3_1_fu_36475_p3 = (!ap_reg_ppstg_dneg_3_1_reg_57876_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_3_1_reg_57876_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_3_2_cast_fu_36495_p1() {
    z_V_3_2_cast_fu_36495_p1 = esl_zext<13,12>(z_V_3_2_fu_36489_p2.read());
}

void Sobel_phase_strm::thread_z_V_3_2_fu_36489_p2() {
    z_V_3_2_fu_36489_p2 = (!z_V_3_2_v_cast_cast_fu_36482_p3.read().is_01() || !z_V_3_1_fu_36475_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_3_2_v_cast_cast_fu_36482_p3.read()) + sc_biguint<12>(z_V_3_1_fu_36475_p3.read()));
}

void Sobel_phase_strm::thread_z_V_3_2_v_cast_cast_fu_36482_p3() {
    z_V_3_2_v_cast_cast_fu_36482_p3 = (!ap_reg_ppstg_dneg_3_2_reg_60551_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_3_2_reg_60551_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_3_3_fu_36515_p3() {
    z_V_3_3_fu_36515_p3 = (!ap_reg_ppstg_dneg_3_3_reg_60556_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_3_3_reg_60556_pp0_iter3.read()[0].to_bool())? p_Val2_10_3_3_cast_fu_36505_p1.read(): p_Val2_16_3_3_fu_36509_p2.read());
}

void Sobel_phase_strm::thread_z_V_3_4_v_cast_cast_fu_47260_p3() {
    z_V_3_4_v_cast_cast_fu_47260_p3 = (!ap_reg_ppstg_dneg_3_4_reg_62965_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_3_4_reg_62965_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_3_5_v_cast_cast_fu_47267_p3() {
    z_V_3_5_v_cast_cast_fu_47267_p3 = (!ap_reg_ppstg_dneg_3_5_reg_62970_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_3_5_reg_62970_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_3_6_v_cast_cast_fu_47274_p3() {
    z_V_3_6_v_cast_cast_fu_47274_p3 = (!dneg_3_6_reg_65342.read()[0].is_01())? sc_lv<7>(): ((dneg_3_6_reg_65342.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_3_7_v_cast_cast_fu_47281_p3() {
    z_V_3_7_v_cast_cast_fu_47281_p3 = (!dneg_3_7_reg_65347.read()[0].is_01())? sc_lv<6>(): ((dneg_3_7_reg_65347.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_3_8_fu_47330_p2() {
    z_V_3_8_fu_47330_p2 = (!tmp64_fu_47305_p2.read().is_01() || !tmp1769_cast_fu_47326_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp64_fu_47305_p2.read()) + sc_bigint<13>(tmp1769_cast_fu_47326_p1.read()));
}

void Sobel_phase_strm::thread_z_V_3_8_v_cast_cast_cast_fu_47288_p3() {
    z_V_3_8_v_cast_cast_cast_fu_47288_p3 = (!dneg_3_8_reg_65352.read()[0].is_01())? sc_lv<6>(): ((dneg_3_8_reg_65352.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_40_1_fu_42136_p3() {
    z_V_40_1_fu_42136_p3 = (!ap_reg_ppstg_dneg_40_1_reg_59282_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_40_1_reg_59282_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_40_2_cast_fu_42156_p1() {
    z_V_40_2_cast_fu_42156_p1 = esl_zext<13,12>(z_V_40_2_fu_42150_p2.read());
}

void Sobel_phase_strm::thread_z_V_40_2_fu_42150_p2() {
    z_V_40_2_fu_42150_p2 = (!z_V_40_2_v_cast_cast_fu_42143_p3.read().is_01() || !z_V_40_1_fu_42136_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_40_2_v_cast_cast_fu_42143_p3.read()) + sc_biguint<12>(z_V_40_1_fu_42136_p3.read()));
}

void Sobel_phase_strm::thread_z_V_40_2_v_cast_cast_fu_42143_p3() {
    z_V_40_2_v_cast_cast_fu_42143_p3 = (!ap_reg_ppstg_dneg_40_2_reg_61809_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_40_2_reg_61809_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_40_3_fu_42176_p3() {
    z_V_40_3_fu_42176_p3 = (!ap_reg_ppstg_dneg_40_3_reg_61814_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_40_3_reg_61814_pp0_iter3.read()[0].to_bool())? p_Val2_10_40_3_cast_fu_42166_p1.read(): p_Val2_16_40_3_fu_42170_p2.read());
}

void Sobel_phase_strm::thread_z_V_40_4_v_cast_cast_fu_51959_p3() {
    z_V_40_4_v_cast_cast_fu_51959_p3 = (!ap_reg_ppstg_dneg_40_4_reg_64223_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_40_4_reg_64223_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_40_5_v_cast_cast_fu_51966_p3() {
    z_V_40_5_v_cast_cast_fu_51966_p3 = (!ap_reg_ppstg_dneg_40_5_reg_64228_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_40_5_reg_64228_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_40_6_v_cast_cast_fu_51973_p3() {
    z_V_40_6_v_cast_cast_fu_51973_p3 = (!dneg_40_6_reg_66082.read()[0].is_01())? sc_lv<7>(): ((dneg_40_6_reg_66082.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_40_7_v_cast_cast_fu_51980_p3() {
    z_V_40_7_v_cast_cast_fu_51980_p3 = (!dneg_40_7_reg_66087.read()[0].is_01())? sc_lv<6>(): ((dneg_40_7_reg_66087.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_40_8_fu_52029_p2() {
    z_V_40_8_fu_52029_p2 = (!tmp804_fu_52004_p2.read().is_01() || !tmp1917_cast_fu_52025_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp804_fu_52004_p2.read()) + sc_bigint<13>(tmp1917_cast_fu_52025_p1.read()));
}

void Sobel_phase_strm::thread_z_V_40_8_v_cast_cast_cast_fu_51987_p3() {
    z_V_40_8_v_cast_cast_cast_fu_51987_p3 = (!dneg_40_8_reg_66092.read()[0].is_01())? sc_lv<6>(): ((dneg_40_8_reg_66092.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_41_1_fu_42289_p3() {
    z_V_41_1_fu_42289_p3 = (!ap_reg_ppstg_dneg_41_1_reg_59320_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_41_1_reg_59320_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_41_2_cast_fu_42309_p1() {
    z_V_41_2_cast_fu_42309_p1 = esl_zext<13,12>(z_V_41_2_fu_42303_p2.read());
}

void Sobel_phase_strm::thread_z_V_41_2_fu_42303_p2() {
    z_V_41_2_fu_42303_p2 = (!z_V_41_2_v_cast_cast_fu_42296_p3.read().is_01() || !z_V_41_1_fu_42289_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_41_2_v_cast_cast_fu_42296_p3.read()) + sc_biguint<12>(z_V_41_1_fu_42289_p3.read()));
}

void Sobel_phase_strm::thread_z_V_41_2_v_cast_cast_fu_42296_p3() {
    z_V_41_2_v_cast_cast_fu_42296_p3 = (!ap_reg_ppstg_dneg_41_2_reg_61843_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_41_2_reg_61843_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_41_3_fu_42329_p3() {
    z_V_41_3_fu_42329_p3 = (!ap_reg_ppstg_dneg_41_3_reg_61848_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_41_3_reg_61848_pp0_iter3.read()[0].to_bool())? p_Val2_10_41_3_cast_fu_42319_p1.read(): p_Val2_16_41_3_fu_42323_p2.read());
}

void Sobel_phase_strm::thread_z_V_41_4_v_cast_cast_fu_52086_p3() {
    z_V_41_4_v_cast_cast_fu_52086_p3 = (!ap_reg_ppstg_dneg_41_4_reg_64257_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_41_4_reg_64257_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_41_5_v_cast_cast_fu_52093_p3() {
    z_V_41_5_v_cast_cast_fu_52093_p3 = (!ap_reg_ppstg_dneg_41_5_reg_64262_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_41_5_reg_64262_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_41_6_v_cast_cast_fu_52100_p3() {
    z_V_41_6_v_cast_cast_fu_52100_p3 = (!dneg_41_6_reg_66102.read()[0].is_01())? sc_lv<7>(): ((dneg_41_6_reg_66102.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_41_7_v_cast_cast_fu_52107_p3() {
    z_V_41_7_v_cast_cast_fu_52107_p3 = (!dneg_41_7_reg_66107.read()[0].is_01())? sc_lv<6>(): ((dneg_41_7_reg_66107.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_41_8_fu_52156_p2() {
    z_V_41_8_fu_52156_p2 = (!tmp824_fu_52131_p2.read().is_01() || !tmp1921_cast_fu_52152_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp824_fu_52131_p2.read()) + sc_bigint<13>(tmp1921_cast_fu_52152_p1.read()));
}

void Sobel_phase_strm::thread_z_V_41_8_v_cast_cast_cast_fu_52114_p3() {
    z_V_41_8_v_cast_cast_cast_fu_52114_p3 = (!dneg_41_8_reg_66112.read()[0].is_01())? sc_lv<6>(): ((dneg_41_8_reg_66112.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_42_1_fu_42442_p3() {
    z_V_42_1_fu_42442_p3 = (!ap_reg_ppstg_dneg_42_1_reg_59358_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_42_1_reg_59358_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_42_2_cast_fu_42462_p1() {
    z_V_42_2_cast_fu_42462_p1 = esl_zext<13,12>(z_V_42_2_fu_42456_p2.read());
}

void Sobel_phase_strm::thread_z_V_42_2_fu_42456_p2() {
    z_V_42_2_fu_42456_p2 = (!z_V_42_2_v_cast_cast_fu_42449_p3.read().is_01() || !z_V_42_1_fu_42442_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_42_2_v_cast_cast_fu_42449_p3.read()) + sc_biguint<12>(z_V_42_1_fu_42442_p3.read()));
}

void Sobel_phase_strm::thread_z_V_42_2_v_cast_cast_fu_42449_p3() {
    z_V_42_2_v_cast_cast_fu_42449_p3 = (!ap_reg_ppstg_dneg_42_2_reg_61877_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_42_2_reg_61877_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_42_3_fu_42482_p3() {
    z_V_42_3_fu_42482_p3 = (!ap_reg_ppstg_dneg_42_3_reg_61882_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_42_3_reg_61882_pp0_iter3.read()[0].to_bool())? p_Val2_10_42_3_cast_fu_42472_p1.read(): p_Val2_16_42_3_fu_42476_p2.read());
}

void Sobel_phase_strm::thread_z_V_42_4_v_cast_cast_fu_52213_p3() {
    z_V_42_4_v_cast_cast_fu_52213_p3 = (!ap_reg_ppstg_dneg_42_4_reg_64291_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_42_4_reg_64291_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_42_5_v_cast_cast_fu_52220_p3() {
    z_V_42_5_v_cast_cast_fu_52220_p3 = (!ap_reg_ppstg_dneg_42_5_reg_64296_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_42_5_reg_64296_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_42_6_v_cast_cast_fu_52227_p3() {
    z_V_42_6_v_cast_cast_fu_52227_p3 = (!dneg_42_6_reg_66122.read()[0].is_01())? sc_lv<7>(): ((dneg_42_6_reg_66122.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_42_7_v_cast_cast_fu_52234_p3() {
    z_V_42_7_v_cast_cast_fu_52234_p3 = (!dneg_42_7_reg_66127.read()[0].is_01())? sc_lv<6>(): ((dneg_42_7_reg_66127.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_42_8_fu_52283_p2() {
    z_V_42_8_fu_52283_p2 = (!tmp844_fu_52258_p2.read().is_01() || !tmp1925_cast_fu_52279_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp844_fu_52258_p2.read()) + sc_bigint<13>(tmp1925_cast_fu_52279_p1.read()));
}

void Sobel_phase_strm::thread_z_V_42_8_v_cast_cast_cast_fu_52241_p3() {
    z_V_42_8_v_cast_cast_cast_fu_52241_p3 = (!dneg_42_8_reg_66132.read()[0].is_01())? sc_lv<6>(): ((dneg_42_8_reg_66132.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_43_1_fu_42595_p3() {
    z_V_43_1_fu_42595_p3 = (!ap_reg_ppstg_dneg_43_1_reg_59396_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_43_1_reg_59396_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_43_2_cast_fu_42615_p1() {
    z_V_43_2_cast_fu_42615_p1 = esl_zext<13,12>(z_V_43_2_fu_42609_p2.read());
}

void Sobel_phase_strm::thread_z_V_43_2_fu_42609_p2() {
    z_V_43_2_fu_42609_p2 = (!z_V_43_2_v_cast_cast_fu_42602_p3.read().is_01() || !z_V_43_1_fu_42595_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_43_2_v_cast_cast_fu_42602_p3.read()) + sc_biguint<12>(z_V_43_1_fu_42595_p3.read()));
}

void Sobel_phase_strm::thread_z_V_43_2_v_cast_cast_fu_42602_p3() {
    z_V_43_2_v_cast_cast_fu_42602_p3 = (!ap_reg_ppstg_dneg_43_2_reg_61911_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_43_2_reg_61911_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_43_3_fu_42635_p3() {
    z_V_43_3_fu_42635_p3 = (!ap_reg_ppstg_dneg_43_3_reg_61916_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_43_3_reg_61916_pp0_iter3.read()[0].to_bool())? p_Val2_10_43_3_cast_fu_42625_p1.read(): p_Val2_16_43_3_fu_42629_p2.read());
}

void Sobel_phase_strm::thread_z_V_43_4_v_cast_cast_fu_52340_p3() {
    z_V_43_4_v_cast_cast_fu_52340_p3 = (!ap_reg_ppstg_dneg_43_4_reg_64325_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_43_4_reg_64325_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_43_5_v_cast_cast_fu_52347_p3() {
    z_V_43_5_v_cast_cast_fu_52347_p3 = (!ap_reg_ppstg_dneg_43_5_reg_64330_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_43_5_reg_64330_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_43_6_v_cast_cast_fu_52354_p3() {
    z_V_43_6_v_cast_cast_fu_52354_p3 = (!dneg_43_6_reg_66142.read()[0].is_01())? sc_lv<7>(): ((dneg_43_6_reg_66142.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_43_7_v_cast_cast_fu_52361_p3() {
    z_V_43_7_v_cast_cast_fu_52361_p3 = (!dneg_43_7_reg_66147.read()[0].is_01())? sc_lv<6>(): ((dneg_43_7_reg_66147.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_43_8_fu_52410_p2() {
    z_V_43_8_fu_52410_p2 = (!tmp864_fu_52385_p2.read().is_01() || !tmp1929_cast_fu_52406_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp864_fu_52385_p2.read()) + sc_bigint<13>(tmp1929_cast_fu_52406_p1.read()));
}

void Sobel_phase_strm::thread_z_V_43_8_v_cast_cast_cast_fu_52368_p3() {
    z_V_43_8_v_cast_cast_cast_fu_52368_p3 = (!dneg_43_8_reg_66152.read()[0].is_01())? sc_lv<6>(): ((dneg_43_8_reg_66152.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_44_1_fu_42748_p3() {
    z_V_44_1_fu_42748_p3 = (!ap_reg_ppstg_dneg_44_1_reg_59434_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_44_1_reg_59434_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_44_2_cast_fu_42768_p1() {
    z_V_44_2_cast_fu_42768_p1 = esl_zext<13,12>(z_V_44_2_fu_42762_p2.read());
}

void Sobel_phase_strm::thread_z_V_44_2_fu_42762_p2() {
    z_V_44_2_fu_42762_p2 = (!z_V_44_2_v_cast_cast_fu_42755_p3.read().is_01() || !z_V_44_1_fu_42748_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_44_2_v_cast_cast_fu_42755_p3.read()) + sc_biguint<12>(z_V_44_1_fu_42748_p3.read()));
}

void Sobel_phase_strm::thread_z_V_44_2_v_cast_cast_fu_42755_p3() {
    z_V_44_2_v_cast_cast_fu_42755_p3 = (!ap_reg_ppstg_dneg_44_2_reg_61945_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_44_2_reg_61945_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_44_3_fu_42788_p3() {
    z_V_44_3_fu_42788_p3 = (!ap_reg_ppstg_dneg_44_3_reg_61950_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_44_3_reg_61950_pp0_iter3.read()[0].to_bool())? p_Val2_10_44_3_cast_fu_42778_p1.read(): p_Val2_16_44_3_fu_42782_p2.read());
}

void Sobel_phase_strm::thread_z_V_44_4_v_cast_cast_fu_52467_p3() {
    z_V_44_4_v_cast_cast_fu_52467_p3 = (!ap_reg_ppstg_dneg_44_4_reg_64359_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_44_4_reg_64359_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_44_5_v_cast_cast_fu_52474_p3() {
    z_V_44_5_v_cast_cast_fu_52474_p3 = (!ap_reg_ppstg_dneg_44_5_reg_64364_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_44_5_reg_64364_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_44_6_v_cast_cast_fu_52481_p3() {
    z_V_44_6_v_cast_cast_fu_52481_p3 = (!dneg_44_6_reg_66162.read()[0].is_01())? sc_lv<7>(): ((dneg_44_6_reg_66162.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_44_7_v_cast_cast_fu_52488_p3() {
    z_V_44_7_v_cast_cast_fu_52488_p3 = (!dneg_44_7_reg_66167.read()[0].is_01())? sc_lv<6>(): ((dneg_44_7_reg_66167.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_44_8_fu_52537_p2() {
    z_V_44_8_fu_52537_p2 = (!tmp884_fu_52512_p2.read().is_01() || !tmp1933_cast_fu_52533_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp884_fu_52512_p2.read()) + sc_bigint<13>(tmp1933_cast_fu_52533_p1.read()));
}

void Sobel_phase_strm::thread_z_V_44_8_v_cast_cast_cast_fu_52495_p3() {
    z_V_44_8_v_cast_cast_cast_fu_52495_p3 = (!dneg_44_8_reg_66172.read()[0].is_01())? sc_lv<6>(): ((dneg_44_8_reg_66172.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_45_1_fu_42901_p3() {
    z_V_45_1_fu_42901_p3 = (!ap_reg_ppstg_dneg_45_1_reg_59472_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_45_1_reg_59472_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_45_2_cast_fu_42921_p1() {
    z_V_45_2_cast_fu_42921_p1 = esl_zext<13,12>(z_V_45_2_fu_42915_p2.read());
}

void Sobel_phase_strm::thread_z_V_45_2_fu_42915_p2() {
    z_V_45_2_fu_42915_p2 = (!z_V_45_2_v_cast_cast_fu_42908_p3.read().is_01() || !z_V_45_1_fu_42901_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_45_2_v_cast_cast_fu_42908_p3.read()) + sc_biguint<12>(z_V_45_1_fu_42901_p3.read()));
}

void Sobel_phase_strm::thread_z_V_45_2_v_cast_cast_fu_42908_p3() {
    z_V_45_2_v_cast_cast_fu_42908_p3 = (!ap_reg_ppstg_dneg_45_2_reg_61979_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_45_2_reg_61979_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_45_3_fu_42941_p3() {
    z_V_45_3_fu_42941_p3 = (!ap_reg_ppstg_dneg_45_3_reg_61984_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_45_3_reg_61984_pp0_iter3.read()[0].to_bool())? p_Val2_10_45_3_cast_fu_42931_p1.read(): p_Val2_16_45_3_fu_42935_p2.read());
}

void Sobel_phase_strm::thread_z_V_45_4_v_cast_cast_fu_52594_p3() {
    z_V_45_4_v_cast_cast_fu_52594_p3 = (!ap_reg_ppstg_dneg_45_4_reg_64393_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_45_4_reg_64393_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_45_5_v_cast_cast_fu_52601_p3() {
    z_V_45_5_v_cast_cast_fu_52601_p3 = (!ap_reg_ppstg_dneg_45_5_reg_64398_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_45_5_reg_64398_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_45_6_v_cast_cast_fu_52608_p3() {
    z_V_45_6_v_cast_cast_fu_52608_p3 = (!dneg_45_6_reg_66182.read()[0].is_01())? sc_lv<7>(): ((dneg_45_6_reg_66182.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_45_7_v_cast_cast_fu_52615_p3() {
    z_V_45_7_v_cast_cast_fu_52615_p3 = (!dneg_45_7_reg_66187.read()[0].is_01())? sc_lv<6>(): ((dneg_45_7_reg_66187.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_45_8_fu_52664_p2() {
    z_V_45_8_fu_52664_p2 = (!tmp904_fu_52639_p2.read().is_01() || !tmp1937_cast_fu_52660_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp904_fu_52639_p2.read()) + sc_bigint<13>(tmp1937_cast_fu_52660_p1.read()));
}

void Sobel_phase_strm::thread_z_V_45_8_v_cast_cast_cast_fu_52622_p3() {
    z_V_45_8_v_cast_cast_cast_fu_52622_p3 = (!dneg_45_8_reg_66192.read()[0].is_01())? sc_lv<6>(): ((dneg_45_8_reg_66192.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_46_1_fu_43054_p3() {
    z_V_46_1_fu_43054_p3 = (!ap_reg_ppstg_dneg_46_1_reg_59510_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_46_1_reg_59510_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_46_2_cast_fu_43074_p1() {
    z_V_46_2_cast_fu_43074_p1 = esl_zext<13,12>(z_V_46_2_fu_43068_p2.read());
}

void Sobel_phase_strm::thread_z_V_46_2_fu_43068_p2() {
    z_V_46_2_fu_43068_p2 = (!z_V_46_2_v_cast_cast_fu_43061_p3.read().is_01() || !z_V_46_1_fu_43054_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_46_2_v_cast_cast_fu_43061_p3.read()) + sc_biguint<12>(z_V_46_1_fu_43054_p3.read()));
}

void Sobel_phase_strm::thread_z_V_46_2_v_cast_cast_fu_43061_p3() {
    z_V_46_2_v_cast_cast_fu_43061_p3 = (!ap_reg_ppstg_dneg_46_2_reg_62013_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_46_2_reg_62013_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_46_3_fu_43094_p3() {
    z_V_46_3_fu_43094_p3 = (!ap_reg_ppstg_dneg_46_3_reg_62018_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_46_3_reg_62018_pp0_iter3.read()[0].to_bool())? p_Val2_10_46_3_cast_fu_43084_p1.read(): p_Val2_16_46_3_fu_43088_p2.read());
}

void Sobel_phase_strm::thread_z_V_46_4_v_cast_cast_fu_52721_p3() {
    z_V_46_4_v_cast_cast_fu_52721_p3 = (!ap_reg_ppstg_dneg_46_4_reg_64427_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_46_4_reg_64427_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_46_5_v_cast_cast_fu_52728_p3() {
    z_V_46_5_v_cast_cast_fu_52728_p3 = (!ap_reg_ppstg_dneg_46_5_reg_64432_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_46_5_reg_64432_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_46_6_v_cast_cast_fu_52735_p3() {
    z_V_46_6_v_cast_cast_fu_52735_p3 = (!dneg_46_6_reg_66202.read()[0].is_01())? sc_lv<7>(): ((dneg_46_6_reg_66202.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_46_7_v_cast_cast_fu_52742_p3() {
    z_V_46_7_v_cast_cast_fu_52742_p3 = (!dneg_46_7_reg_66207.read()[0].is_01())? sc_lv<6>(): ((dneg_46_7_reg_66207.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_46_8_fu_52791_p2() {
    z_V_46_8_fu_52791_p2 = (!tmp924_fu_52766_p2.read().is_01() || !tmp1941_cast_fu_52787_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp924_fu_52766_p2.read()) + sc_bigint<13>(tmp1941_cast_fu_52787_p1.read()));
}

void Sobel_phase_strm::thread_z_V_46_8_v_cast_cast_cast_fu_52749_p3() {
    z_V_46_8_v_cast_cast_cast_fu_52749_p3 = (!dneg_46_8_reg_66212.read()[0].is_01())? sc_lv<6>(): ((dneg_46_8_reg_66212.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_47_1_fu_43207_p3() {
    z_V_47_1_fu_43207_p3 = (!ap_reg_ppstg_dneg_47_1_reg_59548_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_47_1_reg_59548_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_47_2_cast_fu_43227_p1() {
    z_V_47_2_cast_fu_43227_p1 = esl_zext<13,12>(z_V_47_2_fu_43221_p2.read());
}

void Sobel_phase_strm::thread_z_V_47_2_fu_43221_p2() {
    z_V_47_2_fu_43221_p2 = (!z_V_47_2_v_cast_cast_fu_43214_p3.read().is_01() || !z_V_47_1_fu_43207_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_47_2_v_cast_cast_fu_43214_p3.read()) + sc_biguint<12>(z_V_47_1_fu_43207_p3.read()));
}

void Sobel_phase_strm::thread_z_V_47_2_v_cast_cast_fu_43214_p3() {
    z_V_47_2_v_cast_cast_fu_43214_p3 = (!ap_reg_ppstg_dneg_47_2_reg_62047_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_47_2_reg_62047_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_47_3_fu_43247_p3() {
    z_V_47_3_fu_43247_p3 = (!ap_reg_ppstg_dneg_47_3_reg_62052_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_47_3_reg_62052_pp0_iter3.read()[0].to_bool())? p_Val2_10_47_3_cast_fu_43237_p1.read(): p_Val2_16_47_3_fu_43241_p2.read());
}

void Sobel_phase_strm::thread_z_V_47_4_v_cast_cast_fu_52848_p3() {
    z_V_47_4_v_cast_cast_fu_52848_p3 = (!ap_reg_ppstg_dneg_47_4_reg_64461_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_47_4_reg_64461_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_47_5_v_cast_cast_fu_52855_p3() {
    z_V_47_5_v_cast_cast_fu_52855_p3 = (!ap_reg_ppstg_dneg_47_5_reg_64466_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_47_5_reg_64466_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_47_6_v_cast_cast_fu_52862_p3() {
    z_V_47_6_v_cast_cast_fu_52862_p3 = (!dneg_47_6_reg_66222.read()[0].is_01())? sc_lv<7>(): ((dneg_47_6_reg_66222.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_47_7_v_cast_cast_fu_52869_p3() {
    z_V_47_7_v_cast_cast_fu_52869_p3 = (!dneg_47_7_reg_66227.read()[0].is_01())? sc_lv<6>(): ((dneg_47_7_reg_66227.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_47_8_fu_52918_p2() {
    z_V_47_8_fu_52918_p2 = (!tmp944_fu_52893_p2.read().is_01() || !tmp1945_cast_fu_52914_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp944_fu_52893_p2.read()) + sc_bigint<13>(tmp1945_cast_fu_52914_p1.read()));
}

void Sobel_phase_strm::thread_z_V_47_8_v_cast_cast_cast_fu_52876_p3() {
    z_V_47_8_v_cast_cast_cast_fu_52876_p3 = (!dneg_47_8_reg_66232.read()[0].is_01())? sc_lv<6>(): ((dneg_47_8_reg_66232.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_48_1_fu_43360_p3() {
    z_V_48_1_fu_43360_p3 = (!ap_reg_ppstg_dneg_48_1_reg_59586_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_48_1_reg_59586_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_48_2_cast_fu_43380_p1() {
    z_V_48_2_cast_fu_43380_p1 = esl_zext<13,12>(z_V_48_2_fu_43374_p2.read());
}

void Sobel_phase_strm::thread_z_V_48_2_fu_43374_p2() {
    z_V_48_2_fu_43374_p2 = (!z_V_48_2_v_cast_cast_fu_43367_p3.read().is_01() || !z_V_48_1_fu_43360_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_48_2_v_cast_cast_fu_43367_p3.read()) + sc_biguint<12>(z_V_48_1_fu_43360_p3.read()));
}

void Sobel_phase_strm::thread_z_V_48_2_v_cast_cast_fu_43367_p3() {
    z_V_48_2_v_cast_cast_fu_43367_p3 = (!ap_reg_ppstg_dneg_48_2_reg_62081_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_48_2_reg_62081_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_48_3_fu_43400_p3() {
    z_V_48_3_fu_43400_p3 = (!ap_reg_ppstg_dneg_48_3_reg_62086_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_48_3_reg_62086_pp0_iter3.read()[0].to_bool())? p_Val2_10_48_3_cast_fu_43390_p1.read(): p_Val2_16_48_3_fu_43394_p2.read());
}

void Sobel_phase_strm::thread_z_V_48_4_v_cast_cast_fu_52975_p3() {
    z_V_48_4_v_cast_cast_fu_52975_p3 = (!ap_reg_ppstg_dneg_48_4_reg_64495_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_48_4_reg_64495_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_48_5_v_cast_cast_fu_52982_p3() {
    z_V_48_5_v_cast_cast_fu_52982_p3 = (!ap_reg_ppstg_dneg_48_5_reg_64500_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_48_5_reg_64500_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_48_6_v_cast_cast_fu_52989_p3() {
    z_V_48_6_v_cast_cast_fu_52989_p3 = (!dneg_48_6_reg_66242.read()[0].is_01())? sc_lv<7>(): ((dneg_48_6_reg_66242.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_48_7_v_cast_cast_fu_52996_p3() {
    z_V_48_7_v_cast_cast_fu_52996_p3 = (!dneg_48_7_reg_66247.read()[0].is_01())? sc_lv<6>(): ((dneg_48_7_reg_66247.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_48_8_fu_53045_p2() {
    z_V_48_8_fu_53045_p2 = (!tmp964_fu_53020_p2.read().is_01() || !tmp1949_cast_fu_53041_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp964_fu_53020_p2.read()) + sc_bigint<13>(tmp1949_cast_fu_53041_p1.read()));
}

void Sobel_phase_strm::thread_z_V_48_8_v_cast_cast_cast_fu_53003_p3() {
    z_V_48_8_v_cast_cast_cast_fu_53003_p3 = (!dneg_48_8_reg_66252.read()[0].is_01())? sc_lv<6>(): ((dneg_48_8_reg_66252.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_49_1_fu_43513_p3() {
    z_V_49_1_fu_43513_p3 = (!ap_reg_ppstg_dneg_49_1_reg_59624_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_49_1_reg_59624_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_49_2_cast_fu_43533_p1() {
    z_V_49_2_cast_fu_43533_p1 = esl_zext<13,12>(z_V_49_2_fu_43527_p2.read());
}

void Sobel_phase_strm::thread_z_V_49_2_fu_43527_p2() {
    z_V_49_2_fu_43527_p2 = (!z_V_49_2_v_cast_cast_fu_43520_p3.read().is_01() || !z_V_49_1_fu_43513_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_49_2_v_cast_cast_fu_43520_p3.read()) + sc_biguint<12>(z_V_49_1_fu_43513_p3.read()));
}

void Sobel_phase_strm::thread_z_V_49_2_v_cast_cast_fu_43520_p3() {
    z_V_49_2_v_cast_cast_fu_43520_p3 = (!ap_reg_ppstg_dneg_49_2_reg_62115_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_49_2_reg_62115_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_49_3_fu_43553_p3() {
    z_V_49_3_fu_43553_p3 = (!ap_reg_ppstg_dneg_49_3_reg_62120_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_49_3_reg_62120_pp0_iter3.read()[0].to_bool())? p_Val2_10_49_3_cast_fu_43543_p1.read(): p_Val2_16_49_3_fu_43547_p2.read());
}

void Sobel_phase_strm::thread_z_V_49_4_v_cast_cast_fu_53102_p3() {
    z_V_49_4_v_cast_cast_fu_53102_p3 = (!ap_reg_ppstg_dneg_49_4_reg_64529_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_49_4_reg_64529_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_49_5_v_cast_cast_fu_53109_p3() {
    z_V_49_5_v_cast_cast_fu_53109_p3 = (!ap_reg_ppstg_dneg_49_5_reg_64534_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_49_5_reg_64534_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_49_6_v_cast_cast_fu_53116_p3() {
    z_V_49_6_v_cast_cast_fu_53116_p3 = (!dneg_49_6_reg_66262.read()[0].is_01())? sc_lv<7>(): ((dneg_49_6_reg_66262.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_49_7_v_cast_cast_fu_53123_p3() {
    z_V_49_7_v_cast_cast_fu_53123_p3 = (!dneg_49_7_reg_66267.read()[0].is_01())? sc_lv<6>(): ((dneg_49_7_reg_66267.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_49_8_fu_53172_p2() {
    z_V_49_8_fu_53172_p2 = (!tmp984_fu_53147_p2.read().is_01() || !tmp1953_cast_fu_53168_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp984_fu_53147_p2.read()) + sc_bigint<13>(tmp1953_cast_fu_53168_p1.read()));
}

void Sobel_phase_strm::thread_z_V_49_8_v_cast_cast_cast_fu_53130_p3() {
    z_V_49_8_v_cast_cast_cast_fu_53130_p3 = (!dneg_49_8_reg_66272.read()[0].is_01())? sc_lv<6>(): ((dneg_49_8_reg_66272.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_4_1_fu_36628_p3() {
    z_V_4_1_fu_36628_p3 = (!ap_reg_ppstg_dneg_4_1_reg_57914_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_4_1_reg_57914_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_4_2_cast_fu_36648_p1() {
    z_V_4_2_cast_fu_36648_p1 = esl_zext<13,12>(z_V_4_2_fu_36642_p2.read());
}

void Sobel_phase_strm::thread_z_V_4_2_fu_36642_p2() {
    z_V_4_2_fu_36642_p2 = (!z_V_4_2_v_cast_cast_fu_36635_p3.read().is_01() || !z_V_4_1_fu_36628_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_4_2_v_cast_cast_fu_36635_p3.read()) + sc_biguint<12>(z_V_4_1_fu_36628_p3.read()));
}

void Sobel_phase_strm::thread_z_V_4_2_v_cast_cast_fu_36635_p3() {
    z_V_4_2_v_cast_cast_fu_36635_p3 = (!ap_reg_ppstg_dneg_4_2_reg_60585_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_4_2_reg_60585_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_4_3_fu_36668_p3() {
    z_V_4_3_fu_36668_p3 = (!ap_reg_ppstg_dneg_4_3_reg_60590_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_4_3_reg_60590_pp0_iter3.read()[0].to_bool())? p_Val2_10_4_3_cast_fu_36658_p1.read(): p_Val2_16_4_3_fu_36662_p2.read());
}

void Sobel_phase_strm::thread_z_V_4_4_v_cast_cast_fu_47387_p3() {
    z_V_4_4_v_cast_cast_fu_47387_p3 = (!ap_reg_ppstg_dneg_4_4_reg_62999_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_4_4_reg_62999_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_4_5_v_cast_cast_fu_47394_p3() {
    z_V_4_5_v_cast_cast_fu_47394_p3 = (!ap_reg_ppstg_dneg_4_5_reg_63004_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_4_5_reg_63004_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_4_6_v_cast_cast_fu_47401_p3() {
    z_V_4_6_v_cast_cast_fu_47401_p3 = (!dneg_4_6_reg_65362.read()[0].is_01())? sc_lv<7>(): ((dneg_4_6_reg_65362.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_4_7_v_cast_cast_fu_47408_p3() {
    z_V_4_7_v_cast_cast_fu_47408_p3 = (!dneg_4_7_reg_65367.read()[0].is_01())? sc_lv<6>(): ((dneg_4_7_reg_65367.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_4_8_fu_47457_p2() {
    z_V_4_8_fu_47457_p2 = (!tmp84_fu_47432_p2.read().is_01() || !tmp1773_cast_fu_47453_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp84_fu_47432_p2.read()) + sc_bigint<13>(tmp1773_cast_fu_47453_p1.read()));
}

void Sobel_phase_strm::thread_z_V_4_8_v_cast_cast_cast_fu_47415_p3() {
    z_V_4_8_v_cast_cast_cast_fu_47415_p3 = (!dneg_4_8_reg_65372.read()[0].is_01())? sc_lv<6>(): ((dneg_4_8_reg_65372.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_50_1_fu_43666_p3() {
    z_V_50_1_fu_43666_p3 = (!ap_reg_ppstg_dneg_50_1_reg_59662_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_50_1_reg_59662_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_50_2_cast_fu_43686_p1() {
    z_V_50_2_cast_fu_43686_p1 = esl_zext<13,12>(z_V_50_2_fu_43680_p2.read());
}

void Sobel_phase_strm::thread_z_V_50_2_fu_43680_p2() {
    z_V_50_2_fu_43680_p2 = (!z_V_50_2_v_cast_cast_fu_43673_p3.read().is_01() || !z_V_50_1_fu_43666_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_50_2_v_cast_cast_fu_43673_p3.read()) + sc_biguint<12>(z_V_50_1_fu_43666_p3.read()));
}

void Sobel_phase_strm::thread_z_V_50_2_v_cast_cast_fu_43673_p3() {
    z_V_50_2_v_cast_cast_fu_43673_p3 = (!ap_reg_ppstg_dneg_50_2_reg_62149_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_50_2_reg_62149_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_50_3_fu_43706_p3() {
    z_V_50_3_fu_43706_p3 = (!ap_reg_ppstg_dneg_50_3_reg_62154_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_50_3_reg_62154_pp0_iter3.read()[0].to_bool())? p_Val2_10_50_3_cast_fu_43696_p1.read(): p_Val2_16_50_3_fu_43700_p2.read());
}

void Sobel_phase_strm::thread_z_V_50_4_v_cast_cast_fu_53229_p3() {
    z_V_50_4_v_cast_cast_fu_53229_p3 = (!ap_reg_ppstg_dneg_50_4_reg_64563_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_50_4_reg_64563_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_50_5_v_cast_cast_fu_53236_p3() {
    z_V_50_5_v_cast_cast_fu_53236_p3 = (!ap_reg_ppstg_dneg_50_5_reg_64568_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_50_5_reg_64568_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_50_6_v_cast_cast_fu_53243_p3() {
    z_V_50_6_v_cast_cast_fu_53243_p3 = (!dneg_50_6_reg_66282.read()[0].is_01())? sc_lv<7>(): ((dneg_50_6_reg_66282.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_50_7_v_cast_cast_fu_53250_p3() {
    z_V_50_7_v_cast_cast_fu_53250_p3 = (!dneg_50_7_reg_66287.read()[0].is_01())? sc_lv<6>(): ((dneg_50_7_reg_66287.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_50_8_fu_53299_p2() {
    z_V_50_8_fu_53299_p2 = (!tmp1004_fu_53274_p2.read().is_01() || !tmp1957_cast_fu_53295_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1004_fu_53274_p2.read()) + sc_bigint<13>(tmp1957_cast_fu_53295_p1.read()));
}

void Sobel_phase_strm::thread_z_V_50_8_v_cast_cast_cast_fu_53257_p3() {
    z_V_50_8_v_cast_cast_cast_fu_53257_p3 = (!dneg_50_8_reg_66292.read()[0].is_01())? sc_lv<6>(): ((dneg_50_8_reg_66292.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_51_1_fu_43819_p3() {
    z_V_51_1_fu_43819_p3 = (!ap_reg_ppstg_dneg_51_1_reg_59700_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_51_1_reg_59700_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_51_2_cast_fu_43839_p1() {
    z_V_51_2_cast_fu_43839_p1 = esl_zext<13,12>(z_V_51_2_fu_43833_p2.read());
}

void Sobel_phase_strm::thread_z_V_51_2_fu_43833_p2() {
    z_V_51_2_fu_43833_p2 = (!z_V_51_2_v_cast_cast_fu_43826_p3.read().is_01() || !z_V_51_1_fu_43819_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_51_2_v_cast_cast_fu_43826_p3.read()) + sc_biguint<12>(z_V_51_1_fu_43819_p3.read()));
}

void Sobel_phase_strm::thread_z_V_51_2_v_cast_cast_fu_43826_p3() {
    z_V_51_2_v_cast_cast_fu_43826_p3 = (!ap_reg_ppstg_dneg_51_2_reg_62183_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_51_2_reg_62183_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_51_3_fu_43859_p3() {
    z_V_51_3_fu_43859_p3 = (!ap_reg_ppstg_dneg_51_3_reg_62188_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_51_3_reg_62188_pp0_iter3.read()[0].to_bool())? p_Val2_10_51_3_cast_fu_43849_p1.read(): p_Val2_16_51_3_fu_43853_p2.read());
}

void Sobel_phase_strm::thread_z_V_51_4_v_cast_cast_fu_53356_p3() {
    z_V_51_4_v_cast_cast_fu_53356_p3 = (!ap_reg_ppstg_dneg_51_4_reg_64597_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_51_4_reg_64597_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_51_5_v_cast_cast_fu_53363_p3() {
    z_V_51_5_v_cast_cast_fu_53363_p3 = (!ap_reg_ppstg_dneg_51_5_reg_64602_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_51_5_reg_64602_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_51_6_v_cast_cast_fu_53370_p3() {
    z_V_51_6_v_cast_cast_fu_53370_p3 = (!dneg_51_6_reg_66302.read()[0].is_01())? sc_lv<7>(): ((dneg_51_6_reg_66302.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_51_7_v_cast_cast_fu_53377_p3() {
    z_V_51_7_v_cast_cast_fu_53377_p3 = (!dneg_51_7_reg_66307.read()[0].is_01())? sc_lv<6>(): ((dneg_51_7_reg_66307.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_51_8_fu_53426_p2() {
    z_V_51_8_fu_53426_p2 = (!tmp1024_fu_53401_p2.read().is_01() || !tmp1961_cast_fu_53422_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1024_fu_53401_p2.read()) + sc_bigint<13>(tmp1961_cast_fu_53422_p1.read()));
}

void Sobel_phase_strm::thread_z_V_51_8_v_cast_cast_cast_fu_53384_p3() {
    z_V_51_8_v_cast_cast_cast_fu_53384_p3 = (!dneg_51_8_reg_66312.read()[0].is_01())? sc_lv<6>(): ((dneg_51_8_reg_66312.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_52_1_fu_43972_p3() {
    z_V_52_1_fu_43972_p3 = (!ap_reg_ppstg_dneg_52_1_reg_59738_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_52_1_reg_59738_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_52_2_cast_fu_43992_p1() {
    z_V_52_2_cast_fu_43992_p1 = esl_zext<13,12>(z_V_52_2_fu_43986_p2.read());
}

void Sobel_phase_strm::thread_z_V_52_2_fu_43986_p2() {
    z_V_52_2_fu_43986_p2 = (!z_V_52_2_v_cast_cast_fu_43979_p3.read().is_01() || !z_V_52_1_fu_43972_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_52_2_v_cast_cast_fu_43979_p3.read()) + sc_biguint<12>(z_V_52_1_fu_43972_p3.read()));
}

void Sobel_phase_strm::thread_z_V_52_2_v_cast_cast_fu_43979_p3() {
    z_V_52_2_v_cast_cast_fu_43979_p3 = (!ap_reg_ppstg_dneg_52_2_reg_62217_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_52_2_reg_62217_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_52_3_fu_44012_p3() {
    z_V_52_3_fu_44012_p3 = (!ap_reg_ppstg_dneg_52_3_reg_62222_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_52_3_reg_62222_pp0_iter3.read()[0].to_bool())? p_Val2_10_52_3_cast_fu_44002_p1.read(): p_Val2_16_52_3_fu_44006_p2.read());
}

void Sobel_phase_strm::thread_z_V_52_4_v_cast_cast_fu_53483_p3() {
    z_V_52_4_v_cast_cast_fu_53483_p3 = (!ap_reg_ppstg_dneg_52_4_reg_64631_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_52_4_reg_64631_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_52_5_v_cast_cast_fu_53490_p3() {
    z_V_52_5_v_cast_cast_fu_53490_p3 = (!ap_reg_ppstg_dneg_52_5_reg_64636_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_52_5_reg_64636_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_52_6_v_cast_cast_fu_53497_p3() {
    z_V_52_6_v_cast_cast_fu_53497_p3 = (!dneg_52_6_reg_66322.read()[0].is_01())? sc_lv<7>(): ((dneg_52_6_reg_66322.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_52_7_v_cast_cast_fu_53504_p3() {
    z_V_52_7_v_cast_cast_fu_53504_p3 = (!dneg_52_7_reg_66327.read()[0].is_01())? sc_lv<6>(): ((dneg_52_7_reg_66327.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_52_8_fu_53553_p2() {
    z_V_52_8_fu_53553_p2 = (!tmp1044_fu_53528_p2.read().is_01() || !tmp1965_cast_fu_53549_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1044_fu_53528_p2.read()) + sc_bigint<13>(tmp1965_cast_fu_53549_p1.read()));
}

void Sobel_phase_strm::thread_z_V_52_8_v_cast_cast_cast_fu_53511_p3() {
    z_V_52_8_v_cast_cast_cast_fu_53511_p3 = (!dneg_52_8_reg_66332.read()[0].is_01())? sc_lv<6>(): ((dneg_52_8_reg_66332.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_53_1_fu_44125_p3() {
    z_V_53_1_fu_44125_p3 = (!ap_reg_ppstg_dneg_53_1_reg_59776_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_53_1_reg_59776_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_53_2_cast_fu_44145_p1() {
    z_V_53_2_cast_fu_44145_p1 = esl_zext<13,12>(z_V_53_2_fu_44139_p2.read());
}

void Sobel_phase_strm::thread_z_V_53_2_fu_44139_p2() {
    z_V_53_2_fu_44139_p2 = (!z_V_53_2_v_cast_cast_fu_44132_p3.read().is_01() || !z_V_53_1_fu_44125_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_53_2_v_cast_cast_fu_44132_p3.read()) + sc_biguint<12>(z_V_53_1_fu_44125_p3.read()));
}

void Sobel_phase_strm::thread_z_V_53_2_v_cast_cast_fu_44132_p3() {
    z_V_53_2_v_cast_cast_fu_44132_p3 = (!ap_reg_ppstg_dneg_53_2_reg_62251_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_53_2_reg_62251_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_53_3_fu_44165_p3() {
    z_V_53_3_fu_44165_p3 = (!ap_reg_ppstg_dneg_53_3_reg_62256_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_53_3_reg_62256_pp0_iter3.read()[0].to_bool())? p_Val2_10_53_3_cast_fu_44155_p1.read(): p_Val2_16_53_3_fu_44159_p2.read());
}

void Sobel_phase_strm::thread_z_V_53_4_v_cast_cast_fu_53610_p3() {
    z_V_53_4_v_cast_cast_fu_53610_p3 = (!ap_reg_ppstg_dneg_53_4_reg_64665_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_53_4_reg_64665_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_53_5_v_cast_cast_fu_53617_p3() {
    z_V_53_5_v_cast_cast_fu_53617_p3 = (!ap_reg_ppstg_dneg_53_5_reg_64670_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_53_5_reg_64670_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_53_6_v_cast_cast_fu_53624_p3() {
    z_V_53_6_v_cast_cast_fu_53624_p3 = (!dneg_53_6_reg_66342.read()[0].is_01())? sc_lv<7>(): ((dneg_53_6_reg_66342.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_53_7_v_cast_cast_fu_53631_p3() {
    z_V_53_7_v_cast_cast_fu_53631_p3 = (!dneg_53_7_reg_66347.read()[0].is_01())? sc_lv<6>(): ((dneg_53_7_reg_66347.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_53_8_fu_53680_p2() {
    z_V_53_8_fu_53680_p2 = (!tmp1064_fu_53655_p2.read().is_01() || !tmp1969_cast_fu_53676_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1064_fu_53655_p2.read()) + sc_bigint<13>(tmp1969_cast_fu_53676_p1.read()));
}

void Sobel_phase_strm::thread_z_V_53_8_v_cast_cast_cast_fu_53638_p3() {
    z_V_53_8_v_cast_cast_cast_fu_53638_p3 = (!dneg_53_8_reg_66352.read()[0].is_01())? sc_lv<6>(): ((dneg_53_8_reg_66352.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_54_1_fu_44278_p3() {
    z_V_54_1_fu_44278_p3 = (!ap_reg_ppstg_dneg_54_1_reg_59814_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_54_1_reg_59814_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_54_2_cast_fu_44298_p1() {
    z_V_54_2_cast_fu_44298_p1 = esl_zext<13,12>(z_V_54_2_fu_44292_p2.read());
}

void Sobel_phase_strm::thread_z_V_54_2_fu_44292_p2() {
    z_V_54_2_fu_44292_p2 = (!z_V_54_2_v_cast_cast_fu_44285_p3.read().is_01() || !z_V_54_1_fu_44278_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_54_2_v_cast_cast_fu_44285_p3.read()) + sc_biguint<12>(z_V_54_1_fu_44278_p3.read()));
}

void Sobel_phase_strm::thread_z_V_54_2_v_cast_cast_fu_44285_p3() {
    z_V_54_2_v_cast_cast_fu_44285_p3 = (!ap_reg_ppstg_dneg_54_2_reg_62285_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_54_2_reg_62285_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_54_3_fu_44318_p3() {
    z_V_54_3_fu_44318_p3 = (!ap_reg_ppstg_dneg_54_3_reg_62290_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_54_3_reg_62290_pp0_iter3.read()[0].to_bool())? p_Val2_10_54_3_cast_fu_44308_p1.read(): p_Val2_16_54_3_fu_44312_p2.read());
}

void Sobel_phase_strm::thread_z_V_54_4_v_cast_cast_fu_53737_p3() {
    z_V_54_4_v_cast_cast_fu_53737_p3 = (!ap_reg_ppstg_dneg_54_4_reg_64699_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_54_4_reg_64699_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_54_5_v_cast_cast_fu_53744_p3() {
    z_V_54_5_v_cast_cast_fu_53744_p3 = (!ap_reg_ppstg_dneg_54_5_reg_64704_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_54_5_reg_64704_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_54_6_v_cast_cast_fu_53751_p3() {
    z_V_54_6_v_cast_cast_fu_53751_p3 = (!dneg_54_6_reg_66362.read()[0].is_01())? sc_lv<7>(): ((dneg_54_6_reg_66362.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_54_7_v_cast_cast_fu_53758_p3() {
    z_V_54_7_v_cast_cast_fu_53758_p3 = (!dneg_54_7_reg_66367.read()[0].is_01())? sc_lv<6>(): ((dneg_54_7_reg_66367.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_54_8_fu_53807_p2() {
    z_V_54_8_fu_53807_p2 = (!tmp1084_fu_53782_p2.read().is_01() || !tmp1973_cast_fu_53803_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1084_fu_53782_p2.read()) + sc_bigint<13>(tmp1973_cast_fu_53803_p1.read()));
}

void Sobel_phase_strm::thread_z_V_54_8_v_cast_cast_cast_fu_53765_p3() {
    z_V_54_8_v_cast_cast_cast_fu_53765_p3 = (!dneg_54_8_reg_66372.read()[0].is_01())? sc_lv<6>(): ((dneg_54_8_reg_66372.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_55_1_fu_44431_p3() {
    z_V_55_1_fu_44431_p3 = (!ap_reg_ppstg_dneg_55_1_reg_59852_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_55_1_reg_59852_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_55_2_cast_fu_44451_p1() {
    z_V_55_2_cast_fu_44451_p1 = esl_zext<13,12>(z_V_55_2_fu_44445_p2.read());
}

void Sobel_phase_strm::thread_z_V_55_2_fu_44445_p2() {
    z_V_55_2_fu_44445_p2 = (!z_V_55_2_v_cast_cast_fu_44438_p3.read().is_01() || !z_V_55_1_fu_44431_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_55_2_v_cast_cast_fu_44438_p3.read()) + sc_biguint<12>(z_V_55_1_fu_44431_p3.read()));
}

void Sobel_phase_strm::thread_z_V_55_2_v_cast_cast_fu_44438_p3() {
    z_V_55_2_v_cast_cast_fu_44438_p3 = (!ap_reg_ppstg_dneg_55_2_reg_62319_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_55_2_reg_62319_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_55_3_fu_44471_p3() {
    z_V_55_3_fu_44471_p3 = (!ap_reg_ppstg_dneg_55_3_reg_62324_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_55_3_reg_62324_pp0_iter3.read()[0].to_bool())? p_Val2_10_55_3_cast_fu_44461_p1.read(): p_Val2_16_55_3_fu_44465_p2.read());
}

void Sobel_phase_strm::thread_z_V_55_4_v_cast_cast_fu_53864_p3() {
    z_V_55_4_v_cast_cast_fu_53864_p3 = (!ap_reg_ppstg_dneg_55_4_reg_64733_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_55_4_reg_64733_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_55_5_v_cast_cast_fu_53871_p3() {
    z_V_55_5_v_cast_cast_fu_53871_p3 = (!ap_reg_ppstg_dneg_55_5_reg_64738_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_55_5_reg_64738_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_55_6_v_cast_cast_fu_53878_p3() {
    z_V_55_6_v_cast_cast_fu_53878_p3 = (!dneg_55_6_reg_66382.read()[0].is_01())? sc_lv<7>(): ((dneg_55_6_reg_66382.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_55_7_v_cast_cast_fu_53885_p3() {
    z_V_55_7_v_cast_cast_fu_53885_p3 = (!dneg_55_7_reg_66387.read()[0].is_01())? sc_lv<6>(): ((dneg_55_7_reg_66387.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_55_8_fu_53934_p2() {
    z_V_55_8_fu_53934_p2 = (!tmp1104_fu_53909_p2.read().is_01() || !tmp1977_cast_fu_53930_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1104_fu_53909_p2.read()) + sc_bigint<13>(tmp1977_cast_fu_53930_p1.read()));
}

void Sobel_phase_strm::thread_z_V_55_8_v_cast_cast_cast_fu_53892_p3() {
    z_V_55_8_v_cast_cast_cast_fu_53892_p3 = (!dneg_55_8_reg_66392.read()[0].is_01())? sc_lv<6>(): ((dneg_55_8_reg_66392.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_56_1_fu_44584_p3() {
    z_V_56_1_fu_44584_p3 = (!ap_reg_ppstg_dneg_56_1_reg_59890_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_56_1_reg_59890_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_56_2_cast_fu_44604_p1() {
    z_V_56_2_cast_fu_44604_p1 = esl_zext<13,12>(z_V_56_2_fu_44598_p2.read());
}

void Sobel_phase_strm::thread_z_V_56_2_fu_44598_p2() {
    z_V_56_2_fu_44598_p2 = (!z_V_56_2_v_cast_cast_fu_44591_p3.read().is_01() || !z_V_56_1_fu_44584_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_56_2_v_cast_cast_fu_44591_p3.read()) + sc_biguint<12>(z_V_56_1_fu_44584_p3.read()));
}

void Sobel_phase_strm::thread_z_V_56_2_v_cast_cast_fu_44591_p3() {
    z_V_56_2_v_cast_cast_fu_44591_p3 = (!ap_reg_ppstg_dneg_56_2_reg_62353_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_56_2_reg_62353_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_56_3_fu_44624_p3() {
    z_V_56_3_fu_44624_p3 = (!ap_reg_ppstg_dneg_56_3_reg_62358_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_56_3_reg_62358_pp0_iter3.read()[0].to_bool())? p_Val2_10_56_3_cast_fu_44614_p1.read(): p_Val2_16_56_3_fu_44618_p2.read());
}

void Sobel_phase_strm::thread_z_V_56_4_v_cast_cast_fu_53991_p3() {
    z_V_56_4_v_cast_cast_fu_53991_p3 = (!ap_reg_ppstg_dneg_56_4_reg_64767_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_56_4_reg_64767_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_56_5_v_cast_cast_fu_53998_p3() {
    z_V_56_5_v_cast_cast_fu_53998_p3 = (!ap_reg_ppstg_dneg_56_5_reg_64772_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_56_5_reg_64772_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_56_6_v_cast_cast_fu_54005_p3() {
    z_V_56_6_v_cast_cast_fu_54005_p3 = (!dneg_56_6_reg_66402.read()[0].is_01())? sc_lv<7>(): ((dneg_56_6_reg_66402.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_56_7_v_cast_cast_fu_54012_p3() {
    z_V_56_7_v_cast_cast_fu_54012_p3 = (!dneg_56_7_reg_66407.read()[0].is_01())? sc_lv<6>(): ((dneg_56_7_reg_66407.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_56_8_fu_54061_p2() {
    z_V_56_8_fu_54061_p2 = (!tmp1124_fu_54036_p2.read().is_01() || !tmp1981_cast_fu_54057_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1124_fu_54036_p2.read()) + sc_bigint<13>(tmp1981_cast_fu_54057_p1.read()));
}

void Sobel_phase_strm::thread_z_V_56_8_v_cast_cast_cast_fu_54019_p3() {
    z_V_56_8_v_cast_cast_cast_fu_54019_p3 = (!dneg_56_8_reg_66412.read()[0].is_01())? sc_lv<6>(): ((dneg_56_8_reg_66412.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_57_1_fu_44737_p3() {
    z_V_57_1_fu_44737_p3 = (!ap_reg_ppstg_dneg_57_1_reg_59928_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_57_1_reg_59928_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_57_2_cast_fu_44757_p1() {
    z_V_57_2_cast_fu_44757_p1 = esl_zext<13,12>(z_V_57_2_fu_44751_p2.read());
}

void Sobel_phase_strm::thread_z_V_57_2_fu_44751_p2() {
    z_V_57_2_fu_44751_p2 = (!z_V_57_2_v_cast_cast_fu_44744_p3.read().is_01() || !z_V_57_1_fu_44737_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_57_2_v_cast_cast_fu_44744_p3.read()) + sc_biguint<12>(z_V_57_1_fu_44737_p3.read()));
}

void Sobel_phase_strm::thread_z_V_57_2_v_cast_cast_fu_44744_p3() {
    z_V_57_2_v_cast_cast_fu_44744_p3 = (!ap_reg_ppstg_dneg_57_2_reg_62387_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_57_2_reg_62387_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_57_3_fu_44777_p3() {
    z_V_57_3_fu_44777_p3 = (!ap_reg_ppstg_dneg_57_3_reg_62392_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_57_3_reg_62392_pp0_iter3.read()[0].to_bool())? p_Val2_10_57_3_cast_fu_44767_p1.read(): p_Val2_16_57_3_fu_44771_p2.read());
}

void Sobel_phase_strm::thread_z_V_57_4_v_cast_cast_fu_54118_p3() {
    z_V_57_4_v_cast_cast_fu_54118_p3 = (!ap_reg_ppstg_dneg_57_4_reg_64801_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_57_4_reg_64801_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_57_5_v_cast_cast_fu_54125_p3() {
    z_V_57_5_v_cast_cast_fu_54125_p3 = (!ap_reg_ppstg_dneg_57_5_reg_64806_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_57_5_reg_64806_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_57_6_v_cast_cast_fu_54132_p3() {
    z_V_57_6_v_cast_cast_fu_54132_p3 = (!dneg_57_6_reg_66422.read()[0].is_01())? sc_lv<7>(): ((dneg_57_6_reg_66422.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_57_7_v_cast_cast_fu_54139_p3() {
    z_V_57_7_v_cast_cast_fu_54139_p3 = (!dneg_57_7_reg_66427.read()[0].is_01())? sc_lv<6>(): ((dneg_57_7_reg_66427.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_57_8_fu_54188_p2() {
    z_V_57_8_fu_54188_p2 = (!tmp1144_fu_54163_p2.read().is_01() || !tmp1985_cast_fu_54184_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1144_fu_54163_p2.read()) + sc_bigint<13>(tmp1985_cast_fu_54184_p1.read()));
}

void Sobel_phase_strm::thread_z_V_57_8_v_cast_cast_cast_fu_54146_p3() {
    z_V_57_8_v_cast_cast_cast_fu_54146_p3 = (!dneg_57_8_reg_66432.read()[0].is_01())? sc_lv<6>(): ((dneg_57_8_reg_66432.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_58_1_fu_44890_p3() {
    z_V_58_1_fu_44890_p3 = (!ap_reg_ppstg_dneg_58_1_reg_59966_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_58_1_reg_59966_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_58_2_cast_fu_44910_p1() {
    z_V_58_2_cast_fu_44910_p1 = esl_zext<13,12>(z_V_58_2_fu_44904_p2.read());
}

void Sobel_phase_strm::thread_z_V_58_2_fu_44904_p2() {
    z_V_58_2_fu_44904_p2 = (!z_V_58_2_v_cast_cast_fu_44897_p3.read().is_01() || !z_V_58_1_fu_44890_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_58_2_v_cast_cast_fu_44897_p3.read()) + sc_biguint<12>(z_V_58_1_fu_44890_p3.read()));
}

void Sobel_phase_strm::thread_z_V_58_2_v_cast_cast_fu_44897_p3() {
    z_V_58_2_v_cast_cast_fu_44897_p3 = (!ap_reg_ppstg_dneg_58_2_reg_62421_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_58_2_reg_62421_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_58_3_fu_44930_p3() {
    z_V_58_3_fu_44930_p3 = (!ap_reg_ppstg_dneg_58_3_reg_62426_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_58_3_reg_62426_pp0_iter3.read()[0].to_bool())? p_Val2_10_58_3_cast_fu_44920_p1.read(): p_Val2_16_58_3_fu_44924_p2.read());
}

void Sobel_phase_strm::thread_z_V_58_4_v_cast_cast_fu_54245_p3() {
    z_V_58_4_v_cast_cast_fu_54245_p3 = (!ap_reg_ppstg_dneg_58_4_reg_64835_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_58_4_reg_64835_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_58_5_v_cast_cast_fu_54252_p3() {
    z_V_58_5_v_cast_cast_fu_54252_p3 = (!ap_reg_ppstg_dneg_58_5_reg_64840_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_58_5_reg_64840_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_58_6_v_cast_cast_fu_54259_p3() {
    z_V_58_6_v_cast_cast_fu_54259_p3 = (!dneg_58_6_reg_66442.read()[0].is_01())? sc_lv<7>(): ((dneg_58_6_reg_66442.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_58_7_v_cast_cast_fu_54266_p3() {
    z_V_58_7_v_cast_cast_fu_54266_p3 = (!dneg_58_7_reg_66447.read()[0].is_01())? sc_lv<6>(): ((dneg_58_7_reg_66447.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_58_8_fu_54315_p2() {
    z_V_58_8_fu_54315_p2 = (!tmp1164_fu_54290_p2.read().is_01() || !tmp1989_cast_fu_54311_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1164_fu_54290_p2.read()) + sc_bigint<13>(tmp1989_cast_fu_54311_p1.read()));
}

void Sobel_phase_strm::thread_z_V_58_8_v_cast_cast_cast_fu_54273_p3() {
    z_V_58_8_v_cast_cast_cast_fu_54273_p3 = (!dneg_58_8_reg_66452.read()[0].is_01())? sc_lv<6>(): ((dneg_58_8_reg_66452.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_59_1_fu_45043_p3() {
    z_V_59_1_fu_45043_p3 = (!ap_reg_ppstg_dneg_59_1_reg_60004_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_59_1_reg_60004_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_59_2_cast_fu_45063_p1() {
    z_V_59_2_cast_fu_45063_p1 = esl_zext<13,12>(z_V_59_2_fu_45057_p2.read());
}

void Sobel_phase_strm::thread_z_V_59_2_fu_45057_p2() {
    z_V_59_2_fu_45057_p2 = (!z_V_59_2_v_cast_cast_fu_45050_p3.read().is_01() || !z_V_59_1_fu_45043_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_59_2_v_cast_cast_fu_45050_p3.read()) + sc_biguint<12>(z_V_59_1_fu_45043_p3.read()));
}

void Sobel_phase_strm::thread_z_V_59_2_v_cast_cast_fu_45050_p3() {
    z_V_59_2_v_cast_cast_fu_45050_p3 = (!ap_reg_ppstg_dneg_59_2_reg_62455_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_59_2_reg_62455_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_59_3_fu_45083_p3() {
    z_V_59_3_fu_45083_p3 = (!ap_reg_ppstg_dneg_59_3_reg_62460_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_59_3_reg_62460_pp0_iter3.read()[0].to_bool())? p_Val2_10_59_3_cast_fu_45073_p1.read(): p_Val2_16_59_3_fu_45077_p2.read());
}

void Sobel_phase_strm::thread_z_V_59_4_v_cast_cast_fu_54372_p3() {
    z_V_59_4_v_cast_cast_fu_54372_p3 = (!ap_reg_ppstg_dneg_59_4_reg_64869_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_59_4_reg_64869_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_59_5_v_cast_cast_fu_54379_p3() {
    z_V_59_5_v_cast_cast_fu_54379_p3 = (!ap_reg_ppstg_dneg_59_5_reg_64874_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_59_5_reg_64874_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_59_6_v_cast_cast_fu_54386_p3() {
    z_V_59_6_v_cast_cast_fu_54386_p3 = (!dneg_59_6_reg_66462.read()[0].is_01())? sc_lv<7>(): ((dneg_59_6_reg_66462.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_59_7_v_cast_cast_fu_54393_p3() {
    z_V_59_7_v_cast_cast_fu_54393_p3 = (!dneg_59_7_reg_66467.read()[0].is_01())? sc_lv<6>(): ((dneg_59_7_reg_66467.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_59_8_fu_54442_p2() {
    z_V_59_8_fu_54442_p2 = (!tmp1184_fu_54417_p2.read().is_01() || !tmp1993_cast_fu_54438_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1184_fu_54417_p2.read()) + sc_bigint<13>(tmp1993_cast_fu_54438_p1.read()));
}

void Sobel_phase_strm::thread_z_V_59_8_v_cast_cast_cast_fu_54400_p3() {
    z_V_59_8_v_cast_cast_cast_fu_54400_p3 = (!dneg_59_8_reg_66472.read()[0].is_01())? sc_lv<6>(): ((dneg_59_8_reg_66472.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_5_1_fu_36781_p3() {
    z_V_5_1_fu_36781_p3 = (!ap_reg_ppstg_dneg_5_1_reg_57952_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_5_1_reg_57952_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_5_2_cast_fu_36801_p1() {
    z_V_5_2_cast_fu_36801_p1 = esl_zext<13,12>(z_V_5_2_fu_36795_p2.read());
}

void Sobel_phase_strm::thread_z_V_5_2_fu_36795_p2() {
    z_V_5_2_fu_36795_p2 = (!z_V_5_2_v_cast_cast_fu_36788_p3.read().is_01() || !z_V_5_1_fu_36781_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_5_2_v_cast_cast_fu_36788_p3.read()) + sc_biguint<12>(z_V_5_1_fu_36781_p3.read()));
}

void Sobel_phase_strm::thread_z_V_5_2_v_cast_cast_fu_36788_p3() {
    z_V_5_2_v_cast_cast_fu_36788_p3 = (!ap_reg_ppstg_dneg_5_2_reg_60619_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_5_2_reg_60619_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_5_3_fu_36821_p3() {
    z_V_5_3_fu_36821_p3 = (!ap_reg_ppstg_dneg_5_3_reg_60624_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_5_3_reg_60624_pp0_iter3.read()[0].to_bool())? p_Val2_10_5_3_cast_fu_36811_p1.read(): p_Val2_16_5_3_fu_36815_p2.read());
}

void Sobel_phase_strm::thread_z_V_5_4_v_cast_cast_fu_47514_p3() {
    z_V_5_4_v_cast_cast_fu_47514_p3 = (!ap_reg_ppstg_dneg_5_4_reg_63033_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_5_4_reg_63033_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_5_5_v_cast_cast_fu_47521_p3() {
    z_V_5_5_v_cast_cast_fu_47521_p3 = (!ap_reg_ppstg_dneg_5_5_reg_63038_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_5_5_reg_63038_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_5_6_v_cast_cast_fu_47528_p3() {
    z_V_5_6_v_cast_cast_fu_47528_p3 = (!dneg_5_6_reg_65382.read()[0].is_01())? sc_lv<7>(): ((dneg_5_6_reg_65382.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_5_7_v_cast_cast_fu_47535_p3() {
    z_V_5_7_v_cast_cast_fu_47535_p3 = (!dneg_5_7_reg_65387.read()[0].is_01())? sc_lv<6>(): ((dneg_5_7_reg_65387.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_5_8_fu_47584_p2() {
    z_V_5_8_fu_47584_p2 = (!tmp104_fu_47559_p2.read().is_01() || !tmp1777_cast_fu_47580_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp104_fu_47559_p2.read()) + sc_bigint<13>(tmp1777_cast_fu_47580_p1.read()));
}

void Sobel_phase_strm::thread_z_V_5_8_v_cast_cast_cast_fu_47542_p3() {
    z_V_5_8_v_cast_cast_cast_fu_47542_p3 = (!dneg_5_8_reg_65392.read()[0].is_01())? sc_lv<6>(): ((dneg_5_8_reg_65392.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_60_1_fu_45196_p3() {
    z_V_60_1_fu_45196_p3 = (!ap_reg_ppstg_dneg_60_1_reg_60042_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_60_1_reg_60042_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_60_2_cast_fu_45216_p1() {
    z_V_60_2_cast_fu_45216_p1 = esl_zext<13,12>(z_V_60_2_fu_45210_p2.read());
}

void Sobel_phase_strm::thread_z_V_60_2_fu_45210_p2() {
    z_V_60_2_fu_45210_p2 = (!z_V_60_2_v_cast_cast_fu_45203_p3.read().is_01() || !z_V_60_1_fu_45196_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_60_2_v_cast_cast_fu_45203_p3.read()) + sc_biguint<12>(z_V_60_1_fu_45196_p3.read()));
}

void Sobel_phase_strm::thread_z_V_60_2_v_cast_cast_fu_45203_p3() {
    z_V_60_2_v_cast_cast_fu_45203_p3 = (!ap_reg_ppstg_dneg_60_2_reg_62489_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_60_2_reg_62489_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_60_3_fu_45236_p3() {
    z_V_60_3_fu_45236_p3 = (!ap_reg_ppstg_dneg_60_3_reg_62494_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_60_3_reg_62494_pp0_iter3.read()[0].to_bool())? p_Val2_10_60_3_cast_fu_45226_p1.read(): p_Val2_16_60_3_fu_45230_p2.read());
}

void Sobel_phase_strm::thread_z_V_60_4_v_cast_cast_fu_54499_p3() {
    z_V_60_4_v_cast_cast_fu_54499_p3 = (!ap_reg_ppstg_dneg_60_4_reg_64903_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_60_4_reg_64903_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_60_5_v_cast_cast_fu_54506_p3() {
    z_V_60_5_v_cast_cast_fu_54506_p3 = (!ap_reg_ppstg_dneg_60_5_reg_64908_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_60_5_reg_64908_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_60_6_v_cast_cast_fu_54513_p3() {
    z_V_60_6_v_cast_cast_fu_54513_p3 = (!dneg_60_6_reg_66482.read()[0].is_01())? sc_lv<7>(): ((dneg_60_6_reg_66482.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_60_7_v_cast_cast_fu_54520_p3() {
    z_V_60_7_v_cast_cast_fu_54520_p3 = (!dneg_60_7_reg_66487.read()[0].is_01())? sc_lv<6>(): ((dneg_60_7_reg_66487.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_60_8_fu_54569_p2() {
    z_V_60_8_fu_54569_p2 = (!tmp1204_fu_54544_p2.read().is_01() || !tmp1997_cast_fu_54565_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1204_fu_54544_p2.read()) + sc_bigint<13>(tmp1997_cast_fu_54565_p1.read()));
}

void Sobel_phase_strm::thread_z_V_60_8_v_cast_cast_cast_fu_54527_p3() {
    z_V_60_8_v_cast_cast_cast_fu_54527_p3 = (!dneg_60_8_reg_66492.read()[0].is_01())? sc_lv<6>(): ((dneg_60_8_reg_66492.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_61_1_fu_45349_p3() {
    z_V_61_1_fu_45349_p3 = (!ap_reg_ppstg_dneg_61_1_reg_60080_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_61_1_reg_60080_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_61_2_cast_fu_45369_p1() {
    z_V_61_2_cast_fu_45369_p1 = esl_zext<13,12>(z_V_61_2_fu_45363_p2.read());
}

void Sobel_phase_strm::thread_z_V_61_2_fu_45363_p2() {
    z_V_61_2_fu_45363_p2 = (!z_V_61_2_v_cast_cast_fu_45356_p3.read().is_01() || !z_V_61_1_fu_45349_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_61_2_v_cast_cast_fu_45356_p3.read()) + sc_biguint<12>(z_V_61_1_fu_45349_p3.read()));
}

void Sobel_phase_strm::thread_z_V_61_2_v_cast_cast_fu_45356_p3() {
    z_V_61_2_v_cast_cast_fu_45356_p3 = (!ap_reg_ppstg_dneg_61_2_reg_62523_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_61_2_reg_62523_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_61_3_fu_45389_p3() {
    z_V_61_3_fu_45389_p3 = (!ap_reg_ppstg_dneg_61_3_reg_62528_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_61_3_reg_62528_pp0_iter3.read()[0].to_bool())? p_Val2_10_61_3_cast_fu_45379_p1.read(): p_Val2_16_61_3_fu_45383_p2.read());
}

void Sobel_phase_strm::thread_z_V_61_4_v_cast_cast_fu_54626_p3() {
    z_V_61_4_v_cast_cast_fu_54626_p3 = (!ap_reg_ppstg_dneg_61_4_reg_64937_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_61_4_reg_64937_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_61_5_v_cast_cast_fu_54633_p3() {
    z_V_61_5_v_cast_cast_fu_54633_p3 = (!ap_reg_ppstg_dneg_61_5_reg_64942_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_61_5_reg_64942_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_61_6_v_cast_cast_fu_54640_p3() {
    z_V_61_6_v_cast_cast_fu_54640_p3 = (!dneg_61_6_reg_66502.read()[0].is_01())? sc_lv<7>(): ((dneg_61_6_reg_66502.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_61_7_v_cast_cast_fu_54647_p3() {
    z_V_61_7_v_cast_cast_fu_54647_p3 = (!dneg_61_7_reg_66507.read()[0].is_01())? sc_lv<6>(): ((dneg_61_7_reg_66507.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_61_8_fu_54696_p2() {
    z_V_61_8_fu_54696_p2 = (!tmp1224_fu_54671_p2.read().is_01() || !tmp2001_cast_fu_54692_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1224_fu_54671_p2.read()) + sc_bigint<13>(tmp2001_cast_fu_54692_p1.read()));
}

void Sobel_phase_strm::thread_z_V_61_8_v_cast_cast_cast_fu_54654_p3() {
    z_V_61_8_v_cast_cast_cast_fu_54654_p3 = (!dneg_61_8_reg_66512.read()[0].is_01())? sc_lv<6>(): ((dneg_61_8_reg_66512.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_62_1_fu_45502_p3() {
    z_V_62_1_fu_45502_p3 = (!ap_reg_ppstg_dneg_62_1_reg_60118_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_62_1_reg_60118_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_62_2_cast_fu_45522_p1() {
    z_V_62_2_cast_fu_45522_p1 = esl_zext<13,12>(z_V_62_2_fu_45516_p2.read());
}

void Sobel_phase_strm::thread_z_V_62_2_fu_45516_p2() {
    z_V_62_2_fu_45516_p2 = (!z_V_62_2_v_cast_cast_fu_45509_p3.read().is_01() || !z_V_62_1_fu_45502_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_62_2_v_cast_cast_fu_45509_p3.read()) + sc_biguint<12>(z_V_62_1_fu_45502_p3.read()));
}

void Sobel_phase_strm::thread_z_V_62_2_v_cast_cast_fu_45509_p3() {
    z_V_62_2_v_cast_cast_fu_45509_p3 = (!ap_reg_ppstg_dneg_62_2_reg_62557_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_62_2_reg_62557_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_62_3_fu_45542_p3() {
    z_V_62_3_fu_45542_p3 = (!ap_reg_ppstg_dneg_62_3_reg_62562_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_62_3_reg_62562_pp0_iter3.read()[0].to_bool())? p_Val2_10_62_3_cast_fu_45532_p1.read(): p_Val2_16_62_3_fu_45536_p2.read());
}

void Sobel_phase_strm::thread_z_V_62_4_v_cast_cast_fu_54753_p3() {
    z_V_62_4_v_cast_cast_fu_54753_p3 = (!ap_reg_ppstg_dneg_62_4_reg_64971_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_62_4_reg_64971_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_62_5_v_cast_cast_fu_54760_p3() {
    z_V_62_5_v_cast_cast_fu_54760_p3 = (!ap_reg_ppstg_dneg_62_5_reg_64976_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_62_5_reg_64976_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_62_6_v_cast_cast_fu_54767_p3() {
    z_V_62_6_v_cast_cast_fu_54767_p3 = (!dneg_62_6_reg_66522.read()[0].is_01())? sc_lv<7>(): ((dneg_62_6_reg_66522.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_62_7_v_cast_cast_fu_54774_p3() {
    z_V_62_7_v_cast_cast_fu_54774_p3 = (!dneg_62_7_reg_66527.read()[0].is_01())? sc_lv<6>(): ((dneg_62_7_reg_66527.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_62_8_fu_54823_p2() {
    z_V_62_8_fu_54823_p2 = (!tmp1244_fu_54798_p2.read().is_01() || !tmp2005_cast_fu_54819_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1244_fu_54798_p2.read()) + sc_bigint<13>(tmp2005_cast_fu_54819_p1.read()));
}

void Sobel_phase_strm::thread_z_V_62_8_v_cast_cast_cast_fu_54781_p3() {
    z_V_62_8_v_cast_cast_cast_fu_54781_p3 = (!dneg_62_8_reg_66532.read()[0].is_01())? sc_lv<6>(): ((dneg_62_8_reg_66532.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_63_1_fu_45655_p3() {
    z_V_63_1_fu_45655_p3 = (!ap_reg_ppstg_dneg_63_1_reg_60156_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_63_1_reg_60156_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_63_2_cast_fu_45675_p1() {
    z_V_63_2_cast_fu_45675_p1 = esl_zext<13,12>(z_V_63_2_fu_45669_p2.read());
}

void Sobel_phase_strm::thread_z_V_63_2_fu_45669_p2() {
    z_V_63_2_fu_45669_p2 = (!z_V_63_2_v_cast_cast_fu_45662_p3.read().is_01() || !z_V_63_1_fu_45655_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_63_2_v_cast_cast_fu_45662_p3.read()) + sc_biguint<12>(z_V_63_1_fu_45655_p3.read()));
}

void Sobel_phase_strm::thread_z_V_63_2_v_cast_cast_fu_45662_p3() {
    z_V_63_2_v_cast_cast_fu_45662_p3 = (!ap_reg_ppstg_dneg_63_2_reg_62591_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_63_2_reg_62591_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_63_3_fu_45695_p3() {
    z_V_63_3_fu_45695_p3 = (!ap_reg_ppstg_dneg_63_3_reg_62596_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_63_3_reg_62596_pp0_iter3.read()[0].to_bool())? p_Val2_10_63_3_cast_fu_45685_p1.read(): p_Val2_16_63_3_fu_45689_p2.read());
}

void Sobel_phase_strm::thread_z_V_63_4_v_cast_cast_fu_54880_p3() {
    z_V_63_4_v_cast_cast_fu_54880_p3 = (!ap_reg_ppstg_dneg_63_4_reg_65005_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_63_4_reg_65005_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_63_5_v_cast_cast_fu_54887_p3() {
    z_V_63_5_v_cast_cast_fu_54887_p3 = (!ap_reg_ppstg_dneg_63_5_reg_65010_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_63_5_reg_65010_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_63_6_v_cast_cast_fu_54894_p3() {
    z_V_63_6_v_cast_cast_fu_54894_p3 = (!dneg_63_6_reg_66542.read()[0].is_01())? sc_lv<7>(): ((dneg_63_6_reg_66542.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_63_7_v_cast_cast_fu_54901_p3() {
    z_V_63_7_v_cast_cast_fu_54901_p3 = (!dneg_63_7_reg_66547.read()[0].is_01())? sc_lv<6>(): ((dneg_63_7_reg_66547.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_63_8_fu_54950_p2() {
    z_V_63_8_fu_54950_p2 = (!tmp1264_fu_54925_p2.read().is_01() || !tmp2009_cast_fu_54946_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1264_fu_54925_p2.read()) + sc_bigint<13>(tmp2009_cast_fu_54946_p1.read()));
}

void Sobel_phase_strm::thread_z_V_63_8_v_cast_cast_cast_fu_54908_p3() {
    z_V_63_8_v_cast_cast_cast_fu_54908_p3 = (!dneg_63_8_reg_66552.read()[0].is_01())? sc_lv<6>(): ((dneg_63_8_reg_66552.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_64_1_fu_45808_p3() {
    z_V_64_1_fu_45808_p3 = (!ap_reg_ppstg_dneg_64_1_reg_60194_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_64_1_reg_60194_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_64_2_cast_fu_45828_p1() {
    z_V_64_2_cast_fu_45828_p1 = esl_zext<13,12>(z_V_64_2_fu_45822_p2.read());
}

void Sobel_phase_strm::thread_z_V_64_2_fu_45822_p2() {
    z_V_64_2_fu_45822_p2 = (!z_V_64_2_v_cast_cast_fu_45815_p3.read().is_01() || !z_V_64_1_fu_45808_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_64_2_v_cast_cast_fu_45815_p3.read()) + sc_biguint<12>(z_V_64_1_fu_45808_p3.read()));
}

void Sobel_phase_strm::thread_z_V_64_2_v_cast_cast_fu_45815_p3() {
    z_V_64_2_v_cast_cast_fu_45815_p3 = (!ap_reg_ppstg_dneg_64_2_reg_62625_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_64_2_reg_62625_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_64_3_fu_45848_p3() {
    z_V_64_3_fu_45848_p3 = (!ap_reg_ppstg_dneg_64_3_reg_62630_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_64_3_reg_62630_pp0_iter3.read()[0].to_bool())? p_Val2_10_64_3_cast_fu_45838_p1.read(): p_Val2_16_64_3_fu_45842_p2.read());
}

void Sobel_phase_strm::thread_z_V_64_4_v_cast_cast_fu_55007_p3() {
    z_V_64_4_v_cast_cast_fu_55007_p3 = (!ap_reg_ppstg_dneg_64_4_reg_65039_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_64_4_reg_65039_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_64_5_v_cast_cast_fu_55014_p3() {
    z_V_64_5_v_cast_cast_fu_55014_p3 = (!ap_reg_ppstg_dneg_64_5_reg_65044_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_64_5_reg_65044_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_64_6_v_cast_cast_fu_55021_p3() {
    z_V_64_6_v_cast_cast_fu_55021_p3 = (!dneg_64_6_reg_66562.read()[0].is_01())? sc_lv<7>(): ((dneg_64_6_reg_66562.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_64_7_v_cast_cast_fu_55028_p3() {
    z_V_64_7_v_cast_cast_fu_55028_p3 = (!dneg_64_7_reg_66567.read()[0].is_01())? sc_lv<6>(): ((dneg_64_7_reg_66567.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_64_8_fu_55077_p2() {
    z_V_64_8_fu_55077_p2 = (!tmp1284_fu_55052_p2.read().is_01() || !tmp2013_cast_fu_55073_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1284_fu_55052_p2.read()) + sc_bigint<13>(tmp2013_cast_fu_55073_p1.read()));
}

void Sobel_phase_strm::thread_z_V_64_8_v_cast_cast_cast_fu_55035_p3() {
    z_V_64_8_v_cast_cast_cast_fu_55035_p3 = (!dneg_64_8_reg_66572.read()[0].is_01())? sc_lv<6>(): ((dneg_64_8_reg_66572.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_65_1_fu_45961_p3() {
    z_V_65_1_fu_45961_p3 = (!ap_reg_ppstg_dneg_65_1_reg_60232_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_65_1_reg_60232_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_65_2_cast_fu_45981_p1() {
    z_V_65_2_cast_fu_45981_p1 = esl_zext<13,12>(z_V_65_2_fu_45975_p2.read());
}

void Sobel_phase_strm::thread_z_V_65_2_fu_45975_p2() {
    z_V_65_2_fu_45975_p2 = (!z_V_65_2_v_cast_cast_fu_45968_p3.read().is_01() || !z_V_65_1_fu_45961_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_65_2_v_cast_cast_fu_45968_p3.read()) + sc_biguint<12>(z_V_65_1_fu_45961_p3.read()));
}

void Sobel_phase_strm::thread_z_V_65_2_v_cast_cast_fu_45968_p3() {
    z_V_65_2_v_cast_cast_fu_45968_p3 = (!ap_reg_ppstg_dneg_65_2_reg_62659_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_65_2_reg_62659_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_65_3_fu_46001_p3() {
    z_V_65_3_fu_46001_p3 = (!ap_reg_ppstg_dneg_65_3_reg_62664_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_65_3_reg_62664_pp0_iter3.read()[0].to_bool())? p_Val2_10_65_3_cast_fu_45991_p1.read(): p_Val2_16_65_3_fu_45995_p2.read());
}

void Sobel_phase_strm::thread_z_V_65_4_v_cast_cast_fu_55134_p3() {
    z_V_65_4_v_cast_cast_fu_55134_p3 = (!ap_reg_ppstg_dneg_65_4_reg_65073_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_65_4_reg_65073_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_65_5_v_cast_cast_fu_55141_p3() {
    z_V_65_5_v_cast_cast_fu_55141_p3 = (!ap_reg_ppstg_dneg_65_5_reg_65078_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_65_5_reg_65078_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_65_6_v_cast_cast_fu_55148_p3() {
    z_V_65_6_v_cast_cast_fu_55148_p3 = (!dneg_65_6_reg_66582.read()[0].is_01())? sc_lv<7>(): ((dneg_65_6_reg_66582.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_65_7_v_cast_cast_fu_55155_p3() {
    z_V_65_7_v_cast_cast_fu_55155_p3 = (!dneg_65_7_reg_66587.read()[0].is_01())? sc_lv<6>(): ((dneg_65_7_reg_66587.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_65_8_fu_55204_p2() {
    z_V_65_8_fu_55204_p2 = (!tmp1304_fu_55179_p2.read().is_01() || !tmp2017_cast_fu_55200_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1304_fu_55179_p2.read()) + sc_bigint<13>(tmp2017_cast_fu_55200_p1.read()));
}

void Sobel_phase_strm::thread_z_V_65_8_v_cast_cast_cast_fu_55162_p3() {
    z_V_65_8_v_cast_cast_cast_fu_55162_p3 = (!dneg_65_8_reg_66592.read()[0].is_01())? sc_lv<6>(): ((dneg_65_8_reg_66592.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_66_1_fu_46114_p3() {
    z_V_66_1_fu_46114_p3 = (!ap_reg_ppstg_dneg_66_1_reg_60270_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_66_1_reg_60270_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_66_2_cast_fu_46134_p1() {
    z_V_66_2_cast_fu_46134_p1 = esl_zext<13,12>(z_V_66_2_fu_46128_p2.read());
}

void Sobel_phase_strm::thread_z_V_66_2_fu_46128_p2() {
    z_V_66_2_fu_46128_p2 = (!z_V_66_2_v_cast_cast_fu_46121_p3.read().is_01() || !z_V_66_1_fu_46114_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_66_2_v_cast_cast_fu_46121_p3.read()) + sc_biguint<12>(z_V_66_1_fu_46114_p3.read()));
}

void Sobel_phase_strm::thread_z_V_66_2_v_cast_cast_fu_46121_p3() {
    z_V_66_2_v_cast_cast_fu_46121_p3 = (!ap_reg_ppstg_dneg_66_2_reg_62693_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_66_2_reg_62693_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_66_3_fu_46154_p3() {
    z_V_66_3_fu_46154_p3 = (!ap_reg_ppstg_dneg_66_3_reg_62698_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_66_3_reg_62698_pp0_iter3.read()[0].to_bool())? p_Val2_10_66_3_cast_fu_46144_p1.read(): p_Val2_16_66_3_fu_46148_p2.read());
}

void Sobel_phase_strm::thread_z_V_66_4_v_cast_cast_fu_55261_p3() {
    z_V_66_4_v_cast_cast_fu_55261_p3 = (!ap_reg_ppstg_dneg_66_4_reg_65107_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_66_4_reg_65107_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_66_5_v_cast_cast_fu_55268_p3() {
    z_V_66_5_v_cast_cast_fu_55268_p3 = (!ap_reg_ppstg_dneg_66_5_reg_65112_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_66_5_reg_65112_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_66_6_v_cast_cast_fu_55275_p3() {
    z_V_66_6_v_cast_cast_fu_55275_p3 = (!dneg_66_6_reg_66602.read()[0].is_01())? sc_lv<7>(): ((dneg_66_6_reg_66602.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_66_7_v_cast_cast_fu_55282_p3() {
    z_V_66_7_v_cast_cast_fu_55282_p3 = (!dneg_66_7_reg_66607.read()[0].is_01())? sc_lv<6>(): ((dneg_66_7_reg_66607.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_66_8_fu_55331_p2() {
    z_V_66_8_fu_55331_p2 = (!tmp1324_fu_55306_p2.read().is_01() || !tmp2021_cast_fu_55327_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1324_fu_55306_p2.read()) + sc_bigint<13>(tmp2021_cast_fu_55327_p1.read()));
}

void Sobel_phase_strm::thread_z_V_66_8_v_cast_cast_cast_fu_55289_p3() {
    z_V_66_8_v_cast_cast_cast_fu_55289_p3 = (!dneg_66_8_reg_66612.read()[0].is_01())? sc_lv<6>(): ((dneg_66_8_reg_66612.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_67_1_fu_46267_p3() {
    z_V_67_1_fu_46267_p3 = (!ap_reg_ppstg_dneg_67_1_reg_60308_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_67_1_reg_60308_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_67_2_cast_fu_46287_p1() {
    z_V_67_2_cast_fu_46287_p1 = esl_zext<13,12>(z_V_67_2_fu_46281_p2.read());
}

void Sobel_phase_strm::thread_z_V_67_2_fu_46281_p2() {
    z_V_67_2_fu_46281_p2 = (!z_V_67_2_v_cast_cast_fu_46274_p3.read().is_01() || !z_V_67_1_fu_46267_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_67_2_v_cast_cast_fu_46274_p3.read()) + sc_biguint<12>(z_V_67_1_fu_46267_p3.read()));
}

void Sobel_phase_strm::thread_z_V_67_2_v_cast_cast_fu_46274_p3() {
    z_V_67_2_v_cast_cast_fu_46274_p3 = (!ap_reg_ppstg_dneg_67_2_reg_62727_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_67_2_reg_62727_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_67_3_fu_46307_p3() {
    z_V_67_3_fu_46307_p3 = (!ap_reg_ppstg_dneg_67_3_reg_62732_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_67_3_reg_62732_pp0_iter3.read()[0].to_bool())? p_Val2_10_67_3_cast_fu_46297_p1.read(): p_Val2_16_67_3_fu_46301_p2.read());
}

void Sobel_phase_strm::thread_z_V_67_4_v_cast_cast_fu_55388_p3() {
    z_V_67_4_v_cast_cast_fu_55388_p3 = (!ap_reg_ppstg_dneg_67_4_reg_65141_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_67_4_reg_65141_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_67_5_v_cast_cast_fu_55395_p3() {
    z_V_67_5_v_cast_cast_fu_55395_p3 = (!ap_reg_ppstg_dneg_67_5_reg_65146_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_67_5_reg_65146_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_67_6_v_cast_cast_fu_55402_p3() {
    z_V_67_6_v_cast_cast_fu_55402_p3 = (!dneg_67_6_reg_66622.read()[0].is_01())? sc_lv<7>(): ((dneg_67_6_reg_66622.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_67_7_v_cast_cast_fu_55409_p3() {
    z_V_67_7_v_cast_cast_fu_55409_p3 = (!dneg_67_7_reg_66627.read()[0].is_01())? sc_lv<6>(): ((dneg_67_7_reg_66627.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_67_8_fu_55458_p2() {
    z_V_67_8_fu_55458_p2 = (!tmp1344_fu_55433_p2.read().is_01() || !tmp2025_cast_fu_55454_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1344_fu_55433_p2.read()) + sc_bigint<13>(tmp2025_cast_fu_55454_p1.read()));
}

void Sobel_phase_strm::thread_z_V_67_8_v_cast_cast_cast_fu_55416_p3() {
    z_V_67_8_v_cast_cast_cast_fu_55416_p3 = (!dneg_67_8_reg_66632.read()[0].is_01())? sc_lv<6>(): ((dneg_67_8_reg_66632.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_68_1_fu_46420_p3() {
    z_V_68_1_fu_46420_p3 = (!ap_reg_ppstg_dneg_68_1_reg_60346_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_68_1_reg_60346_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_68_2_cast_fu_46440_p1() {
    z_V_68_2_cast_fu_46440_p1 = esl_zext<13,12>(z_V_68_2_fu_46434_p2.read());
}

void Sobel_phase_strm::thread_z_V_68_2_fu_46434_p2() {
    z_V_68_2_fu_46434_p2 = (!z_V_68_2_v_cast_cast_fu_46427_p3.read().is_01() || !z_V_68_1_fu_46420_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_68_2_v_cast_cast_fu_46427_p3.read()) + sc_biguint<12>(z_V_68_1_fu_46420_p3.read()));
}

void Sobel_phase_strm::thread_z_V_68_2_v_cast_cast_fu_46427_p3() {
    z_V_68_2_v_cast_cast_fu_46427_p3 = (!ap_reg_ppstg_dneg_68_2_reg_62761_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_68_2_reg_62761_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_68_3_fu_46460_p3() {
    z_V_68_3_fu_46460_p3 = (!ap_reg_ppstg_dneg_68_3_reg_62766_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_68_3_reg_62766_pp0_iter3.read()[0].to_bool())? p_Val2_10_68_3_cast_fu_46450_p1.read(): p_Val2_16_68_3_fu_46454_p2.read());
}

void Sobel_phase_strm::thread_z_V_68_4_v_cast_cast_fu_55515_p3() {
    z_V_68_4_v_cast_cast_fu_55515_p3 = (!ap_reg_ppstg_dneg_68_4_reg_65175_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_68_4_reg_65175_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_68_5_v_cast_cast_fu_55522_p3() {
    z_V_68_5_v_cast_cast_fu_55522_p3 = (!ap_reg_ppstg_dneg_68_5_reg_65180_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_68_5_reg_65180_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_68_6_v_cast_cast_fu_55529_p3() {
    z_V_68_6_v_cast_cast_fu_55529_p3 = (!dneg_68_6_reg_66642.read()[0].is_01())? sc_lv<7>(): ((dneg_68_6_reg_66642.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_68_7_v_cast_cast_fu_55536_p3() {
    z_V_68_7_v_cast_cast_fu_55536_p3 = (!dneg_68_7_reg_66647.read()[0].is_01())? sc_lv<6>(): ((dneg_68_7_reg_66647.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_68_8_fu_55585_p2() {
    z_V_68_8_fu_55585_p2 = (!tmp1364_fu_55560_p2.read().is_01() || !tmp2029_cast_fu_55581_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1364_fu_55560_p2.read()) + sc_bigint<13>(tmp2029_cast_fu_55581_p1.read()));
}

void Sobel_phase_strm::thread_z_V_68_8_v_cast_cast_cast_fu_55543_p3() {
    z_V_68_8_v_cast_cast_cast_fu_55543_p3 = (!dneg_68_8_reg_66652.read()[0].is_01())? sc_lv<6>(): ((dneg_68_8_reg_66652.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_69_1_fu_46573_p3() {
    z_V_69_1_fu_46573_p3 = (!ap_reg_ppstg_dneg_69_1_reg_60384_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_69_1_reg_60384_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_69_2_cast_fu_46593_p1() {
    z_V_69_2_cast_fu_46593_p1 = esl_zext<13,12>(z_V_69_2_fu_46587_p2.read());
}

void Sobel_phase_strm::thread_z_V_69_2_fu_46587_p2() {
    z_V_69_2_fu_46587_p2 = (!z_V_69_2_v_cast_cast_fu_46580_p3.read().is_01() || !z_V_69_1_fu_46573_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_69_2_v_cast_cast_fu_46580_p3.read()) + sc_biguint<12>(z_V_69_1_fu_46573_p3.read()));
}

void Sobel_phase_strm::thread_z_V_69_2_v_cast_cast_fu_46580_p3() {
    z_V_69_2_v_cast_cast_fu_46580_p3 = (!ap_reg_ppstg_dneg_69_2_reg_62795_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_69_2_reg_62795_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_69_3_fu_46613_p3() {
    z_V_69_3_fu_46613_p3 = (!ap_reg_ppstg_dneg_69_3_reg_62800_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_69_3_reg_62800_pp0_iter3.read()[0].to_bool())? p_Val2_10_69_3_cast_fu_46603_p1.read(): p_Val2_16_69_3_fu_46607_p2.read());
}

void Sobel_phase_strm::thread_z_V_69_4_v_cast_cast_fu_55642_p3() {
    z_V_69_4_v_cast_cast_fu_55642_p3 = (!ap_reg_ppstg_dneg_69_4_reg_65209_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_69_4_reg_65209_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_69_5_v_cast_cast_fu_55649_p3() {
    z_V_69_5_v_cast_cast_fu_55649_p3 = (!ap_reg_ppstg_dneg_69_5_reg_65214_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_69_5_reg_65214_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_69_6_v_cast_cast_fu_55656_p3() {
    z_V_69_6_v_cast_cast_fu_55656_p3 = (!dneg_69_6_reg_66662.read()[0].is_01())? sc_lv<7>(): ((dneg_69_6_reg_66662.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_69_7_v_cast_cast_fu_55663_p3() {
    z_V_69_7_v_cast_cast_fu_55663_p3 = (!dneg_69_7_reg_66667.read()[0].is_01())? sc_lv<6>(): ((dneg_69_7_reg_66667.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_69_8_fu_55712_p2() {
    z_V_69_8_fu_55712_p2 = (!tmp1384_fu_55687_p2.read().is_01() || !tmp2033_cast_fu_55708_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1384_fu_55687_p2.read()) + sc_bigint<13>(tmp2033_cast_fu_55708_p1.read()));
}

void Sobel_phase_strm::thread_z_V_69_8_v_cast_cast_cast_fu_55670_p3() {
    z_V_69_8_v_cast_cast_cast_fu_55670_p3 = (!dneg_69_8_reg_66672.read()[0].is_01())? sc_lv<6>(): ((dneg_69_8_reg_66672.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_6_1_fu_36934_p3() {
    z_V_6_1_fu_36934_p3 = (!ap_reg_ppstg_dneg_6_1_reg_57990_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_6_1_reg_57990_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_6_2_cast_fu_36954_p1() {
    z_V_6_2_cast_fu_36954_p1 = esl_zext<13,12>(z_V_6_2_fu_36948_p2.read());
}

void Sobel_phase_strm::thread_z_V_6_2_fu_36948_p2() {
    z_V_6_2_fu_36948_p2 = (!z_V_6_2_v_cast_cast_fu_36941_p3.read().is_01() || !z_V_6_1_fu_36934_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_6_2_v_cast_cast_fu_36941_p3.read()) + sc_biguint<12>(z_V_6_1_fu_36934_p3.read()));
}

void Sobel_phase_strm::thread_z_V_6_2_v_cast_cast_fu_36941_p3() {
    z_V_6_2_v_cast_cast_fu_36941_p3 = (!ap_reg_ppstg_dneg_6_2_reg_60653_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_6_2_reg_60653_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_6_3_fu_36974_p3() {
    z_V_6_3_fu_36974_p3 = (!ap_reg_ppstg_dneg_6_3_reg_60658_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_6_3_reg_60658_pp0_iter3.read()[0].to_bool())? p_Val2_10_6_3_cast_fu_36964_p1.read(): p_Val2_16_6_3_fu_36968_p2.read());
}

void Sobel_phase_strm::thread_z_V_6_4_v_cast_cast_fu_47641_p3() {
    z_V_6_4_v_cast_cast_fu_47641_p3 = (!ap_reg_ppstg_dneg_6_4_reg_63067_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_6_4_reg_63067_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_6_5_v_cast_cast_fu_47648_p3() {
    z_V_6_5_v_cast_cast_fu_47648_p3 = (!ap_reg_ppstg_dneg_6_5_reg_63072_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_6_5_reg_63072_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_6_6_v_cast_cast_fu_47655_p3() {
    z_V_6_6_v_cast_cast_fu_47655_p3 = (!dneg_6_6_reg_65402.read()[0].is_01())? sc_lv<7>(): ((dneg_6_6_reg_65402.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_6_7_v_cast_cast_fu_47662_p3() {
    z_V_6_7_v_cast_cast_fu_47662_p3 = (!dneg_6_7_reg_65407.read()[0].is_01())? sc_lv<6>(): ((dneg_6_7_reg_65407.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_6_8_fu_47711_p2() {
    z_V_6_8_fu_47711_p2 = (!tmp124_fu_47686_p2.read().is_01() || !tmp1781_cast_fu_47707_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp124_fu_47686_p2.read()) + sc_bigint<13>(tmp1781_cast_fu_47707_p1.read()));
}

void Sobel_phase_strm::thread_z_V_6_8_v_cast_cast_cast_fu_47669_p3() {
    z_V_6_8_v_cast_cast_cast_fu_47669_p3 = (!dneg_6_8_reg_65412.read()[0].is_01())? sc_lv<6>(): ((dneg_6_8_reg_65412.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_70_1_fu_46726_p3() {
    z_V_70_1_fu_46726_p3 = (!ap_reg_ppstg_dneg_70_1_reg_60422_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_70_1_reg_60422_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_70_2_cast_fu_46746_p1() {
    z_V_70_2_cast_fu_46746_p1 = esl_zext<13,12>(z_V_70_2_fu_46740_p2.read());
}

void Sobel_phase_strm::thread_z_V_70_2_fu_46740_p2() {
    z_V_70_2_fu_46740_p2 = (!z_V_70_2_v_cast_cast_fu_46733_p3.read().is_01() || !z_V_70_1_fu_46726_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_70_2_v_cast_cast_fu_46733_p3.read()) + sc_biguint<12>(z_V_70_1_fu_46726_p3.read()));
}

void Sobel_phase_strm::thread_z_V_70_2_v_cast_cast_fu_46733_p3() {
    z_V_70_2_v_cast_cast_fu_46733_p3 = (!ap_reg_ppstg_dneg_70_2_reg_62829_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_70_2_reg_62829_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_70_3_fu_46766_p3() {
    z_V_70_3_fu_46766_p3 = (!ap_reg_ppstg_dneg_70_3_reg_62834_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_70_3_reg_62834_pp0_iter3.read()[0].to_bool())? p_Val2_10_70_3_cast_fu_46756_p1.read(): p_Val2_16_70_3_fu_46760_p2.read());
}

void Sobel_phase_strm::thread_z_V_70_4_v_cast_cast_fu_55769_p3() {
    z_V_70_4_v_cast_cast_fu_55769_p3 = (!ap_reg_ppstg_dneg_70_4_reg_65243_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_70_4_reg_65243_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_70_5_v_cast_cast_fu_55776_p3() {
    z_V_70_5_v_cast_cast_fu_55776_p3 = (!ap_reg_ppstg_dneg_70_5_reg_65248_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_70_5_reg_65248_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_70_6_v_cast_cast_fu_55783_p3() {
    z_V_70_6_v_cast_cast_fu_55783_p3 = (!dneg_70_6_reg_66682.read()[0].is_01())? sc_lv<7>(): ((dneg_70_6_reg_66682.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_70_7_v_cast_cast_fu_55790_p3() {
    z_V_70_7_v_cast_cast_fu_55790_p3 = (!dneg_70_7_reg_66687.read()[0].is_01())? sc_lv<6>(): ((dneg_70_7_reg_66687.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_70_8_fu_55839_p2() {
    z_V_70_8_fu_55839_p2 = (!tmp1404_fu_55814_p2.read().is_01() || !tmp2037_cast_fu_55835_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1404_fu_55814_p2.read()) + sc_bigint<13>(tmp2037_cast_fu_55835_p1.read()));
}

void Sobel_phase_strm::thread_z_V_70_8_v_cast_cast_cast_fu_55797_p3() {
    z_V_70_8_v_cast_cast_cast_fu_55797_p3 = (!dneg_70_8_reg_66692.read()[0].is_01())? sc_lv<6>(): ((dneg_70_8_reg_66692.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_7_1_fu_37087_p3() {
    z_V_7_1_fu_37087_p3 = (!ap_reg_ppstg_dneg_7_1_reg_58028_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_7_1_reg_58028_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_7_2_cast_fu_37107_p1() {
    z_V_7_2_cast_fu_37107_p1 = esl_zext<13,12>(z_V_7_2_fu_37101_p2.read());
}

void Sobel_phase_strm::thread_z_V_7_2_fu_37101_p2() {
    z_V_7_2_fu_37101_p2 = (!z_V_7_2_v_cast_cast_fu_37094_p3.read().is_01() || !z_V_7_1_fu_37087_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_7_2_v_cast_cast_fu_37094_p3.read()) + sc_biguint<12>(z_V_7_1_fu_37087_p3.read()));
}

void Sobel_phase_strm::thread_z_V_7_2_v_cast_cast_fu_37094_p3() {
    z_V_7_2_v_cast_cast_fu_37094_p3 = (!ap_reg_ppstg_dneg_7_2_reg_60687_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_7_2_reg_60687_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_7_3_fu_37127_p3() {
    z_V_7_3_fu_37127_p3 = (!ap_reg_ppstg_dneg_7_3_reg_60692_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_7_3_reg_60692_pp0_iter3.read()[0].to_bool())? p_Val2_10_7_3_cast_fu_37117_p1.read(): p_Val2_16_7_3_fu_37121_p2.read());
}

void Sobel_phase_strm::thread_z_V_7_4_v_cast_cast_fu_47768_p3() {
    z_V_7_4_v_cast_cast_fu_47768_p3 = (!ap_reg_ppstg_dneg_7_4_reg_63101_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_7_4_reg_63101_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_7_5_v_cast_cast_fu_47775_p3() {
    z_V_7_5_v_cast_cast_fu_47775_p3 = (!ap_reg_ppstg_dneg_7_5_reg_63106_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_7_5_reg_63106_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_7_6_v_cast_cast_fu_47782_p3() {
    z_V_7_6_v_cast_cast_fu_47782_p3 = (!dneg_7_6_reg_65422.read()[0].is_01())? sc_lv<7>(): ((dneg_7_6_reg_65422.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_7_7_v_cast_cast_fu_47789_p3() {
    z_V_7_7_v_cast_cast_fu_47789_p3 = (!dneg_7_7_reg_65427.read()[0].is_01())? sc_lv<6>(): ((dneg_7_7_reg_65427.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_7_8_fu_47838_p2() {
    z_V_7_8_fu_47838_p2 = (!tmp144_fu_47813_p2.read().is_01() || !tmp1785_cast_fu_47834_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp144_fu_47813_p2.read()) + sc_bigint<13>(tmp1785_cast_fu_47834_p1.read()));
}

void Sobel_phase_strm::thread_z_V_7_8_v_cast_cast_cast_fu_47796_p3() {
    z_V_7_8_v_cast_cast_cast_fu_47796_p3 = (!dneg_7_8_reg_65432.read()[0].is_01())? sc_lv<6>(): ((dneg_7_8_reg_65432.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_8_1_fu_37240_p3() {
    z_V_8_1_fu_37240_p3 = (!ap_reg_ppstg_dneg_8_1_reg_58066_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_8_1_reg_58066_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_8_2_cast_fu_37260_p1() {
    z_V_8_2_cast_fu_37260_p1 = esl_zext<13,12>(z_V_8_2_fu_37254_p2.read());
}

void Sobel_phase_strm::thread_z_V_8_2_fu_37254_p2() {
    z_V_8_2_fu_37254_p2 = (!z_V_8_2_v_cast_cast_fu_37247_p3.read().is_01() || !z_V_8_1_fu_37240_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_8_2_v_cast_cast_fu_37247_p3.read()) + sc_biguint<12>(z_V_8_1_fu_37240_p3.read()));
}

void Sobel_phase_strm::thread_z_V_8_2_v_cast_cast_fu_37247_p3() {
    z_V_8_2_v_cast_cast_fu_37247_p3 = (!ap_reg_ppstg_dneg_8_2_reg_60721_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_8_2_reg_60721_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_8_3_fu_37280_p3() {
    z_V_8_3_fu_37280_p3 = (!ap_reg_ppstg_dneg_8_3_reg_60726_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_8_3_reg_60726_pp0_iter3.read()[0].to_bool())? p_Val2_10_8_3_cast_fu_37270_p1.read(): p_Val2_16_8_3_fu_37274_p2.read());
}

void Sobel_phase_strm::thread_z_V_8_4_v_cast_cast_fu_47895_p3() {
    z_V_8_4_v_cast_cast_fu_47895_p3 = (!ap_reg_ppstg_dneg_8_4_reg_63135_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_8_4_reg_63135_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_8_5_v_cast_cast_fu_47902_p3() {
    z_V_8_5_v_cast_cast_fu_47902_p3 = (!ap_reg_ppstg_dneg_8_5_reg_63140_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_8_5_reg_63140_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_8_6_v_cast_cast_fu_47909_p3() {
    z_V_8_6_v_cast_cast_fu_47909_p3 = (!dneg_8_6_reg_65442.read()[0].is_01())? sc_lv<7>(): ((dneg_8_6_reg_65442.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_8_7_v_cast_cast_fu_47916_p3() {
    z_V_8_7_v_cast_cast_fu_47916_p3 = (!dneg_8_7_reg_65447.read()[0].is_01())? sc_lv<6>(): ((dneg_8_7_reg_65447.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_8_8_fu_47965_p2() {
    z_V_8_8_fu_47965_p2 = (!tmp164_fu_47940_p2.read().is_01() || !tmp1789_cast_fu_47961_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp164_fu_47940_p2.read()) + sc_bigint<13>(tmp1789_cast_fu_47961_p1.read()));
}

void Sobel_phase_strm::thread_z_V_8_8_v_cast_cast_cast_fu_47923_p3() {
    z_V_8_8_v_cast_cast_cast_fu_47923_p3 = (!dneg_8_8_reg_65452.read()[0].is_01())? sc_lv<6>(): ((dneg_8_8_reg_65452.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_9_1_fu_37393_p3() {
    z_V_9_1_fu_37393_p3 = (!ap_reg_ppstg_dneg_9_1_reg_58104_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_9_1_reg_58104_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_9_2_cast_fu_37413_p1() {
    z_V_9_2_cast_fu_37413_p1 = esl_zext<13,12>(z_V_9_2_fu_37407_p2.read());
}

void Sobel_phase_strm::thread_z_V_9_2_fu_37407_p2() {
    z_V_9_2_fu_37407_p2 = (!z_V_9_2_v_cast_cast_fu_37400_p3.read().is_01() || !z_V_9_1_fu_37393_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_9_2_v_cast_cast_fu_37400_p3.read()) + sc_biguint<12>(z_V_9_1_fu_37393_p3.read()));
}

void Sobel_phase_strm::thread_z_V_9_2_v_cast_cast_fu_37400_p3() {
    z_V_9_2_v_cast_cast_fu_37400_p3 = (!ap_reg_ppstg_dneg_9_2_reg_60755_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_9_2_reg_60755_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_9_3_fu_37433_p3() {
    z_V_9_3_fu_37433_p3 = (!ap_reg_ppstg_dneg_9_3_reg_60760_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_9_3_reg_60760_pp0_iter3.read()[0].to_bool())? p_Val2_10_9_3_cast_fu_37423_p1.read(): p_Val2_16_9_3_fu_37427_p2.read());
}

void Sobel_phase_strm::thread_z_V_9_4_v_cast_cast_fu_48022_p3() {
    z_V_9_4_v_cast_cast_fu_48022_p3 = (!ap_reg_ppstg_dneg_9_4_reg_63169_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_9_4_reg_63169_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_9_5_v_cast_cast_fu_48029_p3() {
    z_V_9_5_v_cast_cast_fu_48029_p3 = (!ap_reg_ppstg_dneg_9_5_reg_63174_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_9_5_reg_63174_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_9_6_v_cast_cast_fu_48036_p3() {
    z_V_9_6_v_cast_cast_fu_48036_p3 = (!dneg_9_6_reg_65462.read()[0].is_01())? sc_lv<7>(): ((dneg_9_6_reg_65462.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_9_7_v_cast_cast_fu_48043_p3() {
    z_V_9_7_v_cast_cast_fu_48043_p3 = (!dneg_9_7_reg_65467.read()[0].is_01())? sc_lv<6>(): ((dneg_9_7_reg_65467.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_9_8_fu_48092_p2() {
    z_V_9_8_fu_48092_p2 = (!tmp184_fu_48067_p2.read().is_01() || !tmp1793_cast_fu_48088_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp184_fu_48067_p2.read()) + sc_bigint<13>(tmp1793_cast_fu_48088_p1.read()));
}

void Sobel_phase_strm::thread_z_V_9_8_v_cast_cast_cast_fu_48050_p3() {
    z_V_9_8_v_cast_cast_cast_fu_48050_p3 = (!dneg_9_8_reg_65472.read()[0].is_01())? sc_lv<6>(): ((dneg_9_8_reg_65472.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

}

