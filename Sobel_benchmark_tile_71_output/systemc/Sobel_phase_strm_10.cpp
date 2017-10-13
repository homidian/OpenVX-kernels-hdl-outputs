#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_x0_V_20_fu_5846_p3() {
    x0_V_20_fu_5846_p3 = esl_concat<8,5>(grad_x_V_pixel_21_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_21_cast_fu_5972_p1() {
    x0_V_21_cast_fu_5972_p1 = esl_zext<14,13>(x0_V_21_fu_5964_p3.read());
}

void Sobel_phase_strm::thread_x0_V_21_fu_5964_p3() {
    x0_V_21_fu_5964_p3 = esl_concat<8,5>(grad_x_V_pixel_22_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_22_cast_fu_6090_p1() {
    x0_V_22_cast_fu_6090_p1 = esl_zext<14,13>(x0_V_22_fu_6082_p3.read());
}

void Sobel_phase_strm::thread_x0_V_22_fu_6082_p3() {
    x0_V_22_fu_6082_p3 = esl_concat<8,5>(grad_x_V_pixel_23_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_23_cast_fu_6208_p1() {
    x0_V_23_cast_fu_6208_p1 = esl_zext<14,13>(x0_V_23_fu_6200_p3.read());
}

void Sobel_phase_strm::thread_x0_V_23_fu_6200_p3() {
    x0_V_23_fu_6200_p3 = esl_concat<8,5>(grad_x_V_pixel_24_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_24_cast_fu_6326_p1() {
    x0_V_24_cast_fu_6326_p1 = esl_zext<14,13>(x0_V_24_fu_6318_p3.read());
}

void Sobel_phase_strm::thread_x0_V_24_fu_6318_p3() {
    x0_V_24_fu_6318_p3 = esl_concat<8,5>(grad_x_V_pixel_25_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_25_cast_fu_6444_p1() {
    x0_V_25_cast_fu_6444_p1 = esl_zext<14,13>(x0_V_25_fu_6436_p3.read());
}

void Sobel_phase_strm::thread_x0_V_25_fu_6436_p3() {
    x0_V_25_fu_6436_p3 = esl_concat<8,5>(grad_x_V_pixel_26_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_26_cast_fu_6562_p1() {
    x0_V_26_cast_fu_6562_p1 = esl_zext<14,13>(x0_V_26_fu_6554_p3.read());
}

void Sobel_phase_strm::thread_x0_V_26_fu_6554_p3() {
    x0_V_26_fu_6554_p3 = esl_concat<8,5>(grad_x_V_pixel_27_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_27_cast_fu_6680_p1() {
    x0_V_27_cast_fu_6680_p1 = esl_zext<14,13>(x0_V_27_fu_6672_p3.read());
}

void Sobel_phase_strm::thread_x0_V_27_fu_6672_p3() {
    x0_V_27_fu_6672_p3 = esl_concat<8,5>(grad_x_V_pixel_28_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_28_cast_fu_6798_p1() {
    x0_V_28_cast_fu_6798_p1 = esl_zext<14,13>(x0_V_28_fu_6790_p3.read());
}

void Sobel_phase_strm::thread_x0_V_28_fu_6790_p3() {
    x0_V_28_fu_6790_p3 = esl_concat<8,5>(grad_x_V_pixel_29_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_29_cast_fu_6916_p1() {
    x0_V_29_cast_fu_6916_p1 = esl_zext<14,13>(x0_V_29_fu_6908_p3.read());
}

void Sobel_phase_strm::thread_x0_V_29_fu_6908_p3() {
    x0_V_29_fu_6908_p3 = esl_concat<8,5>(grad_x_V_pixel_30_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_2_cast_fu_3612_p1() {
    x0_V_2_cast_fu_3612_p1 = esl_zext<14,13>(x0_V_2_fu_3604_p3.read());
}

void Sobel_phase_strm::thread_x0_V_2_fu_3604_p3() {
    x0_V_2_fu_3604_p3 = esl_concat<8,5>(grad_x_V_pixel_2_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_30_cast_fu_7034_p1() {
    x0_V_30_cast_fu_7034_p1 = esl_zext<14,13>(x0_V_30_fu_7026_p3.read());
}

void Sobel_phase_strm::thread_x0_V_30_fu_7026_p3() {
    x0_V_30_fu_7026_p3 = esl_concat<8,5>(grad_x_V_pixel_31_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_31_cast_fu_7152_p1() {
    x0_V_31_cast_fu_7152_p1 = esl_zext<14,13>(x0_V_31_fu_7144_p3.read());
}

void Sobel_phase_strm::thread_x0_V_31_fu_7144_p3() {
    x0_V_31_fu_7144_p3 = esl_concat<8,5>(grad_x_V_pixel_32_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_32_cast_fu_7270_p1() {
    x0_V_32_cast_fu_7270_p1 = esl_zext<14,13>(x0_V_32_fu_7262_p3.read());
}

void Sobel_phase_strm::thread_x0_V_32_fu_7262_p3() {
    x0_V_32_fu_7262_p3 = esl_concat<8,5>(grad_x_V_pixel_33_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_33_cast_fu_7388_p1() {
    x0_V_33_cast_fu_7388_p1 = esl_zext<14,13>(x0_V_33_fu_7380_p3.read());
}

void Sobel_phase_strm::thread_x0_V_33_fu_7380_p3() {
    x0_V_33_fu_7380_p3 = esl_concat<8,5>(grad_x_V_pixel_34_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_34_cast_fu_7506_p1() {
    x0_V_34_cast_fu_7506_p1 = esl_zext<14,13>(x0_V_34_fu_7498_p3.read());
}

void Sobel_phase_strm::thread_x0_V_34_fu_7498_p3() {
    x0_V_34_fu_7498_p3 = esl_concat<8,5>(grad_x_V_pixel_35_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_35_cast_fu_7624_p1() {
    x0_V_35_cast_fu_7624_p1 = esl_zext<14,13>(x0_V_35_fu_7616_p3.read());
}

void Sobel_phase_strm::thread_x0_V_35_fu_7616_p3() {
    x0_V_35_fu_7616_p3 = esl_concat<8,5>(grad_x_V_pixel_36_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_36_cast_fu_7742_p1() {
    x0_V_36_cast_fu_7742_p1 = esl_zext<14,13>(x0_V_36_fu_7734_p3.read());
}

void Sobel_phase_strm::thread_x0_V_36_fu_7734_p3() {
    x0_V_36_fu_7734_p3 = esl_concat<8,5>(grad_x_V_pixel_37_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_37_cast_fu_7860_p1() {
    x0_V_37_cast_fu_7860_p1 = esl_zext<14,13>(x0_V_37_fu_7852_p3.read());
}

void Sobel_phase_strm::thread_x0_V_37_fu_7852_p3() {
    x0_V_37_fu_7852_p3 = esl_concat<8,5>(grad_x_V_pixel_38_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_38_cast_fu_7978_p1() {
    x0_V_38_cast_fu_7978_p1 = esl_zext<14,13>(x0_V_38_fu_7970_p3.read());
}

void Sobel_phase_strm::thread_x0_V_38_fu_7970_p3() {
    x0_V_38_fu_7970_p3 = esl_concat<8,5>(grad_x_V_pixel_39_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_39_cast_fu_8096_p1() {
    x0_V_39_cast_fu_8096_p1 = esl_zext<14,13>(x0_V_39_fu_8088_p3.read());
}

void Sobel_phase_strm::thread_x0_V_39_fu_8088_p3() {
    x0_V_39_fu_8088_p3 = esl_concat<8,5>(grad_x_V_pixel_40_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_3_cast_fu_3730_p1() {
    x0_V_3_cast_fu_3730_p1 = esl_zext<14,13>(x0_V_3_fu_3722_p3.read());
}

void Sobel_phase_strm::thread_x0_V_3_fu_3722_p3() {
    x0_V_3_fu_3722_p3 = esl_concat<8,5>(grad_x_V_pixel_3_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_40_cast_fu_8214_p1() {
    x0_V_40_cast_fu_8214_p1 = esl_zext<14,13>(x0_V_40_fu_8206_p3.read());
}

void Sobel_phase_strm::thread_x0_V_40_fu_8206_p3() {
    x0_V_40_fu_8206_p3 = esl_concat<8,5>(grad_x_V_pixel_41_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_41_cast_fu_8332_p1() {
    x0_V_41_cast_fu_8332_p1 = esl_zext<14,13>(x0_V_41_fu_8324_p3.read());
}

void Sobel_phase_strm::thread_x0_V_41_fu_8324_p3() {
    x0_V_41_fu_8324_p3 = esl_concat<8,5>(grad_x_V_pixel_42_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_42_cast_fu_8450_p1() {
    x0_V_42_cast_fu_8450_p1 = esl_zext<14,13>(x0_V_42_fu_8442_p3.read());
}

void Sobel_phase_strm::thread_x0_V_42_fu_8442_p3() {
    x0_V_42_fu_8442_p3 = esl_concat<8,5>(grad_x_V_pixel_43_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_43_cast_fu_8568_p1() {
    x0_V_43_cast_fu_8568_p1 = esl_zext<14,13>(x0_V_43_fu_8560_p3.read());
}

void Sobel_phase_strm::thread_x0_V_43_fu_8560_p3() {
    x0_V_43_fu_8560_p3 = esl_concat<8,5>(grad_x_V_pixel_44_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_44_cast_fu_8686_p1() {
    x0_V_44_cast_fu_8686_p1 = esl_zext<14,13>(x0_V_44_fu_8678_p3.read());
}

void Sobel_phase_strm::thread_x0_V_44_fu_8678_p3() {
    x0_V_44_fu_8678_p3 = esl_concat<8,5>(grad_x_V_pixel_45_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_45_cast_fu_8804_p1() {
    x0_V_45_cast_fu_8804_p1 = esl_zext<14,13>(x0_V_45_fu_8796_p3.read());
}

void Sobel_phase_strm::thread_x0_V_45_fu_8796_p3() {
    x0_V_45_fu_8796_p3 = esl_concat<8,5>(grad_x_V_pixel_46_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_46_cast_fu_8922_p1() {
    x0_V_46_cast_fu_8922_p1 = esl_zext<14,13>(x0_V_46_fu_8914_p3.read());
}

void Sobel_phase_strm::thread_x0_V_46_fu_8914_p3() {
    x0_V_46_fu_8914_p3 = esl_concat<8,5>(grad_x_V_pixel_47_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_47_cast_fu_9040_p1() {
    x0_V_47_cast_fu_9040_p1 = esl_zext<14,13>(x0_V_47_fu_9032_p3.read());
}

void Sobel_phase_strm::thread_x0_V_47_fu_9032_p3() {
    x0_V_47_fu_9032_p3 = esl_concat<8,5>(grad_x_V_pixel_48_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_48_cast_fu_9158_p1() {
    x0_V_48_cast_fu_9158_p1 = esl_zext<14,13>(x0_V_48_fu_9150_p3.read());
}

void Sobel_phase_strm::thread_x0_V_48_fu_9150_p3() {
    x0_V_48_fu_9150_p3 = esl_concat<8,5>(grad_x_V_pixel_49_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_49_cast_fu_9276_p1() {
    x0_V_49_cast_fu_9276_p1 = esl_zext<14,13>(x0_V_49_fu_9268_p3.read());
}

void Sobel_phase_strm::thread_x0_V_49_fu_9268_p3() {
    x0_V_49_fu_9268_p3 = esl_concat<8,5>(grad_x_V_pixel_50_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_4_cast_fu_3848_p1() {
    x0_V_4_cast_fu_3848_p1 = esl_zext<14,13>(x0_V_4_fu_3840_p3.read());
}

void Sobel_phase_strm::thread_x0_V_4_fu_3840_p3() {
    x0_V_4_fu_3840_p3 = esl_concat<8,5>(grad_x_V_pixel_4_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_50_cast_fu_9394_p1() {
    x0_V_50_cast_fu_9394_p1 = esl_zext<14,13>(x0_V_50_fu_9386_p3.read());
}

void Sobel_phase_strm::thread_x0_V_50_fu_9386_p3() {
    x0_V_50_fu_9386_p3 = esl_concat<8,5>(grad_x_V_pixel_51_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_51_cast_fu_9512_p1() {
    x0_V_51_cast_fu_9512_p1 = esl_zext<14,13>(x0_V_51_fu_9504_p3.read());
}

void Sobel_phase_strm::thread_x0_V_51_fu_9504_p3() {
    x0_V_51_fu_9504_p3 = esl_concat<8,5>(grad_x_V_pixel_52_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_52_cast_fu_9630_p1() {
    x0_V_52_cast_fu_9630_p1 = esl_zext<14,13>(x0_V_52_fu_9622_p3.read());
}

void Sobel_phase_strm::thread_x0_V_52_fu_9622_p3() {
    x0_V_52_fu_9622_p3 = esl_concat<8,5>(grad_x_V_pixel_53_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_53_cast_fu_9748_p1() {
    x0_V_53_cast_fu_9748_p1 = esl_zext<14,13>(x0_V_53_fu_9740_p3.read());
}

void Sobel_phase_strm::thread_x0_V_53_fu_9740_p3() {
    x0_V_53_fu_9740_p3 = esl_concat<8,5>(grad_x_V_pixel_54_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_54_cast_fu_9866_p1() {
    x0_V_54_cast_fu_9866_p1 = esl_zext<14,13>(x0_V_54_fu_9858_p3.read());
}

void Sobel_phase_strm::thread_x0_V_54_fu_9858_p3() {
    x0_V_54_fu_9858_p3 = esl_concat<8,5>(grad_x_V_pixel_55_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_55_cast_fu_9984_p1() {
    x0_V_55_cast_fu_9984_p1 = esl_zext<14,13>(x0_V_55_fu_9976_p3.read());
}

void Sobel_phase_strm::thread_x0_V_55_fu_9976_p3() {
    x0_V_55_fu_9976_p3 = esl_concat<8,5>(grad_x_V_pixel_56_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_56_cast_fu_10102_p1() {
    x0_V_56_cast_fu_10102_p1 = esl_zext<14,13>(x0_V_56_fu_10094_p3.read());
}

void Sobel_phase_strm::thread_x0_V_56_fu_10094_p3() {
    x0_V_56_fu_10094_p3 = esl_concat<8,5>(grad_x_V_pixel_57_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_57_cast_fu_10220_p1() {
    x0_V_57_cast_fu_10220_p1 = esl_zext<14,13>(x0_V_57_fu_10212_p3.read());
}

void Sobel_phase_strm::thread_x0_V_57_fu_10212_p3() {
    x0_V_57_fu_10212_p3 = esl_concat<8,5>(grad_x_V_pixel_58_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_58_cast_fu_10338_p1() {
    x0_V_58_cast_fu_10338_p1 = esl_zext<14,13>(x0_V_58_fu_10330_p3.read());
}

void Sobel_phase_strm::thread_x0_V_58_fu_10330_p3() {
    x0_V_58_fu_10330_p3 = esl_concat<8,5>(grad_x_V_pixel_59_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_59_cast_fu_10456_p1() {
    x0_V_59_cast_fu_10456_p1 = esl_zext<14,13>(x0_V_59_fu_10448_p3.read());
}

void Sobel_phase_strm::thread_x0_V_59_fu_10448_p3() {
    x0_V_59_fu_10448_p3 = esl_concat<8,5>(grad_x_V_pixel_60_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_5_cast_fu_3966_p1() {
    x0_V_5_cast_fu_3966_p1 = esl_zext<14,13>(x0_V_5_fu_3958_p3.read());
}

void Sobel_phase_strm::thread_x0_V_5_fu_3958_p3() {
    x0_V_5_fu_3958_p3 = esl_concat<8,5>(grad_x_V_pixel_5_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_60_cast_fu_10574_p1() {
    x0_V_60_cast_fu_10574_p1 = esl_zext<14,13>(x0_V_60_fu_10566_p3.read());
}

void Sobel_phase_strm::thread_x0_V_60_fu_10566_p3() {
    x0_V_60_fu_10566_p3 = esl_concat<8,5>(grad_x_V_pixel_61_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_61_cast_fu_10692_p1() {
    x0_V_61_cast_fu_10692_p1 = esl_zext<14,13>(x0_V_61_fu_10684_p3.read());
}

void Sobel_phase_strm::thread_x0_V_61_fu_10684_p3() {
    x0_V_61_fu_10684_p3 = esl_concat<8,5>(grad_x_V_pixel_62_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_62_cast_fu_10810_p1() {
    x0_V_62_cast_fu_10810_p1 = esl_zext<14,13>(x0_V_62_fu_10802_p3.read());
}

void Sobel_phase_strm::thread_x0_V_62_fu_10802_p3() {
    x0_V_62_fu_10802_p3 = esl_concat<8,5>(grad_x_V_pixel_63_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_63_cast_fu_10928_p1() {
    x0_V_63_cast_fu_10928_p1 = esl_zext<14,13>(x0_V_63_fu_10920_p3.read());
}

void Sobel_phase_strm::thread_x0_V_63_fu_10920_p3() {
    x0_V_63_fu_10920_p3 = esl_concat<8,5>(grad_x_V_pixel_64_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_64_cast_fu_11046_p1() {
    x0_V_64_cast_fu_11046_p1 = esl_zext<14,13>(x0_V_64_fu_11038_p3.read());
}

void Sobel_phase_strm::thread_x0_V_64_fu_11038_p3() {
    x0_V_64_fu_11038_p3 = esl_concat<8,5>(grad_x_V_pixel_65_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_65_cast_fu_11164_p1() {
    x0_V_65_cast_fu_11164_p1 = esl_zext<14,13>(x0_V_65_fu_11156_p3.read());
}

void Sobel_phase_strm::thread_x0_V_65_fu_11156_p3() {
    x0_V_65_fu_11156_p3 = esl_concat<8,5>(grad_x_V_pixel_66_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_66_cast_fu_11282_p1() {
    x0_V_66_cast_fu_11282_p1 = esl_zext<14,13>(x0_V_66_fu_11274_p3.read());
}

void Sobel_phase_strm::thread_x0_V_66_fu_11274_p3() {
    x0_V_66_fu_11274_p3 = esl_concat<8,5>(grad_x_V_pixel_67_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_67_cast_fu_11400_p1() {
    x0_V_67_cast_fu_11400_p1 = esl_zext<14,13>(x0_V_67_fu_11392_p3.read());
}

void Sobel_phase_strm::thread_x0_V_67_fu_11392_p3() {
    x0_V_67_fu_11392_p3 = esl_concat<8,5>(grad_x_V_pixel_68_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_68_cast_fu_11518_p1() {
    x0_V_68_cast_fu_11518_p1 = esl_zext<14,13>(x0_V_68_fu_11510_p3.read());
}

void Sobel_phase_strm::thread_x0_V_68_fu_11510_p3() {
    x0_V_68_fu_11510_p3 = esl_concat<8,5>(grad_x_V_pixel_69_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_69_cast_fu_11636_p1() {
    x0_V_69_cast_fu_11636_p1 = esl_zext<14,13>(x0_V_69_fu_11628_p3.read());
}

void Sobel_phase_strm::thread_x0_V_69_fu_11628_p3() {
    x0_V_69_fu_11628_p3 = esl_concat<8,5>(grad_x_V_pixel_70_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_6_cast_fu_4084_p1() {
    x0_V_6_cast_fu_4084_p1 = esl_zext<14,13>(x0_V_6_fu_4076_p3.read());
}

void Sobel_phase_strm::thread_x0_V_6_fu_4076_p3() {
    x0_V_6_fu_4076_p3 = esl_concat<8,5>(grad_x_V_pixel_6_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_7_cast_fu_4202_p1() {
    x0_V_7_cast_fu_4202_p1 = esl_zext<14,13>(x0_V_7_fu_4194_p3.read());
}

void Sobel_phase_strm::thread_x0_V_7_fu_4194_p3() {
    x0_V_7_fu_4194_p3 = esl_concat<8,5>(grad_x_V_pixel_7_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_8_cast_fu_4320_p1() {
    x0_V_8_cast_fu_4320_p1 = esl_zext<14,13>(x0_V_8_fu_4312_p3.read());
}

void Sobel_phase_strm::thread_x0_V_8_fu_4312_p3() {
    x0_V_8_fu_4312_p3 = esl_concat<8,5>(grad_x_V_pixel_8_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_9_cast_fu_4438_p1() {
    x0_V_9_cast_fu_4438_p1 = esl_zext<14,13>(x0_V_9_fu_4430_p3.read());
}

void Sobel_phase_strm::thread_x0_V_9_fu_4430_p3() {
    x0_V_9_fu_4430_p3 = esl_concat<8,5>(grad_x_V_pixel_9_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_cast_1175_fu_4556_p1() {
    x0_V_cast_1175_fu_4556_p1 = esl_zext<14,13>(x0_V_s_fu_4548_p3.read());
}

void Sobel_phase_strm::thread_x0_V_cast_fu_3376_p1() {
    x0_V_cast_fu_3376_p1 = esl_zext<14,13>(x0_V_fu_3368_p3.read());
}

void Sobel_phase_strm::thread_x0_V_fu_3368_p3() {
    x0_V_fu_3368_p3 = esl_concat<8,5>(grad_x_V_pixel_0_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_s_fu_4548_p3() {
    x0_V_s_fu_4548_p3 = esl_concat<8,5>(grad_x_V_pixel_10_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x_1_fu_2782_p2() {
    x_1_fu_2782_p2 = (!x_reg_2765.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(x_reg_2765.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void Sobel_phase_strm::thread_x_V_1_0_1_fu_11734_p3() {
    x_V_1_0_1_fu_11734_p3 = (!dneg_0_1_reg_57762.read()[0].is_01())? sc_lv<15>(): ((dneg_0_1_reg_57762.read()[0].to_bool())? p_Val2_4_0_1_reg_57769.read(): p_Val2_12_0_1_reg_57779.read());
}

void Sobel_phase_strm::thread_x_V_1_0_2_fu_11814_p3() {
    x_V_1_0_2_fu_11814_p3 = (!dneg_0_2_fu_11748_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_2_fu_11748_p2.read()[0].to_bool())? p_Val2_4_0_2_fu_11772_p2.read(): p_Val2_12_0_2_fu_11802_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_3_fu_11892_p3() {
    x_V_1_0_3_fu_11892_p3 = (!dneg_0_3_fu_11830_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_3_fu_11830_p2.read()[0].to_bool())? p_Val2_4_0_3_fu_11850_p2.read(): p_Val2_12_0_3_fu_11880_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_4_fu_25542_p3() {
    x_V_1_0_4_fu_25542_p3 = (!dneg_0_4_fu_25508_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_4_fu_25508_p2.read()[0].to_bool())? p_Val2_4_0_4_fu_25516_p2.read(): p_Val2_12_0_4_fu_25532_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_5_fu_25620_p3() {
    x_V_1_0_5_fu_25620_p3 = (!dneg_0_5_fu_25558_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_5_fu_25558_p2.read()[0].to_bool())? p_Val2_4_0_5_fu_25578_p2.read(): p_Val2_12_0_5_fu_25608_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_1_fu_13674_p3() {
    x_V_1_10_1_fu_13674_p3 = (!dneg_10_1_reg_58142.read()[0].is_01())? sc_lv<15>(): ((dneg_10_1_reg_58142.read()[0].to_bool())? p_Val2_4_10_1_reg_58149.read(): p_Val2_12_10_1_reg_58159.read());
}

void Sobel_phase_strm::thread_x_V_1_10_2_fu_13754_p3() {
    x_V_1_10_2_fu_13754_p3 = (!dneg_10_2_fu_13688_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_2_fu_13688_p2.read()[0].to_bool())? p_Val2_4_10_2_fu_13712_p2.read(): p_Val2_12_10_2_fu_13742_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_3_fu_13832_p3() {
    x_V_1_10_3_fu_13832_p3 = (!dneg_10_3_fu_13770_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_3_fu_13770_p2.read()[0].to_bool())? p_Val2_4_10_3_fu_13790_p2.read(): p_Val2_12_10_3_fu_13820_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_4_fu_27022_p3() {
    x_V_1_10_4_fu_27022_p3 = (!dneg_10_4_fu_26988_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_4_fu_26988_p2.read()[0].to_bool())? p_Val2_4_10_4_fu_26996_p2.read(): p_Val2_12_10_4_fu_27012_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_5_fu_27100_p3() {
    x_V_1_10_5_fu_27100_p3 = (!dneg_10_5_fu_27038_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_5_fu_27038_p2.read()[0].to_bool())? p_Val2_4_10_5_fu_27058_p2.read(): p_Val2_12_10_5_fu_27088_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_1_fu_13868_p3() {
    x_V_1_11_1_fu_13868_p3 = (!dneg_11_1_reg_58180.read()[0].is_01())? sc_lv<15>(): ((dneg_11_1_reg_58180.read()[0].to_bool())? p_Val2_4_11_1_reg_58187.read(): p_Val2_12_11_1_reg_58197.read());
}

void Sobel_phase_strm::thread_x_V_1_11_2_fu_13948_p3() {
    x_V_1_11_2_fu_13948_p3 = (!dneg_11_2_fu_13882_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_2_fu_13882_p2.read()[0].to_bool())? p_Val2_4_11_2_fu_13906_p2.read(): p_Val2_12_11_2_fu_13936_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_3_fu_14026_p3() {
    x_V_1_11_3_fu_14026_p3 = (!dneg_11_3_fu_13964_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_3_fu_13964_p2.read()[0].to_bool())? p_Val2_4_11_3_fu_13984_p2.read(): p_Val2_12_11_3_fu_14014_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_4_fu_27170_p3() {
    x_V_1_11_4_fu_27170_p3 = (!dneg_11_4_fu_27136_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_4_fu_27136_p2.read()[0].to_bool())? p_Val2_4_11_4_fu_27144_p2.read(): p_Val2_12_11_4_fu_27160_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_5_fu_27248_p3() {
    x_V_1_11_5_fu_27248_p3 = (!dneg_11_5_fu_27186_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_5_fu_27186_p2.read()[0].to_bool())? p_Val2_4_11_5_fu_27206_p2.read(): p_Val2_12_11_5_fu_27236_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_1_fu_14062_p3() {
    x_V_1_12_1_fu_14062_p3 = (!dneg_12_1_reg_58218.read()[0].is_01())? sc_lv<15>(): ((dneg_12_1_reg_58218.read()[0].to_bool())? p_Val2_4_12_1_reg_58225.read(): p_Val2_12_12_1_reg_58235.read());
}

void Sobel_phase_strm::thread_x_V_1_12_2_fu_14142_p3() {
    x_V_1_12_2_fu_14142_p3 = (!dneg_12_2_fu_14076_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_2_fu_14076_p2.read()[0].to_bool())? p_Val2_4_12_2_fu_14100_p2.read(): p_Val2_12_12_2_fu_14130_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_3_fu_14220_p3() {
    x_V_1_12_3_fu_14220_p3 = (!dneg_12_3_fu_14158_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_3_fu_14158_p2.read()[0].to_bool())? p_Val2_4_12_3_fu_14178_p2.read(): p_Val2_12_12_3_fu_14208_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_4_fu_27318_p3() {
    x_V_1_12_4_fu_27318_p3 = (!dneg_12_4_fu_27284_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_4_fu_27284_p2.read()[0].to_bool())? p_Val2_4_12_4_fu_27292_p2.read(): p_Val2_12_12_4_fu_27308_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_5_fu_27396_p3() {
    x_V_1_12_5_fu_27396_p3 = (!dneg_12_5_fu_27334_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_5_fu_27334_p2.read()[0].to_bool())? p_Val2_4_12_5_fu_27354_p2.read(): p_Val2_12_12_5_fu_27384_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_1_fu_14256_p3() {
    x_V_1_13_1_fu_14256_p3 = (!dneg_13_1_reg_58256.read()[0].is_01())? sc_lv<15>(): ((dneg_13_1_reg_58256.read()[0].to_bool())? p_Val2_4_13_1_reg_58263.read(): p_Val2_12_13_1_reg_58273.read());
}

void Sobel_phase_strm::thread_x_V_1_13_2_fu_14336_p3() {
    x_V_1_13_2_fu_14336_p3 = (!dneg_13_2_fu_14270_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_2_fu_14270_p2.read()[0].to_bool())? p_Val2_4_13_2_fu_14294_p2.read(): p_Val2_12_13_2_fu_14324_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_3_fu_14414_p3() {
    x_V_1_13_3_fu_14414_p3 = (!dneg_13_3_fu_14352_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_3_fu_14352_p2.read()[0].to_bool())? p_Val2_4_13_3_fu_14372_p2.read(): p_Val2_12_13_3_fu_14402_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_4_fu_27466_p3() {
    x_V_1_13_4_fu_27466_p3 = (!dneg_13_4_fu_27432_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_4_fu_27432_p2.read()[0].to_bool())? p_Val2_4_13_4_fu_27440_p2.read(): p_Val2_12_13_4_fu_27456_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_5_fu_27544_p3() {
    x_V_1_13_5_fu_27544_p3 = (!dneg_13_5_fu_27482_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_5_fu_27482_p2.read()[0].to_bool())? p_Val2_4_13_5_fu_27502_p2.read(): p_Val2_12_13_5_fu_27532_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_1_fu_14450_p3() {
    x_V_1_14_1_fu_14450_p3 = (!dneg_14_1_reg_58294.read()[0].is_01())? sc_lv<15>(): ((dneg_14_1_reg_58294.read()[0].to_bool())? p_Val2_4_14_1_reg_58301.read(): p_Val2_12_14_1_reg_58311.read());
}

void Sobel_phase_strm::thread_x_V_1_14_2_fu_14530_p3() {
    x_V_1_14_2_fu_14530_p3 = (!dneg_14_2_fu_14464_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_2_fu_14464_p2.read()[0].to_bool())? p_Val2_4_14_2_fu_14488_p2.read(): p_Val2_12_14_2_fu_14518_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_3_fu_14608_p3() {
    x_V_1_14_3_fu_14608_p3 = (!dneg_14_3_fu_14546_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_3_fu_14546_p2.read()[0].to_bool())? p_Val2_4_14_3_fu_14566_p2.read(): p_Val2_12_14_3_fu_14596_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_4_fu_27614_p3() {
    x_V_1_14_4_fu_27614_p3 = (!dneg_14_4_fu_27580_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_4_fu_27580_p2.read()[0].to_bool())? p_Val2_4_14_4_fu_27588_p2.read(): p_Val2_12_14_4_fu_27604_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_5_fu_27692_p3() {
    x_V_1_14_5_fu_27692_p3 = (!dneg_14_5_fu_27630_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_5_fu_27630_p2.read()[0].to_bool())? p_Val2_4_14_5_fu_27650_p2.read(): p_Val2_12_14_5_fu_27680_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_1_fu_14644_p3() {
    x_V_1_15_1_fu_14644_p3 = (!dneg_15_1_reg_58332.read()[0].is_01())? sc_lv<15>(): ((dneg_15_1_reg_58332.read()[0].to_bool())? p_Val2_4_15_1_reg_58339.read(): p_Val2_12_15_1_reg_58349.read());
}

void Sobel_phase_strm::thread_x_V_1_15_2_fu_14724_p3() {
    x_V_1_15_2_fu_14724_p3 = (!dneg_15_2_fu_14658_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_2_fu_14658_p2.read()[0].to_bool())? p_Val2_4_15_2_fu_14682_p2.read(): p_Val2_12_15_2_fu_14712_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_3_fu_14802_p3() {
    x_V_1_15_3_fu_14802_p3 = (!dneg_15_3_fu_14740_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_3_fu_14740_p2.read()[0].to_bool())? p_Val2_4_15_3_fu_14760_p2.read(): p_Val2_12_15_3_fu_14790_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_4_fu_27762_p3() {
    x_V_1_15_4_fu_27762_p3 = (!dneg_15_4_fu_27728_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_4_fu_27728_p2.read()[0].to_bool())? p_Val2_4_15_4_fu_27736_p2.read(): p_Val2_12_15_4_fu_27752_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_5_fu_27840_p3() {
    x_V_1_15_5_fu_27840_p3 = (!dneg_15_5_fu_27778_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_5_fu_27778_p2.read()[0].to_bool())? p_Val2_4_15_5_fu_27798_p2.read(): p_Val2_12_15_5_fu_27828_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_1_fu_14838_p3() {
    x_V_1_16_1_fu_14838_p3 = (!dneg_16_1_reg_58370.read()[0].is_01())? sc_lv<15>(): ((dneg_16_1_reg_58370.read()[0].to_bool())? p_Val2_4_16_1_reg_58377.read(): p_Val2_12_16_1_reg_58387.read());
}

void Sobel_phase_strm::thread_x_V_1_16_2_fu_14918_p3() {
    x_V_1_16_2_fu_14918_p3 = (!dneg_16_2_fu_14852_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_2_fu_14852_p2.read()[0].to_bool())? p_Val2_4_16_2_fu_14876_p2.read(): p_Val2_12_16_2_fu_14906_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_3_fu_14996_p3() {
    x_V_1_16_3_fu_14996_p3 = (!dneg_16_3_fu_14934_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_3_fu_14934_p2.read()[0].to_bool())? p_Val2_4_16_3_fu_14954_p2.read(): p_Val2_12_16_3_fu_14984_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_4_fu_27910_p3() {
    x_V_1_16_4_fu_27910_p3 = (!dneg_16_4_fu_27876_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_4_fu_27876_p2.read()[0].to_bool())? p_Val2_4_16_4_fu_27884_p2.read(): p_Val2_12_16_4_fu_27900_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_5_fu_27988_p3() {
    x_V_1_16_5_fu_27988_p3 = (!dneg_16_5_fu_27926_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_5_fu_27926_p2.read()[0].to_bool())? p_Val2_4_16_5_fu_27946_p2.read(): p_Val2_12_16_5_fu_27976_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_1_fu_15032_p3() {
    x_V_1_17_1_fu_15032_p3 = (!dneg_17_1_reg_58408.read()[0].is_01())? sc_lv<15>(): ((dneg_17_1_reg_58408.read()[0].to_bool())? p_Val2_4_17_1_reg_58415.read(): p_Val2_12_17_1_reg_58425.read());
}

void Sobel_phase_strm::thread_x_V_1_17_2_fu_15112_p3() {
    x_V_1_17_2_fu_15112_p3 = (!dneg_17_2_fu_15046_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_2_fu_15046_p2.read()[0].to_bool())? p_Val2_4_17_2_fu_15070_p2.read(): p_Val2_12_17_2_fu_15100_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_3_fu_15190_p3() {
    x_V_1_17_3_fu_15190_p3 = (!dneg_17_3_fu_15128_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_3_fu_15128_p2.read()[0].to_bool())? p_Val2_4_17_3_fu_15148_p2.read(): p_Val2_12_17_3_fu_15178_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_4_fu_28058_p3() {
    x_V_1_17_4_fu_28058_p3 = (!dneg_17_4_fu_28024_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_4_fu_28024_p2.read()[0].to_bool())? p_Val2_4_17_4_fu_28032_p2.read(): p_Val2_12_17_4_fu_28048_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_5_fu_28136_p3() {
    x_V_1_17_5_fu_28136_p3 = (!dneg_17_5_fu_28074_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_5_fu_28074_p2.read()[0].to_bool())? p_Val2_4_17_5_fu_28094_p2.read(): p_Val2_12_17_5_fu_28124_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_1_fu_15226_p3() {
    x_V_1_18_1_fu_15226_p3 = (!dneg_18_1_reg_58446.read()[0].is_01())? sc_lv<15>(): ((dneg_18_1_reg_58446.read()[0].to_bool())? p_Val2_4_18_1_reg_58453.read(): p_Val2_12_18_1_reg_58463.read());
}

void Sobel_phase_strm::thread_x_V_1_18_2_fu_15306_p3() {
    x_V_1_18_2_fu_15306_p3 = (!dneg_18_2_fu_15240_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_2_fu_15240_p2.read()[0].to_bool())? p_Val2_4_18_2_fu_15264_p2.read(): p_Val2_12_18_2_fu_15294_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_3_fu_15384_p3() {
    x_V_1_18_3_fu_15384_p3 = (!dneg_18_3_fu_15322_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_3_fu_15322_p2.read()[0].to_bool())? p_Val2_4_18_3_fu_15342_p2.read(): p_Val2_12_18_3_fu_15372_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_4_fu_28206_p3() {
    x_V_1_18_4_fu_28206_p3 = (!dneg_18_4_fu_28172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_4_fu_28172_p2.read()[0].to_bool())? p_Val2_4_18_4_fu_28180_p2.read(): p_Val2_12_18_4_fu_28196_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_5_fu_28284_p3() {
    x_V_1_18_5_fu_28284_p3 = (!dneg_18_5_fu_28222_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_5_fu_28222_p2.read()[0].to_bool())? p_Val2_4_18_5_fu_28242_p2.read(): p_Val2_12_18_5_fu_28272_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_1_fu_15420_p3() {
    x_V_1_19_1_fu_15420_p3 = (!dneg_19_1_reg_58484.read()[0].is_01())? sc_lv<15>(): ((dneg_19_1_reg_58484.read()[0].to_bool())? p_Val2_4_19_1_reg_58491.read(): p_Val2_12_19_1_reg_58501.read());
}

void Sobel_phase_strm::thread_x_V_1_19_2_fu_15500_p3() {
    x_V_1_19_2_fu_15500_p3 = (!dneg_19_2_fu_15434_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_2_fu_15434_p2.read()[0].to_bool())? p_Val2_4_19_2_fu_15458_p2.read(): p_Val2_12_19_2_fu_15488_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_3_fu_15578_p3() {
    x_V_1_19_3_fu_15578_p3 = (!dneg_19_3_fu_15516_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_3_fu_15516_p2.read()[0].to_bool())? p_Val2_4_19_3_fu_15536_p2.read(): p_Val2_12_19_3_fu_15566_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_4_fu_28354_p3() {
    x_V_1_19_4_fu_28354_p3 = (!dneg_19_4_fu_28320_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_4_fu_28320_p2.read()[0].to_bool())? p_Val2_4_19_4_fu_28328_p2.read(): p_Val2_12_19_4_fu_28344_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_5_fu_28432_p3() {
    x_V_1_19_5_fu_28432_p3 = (!dneg_19_5_fu_28370_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_5_fu_28370_p2.read()[0].to_bool())? p_Val2_4_19_5_fu_28390_p2.read(): p_Val2_12_19_5_fu_28420_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_1_fu_11928_p3() {
    x_V_1_1_1_fu_11928_p3 = (!dneg_1_1_reg_57800.read()[0].is_01())? sc_lv<15>(): ((dneg_1_1_reg_57800.read()[0].to_bool())? p_Val2_4_1_1_reg_57807.read(): p_Val2_12_1_1_reg_57817.read());
}

void Sobel_phase_strm::thread_x_V_1_1_2_fu_12008_p3() {
    x_V_1_1_2_fu_12008_p3 = (!dneg_1_2_fu_11942_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_2_fu_11942_p2.read()[0].to_bool())? p_Val2_4_1_2_fu_11966_p2.read(): p_Val2_12_1_2_fu_11996_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_3_fu_12086_p3() {
    x_V_1_1_3_fu_12086_p3 = (!dneg_1_3_fu_12024_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_3_fu_12024_p2.read()[0].to_bool())? p_Val2_4_1_3_fu_12044_p2.read(): p_Val2_12_1_3_fu_12074_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_4_fu_25690_p3() {
    x_V_1_1_4_fu_25690_p3 = (!dneg_1_4_fu_25656_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_4_fu_25656_p2.read()[0].to_bool())? p_Val2_4_1_4_fu_25664_p2.read(): p_Val2_12_1_4_fu_25680_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_5_fu_25768_p3() {
    x_V_1_1_5_fu_25768_p3 = (!dneg_1_5_fu_25706_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_5_fu_25706_p2.read()[0].to_bool())? p_Val2_4_1_5_fu_25726_p2.read(): p_Val2_12_1_5_fu_25756_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_1_fu_15614_p3() {
    x_V_1_20_1_fu_15614_p3 = (!dneg_20_1_reg_58522.read()[0].is_01())? sc_lv<15>(): ((dneg_20_1_reg_58522.read()[0].to_bool())? p_Val2_4_20_1_reg_58529.read(): p_Val2_12_20_1_reg_58539.read());
}

void Sobel_phase_strm::thread_x_V_1_20_2_fu_15694_p3() {
    x_V_1_20_2_fu_15694_p3 = (!dneg_20_2_fu_15628_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_2_fu_15628_p2.read()[0].to_bool())? p_Val2_4_20_2_fu_15652_p2.read(): p_Val2_12_20_2_fu_15682_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_3_fu_15772_p3() {
    x_V_1_20_3_fu_15772_p3 = (!dneg_20_3_fu_15710_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_3_fu_15710_p2.read()[0].to_bool())? p_Val2_4_20_3_fu_15730_p2.read(): p_Val2_12_20_3_fu_15760_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_4_fu_28502_p3() {
    x_V_1_20_4_fu_28502_p3 = (!dneg_20_4_fu_28468_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_4_fu_28468_p2.read()[0].to_bool())? p_Val2_4_20_4_fu_28476_p2.read(): p_Val2_12_20_4_fu_28492_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_5_fu_28580_p3() {
    x_V_1_20_5_fu_28580_p3 = (!dneg_20_5_fu_28518_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_5_fu_28518_p2.read()[0].to_bool())? p_Val2_4_20_5_fu_28538_p2.read(): p_Val2_12_20_5_fu_28568_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_1_fu_15808_p3() {
    x_V_1_21_1_fu_15808_p3 = (!dneg_21_1_reg_58560.read()[0].is_01())? sc_lv<15>(): ((dneg_21_1_reg_58560.read()[0].to_bool())? p_Val2_4_21_1_reg_58567.read(): p_Val2_12_21_1_reg_58577.read());
}

void Sobel_phase_strm::thread_x_V_1_21_2_fu_15888_p3() {
    x_V_1_21_2_fu_15888_p3 = (!dneg_21_2_fu_15822_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_2_fu_15822_p2.read()[0].to_bool())? p_Val2_4_21_2_fu_15846_p2.read(): p_Val2_12_21_2_fu_15876_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_3_fu_15966_p3() {
    x_V_1_21_3_fu_15966_p3 = (!dneg_21_3_fu_15904_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_3_fu_15904_p2.read()[0].to_bool())? p_Val2_4_21_3_fu_15924_p2.read(): p_Val2_12_21_3_fu_15954_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_4_fu_28650_p3() {
    x_V_1_21_4_fu_28650_p3 = (!dneg_21_4_fu_28616_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_4_fu_28616_p2.read()[0].to_bool())? p_Val2_4_21_4_fu_28624_p2.read(): p_Val2_12_21_4_fu_28640_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_5_fu_28728_p3() {
    x_V_1_21_5_fu_28728_p3 = (!dneg_21_5_fu_28666_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_5_fu_28666_p2.read()[0].to_bool())? p_Val2_4_21_5_fu_28686_p2.read(): p_Val2_12_21_5_fu_28716_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_1_fu_16002_p3() {
    x_V_1_22_1_fu_16002_p3 = (!dneg_22_1_reg_58598.read()[0].is_01())? sc_lv<15>(): ((dneg_22_1_reg_58598.read()[0].to_bool())? p_Val2_4_22_1_reg_58605.read(): p_Val2_12_22_1_reg_58615.read());
}

void Sobel_phase_strm::thread_x_V_1_22_2_fu_16082_p3() {
    x_V_1_22_2_fu_16082_p3 = (!dneg_22_2_fu_16016_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_2_fu_16016_p2.read()[0].to_bool())? p_Val2_4_22_2_fu_16040_p2.read(): p_Val2_12_22_2_fu_16070_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_3_fu_16160_p3() {
    x_V_1_22_3_fu_16160_p3 = (!dneg_22_3_fu_16098_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_3_fu_16098_p2.read()[0].to_bool())? p_Val2_4_22_3_fu_16118_p2.read(): p_Val2_12_22_3_fu_16148_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_4_fu_28798_p3() {
    x_V_1_22_4_fu_28798_p3 = (!dneg_22_4_fu_28764_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_4_fu_28764_p2.read()[0].to_bool())? p_Val2_4_22_4_fu_28772_p2.read(): p_Val2_12_22_4_fu_28788_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_5_fu_28876_p3() {
    x_V_1_22_5_fu_28876_p3 = (!dneg_22_5_fu_28814_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_5_fu_28814_p2.read()[0].to_bool())? p_Val2_4_22_5_fu_28834_p2.read(): p_Val2_12_22_5_fu_28864_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_1_fu_16196_p3() {
    x_V_1_23_1_fu_16196_p3 = (!dneg_23_1_reg_58636.read()[0].is_01())? sc_lv<15>(): ((dneg_23_1_reg_58636.read()[0].to_bool())? p_Val2_4_23_1_reg_58643.read(): p_Val2_12_23_1_reg_58653.read());
}

void Sobel_phase_strm::thread_x_V_1_23_2_fu_16276_p3() {
    x_V_1_23_2_fu_16276_p3 = (!dneg_23_2_fu_16210_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_2_fu_16210_p2.read()[0].to_bool())? p_Val2_4_23_2_fu_16234_p2.read(): p_Val2_12_23_2_fu_16264_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_3_fu_16354_p3() {
    x_V_1_23_3_fu_16354_p3 = (!dneg_23_3_fu_16292_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_3_fu_16292_p2.read()[0].to_bool())? p_Val2_4_23_3_fu_16312_p2.read(): p_Val2_12_23_3_fu_16342_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_4_fu_28946_p3() {
    x_V_1_23_4_fu_28946_p3 = (!dneg_23_4_fu_28912_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_4_fu_28912_p2.read()[0].to_bool())? p_Val2_4_23_4_fu_28920_p2.read(): p_Val2_12_23_4_fu_28936_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_5_fu_29024_p3() {
    x_V_1_23_5_fu_29024_p3 = (!dneg_23_5_fu_28962_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_5_fu_28962_p2.read()[0].to_bool())? p_Val2_4_23_5_fu_28982_p2.read(): p_Val2_12_23_5_fu_29012_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_1_fu_16390_p3() {
    x_V_1_24_1_fu_16390_p3 = (!dneg_24_1_reg_58674.read()[0].is_01())? sc_lv<15>(): ((dneg_24_1_reg_58674.read()[0].to_bool())? p_Val2_4_24_1_reg_58681.read(): p_Val2_12_24_1_reg_58691.read());
}

void Sobel_phase_strm::thread_x_V_1_24_2_fu_16470_p3() {
    x_V_1_24_2_fu_16470_p3 = (!dneg_24_2_fu_16404_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_2_fu_16404_p2.read()[0].to_bool())? p_Val2_4_24_2_fu_16428_p2.read(): p_Val2_12_24_2_fu_16458_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_3_fu_16548_p3() {
    x_V_1_24_3_fu_16548_p3 = (!dneg_24_3_fu_16486_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_3_fu_16486_p2.read()[0].to_bool())? p_Val2_4_24_3_fu_16506_p2.read(): p_Val2_12_24_3_fu_16536_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_4_fu_29094_p3() {
    x_V_1_24_4_fu_29094_p3 = (!dneg_24_4_fu_29060_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_4_fu_29060_p2.read()[0].to_bool())? p_Val2_4_24_4_fu_29068_p2.read(): p_Val2_12_24_4_fu_29084_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_5_fu_29172_p3() {
    x_V_1_24_5_fu_29172_p3 = (!dneg_24_5_fu_29110_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_5_fu_29110_p2.read()[0].to_bool())? p_Val2_4_24_5_fu_29130_p2.read(): p_Val2_12_24_5_fu_29160_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_1_fu_16584_p3() {
    x_V_1_25_1_fu_16584_p3 = (!dneg_25_1_reg_58712.read()[0].is_01())? sc_lv<15>(): ((dneg_25_1_reg_58712.read()[0].to_bool())? p_Val2_4_25_1_reg_58719.read(): p_Val2_12_25_1_reg_58729.read());
}

void Sobel_phase_strm::thread_x_V_1_25_2_fu_16664_p3() {
    x_V_1_25_2_fu_16664_p3 = (!dneg_25_2_fu_16598_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_2_fu_16598_p2.read()[0].to_bool())? p_Val2_4_25_2_fu_16622_p2.read(): p_Val2_12_25_2_fu_16652_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_3_fu_16742_p3() {
    x_V_1_25_3_fu_16742_p3 = (!dneg_25_3_fu_16680_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_3_fu_16680_p2.read()[0].to_bool())? p_Val2_4_25_3_fu_16700_p2.read(): p_Val2_12_25_3_fu_16730_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_4_fu_29242_p3() {
    x_V_1_25_4_fu_29242_p3 = (!dneg_25_4_fu_29208_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_4_fu_29208_p2.read()[0].to_bool())? p_Val2_4_25_4_fu_29216_p2.read(): p_Val2_12_25_4_fu_29232_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_5_fu_29320_p3() {
    x_V_1_25_5_fu_29320_p3 = (!dneg_25_5_fu_29258_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_5_fu_29258_p2.read()[0].to_bool())? p_Val2_4_25_5_fu_29278_p2.read(): p_Val2_12_25_5_fu_29308_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_1_fu_16778_p3() {
    x_V_1_26_1_fu_16778_p3 = (!dneg_26_1_reg_58750.read()[0].is_01())? sc_lv<15>(): ((dneg_26_1_reg_58750.read()[0].to_bool())? p_Val2_4_26_1_reg_58757.read(): p_Val2_12_26_1_reg_58767.read());
}

void Sobel_phase_strm::thread_x_V_1_26_2_fu_16858_p3() {
    x_V_1_26_2_fu_16858_p3 = (!dneg_26_2_fu_16792_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_2_fu_16792_p2.read()[0].to_bool())? p_Val2_4_26_2_fu_16816_p2.read(): p_Val2_12_26_2_fu_16846_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_3_fu_16936_p3() {
    x_V_1_26_3_fu_16936_p3 = (!dneg_26_3_fu_16874_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_3_fu_16874_p2.read()[0].to_bool())? p_Val2_4_26_3_fu_16894_p2.read(): p_Val2_12_26_3_fu_16924_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_4_fu_29390_p3() {
    x_V_1_26_4_fu_29390_p3 = (!dneg_26_4_fu_29356_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_4_fu_29356_p2.read()[0].to_bool())? p_Val2_4_26_4_fu_29364_p2.read(): p_Val2_12_26_4_fu_29380_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_5_fu_29468_p3() {
    x_V_1_26_5_fu_29468_p3 = (!dneg_26_5_fu_29406_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_5_fu_29406_p2.read()[0].to_bool())? p_Val2_4_26_5_fu_29426_p2.read(): p_Val2_12_26_5_fu_29456_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_1_fu_16972_p3() {
    x_V_1_27_1_fu_16972_p3 = (!dneg_27_1_reg_58788.read()[0].is_01())? sc_lv<15>(): ((dneg_27_1_reg_58788.read()[0].to_bool())? p_Val2_4_27_1_reg_58795.read(): p_Val2_12_27_1_reg_58805.read());
}

void Sobel_phase_strm::thread_x_V_1_27_2_fu_17052_p3() {
    x_V_1_27_2_fu_17052_p3 = (!dneg_27_2_fu_16986_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_2_fu_16986_p2.read()[0].to_bool())? p_Val2_4_27_2_fu_17010_p2.read(): p_Val2_12_27_2_fu_17040_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_3_fu_17130_p3() {
    x_V_1_27_3_fu_17130_p3 = (!dneg_27_3_fu_17068_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_3_fu_17068_p2.read()[0].to_bool())? p_Val2_4_27_3_fu_17088_p2.read(): p_Val2_12_27_3_fu_17118_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_4_fu_29538_p3() {
    x_V_1_27_4_fu_29538_p3 = (!dneg_27_4_fu_29504_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_4_fu_29504_p2.read()[0].to_bool())? p_Val2_4_27_4_fu_29512_p2.read(): p_Val2_12_27_4_fu_29528_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_5_fu_29616_p3() {
    x_V_1_27_5_fu_29616_p3 = (!dneg_27_5_fu_29554_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_5_fu_29554_p2.read()[0].to_bool())? p_Val2_4_27_5_fu_29574_p2.read(): p_Val2_12_27_5_fu_29604_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_1_fu_17166_p3() {
    x_V_1_28_1_fu_17166_p3 = (!dneg_28_1_reg_58826.read()[0].is_01())? sc_lv<15>(): ((dneg_28_1_reg_58826.read()[0].to_bool())? p_Val2_4_28_1_reg_58833.read(): p_Val2_12_28_1_reg_58843.read());
}

void Sobel_phase_strm::thread_x_V_1_28_2_fu_17246_p3() {
    x_V_1_28_2_fu_17246_p3 = (!dneg_28_2_fu_17180_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_2_fu_17180_p2.read()[0].to_bool())? p_Val2_4_28_2_fu_17204_p2.read(): p_Val2_12_28_2_fu_17234_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_3_fu_17324_p3() {
    x_V_1_28_3_fu_17324_p3 = (!dneg_28_3_fu_17262_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_3_fu_17262_p2.read()[0].to_bool())? p_Val2_4_28_3_fu_17282_p2.read(): p_Val2_12_28_3_fu_17312_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_4_fu_29686_p3() {
    x_V_1_28_4_fu_29686_p3 = (!dneg_28_4_fu_29652_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_4_fu_29652_p2.read()[0].to_bool())? p_Val2_4_28_4_fu_29660_p2.read(): p_Val2_12_28_4_fu_29676_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_5_fu_29764_p3() {
    x_V_1_28_5_fu_29764_p3 = (!dneg_28_5_fu_29702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_5_fu_29702_p2.read()[0].to_bool())? p_Val2_4_28_5_fu_29722_p2.read(): p_Val2_12_28_5_fu_29752_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_1_fu_17360_p3() {
    x_V_1_29_1_fu_17360_p3 = (!dneg_29_1_reg_58864.read()[0].is_01())? sc_lv<15>(): ((dneg_29_1_reg_58864.read()[0].to_bool())? p_Val2_4_29_1_reg_58871.read(): p_Val2_12_29_1_reg_58881.read());
}

void Sobel_phase_strm::thread_x_V_1_29_2_fu_17440_p3() {
    x_V_1_29_2_fu_17440_p3 = (!dneg_29_2_fu_17374_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_2_fu_17374_p2.read()[0].to_bool())? p_Val2_4_29_2_fu_17398_p2.read(): p_Val2_12_29_2_fu_17428_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_3_fu_17518_p3() {
    x_V_1_29_3_fu_17518_p3 = (!dneg_29_3_fu_17456_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_3_fu_17456_p2.read()[0].to_bool())? p_Val2_4_29_3_fu_17476_p2.read(): p_Val2_12_29_3_fu_17506_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_4_fu_29834_p3() {
    x_V_1_29_4_fu_29834_p3 = (!dneg_29_4_fu_29800_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_4_fu_29800_p2.read()[0].to_bool())? p_Val2_4_29_4_fu_29808_p2.read(): p_Val2_12_29_4_fu_29824_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_5_fu_29912_p3() {
    x_V_1_29_5_fu_29912_p3 = (!dneg_29_5_fu_29850_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_5_fu_29850_p2.read()[0].to_bool())? p_Val2_4_29_5_fu_29870_p2.read(): p_Val2_12_29_5_fu_29900_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_1_fu_12122_p3() {
    x_V_1_2_1_fu_12122_p3 = (!dneg_2_1_reg_57838.read()[0].is_01())? sc_lv<15>(): ((dneg_2_1_reg_57838.read()[0].to_bool())? p_Val2_4_2_1_reg_57845.read(): p_Val2_12_2_1_reg_57855.read());
}

void Sobel_phase_strm::thread_x_V_1_2_2_fu_12202_p3() {
    x_V_1_2_2_fu_12202_p3 = (!dneg_2_2_fu_12136_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_2_fu_12136_p2.read()[0].to_bool())? p_Val2_4_2_2_fu_12160_p2.read(): p_Val2_12_2_2_fu_12190_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_3_fu_12280_p3() {
    x_V_1_2_3_fu_12280_p3 = (!dneg_2_3_fu_12218_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_3_fu_12218_p2.read()[0].to_bool())? p_Val2_4_2_3_fu_12238_p2.read(): p_Val2_12_2_3_fu_12268_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_4_fu_25838_p3() {
    x_V_1_2_4_fu_25838_p3 = (!dneg_2_4_fu_25804_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_4_fu_25804_p2.read()[0].to_bool())? p_Val2_4_2_4_fu_25812_p2.read(): p_Val2_12_2_4_fu_25828_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_5_fu_25916_p3() {
    x_V_1_2_5_fu_25916_p3 = (!dneg_2_5_fu_25854_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_5_fu_25854_p2.read()[0].to_bool())? p_Val2_4_2_5_fu_25874_p2.read(): p_Val2_12_2_5_fu_25904_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_1_fu_17554_p3() {
    x_V_1_30_1_fu_17554_p3 = (!dneg_30_1_reg_58902.read()[0].is_01())? sc_lv<15>(): ((dneg_30_1_reg_58902.read()[0].to_bool())? p_Val2_4_30_1_reg_58909.read(): p_Val2_12_30_1_reg_58919.read());
}

void Sobel_phase_strm::thread_x_V_1_30_2_fu_17634_p3() {
    x_V_1_30_2_fu_17634_p3 = (!dneg_30_2_fu_17568_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_2_fu_17568_p2.read()[0].to_bool())? p_Val2_4_30_2_fu_17592_p2.read(): p_Val2_12_30_2_fu_17622_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_3_fu_17712_p3() {
    x_V_1_30_3_fu_17712_p3 = (!dneg_30_3_fu_17650_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_3_fu_17650_p2.read()[0].to_bool())? p_Val2_4_30_3_fu_17670_p2.read(): p_Val2_12_30_3_fu_17700_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_4_fu_29982_p3() {
    x_V_1_30_4_fu_29982_p3 = (!dneg_30_4_fu_29948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_4_fu_29948_p2.read()[0].to_bool())? p_Val2_4_30_4_fu_29956_p2.read(): p_Val2_12_30_4_fu_29972_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_5_fu_30060_p3() {
    x_V_1_30_5_fu_30060_p3 = (!dneg_30_5_fu_29998_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_5_fu_29998_p2.read()[0].to_bool())? p_Val2_4_30_5_fu_30018_p2.read(): p_Val2_12_30_5_fu_30048_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_1_fu_17748_p3() {
    x_V_1_31_1_fu_17748_p3 = (!dneg_31_1_reg_58940.read()[0].is_01())? sc_lv<15>(): ((dneg_31_1_reg_58940.read()[0].to_bool())? p_Val2_4_31_1_reg_58947.read(): p_Val2_12_31_1_reg_58957.read());
}

void Sobel_phase_strm::thread_x_V_1_31_2_fu_17828_p3() {
    x_V_1_31_2_fu_17828_p3 = (!dneg_31_2_fu_17762_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_2_fu_17762_p2.read()[0].to_bool())? p_Val2_4_31_2_fu_17786_p2.read(): p_Val2_12_31_2_fu_17816_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_3_fu_17906_p3() {
    x_V_1_31_3_fu_17906_p3 = (!dneg_31_3_fu_17844_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_3_fu_17844_p2.read()[0].to_bool())? p_Val2_4_31_3_fu_17864_p2.read(): p_Val2_12_31_3_fu_17894_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_4_fu_30130_p3() {
    x_V_1_31_4_fu_30130_p3 = (!dneg_31_4_fu_30096_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_4_fu_30096_p2.read()[0].to_bool())? p_Val2_4_31_4_fu_30104_p2.read(): p_Val2_12_31_4_fu_30120_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_5_fu_30208_p3() {
    x_V_1_31_5_fu_30208_p3 = (!dneg_31_5_fu_30146_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_5_fu_30146_p2.read()[0].to_bool())? p_Val2_4_31_5_fu_30166_p2.read(): p_Val2_12_31_5_fu_30196_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_1_fu_17942_p3() {
    x_V_1_32_1_fu_17942_p3 = (!dneg_32_1_reg_58978.read()[0].is_01())? sc_lv<15>(): ((dneg_32_1_reg_58978.read()[0].to_bool())? p_Val2_4_32_1_reg_58985.read(): p_Val2_12_32_1_reg_58995.read());
}

void Sobel_phase_strm::thread_x_V_1_32_2_fu_18022_p3() {
    x_V_1_32_2_fu_18022_p3 = (!dneg_32_2_fu_17956_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_2_fu_17956_p2.read()[0].to_bool())? p_Val2_4_32_2_fu_17980_p2.read(): p_Val2_12_32_2_fu_18010_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_3_fu_18100_p3() {
    x_V_1_32_3_fu_18100_p3 = (!dneg_32_3_fu_18038_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_3_fu_18038_p2.read()[0].to_bool())? p_Val2_4_32_3_fu_18058_p2.read(): p_Val2_12_32_3_fu_18088_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_4_fu_30278_p3() {
    x_V_1_32_4_fu_30278_p3 = (!dneg_32_4_fu_30244_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_4_fu_30244_p2.read()[0].to_bool())? p_Val2_4_32_4_fu_30252_p2.read(): p_Val2_12_32_4_fu_30268_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_5_fu_30356_p3() {
    x_V_1_32_5_fu_30356_p3 = (!dneg_32_5_fu_30294_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_5_fu_30294_p2.read()[0].to_bool())? p_Val2_4_32_5_fu_30314_p2.read(): p_Val2_12_32_5_fu_30344_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_1_fu_18136_p3() {
    x_V_1_33_1_fu_18136_p3 = (!dneg_33_1_reg_59016.read()[0].is_01())? sc_lv<15>(): ((dneg_33_1_reg_59016.read()[0].to_bool())? p_Val2_4_33_1_reg_59023.read(): p_Val2_12_33_1_reg_59033.read());
}

void Sobel_phase_strm::thread_x_V_1_33_2_fu_18216_p3() {
    x_V_1_33_2_fu_18216_p3 = (!dneg_33_2_fu_18150_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_2_fu_18150_p2.read()[0].to_bool())? p_Val2_4_33_2_fu_18174_p2.read(): p_Val2_12_33_2_fu_18204_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_3_fu_18294_p3() {
    x_V_1_33_3_fu_18294_p3 = (!dneg_33_3_fu_18232_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_3_fu_18232_p2.read()[0].to_bool())? p_Val2_4_33_3_fu_18252_p2.read(): p_Val2_12_33_3_fu_18282_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_4_fu_30426_p3() {
    x_V_1_33_4_fu_30426_p3 = (!dneg_33_4_fu_30392_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_4_fu_30392_p2.read()[0].to_bool())? p_Val2_4_33_4_fu_30400_p2.read(): p_Val2_12_33_4_fu_30416_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_5_fu_30504_p3() {
    x_V_1_33_5_fu_30504_p3 = (!dneg_33_5_fu_30442_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_5_fu_30442_p2.read()[0].to_bool())? p_Val2_4_33_5_fu_30462_p2.read(): p_Val2_12_33_5_fu_30492_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_1_fu_18330_p3() {
    x_V_1_34_1_fu_18330_p3 = (!dneg_34_1_reg_59054.read()[0].is_01())? sc_lv<15>(): ((dneg_34_1_reg_59054.read()[0].to_bool())? p_Val2_4_34_1_reg_59061.read(): p_Val2_12_34_1_reg_59071.read());
}

void Sobel_phase_strm::thread_x_V_1_34_2_fu_18410_p3() {
    x_V_1_34_2_fu_18410_p3 = (!dneg_34_2_fu_18344_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_2_fu_18344_p2.read()[0].to_bool())? p_Val2_4_34_2_fu_18368_p2.read(): p_Val2_12_34_2_fu_18398_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_3_fu_18488_p3() {
    x_V_1_34_3_fu_18488_p3 = (!dneg_34_3_fu_18426_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_3_fu_18426_p2.read()[0].to_bool())? p_Val2_4_34_3_fu_18446_p2.read(): p_Val2_12_34_3_fu_18476_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_4_fu_30574_p3() {
    x_V_1_34_4_fu_30574_p3 = (!dneg_34_4_fu_30540_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_4_fu_30540_p2.read()[0].to_bool())? p_Val2_4_34_4_fu_30548_p2.read(): p_Val2_12_34_4_fu_30564_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_5_fu_30652_p3() {
    x_V_1_34_5_fu_30652_p3 = (!dneg_34_5_fu_30590_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_5_fu_30590_p2.read()[0].to_bool())? p_Val2_4_34_5_fu_30610_p2.read(): p_Val2_12_34_5_fu_30640_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_1_fu_18524_p3() {
    x_V_1_35_1_fu_18524_p3 = (!dneg_35_1_reg_59092.read()[0].is_01())? sc_lv<15>(): ((dneg_35_1_reg_59092.read()[0].to_bool())? p_Val2_4_35_1_reg_59099.read(): p_Val2_12_35_1_reg_59109.read());
}

void Sobel_phase_strm::thread_x_V_1_35_2_fu_18604_p3() {
    x_V_1_35_2_fu_18604_p3 = (!dneg_35_2_fu_18538_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_2_fu_18538_p2.read()[0].to_bool())? p_Val2_4_35_2_fu_18562_p2.read(): p_Val2_12_35_2_fu_18592_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_3_fu_18682_p3() {
    x_V_1_35_3_fu_18682_p3 = (!dneg_35_3_fu_18620_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_3_fu_18620_p2.read()[0].to_bool())? p_Val2_4_35_3_fu_18640_p2.read(): p_Val2_12_35_3_fu_18670_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_4_fu_30722_p3() {
    x_V_1_35_4_fu_30722_p3 = (!dneg_35_4_fu_30688_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_4_fu_30688_p2.read()[0].to_bool())? p_Val2_4_35_4_fu_30696_p2.read(): p_Val2_12_35_4_fu_30712_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_5_fu_30800_p3() {
    x_V_1_35_5_fu_30800_p3 = (!dneg_35_5_fu_30738_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_5_fu_30738_p2.read()[0].to_bool())? p_Val2_4_35_5_fu_30758_p2.read(): p_Val2_12_35_5_fu_30788_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_1_fu_18718_p3() {
    x_V_1_36_1_fu_18718_p3 = (!dneg_36_1_reg_59130.read()[0].is_01())? sc_lv<15>(): ((dneg_36_1_reg_59130.read()[0].to_bool())? p_Val2_4_36_1_reg_59137.read(): p_Val2_12_36_1_reg_59147.read());
}

void Sobel_phase_strm::thread_x_V_1_36_2_fu_18798_p3() {
    x_V_1_36_2_fu_18798_p3 = (!dneg_36_2_fu_18732_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_2_fu_18732_p2.read()[0].to_bool())? p_Val2_4_36_2_fu_18756_p2.read(): p_Val2_12_36_2_fu_18786_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_3_fu_18876_p3() {
    x_V_1_36_3_fu_18876_p3 = (!dneg_36_3_fu_18814_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_3_fu_18814_p2.read()[0].to_bool())? p_Val2_4_36_3_fu_18834_p2.read(): p_Val2_12_36_3_fu_18864_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_4_fu_30870_p3() {
    x_V_1_36_4_fu_30870_p3 = (!dneg_36_4_fu_30836_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_4_fu_30836_p2.read()[0].to_bool())? p_Val2_4_36_4_fu_30844_p2.read(): p_Val2_12_36_4_fu_30860_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_5_fu_30948_p3() {
    x_V_1_36_5_fu_30948_p3 = (!dneg_36_5_fu_30886_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_5_fu_30886_p2.read()[0].to_bool())? p_Val2_4_36_5_fu_30906_p2.read(): p_Val2_12_36_5_fu_30936_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_1_fu_18912_p3() {
    x_V_1_37_1_fu_18912_p3 = (!dneg_37_1_reg_59168.read()[0].is_01())? sc_lv<15>(): ((dneg_37_1_reg_59168.read()[0].to_bool())? p_Val2_4_37_1_reg_59175.read(): p_Val2_12_37_1_reg_59185.read());
}

void Sobel_phase_strm::thread_x_V_1_37_2_fu_18992_p3() {
    x_V_1_37_2_fu_18992_p3 = (!dneg_37_2_fu_18926_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_2_fu_18926_p2.read()[0].to_bool())? p_Val2_4_37_2_fu_18950_p2.read(): p_Val2_12_37_2_fu_18980_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_3_fu_19070_p3() {
    x_V_1_37_3_fu_19070_p3 = (!dneg_37_3_fu_19008_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_3_fu_19008_p2.read()[0].to_bool())? p_Val2_4_37_3_fu_19028_p2.read(): p_Val2_12_37_3_fu_19058_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_4_fu_31018_p3() {
    x_V_1_37_4_fu_31018_p3 = (!dneg_37_4_fu_30984_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_4_fu_30984_p2.read()[0].to_bool())? p_Val2_4_37_4_fu_30992_p2.read(): p_Val2_12_37_4_fu_31008_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_5_fu_31096_p3() {
    x_V_1_37_5_fu_31096_p3 = (!dneg_37_5_fu_31034_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_5_fu_31034_p2.read()[0].to_bool())? p_Val2_4_37_5_fu_31054_p2.read(): p_Val2_12_37_5_fu_31084_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_1_fu_19106_p3() {
    x_V_1_38_1_fu_19106_p3 = (!dneg_38_1_reg_59206.read()[0].is_01())? sc_lv<15>(): ((dneg_38_1_reg_59206.read()[0].to_bool())? p_Val2_4_38_1_reg_59213.read(): p_Val2_12_38_1_reg_59223.read());
}

void Sobel_phase_strm::thread_x_V_1_38_2_fu_19186_p3() {
    x_V_1_38_2_fu_19186_p3 = (!dneg_38_2_fu_19120_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_2_fu_19120_p2.read()[0].to_bool())? p_Val2_4_38_2_fu_19144_p2.read(): p_Val2_12_38_2_fu_19174_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_3_fu_19264_p3() {
    x_V_1_38_3_fu_19264_p3 = (!dneg_38_3_fu_19202_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_3_fu_19202_p2.read()[0].to_bool())? p_Val2_4_38_3_fu_19222_p2.read(): p_Val2_12_38_3_fu_19252_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_4_fu_31166_p3() {
    x_V_1_38_4_fu_31166_p3 = (!dneg_38_4_fu_31132_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_4_fu_31132_p2.read()[0].to_bool())? p_Val2_4_38_4_fu_31140_p2.read(): p_Val2_12_38_4_fu_31156_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_5_fu_31244_p3() {
    x_V_1_38_5_fu_31244_p3 = (!dneg_38_5_fu_31182_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_5_fu_31182_p2.read()[0].to_bool())? p_Val2_4_38_5_fu_31202_p2.read(): p_Val2_12_38_5_fu_31232_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_1_fu_19300_p3() {
    x_V_1_39_1_fu_19300_p3 = (!dneg_39_1_reg_59244.read()[0].is_01())? sc_lv<15>(): ((dneg_39_1_reg_59244.read()[0].to_bool())? p_Val2_4_39_1_reg_59251.read(): p_Val2_12_39_1_reg_59261.read());
}

void Sobel_phase_strm::thread_x_V_1_39_2_fu_19380_p3() {
    x_V_1_39_2_fu_19380_p3 = (!dneg_39_2_fu_19314_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_2_fu_19314_p2.read()[0].to_bool())? p_Val2_4_39_2_fu_19338_p2.read(): p_Val2_12_39_2_fu_19368_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_3_fu_19458_p3() {
    x_V_1_39_3_fu_19458_p3 = (!dneg_39_3_fu_19396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_3_fu_19396_p2.read()[0].to_bool())? p_Val2_4_39_3_fu_19416_p2.read(): p_Val2_12_39_3_fu_19446_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_4_fu_31314_p3() {
    x_V_1_39_4_fu_31314_p3 = (!dneg_39_4_fu_31280_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_4_fu_31280_p2.read()[0].to_bool())? p_Val2_4_39_4_fu_31288_p2.read(): p_Val2_12_39_4_fu_31304_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_5_fu_31392_p3() {
    x_V_1_39_5_fu_31392_p3 = (!dneg_39_5_fu_31330_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_5_fu_31330_p2.read()[0].to_bool())? p_Val2_4_39_5_fu_31350_p2.read(): p_Val2_12_39_5_fu_31380_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_1_fu_12316_p3() {
    x_V_1_3_1_fu_12316_p3 = (!dneg_3_1_reg_57876.read()[0].is_01())? sc_lv<15>(): ((dneg_3_1_reg_57876.read()[0].to_bool())? p_Val2_4_3_1_reg_57883.read(): p_Val2_12_3_1_reg_57893.read());
}

void Sobel_phase_strm::thread_x_V_1_3_2_fu_12396_p3() {
    x_V_1_3_2_fu_12396_p3 = (!dneg_3_2_fu_12330_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_2_fu_12330_p2.read()[0].to_bool())? p_Val2_4_3_2_fu_12354_p2.read(): p_Val2_12_3_2_fu_12384_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_3_fu_12474_p3() {
    x_V_1_3_3_fu_12474_p3 = (!dneg_3_3_fu_12412_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_3_fu_12412_p2.read()[0].to_bool())? p_Val2_4_3_3_fu_12432_p2.read(): p_Val2_12_3_3_fu_12462_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_4_fu_25986_p3() {
    x_V_1_3_4_fu_25986_p3 = (!dneg_3_4_fu_25952_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_4_fu_25952_p2.read()[0].to_bool())? p_Val2_4_3_4_fu_25960_p2.read(): p_Val2_12_3_4_fu_25976_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_5_fu_26064_p3() {
    x_V_1_3_5_fu_26064_p3 = (!dneg_3_5_fu_26002_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_5_fu_26002_p2.read()[0].to_bool())? p_Val2_4_3_5_fu_26022_p2.read(): p_Val2_12_3_5_fu_26052_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_1_fu_19494_p3() {
    x_V_1_40_1_fu_19494_p3 = (!dneg_40_1_reg_59282.read()[0].is_01())? sc_lv<15>(): ((dneg_40_1_reg_59282.read()[0].to_bool())? p_Val2_4_40_1_reg_59289.read(): p_Val2_12_40_1_reg_59299.read());
}

void Sobel_phase_strm::thread_x_V_1_40_2_fu_19574_p3() {
    x_V_1_40_2_fu_19574_p3 = (!dneg_40_2_fu_19508_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_2_fu_19508_p2.read()[0].to_bool())? p_Val2_4_40_2_fu_19532_p2.read(): p_Val2_12_40_2_fu_19562_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_3_fu_19652_p3() {
    x_V_1_40_3_fu_19652_p3 = (!dneg_40_3_fu_19590_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_3_fu_19590_p2.read()[0].to_bool())? p_Val2_4_40_3_fu_19610_p2.read(): p_Val2_12_40_3_fu_19640_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_4_fu_31462_p3() {
    x_V_1_40_4_fu_31462_p3 = (!dneg_40_4_fu_31428_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_4_fu_31428_p2.read()[0].to_bool())? p_Val2_4_40_4_fu_31436_p2.read(): p_Val2_12_40_4_fu_31452_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_5_fu_31540_p3() {
    x_V_1_40_5_fu_31540_p3 = (!dneg_40_5_fu_31478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_5_fu_31478_p2.read()[0].to_bool())? p_Val2_4_40_5_fu_31498_p2.read(): p_Val2_12_40_5_fu_31528_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_1_fu_19688_p3() {
    x_V_1_41_1_fu_19688_p3 = (!dneg_41_1_reg_59320.read()[0].is_01())? sc_lv<15>(): ((dneg_41_1_reg_59320.read()[0].to_bool())? p_Val2_4_41_1_reg_59327.read(): p_Val2_12_41_1_reg_59337.read());
}

void Sobel_phase_strm::thread_x_V_1_41_2_fu_19768_p3() {
    x_V_1_41_2_fu_19768_p3 = (!dneg_41_2_fu_19702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_2_fu_19702_p2.read()[0].to_bool())? p_Val2_4_41_2_fu_19726_p2.read(): p_Val2_12_41_2_fu_19756_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_3_fu_19846_p3() {
    x_V_1_41_3_fu_19846_p3 = (!dneg_41_3_fu_19784_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_3_fu_19784_p2.read()[0].to_bool())? p_Val2_4_41_3_fu_19804_p2.read(): p_Val2_12_41_3_fu_19834_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_4_fu_31610_p3() {
    x_V_1_41_4_fu_31610_p3 = (!dneg_41_4_fu_31576_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_4_fu_31576_p2.read()[0].to_bool())? p_Val2_4_41_4_fu_31584_p2.read(): p_Val2_12_41_4_fu_31600_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_5_fu_31688_p3() {
    x_V_1_41_5_fu_31688_p3 = (!dneg_41_5_fu_31626_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_5_fu_31626_p2.read()[0].to_bool())? p_Val2_4_41_5_fu_31646_p2.read(): p_Val2_12_41_5_fu_31676_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_42_1_fu_19882_p3() {
    x_V_1_42_1_fu_19882_p3 = (!dneg_42_1_reg_59358.read()[0].is_01())? sc_lv<15>(): ((dneg_42_1_reg_59358.read()[0].to_bool())? p_Val2_4_42_1_reg_59365.read(): p_Val2_12_42_1_reg_59375.read());
}

void Sobel_phase_strm::thread_x_V_1_42_2_fu_19962_p3() {
    x_V_1_42_2_fu_19962_p3 = (!dneg_42_2_fu_19896_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_2_fu_19896_p2.read()[0].to_bool())? p_Val2_4_42_2_fu_19920_p2.read(): p_Val2_12_42_2_fu_19950_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_42_3_fu_20040_p3() {
    x_V_1_42_3_fu_20040_p3 = (!dneg_42_3_fu_19978_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_3_fu_19978_p2.read()[0].to_bool())? p_Val2_4_42_3_fu_19998_p2.read(): p_Val2_12_42_3_fu_20028_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_42_4_fu_31758_p3() {
    x_V_1_42_4_fu_31758_p3 = (!dneg_42_4_fu_31724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_4_fu_31724_p2.read()[0].to_bool())? p_Val2_4_42_4_fu_31732_p2.read(): p_Val2_12_42_4_fu_31748_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_42_5_fu_31836_p3() {
    x_V_1_42_5_fu_31836_p3 = (!dneg_42_5_fu_31774_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_5_fu_31774_p2.read()[0].to_bool())? p_Val2_4_42_5_fu_31794_p2.read(): p_Val2_12_42_5_fu_31824_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_43_1_fu_20076_p3() {
    x_V_1_43_1_fu_20076_p3 = (!dneg_43_1_reg_59396.read()[0].is_01())? sc_lv<15>(): ((dneg_43_1_reg_59396.read()[0].to_bool())? p_Val2_4_43_1_reg_59403.read(): p_Val2_12_43_1_reg_59413.read());
}

void Sobel_phase_strm::thread_x_V_1_43_2_fu_20156_p3() {
    x_V_1_43_2_fu_20156_p3 = (!dneg_43_2_fu_20090_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_2_fu_20090_p2.read()[0].to_bool())? p_Val2_4_43_2_fu_20114_p2.read(): p_Val2_12_43_2_fu_20144_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_43_3_fu_20234_p3() {
    x_V_1_43_3_fu_20234_p3 = (!dneg_43_3_fu_20172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_3_fu_20172_p2.read()[0].to_bool())? p_Val2_4_43_3_fu_20192_p2.read(): p_Val2_12_43_3_fu_20222_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_43_4_fu_31906_p3() {
    x_V_1_43_4_fu_31906_p3 = (!dneg_43_4_fu_31872_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_4_fu_31872_p2.read()[0].to_bool())? p_Val2_4_43_4_fu_31880_p2.read(): p_Val2_12_43_4_fu_31896_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_43_5_fu_31984_p3() {
    x_V_1_43_5_fu_31984_p3 = (!dneg_43_5_fu_31922_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_5_fu_31922_p2.read()[0].to_bool())? p_Val2_4_43_5_fu_31942_p2.read(): p_Val2_12_43_5_fu_31972_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_44_1_fu_20270_p3() {
    x_V_1_44_1_fu_20270_p3 = (!dneg_44_1_reg_59434.read()[0].is_01())? sc_lv<15>(): ((dneg_44_1_reg_59434.read()[0].to_bool())? p_Val2_4_44_1_reg_59441.read(): p_Val2_12_44_1_reg_59451.read());
}

void Sobel_phase_strm::thread_x_V_1_44_2_fu_20350_p3() {
    x_V_1_44_2_fu_20350_p3 = (!dneg_44_2_fu_20284_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_2_fu_20284_p2.read()[0].to_bool())? p_Val2_4_44_2_fu_20308_p2.read(): p_Val2_12_44_2_fu_20338_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_44_3_fu_20428_p3() {
    x_V_1_44_3_fu_20428_p3 = (!dneg_44_3_fu_20366_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_3_fu_20366_p2.read()[0].to_bool())? p_Val2_4_44_3_fu_20386_p2.read(): p_Val2_12_44_3_fu_20416_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_44_4_fu_32054_p3() {
    x_V_1_44_4_fu_32054_p3 = (!dneg_44_4_fu_32020_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_4_fu_32020_p2.read()[0].to_bool())? p_Val2_4_44_4_fu_32028_p2.read(): p_Val2_12_44_4_fu_32044_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_44_5_fu_32132_p3() {
    x_V_1_44_5_fu_32132_p3 = (!dneg_44_5_fu_32070_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_5_fu_32070_p2.read()[0].to_bool())? p_Val2_4_44_5_fu_32090_p2.read(): p_Val2_12_44_5_fu_32120_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_45_1_fu_20464_p3() {
    x_V_1_45_1_fu_20464_p3 = (!dneg_45_1_reg_59472.read()[0].is_01())? sc_lv<15>(): ((dneg_45_1_reg_59472.read()[0].to_bool())? p_Val2_4_45_1_reg_59479.read(): p_Val2_12_45_1_reg_59489.read());
}

void Sobel_phase_strm::thread_x_V_1_45_2_fu_20544_p3() {
    x_V_1_45_2_fu_20544_p3 = (!dneg_45_2_fu_20478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_2_fu_20478_p2.read()[0].to_bool())? p_Val2_4_45_2_fu_20502_p2.read(): p_Val2_12_45_2_fu_20532_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_45_3_fu_20622_p3() {
    x_V_1_45_3_fu_20622_p3 = (!dneg_45_3_fu_20560_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_3_fu_20560_p2.read()[0].to_bool())? p_Val2_4_45_3_fu_20580_p2.read(): p_Val2_12_45_3_fu_20610_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_45_4_fu_32202_p3() {
    x_V_1_45_4_fu_32202_p3 = (!dneg_45_4_fu_32168_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_4_fu_32168_p2.read()[0].to_bool())? p_Val2_4_45_4_fu_32176_p2.read(): p_Val2_12_45_4_fu_32192_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_45_5_fu_32280_p3() {
    x_V_1_45_5_fu_32280_p3 = (!dneg_45_5_fu_32218_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_5_fu_32218_p2.read()[0].to_bool())? p_Val2_4_45_5_fu_32238_p2.read(): p_Val2_12_45_5_fu_32268_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_46_1_fu_20658_p3() {
    x_V_1_46_1_fu_20658_p3 = (!dneg_46_1_reg_59510.read()[0].is_01())? sc_lv<15>(): ((dneg_46_1_reg_59510.read()[0].to_bool())? p_Val2_4_46_1_reg_59517.read(): p_Val2_12_46_1_reg_59527.read());
}

void Sobel_phase_strm::thread_x_V_1_46_2_fu_20738_p3() {
    x_V_1_46_2_fu_20738_p3 = (!dneg_46_2_fu_20672_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_2_fu_20672_p2.read()[0].to_bool())? p_Val2_4_46_2_fu_20696_p2.read(): p_Val2_12_46_2_fu_20726_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_46_3_fu_20816_p3() {
    x_V_1_46_3_fu_20816_p3 = (!dneg_46_3_fu_20754_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_3_fu_20754_p2.read()[0].to_bool())? p_Val2_4_46_3_fu_20774_p2.read(): p_Val2_12_46_3_fu_20804_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_46_4_fu_32350_p3() {
    x_V_1_46_4_fu_32350_p3 = (!dneg_46_4_fu_32316_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_4_fu_32316_p2.read()[0].to_bool())? p_Val2_4_46_4_fu_32324_p2.read(): p_Val2_12_46_4_fu_32340_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_46_5_fu_32428_p3() {
    x_V_1_46_5_fu_32428_p3 = (!dneg_46_5_fu_32366_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_5_fu_32366_p2.read()[0].to_bool())? p_Val2_4_46_5_fu_32386_p2.read(): p_Val2_12_46_5_fu_32416_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_47_1_fu_20852_p3() {
    x_V_1_47_1_fu_20852_p3 = (!dneg_47_1_reg_59548.read()[0].is_01())? sc_lv<15>(): ((dneg_47_1_reg_59548.read()[0].to_bool())? p_Val2_4_47_1_reg_59555.read(): p_Val2_12_47_1_reg_59565.read());
}

void Sobel_phase_strm::thread_x_V_1_47_2_fu_20932_p3() {
    x_V_1_47_2_fu_20932_p3 = (!dneg_47_2_fu_20866_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_2_fu_20866_p2.read()[0].to_bool())? p_Val2_4_47_2_fu_20890_p2.read(): p_Val2_12_47_2_fu_20920_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_47_3_fu_21010_p3() {
    x_V_1_47_3_fu_21010_p3 = (!dneg_47_3_fu_20948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_3_fu_20948_p2.read()[0].to_bool())? p_Val2_4_47_3_fu_20968_p2.read(): p_Val2_12_47_3_fu_20998_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_47_4_fu_32498_p3() {
    x_V_1_47_4_fu_32498_p3 = (!dneg_47_4_fu_32464_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_4_fu_32464_p2.read()[0].to_bool())? p_Val2_4_47_4_fu_32472_p2.read(): p_Val2_12_47_4_fu_32488_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_47_5_fu_32576_p3() {
    x_V_1_47_5_fu_32576_p3 = (!dneg_47_5_fu_32514_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_5_fu_32514_p2.read()[0].to_bool())? p_Val2_4_47_5_fu_32534_p2.read(): p_Val2_12_47_5_fu_32564_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_48_1_fu_21046_p3() {
    x_V_1_48_1_fu_21046_p3 = (!dneg_48_1_reg_59586.read()[0].is_01())? sc_lv<15>(): ((dneg_48_1_reg_59586.read()[0].to_bool())? p_Val2_4_48_1_reg_59593.read(): p_Val2_12_48_1_reg_59603.read());
}

void Sobel_phase_strm::thread_x_V_1_48_2_fu_21126_p3() {
    x_V_1_48_2_fu_21126_p3 = (!dneg_48_2_fu_21060_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_2_fu_21060_p2.read()[0].to_bool())? p_Val2_4_48_2_fu_21084_p2.read(): p_Val2_12_48_2_fu_21114_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_48_3_fu_21204_p3() {
    x_V_1_48_3_fu_21204_p3 = (!dneg_48_3_fu_21142_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_3_fu_21142_p2.read()[0].to_bool())? p_Val2_4_48_3_fu_21162_p2.read(): p_Val2_12_48_3_fu_21192_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_48_4_fu_32646_p3() {
    x_V_1_48_4_fu_32646_p3 = (!dneg_48_4_fu_32612_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_4_fu_32612_p2.read()[0].to_bool())? p_Val2_4_48_4_fu_32620_p2.read(): p_Val2_12_48_4_fu_32636_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_48_5_fu_32724_p3() {
    x_V_1_48_5_fu_32724_p3 = (!dneg_48_5_fu_32662_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_5_fu_32662_p2.read()[0].to_bool())? p_Val2_4_48_5_fu_32682_p2.read(): p_Val2_12_48_5_fu_32712_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_49_1_fu_21240_p3() {
    x_V_1_49_1_fu_21240_p3 = (!dneg_49_1_reg_59624.read()[0].is_01())? sc_lv<15>(): ((dneg_49_1_reg_59624.read()[0].to_bool())? p_Val2_4_49_1_reg_59631.read(): p_Val2_12_49_1_reg_59641.read());
}

void Sobel_phase_strm::thread_x_V_1_49_2_fu_21320_p3() {
    x_V_1_49_2_fu_21320_p3 = (!dneg_49_2_fu_21254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_2_fu_21254_p2.read()[0].to_bool())? p_Val2_4_49_2_fu_21278_p2.read(): p_Val2_12_49_2_fu_21308_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_49_3_fu_21398_p3() {
    x_V_1_49_3_fu_21398_p3 = (!dneg_49_3_fu_21336_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_3_fu_21336_p2.read()[0].to_bool())? p_Val2_4_49_3_fu_21356_p2.read(): p_Val2_12_49_3_fu_21386_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_49_4_fu_32794_p3() {
    x_V_1_49_4_fu_32794_p3 = (!dneg_49_4_fu_32760_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_4_fu_32760_p2.read()[0].to_bool())? p_Val2_4_49_4_fu_32768_p2.read(): p_Val2_12_49_4_fu_32784_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_49_5_fu_32872_p3() {
    x_V_1_49_5_fu_32872_p3 = (!dneg_49_5_fu_32810_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_5_fu_32810_p2.read()[0].to_bool())? p_Val2_4_49_5_fu_32830_p2.read(): p_Val2_12_49_5_fu_32860_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_1_fu_12510_p3() {
    x_V_1_4_1_fu_12510_p3 = (!dneg_4_1_reg_57914.read()[0].is_01())? sc_lv<15>(): ((dneg_4_1_reg_57914.read()[0].to_bool())? p_Val2_4_4_1_reg_57921.read(): p_Val2_12_4_1_reg_57931.read());
}

void Sobel_phase_strm::thread_x_V_1_4_2_fu_12590_p3() {
    x_V_1_4_2_fu_12590_p3 = (!dneg_4_2_fu_12524_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_2_fu_12524_p2.read()[0].to_bool())? p_Val2_4_4_2_fu_12548_p2.read(): p_Val2_12_4_2_fu_12578_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_3_fu_12668_p3() {
    x_V_1_4_3_fu_12668_p3 = (!dneg_4_3_fu_12606_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_3_fu_12606_p2.read()[0].to_bool())? p_Val2_4_4_3_fu_12626_p2.read(): p_Val2_12_4_3_fu_12656_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_4_fu_26134_p3() {
    x_V_1_4_4_fu_26134_p3 = (!dneg_4_4_fu_26100_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_4_fu_26100_p2.read()[0].to_bool())? p_Val2_4_4_4_fu_26108_p2.read(): p_Val2_12_4_4_fu_26124_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_5_fu_26212_p3() {
    x_V_1_4_5_fu_26212_p3 = (!dneg_4_5_fu_26150_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_5_fu_26150_p2.read()[0].to_bool())? p_Val2_4_4_5_fu_26170_p2.read(): p_Val2_12_4_5_fu_26200_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_50_1_fu_21434_p3() {
    x_V_1_50_1_fu_21434_p3 = (!dneg_50_1_reg_59662.read()[0].is_01())? sc_lv<15>(): ((dneg_50_1_reg_59662.read()[0].to_bool())? p_Val2_4_50_1_reg_59669.read(): p_Val2_12_50_1_reg_59679.read());
}

void Sobel_phase_strm::thread_x_V_1_50_2_fu_21514_p3() {
    x_V_1_50_2_fu_21514_p3 = (!dneg_50_2_fu_21448_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_2_fu_21448_p2.read()[0].to_bool())? p_Val2_4_50_2_fu_21472_p2.read(): p_Val2_12_50_2_fu_21502_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_50_3_fu_21592_p3() {
    x_V_1_50_3_fu_21592_p3 = (!dneg_50_3_fu_21530_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_3_fu_21530_p2.read()[0].to_bool())? p_Val2_4_50_3_fu_21550_p2.read(): p_Val2_12_50_3_fu_21580_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_50_4_fu_32942_p3() {
    x_V_1_50_4_fu_32942_p3 = (!dneg_50_4_fu_32908_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_4_fu_32908_p2.read()[0].to_bool())? p_Val2_4_50_4_fu_32916_p2.read(): p_Val2_12_50_4_fu_32932_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_50_5_fu_33020_p3() {
    x_V_1_50_5_fu_33020_p3 = (!dneg_50_5_fu_32958_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_5_fu_32958_p2.read()[0].to_bool())? p_Val2_4_50_5_fu_32978_p2.read(): p_Val2_12_50_5_fu_33008_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_51_1_fu_21628_p3() {
    x_V_1_51_1_fu_21628_p3 = (!dneg_51_1_reg_59700.read()[0].is_01())? sc_lv<15>(): ((dneg_51_1_reg_59700.read()[0].to_bool())? p_Val2_4_51_1_reg_59707.read(): p_Val2_12_51_1_reg_59717.read());
}

void Sobel_phase_strm::thread_x_V_1_51_2_fu_21708_p3() {
    x_V_1_51_2_fu_21708_p3 = (!dneg_51_2_fu_21642_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_2_fu_21642_p2.read()[0].to_bool())? p_Val2_4_51_2_fu_21666_p2.read(): p_Val2_12_51_2_fu_21696_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_51_3_fu_21786_p3() {
    x_V_1_51_3_fu_21786_p3 = (!dneg_51_3_fu_21724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_3_fu_21724_p2.read()[0].to_bool())? p_Val2_4_51_3_fu_21744_p2.read(): p_Val2_12_51_3_fu_21774_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_51_4_fu_33090_p3() {
    x_V_1_51_4_fu_33090_p3 = (!dneg_51_4_fu_33056_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_4_fu_33056_p2.read()[0].to_bool())? p_Val2_4_51_4_fu_33064_p2.read(): p_Val2_12_51_4_fu_33080_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_51_5_fu_33168_p3() {
    x_V_1_51_5_fu_33168_p3 = (!dneg_51_5_fu_33106_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_5_fu_33106_p2.read()[0].to_bool())? p_Val2_4_51_5_fu_33126_p2.read(): p_Val2_12_51_5_fu_33156_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_52_1_fu_21822_p3() {
    x_V_1_52_1_fu_21822_p3 = (!dneg_52_1_reg_59738.read()[0].is_01())? sc_lv<15>(): ((dneg_52_1_reg_59738.read()[0].to_bool())? p_Val2_4_52_1_reg_59745.read(): p_Val2_12_52_1_reg_59755.read());
}

void Sobel_phase_strm::thread_x_V_1_52_2_fu_21902_p3() {
    x_V_1_52_2_fu_21902_p3 = (!dneg_52_2_fu_21836_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_2_fu_21836_p2.read()[0].to_bool())? p_Val2_4_52_2_fu_21860_p2.read(): p_Val2_12_52_2_fu_21890_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_52_3_fu_21980_p3() {
    x_V_1_52_3_fu_21980_p3 = (!dneg_52_3_fu_21918_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_3_fu_21918_p2.read()[0].to_bool())? p_Val2_4_52_3_fu_21938_p2.read(): p_Val2_12_52_3_fu_21968_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_52_4_fu_33238_p3() {
    x_V_1_52_4_fu_33238_p3 = (!dneg_52_4_fu_33204_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_4_fu_33204_p2.read()[0].to_bool())? p_Val2_4_52_4_fu_33212_p2.read(): p_Val2_12_52_4_fu_33228_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_52_5_fu_33316_p3() {
    x_V_1_52_5_fu_33316_p3 = (!dneg_52_5_fu_33254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_5_fu_33254_p2.read()[0].to_bool())? p_Val2_4_52_5_fu_33274_p2.read(): p_Val2_12_52_5_fu_33304_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_53_1_fu_22016_p3() {
    x_V_1_53_1_fu_22016_p3 = (!dneg_53_1_reg_59776.read()[0].is_01())? sc_lv<15>(): ((dneg_53_1_reg_59776.read()[0].to_bool())? p_Val2_4_53_1_reg_59783.read(): p_Val2_12_53_1_reg_59793.read());
}

void Sobel_phase_strm::thread_x_V_1_53_2_fu_22096_p3() {
    x_V_1_53_2_fu_22096_p3 = (!dneg_53_2_fu_22030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_2_fu_22030_p2.read()[0].to_bool())? p_Val2_4_53_2_fu_22054_p2.read(): p_Val2_12_53_2_fu_22084_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_53_3_fu_22174_p3() {
    x_V_1_53_3_fu_22174_p3 = (!dneg_53_3_fu_22112_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_3_fu_22112_p2.read()[0].to_bool())? p_Val2_4_53_3_fu_22132_p2.read(): p_Val2_12_53_3_fu_22162_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_53_4_fu_33386_p3() {
    x_V_1_53_4_fu_33386_p3 = (!dneg_53_4_fu_33352_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_4_fu_33352_p2.read()[0].to_bool())? p_Val2_4_53_4_fu_33360_p2.read(): p_Val2_12_53_4_fu_33376_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_53_5_fu_33464_p3() {
    x_V_1_53_5_fu_33464_p3 = (!dneg_53_5_fu_33402_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_53_5_fu_33402_p2.read()[0].to_bool())? p_Val2_4_53_5_fu_33422_p2.read(): p_Val2_12_53_5_fu_33452_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_54_1_fu_22210_p3() {
    x_V_1_54_1_fu_22210_p3 = (!dneg_54_1_reg_59814.read()[0].is_01())? sc_lv<15>(): ((dneg_54_1_reg_59814.read()[0].to_bool())? p_Val2_4_54_1_reg_59821.read(): p_Val2_12_54_1_reg_59831.read());
}

void Sobel_phase_strm::thread_x_V_1_54_2_fu_22290_p3() {
    x_V_1_54_2_fu_22290_p3 = (!dneg_54_2_fu_22224_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_2_fu_22224_p2.read()[0].to_bool())? p_Val2_4_54_2_fu_22248_p2.read(): p_Val2_12_54_2_fu_22278_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_54_3_fu_22368_p3() {
    x_V_1_54_3_fu_22368_p3 = (!dneg_54_3_fu_22306_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_3_fu_22306_p2.read()[0].to_bool())? p_Val2_4_54_3_fu_22326_p2.read(): p_Val2_12_54_3_fu_22356_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_54_4_fu_33534_p3() {
    x_V_1_54_4_fu_33534_p3 = (!dneg_54_4_fu_33500_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_4_fu_33500_p2.read()[0].to_bool())? p_Val2_4_54_4_fu_33508_p2.read(): p_Val2_12_54_4_fu_33524_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_54_5_fu_33612_p3() {
    x_V_1_54_5_fu_33612_p3 = (!dneg_54_5_fu_33550_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_54_5_fu_33550_p2.read()[0].to_bool())? p_Val2_4_54_5_fu_33570_p2.read(): p_Val2_12_54_5_fu_33600_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_55_1_fu_22404_p3() {
    x_V_1_55_1_fu_22404_p3 = (!dneg_55_1_reg_59852.read()[0].is_01())? sc_lv<15>(): ((dneg_55_1_reg_59852.read()[0].to_bool())? p_Val2_4_55_1_reg_59859.read(): p_Val2_12_55_1_reg_59869.read());
}

void Sobel_phase_strm::thread_x_V_1_55_2_fu_22484_p3() {
    x_V_1_55_2_fu_22484_p3 = (!dneg_55_2_fu_22418_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_2_fu_22418_p2.read()[0].to_bool())? p_Val2_4_55_2_fu_22442_p2.read(): p_Val2_12_55_2_fu_22472_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_55_3_fu_22562_p3() {
    x_V_1_55_3_fu_22562_p3 = (!dneg_55_3_fu_22500_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_3_fu_22500_p2.read()[0].to_bool())? p_Val2_4_55_3_fu_22520_p2.read(): p_Val2_12_55_3_fu_22550_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_55_4_fu_33682_p3() {
    x_V_1_55_4_fu_33682_p3 = (!dneg_55_4_fu_33648_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_4_fu_33648_p2.read()[0].to_bool())? p_Val2_4_55_4_fu_33656_p2.read(): p_Val2_12_55_4_fu_33672_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_55_5_fu_33760_p3() {
    x_V_1_55_5_fu_33760_p3 = (!dneg_55_5_fu_33698_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_55_5_fu_33698_p2.read()[0].to_bool())? p_Val2_4_55_5_fu_33718_p2.read(): p_Val2_12_55_5_fu_33748_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_56_1_fu_22598_p3() {
    x_V_1_56_1_fu_22598_p3 = (!dneg_56_1_reg_59890.read()[0].is_01())? sc_lv<15>(): ((dneg_56_1_reg_59890.read()[0].to_bool())? p_Val2_4_56_1_reg_59897.read(): p_Val2_12_56_1_reg_59907.read());
}

void Sobel_phase_strm::thread_x_V_1_56_2_fu_22678_p3() {
    x_V_1_56_2_fu_22678_p3 = (!dneg_56_2_fu_22612_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_2_fu_22612_p2.read()[0].to_bool())? p_Val2_4_56_2_fu_22636_p2.read(): p_Val2_12_56_2_fu_22666_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_56_3_fu_22756_p3() {
    x_V_1_56_3_fu_22756_p3 = (!dneg_56_3_fu_22694_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_3_fu_22694_p2.read()[0].to_bool())? p_Val2_4_56_3_fu_22714_p2.read(): p_Val2_12_56_3_fu_22744_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_56_4_fu_33830_p3() {
    x_V_1_56_4_fu_33830_p3 = (!dneg_56_4_fu_33796_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_4_fu_33796_p2.read()[0].to_bool())? p_Val2_4_56_4_fu_33804_p2.read(): p_Val2_12_56_4_fu_33820_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_56_5_fu_33908_p3() {
    x_V_1_56_5_fu_33908_p3 = (!dneg_56_5_fu_33846_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_56_5_fu_33846_p2.read()[0].to_bool())? p_Val2_4_56_5_fu_33866_p2.read(): p_Val2_12_56_5_fu_33896_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_57_1_fu_22792_p3() {
    x_V_1_57_1_fu_22792_p3 = (!dneg_57_1_reg_59928.read()[0].is_01())? sc_lv<15>(): ((dneg_57_1_reg_59928.read()[0].to_bool())? p_Val2_4_57_1_reg_59935.read(): p_Val2_12_57_1_reg_59945.read());
}

void Sobel_phase_strm::thread_x_V_1_57_2_fu_22872_p3() {
    x_V_1_57_2_fu_22872_p3 = (!dneg_57_2_fu_22806_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_2_fu_22806_p2.read()[0].to_bool())? p_Val2_4_57_2_fu_22830_p2.read(): p_Val2_12_57_2_fu_22860_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_57_3_fu_22950_p3() {
    x_V_1_57_3_fu_22950_p3 = (!dneg_57_3_fu_22888_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_3_fu_22888_p2.read()[0].to_bool())? p_Val2_4_57_3_fu_22908_p2.read(): p_Val2_12_57_3_fu_22938_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_57_4_fu_33978_p3() {
    x_V_1_57_4_fu_33978_p3 = (!dneg_57_4_fu_33944_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_4_fu_33944_p2.read()[0].to_bool())? p_Val2_4_57_4_fu_33952_p2.read(): p_Val2_12_57_4_fu_33968_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_57_5_fu_34056_p3() {
    x_V_1_57_5_fu_34056_p3 = (!dneg_57_5_fu_33994_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_57_5_fu_33994_p2.read()[0].to_bool())? p_Val2_4_57_5_fu_34014_p2.read(): p_Val2_12_57_5_fu_34044_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_58_1_fu_22986_p3() {
    x_V_1_58_1_fu_22986_p3 = (!dneg_58_1_reg_59966.read()[0].is_01())? sc_lv<15>(): ((dneg_58_1_reg_59966.read()[0].to_bool())? p_Val2_4_58_1_reg_59973.read(): p_Val2_12_58_1_reg_59983.read());
}

void Sobel_phase_strm::thread_x_V_1_58_2_fu_23066_p3() {
    x_V_1_58_2_fu_23066_p3 = (!dneg_58_2_fu_23000_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_2_fu_23000_p2.read()[0].to_bool())? p_Val2_4_58_2_fu_23024_p2.read(): p_Val2_12_58_2_fu_23054_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_58_3_fu_23144_p3() {
    x_V_1_58_3_fu_23144_p3 = (!dneg_58_3_fu_23082_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_3_fu_23082_p2.read()[0].to_bool())? p_Val2_4_58_3_fu_23102_p2.read(): p_Val2_12_58_3_fu_23132_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_58_4_fu_34126_p3() {
    x_V_1_58_4_fu_34126_p3 = (!dneg_58_4_fu_34092_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_4_fu_34092_p2.read()[0].to_bool())? p_Val2_4_58_4_fu_34100_p2.read(): p_Val2_12_58_4_fu_34116_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_58_5_fu_34204_p3() {
    x_V_1_58_5_fu_34204_p3 = (!dneg_58_5_fu_34142_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_58_5_fu_34142_p2.read()[0].to_bool())? p_Val2_4_58_5_fu_34162_p2.read(): p_Val2_12_58_5_fu_34192_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_59_1_fu_23180_p3() {
    x_V_1_59_1_fu_23180_p3 = (!dneg_59_1_reg_60004.read()[0].is_01())? sc_lv<15>(): ((dneg_59_1_reg_60004.read()[0].to_bool())? p_Val2_4_59_1_reg_60011.read(): p_Val2_12_59_1_reg_60021.read());
}

void Sobel_phase_strm::thread_x_V_1_59_2_fu_23260_p3() {
    x_V_1_59_2_fu_23260_p3 = (!dneg_59_2_fu_23194_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_2_fu_23194_p2.read()[0].to_bool())? p_Val2_4_59_2_fu_23218_p2.read(): p_Val2_12_59_2_fu_23248_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_59_3_fu_23338_p3() {
    x_V_1_59_3_fu_23338_p3 = (!dneg_59_3_fu_23276_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_3_fu_23276_p2.read()[0].to_bool())? p_Val2_4_59_3_fu_23296_p2.read(): p_Val2_12_59_3_fu_23326_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_59_4_fu_34274_p3() {
    x_V_1_59_4_fu_34274_p3 = (!dneg_59_4_fu_34240_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_4_fu_34240_p2.read()[0].to_bool())? p_Val2_4_59_4_fu_34248_p2.read(): p_Val2_12_59_4_fu_34264_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_59_5_fu_34352_p3() {
    x_V_1_59_5_fu_34352_p3 = (!dneg_59_5_fu_34290_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_59_5_fu_34290_p2.read()[0].to_bool())? p_Val2_4_59_5_fu_34310_p2.read(): p_Val2_12_59_5_fu_34340_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_1_fu_12704_p3() {
    x_V_1_5_1_fu_12704_p3 = (!dneg_5_1_reg_57952.read()[0].is_01())? sc_lv<15>(): ((dneg_5_1_reg_57952.read()[0].to_bool())? p_Val2_4_5_1_reg_57959.read(): p_Val2_12_5_1_reg_57969.read());
}

void Sobel_phase_strm::thread_x_V_1_5_2_fu_12784_p3() {
    x_V_1_5_2_fu_12784_p3 = (!dneg_5_2_fu_12718_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_2_fu_12718_p2.read()[0].to_bool())? p_Val2_4_5_2_fu_12742_p2.read(): p_Val2_12_5_2_fu_12772_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_3_fu_12862_p3() {
    x_V_1_5_3_fu_12862_p3 = (!dneg_5_3_fu_12800_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_3_fu_12800_p2.read()[0].to_bool())? p_Val2_4_5_3_fu_12820_p2.read(): p_Val2_12_5_3_fu_12850_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_4_fu_26282_p3() {
    x_V_1_5_4_fu_26282_p3 = (!dneg_5_4_fu_26248_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_4_fu_26248_p2.read()[0].to_bool())? p_Val2_4_5_4_fu_26256_p2.read(): p_Val2_12_5_4_fu_26272_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_5_fu_26360_p3() {
    x_V_1_5_5_fu_26360_p3 = (!dneg_5_5_fu_26298_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_5_fu_26298_p2.read()[0].to_bool())? p_Val2_4_5_5_fu_26318_p2.read(): p_Val2_12_5_5_fu_26348_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_60_1_fu_23374_p3() {
    x_V_1_60_1_fu_23374_p3 = (!dneg_60_1_reg_60042.read()[0].is_01())? sc_lv<15>(): ((dneg_60_1_reg_60042.read()[0].to_bool())? p_Val2_4_60_1_reg_60049.read(): p_Val2_12_60_1_reg_60059.read());
}

void Sobel_phase_strm::thread_x_V_1_60_2_fu_23454_p3() {
    x_V_1_60_2_fu_23454_p3 = (!dneg_60_2_fu_23388_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_2_fu_23388_p2.read()[0].to_bool())? p_Val2_4_60_2_fu_23412_p2.read(): p_Val2_12_60_2_fu_23442_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_60_3_fu_23532_p3() {
    x_V_1_60_3_fu_23532_p3 = (!dneg_60_3_fu_23470_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_3_fu_23470_p2.read()[0].to_bool())? p_Val2_4_60_3_fu_23490_p2.read(): p_Val2_12_60_3_fu_23520_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_60_4_fu_34422_p3() {
    x_V_1_60_4_fu_34422_p3 = (!dneg_60_4_fu_34388_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_4_fu_34388_p2.read()[0].to_bool())? p_Val2_4_60_4_fu_34396_p2.read(): p_Val2_12_60_4_fu_34412_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_60_5_fu_34500_p3() {
    x_V_1_60_5_fu_34500_p3 = (!dneg_60_5_fu_34438_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_60_5_fu_34438_p2.read()[0].to_bool())? p_Val2_4_60_5_fu_34458_p2.read(): p_Val2_12_60_5_fu_34488_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_61_1_fu_23568_p3() {
    x_V_1_61_1_fu_23568_p3 = (!dneg_61_1_reg_60080.read()[0].is_01())? sc_lv<15>(): ((dneg_61_1_reg_60080.read()[0].to_bool())? p_Val2_4_61_1_reg_60087.read(): p_Val2_12_61_1_reg_60097.read());
}

void Sobel_phase_strm::thread_x_V_1_61_2_fu_23648_p3() {
    x_V_1_61_2_fu_23648_p3 = (!dneg_61_2_fu_23582_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_2_fu_23582_p2.read()[0].to_bool())? p_Val2_4_61_2_fu_23606_p2.read(): p_Val2_12_61_2_fu_23636_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_61_3_fu_23726_p3() {
    x_V_1_61_3_fu_23726_p3 = (!dneg_61_3_fu_23664_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_3_fu_23664_p2.read()[0].to_bool())? p_Val2_4_61_3_fu_23684_p2.read(): p_Val2_12_61_3_fu_23714_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_61_4_fu_34570_p3() {
    x_V_1_61_4_fu_34570_p3 = (!dneg_61_4_fu_34536_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_4_fu_34536_p2.read()[0].to_bool())? p_Val2_4_61_4_fu_34544_p2.read(): p_Val2_12_61_4_fu_34560_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_61_5_fu_34648_p3() {
    x_V_1_61_5_fu_34648_p3 = (!dneg_61_5_fu_34586_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_61_5_fu_34586_p2.read()[0].to_bool())? p_Val2_4_61_5_fu_34606_p2.read(): p_Val2_12_61_5_fu_34636_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_62_1_fu_23762_p3() {
    x_V_1_62_1_fu_23762_p3 = (!dneg_62_1_reg_60118.read()[0].is_01())? sc_lv<15>(): ((dneg_62_1_reg_60118.read()[0].to_bool())? p_Val2_4_62_1_reg_60125.read(): p_Val2_12_62_1_reg_60135.read());
}

void Sobel_phase_strm::thread_x_V_1_62_2_fu_23842_p3() {
    x_V_1_62_2_fu_23842_p3 = (!dneg_62_2_fu_23776_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_2_fu_23776_p2.read()[0].to_bool())? p_Val2_4_62_2_fu_23800_p2.read(): p_Val2_12_62_2_fu_23830_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_62_3_fu_23920_p3() {
    x_V_1_62_3_fu_23920_p3 = (!dneg_62_3_fu_23858_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_3_fu_23858_p2.read()[0].to_bool())? p_Val2_4_62_3_fu_23878_p2.read(): p_Val2_12_62_3_fu_23908_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_62_4_fu_34718_p3() {
    x_V_1_62_4_fu_34718_p3 = (!dneg_62_4_fu_34684_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_4_fu_34684_p2.read()[0].to_bool())? p_Val2_4_62_4_fu_34692_p2.read(): p_Val2_12_62_4_fu_34708_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_62_5_fu_34796_p3() {
    x_V_1_62_5_fu_34796_p3 = (!dneg_62_5_fu_34734_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_62_5_fu_34734_p2.read()[0].to_bool())? p_Val2_4_62_5_fu_34754_p2.read(): p_Val2_12_62_5_fu_34784_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_63_1_fu_23956_p3() {
    x_V_1_63_1_fu_23956_p3 = (!dneg_63_1_reg_60156.read()[0].is_01())? sc_lv<15>(): ((dneg_63_1_reg_60156.read()[0].to_bool())? p_Val2_4_63_1_reg_60163.read(): p_Val2_12_63_1_reg_60173.read());
}

void Sobel_phase_strm::thread_x_V_1_63_2_fu_24036_p3() {
    x_V_1_63_2_fu_24036_p3 = (!dneg_63_2_fu_23970_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_2_fu_23970_p2.read()[0].to_bool())? p_Val2_4_63_2_fu_23994_p2.read(): p_Val2_12_63_2_fu_24024_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_63_3_fu_24114_p3() {
    x_V_1_63_3_fu_24114_p3 = (!dneg_63_3_fu_24052_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_3_fu_24052_p2.read()[0].to_bool())? p_Val2_4_63_3_fu_24072_p2.read(): p_Val2_12_63_3_fu_24102_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_63_4_fu_34866_p3() {
    x_V_1_63_4_fu_34866_p3 = (!dneg_63_4_fu_34832_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_4_fu_34832_p2.read()[0].to_bool())? p_Val2_4_63_4_fu_34840_p2.read(): p_Val2_12_63_4_fu_34856_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_63_5_fu_34944_p3() {
    x_V_1_63_5_fu_34944_p3 = (!dneg_63_5_fu_34882_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_63_5_fu_34882_p2.read()[0].to_bool())? p_Val2_4_63_5_fu_34902_p2.read(): p_Val2_12_63_5_fu_34932_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_64_1_fu_24150_p3() {
    x_V_1_64_1_fu_24150_p3 = (!dneg_64_1_reg_60194.read()[0].is_01())? sc_lv<15>(): ((dneg_64_1_reg_60194.read()[0].to_bool())? p_Val2_4_64_1_reg_60201.read(): p_Val2_12_64_1_reg_60211.read());
}

void Sobel_phase_strm::thread_x_V_1_64_2_fu_24230_p3() {
    x_V_1_64_2_fu_24230_p3 = (!dneg_64_2_fu_24164_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_2_fu_24164_p2.read()[0].to_bool())? p_Val2_4_64_2_fu_24188_p2.read(): p_Val2_12_64_2_fu_24218_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_64_3_fu_24308_p3() {
    x_V_1_64_3_fu_24308_p3 = (!dneg_64_3_fu_24246_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_3_fu_24246_p2.read()[0].to_bool())? p_Val2_4_64_3_fu_24266_p2.read(): p_Val2_12_64_3_fu_24296_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_64_4_fu_35014_p3() {
    x_V_1_64_4_fu_35014_p3 = (!dneg_64_4_fu_34980_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_4_fu_34980_p2.read()[0].to_bool())? p_Val2_4_64_4_fu_34988_p2.read(): p_Val2_12_64_4_fu_35004_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_64_5_fu_35092_p3() {
    x_V_1_64_5_fu_35092_p3 = (!dneg_64_5_fu_35030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_64_5_fu_35030_p2.read()[0].to_bool())? p_Val2_4_64_5_fu_35050_p2.read(): p_Val2_12_64_5_fu_35080_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_65_1_fu_24344_p3() {
    x_V_1_65_1_fu_24344_p3 = (!dneg_65_1_reg_60232.read()[0].is_01())? sc_lv<15>(): ((dneg_65_1_reg_60232.read()[0].to_bool())? p_Val2_4_65_1_reg_60239.read(): p_Val2_12_65_1_reg_60249.read());
}

void Sobel_phase_strm::thread_x_V_1_65_2_fu_24424_p3() {
    x_V_1_65_2_fu_24424_p3 = (!dneg_65_2_fu_24358_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_2_fu_24358_p2.read()[0].to_bool())? p_Val2_4_65_2_fu_24382_p2.read(): p_Val2_12_65_2_fu_24412_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_65_3_fu_24502_p3() {
    x_V_1_65_3_fu_24502_p3 = (!dneg_65_3_fu_24440_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_3_fu_24440_p2.read()[0].to_bool())? p_Val2_4_65_3_fu_24460_p2.read(): p_Val2_12_65_3_fu_24490_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_65_4_fu_35162_p3() {
    x_V_1_65_4_fu_35162_p3 = (!dneg_65_4_fu_35128_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_4_fu_35128_p2.read()[0].to_bool())? p_Val2_4_65_4_fu_35136_p2.read(): p_Val2_12_65_4_fu_35152_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_65_5_fu_35240_p3() {
    x_V_1_65_5_fu_35240_p3 = (!dneg_65_5_fu_35178_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_65_5_fu_35178_p2.read()[0].to_bool())? p_Val2_4_65_5_fu_35198_p2.read(): p_Val2_12_65_5_fu_35228_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_66_1_fu_24538_p3() {
    x_V_1_66_1_fu_24538_p3 = (!dneg_66_1_reg_60270.read()[0].is_01())? sc_lv<15>(): ((dneg_66_1_reg_60270.read()[0].to_bool())? p_Val2_4_66_1_reg_60277.read(): p_Val2_12_66_1_reg_60287.read());
}

void Sobel_phase_strm::thread_x_V_1_66_2_fu_24618_p3() {
    x_V_1_66_2_fu_24618_p3 = (!dneg_66_2_fu_24552_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_2_fu_24552_p2.read()[0].to_bool())? p_Val2_4_66_2_fu_24576_p2.read(): p_Val2_12_66_2_fu_24606_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_66_3_fu_24696_p3() {
    x_V_1_66_3_fu_24696_p3 = (!dneg_66_3_fu_24634_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_3_fu_24634_p2.read()[0].to_bool())? p_Val2_4_66_3_fu_24654_p2.read(): p_Val2_12_66_3_fu_24684_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_66_4_fu_35310_p3() {
    x_V_1_66_4_fu_35310_p3 = (!dneg_66_4_fu_35276_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_4_fu_35276_p2.read()[0].to_bool())? p_Val2_4_66_4_fu_35284_p2.read(): p_Val2_12_66_4_fu_35300_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_66_5_fu_35388_p3() {
    x_V_1_66_5_fu_35388_p3 = (!dneg_66_5_fu_35326_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_66_5_fu_35326_p2.read()[0].to_bool())? p_Val2_4_66_5_fu_35346_p2.read(): p_Val2_12_66_5_fu_35376_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_67_1_fu_24732_p3() {
    x_V_1_67_1_fu_24732_p3 = (!dneg_67_1_reg_60308.read()[0].is_01())? sc_lv<15>(): ((dneg_67_1_reg_60308.read()[0].to_bool())? p_Val2_4_67_1_reg_60315.read(): p_Val2_12_67_1_reg_60325.read());
}

void Sobel_phase_strm::thread_x_V_1_67_2_fu_24812_p3() {
    x_V_1_67_2_fu_24812_p3 = (!dneg_67_2_fu_24746_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_2_fu_24746_p2.read()[0].to_bool())? p_Val2_4_67_2_fu_24770_p2.read(): p_Val2_12_67_2_fu_24800_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_67_3_fu_24890_p3() {
    x_V_1_67_3_fu_24890_p3 = (!dneg_67_3_fu_24828_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_3_fu_24828_p2.read()[0].to_bool())? p_Val2_4_67_3_fu_24848_p2.read(): p_Val2_12_67_3_fu_24878_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_67_4_fu_35458_p3() {
    x_V_1_67_4_fu_35458_p3 = (!dneg_67_4_fu_35424_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_4_fu_35424_p2.read()[0].to_bool())? p_Val2_4_67_4_fu_35432_p2.read(): p_Val2_12_67_4_fu_35448_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_67_5_fu_35536_p3() {
    x_V_1_67_5_fu_35536_p3 = (!dneg_67_5_fu_35474_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_67_5_fu_35474_p2.read()[0].to_bool())? p_Val2_4_67_5_fu_35494_p2.read(): p_Val2_12_67_5_fu_35524_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_68_1_fu_24926_p3() {
    x_V_1_68_1_fu_24926_p3 = (!dneg_68_1_reg_60346.read()[0].is_01())? sc_lv<15>(): ((dneg_68_1_reg_60346.read()[0].to_bool())? p_Val2_4_68_1_reg_60353.read(): p_Val2_12_68_1_reg_60363.read());
}

void Sobel_phase_strm::thread_x_V_1_68_2_fu_25006_p3() {
    x_V_1_68_2_fu_25006_p3 = (!dneg_68_2_fu_24940_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_2_fu_24940_p2.read()[0].to_bool())? p_Val2_4_68_2_fu_24964_p2.read(): p_Val2_12_68_2_fu_24994_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_68_3_fu_25084_p3() {
    x_V_1_68_3_fu_25084_p3 = (!dneg_68_3_fu_25022_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_3_fu_25022_p2.read()[0].to_bool())? p_Val2_4_68_3_fu_25042_p2.read(): p_Val2_12_68_3_fu_25072_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_68_4_fu_35606_p3() {
    x_V_1_68_4_fu_35606_p3 = (!dneg_68_4_fu_35572_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_4_fu_35572_p2.read()[0].to_bool())? p_Val2_4_68_4_fu_35580_p2.read(): p_Val2_12_68_4_fu_35596_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_68_5_fu_35684_p3() {
    x_V_1_68_5_fu_35684_p3 = (!dneg_68_5_fu_35622_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_68_5_fu_35622_p2.read()[0].to_bool())? p_Val2_4_68_5_fu_35642_p2.read(): p_Val2_12_68_5_fu_35672_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_69_1_fu_25120_p3() {
    x_V_1_69_1_fu_25120_p3 = (!dneg_69_1_reg_60384.read()[0].is_01())? sc_lv<15>(): ((dneg_69_1_reg_60384.read()[0].to_bool())? p_Val2_4_69_1_reg_60391.read(): p_Val2_12_69_1_reg_60401.read());
}

void Sobel_phase_strm::thread_x_V_1_69_2_fu_25200_p3() {
    x_V_1_69_2_fu_25200_p3 = (!dneg_69_2_fu_25134_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_2_fu_25134_p2.read()[0].to_bool())? p_Val2_4_69_2_fu_25158_p2.read(): p_Val2_12_69_2_fu_25188_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_69_3_fu_25278_p3() {
    x_V_1_69_3_fu_25278_p3 = (!dneg_69_3_fu_25216_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_3_fu_25216_p2.read()[0].to_bool())? p_Val2_4_69_3_fu_25236_p2.read(): p_Val2_12_69_3_fu_25266_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_69_4_fu_35754_p3() {
    x_V_1_69_4_fu_35754_p3 = (!dneg_69_4_fu_35720_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_4_fu_35720_p2.read()[0].to_bool())? p_Val2_4_69_4_fu_35728_p2.read(): p_Val2_12_69_4_fu_35744_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_69_5_fu_35832_p3() {
    x_V_1_69_5_fu_35832_p3 = (!dneg_69_5_fu_35770_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_69_5_fu_35770_p2.read()[0].to_bool())? p_Val2_4_69_5_fu_35790_p2.read(): p_Val2_12_69_5_fu_35820_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_1_fu_12898_p3() {
    x_V_1_6_1_fu_12898_p3 = (!dneg_6_1_reg_57990.read()[0].is_01())? sc_lv<15>(): ((dneg_6_1_reg_57990.read()[0].to_bool())? p_Val2_4_6_1_reg_57997.read(): p_Val2_12_6_1_reg_58007.read());
}

void Sobel_phase_strm::thread_x_V_1_6_2_fu_12978_p3() {
    x_V_1_6_2_fu_12978_p3 = (!dneg_6_2_fu_12912_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_2_fu_12912_p2.read()[0].to_bool())? p_Val2_4_6_2_fu_12936_p2.read(): p_Val2_12_6_2_fu_12966_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_3_fu_13056_p3() {
    x_V_1_6_3_fu_13056_p3 = (!dneg_6_3_fu_12994_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_3_fu_12994_p2.read()[0].to_bool())? p_Val2_4_6_3_fu_13014_p2.read(): p_Val2_12_6_3_fu_13044_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_4_fu_26430_p3() {
    x_V_1_6_4_fu_26430_p3 = (!dneg_6_4_fu_26396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_4_fu_26396_p2.read()[0].to_bool())? p_Val2_4_6_4_fu_26404_p2.read(): p_Val2_12_6_4_fu_26420_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_5_fu_26508_p3() {
    x_V_1_6_5_fu_26508_p3 = (!dneg_6_5_fu_26446_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_5_fu_26446_p2.read()[0].to_bool())? p_Val2_4_6_5_fu_26466_p2.read(): p_Val2_12_6_5_fu_26496_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_70_1_fu_25314_p3() {
    x_V_1_70_1_fu_25314_p3 = (!dneg_70_1_reg_60422.read()[0].is_01())? sc_lv<15>(): ((dneg_70_1_reg_60422.read()[0].to_bool())? p_Val2_4_70_1_reg_60429.read(): p_Val2_12_70_1_reg_60439.read());
}

void Sobel_phase_strm::thread_x_V_1_70_2_fu_25394_p3() {
    x_V_1_70_2_fu_25394_p3 = (!dneg_70_2_fu_25328_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_2_fu_25328_p2.read()[0].to_bool())? p_Val2_4_70_2_fu_25352_p2.read(): p_Val2_12_70_2_fu_25382_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_70_3_fu_25472_p3() {
    x_V_1_70_3_fu_25472_p3 = (!dneg_70_3_fu_25410_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_3_fu_25410_p2.read()[0].to_bool())? p_Val2_4_70_3_fu_25430_p2.read(): p_Val2_12_70_3_fu_25460_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_70_4_fu_35902_p3() {
    x_V_1_70_4_fu_35902_p3 = (!dneg_70_4_fu_35868_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_4_fu_35868_p2.read()[0].to_bool())? p_Val2_4_70_4_fu_35876_p2.read(): p_Val2_12_70_4_fu_35892_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_70_5_fu_35980_p3() {
    x_V_1_70_5_fu_35980_p3 = (!dneg_70_5_fu_35918_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_70_5_fu_35918_p2.read()[0].to_bool())? p_Val2_4_70_5_fu_35938_p2.read(): p_Val2_12_70_5_fu_35968_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_1_fu_13092_p3() {
    x_V_1_7_1_fu_13092_p3 = (!dneg_7_1_reg_58028.read()[0].is_01())? sc_lv<15>(): ((dneg_7_1_reg_58028.read()[0].to_bool())? p_Val2_4_7_1_reg_58035.read(): p_Val2_12_7_1_reg_58045.read());
}

void Sobel_phase_strm::thread_x_V_1_7_2_fu_13172_p3() {
    x_V_1_7_2_fu_13172_p3 = (!dneg_7_2_fu_13106_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_2_fu_13106_p2.read()[0].to_bool())? p_Val2_4_7_2_fu_13130_p2.read(): p_Val2_12_7_2_fu_13160_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_3_fu_13250_p3() {
    x_V_1_7_3_fu_13250_p3 = (!dneg_7_3_fu_13188_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_3_fu_13188_p2.read()[0].to_bool())? p_Val2_4_7_3_fu_13208_p2.read(): p_Val2_12_7_3_fu_13238_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_4_fu_26578_p3() {
    x_V_1_7_4_fu_26578_p3 = (!dneg_7_4_fu_26544_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_4_fu_26544_p2.read()[0].to_bool())? p_Val2_4_7_4_fu_26552_p2.read(): p_Val2_12_7_4_fu_26568_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_5_fu_26656_p3() {
    x_V_1_7_5_fu_26656_p3 = (!dneg_7_5_fu_26594_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_5_fu_26594_p2.read()[0].to_bool())? p_Val2_4_7_5_fu_26614_p2.read(): p_Val2_12_7_5_fu_26644_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_1_fu_13286_p3() {
    x_V_1_8_1_fu_13286_p3 = (!dneg_8_1_reg_58066.read()[0].is_01())? sc_lv<15>(): ((dneg_8_1_reg_58066.read()[0].to_bool())? p_Val2_4_8_1_reg_58073.read(): p_Val2_12_8_1_reg_58083.read());
}

void Sobel_phase_strm::thread_x_V_1_8_2_fu_13366_p3() {
    x_V_1_8_2_fu_13366_p3 = (!dneg_8_2_fu_13300_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_2_fu_13300_p2.read()[0].to_bool())? p_Val2_4_8_2_fu_13324_p2.read(): p_Val2_12_8_2_fu_13354_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_3_fu_13444_p3() {
    x_V_1_8_3_fu_13444_p3 = (!dneg_8_3_fu_13382_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_3_fu_13382_p2.read()[0].to_bool())? p_Val2_4_8_3_fu_13402_p2.read(): p_Val2_12_8_3_fu_13432_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_4_fu_26726_p3() {
    x_V_1_8_4_fu_26726_p3 = (!dneg_8_4_fu_26692_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_4_fu_26692_p2.read()[0].to_bool())? p_Val2_4_8_4_fu_26700_p2.read(): p_Val2_12_8_4_fu_26716_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_5_fu_26804_p3() {
    x_V_1_8_5_fu_26804_p3 = (!dneg_8_5_fu_26742_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_5_fu_26742_p2.read()[0].to_bool())? p_Val2_4_8_5_fu_26762_p2.read(): p_Val2_12_8_5_fu_26792_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_1_fu_13480_p3() {
    x_V_1_9_1_fu_13480_p3 = (!dneg_9_1_reg_58104.read()[0].is_01())? sc_lv<15>(): ((dneg_9_1_reg_58104.read()[0].to_bool())? p_Val2_4_9_1_reg_58111.read(): p_Val2_12_9_1_reg_58121.read());
}

void Sobel_phase_strm::thread_x_V_1_9_2_fu_13560_p3() {
    x_V_1_9_2_fu_13560_p3 = (!dneg_9_2_fu_13494_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_2_fu_13494_p2.read()[0].to_bool())? p_Val2_4_9_2_fu_13518_p2.read(): p_Val2_12_9_2_fu_13548_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_3_fu_13638_p3() {
    x_V_1_9_3_fu_13638_p3 = (!dneg_9_3_fu_13576_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_3_fu_13576_p2.read()[0].to_bool())? p_Val2_4_9_3_fu_13596_p2.read(): p_Val2_12_9_3_fu_13626_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_4_fu_26874_p3() {
    x_V_1_9_4_fu_26874_p3 = (!dneg_9_4_fu_26840_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_4_fu_26840_p2.read()[0].to_bool())? p_Val2_4_9_4_fu_26848_p2.read(): p_Val2_12_9_4_fu_26864_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_5_fu_26952_p3() {
    x_V_1_9_5_fu_26952_p3 = (!dneg_9_5_fu_26890_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_5_fu_26890_p2.read()[0].to_bool())? p_Val2_4_9_5_fu_26910_p2.read(): p_Val2_12_9_5_fu_26940_p2.read());
}

void Sobel_phase_strm::thread_y0_V_10_cast_fu_4662_p1() {
    y0_V_10_cast_fu_4662_p1 = esl_zext<14,13>(y0_V_10_fu_4654_p3.read());
}

void Sobel_phase_strm::thread_y0_V_10_fu_4654_p3() {
    y0_V_10_fu_4654_p3 = esl_concat<8,5>(grad_y_V_pixel_11_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_11_cast_fu_4780_p1() {
    y0_V_11_cast_fu_4780_p1 = esl_zext<14,13>(y0_V_11_fu_4772_p3.read());
}

void Sobel_phase_strm::thread_y0_V_11_fu_4772_p3() {
    y0_V_11_fu_4772_p3 = esl_concat<8,5>(grad_y_V_pixel_12_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_12_cast_fu_4898_p1() {
    y0_V_12_cast_fu_4898_p1 = esl_zext<14,13>(y0_V_12_fu_4890_p3.read());
}

void Sobel_phase_strm::thread_y0_V_12_fu_4890_p3() {
    y0_V_12_fu_4890_p3 = esl_concat<8,5>(grad_y_V_pixel_13_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_13_cast_fu_5016_p1() {
    y0_V_13_cast_fu_5016_p1 = esl_zext<14,13>(y0_V_13_fu_5008_p3.read());
}

void Sobel_phase_strm::thread_y0_V_13_fu_5008_p3() {
    y0_V_13_fu_5008_p3 = esl_concat<8,5>(grad_y_V_pixel_14_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_14_cast_fu_5134_p1() {
    y0_V_14_cast_fu_5134_p1 = esl_zext<14,13>(y0_V_14_fu_5126_p3.read());
}

void Sobel_phase_strm::thread_y0_V_14_fu_5126_p3() {
    y0_V_14_fu_5126_p3 = esl_concat<8,5>(grad_y_V_pixel_15_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_15_cast_fu_5252_p1() {
    y0_V_15_cast_fu_5252_p1 = esl_zext<14,13>(y0_V_15_fu_5244_p3.read());
}

void Sobel_phase_strm::thread_y0_V_15_fu_5244_p3() {
    y0_V_15_fu_5244_p3 = esl_concat<8,5>(grad_y_V_pixel_16_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_16_cast_fu_5370_p1() {
    y0_V_16_cast_fu_5370_p1 = esl_zext<14,13>(y0_V_16_fu_5362_p3.read());
}

void Sobel_phase_strm::thread_y0_V_16_fu_5362_p3() {
    y0_V_16_fu_5362_p3 = esl_concat<8,5>(grad_y_V_pixel_17_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_17_cast_fu_5488_p1() {
    y0_V_17_cast_fu_5488_p1 = esl_zext<14,13>(y0_V_17_fu_5480_p3.read());
}

void Sobel_phase_strm::thread_y0_V_17_fu_5480_p3() {
    y0_V_17_fu_5480_p3 = esl_concat<8,5>(grad_y_V_pixel_18_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_18_cast_fu_5606_p1() {
    y0_V_18_cast_fu_5606_p1 = esl_zext<14,13>(y0_V_18_fu_5598_p3.read());
}

void Sobel_phase_strm::thread_y0_V_18_fu_5598_p3() {
    y0_V_18_fu_5598_p3 = esl_concat<8,5>(grad_y_V_pixel_19_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_19_cast_fu_5724_p1() {
    y0_V_19_cast_fu_5724_p1 = esl_zext<14,13>(y0_V_19_fu_5716_p3.read());
}

void Sobel_phase_strm::thread_y0_V_19_fu_5716_p3() {
    y0_V_19_fu_5716_p3 = esl_concat<8,5>(grad_y_V_pixel_20_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_1_cast_fu_3482_p1() {
    y0_V_1_cast_fu_3482_p1 = esl_zext<14,13>(y0_V_1_fu_3474_p3.read());
}

void Sobel_phase_strm::thread_y0_V_1_fu_3474_p3() {
    y0_V_1_fu_3474_p3 = esl_concat<8,5>(grad_y_V_pixel_1_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_20_cast_fu_5842_p1() {
    y0_V_20_cast_fu_5842_p1 = esl_zext<14,13>(y0_V_20_fu_5834_p3.read());
}

void Sobel_phase_strm::thread_y0_V_20_fu_5834_p3() {
    y0_V_20_fu_5834_p3 = esl_concat<8,5>(grad_y_V_pixel_21_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_21_cast_fu_5960_p1() {
    y0_V_21_cast_fu_5960_p1 = esl_zext<14,13>(y0_V_21_fu_5952_p3.read());
}

void Sobel_phase_strm::thread_y0_V_21_fu_5952_p3() {
    y0_V_21_fu_5952_p3 = esl_concat<8,5>(grad_y_V_pixel_22_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_22_cast_fu_6078_p1() {
    y0_V_22_cast_fu_6078_p1 = esl_zext<14,13>(y0_V_22_fu_6070_p3.read());
}

void Sobel_phase_strm::thread_y0_V_22_fu_6070_p3() {
    y0_V_22_fu_6070_p3 = esl_concat<8,5>(grad_y_V_pixel_23_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_23_cast_fu_6196_p1() {
    y0_V_23_cast_fu_6196_p1 = esl_zext<14,13>(y0_V_23_fu_6188_p3.read());
}

void Sobel_phase_strm::thread_y0_V_23_fu_6188_p3() {
    y0_V_23_fu_6188_p3 = esl_concat<8,5>(grad_y_V_pixel_24_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_24_cast_fu_6314_p1() {
    y0_V_24_cast_fu_6314_p1 = esl_zext<14,13>(y0_V_24_fu_6306_p3.read());
}

void Sobel_phase_strm::thread_y0_V_24_fu_6306_p3() {
    y0_V_24_fu_6306_p3 = esl_concat<8,5>(grad_y_V_pixel_25_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_25_cast_fu_6432_p1() {
    y0_V_25_cast_fu_6432_p1 = esl_zext<14,13>(y0_V_25_fu_6424_p3.read());
}

void Sobel_phase_strm::thread_y0_V_25_fu_6424_p3() {
    y0_V_25_fu_6424_p3 = esl_concat<8,5>(grad_y_V_pixel_26_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_26_cast_fu_6550_p1() {
    y0_V_26_cast_fu_6550_p1 = esl_zext<14,13>(y0_V_26_fu_6542_p3.read());
}

void Sobel_phase_strm::thread_y0_V_26_fu_6542_p3() {
    y0_V_26_fu_6542_p3 = esl_concat<8,5>(grad_y_V_pixel_27_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_27_cast_fu_6668_p1() {
    y0_V_27_cast_fu_6668_p1 = esl_zext<14,13>(y0_V_27_fu_6660_p3.read());
}

void Sobel_phase_strm::thread_y0_V_27_fu_6660_p3() {
    y0_V_27_fu_6660_p3 = esl_concat<8,5>(grad_y_V_pixel_28_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_28_cast_fu_6786_p1() {
    y0_V_28_cast_fu_6786_p1 = esl_zext<14,13>(y0_V_28_fu_6778_p3.read());
}

void Sobel_phase_strm::thread_y0_V_28_fu_6778_p3() {
    y0_V_28_fu_6778_p3 = esl_concat<8,5>(grad_y_V_pixel_29_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_29_cast_fu_6904_p1() {
    y0_V_29_cast_fu_6904_p1 = esl_zext<14,13>(y0_V_29_fu_6896_p3.read());
}

void Sobel_phase_strm::thread_y0_V_29_fu_6896_p3() {
    y0_V_29_fu_6896_p3 = esl_concat<8,5>(grad_y_V_pixel_30_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_2_cast_fu_3600_p1() {
    y0_V_2_cast_fu_3600_p1 = esl_zext<14,13>(y0_V_2_fu_3592_p3.read());
}

void Sobel_phase_strm::thread_y0_V_2_fu_3592_p3() {
    y0_V_2_fu_3592_p3 = esl_concat<8,5>(grad_y_V_pixel_2_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_30_cast_fu_7022_p1() {
    y0_V_30_cast_fu_7022_p1 = esl_zext<14,13>(y0_V_30_fu_7014_p3.read());
}

void Sobel_phase_strm::thread_y0_V_30_fu_7014_p3() {
    y0_V_30_fu_7014_p3 = esl_concat<8,5>(grad_y_V_pixel_31_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_31_cast_fu_7140_p1() {
    y0_V_31_cast_fu_7140_p1 = esl_zext<14,13>(y0_V_31_fu_7132_p3.read());
}

void Sobel_phase_strm::thread_y0_V_31_fu_7132_p3() {
    y0_V_31_fu_7132_p3 = esl_concat<8,5>(grad_y_V_pixel_32_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_32_cast_fu_7258_p1() {
    y0_V_32_cast_fu_7258_p1 = esl_zext<14,13>(y0_V_32_fu_7250_p3.read());
}

void Sobel_phase_strm::thread_y0_V_32_fu_7250_p3() {
    y0_V_32_fu_7250_p3 = esl_concat<8,5>(grad_y_V_pixel_33_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_33_cast_fu_7376_p1() {
    y0_V_33_cast_fu_7376_p1 = esl_zext<14,13>(y0_V_33_fu_7368_p3.read());
}

void Sobel_phase_strm::thread_y0_V_33_fu_7368_p3() {
    y0_V_33_fu_7368_p3 = esl_concat<8,5>(grad_y_V_pixel_34_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_34_cast_fu_7494_p1() {
    y0_V_34_cast_fu_7494_p1 = esl_zext<14,13>(y0_V_34_fu_7486_p3.read());
}

void Sobel_phase_strm::thread_y0_V_34_fu_7486_p3() {
    y0_V_34_fu_7486_p3 = esl_concat<8,5>(grad_y_V_pixel_35_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_35_cast_fu_7612_p1() {
    y0_V_35_cast_fu_7612_p1 = esl_zext<14,13>(y0_V_35_fu_7604_p3.read());
}

void Sobel_phase_strm::thread_y0_V_35_fu_7604_p3() {
    y0_V_35_fu_7604_p3 = esl_concat<8,5>(grad_y_V_pixel_36_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_36_cast_fu_7730_p1() {
    y0_V_36_cast_fu_7730_p1 = esl_zext<14,13>(y0_V_36_fu_7722_p3.read());
}

void Sobel_phase_strm::thread_y0_V_36_fu_7722_p3() {
    y0_V_36_fu_7722_p3 = esl_concat<8,5>(grad_y_V_pixel_37_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_37_cast_fu_7848_p1() {
    y0_V_37_cast_fu_7848_p1 = esl_zext<14,13>(y0_V_37_fu_7840_p3.read());
}

void Sobel_phase_strm::thread_y0_V_37_fu_7840_p3() {
    y0_V_37_fu_7840_p3 = esl_concat<8,5>(grad_y_V_pixel_38_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_38_cast_fu_7966_p1() {
    y0_V_38_cast_fu_7966_p1 = esl_zext<14,13>(y0_V_38_fu_7958_p3.read());
}

void Sobel_phase_strm::thread_y0_V_38_fu_7958_p3() {
    y0_V_38_fu_7958_p3 = esl_concat<8,5>(grad_y_V_pixel_39_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_39_cast_fu_8084_p1() {
    y0_V_39_cast_fu_8084_p1 = esl_zext<14,13>(y0_V_39_fu_8076_p3.read());
}

void Sobel_phase_strm::thread_y0_V_39_fu_8076_p3() {
    y0_V_39_fu_8076_p3 = esl_concat<8,5>(grad_y_V_pixel_40_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_3_cast_fu_3718_p1() {
    y0_V_3_cast_fu_3718_p1 = esl_zext<14,13>(y0_V_3_fu_3710_p3.read());
}

void Sobel_phase_strm::thread_y0_V_3_fu_3710_p3() {
    y0_V_3_fu_3710_p3 = esl_concat<8,5>(grad_y_V_pixel_3_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_40_cast_fu_8202_p1() {
    y0_V_40_cast_fu_8202_p1 = esl_zext<14,13>(y0_V_40_fu_8194_p3.read());
}

void Sobel_phase_strm::thread_y0_V_40_fu_8194_p3() {
    y0_V_40_fu_8194_p3 = esl_concat<8,5>(grad_y_V_pixel_41_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_41_cast_fu_8320_p1() {
    y0_V_41_cast_fu_8320_p1 = esl_zext<14,13>(y0_V_41_fu_8312_p3.read());
}

void Sobel_phase_strm::thread_y0_V_41_fu_8312_p3() {
    y0_V_41_fu_8312_p3 = esl_concat<8,5>(grad_y_V_pixel_42_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_42_cast_fu_8438_p1() {
    y0_V_42_cast_fu_8438_p1 = esl_zext<14,13>(y0_V_42_fu_8430_p3.read());
}

void Sobel_phase_strm::thread_y0_V_42_fu_8430_p3() {
    y0_V_42_fu_8430_p3 = esl_concat<8,5>(grad_y_V_pixel_43_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_43_cast_fu_8556_p1() {
    y0_V_43_cast_fu_8556_p1 = esl_zext<14,13>(y0_V_43_fu_8548_p3.read());
}

void Sobel_phase_strm::thread_y0_V_43_fu_8548_p3() {
    y0_V_43_fu_8548_p3 = esl_concat<8,5>(grad_y_V_pixel_44_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_44_cast_fu_8674_p1() {
    y0_V_44_cast_fu_8674_p1 = esl_zext<14,13>(y0_V_44_fu_8666_p3.read());
}

void Sobel_phase_strm::thread_y0_V_44_fu_8666_p3() {
    y0_V_44_fu_8666_p3 = esl_concat<8,5>(grad_y_V_pixel_45_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_45_cast_fu_8792_p1() {
    y0_V_45_cast_fu_8792_p1 = esl_zext<14,13>(y0_V_45_fu_8784_p3.read());
}

void Sobel_phase_strm::thread_y0_V_45_fu_8784_p3() {
    y0_V_45_fu_8784_p3 = esl_concat<8,5>(grad_y_V_pixel_46_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_46_cast_fu_8910_p1() {
    y0_V_46_cast_fu_8910_p1 = esl_zext<14,13>(y0_V_46_fu_8902_p3.read());
}

void Sobel_phase_strm::thread_y0_V_46_fu_8902_p3() {
    y0_V_46_fu_8902_p3 = esl_concat<8,5>(grad_y_V_pixel_47_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_47_cast_fu_9028_p1() {
    y0_V_47_cast_fu_9028_p1 = esl_zext<14,13>(y0_V_47_fu_9020_p3.read());
}

void Sobel_phase_strm::thread_y0_V_47_fu_9020_p3() {
    y0_V_47_fu_9020_p3 = esl_concat<8,5>(grad_y_V_pixel_48_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_48_cast_fu_9146_p1() {
    y0_V_48_cast_fu_9146_p1 = esl_zext<14,13>(y0_V_48_fu_9138_p3.read());
}

void Sobel_phase_strm::thread_y0_V_48_fu_9138_p3() {
    y0_V_48_fu_9138_p3 = esl_concat<8,5>(grad_y_V_pixel_49_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_49_cast_fu_9264_p1() {
    y0_V_49_cast_fu_9264_p1 = esl_zext<14,13>(y0_V_49_fu_9256_p3.read());
}

void Sobel_phase_strm::thread_y0_V_49_fu_9256_p3() {
    y0_V_49_fu_9256_p3 = esl_concat<8,5>(grad_y_V_pixel_50_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_4_cast_fu_3836_p1() {
    y0_V_4_cast_fu_3836_p1 = esl_zext<14,13>(y0_V_4_fu_3828_p3.read());
}

void Sobel_phase_strm::thread_y0_V_4_fu_3828_p3() {
    y0_V_4_fu_3828_p3 = esl_concat<8,5>(grad_y_V_pixel_4_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_50_cast_fu_9382_p1() {
    y0_V_50_cast_fu_9382_p1 = esl_zext<14,13>(y0_V_50_fu_9374_p3.read());
}

void Sobel_phase_strm::thread_y0_V_50_fu_9374_p3() {
    y0_V_50_fu_9374_p3 = esl_concat<8,5>(grad_y_V_pixel_51_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_51_cast_fu_9500_p1() {
    y0_V_51_cast_fu_9500_p1 = esl_zext<14,13>(y0_V_51_fu_9492_p3.read());
}

void Sobel_phase_strm::thread_y0_V_51_fu_9492_p3() {
    y0_V_51_fu_9492_p3 = esl_concat<8,5>(grad_y_V_pixel_52_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_52_cast_fu_9618_p1() {
    y0_V_52_cast_fu_9618_p1 = esl_zext<14,13>(y0_V_52_fu_9610_p3.read());
}

void Sobel_phase_strm::thread_y0_V_52_fu_9610_p3() {
    y0_V_52_fu_9610_p3 = esl_concat<8,5>(grad_y_V_pixel_53_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_53_cast_fu_9736_p1() {
    y0_V_53_cast_fu_9736_p1 = esl_zext<14,13>(y0_V_53_fu_9728_p3.read());
}

void Sobel_phase_strm::thread_y0_V_53_fu_9728_p3() {
    y0_V_53_fu_9728_p3 = esl_concat<8,5>(grad_y_V_pixel_54_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_54_cast_fu_9854_p1() {
    y0_V_54_cast_fu_9854_p1 = esl_zext<14,13>(y0_V_54_fu_9846_p3.read());
}

void Sobel_phase_strm::thread_y0_V_54_fu_9846_p3() {
    y0_V_54_fu_9846_p3 = esl_concat<8,5>(grad_y_V_pixel_55_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_55_cast_fu_9972_p1() {
    y0_V_55_cast_fu_9972_p1 = esl_zext<14,13>(y0_V_55_fu_9964_p3.read());
}

void Sobel_phase_strm::thread_y0_V_55_fu_9964_p3() {
    y0_V_55_fu_9964_p3 = esl_concat<8,5>(grad_y_V_pixel_56_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_56_cast_fu_10090_p1() {
    y0_V_56_cast_fu_10090_p1 = esl_zext<14,13>(y0_V_56_fu_10082_p3.read());
}

void Sobel_phase_strm::thread_y0_V_56_fu_10082_p3() {
    y0_V_56_fu_10082_p3 = esl_concat<8,5>(grad_y_V_pixel_57_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_57_cast_fu_10208_p1() {
    y0_V_57_cast_fu_10208_p1 = esl_zext<14,13>(y0_V_57_fu_10200_p3.read());
}

void Sobel_phase_strm::thread_y0_V_57_fu_10200_p3() {
    y0_V_57_fu_10200_p3 = esl_concat<8,5>(grad_y_V_pixel_58_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_58_cast_fu_10326_p1() {
    y0_V_58_cast_fu_10326_p1 = esl_zext<14,13>(y0_V_58_fu_10318_p3.read());
}

void Sobel_phase_strm::thread_y0_V_58_fu_10318_p3() {
    y0_V_58_fu_10318_p3 = esl_concat<8,5>(grad_y_V_pixel_59_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_59_cast_fu_10444_p1() {
    y0_V_59_cast_fu_10444_p1 = esl_zext<14,13>(y0_V_59_fu_10436_p3.read());
}

void Sobel_phase_strm::thread_y0_V_59_fu_10436_p3() {
    y0_V_59_fu_10436_p3 = esl_concat<8,5>(grad_y_V_pixel_60_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_5_cast_fu_3954_p1() {
    y0_V_5_cast_fu_3954_p1 = esl_zext<14,13>(y0_V_5_fu_3946_p3.read());
}

void Sobel_phase_strm::thread_y0_V_5_fu_3946_p3() {
    y0_V_5_fu_3946_p3 = esl_concat<8,5>(grad_y_V_pixel_5_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_60_cast_fu_10562_p1() {
    y0_V_60_cast_fu_10562_p1 = esl_zext<14,13>(y0_V_60_fu_10554_p3.read());
}

void Sobel_phase_strm::thread_y0_V_60_fu_10554_p3() {
    y0_V_60_fu_10554_p3 = esl_concat<8,5>(grad_y_V_pixel_61_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_61_cast_fu_10680_p1() {
    y0_V_61_cast_fu_10680_p1 = esl_zext<14,13>(y0_V_61_fu_10672_p3.read());
}

void Sobel_phase_strm::thread_y0_V_61_fu_10672_p3() {
    y0_V_61_fu_10672_p3 = esl_concat<8,5>(grad_y_V_pixel_62_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_62_cast_fu_10798_p1() {
    y0_V_62_cast_fu_10798_p1 = esl_zext<14,13>(y0_V_62_fu_10790_p3.read());
}

void Sobel_phase_strm::thread_y0_V_62_fu_10790_p3() {
    y0_V_62_fu_10790_p3 = esl_concat<8,5>(grad_y_V_pixel_63_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_63_cast_fu_10916_p1() {
    y0_V_63_cast_fu_10916_p1 = esl_zext<14,13>(y0_V_63_fu_10908_p3.read());
}

void Sobel_phase_strm::thread_y0_V_63_fu_10908_p3() {
    y0_V_63_fu_10908_p3 = esl_concat<8,5>(grad_y_V_pixel_64_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_64_cast_fu_11034_p1() {
    y0_V_64_cast_fu_11034_p1 = esl_zext<14,13>(y0_V_64_fu_11026_p3.read());
}

void Sobel_phase_strm::thread_y0_V_64_fu_11026_p3() {
    y0_V_64_fu_11026_p3 = esl_concat<8,5>(grad_y_V_pixel_65_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_65_cast_fu_11152_p1() {
    y0_V_65_cast_fu_11152_p1 = esl_zext<14,13>(y0_V_65_fu_11144_p3.read());
}

void Sobel_phase_strm::thread_y0_V_65_fu_11144_p3() {
    y0_V_65_fu_11144_p3 = esl_concat<8,5>(grad_y_V_pixel_66_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_66_cast_fu_11270_p1() {
    y0_V_66_cast_fu_11270_p1 = esl_zext<14,13>(y0_V_66_fu_11262_p3.read());
}

void Sobel_phase_strm::thread_y0_V_66_fu_11262_p3() {
    y0_V_66_fu_11262_p3 = esl_concat<8,5>(grad_y_V_pixel_67_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_67_cast_fu_11388_p1() {
    y0_V_67_cast_fu_11388_p1 = esl_zext<14,13>(y0_V_67_fu_11380_p3.read());
}

void Sobel_phase_strm::thread_y0_V_67_fu_11380_p3() {
    y0_V_67_fu_11380_p3 = esl_concat<8,5>(grad_y_V_pixel_68_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_68_cast_fu_11506_p1() {
    y0_V_68_cast_fu_11506_p1 = esl_zext<14,13>(y0_V_68_fu_11498_p3.read());
}

void Sobel_phase_strm::thread_y0_V_68_fu_11498_p3() {
    y0_V_68_fu_11498_p3 = esl_concat<8,5>(grad_y_V_pixel_69_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_69_cast_fu_11624_p1() {
    y0_V_69_cast_fu_11624_p1 = esl_zext<14,13>(y0_V_69_fu_11616_p3.read());
}

void Sobel_phase_strm::thread_y0_V_69_fu_11616_p3() {
    y0_V_69_fu_11616_p3 = esl_concat<8,5>(grad_y_V_pixel_70_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_6_cast_fu_4072_p1() {
    y0_V_6_cast_fu_4072_p1 = esl_zext<14,13>(y0_V_6_fu_4064_p3.read());
}

void Sobel_phase_strm::thread_y0_V_6_fu_4064_p3() {
    y0_V_6_fu_4064_p3 = esl_concat<8,5>(grad_y_V_pixel_6_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_7_cast_fu_4190_p1() {
    y0_V_7_cast_fu_4190_p1 = esl_zext<14,13>(y0_V_7_fu_4182_p3.read());
}

void Sobel_phase_strm::thread_y0_V_7_fu_4182_p3() {
    y0_V_7_fu_4182_p3 = esl_concat<8,5>(grad_y_V_pixel_7_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_8_cast_fu_4308_p1() {
    y0_V_8_cast_fu_4308_p1 = esl_zext<14,13>(y0_V_8_fu_4300_p3.read());
}

void Sobel_phase_strm::thread_y0_V_8_fu_4300_p3() {
    y0_V_8_fu_4300_p3 = esl_concat<8,5>(grad_y_V_pixel_8_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_9_cast_fu_4426_p1() {
    y0_V_9_cast_fu_4426_p1 = esl_zext<14,13>(y0_V_9_fu_4418_p3.read());
}

void Sobel_phase_strm::thread_y0_V_9_fu_4418_p3() {
    y0_V_9_fu_4418_p3 = esl_concat<8,5>(grad_y_V_pixel_9_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_cast_1174_fu_4544_p1() {
    y0_V_cast_1174_fu_4544_p1 = esl_zext<14,13>(y0_V_s_fu_4536_p3.read());
}

void Sobel_phase_strm::thread_y0_V_cast_fu_3364_p1() {
    y0_V_cast_fu_3364_p1 = esl_zext<14,13>(y0_V_fu_3356_p3.read());
}

void Sobel_phase_strm::thread_y0_V_fu_3356_p3() {
    y0_V_fu_3356_p3 = esl_concat<8,5>(grad_y_V_pixel_0_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_s_fu_4536_p3() {
    y0_V_s_fu_4536_p3 = esl_concat<8,5>(grad_y_V_pixel_10_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y_V_1_0_1_cast_fu_11744_p1() {
    y_V_1_0_1_cast_fu_11744_p1 = esl_sext<15,14>(y_V_1_0_1_fu_11739_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_0_1_fu_11739_p3() {
    y_V_1_0_1_fu_11739_p3 = (!dneg_0_1_reg_57762.read()[0].is_01())? sc_lv<14>(): ((dneg_0_1_reg_57762.read()[0].to_bool())? p_Val2_7_0_1_reg_57774.read(): p_Val2_14_0_1_reg_57784.read());
}

void Sobel_phase_strm::thread_y_V_1_0_2_fu_11822_p3() {
    y_V_1_0_2_fu_11822_p3 = (!dneg_0_2_fu_11748_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_2_fu_11748_p2.read()[0].to_bool())? p_Val2_7_0_2_fu_11792_p2.read(): p_Val2_14_0_2_fu_11808_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_3_fu_11900_p3() {
    y_V_1_0_3_fu_11900_p3 = (!dneg_0_3_fu_11830_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_3_fu_11830_p2.read()[0].to_bool())? p_Val2_7_0_3_fu_11870_p2.read(): p_Val2_14_0_3_fu_11886_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_4_fu_25550_p3() {
    y_V_1_0_4_fu_25550_p3 = (!dneg_0_4_fu_25508_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_4_fu_25508_p2.read()[0].to_bool())? p_Val2_7_0_4_fu_25524_p2.read(): p_Val2_14_0_4_fu_25537_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_5_fu_25628_p3() {
    y_V_1_0_5_fu_25628_p3 = (!dneg_0_5_fu_25558_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_5_fu_25558_p2.read()[0].to_bool())? p_Val2_7_0_5_fu_25598_p2.read(): p_Val2_14_0_5_fu_25614_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_6_fu_36097_p3() {
    y_V_1_0_6_fu_36097_p3 = (!dneg_0_6_fu_36063_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_6_fu_36063_p2.read()[0].to_bool())? p_Val2_7_0_6_fu_36079_p2.read(): p_Val2_14_0_6_fu_36092_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_7_fu_36155_p3() {
    y_V_1_0_7_fu_36155_p3 = (!dneg_0_7_fu_36105_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_7_fu_36105_p2.read()[0].to_bool())? p_Val2_7_0_7_fu_36143_p2.read(): p_Val2_14_0_7_fu_36149_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_1_cast_fu_13684_p1() {
    y_V_1_10_1_cast_fu_13684_p1 = esl_sext<15,14>(y_V_1_10_1_fu_13679_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_10_1_fu_13679_p3() {
    y_V_1_10_1_fu_13679_p3 = (!dneg_10_1_reg_58142.read()[0].is_01())? sc_lv<14>(): ((dneg_10_1_reg_58142.read()[0].to_bool())? p_Val2_7_10_1_reg_58154.read(): p_Val2_14_10_1_reg_58164.read());
}

void Sobel_phase_strm::thread_y_V_1_10_2_fu_13762_p3() {
    y_V_1_10_2_fu_13762_p3 = (!dneg_10_2_fu_13688_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_2_fu_13688_p2.read()[0].to_bool())? p_Val2_7_10_2_fu_13732_p2.read(): p_Val2_14_10_2_fu_13748_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_3_fu_13840_p3() {
    y_V_1_10_3_fu_13840_p3 = (!dneg_10_3_fu_13770_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_3_fu_13770_p2.read()[0].to_bool())? p_Val2_7_10_3_fu_13810_p2.read(): p_Val2_14_10_3_fu_13826_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_4_fu_27030_p3() {
    y_V_1_10_4_fu_27030_p3 = (!dneg_10_4_fu_26988_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_4_fu_26988_p2.read()[0].to_bool())? p_Val2_7_10_4_fu_27004_p2.read(): p_Val2_14_10_4_fu_27017_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_5_fu_27108_p3() {
    y_V_1_10_5_fu_27108_p3 = (!dneg_10_5_fu_27038_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_5_fu_27038_p2.read()[0].to_bool())? p_Val2_7_10_5_fu_27078_p2.read(): p_Val2_14_10_5_fu_27094_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_6_fu_37627_p3() {
    y_V_1_10_6_fu_37627_p3 = (!dneg_10_6_fu_37593_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_6_fu_37593_p2.read()[0].to_bool())? p_Val2_7_10_6_fu_37609_p2.read(): p_Val2_14_10_6_fu_37622_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_7_fu_37685_p3() {
    y_V_1_10_7_fu_37685_p3 = (!dneg_10_7_fu_37635_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_7_fu_37635_p2.read()[0].to_bool())? p_Val2_7_10_7_fu_37673_p2.read(): p_Val2_14_10_7_fu_37679_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_1_cast_fu_13878_p1() {
    y_V_1_11_1_cast_fu_13878_p1 = esl_sext<15,14>(y_V_1_11_1_fu_13873_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_11_1_fu_13873_p3() {
    y_V_1_11_1_fu_13873_p3 = (!dneg_11_1_reg_58180.read()[0].is_01())? sc_lv<14>(): ((dneg_11_1_reg_58180.read()[0].to_bool())? p_Val2_7_11_1_reg_58192.read(): p_Val2_14_11_1_reg_58202.read());
}

void Sobel_phase_strm::thread_y_V_1_11_2_fu_13956_p3() {
    y_V_1_11_2_fu_13956_p3 = (!dneg_11_2_fu_13882_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_2_fu_13882_p2.read()[0].to_bool())? p_Val2_7_11_2_fu_13926_p2.read(): p_Val2_14_11_2_fu_13942_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_3_fu_14034_p3() {
    y_V_1_11_3_fu_14034_p3 = (!dneg_11_3_fu_13964_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_3_fu_13964_p2.read()[0].to_bool())? p_Val2_7_11_3_fu_14004_p2.read(): p_Val2_14_11_3_fu_14020_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_4_fu_27178_p3() {
    y_V_1_11_4_fu_27178_p3 = (!dneg_11_4_fu_27136_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_4_fu_27136_p2.read()[0].to_bool())? p_Val2_7_11_4_fu_27152_p2.read(): p_Val2_14_11_4_fu_27165_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_5_fu_27256_p3() {
    y_V_1_11_5_fu_27256_p3 = (!dneg_11_5_fu_27186_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_5_fu_27186_p2.read()[0].to_bool())? p_Val2_7_11_5_fu_27226_p2.read(): p_Val2_14_11_5_fu_27242_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_6_fu_37780_p3() {
    y_V_1_11_6_fu_37780_p3 = (!dneg_11_6_fu_37746_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_6_fu_37746_p2.read()[0].to_bool())? p_Val2_7_11_6_fu_37762_p2.read(): p_Val2_14_11_6_fu_37775_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_7_fu_37838_p3() {
    y_V_1_11_7_fu_37838_p3 = (!dneg_11_7_fu_37788_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_7_fu_37788_p2.read()[0].to_bool())? p_Val2_7_11_7_fu_37826_p2.read(): p_Val2_14_11_7_fu_37832_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_1_cast_fu_14072_p1() {
    y_V_1_12_1_cast_fu_14072_p1 = esl_sext<15,14>(y_V_1_12_1_fu_14067_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_12_1_fu_14067_p3() {
    y_V_1_12_1_fu_14067_p3 = (!dneg_12_1_reg_58218.read()[0].is_01())? sc_lv<14>(): ((dneg_12_1_reg_58218.read()[0].to_bool())? p_Val2_7_12_1_reg_58230.read(): p_Val2_14_12_1_reg_58240.read());
}

void Sobel_phase_strm::thread_y_V_1_12_2_fu_14150_p3() {
    y_V_1_12_2_fu_14150_p3 = (!dneg_12_2_fu_14076_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_2_fu_14076_p2.read()[0].to_bool())? p_Val2_7_12_2_fu_14120_p2.read(): p_Val2_14_12_2_fu_14136_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_3_fu_14228_p3() {
    y_V_1_12_3_fu_14228_p3 = (!dneg_12_3_fu_14158_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_3_fu_14158_p2.read()[0].to_bool())? p_Val2_7_12_3_fu_14198_p2.read(): p_Val2_14_12_3_fu_14214_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_4_fu_27326_p3() {
    y_V_1_12_4_fu_27326_p3 = (!dneg_12_4_fu_27284_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_4_fu_27284_p2.read()[0].to_bool())? p_Val2_7_12_4_fu_27300_p2.read(): p_Val2_14_12_4_fu_27313_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_5_fu_27404_p3() {
    y_V_1_12_5_fu_27404_p3 = (!dneg_12_5_fu_27334_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_5_fu_27334_p2.read()[0].to_bool())? p_Val2_7_12_5_fu_27374_p2.read(): p_Val2_14_12_5_fu_27390_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_6_fu_37933_p3() {
    y_V_1_12_6_fu_37933_p3 = (!dneg_12_6_fu_37899_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_6_fu_37899_p2.read()[0].to_bool())? p_Val2_7_12_6_fu_37915_p2.read(): p_Val2_14_12_6_fu_37928_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_7_fu_37991_p3() {
    y_V_1_12_7_fu_37991_p3 = (!dneg_12_7_fu_37941_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_7_fu_37941_p2.read()[0].to_bool())? p_Val2_7_12_7_fu_37979_p2.read(): p_Val2_14_12_7_fu_37985_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_1_cast_fu_14266_p1() {
    y_V_1_13_1_cast_fu_14266_p1 = esl_sext<15,14>(y_V_1_13_1_fu_14261_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_13_1_fu_14261_p3() {
    y_V_1_13_1_fu_14261_p3 = (!dneg_13_1_reg_58256.read()[0].is_01())? sc_lv<14>(): ((dneg_13_1_reg_58256.read()[0].to_bool())? p_Val2_7_13_1_reg_58268.read(): p_Val2_14_13_1_reg_58278.read());
}

void Sobel_phase_strm::thread_y_V_1_13_2_fu_14344_p3() {
    y_V_1_13_2_fu_14344_p3 = (!dneg_13_2_fu_14270_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_2_fu_14270_p2.read()[0].to_bool())? p_Val2_7_13_2_fu_14314_p2.read(): p_Val2_14_13_2_fu_14330_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_3_fu_14422_p3() {
    y_V_1_13_3_fu_14422_p3 = (!dneg_13_3_fu_14352_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_3_fu_14352_p2.read()[0].to_bool())? p_Val2_7_13_3_fu_14392_p2.read(): p_Val2_14_13_3_fu_14408_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_4_fu_27474_p3() {
    y_V_1_13_4_fu_27474_p3 = (!dneg_13_4_fu_27432_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_4_fu_27432_p2.read()[0].to_bool())? p_Val2_7_13_4_fu_27448_p2.read(): p_Val2_14_13_4_fu_27461_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_5_fu_27552_p3() {
    y_V_1_13_5_fu_27552_p3 = (!dneg_13_5_fu_27482_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_5_fu_27482_p2.read()[0].to_bool())? p_Val2_7_13_5_fu_27522_p2.read(): p_Val2_14_13_5_fu_27538_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_6_fu_38086_p3() {
    y_V_1_13_6_fu_38086_p3 = (!dneg_13_6_fu_38052_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_6_fu_38052_p2.read()[0].to_bool())? p_Val2_7_13_6_fu_38068_p2.read(): p_Val2_14_13_6_fu_38081_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_7_fu_38144_p3() {
    y_V_1_13_7_fu_38144_p3 = (!dneg_13_7_fu_38094_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_7_fu_38094_p2.read()[0].to_bool())? p_Val2_7_13_7_fu_38132_p2.read(): p_Val2_14_13_7_fu_38138_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_1_cast_fu_14460_p1() {
    y_V_1_14_1_cast_fu_14460_p1 = esl_sext<15,14>(y_V_1_14_1_fu_14455_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_14_1_fu_14455_p3() {
    y_V_1_14_1_fu_14455_p3 = (!dneg_14_1_reg_58294.read()[0].is_01())? sc_lv<14>(): ((dneg_14_1_reg_58294.read()[0].to_bool())? p_Val2_7_14_1_reg_58306.read(): p_Val2_14_14_1_reg_58316.read());
}

void Sobel_phase_strm::thread_y_V_1_14_2_fu_14538_p3() {
    y_V_1_14_2_fu_14538_p3 = (!dneg_14_2_fu_14464_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_2_fu_14464_p2.read()[0].to_bool())? p_Val2_7_14_2_fu_14508_p2.read(): p_Val2_14_14_2_fu_14524_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_3_fu_14616_p3() {
    y_V_1_14_3_fu_14616_p3 = (!dneg_14_3_fu_14546_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_3_fu_14546_p2.read()[0].to_bool())? p_Val2_7_14_3_fu_14586_p2.read(): p_Val2_14_14_3_fu_14602_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_4_fu_27622_p3() {
    y_V_1_14_4_fu_27622_p3 = (!dneg_14_4_fu_27580_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_4_fu_27580_p2.read()[0].to_bool())? p_Val2_7_14_4_fu_27596_p2.read(): p_Val2_14_14_4_fu_27609_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_5_fu_27700_p3() {
    y_V_1_14_5_fu_27700_p3 = (!dneg_14_5_fu_27630_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_5_fu_27630_p2.read()[0].to_bool())? p_Val2_7_14_5_fu_27670_p2.read(): p_Val2_14_14_5_fu_27686_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_6_fu_38239_p3() {
    y_V_1_14_6_fu_38239_p3 = (!dneg_14_6_fu_38205_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_6_fu_38205_p2.read()[0].to_bool())? p_Val2_7_14_6_fu_38221_p2.read(): p_Val2_14_14_6_fu_38234_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_7_fu_38297_p3() {
    y_V_1_14_7_fu_38297_p3 = (!dneg_14_7_fu_38247_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_7_fu_38247_p2.read()[0].to_bool())? p_Val2_7_14_7_fu_38285_p2.read(): p_Val2_14_14_7_fu_38291_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_1_cast_fu_14654_p1() {
    y_V_1_15_1_cast_fu_14654_p1 = esl_sext<15,14>(y_V_1_15_1_fu_14649_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_15_1_fu_14649_p3() {
    y_V_1_15_1_fu_14649_p3 = (!dneg_15_1_reg_58332.read()[0].is_01())? sc_lv<14>(): ((dneg_15_1_reg_58332.read()[0].to_bool())? p_Val2_7_15_1_reg_58344.read(): p_Val2_14_15_1_reg_58354.read());
}

void Sobel_phase_strm::thread_y_V_1_15_2_fu_14732_p3() {
    y_V_1_15_2_fu_14732_p3 = (!dneg_15_2_fu_14658_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_2_fu_14658_p2.read()[0].to_bool())? p_Val2_7_15_2_fu_14702_p2.read(): p_Val2_14_15_2_fu_14718_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_3_fu_14810_p3() {
    y_V_1_15_3_fu_14810_p3 = (!dneg_15_3_fu_14740_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_3_fu_14740_p2.read()[0].to_bool())? p_Val2_7_15_3_fu_14780_p2.read(): p_Val2_14_15_3_fu_14796_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_4_fu_27770_p3() {
    y_V_1_15_4_fu_27770_p3 = (!dneg_15_4_fu_27728_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_4_fu_27728_p2.read()[0].to_bool())? p_Val2_7_15_4_fu_27744_p2.read(): p_Val2_14_15_4_fu_27757_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_5_fu_27848_p3() {
    y_V_1_15_5_fu_27848_p3 = (!dneg_15_5_fu_27778_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_5_fu_27778_p2.read()[0].to_bool())? p_Val2_7_15_5_fu_27818_p2.read(): p_Val2_14_15_5_fu_27834_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_6_fu_38392_p3() {
    y_V_1_15_6_fu_38392_p3 = (!dneg_15_6_fu_38358_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_6_fu_38358_p2.read()[0].to_bool())? p_Val2_7_15_6_fu_38374_p2.read(): p_Val2_14_15_6_fu_38387_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_7_fu_38450_p3() {
    y_V_1_15_7_fu_38450_p3 = (!dneg_15_7_fu_38400_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_7_fu_38400_p2.read()[0].to_bool())? p_Val2_7_15_7_fu_38438_p2.read(): p_Val2_14_15_7_fu_38444_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_1_cast_fu_14848_p1() {
    y_V_1_16_1_cast_fu_14848_p1 = esl_sext<15,14>(y_V_1_16_1_fu_14843_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_16_1_fu_14843_p3() {
    y_V_1_16_1_fu_14843_p3 = (!dneg_16_1_reg_58370.read()[0].is_01())? sc_lv<14>(): ((dneg_16_1_reg_58370.read()[0].to_bool())? p_Val2_7_16_1_reg_58382.read(): p_Val2_14_16_1_reg_58392.read());
}

void Sobel_phase_strm::thread_y_V_1_16_2_fu_14926_p3() {
    y_V_1_16_2_fu_14926_p3 = (!dneg_16_2_fu_14852_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_2_fu_14852_p2.read()[0].to_bool())? p_Val2_7_16_2_fu_14896_p2.read(): p_Val2_14_16_2_fu_14912_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_3_fu_15004_p3() {
    y_V_1_16_3_fu_15004_p3 = (!dneg_16_3_fu_14934_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_3_fu_14934_p2.read()[0].to_bool())? p_Val2_7_16_3_fu_14974_p2.read(): p_Val2_14_16_3_fu_14990_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_4_fu_27918_p3() {
    y_V_1_16_4_fu_27918_p3 = (!dneg_16_4_fu_27876_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_4_fu_27876_p2.read()[0].to_bool())? p_Val2_7_16_4_fu_27892_p2.read(): p_Val2_14_16_4_fu_27905_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_5_fu_27996_p3() {
    y_V_1_16_5_fu_27996_p3 = (!dneg_16_5_fu_27926_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_5_fu_27926_p2.read()[0].to_bool())? p_Val2_7_16_5_fu_27966_p2.read(): p_Val2_14_16_5_fu_27982_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_6_fu_38545_p3() {
    y_V_1_16_6_fu_38545_p3 = (!dneg_16_6_fu_38511_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_6_fu_38511_p2.read()[0].to_bool())? p_Val2_7_16_6_fu_38527_p2.read(): p_Val2_14_16_6_fu_38540_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_7_fu_38603_p3() {
    y_V_1_16_7_fu_38603_p3 = (!dneg_16_7_fu_38553_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_7_fu_38553_p2.read()[0].to_bool())? p_Val2_7_16_7_fu_38591_p2.read(): p_Val2_14_16_7_fu_38597_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_1_cast_fu_15042_p1() {
    y_V_1_17_1_cast_fu_15042_p1 = esl_sext<15,14>(y_V_1_17_1_fu_15037_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_17_1_fu_15037_p3() {
    y_V_1_17_1_fu_15037_p3 = (!dneg_17_1_reg_58408.read()[0].is_01())? sc_lv<14>(): ((dneg_17_1_reg_58408.read()[0].to_bool())? p_Val2_7_17_1_reg_58420.read(): p_Val2_14_17_1_reg_58430.read());
}

void Sobel_phase_strm::thread_y_V_1_17_2_fu_15120_p3() {
    y_V_1_17_2_fu_15120_p3 = (!dneg_17_2_fu_15046_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_2_fu_15046_p2.read()[0].to_bool())? p_Val2_7_17_2_fu_15090_p2.read(): p_Val2_14_17_2_fu_15106_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_3_fu_15198_p3() {
    y_V_1_17_3_fu_15198_p3 = (!dneg_17_3_fu_15128_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_3_fu_15128_p2.read()[0].to_bool())? p_Val2_7_17_3_fu_15168_p2.read(): p_Val2_14_17_3_fu_15184_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_4_fu_28066_p3() {
    y_V_1_17_4_fu_28066_p3 = (!dneg_17_4_fu_28024_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_4_fu_28024_p2.read()[0].to_bool())? p_Val2_7_17_4_fu_28040_p2.read(): p_Val2_14_17_4_fu_28053_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_5_fu_28144_p3() {
    y_V_1_17_5_fu_28144_p3 = (!dneg_17_5_fu_28074_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_5_fu_28074_p2.read()[0].to_bool())? p_Val2_7_17_5_fu_28114_p2.read(): p_Val2_14_17_5_fu_28130_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_6_fu_38698_p3() {
    y_V_1_17_6_fu_38698_p3 = (!dneg_17_6_fu_38664_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_6_fu_38664_p2.read()[0].to_bool())? p_Val2_7_17_6_fu_38680_p2.read(): p_Val2_14_17_6_fu_38693_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_7_fu_38756_p3() {
    y_V_1_17_7_fu_38756_p3 = (!dneg_17_7_fu_38706_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_7_fu_38706_p2.read()[0].to_bool())? p_Val2_7_17_7_fu_38744_p2.read(): p_Val2_14_17_7_fu_38750_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_1_cast_fu_15236_p1() {
    y_V_1_18_1_cast_fu_15236_p1 = esl_sext<15,14>(y_V_1_18_1_fu_15231_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_18_1_fu_15231_p3() {
    y_V_1_18_1_fu_15231_p3 = (!dneg_18_1_reg_58446.read()[0].is_01())? sc_lv<14>(): ((dneg_18_1_reg_58446.read()[0].to_bool())? p_Val2_7_18_1_reg_58458.read(): p_Val2_14_18_1_reg_58468.read());
}

void Sobel_phase_strm::thread_y_V_1_18_2_fu_15314_p3() {
    y_V_1_18_2_fu_15314_p3 = (!dneg_18_2_fu_15240_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_2_fu_15240_p2.read()[0].to_bool())? p_Val2_7_18_2_fu_15284_p2.read(): p_Val2_14_18_2_fu_15300_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_3_fu_15392_p3() {
    y_V_1_18_3_fu_15392_p3 = (!dneg_18_3_fu_15322_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_3_fu_15322_p2.read()[0].to_bool())? p_Val2_7_18_3_fu_15362_p2.read(): p_Val2_14_18_3_fu_15378_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_4_fu_28214_p3() {
    y_V_1_18_4_fu_28214_p3 = (!dneg_18_4_fu_28172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_4_fu_28172_p2.read()[0].to_bool())? p_Val2_7_18_4_fu_28188_p2.read(): p_Val2_14_18_4_fu_28201_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_5_fu_28292_p3() {
    y_V_1_18_5_fu_28292_p3 = (!dneg_18_5_fu_28222_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_5_fu_28222_p2.read()[0].to_bool())? p_Val2_7_18_5_fu_28262_p2.read(): p_Val2_14_18_5_fu_28278_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_6_fu_38851_p3() {
    y_V_1_18_6_fu_38851_p3 = (!dneg_18_6_fu_38817_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_6_fu_38817_p2.read()[0].to_bool())? p_Val2_7_18_6_fu_38833_p2.read(): p_Val2_14_18_6_fu_38846_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_7_fu_38909_p3() {
    y_V_1_18_7_fu_38909_p3 = (!dneg_18_7_fu_38859_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_7_fu_38859_p2.read()[0].to_bool())? p_Val2_7_18_7_fu_38897_p2.read(): p_Val2_14_18_7_fu_38903_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_1_cast_fu_15430_p1() {
    y_V_1_19_1_cast_fu_15430_p1 = esl_sext<15,14>(y_V_1_19_1_fu_15425_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_19_1_fu_15425_p3() {
    y_V_1_19_1_fu_15425_p3 = (!dneg_19_1_reg_58484.read()[0].is_01())? sc_lv<14>(): ((dneg_19_1_reg_58484.read()[0].to_bool())? p_Val2_7_19_1_reg_58496.read(): p_Val2_14_19_1_reg_58506.read());
}

void Sobel_phase_strm::thread_y_V_1_19_2_fu_15508_p3() {
    y_V_1_19_2_fu_15508_p3 = (!dneg_19_2_fu_15434_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_2_fu_15434_p2.read()[0].to_bool())? p_Val2_7_19_2_fu_15478_p2.read(): p_Val2_14_19_2_fu_15494_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_3_fu_15586_p3() {
    y_V_1_19_3_fu_15586_p3 = (!dneg_19_3_fu_15516_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_3_fu_15516_p2.read()[0].to_bool())? p_Val2_7_19_3_fu_15556_p2.read(): p_Val2_14_19_3_fu_15572_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_4_fu_28362_p3() {
    y_V_1_19_4_fu_28362_p3 = (!dneg_19_4_fu_28320_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_4_fu_28320_p2.read()[0].to_bool())? p_Val2_7_19_4_fu_28336_p2.read(): p_Val2_14_19_4_fu_28349_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_5_fu_28440_p3() {
    y_V_1_19_5_fu_28440_p3 = (!dneg_19_5_fu_28370_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_5_fu_28370_p2.read()[0].to_bool())? p_Val2_7_19_5_fu_28410_p2.read(): p_Val2_14_19_5_fu_28426_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_6_fu_39004_p3() {
    y_V_1_19_6_fu_39004_p3 = (!dneg_19_6_fu_38970_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_6_fu_38970_p2.read()[0].to_bool())? p_Val2_7_19_6_fu_38986_p2.read(): p_Val2_14_19_6_fu_38999_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_7_fu_39062_p3() {
    y_V_1_19_7_fu_39062_p3 = (!dneg_19_7_fu_39012_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_7_fu_39012_p2.read()[0].to_bool())? p_Val2_7_19_7_fu_39050_p2.read(): p_Val2_14_19_7_fu_39056_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_1_cast_fu_11938_p1() {
    y_V_1_1_1_cast_fu_11938_p1 = esl_sext<15,14>(y_V_1_1_1_fu_11933_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_1_1_fu_11933_p3() {
    y_V_1_1_1_fu_11933_p3 = (!dneg_1_1_reg_57800.read()[0].is_01())? sc_lv<14>(): ((dneg_1_1_reg_57800.read()[0].to_bool())? p_Val2_7_1_1_reg_57812.read(): p_Val2_14_1_1_reg_57822.read());
}

void Sobel_phase_strm::thread_y_V_1_1_2_fu_12016_p3() {
    y_V_1_1_2_fu_12016_p3 = (!dneg_1_2_fu_11942_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_2_fu_11942_p2.read()[0].to_bool())? p_Val2_7_1_2_fu_11986_p2.read(): p_Val2_14_1_2_fu_12002_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_3_fu_12094_p3() {
    y_V_1_1_3_fu_12094_p3 = (!dneg_1_3_fu_12024_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_3_fu_12024_p2.read()[0].to_bool())? p_Val2_7_1_3_fu_12064_p2.read(): p_Val2_14_1_3_fu_12080_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_4_fu_25698_p3() {
    y_V_1_1_4_fu_25698_p3 = (!dneg_1_4_fu_25656_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_4_fu_25656_p2.read()[0].to_bool())? p_Val2_7_1_4_fu_25672_p2.read(): p_Val2_14_1_4_fu_25685_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_5_fu_25776_p3() {
    y_V_1_1_5_fu_25776_p3 = (!dneg_1_5_fu_25706_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_5_fu_25706_p2.read()[0].to_bool())? p_Val2_7_1_5_fu_25746_p2.read(): p_Val2_14_1_5_fu_25762_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_6_fu_36250_p3() {
    y_V_1_1_6_fu_36250_p3 = (!dneg_1_6_fu_36216_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_6_fu_36216_p2.read()[0].to_bool())? p_Val2_7_1_6_fu_36232_p2.read(): p_Val2_14_1_6_fu_36245_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_7_fu_36308_p3() {
    y_V_1_1_7_fu_36308_p3 = (!dneg_1_7_fu_36258_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_7_fu_36258_p2.read()[0].to_bool())? p_Val2_7_1_7_fu_36296_p2.read(): p_Val2_14_1_7_fu_36302_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_1_cast_fu_15624_p1() {
    y_V_1_20_1_cast_fu_15624_p1 = esl_sext<15,14>(y_V_1_20_1_fu_15619_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_20_1_fu_15619_p3() {
    y_V_1_20_1_fu_15619_p3 = (!dneg_20_1_reg_58522.read()[0].is_01())? sc_lv<14>(): ((dneg_20_1_reg_58522.read()[0].to_bool())? p_Val2_7_20_1_reg_58534.read(): p_Val2_14_20_1_reg_58544.read());
}

void Sobel_phase_strm::thread_y_V_1_20_2_fu_15702_p3() {
    y_V_1_20_2_fu_15702_p3 = (!dneg_20_2_fu_15628_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_2_fu_15628_p2.read()[0].to_bool())? p_Val2_7_20_2_fu_15672_p2.read(): p_Val2_14_20_2_fu_15688_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_3_fu_15780_p3() {
    y_V_1_20_3_fu_15780_p3 = (!dneg_20_3_fu_15710_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_3_fu_15710_p2.read()[0].to_bool())? p_Val2_7_20_3_fu_15750_p2.read(): p_Val2_14_20_3_fu_15766_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_4_fu_28510_p3() {
    y_V_1_20_4_fu_28510_p3 = (!dneg_20_4_fu_28468_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_4_fu_28468_p2.read()[0].to_bool())? p_Val2_7_20_4_fu_28484_p2.read(): p_Val2_14_20_4_fu_28497_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_5_fu_28588_p3() {
    y_V_1_20_5_fu_28588_p3 = (!dneg_20_5_fu_28518_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_5_fu_28518_p2.read()[0].to_bool())? p_Val2_7_20_5_fu_28558_p2.read(): p_Val2_14_20_5_fu_28574_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_6_fu_39157_p3() {
    y_V_1_20_6_fu_39157_p3 = (!dneg_20_6_fu_39123_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_6_fu_39123_p2.read()[0].to_bool())? p_Val2_7_20_6_fu_39139_p2.read(): p_Val2_14_20_6_fu_39152_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_7_fu_39215_p3() {
    y_V_1_20_7_fu_39215_p3 = (!dneg_20_7_fu_39165_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_7_fu_39165_p2.read()[0].to_bool())? p_Val2_7_20_7_fu_39203_p2.read(): p_Val2_14_20_7_fu_39209_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_1_cast_fu_15818_p1() {
    y_V_1_21_1_cast_fu_15818_p1 = esl_sext<15,14>(y_V_1_21_1_fu_15813_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_21_1_fu_15813_p3() {
    y_V_1_21_1_fu_15813_p3 = (!dneg_21_1_reg_58560.read()[0].is_01())? sc_lv<14>(): ((dneg_21_1_reg_58560.read()[0].to_bool())? p_Val2_7_21_1_reg_58572.read(): p_Val2_14_21_1_reg_58582.read());
}

void Sobel_phase_strm::thread_y_V_1_21_2_fu_15896_p3() {
    y_V_1_21_2_fu_15896_p3 = (!dneg_21_2_fu_15822_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_2_fu_15822_p2.read()[0].to_bool())? p_Val2_7_21_2_fu_15866_p2.read(): p_Val2_14_21_2_fu_15882_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_3_fu_15974_p3() {
    y_V_1_21_3_fu_15974_p3 = (!dneg_21_3_fu_15904_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_3_fu_15904_p2.read()[0].to_bool())? p_Val2_7_21_3_fu_15944_p2.read(): p_Val2_14_21_3_fu_15960_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_4_fu_28658_p3() {
    y_V_1_21_4_fu_28658_p3 = (!dneg_21_4_fu_28616_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_4_fu_28616_p2.read()[0].to_bool())? p_Val2_7_21_4_fu_28632_p2.read(): p_Val2_14_21_4_fu_28645_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_5_fu_28736_p3() {
    y_V_1_21_5_fu_28736_p3 = (!dneg_21_5_fu_28666_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_5_fu_28666_p2.read()[0].to_bool())? p_Val2_7_21_5_fu_28706_p2.read(): p_Val2_14_21_5_fu_28722_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_6_fu_39310_p3() {
    y_V_1_21_6_fu_39310_p3 = (!dneg_21_6_fu_39276_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_6_fu_39276_p2.read()[0].to_bool())? p_Val2_7_21_6_fu_39292_p2.read(): p_Val2_14_21_6_fu_39305_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_7_fu_39368_p3() {
    y_V_1_21_7_fu_39368_p3 = (!dneg_21_7_fu_39318_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_7_fu_39318_p2.read()[0].to_bool())? p_Val2_7_21_7_fu_39356_p2.read(): p_Val2_14_21_7_fu_39362_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_1_cast_fu_16012_p1() {
    y_V_1_22_1_cast_fu_16012_p1 = esl_sext<15,14>(y_V_1_22_1_fu_16007_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_22_1_fu_16007_p3() {
    y_V_1_22_1_fu_16007_p3 = (!dneg_22_1_reg_58598.read()[0].is_01())? sc_lv<14>(): ((dneg_22_1_reg_58598.read()[0].to_bool())? p_Val2_7_22_1_reg_58610.read(): p_Val2_14_22_1_reg_58620.read());
}

void Sobel_phase_strm::thread_y_V_1_22_2_fu_16090_p3() {
    y_V_1_22_2_fu_16090_p3 = (!dneg_22_2_fu_16016_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_2_fu_16016_p2.read()[0].to_bool())? p_Val2_7_22_2_fu_16060_p2.read(): p_Val2_14_22_2_fu_16076_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_3_fu_16168_p3() {
    y_V_1_22_3_fu_16168_p3 = (!dneg_22_3_fu_16098_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_3_fu_16098_p2.read()[0].to_bool())? p_Val2_7_22_3_fu_16138_p2.read(): p_Val2_14_22_3_fu_16154_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_4_fu_28806_p3() {
    y_V_1_22_4_fu_28806_p3 = (!dneg_22_4_fu_28764_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_4_fu_28764_p2.read()[0].to_bool())? p_Val2_7_22_4_fu_28780_p2.read(): p_Val2_14_22_4_fu_28793_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_5_fu_28884_p3() {
    y_V_1_22_5_fu_28884_p3 = (!dneg_22_5_fu_28814_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_5_fu_28814_p2.read()[0].to_bool())? p_Val2_7_22_5_fu_28854_p2.read(): p_Val2_14_22_5_fu_28870_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_6_fu_39463_p3() {
    y_V_1_22_6_fu_39463_p3 = (!dneg_22_6_fu_39429_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_6_fu_39429_p2.read()[0].to_bool())? p_Val2_7_22_6_fu_39445_p2.read(): p_Val2_14_22_6_fu_39458_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_7_fu_39521_p3() {
    y_V_1_22_7_fu_39521_p3 = (!dneg_22_7_fu_39471_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_7_fu_39471_p2.read()[0].to_bool())? p_Val2_7_22_7_fu_39509_p2.read(): p_Val2_14_22_7_fu_39515_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_1_cast_fu_16206_p1() {
    y_V_1_23_1_cast_fu_16206_p1 = esl_sext<15,14>(y_V_1_23_1_fu_16201_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_23_1_fu_16201_p3() {
    y_V_1_23_1_fu_16201_p3 = (!dneg_23_1_reg_58636.read()[0].is_01())? sc_lv<14>(): ((dneg_23_1_reg_58636.read()[0].to_bool())? p_Val2_7_23_1_reg_58648.read(): p_Val2_14_23_1_reg_58658.read());
}

void Sobel_phase_strm::thread_y_V_1_23_2_fu_16284_p3() {
    y_V_1_23_2_fu_16284_p3 = (!dneg_23_2_fu_16210_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_2_fu_16210_p2.read()[0].to_bool())? p_Val2_7_23_2_fu_16254_p2.read(): p_Val2_14_23_2_fu_16270_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_3_fu_16362_p3() {
    y_V_1_23_3_fu_16362_p3 = (!dneg_23_3_fu_16292_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_3_fu_16292_p2.read()[0].to_bool())? p_Val2_7_23_3_fu_16332_p2.read(): p_Val2_14_23_3_fu_16348_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_4_fu_28954_p3() {
    y_V_1_23_4_fu_28954_p3 = (!dneg_23_4_fu_28912_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_4_fu_28912_p2.read()[0].to_bool())? p_Val2_7_23_4_fu_28928_p2.read(): p_Val2_14_23_4_fu_28941_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_5_fu_29032_p3() {
    y_V_1_23_5_fu_29032_p3 = (!dneg_23_5_fu_28962_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_5_fu_28962_p2.read()[0].to_bool())? p_Val2_7_23_5_fu_29002_p2.read(): p_Val2_14_23_5_fu_29018_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_6_fu_39616_p3() {
    y_V_1_23_6_fu_39616_p3 = (!dneg_23_6_fu_39582_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_6_fu_39582_p2.read()[0].to_bool())? p_Val2_7_23_6_fu_39598_p2.read(): p_Val2_14_23_6_fu_39611_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_7_fu_39674_p3() {
    y_V_1_23_7_fu_39674_p3 = (!dneg_23_7_fu_39624_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_7_fu_39624_p2.read()[0].to_bool())? p_Val2_7_23_7_fu_39662_p2.read(): p_Val2_14_23_7_fu_39668_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_1_cast_fu_16400_p1() {
    y_V_1_24_1_cast_fu_16400_p1 = esl_sext<15,14>(y_V_1_24_1_fu_16395_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_24_1_fu_16395_p3() {
    y_V_1_24_1_fu_16395_p3 = (!dneg_24_1_reg_58674.read()[0].is_01())? sc_lv<14>(): ((dneg_24_1_reg_58674.read()[0].to_bool())? p_Val2_7_24_1_reg_58686.read(): p_Val2_14_24_1_reg_58696.read());
}

void Sobel_phase_strm::thread_y_V_1_24_2_fu_16478_p3() {
    y_V_1_24_2_fu_16478_p3 = (!dneg_24_2_fu_16404_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_2_fu_16404_p2.read()[0].to_bool())? p_Val2_7_24_2_fu_16448_p2.read(): p_Val2_14_24_2_fu_16464_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_3_fu_16556_p3() {
    y_V_1_24_3_fu_16556_p3 = (!dneg_24_3_fu_16486_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_3_fu_16486_p2.read()[0].to_bool())? p_Val2_7_24_3_fu_16526_p2.read(): p_Val2_14_24_3_fu_16542_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_4_fu_29102_p3() {
    y_V_1_24_4_fu_29102_p3 = (!dneg_24_4_fu_29060_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_4_fu_29060_p2.read()[0].to_bool())? p_Val2_7_24_4_fu_29076_p2.read(): p_Val2_14_24_4_fu_29089_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_5_fu_29180_p3() {
    y_V_1_24_5_fu_29180_p3 = (!dneg_24_5_fu_29110_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_5_fu_29110_p2.read()[0].to_bool())? p_Val2_7_24_5_fu_29150_p2.read(): p_Val2_14_24_5_fu_29166_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_6_fu_39769_p3() {
    y_V_1_24_6_fu_39769_p3 = (!dneg_24_6_fu_39735_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_6_fu_39735_p2.read()[0].to_bool())? p_Val2_7_24_6_fu_39751_p2.read(): p_Val2_14_24_6_fu_39764_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_7_fu_39827_p3() {
    y_V_1_24_7_fu_39827_p3 = (!dneg_24_7_fu_39777_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_7_fu_39777_p2.read()[0].to_bool())? p_Val2_7_24_7_fu_39815_p2.read(): p_Val2_14_24_7_fu_39821_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_1_cast_fu_16594_p1() {
    y_V_1_25_1_cast_fu_16594_p1 = esl_sext<15,14>(y_V_1_25_1_fu_16589_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_25_1_fu_16589_p3() {
    y_V_1_25_1_fu_16589_p3 = (!dneg_25_1_reg_58712.read()[0].is_01())? sc_lv<14>(): ((dneg_25_1_reg_58712.read()[0].to_bool())? p_Val2_7_25_1_reg_58724.read(): p_Val2_14_25_1_reg_58734.read());
}

void Sobel_phase_strm::thread_y_V_1_25_2_fu_16672_p3() {
    y_V_1_25_2_fu_16672_p3 = (!dneg_25_2_fu_16598_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_2_fu_16598_p2.read()[0].to_bool())? p_Val2_7_25_2_fu_16642_p2.read(): p_Val2_14_25_2_fu_16658_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_3_fu_16750_p3() {
    y_V_1_25_3_fu_16750_p3 = (!dneg_25_3_fu_16680_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_3_fu_16680_p2.read()[0].to_bool())? p_Val2_7_25_3_fu_16720_p2.read(): p_Val2_14_25_3_fu_16736_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_4_fu_29250_p3() {
    y_V_1_25_4_fu_29250_p3 = (!dneg_25_4_fu_29208_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_4_fu_29208_p2.read()[0].to_bool())? p_Val2_7_25_4_fu_29224_p2.read(): p_Val2_14_25_4_fu_29237_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_5_fu_29328_p3() {
    y_V_1_25_5_fu_29328_p3 = (!dneg_25_5_fu_29258_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_5_fu_29258_p2.read()[0].to_bool())? p_Val2_7_25_5_fu_29298_p2.read(): p_Val2_14_25_5_fu_29314_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_6_fu_39922_p3() {
    y_V_1_25_6_fu_39922_p3 = (!dneg_25_6_fu_39888_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_6_fu_39888_p2.read()[0].to_bool())? p_Val2_7_25_6_fu_39904_p2.read(): p_Val2_14_25_6_fu_39917_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_7_fu_39980_p3() {
    y_V_1_25_7_fu_39980_p3 = (!dneg_25_7_fu_39930_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_7_fu_39930_p2.read()[0].to_bool())? p_Val2_7_25_7_fu_39968_p2.read(): p_Val2_14_25_7_fu_39974_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_1_cast_fu_16788_p1() {
    y_V_1_26_1_cast_fu_16788_p1 = esl_sext<15,14>(y_V_1_26_1_fu_16783_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_26_1_fu_16783_p3() {
    y_V_1_26_1_fu_16783_p3 = (!dneg_26_1_reg_58750.read()[0].is_01())? sc_lv<14>(): ((dneg_26_1_reg_58750.read()[0].to_bool())? p_Val2_7_26_1_reg_58762.read(): p_Val2_14_26_1_reg_58772.read());
}

void Sobel_phase_strm::thread_y_V_1_26_2_fu_16866_p3() {
    y_V_1_26_2_fu_16866_p3 = (!dneg_26_2_fu_16792_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_2_fu_16792_p2.read()[0].to_bool())? p_Val2_7_26_2_fu_16836_p2.read(): p_Val2_14_26_2_fu_16852_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_3_fu_16944_p3() {
    y_V_1_26_3_fu_16944_p3 = (!dneg_26_3_fu_16874_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_3_fu_16874_p2.read()[0].to_bool())? p_Val2_7_26_3_fu_16914_p2.read(): p_Val2_14_26_3_fu_16930_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_4_fu_29398_p3() {
    y_V_1_26_4_fu_29398_p3 = (!dneg_26_4_fu_29356_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_4_fu_29356_p2.read()[0].to_bool())? p_Val2_7_26_4_fu_29372_p2.read(): p_Val2_14_26_4_fu_29385_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_5_fu_29476_p3() {
    y_V_1_26_5_fu_29476_p3 = (!dneg_26_5_fu_29406_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_5_fu_29406_p2.read()[0].to_bool())? p_Val2_7_26_5_fu_29446_p2.read(): p_Val2_14_26_5_fu_29462_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_6_fu_40075_p3() {
    y_V_1_26_6_fu_40075_p3 = (!dneg_26_6_fu_40041_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_6_fu_40041_p2.read()[0].to_bool())? p_Val2_7_26_6_fu_40057_p2.read(): p_Val2_14_26_6_fu_40070_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_7_fu_40133_p3() {
    y_V_1_26_7_fu_40133_p3 = (!dneg_26_7_fu_40083_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_7_fu_40083_p2.read()[0].to_bool())? p_Val2_7_26_7_fu_40121_p2.read(): p_Val2_14_26_7_fu_40127_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_1_cast_fu_16982_p1() {
    y_V_1_27_1_cast_fu_16982_p1 = esl_sext<15,14>(y_V_1_27_1_fu_16977_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_27_1_fu_16977_p3() {
    y_V_1_27_1_fu_16977_p3 = (!dneg_27_1_reg_58788.read()[0].is_01())? sc_lv<14>(): ((dneg_27_1_reg_58788.read()[0].to_bool())? p_Val2_7_27_1_reg_58800.read(): p_Val2_14_27_1_reg_58810.read());
}

void Sobel_phase_strm::thread_y_V_1_27_2_fu_17060_p3() {
    y_V_1_27_2_fu_17060_p3 = (!dneg_27_2_fu_16986_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_2_fu_16986_p2.read()[0].to_bool())? p_Val2_7_27_2_fu_17030_p2.read(): p_Val2_14_27_2_fu_17046_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_3_fu_17138_p3() {
    y_V_1_27_3_fu_17138_p3 = (!dneg_27_3_fu_17068_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_3_fu_17068_p2.read()[0].to_bool())? p_Val2_7_27_3_fu_17108_p2.read(): p_Val2_14_27_3_fu_17124_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_4_fu_29546_p3() {
    y_V_1_27_4_fu_29546_p3 = (!dneg_27_4_fu_29504_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_4_fu_29504_p2.read()[0].to_bool())? p_Val2_7_27_4_fu_29520_p2.read(): p_Val2_14_27_4_fu_29533_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_5_fu_29624_p3() {
    y_V_1_27_5_fu_29624_p3 = (!dneg_27_5_fu_29554_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_5_fu_29554_p2.read()[0].to_bool())? p_Val2_7_27_5_fu_29594_p2.read(): p_Val2_14_27_5_fu_29610_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_6_fu_40228_p3() {
    y_V_1_27_6_fu_40228_p3 = (!dneg_27_6_fu_40194_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_6_fu_40194_p2.read()[0].to_bool())? p_Val2_7_27_6_fu_40210_p2.read(): p_Val2_14_27_6_fu_40223_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_7_fu_40286_p3() {
    y_V_1_27_7_fu_40286_p3 = (!dneg_27_7_fu_40236_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_7_fu_40236_p2.read()[0].to_bool())? p_Val2_7_27_7_fu_40274_p2.read(): p_Val2_14_27_7_fu_40280_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_1_cast_fu_17176_p1() {
    y_V_1_28_1_cast_fu_17176_p1 = esl_sext<15,14>(y_V_1_28_1_fu_17171_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_28_1_fu_17171_p3() {
    y_V_1_28_1_fu_17171_p3 = (!dneg_28_1_reg_58826.read()[0].is_01())? sc_lv<14>(): ((dneg_28_1_reg_58826.read()[0].to_bool())? p_Val2_7_28_1_reg_58838.read(): p_Val2_14_28_1_reg_58848.read());
}

void Sobel_phase_strm::thread_y_V_1_28_2_fu_17254_p3() {
    y_V_1_28_2_fu_17254_p3 = (!dneg_28_2_fu_17180_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_2_fu_17180_p2.read()[0].to_bool())? p_Val2_7_28_2_fu_17224_p2.read(): p_Val2_14_28_2_fu_17240_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_3_fu_17332_p3() {
    y_V_1_28_3_fu_17332_p3 = (!dneg_28_3_fu_17262_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_3_fu_17262_p2.read()[0].to_bool())? p_Val2_7_28_3_fu_17302_p2.read(): p_Val2_14_28_3_fu_17318_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_4_fu_29694_p3() {
    y_V_1_28_4_fu_29694_p3 = (!dneg_28_4_fu_29652_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_4_fu_29652_p2.read()[0].to_bool())? p_Val2_7_28_4_fu_29668_p2.read(): p_Val2_14_28_4_fu_29681_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_5_fu_29772_p3() {
    y_V_1_28_5_fu_29772_p3 = (!dneg_28_5_fu_29702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_5_fu_29702_p2.read()[0].to_bool())? p_Val2_7_28_5_fu_29742_p2.read(): p_Val2_14_28_5_fu_29758_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_6_fu_40381_p3() {
    y_V_1_28_6_fu_40381_p3 = (!dneg_28_6_fu_40347_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_6_fu_40347_p2.read()[0].to_bool())? p_Val2_7_28_6_fu_40363_p2.read(): p_Val2_14_28_6_fu_40376_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_7_fu_40439_p3() {
    y_V_1_28_7_fu_40439_p3 = (!dneg_28_7_fu_40389_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_7_fu_40389_p2.read()[0].to_bool())? p_Val2_7_28_7_fu_40427_p2.read(): p_Val2_14_28_7_fu_40433_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_1_cast_fu_17370_p1() {
    y_V_1_29_1_cast_fu_17370_p1 = esl_sext<15,14>(y_V_1_29_1_fu_17365_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_29_1_fu_17365_p3() {
    y_V_1_29_1_fu_17365_p3 = (!dneg_29_1_reg_58864.read()[0].is_01())? sc_lv<14>(): ((dneg_29_1_reg_58864.read()[0].to_bool())? p_Val2_7_29_1_reg_58876.read(): p_Val2_14_29_1_reg_58886.read());
}

void Sobel_phase_strm::thread_y_V_1_29_2_fu_17448_p3() {
    y_V_1_29_2_fu_17448_p3 = (!dneg_29_2_fu_17374_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_2_fu_17374_p2.read()[0].to_bool())? p_Val2_7_29_2_fu_17418_p2.read(): p_Val2_14_29_2_fu_17434_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_3_fu_17526_p3() {
    y_V_1_29_3_fu_17526_p3 = (!dneg_29_3_fu_17456_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_3_fu_17456_p2.read()[0].to_bool())? p_Val2_7_29_3_fu_17496_p2.read(): p_Val2_14_29_3_fu_17512_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_4_fu_29842_p3() {
    y_V_1_29_4_fu_29842_p3 = (!dneg_29_4_fu_29800_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_4_fu_29800_p2.read()[0].to_bool())? p_Val2_7_29_4_fu_29816_p2.read(): p_Val2_14_29_4_fu_29829_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_5_fu_29920_p3() {
    y_V_1_29_5_fu_29920_p3 = (!dneg_29_5_fu_29850_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_5_fu_29850_p2.read()[0].to_bool())? p_Val2_7_29_5_fu_29890_p2.read(): p_Val2_14_29_5_fu_29906_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_6_fu_40534_p3() {
    y_V_1_29_6_fu_40534_p3 = (!dneg_29_6_fu_40500_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_6_fu_40500_p2.read()[0].to_bool())? p_Val2_7_29_6_fu_40516_p2.read(): p_Val2_14_29_6_fu_40529_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_7_fu_40592_p3() {
    y_V_1_29_7_fu_40592_p3 = (!dneg_29_7_fu_40542_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_7_fu_40542_p2.read()[0].to_bool())? p_Val2_7_29_7_fu_40580_p2.read(): p_Val2_14_29_7_fu_40586_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_1_cast_fu_12132_p1() {
    y_V_1_2_1_cast_fu_12132_p1 = esl_sext<15,14>(y_V_1_2_1_fu_12127_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_2_1_fu_12127_p3() {
    y_V_1_2_1_fu_12127_p3 = (!dneg_2_1_reg_57838.read()[0].is_01())? sc_lv<14>(): ((dneg_2_1_reg_57838.read()[0].to_bool())? p_Val2_7_2_1_reg_57850.read(): p_Val2_14_2_1_reg_57860.read());
}

void Sobel_phase_strm::thread_y_V_1_2_2_fu_12210_p3() {
    y_V_1_2_2_fu_12210_p3 = (!dneg_2_2_fu_12136_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_2_fu_12136_p2.read()[0].to_bool())? p_Val2_7_2_2_fu_12180_p2.read(): p_Val2_14_2_2_fu_12196_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_3_fu_12288_p3() {
    y_V_1_2_3_fu_12288_p3 = (!dneg_2_3_fu_12218_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_3_fu_12218_p2.read()[0].to_bool())? p_Val2_7_2_3_fu_12258_p2.read(): p_Val2_14_2_3_fu_12274_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_4_fu_25846_p3() {
    y_V_1_2_4_fu_25846_p3 = (!dneg_2_4_fu_25804_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_4_fu_25804_p2.read()[0].to_bool())? p_Val2_7_2_4_fu_25820_p2.read(): p_Val2_14_2_4_fu_25833_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_5_fu_25924_p3() {
    y_V_1_2_5_fu_25924_p3 = (!dneg_2_5_fu_25854_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_5_fu_25854_p2.read()[0].to_bool())? p_Val2_7_2_5_fu_25894_p2.read(): p_Val2_14_2_5_fu_25910_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_6_fu_36403_p3() {
    y_V_1_2_6_fu_36403_p3 = (!dneg_2_6_fu_36369_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_6_fu_36369_p2.read()[0].to_bool())? p_Val2_7_2_6_fu_36385_p2.read(): p_Val2_14_2_6_fu_36398_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_7_fu_36461_p3() {
    y_V_1_2_7_fu_36461_p3 = (!dneg_2_7_fu_36411_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_7_fu_36411_p2.read()[0].to_bool())? p_Val2_7_2_7_fu_36449_p2.read(): p_Val2_14_2_7_fu_36455_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_1_cast_fu_17564_p1() {
    y_V_1_30_1_cast_fu_17564_p1 = esl_sext<15,14>(y_V_1_30_1_fu_17559_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_30_1_fu_17559_p3() {
    y_V_1_30_1_fu_17559_p3 = (!dneg_30_1_reg_58902.read()[0].is_01())? sc_lv<14>(): ((dneg_30_1_reg_58902.read()[0].to_bool())? p_Val2_7_30_1_reg_58914.read(): p_Val2_14_30_1_reg_58924.read());
}

void Sobel_phase_strm::thread_y_V_1_30_2_fu_17642_p3() {
    y_V_1_30_2_fu_17642_p3 = (!dneg_30_2_fu_17568_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_2_fu_17568_p2.read()[0].to_bool())? p_Val2_7_30_2_fu_17612_p2.read(): p_Val2_14_30_2_fu_17628_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_3_fu_17720_p3() {
    y_V_1_30_3_fu_17720_p3 = (!dneg_30_3_fu_17650_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_3_fu_17650_p2.read()[0].to_bool())? p_Val2_7_30_3_fu_17690_p2.read(): p_Val2_14_30_3_fu_17706_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_4_fu_29990_p3() {
    y_V_1_30_4_fu_29990_p3 = (!dneg_30_4_fu_29948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_4_fu_29948_p2.read()[0].to_bool())? p_Val2_7_30_4_fu_29964_p2.read(): p_Val2_14_30_4_fu_29977_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_5_fu_30068_p3() {
    y_V_1_30_5_fu_30068_p3 = (!dneg_30_5_fu_29998_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_5_fu_29998_p2.read()[0].to_bool())? p_Val2_7_30_5_fu_30038_p2.read(): p_Val2_14_30_5_fu_30054_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_6_fu_40687_p3() {
    y_V_1_30_6_fu_40687_p3 = (!dneg_30_6_fu_40653_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_6_fu_40653_p2.read()[0].to_bool())? p_Val2_7_30_6_fu_40669_p2.read(): p_Val2_14_30_6_fu_40682_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_7_fu_40745_p3() {
    y_V_1_30_7_fu_40745_p3 = (!dneg_30_7_fu_40695_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_7_fu_40695_p2.read()[0].to_bool())? p_Val2_7_30_7_fu_40733_p2.read(): p_Val2_14_30_7_fu_40739_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_1_cast_fu_17758_p1() {
    y_V_1_31_1_cast_fu_17758_p1 = esl_sext<15,14>(y_V_1_31_1_fu_17753_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_31_1_fu_17753_p3() {
    y_V_1_31_1_fu_17753_p3 = (!dneg_31_1_reg_58940.read()[0].is_01())? sc_lv<14>(): ((dneg_31_1_reg_58940.read()[0].to_bool())? p_Val2_7_31_1_reg_58952.read(): p_Val2_14_31_1_reg_58962.read());
}

void Sobel_phase_strm::thread_y_V_1_31_2_fu_17836_p3() {
    y_V_1_31_2_fu_17836_p3 = (!dneg_31_2_fu_17762_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_2_fu_17762_p2.read()[0].to_bool())? p_Val2_7_31_2_fu_17806_p2.read(): p_Val2_14_31_2_fu_17822_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_3_fu_17914_p3() {
    y_V_1_31_3_fu_17914_p3 = (!dneg_31_3_fu_17844_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_3_fu_17844_p2.read()[0].to_bool())? p_Val2_7_31_3_fu_17884_p2.read(): p_Val2_14_31_3_fu_17900_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_4_fu_30138_p3() {
    y_V_1_31_4_fu_30138_p3 = (!dneg_31_4_fu_30096_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_4_fu_30096_p2.read()[0].to_bool())? p_Val2_7_31_4_fu_30112_p2.read(): p_Val2_14_31_4_fu_30125_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_5_fu_30216_p3() {
    y_V_1_31_5_fu_30216_p3 = (!dneg_31_5_fu_30146_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_5_fu_30146_p2.read()[0].to_bool())? p_Val2_7_31_5_fu_30186_p2.read(): p_Val2_14_31_5_fu_30202_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_6_fu_40840_p3() {
    y_V_1_31_6_fu_40840_p3 = (!dneg_31_6_fu_40806_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_6_fu_40806_p2.read()[0].to_bool())? p_Val2_7_31_6_fu_40822_p2.read(): p_Val2_14_31_6_fu_40835_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_7_fu_40898_p3() {
    y_V_1_31_7_fu_40898_p3 = (!dneg_31_7_fu_40848_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_7_fu_40848_p2.read()[0].to_bool())? p_Val2_7_31_7_fu_40886_p2.read(): p_Val2_14_31_7_fu_40892_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_1_cast_fu_17952_p1() {
    y_V_1_32_1_cast_fu_17952_p1 = esl_sext<15,14>(y_V_1_32_1_fu_17947_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_32_1_fu_17947_p3() {
    y_V_1_32_1_fu_17947_p3 = (!dneg_32_1_reg_58978.read()[0].is_01())? sc_lv<14>(): ((dneg_32_1_reg_58978.read()[0].to_bool())? p_Val2_7_32_1_reg_58990.read(): p_Val2_14_32_1_reg_59000.read());
}

void Sobel_phase_strm::thread_y_V_1_32_2_fu_18030_p3() {
    y_V_1_32_2_fu_18030_p3 = (!dneg_32_2_fu_17956_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_2_fu_17956_p2.read()[0].to_bool())? p_Val2_7_32_2_fu_18000_p2.read(): p_Val2_14_32_2_fu_18016_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_3_fu_18108_p3() {
    y_V_1_32_3_fu_18108_p3 = (!dneg_32_3_fu_18038_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_3_fu_18038_p2.read()[0].to_bool())? p_Val2_7_32_3_fu_18078_p2.read(): p_Val2_14_32_3_fu_18094_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_4_fu_30286_p3() {
    y_V_1_32_4_fu_30286_p3 = (!dneg_32_4_fu_30244_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_4_fu_30244_p2.read()[0].to_bool())? p_Val2_7_32_4_fu_30260_p2.read(): p_Val2_14_32_4_fu_30273_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_5_fu_30364_p3() {
    y_V_1_32_5_fu_30364_p3 = (!dneg_32_5_fu_30294_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_5_fu_30294_p2.read()[0].to_bool())? p_Val2_7_32_5_fu_30334_p2.read(): p_Val2_14_32_5_fu_30350_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_6_fu_40993_p3() {
    y_V_1_32_6_fu_40993_p3 = (!dneg_32_6_fu_40959_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_6_fu_40959_p2.read()[0].to_bool())? p_Val2_7_32_6_fu_40975_p2.read(): p_Val2_14_32_6_fu_40988_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_7_fu_41051_p3() {
    y_V_1_32_7_fu_41051_p3 = (!dneg_32_7_fu_41001_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_7_fu_41001_p2.read()[0].to_bool())? p_Val2_7_32_7_fu_41039_p2.read(): p_Val2_14_32_7_fu_41045_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_1_cast_fu_18146_p1() {
    y_V_1_33_1_cast_fu_18146_p1 = esl_sext<15,14>(y_V_1_33_1_fu_18141_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_33_1_fu_18141_p3() {
    y_V_1_33_1_fu_18141_p3 = (!dneg_33_1_reg_59016.read()[0].is_01())? sc_lv<14>(): ((dneg_33_1_reg_59016.read()[0].to_bool())? p_Val2_7_33_1_reg_59028.read(): p_Val2_14_33_1_reg_59038.read());
}

void Sobel_phase_strm::thread_y_V_1_33_2_fu_18224_p3() {
    y_V_1_33_2_fu_18224_p3 = (!dneg_33_2_fu_18150_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_2_fu_18150_p2.read()[0].to_bool())? p_Val2_7_33_2_fu_18194_p2.read(): p_Val2_14_33_2_fu_18210_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_3_fu_18302_p3() {
    y_V_1_33_3_fu_18302_p3 = (!dneg_33_3_fu_18232_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_3_fu_18232_p2.read()[0].to_bool())? p_Val2_7_33_3_fu_18272_p2.read(): p_Val2_14_33_3_fu_18288_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_4_fu_30434_p3() {
    y_V_1_33_4_fu_30434_p3 = (!dneg_33_4_fu_30392_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_4_fu_30392_p2.read()[0].to_bool())? p_Val2_7_33_4_fu_30408_p2.read(): p_Val2_14_33_4_fu_30421_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_5_fu_30512_p3() {
    y_V_1_33_5_fu_30512_p3 = (!dneg_33_5_fu_30442_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_5_fu_30442_p2.read()[0].to_bool())? p_Val2_7_33_5_fu_30482_p2.read(): p_Val2_14_33_5_fu_30498_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_6_fu_41146_p3() {
    y_V_1_33_6_fu_41146_p3 = (!dneg_33_6_fu_41112_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_6_fu_41112_p2.read()[0].to_bool())? p_Val2_7_33_6_fu_41128_p2.read(): p_Val2_14_33_6_fu_41141_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_7_fu_41204_p3() {
    y_V_1_33_7_fu_41204_p3 = (!dneg_33_7_fu_41154_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_7_fu_41154_p2.read()[0].to_bool())? p_Val2_7_33_7_fu_41192_p2.read(): p_Val2_14_33_7_fu_41198_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_1_cast_fu_18340_p1() {
    y_V_1_34_1_cast_fu_18340_p1 = esl_sext<15,14>(y_V_1_34_1_fu_18335_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_34_1_fu_18335_p3() {
    y_V_1_34_1_fu_18335_p3 = (!dneg_34_1_reg_59054.read()[0].is_01())? sc_lv<14>(): ((dneg_34_1_reg_59054.read()[0].to_bool())? p_Val2_7_34_1_reg_59066.read(): p_Val2_14_34_1_reg_59076.read());
}

void Sobel_phase_strm::thread_y_V_1_34_2_fu_18418_p3() {
    y_V_1_34_2_fu_18418_p3 = (!dneg_34_2_fu_18344_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_2_fu_18344_p2.read()[0].to_bool())? p_Val2_7_34_2_fu_18388_p2.read(): p_Val2_14_34_2_fu_18404_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_3_fu_18496_p3() {
    y_V_1_34_3_fu_18496_p3 = (!dneg_34_3_fu_18426_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_3_fu_18426_p2.read()[0].to_bool())? p_Val2_7_34_3_fu_18466_p2.read(): p_Val2_14_34_3_fu_18482_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_4_fu_30582_p3() {
    y_V_1_34_4_fu_30582_p3 = (!dneg_34_4_fu_30540_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_4_fu_30540_p2.read()[0].to_bool())? p_Val2_7_34_4_fu_30556_p2.read(): p_Val2_14_34_4_fu_30569_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_5_fu_30660_p3() {
    y_V_1_34_5_fu_30660_p3 = (!dneg_34_5_fu_30590_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_5_fu_30590_p2.read()[0].to_bool())? p_Val2_7_34_5_fu_30630_p2.read(): p_Val2_14_34_5_fu_30646_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_6_fu_41299_p3() {
    y_V_1_34_6_fu_41299_p3 = (!dneg_34_6_fu_41265_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_6_fu_41265_p2.read()[0].to_bool())? p_Val2_7_34_6_fu_41281_p2.read(): p_Val2_14_34_6_fu_41294_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_7_fu_41357_p3() {
    y_V_1_34_7_fu_41357_p3 = (!dneg_34_7_fu_41307_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_7_fu_41307_p2.read()[0].to_bool())? p_Val2_7_34_7_fu_41345_p2.read(): p_Val2_14_34_7_fu_41351_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_1_cast_fu_18534_p1() {
    y_V_1_35_1_cast_fu_18534_p1 = esl_sext<15,14>(y_V_1_35_1_fu_18529_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_35_1_fu_18529_p3() {
    y_V_1_35_1_fu_18529_p3 = (!dneg_35_1_reg_59092.read()[0].is_01())? sc_lv<14>(): ((dneg_35_1_reg_59092.read()[0].to_bool())? p_Val2_7_35_1_reg_59104.read(): p_Val2_14_35_1_reg_59114.read());
}

void Sobel_phase_strm::thread_y_V_1_35_2_fu_18612_p3() {
    y_V_1_35_2_fu_18612_p3 = (!dneg_35_2_fu_18538_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_2_fu_18538_p2.read()[0].to_bool())? p_Val2_7_35_2_fu_18582_p2.read(): p_Val2_14_35_2_fu_18598_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_3_fu_18690_p3() {
    y_V_1_35_3_fu_18690_p3 = (!dneg_35_3_fu_18620_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_3_fu_18620_p2.read()[0].to_bool())? p_Val2_7_35_3_fu_18660_p2.read(): p_Val2_14_35_3_fu_18676_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_4_fu_30730_p3() {
    y_V_1_35_4_fu_30730_p3 = (!dneg_35_4_fu_30688_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_4_fu_30688_p2.read()[0].to_bool())? p_Val2_7_35_4_fu_30704_p2.read(): p_Val2_14_35_4_fu_30717_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_5_fu_30808_p3() {
    y_V_1_35_5_fu_30808_p3 = (!dneg_35_5_fu_30738_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_5_fu_30738_p2.read()[0].to_bool())? p_Val2_7_35_5_fu_30778_p2.read(): p_Val2_14_35_5_fu_30794_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_6_fu_41452_p3() {
    y_V_1_35_6_fu_41452_p3 = (!dneg_35_6_fu_41418_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_6_fu_41418_p2.read()[0].to_bool())? p_Val2_7_35_6_fu_41434_p2.read(): p_Val2_14_35_6_fu_41447_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_7_fu_41510_p3() {
    y_V_1_35_7_fu_41510_p3 = (!dneg_35_7_fu_41460_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_7_fu_41460_p2.read()[0].to_bool())? p_Val2_7_35_7_fu_41498_p2.read(): p_Val2_14_35_7_fu_41504_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_1_cast_fu_18728_p1() {
    y_V_1_36_1_cast_fu_18728_p1 = esl_sext<15,14>(y_V_1_36_1_fu_18723_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_36_1_fu_18723_p3() {
    y_V_1_36_1_fu_18723_p3 = (!dneg_36_1_reg_59130.read()[0].is_01())? sc_lv<14>(): ((dneg_36_1_reg_59130.read()[0].to_bool())? p_Val2_7_36_1_reg_59142.read(): p_Val2_14_36_1_reg_59152.read());
}

void Sobel_phase_strm::thread_y_V_1_36_2_fu_18806_p3() {
    y_V_1_36_2_fu_18806_p3 = (!dneg_36_2_fu_18732_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_2_fu_18732_p2.read()[0].to_bool())? p_Val2_7_36_2_fu_18776_p2.read(): p_Val2_14_36_2_fu_18792_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_3_fu_18884_p3() {
    y_V_1_36_3_fu_18884_p3 = (!dneg_36_3_fu_18814_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_3_fu_18814_p2.read()[0].to_bool())? p_Val2_7_36_3_fu_18854_p2.read(): p_Val2_14_36_3_fu_18870_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_4_fu_30878_p3() {
    y_V_1_36_4_fu_30878_p3 = (!dneg_36_4_fu_30836_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_4_fu_30836_p2.read()[0].to_bool())? p_Val2_7_36_4_fu_30852_p2.read(): p_Val2_14_36_4_fu_30865_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_5_fu_30956_p3() {
    y_V_1_36_5_fu_30956_p3 = (!dneg_36_5_fu_30886_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_5_fu_30886_p2.read()[0].to_bool())? p_Val2_7_36_5_fu_30926_p2.read(): p_Val2_14_36_5_fu_30942_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_6_fu_41605_p3() {
    y_V_1_36_6_fu_41605_p3 = (!dneg_36_6_fu_41571_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_6_fu_41571_p2.read()[0].to_bool())? p_Val2_7_36_6_fu_41587_p2.read(): p_Val2_14_36_6_fu_41600_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_7_fu_41663_p3() {
    y_V_1_36_7_fu_41663_p3 = (!dneg_36_7_fu_41613_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_7_fu_41613_p2.read()[0].to_bool())? p_Val2_7_36_7_fu_41651_p2.read(): p_Val2_14_36_7_fu_41657_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_1_cast_fu_18922_p1() {
    y_V_1_37_1_cast_fu_18922_p1 = esl_sext<15,14>(y_V_1_37_1_fu_18917_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_37_1_fu_18917_p3() {
    y_V_1_37_1_fu_18917_p3 = (!dneg_37_1_reg_59168.read()[0].is_01())? sc_lv<14>(): ((dneg_37_1_reg_59168.read()[0].to_bool())? p_Val2_7_37_1_reg_59180.read(): p_Val2_14_37_1_reg_59190.read());
}

void Sobel_phase_strm::thread_y_V_1_37_2_fu_19000_p3() {
    y_V_1_37_2_fu_19000_p3 = (!dneg_37_2_fu_18926_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_2_fu_18926_p2.read()[0].to_bool())? p_Val2_7_37_2_fu_18970_p2.read(): p_Val2_14_37_2_fu_18986_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_3_fu_19078_p3() {
    y_V_1_37_3_fu_19078_p3 = (!dneg_37_3_fu_19008_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_3_fu_19008_p2.read()[0].to_bool())? p_Val2_7_37_3_fu_19048_p2.read(): p_Val2_14_37_3_fu_19064_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_4_fu_31026_p3() {
    y_V_1_37_4_fu_31026_p3 = (!dneg_37_4_fu_30984_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_4_fu_30984_p2.read()[0].to_bool())? p_Val2_7_37_4_fu_31000_p2.read(): p_Val2_14_37_4_fu_31013_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_5_fu_31104_p3() {
    y_V_1_37_5_fu_31104_p3 = (!dneg_37_5_fu_31034_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_5_fu_31034_p2.read()[0].to_bool())? p_Val2_7_37_5_fu_31074_p2.read(): p_Val2_14_37_5_fu_31090_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_6_fu_41758_p3() {
    y_V_1_37_6_fu_41758_p3 = (!dneg_37_6_fu_41724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_6_fu_41724_p2.read()[0].to_bool())? p_Val2_7_37_6_fu_41740_p2.read(): p_Val2_14_37_6_fu_41753_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_7_fu_41816_p3() {
    y_V_1_37_7_fu_41816_p3 = (!dneg_37_7_fu_41766_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_7_fu_41766_p2.read()[0].to_bool())? p_Val2_7_37_7_fu_41804_p2.read(): p_Val2_14_37_7_fu_41810_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_1_cast_fu_19116_p1() {
    y_V_1_38_1_cast_fu_19116_p1 = esl_sext<15,14>(y_V_1_38_1_fu_19111_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_38_1_fu_19111_p3() {
    y_V_1_38_1_fu_19111_p3 = (!dneg_38_1_reg_59206.read()[0].is_01())? sc_lv<14>(): ((dneg_38_1_reg_59206.read()[0].to_bool())? p_Val2_7_38_1_reg_59218.read(): p_Val2_14_38_1_reg_59228.read());
}

void Sobel_phase_strm::thread_y_V_1_38_2_fu_19194_p3() {
    y_V_1_38_2_fu_19194_p3 = (!dneg_38_2_fu_19120_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_2_fu_19120_p2.read()[0].to_bool())? p_Val2_7_38_2_fu_19164_p2.read(): p_Val2_14_38_2_fu_19180_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_3_fu_19272_p3() {
    y_V_1_38_3_fu_19272_p3 = (!dneg_38_3_fu_19202_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_3_fu_19202_p2.read()[0].to_bool())? p_Val2_7_38_3_fu_19242_p2.read(): p_Val2_14_38_3_fu_19258_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_4_fu_31174_p3() {
    y_V_1_38_4_fu_31174_p3 = (!dneg_38_4_fu_31132_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_4_fu_31132_p2.read()[0].to_bool())? p_Val2_7_38_4_fu_31148_p2.read(): p_Val2_14_38_4_fu_31161_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_5_fu_31252_p3() {
    y_V_1_38_5_fu_31252_p3 = (!dneg_38_5_fu_31182_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_5_fu_31182_p2.read()[0].to_bool())? p_Val2_7_38_5_fu_31222_p2.read(): p_Val2_14_38_5_fu_31238_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_6_fu_41911_p3() {
    y_V_1_38_6_fu_41911_p3 = (!dneg_38_6_fu_41877_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_6_fu_41877_p2.read()[0].to_bool())? p_Val2_7_38_6_fu_41893_p2.read(): p_Val2_14_38_6_fu_41906_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_7_fu_41969_p3() {
    y_V_1_38_7_fu_41969_p3 = (!dneg_38_7_fu_41919_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_7_fu_41919_p2.read()[0].to_bool())? p_Val2_7_38_7_fu_41957_p2.read(): p_Val2_14_38_7_fu_41963_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_1_cast_fu_19310_p1() {
    y_V_1_39_1_cast_fu_19310_p1 = esl_sext<15,14>(y_V_1_39_1_fu_19305_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_39_1_fu_19305_p3() {
    y_V_1_39_1_fu_19305_p3 = (!dneg_39_1_reg_59244.read()[0].is_01())? sc_lv<14>(): ((dneg_39_1_reg_59244.read()[0].to_bool())? p_Val2_7_39_1_reg_59256.read(): p_Val2_14_39_1_reg_59266.read());
}

void Sobel_phase_strm::thread_y_V_1_39_2_fu_19388_p3() {
    y_V_1_39_2_fu_19388_p3 = (!dneg_39_2_fu_19314_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_2_fu_19314_p2.read()[0].to_bool())? p_Val2_7_39_2_fu_19358_p2.read(): p_Val2_14_39_2_fu_19374_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_3_fu_19466_p3() {
    y_V_1_39_3_fu_19466_p3 = (!dneg_39_3_fu_19396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_3_fu_19396_p2.read()[0].to_bool())? p_Val2_7_39_3_fu_19436_p2.read(): p_Val2_14_39_3_fu_19452_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_4_fu_31322_p3() {
    y_V_1_39_4_fu_31322_p3 = (!dneg_39_4_fu_31280_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_4_fu_31280_p2.read()[0].to_bool())? p_Val2_7_39_4_fu_31296_p2.read(): p_Val2_14_39_4_fu_31309_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_5_fu_31400_p3() {
    y_V_1_39_5_fu_31400_p3 = (!dneg_39_5_fu_31330_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_5_fu_31330_p2.read()[0].to_bool())? p_Val2_7_39_5_fu_31370_p2.read(): p_Val2_14_39_5_fu_31386_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_6_fu_42064_p3() {
    y_V_1_39_6_fu_42064_p3 = (!dneg_39_6_fu_42030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_6_fu_42030_p2.read()[0].to_bool())? p_Val2_7_39_6_fu_42046_p2.read(): p_Val2_14_39_6_fu_42059_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_7_fu_42122_p3() {
    y_V_1_39_7_fu_42122_p3 = (!dneg_39_7_fu_42072_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_7_fu_42072_p2.read()[0].to_bool())? p_Val2_7_39_7_fu_42110_p2.read(): p_Val2_14_39_7_fu_42116_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_1_cast_fu_12326_p1() {
    y_V_1_3_1_cast_fu_12326_p1 = esl_sext<15,14>(y_V_1_3_1_fu_12321_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_3_1_fu_12321_p3() {
    y_V_1_3_1_fu_12321_p3 = (!dneg_3_1_reg_57876.read()[0].is_01())? sc_lv<14>(): ((dneg_3_1_reg_57876.read()[0].to_bool())? p_Val2_7_3_1_reg_57888.read(): p_Val2_14_3_1_reg_57898.read());
}

void Sobel_phase_strm::thread_y_V_1_3_2_fu_12404_p3() {
    y_V_1_3_2_fu_12404_p3 = (!dneg_3_2_fu_12330_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_2_fu_12330_p2.read()[0].to_bool())? p_Val2_7_3_2_fu_12374_p2.read(): p_Val2_14_3_2_fu_12390_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_3_fu_12482_p3() {
    y_V_1_3_3_fu_12482_p3 = (!dneg_3_3_fu_12412_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_3_fu_12412_p2.read()[0].to_bool())? p_Val2_7_3_3_fu_12452_p2.read(): p_Val2_14_3_3_fu_12468_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_4_fu_25994_p3() {
    y_V_1_3_4_fu_25994_p3 = (!dneg_3_4_fu_25952_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_4_fu_25952_p2.read()[0].to_bool())? p_Val2_7_3_4_fu_25968_p2.read(): p_Val2_14_3_4_fu_25981_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_5_fu_26072_p3() {
    y_V_1_3_5_fu_26072_p3 = (!dneg_3_5_fu_26002_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_5_fu_26002_p2.read()[0].to_bool())? p_Val2_7_3_5_fu_26042_p2.read(): p_Val2_14_3_5_fu_26058_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_6_fu_36556_p3() {
    y_V_1_3_6_fu_36556_p3 = (!dneg_3_6_fu_36522_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_6_fu_36522_p2.read()[0].to_bool())? p_Val2_7_3_6_fu_36538_p2.read(): p_Val2_14_3_6_fu_36551_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_7_fu_36614_p3() {
    y_V_1_3_7_fu_36614_p3 = (!dneg_3_7_fu_36564_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_7_fu_36564_p2.read()[0].to_bool())? p_Val2_7_3_7_fu_36602_p2.read(): p_Val2_14_3_7_fu_36608_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_1_cast_fu_19504_p1() {
    y_V_1_40_1_cast_fu_19504_p1 = esl_sext<15,14>(y_V_1_40_1_fu_19499_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_40_1_fu_19499_p3() {
    y_V_1_40_1_fu_19499_p3 = (!dneg_40_1_reg_59282.read()[0].is_01())? sc_lv<14>(): ((dneg_40_1_reg_59282.read()[0].to_bool())? p_Val2_7_40_1_reg_59294.read(): p_Val2_14_40_1_reg_59304.read());
}

void Sobel_phase_strm::thread_y_V_1_40_2_fu_19582_p3() {
    y_V_1_40_2_fu_19582_p3 = (!dneg_40_2_fu_19508_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_2_fu_19508_p2.read()[0].to_bool())? p_Val2_7_40_2_fu_19552_p2.read(): p_Val2_14_40_2_fu_19568_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_3_fu_19660_p3() {
    y_V_1_40_3_fu_19660_p3 = (!dneg_40_3_fu_19590_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_3_fu_19590_p2.read()[0].to_bool())? p_Val2_7_40_3_fu_19630_p2.read(): p_Val2_14_40_3_fu_19646_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_4_fu_31470_p3() {
    y_V_1_40_4_fu_31470_p3 = (!dneg_40_4_fu_31428_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_4_fu_31428_p2.read()[0].to_bool())? p_Val2_7_40_4_fu_31444_p2.read(): p_Val2_14_40_4_fu_31457_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_5_fu_31548_p3() {
    y_V_1_40_5_fu_31548_p3 = (!dneg_40_5_fu_31478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_5_fu_31478_p2.read()[0].to_bool())? p_Val2_7_40_5_fu_31518_p2.read(): p_Val2_14_40_5_fu_31534_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_6_fu_42217_p3() {
    y_V_1_40_6_fu_42217_p3 = (!dneg_40_6_fu_42183_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_6_fu_42183_p2.read()[0].to_bool())? p_Val2_7_40_6_fu_42199_p2.read(): p_Val2_14_40_6_fu_42212_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_7_fu_42275_p3() {
    y_V_1_40_7_fu_42275_p3 = (!dneg_40_7_fu_42225_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_7_fu_42225_p2.read()[0].to_bool())? p_Val2_7_40_7_fu_42263_p2.read(): p_Val2_14_40_7_fu_42269_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_1_cast_fu_19698_p1() {
    y_V_1_41_1_cast_fu_19698_p1 = esl_sext<15,14>(y_V_1_41_1_fu_19693_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_41_1_fu_19693_p3() {
    y_V_1_41_1_fu_19693_p3 = (!dneg_41_1_reg_59320.read()[0].is_01())? sc_lv<14>(): ((dneg_41_1_reg_59320.read()[0].to_bool())? p_Val2_7_41_1_reg_59332.read(): p_Val2_14_41_1_reg_59342.read());
}

void Sobel_phase_strm::thread_y_V_1_41_2_fu_19776_p3() {
    y_V_1_41_2_fu_19776_p3 = (!dneg_41_2_fu_19702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_2_fu_19702_p2.read()[0].to_bool())? p_Val2_7_41_2_fu_19746_p2.read(): p_Val2_14_41_2_fu_19762_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_3_fu_19854_p3() {
    y_V_1_41_3_fu_19854_p3 = (!dneg_41_3_fu_19784_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_3_fu_19784_p2.read()[0].to_bool())? p_Val2_7_41_3_fu_19824_p2.read(): p_Val2_14_41_3_fu_19840_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_4_fu_31618_p3() {
    y_V_1_41_4_fu_31618_p3 = (!dneg_41_4_fu_31576_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_4_fu_31576_p2.read()[0].to_bool())? p_Val2_7_41_4_fu_31592_p2.read(): p_Val2_14_41_4_fu_31605_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_5_fu_31696_p3() {
    y_V_1_41_5_fu_31696_p3 = (!dneg_41_5_fu_31626_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_5_fu_31626_p2.read()[0].to_bool())? p_Val2_7_41_5_fu_31666_p2.read(): p_Val2_14_41_5_fu_31682_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_6_fu_42370_p3() {
    y_V_1_41_6_fu_42370_p3 = (!dneg_41_6_fu_42336_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_6_fu_42336_p2.read()[0].to_bool())? p_Val2_7_41_6_fu_42352_p2.read(): p_Val2_14_41_6_fu_42365_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_7_fu_42428_p3() {
    y_V_1_41_7_fu_42428_p3 = (!dneg_41_7_fu_42378_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_7_fu_42378_p2.read()[0].to_bool())? p_Val2_7_41_7_fu_42416_p2.read(): p_Val2_14_41_7_fu_42422_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_1_cast_fu_19892_p1() {
    y_V_1_42_1_cast_fu_19892_p1 = esl_sext<15,14>(y_V_1_42_1_fu_19887_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_42_1_fu_19887_p3() {
    y_V_1_42_1_fu_19887_p3 = (!dneg_42_1_reg_59358.read()[0].is_01())? sc_lv<14>(): ((dneg_42_1_reg_59358.read()[0].to_bool())? p_Val2_7_42_1_reg_59370.read(): p_Val2_14_42_1_reg_59380.read());
}

void Sobel_phase_strm::thread_y_V_1_42_2_fu_19970_p3() {
    y_V_1_42_2_fu_19970_p3 = (!dneg_42_2_fu_19896_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_2_fu_19896_p2.read()[0].to_bool())? p_Val2_7_42_2_fu_19940_p2.read(): p_Val2_14_42_2_fu_19956_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_3_fu_20048_p3() {
    y_V_1_42_3_fu_20048_p3 = (!dneg_42_3_fu_19978_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_3_fu_19978_p2.read()[0].to_bool())? p_Val2_7_42_3_fu_20018_p2.read(): p_Val2_14_42_3_fu_20034_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_4_fu_31766_p3() {
    y_V_1_42_4_fu_31766_p3 = (!dneg_42_4_fu_31724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_4_fu_31724_p2.read()[0].to_bool())? p_Val2_7_42_4_fu_31740_p2.read(): p_Val2_14_42_4_fu_31753_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_5_fu_31844_p3() {
    y_V_1_42_5_fu_31844_p3 = (!dneg_42_5_fu_31774_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_5_fu_31774_p2.read()[0].to_bool())? p_Val2_7_42_5_fu_31814_p2.read(): p_Val2_14_42_5_fu_31830_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_6_fu_42523_p3() {
    y_V_1_42_6_fu_42523_p3 = (!dneg_42_6_fu_42489_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_6_fu_42489_p2.read()[0].to_bool())? p_Val2_7_42_6_fu_42505_p2.read(): p_Val2_14_42_6_fu_42518_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_42_7_fu_42581_p3() {
    y_V_1_42_7_fu_42581_p3 = (!dneg_42_7_fu_42531_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_42_7_fu_42531_p2.read()[0].to_bool())? p_Val2_7_42_7_fu_42569_p2.read(): p_Val2_14_42_7_fu_42575_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_1_cast_fu_20086_p1() {
    y_V_1_43_1_cast_fu_20086_p1 = esl_sext<15,14>(y_V_1_43_1_fu_20081_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_43_1_fu_20081_p3() {
    y_V_1_43_1_fu_20081_p3 = (!dneg_43_1_reg_59396.read()[0].is_01())? sc_lv<14>(): ((dneg_43_1_reg_59396.read()[0].to_bool())? p_Val2_7_43_1_reg_59408.read(): p_Val2_14_43_1_reg_59418.read());
}

void Sobel_phase_strm::thread_y_V_1_43_2_fu_20164_p3() {
    y_V_1_43_2_fu_20164_p3 = (!dneg_43_2_fu_20090_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_2_fu_20090_p2.read()[0].to_bool())? p_Val2_7_43_2_fu_20134_p2.read(): p_Val2_14_43_2_fu_20150_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_3_fu_20242_p3() {
    y_V_1_43_3_fu_20242_p3 = (!dneg_43_3_fu_20172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_3_fu_20172_p2.read()[0].to_bool())? p_Val2_7_43_3_fu_20212_p2.read(): p_Val2_14_43_3_fu_20228_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_4_fu_31914_p3() {
    y_V_1_43_4_fu_31914_p3 = (!dneg_43_4_fu_31872_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_4_fu_31872_p2.read()[0].to_bool())? p_Val2_7_43_4_fu_31888_p2.read(): p_Val2_14_43_4_fu_31901_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_5_fu_31992_p3() {
    y_V_1_43_5_fu_31992_p3 = (!dneg_43_5_fu_31922_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_5_fu_31922_p2.read()[0].to_bool())? p_Val2_7_43_5_fu_31962_p2.read(): p_Val2_14_43_5_fu_31978_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_6_fu_42676_p3() {
    y_V_1_43_6_fu_42676_p3 = (!dneg_43_6_fu_42642_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_6_fu_42642_p2.read()[0].to_bool())? p_Val2_7_43_6_fu_42658_p2.read(): p_Val2_14_43_6_fu_42671_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_43_7_fu_42734_p3() {
    y_V_1_43_7_fu_42734_p3 = (!dneg_43_7_fu_42684_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_43_7_fu_42684_p2.read()[0].to_bool())? p_Val2_7_43_7_fu_42722_p2.read(): p_Val2_14_43_7_fu_42728_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_1_cast_fu_20280_p1() {
    y_V_1_44_1_cast_fu_20280_p1 = esl_sext<15,14>(y_V_1_44_1_fu_20275_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_44_1_fu_20275_p3() {
    y_V_1_44_1_fu_20275_p3 = (!dneg_44_1_reg_59434.read()[0].is_01())? sc_lv<14>(): ((dneg_44_1_reg_59434.read()[0].to_bool())? p_Val2_7_44_1_reg_59446.read(): p_Val2_14_44_1_reg_59456.read());
}

void Sobel_phase_strm::thread_y_V_1_44_2_fu_20358_p3() {
    y_V_1_44_2_fu_20358_p3 = (!dneg_44_2_fu_20284_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_2_fu_20284_p2.read()[0].to_bool())? p_Val2_7_44_2_fu_20328_p2.read(): p_Val2_14_44_2_fu_20344_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_3_fu_20436_p3() {
    y_V_1_44_3_fu_20436_p3 = (!dneg_44_3_fu_20366_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_3_fu_20366_p2.read()[0].to_bool())? p_Val2_7_44_3_fu_20406_p2.read(): p_Val2_14_44_3_fu_20422_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_4_fu_32062_p3() {
    y_V_1_44_4_fu_32062_p3 = (!dneg_44_4_fu_32020_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_4_fu_32020_p2.read()[0].to_bool())? p_Val2_7_44_4_fu_32036_p2.read(): p_Val2_14_44_4_fu_32049_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_5_fu_32140_p3() {
    y_V_1_44_5_fu_32140_p3 = (!dneg_44_5_fu_32070_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_5_fu_32070_p2.read()[0].to_bool())? p_Val2_7_44_5_fu_32110_p2.read(): p_Val2_14_44_5_fu_32126_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_6_fu_42829_p3() {
    y_V_1_44_6_fu_42829_p3 = (!dneg_44_6_fu_42795_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_6_fu_42795_p2.read()[0].to_bool())? p_Val2_7_44_6_fu_42811_p2.read(): p_Val2_14_44_6_fu_42824_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_44_7_fu_42887_p3() {
    y_V_1_44_7_fu_42887_p3 = (!dneg_44_7_fu_42837_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_44_7_fu_42837_p2.read()[0].to_bool())? p_Val2_7_44_7_fu_42875_p2.read(): p_Val2_14_44_7_fu_42881_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_1_cast_fu_20474_p1() {
    y_V_1_45_1_cast_fu_20474_p1 = esl_sext<15,14>(y_V_1_45_1_fu_20469_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_45_1_fu_20469_p3() {
    y_V_1_45_1_fu_20469_p3 = (!dneg_45_1_reg_59472.read()[0].is_01())? sc_lv<14>(): ((dneg_45_1_reg_59472.read()[0].to_bool())? p_Val2_7_45_1_reg_59484.read(): p_Val2_14_45_1_reg_59494.read());
}

void Sobel_phase_strm::thread_y_V_1_45_2_fu_20552_p3() {
    y_V_1_45_2_fu_20552_p3 = (!dneg_45_2_fu_20478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_2_fu_20478_p2.read()[0].to_bool())? p_Val2_7_45_2_fu_20522_p2.read(): p_Val2_14_45_2_fu_20538_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_3_fu_20630_p3() {
    y_V_1_45_3_fu_20630_p3 = (!dneg_45_3_fu_20560_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_3_fu_20560_p2.read()[0].to_bool())? p_Val2_7_45_3_fu_20600_p2.read(): p_Val2_14_45_3_fu_20616_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_4_fu_32210_p3() {
    y_V_1_45_4_fu_32210_p3 = (!dneg_45_4_fu_32168_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_4_fu_32168_p2.read()[0].to_bool())? p_Val2_7_45_4_fu_32184_p2.read(): p_Val2_14_45_4_fu_32197_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_5_fu_32288_p3() {
    y_V_1_45_5_fu_32288_p3 = (!dneg_45_5_fu_32218_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_5_fu_32218_p2.read()[0].to_bool())? p_Val2_7_45_5_fu_32258_p2.read(): p_Val2_14_45_5_fu_32274_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_6_fu_42982_p3() {
    y_V_1_45_6_fu_42982_p3 = (!dneg_45_6_fu_42948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_6_fu_42948_p2.read()[0].to_bool())? p_Val2_7_45_6_fu_42964_p2.read(): p_Val2_14_45_6_fu_42977_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_45_7_fu_43040_p3() {
    y_V_1_45_7_fu_43040_p3 = (!dneg_45_7_fu_42990_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_45_7_fu_42990_p2.read()[0].to_bool())? p_Val2_7_45_7_fu_43028_p2.read(): p_Val2_14_45_7_fu_43034_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_1_cast_fu_20668_p1() {
    y_V_1_46_1_cast_fu_20668_p1 = esl_sext<15,14>(y_V_1_46_1_fu_20663_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_46_1_fu_20663_p3() {
    y_V_1_46_1_fu_20663_p3 = (!dneg_46_1_reg_59510.read()[0].is_01())? sc_lv<14>(): ((dneg_46_1_reg_59510.read()[0].to_bool())? p_Val2_7_46_1_reg_59522.read(): p_Val2_14_46_1_reg_59532.read());
}

void Sobel_phase_strm::thread_y_V_1_46_2_fu_20746_p3() {
    y_V_1_46_2_fu_20746_p3 = (!dneg_46_2_fu_20672_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_2_fu_20672_p2.read()[0].to_bool())? p_Val2_7_46_2_fu_20716_p2.read(): p_Val2_14_46_2_fu_20732_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_3_fu_20824_p3() {
    y_V_1_46_3_fu_20824_p3 = (!dneg_46_3_fu_20754_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_3_fu_20754_p2.read()[0].to_bool())? p_Val2_7_46_3_fu_20794_p2.read(): p_Val2_14_46_3_fu_20810_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_4_fu_32358_p3() {
    y_V_1_46_4_fu_32358_p3 = (!dneg_46_4_fu_32316_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_4_fu_32316_p2.read()[0].to_bool())? p_Val2_7_46_4_fu_32332_p2.read(): p_Val2_14_46_4_fu_32345_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_5_fu_32436_p3() {
    y_V_1_46_5_fu_32436_p3 = (!dneg_46_5_fu_32366_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_5_fu_32366_p2.read()[0].to_bool())? p_Val2_7_46_5_fu_32406_p2.read(): p_Val2_14_46_5_fu_32422_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_6_fu_43135_p3() {
    y_V_1_46_6_fu_43135_p3 = (!dneg_46_6_fu_43101_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_6_fu_43101_p2.read()[0].to_bool())? p_Val2_7_46_6_fu_43117_p2.read(): p_Val2_14_46_6_fu_43130_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_46_7_fu_43193_p3() {
    y_V_1_46_7_fu_43193_p3 = (!dneg_46_7_fu_43143_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_46_7_fu_43143_p2.read()[0].to_bool())? p_Val2_7_46_7_fu_43181_p2.read(): p_Val2_14_46_7_fu_43187_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_1_cast_fu_20862_p1() {
    y_V_1_47_1_cast_fu_20862_p1 = esl_sext<15,14>(y_V_1_47_1_fu_20857_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_47_1_fu_20857_p3() {
    y_V_1_47_1_fu_20857_p3 = (!dneg_47_1_reg_59548.read()[0].is_01())? sc_lv<14>(): ((dneg_47_1_reg_59548.read()[0].to_bool())? p_Val2_7_47_1_reg_59560.read(): p_Val2_14_47_1_reg_59570.read());
}

void Sobel_phase_strm::thread_y_V_1_47_2_fu_20940_p3() {
    y_V_1_47_2_fu_20940_p3 = (!dneg_47_2_fu_20866_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_2_fu_20866_p2.read()[0].to_bool())? p_Val2_7_47_2_fu_20910_p2.read(): p_Val2_14_47_2_fu_20926_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_3_fu_21018_p3() {
    y_V_1_47_3_fu_21018_p3 = (!dneg_47_3_fu_20948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_3_fu_20948_p2.read()[0].to_bool())? p_Val2_7_47_3_fu_20988_p2.read(): p_Val2_14_47_3_fu_21004_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_4_fu_32506_p3() {
    y_V_1_47_4_fu_32506_p3 = (!dneg_47_4_fu_32464_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_4_fu_32464_p2.read()[0].to_bool())? p_Val2_7_47_4_fu_32480_p2.read(): p_Val2_14_47_4_fu_32493_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_5_fu_32584_p3() {
    y_V_1_47_5_fu_32584_p3 = (!dneg_47_5_fu_32514_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_5_fu_32514_p2.read()[0].to_bool())? p_Val2_7_47_5_fu_32554_p2.read(): p_Val2_14_47_5_fu_32570_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_6_fu_43288_p3() {
    y_V_1_47_6_fu_43288_p3 = (!dneg_47_6_fu_43254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_6_fu_43254_p2.read()[0].to_bool())? p_Val2_7_47_6_fu_43270_p2.read(): p_Val2_14_47_6_fu_43283_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_47_7_fu_43346_p3() {
    y_V_1_47_7_fu_43346_p3 = (!dneg_47_7_fu_43296_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_47_7_fu_43296_p2.read()[0].to_bool())? p_Val2_7_47_7_fu_43334_p2.read(): p_Val2_14_47_7_fu_43340_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_1_cast_fu_21056_p1() {
    y_V_1_48_1_cast_fu_21056_p1 = esl_sext<15,14>(y_V_1_48_1_fu_21051_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_48_1_fu_21051_p3() {
    y_V_1_48_1_fu_21051_p3 = (!dneg_48_1_reg_59586.read()[0].is_01())? sc_lv<14>(): ((dneg_48_1_reg_59586.read()[0].to_bool())? p_Val2_7_48_1_reg_59598.read(): p_Val2_14_48_1_reg_59608.read());
}

void Sobel_phase_strm::thread_y_V_1_48_2_fu_21134_p3() {
    y_V_1_48_2_fu_21134_p3 = (!dneg_48_2_fu_21060_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_2_fu_21060_p2.read()[0].to_bool())? p_Val2_7_48_2_fu_21104_p2.read(): p_Val2_14_48_2_fu_21120_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_3_fu_21212_p3() {
    y_V_1_48_3_fu_21212_p3 = (!dneg_48_3_fu_21142_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_3_fu_21142_p2.read()[0].to_bool())? p_Val2_7_48_3_fu_21182_p2.read(): p_Val2_14_48_3_fu_21198_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_4_fu_32654_p3() {
    y_V_1_48_4_fu_32654_p3 = (!dneg_48_4_fu_32612_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_4_fu_32612_p2.read()[0].to_bool())? p_Val2_7_48_4_fu_32628_p2.read(): p_Val2_14_48_4_fu_32641_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_5_fu_32732_p3() {
    y_V_1_48_5_fu_32732_p3 = (!dneg_48_5_fu_32662_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_5_fu_32662_p2.read()[0].to_bool())? p_Val2_7_48_5_fu_32702_p2.read(): p_Val2_14_48_5_fu_32718_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_6_fu_43441_p3() {
    y_V_1_48_6_fu_43441_p3 = (!dneg_48_6_fu_43407_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_6_fu_43407_p2.read()[0].to_bool())? p_Val2_7_48_6_fu_43423_p2.read(): p_Val2_14_48_6_fu_43436_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_48_7_fu_43499_p3() {
    y_V_1_48_7_fu_43499_p3 = (!dneg_48_7_fu_43449_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_48_7_fu_43449_p2.read()[0].to_bool())? p_Val2_7_48_7_fu_43487_p2.read(): p_Val2_14_48_7_fu_43493_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_1_cast_fu_21250_p1() {
    y_V_1_49_1_cast_fu_21250_p1 = esl_sext<15,14>(y_V_1_49_1_fu_21245_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_49_1_fu_21245_p3() {
    y_V_1_49_1_fu_21245_p3 = (!dneg_49_1_reg_59624.read()[0].is_01())? sc_lv<14>(): ((dneg_49_1_reg_59624.read()[0].to_bool())? p_Val2_7_49_1_reg_59636.read(): p_Val2_14_49_1_reg_59646.read());
}

void Sobel_phase_strm::thread_y_V_1_49_2_fu_21328_p3() {
    y_V_1_49_2_fu_21328_p3 = (!dneg_49_2_fu_21254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_2_fu_21254_p2.read()[0].to_bool())? p_Val2_7_49_2_fu_21298_p2.read(): p_Val2_14_49_2_fu_21314_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_3_fu_21406_p3() {
    y_V_1_49_3_fu_21406_p3 = (!dneg_49_3_fu_21336_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_3_fu_21336_p2.read()[0].to_bool())? p_Val2_7_49_3_fu_21376_p2.read(): p_Val2_14_49_3_fu_21392_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_4_fu_32802_p3() {
    y_V_1_49_4_fu_32802_p3 = (!dneg_49_4_fu_32760_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_4_fu_32760_p2.read()[0].to_bool())? p_Val2_7_49_4_fu_32776_p2.read(): p_Val2_14_49_4_fu_32789_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_5_fu_32880_p3() {
    y_V_1_49_5_fu_32880_p3 = (!dneg_49_5_fu_32810_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_5_fu_32810_p2.read()[0].to_bool())? p_Val2_7_49_5_fu_32850_p2.read(): p_Val2_14_49_5_fu_32866_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_6_fu_43594_p3() {
    y_V_1_49_6_fu_43594_p3 = (!dneg_49_6_fu_43560_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_6_fu_43560_p2.read()[0].to_bool())? p_Val2_7_49_6_fu_43576_p2.read(): p_Val2_14_49_6_fu_43589_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_49_7_fu_43652_p3() {
    y_V_1_49_7_fu_43652_p3 = (!dneg_49_7_fu_43602_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_49_7_fu_43602_p2.read()[0].to_bool())? p_Val2_7_49_7_fu_43640_p2.read(): p_Val2_14_49_7_fu_43646_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_1_cast_fu_12520_p1() {
    y_V_1_4_1_cast_fu_12520_p1 = esl_sext<15,14>(y_V_1_4_1_fu_12515_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_4_1_fu_12515_p3() {
    y_V_1_4_1_fu_12515_p3 = (!dneg_4_1_reg_57914.read()[0].is_01())? sc_lv<14>(): ((dneg_4_1_reg_57914.read()[0].to_bool())? p_Val2_7_4_1_reg_57926.read(): p_Val2_14_4_1_reg_57936.read());
}

void Sobel_phase_strm::thread_y_V_1_4_2_fu_12598_p3() {
    y_V_1_4_2_fu_12598_p3 = (!dneg_4_2_fu_12524_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_2_fu_12524_p2.read()[0].to_bool())? p_Val2_7_4_2_fu_12568_p2.read(): p_Val2_14_4_2_fu_12584_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_3_fu_12676_p3() {
    y_V_1_4_3_fu_12676_p3 = (!dneg_4_3_fu_12606_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_3_fu_12606_p2.read()[0].to_bool())? p_Val2_7_4_3_fu_12646_p2.read(): p_Val2_14_4_3_fu_12662_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_4_fu_26142_p3() {
    y_V_1_4_4_fu_26142_p3 = (!dneg_4_4_fu_26100_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_4_fu_26100_p2.read()[0].to_bool())? p_Val2_7_4_4_fu_26116_p2.read(): p_Val2_14_4_4_fu_26129_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_5_fu_26220_p3() {
    y_V_1_4_5_fu_26220_p3 = (!dneg_4_5_fu_26150_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_5_fu_26150_p2.read()[0].to_bool())? p_Val2_7_4_5_fu_26190_p2.read(): p_Val2_14_4_5_fu_26206_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_6_fu_36709_p3() {
    y_V_1_4_6_fu_36709_p3 = (!dneg_4_6_fu_36675_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_6_fu_36675_p2.read()[0].to_bool())? p_Val2_7_4_6_fu_36691_p2.read(): p_Val2_14_4_6_fu_36704_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_7_fu_36767_p3() {
    y_V_1_4_7_fu_36767_p3 = (!dneg_4_7_fu_36717_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_7_fu_36717_p2.read()[0].to_bool())? p_Val2_7_4_7_fu_36755_p2.read(): p_Val2_14_4_7_fu_36761_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_1_cast_fu_21444_p1() {
    y_V_1_50_1_cast_fu_21444_p1 = esl_sext<15,14>(y_V_1_50_1_fu_21439_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_50_1_fu_21439_p3() {
    y_V_1_50_1_fu_21439_p3 = (!dneg_50_1_reg_59662.read()[0].is_01())? sc_lv<14>(): ((dneg_50_1_reg_59662.read()[0].to_bool())? p_Val2_7_50_1_reg_59674.read(): p_Val2_14_50_1_reg_59684.read());
}

void Sobel_phase_strm::thread_y_V_1_50_2_fu_21522_p3() {
    y_V_1_50_2_fu_21522_p3 = (!dneg_50_2_fu_21448_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_2_fu_21448_p2.read()[0].to_bool())? p_Val2_7_50_2_fu_21492_p2.read(): p_Val2_14_50_2_fu_21508_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_3_fu_21600_p3() {
    y_V_1_50_3_fu_21600_p3 = (!dneg_50_3_fu_21530_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_3_fu_21530_p2.read()[0].to_bool())? p_Val2_7_50_3_fu_21570_p2.read(): p_Val2_14_50_3_fu_21586_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_4_fu_32950_p3() {
    y_V_1_50_4_fu_32950_p3 = (!dneg_50_4_fu_32908_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_4_fu_32908_p2.read()[0].to_bool())? p_Val2_7_50_4_fu_32924_p2.read(): p_Val2_14_50_4_fu_32937_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_5_fu_33028_p3() {
    y_V_1_50_5_fu_33028_p3 = (!dneg_50_5_fu_32958_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_5_fu_32958_p2.read()[0].to_bool())? p_Val2_7_50_5_fu_32998_p2.read(): p_Val2_14_50_5_fu_33014_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_6_fu_43747_p3() {
    y_V_1_50_6_fu_43747_p3 = (!dneg_50_6_fu_43713_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_6_fu_43713_p2.read()[0].to_bool())? p_Val2_7_50_6_fu_43729_p2.read(): p_Val2_14_50_6_fu_43742_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_50_7_fu_43805_p3() {
    y_V_1_50_7_fu_43805_p3 = (!dneg_50_7_fu_43755_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_50_7_fu_43755_p2.read()[0].to_bool())? p_Val2_7_50_7_fu_43793_p2.read(): p_Val2_14_50_7_fu_43799_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_1_cast_fu_21638_p1() {
    y_V_1_51_1_cast_fu_21638_p1 = esl_sext<15,14>(y_V_1_51_1_fu_21633_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_51_1_fu_21633_p3() {
    y_V_1_51_1_fu_21633_p3 = (!dneg_51_1_reg_59700.read()[0].is_01())? sc_lv<14>(): ((dneg_51_1_reg_59700.read()[0].to_bool())? p_Val2_7_51_1_reg_59712.read(): p_Val2_14_51_1_reg_59722.read());
}

void Sobel_phase_strm::thread_y_V_1_51_2_fu_21716_p3() {
    y_V_1_51_2_fu_21716_p3 = (!dneg_51_2_fu_21642_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_2_fu_21642_p2.read()[0].to_bool())? p_Val2_7_51_2_fu_21686_p2.read(): p_Val2_14_51_2_fu_21702_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_3_fu_21794_p3() {
    y_V_1_51_3_fu_21794_p3 = (!dneg_51_3_fu_21724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_3_fu_21724_p2.read()[0].to_bool())? p_Val2_7_51_3_fu_21764_p2.read(): p_Val2_14_51_3_fu_21780_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_4_fu_33098_p3() {
    y_V_1_51_4_fu_33098_p3 = (!dneg_51_4_fu_33056_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_4_fu_33056_p2.read()[0].to_bool())? p_Val2_7_51_4_fu_33072_p2.read(): p_Val2_14_51_4_fu_33085_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_5_fu_33176_p3() {
    y_V_1_51_5_fu_33176_p3 = (!dneg_51_5_fu_33106_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_5_fu_33106_p2.read()[0].to_bool())? p_Val2_7_51_5_fu_33146_p2.read(): p_Val2_14_51_5_fu_33162_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_6_fu_43900_p3() {
    y_V_1_51_6_fu_43900_p3 = (!dneg_51_6_fu_43866_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_6_fu_43866_p2.read()[0].to_bool())? p_Val2_7_51_6_fu_43882_p2.read(): p_Val2_14_51_6_fu_43895_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_51_7_fu_43958_p3() {
    y_V_1_51_7_fu_43958_p3 = (!dneg_51_7_fu_43908_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_51_7_fu_43908_p2.read()[0].to_bool())? p_Val2_7_51_7_fu_43946_p2.read(): p_Val2_14_51_7_fu_43952_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_52_1_cast_fu_21832_p1() {
    y_V_1_52_1_cast_fu_21832_p1 = esl_sext<15,14>(y_V_1_52_1_fu_21827_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_52_1_fu_21827_p3() {
    y_V_1_52_1_fu_21827_p3 = (!dneg_52_1_reg_59738.read()[0].is_01())? sc_lv<14>(): ((dneg_52_1_reg_59738.read()[0].to_bool())? p_Val2_7_52_1_reg_59750.read(): p_Val2_14_52_1_reg_59760.read());
}

void Sobel_phase_strm::thread_y_V_1_52_2_fu_21910_p3() {
    y_V_1_52_2_fu_21910_p3 = (!dneg_52_2_fu_21836_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_2_fu_21836_p2.read()[0].to_bool())? p_Val2_7_52_2_fu_21880_p2.read(): p_Val2_14_52_2_fu_21896_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_52_3_fu_21988_p3() {
    y_V_1_52_3_fu_21988_p3 = (!dneg_52_3_fu_21918_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_3_fu_21918_p2.read()[0].to_bool())? p_Val2_7_52_3_fu_21958_p2.read(): p_Val2_14_52_3_fu_21974_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_52_4_fu_33246_p3() {
    y_V_1_52_4_fu_33246_p3 = (!dneg_52_4_fu_33204_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_4_fu_33204_p2.read()[0].to_bool())? p_Val2_7_52_4_fu_33220_p2.read(): p_Val2_14_52_4_fu_33233_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_52_5_fu_33324_p3() {
    y_V_1_52_5_fu_33324_p3 = (!dneg_52_5_fu_33254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_5_fu_33254_p2.read()[0].to_bool())? p_Val2_7_52_5_fu_33294_p2.read(): p_Val2_14_52_5_fu_33310_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_52_6_fu_44053_p3() {
    y_V_1_52_6_fu_44053_p3 = (!dneg_52_6_fu_44019_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_52_6_fu_44019_p2.read()[0].to_bool())? p_Val2_7_52_6_fu_44035_p2.read(): p_Val2_14_52_6_fu_44048_p2.read());
}

}

