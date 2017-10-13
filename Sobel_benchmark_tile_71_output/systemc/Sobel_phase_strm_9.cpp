#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_tmp_27_3_cast_fu_3782_p1() {
    tmp_27_3_cast_fu_3782_p1 = esl_zext<15,14>(tmp_27_3_s_fu_3778_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_3_s_fu_3778_p1() {
    tmp_27_3_s_fu_3778_p1 = esl_sext<14,13>(tmp_63_fu_3768_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_40_1_cast_fu_19528_p1() {
    tmp_27_40_1_cast_fu_19528_p1 = esl_zext<15,14>(tmp_27_40_1_fu_19524_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_40_1_fu_19524_p1() {
    tmp_27_40_1_fu_19524_p1 = esl_sext<14,12>(tmp_806_fu_19514_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_40_2_fu_19596_p4() {
    tmp_27_40_2_fu_19596_p4 = y_V_1_40_2_fu_19582_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_40_4_fu_31484_p4() {
    tmp_27_40_4_fu_31484_p4 = y_V_1_40_4_fu_31470_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_40_cast_fu_8148_p1() {
    tmp_27_40_cast_fu_8148_p1 = esl_zext<15,14>(tmp_27_40_s_fu_8144_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_40_s_fu_8144_p1() {
    tmp_27_40_s_fu_8144_p1 = esl_sext<14,13>(tmp_803_fu_8134_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_41_1_cast_fu_19722_p1() {
    tmp_27_41_1_cast_fu_19722_p1 = esl_zext<15,14>(tmp_27_41_1_fu_19718_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_41_1_fu_19718_p1() {
    tmp_27_41_1_fu_19718_p1 = esl_sext<14,12>(tmp_826_fu_19708_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_41_2_fu_19790_p4() {
    tmp_27_41_2_fu_19790_p4 = y_V_1_41_2_fu_19776_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_41_4_fu_31632_p4() {
    tmp_27_41_4_fu_31632_p4 = y_V_1_41_4_fu_31618_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_41_cast_fu_8266_p1() {
    tmp_27_41_cast_fu_8266_p1 = esl_zext<15,14>(tmp_27_41_s_fu_8262_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_41_s_fu_8262_p1() {
    tmp_27_41_s_fu_8262_p1 = esl_sext<14,13>(tmp_823_fu_8252_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_42_1_cast_fu_19916_p1() {
    tmp_27_42_1_cast_fu_19916_p1 = esl_zext<15,14>(tmp_27_42_1_fu_19912_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_42_1_fu_19912_p1() {
    tmp_27_42_1_fu_19912_p1 = esl_sext<14,12>(tmp_846_fu_19902_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_42_2_fu_19984_p4() {
    tmp_27_42_2_fu_19984_p4 = y_V_1_42_2_fu_19970_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_42_4_fu_31780_p4() {
    tmp_27_42_4_fu_31780_p4 = y_V_1_42_4_fu_31766_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_42_cast_fu_8384_p1() {
    tmp_27_42_cast_fu_8384_p1 = esl_zext<15,14>(tmp_27_42_s_fu_8380_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_42_s_fu_8380_p1() {
    tmp_27_42_s_fu_8380_p1 = esl_sext<14,13>(tmp_843_fu_8370_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_43_1_cast_fu_20110_p1() {
    tmp_27_43_1_cast_fu_20110_p1 = esl_zext<15,14>(tmp_27_43_1_fu_20106_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_43_1_fu_20106_p1() {
    tmp_27_43_1_fu_20106_p1 = esl_sext<14,12>(tmp_866_fu_20096_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_43_2_fu_20178_p4() {
    tmp_27_43_2_fu_20178_p4 = y_V_1_43_2_fu_20164_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_43_4_fu_31928_p4() {
    tmp_27_43_4_fu_31928_p4 = y_V_1_43_4_fu_31914_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_43_cast_fu_8502_p1() {
    tmp_27_43_cast_fu_8502_p1 = esl_zext<15,14>(tmp_27_43_s_fu_8498_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_43_s_fu_8498_p1() {
    tmp_27_43_s_fu_8498_p1 = esl_sext<14,13>(tmp_863_fu_8488_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_44_1_cast_fu_20304_p1() {
    tmp_27_44_1_cast_fu_20304_p1 = esl_zext<15,14>(tmp_27_44_1_fu_20300_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_44_1_fu_20300_p1() {
    tmp_27_44_1_fu_20300_p1 = esl_sext<14,12>(tmp_886_fu_20290_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_44_2_fu_20372_p4() {
    tmp_27_44_2_fu_20372_p4 = y_V_1_44_2_fu_20358_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_44_4_fu_32076_p4() {
    tmp_27_44_4_fu_32076_p4 = y_V_1_44_4_fu_32062_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_44_cast_fu_8620_p1() {
    tmp_27_44_cast_fu_8620_p1 = esl_zext<15,14>(tmp_27_44_s_fu_8616_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_44_s_fu_8616_p1() {
    tmp_27_44_s_fu_8616_p1 = esl_sext<14,13>(tmp_883_fu_8606_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_45_1_cast_fu_20498_p1() {
    tmp_27_45_1_cast_fu_20498_p1 = esl_zext<15,14>(tmp_27_45_1_fu_20494_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_45_1_fu_20494_p1() {
    tmp_27_45_1_fu_20494_p1 = esl_sext<14,12>(tmp_906_fu_20484_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_45_2_fu_20566_p4() {
    tmp_27_45_2_fu_20566_p4 = y_V_1_45_2_fu_20552_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_45_4_fu_32224_p4() {
    tmp_27_45_4_fu_32224_p4 = y_V_1_45_4_fu_32210_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_45_cast_fu_8738_p1() {
    tmp_27_45_cast_fu_8738_p1 = esl_zext<15,14>(tmp_27_45_s_fu_8734_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_45_s_fu_8734_p1() {
    tmp_27_45_s_fu_8734_p1 = esl_sext<14,13>(tmp_903_fu_8724_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_46_1_cast_fu_20692_p1() {
    tmp_27_46_1_cast_fu_20692_p1 = esl_zext<15,14>(tmp_27_46_1_fu_20688_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_46_1_fu_20688_p1() {
    tmp_27_46_1_fu_20688_p1 = esl_sext<14,12>(tmp_926_fu_20678_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_46_2_fu_20760_p4() {
    tmp_27_46_2_fu_20760_p4 = y_V_1_46_2_fu_20746_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_46_4_fu_32372_p4() {
    tmp_27_46_4_fu_32372_p4 = y_V_1_46_4_fu_32358_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_46_cast_fu_8856_p1() {
    tmp_27_46_cast_fu_8856_p1 = esl_zext<15,14>(tmp_27_46_s_fu_8852_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_46_s_fu_8852_p1() {
    tmp_27_46_s_fu_8852_p1 = esl_sext<14,13>(tmp_923_fu_8842_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_47_1_cast_fu_20886_p1() {
    tmp_27_47_1_cast_fu_20886_p1 = esl_zext<15,14>(tmp_27_47_1_fu_20882_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_47_1_fu_20882_p1() {
    tmp_27_47_1_fu_20882_p1 = esl_sext<14,12>(tmp_946_fu_20872_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_47_2_fu_20954_p4() {
    tmp_27_47_2_fu_20954_p4 = y_V_1_47_2_fu_20940_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_47_4_fu_32520_p4() {
    tmp_27_47_4_fu_32520_p4 = y_V_1_47_4_fu_32506_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_47_cast_fu_8974_p1() {
    tmp_27_47_cast_fu_8974_p1 = esl_zext<15,14>(tmp_27_47_s_fu_8970_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_47_s_fu_8970_p1() {
    tmp_27_47_s_fu_8970_p1 = esl_sext<14,13>(tmp_943_fu_8960_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_48_1_cast_fu_21080_p1() {
    tmp_27_48_1_cast_fu_21080_p1 = esl_zext<15,14>(tmp_27_48_1_fu_21076_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_48_1_fu_21076_p1() {
    tmp_27_48_1_fu_21076_p1 = esl_sext<14,12>(tmp_966_fu_21066_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_48_2_fu_21148_p4() {
    tmp_27_48_2_fu_21148_p4 = y_V_1_48_2_fu_21134_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_48_4_fu_32668_p4() {
    tmp_27_48_4_fu_32668_p4 = y_V_1_48_4_fu_32654_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_48_cast_fu_9092_p1() {
    tmp_27_48_cast_fu_9092_p1 = esl_zext<15,14>(tmp_27_48_s_fu_9088_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_48_s_fu_9088_p1() {
    tmp_27_48_s_fu_9088_p1 = esl_sext<14,13>(tmp_963_fu_9078_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_49_1_cast_fu_21274_p1() {
    tmp_27_49_1_cast_fu_21274_p1 = esl_zext<15,14>(tmp_27_49_1_fu_21270_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_49_1_fu_21270_p1() {
    tmp_27_49_1_fu_21270_p1 = esl_sext<14,12>(tmp_986_fu_21260_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_49_2_fu_21342_p4() {
    tmp_27_49_2_fu_21342_p4 = y_V_1_49_2_fu_21328_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_49_4_fu_32816_p4() {
    tmp_27_49_4_fu_32816_p4 = y_V_1_49_4_fu_32802_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_49_cast_fu_9210_p1() {
    tmp_27_49_cast_fu_9210_p1 = esl_zext<15,14>(tmp_27_49_s_fu_9206_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_49_s_fu_9206_p1() {
    tmp_27_49_s_fu_9206_p1 = esl_sext<14,13>(tmp_983_fu_9196_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_4_1_cast_fu_12544_p1() {
    tmp_27_4_1_cast_fu_12544_p1 = esl_zext<15,14>(tmp_27_4_1_fu_12540_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_4_1_fu_12540_p1() {
    tmp_27_4_1_fu_12540_p1 = esl_sext<14,12>(tmp_86_fu_12530_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_4_2_fu_12612_p4() {
    tmp_27_4_2_fu_12612_p4 = y_V_1_4_2_fu_12598_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_4_4_fu_26156_p4() {
    tmp_27_4_4_fu_26156_p4 = y_V_1_4_4_fu_26142_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_4_cast_fu_3900_p1() {
    tmp_27_4_cast_fu_3900_p1 = esl_zext<15,14>(tmp_27_4_s_fu_3896_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_4_s_fu_3896_p1() {
    tmp_27_4_s_fu_3896_p1 = esl_sext<14,13>(tmp_83_fu_3886_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_50_1_cast_fu_21468_p1() {
    tmp_27_50_1_cast_fu_21468_p1 = esl_zext<15,14>(tmp_27_50_1_fu_21464_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_50_1_fu_21464_p1() {
    tmp_27_50_1_fu_21464_p1 = esl_sext<14,12>(tmp_1006_fu_21454_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_50_2_fu_21536_p4() {
    tmp_27_50_2_fu_21536_p4 = y_V_1_50_2_fu_21522_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_50_4_fu_32964_p4() {
    tmp_27_50_4_fu_32964_p4 = y_V_1_50_4_fu_32950_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_50_cast_fu_9328_p1() {
    tmp_27_50_cast_fu_9328_p1 = esl_zext<15,14>(tmp_27_50_s_fu_9324_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_50_s_fu_9324_p1() {
    tmp_27_50_s_fu_9324_p1 = esl_sext<14,13>(tmp_1003_fu_9314_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_51_1_cast_fu_21662_p1() {
    tmp_27_51_1_cast_fu_21662_p1 = esl_zext<15,14>(tmp_27_51_1_fu_21658_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_51_1_fu_21658_p1() {
    tmp_27_51_1_fu_21658_p1 = esl_sext<14,12>(tmp_1026_fu_21648_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_51_2_fu_21730_p4() {
    tmp_27_51_2_fu_21730_p4 = y_V_1_51_2_fu_21716_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_51_4_fu_33112_p4() {
    tmp_27_51_4_fu_33112_p4 = y_V_1_51_4_fu_33098_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_51_cast_fu_9446_p1() {
    tmp_27_51_cast_fu_9446_p1 = esl_zext<15,14>(tmp_27_51_s_fu_9442_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_51_s_fu_9442_p1() {
    tmp_27_51_s_fu_9442_p1 = esl_sext<14,13>(tmp_1023_fu_9432_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_52_1_cast_fu_21856_p1() {
    tmp_27_52_1_cast_fu_21856_p1 = esl_zext<15,14>(tmp_27_52_1_fu_21852_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_52_1_fu_21852_p1() {
    tmp_27_52_1_fu_21852_p1 = esl_sext<14,12>(tmp_1046_fu_21842_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_52_2_fu_21924_p4() {
    tmp_27_52_2_fu_21924_p4 = y_V_1_52_2_fu_21910_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_52_4_fu_33260_p4() {
    tmp_27_52_4_fu_33260_p4 = y_V_1_52_4_fu_33246_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_52_cast_fu_9564_p1() {
    tmp_27_52_cast_fu_9564_p1 = esl_zext<15,14>(tmp_27_52_s_fu_9560_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_52_s_fu_9560_p1() {
    tmp_27_52_s_fu_9560_p1 = esl_sext<14,13>(tmp_1043_fu_9550_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_53_1_cast_fu_22050_p1() {
    tmp_27_53_1_cast_fu_22050_p1 = esl_zext<15,14>(tmp_27_53_1_fu_22046_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_53_1_fu_22046_p1() {
    tmp_27_53_1_fu_22046_p1 = esl_sext<14,12>(tmp_1066_fu_22036_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_53_2_fu_22118_p4() {
    tmp_27_53_2_fu_22118_p4 = y_V_1_53_2_fu_22104_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_53_4_fu_33408_p4() {
    tmp_27_53_4_fu_33408_p4 = y_V_1_53_4_fu_33394_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_53_cast_fu_9682_p1() {
    tmp_27_53_cast_fu_9682_p1 = esl_zext<15,14>(tmp_27_53_s_fu_9678_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_53_s_fu_9678_p1() {
    tmp_27_53_s_fu_9678_p1 = esl_sext<14,13>(tmp_1063_fu_9668_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_54_1_cast_fu_22244_p1() {
    tmp_27_54_1_cast_fu_22244_p1 = esl_zext<15,14>(tmp_27_54_1_fu_22240_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_54_1_fu_22240_p1() {
    tmp_27_54_1_fu_22240_p1 = esl_sext<14,12>(tmp_1086_fu_22230_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_54_2_fu_22312_p4() {
    tmp_27_54_2_fu_22312_p4 = y_V_1_54_2_fu_22298_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_54_4_fu_33556_p4() {
    tmp_27_54_4_fu_33556_p4 = y_V_1_54_4_fu_33542_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_54_cast_fu_9800_p1() {
    tmp_27_54_cast_fu_9800_p1 = esl_zext<15,14>(tmp_27_54_s_fu_9796_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_54_s_fu_9796_p1() {
    tmp_27_54_s_fu_9796_p1 = esl_sext<14,13>(tmp_1083_fu_9786_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_55_1_cast_fu_22438_p1() {
    tmp_27_55_1_cast_fu_22438_p1 = esl_zext<15,14>(tmp_27_55_1_fu_22434_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_55_1_fu_22434_p1() {
    tmp_27_55_1_fu_22434_p1 = esl_sext<14,12>(tmp_1106_fu_22424_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_55_2_fu_22506_p4() {
    tmp_27_55_2_fu_22506_p4 = y_V_1_55_2_fu_22492_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_55_4_fu_33704_p4() {
    tmp_27_55_4_fu_33704_p4 = y_V_1_55_4_fu_33690_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_55_cast_fu_9918_p1() {
    tmp_27_55_cast_fu_9918_p1 = esl_zext<15,14>(tmp_27_55_s_fu_9914_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_55_s_fu_9914_p1() {
    tmp_27_55_s_fu_9914_p1 = esl_sext<14,13>(tmp_1103_fu_9904_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_56_1_cast_fu_22632_p1() {
    tmp_27_56_1_cast_fu_22632_p1 = esl_zext<15,14>(tmp_27_56_1_fu_22628_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_56_1_fu_22628_p1() {
    tmp_27_56_1_fu_22628_p1 = esl_sext<14,12>(tmp_1126_fu_22618_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_56_2_fu_22700_p4() {
    tmp_27_56_2_fu_22700_p4 = y_V_1_56_2_fu_22686_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_56_4_fu_33852_p4() {
    tmp_27_56_4_fu_33852_p4 = y_V_1_56_4_fu_33838_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_56_cast_fu_10036_p1() {
    tmp_27_56_cast_fu_10036_p1 = esl_zext<15,14>(tmp_27_56_s_fu_10032_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_56_s_fu_10032_p1() {
    tmp_27_56_s_fu_10032_p1 = esl_sext<14,13>(tmp_1123_fu_10022_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_57_1_cast_fu_22826_p1() {
    tmp_27_57_1_cast_fu_22826_p1 = esl_zext<15,14>(tmp_27_57_1_fu_22822_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_57_1_fu_22822_p1() {
    tmp_27_57_1_fu_22822_p1 = esl_sext<14,12>(tmp_1146_fu_22812_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_57_2_fu_22894_p4() {
    tmp_27_57_2_fu_22894_p4 = y_V_1_57_2_fu_22880_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_57_4_fu_34000_p4() {
    tmp_27_57_4_fu_34000_p4 = y_V_1_57_4_fu_33986_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_57_cast_fu_10154_p1() {
    tmp_27_57_cast_fu_10154_p1 = esl_zext<15,14>(tmp_27_57_s_fu_10150_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_57_s_fu_10150_p1() {
    tmp_27_57_s_fu_10150_p1 = esl_sext<14,13>(tmp_1143_fu_10140_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_58_1_cast_fu_23020_p1() {
    tmp_27_58_1_cast_fu_23020_p1 = esl_zext<15,14>(tmp_27_58_1_fu_23016_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_58_1_fu_23016_p1() {
    tmp_27_58_1_fu_23016_p1 = esl_sext<14,12>(tmp_1166_fu_23006_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_58_2_fu_23088_p4() {
    tmp_27_58_2_fu_23088_p4 = y_V_1_58_2_fu_23074_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_58_4_fu_34148_p4() {
    tmp_27_58_4_fu_34148_p4 = y_V_1_58_4_fu_34134_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_58_cast_fu_10272_p1() {
    tmp_27_58_cast_fu_10272_p1 = esl_zext<15,14>(tmp_27_58_s_fu_10268_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_58_s_fu_10268_p1() {
    tmp_27_58_s_fu_10268_p1 = esl_sext<14,13>(tmp_1163_fu_10258_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_59_1_cast_fu_23214_p1() {
    tmp_27_59_1_cast_fu_23214_p1 = esl_zext<15,14>(tmp_27_59_1_fu_23210_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_59_1_fu_23210_p1() {
    tmp_27_59_1_fu_23210_p1 = esl_sext<14,12>(tmp_1186_fu_23200_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_59_2_fu_23282_p4() {
    tmp_27_59_2_fu_23282_p4 = y_V_1_59_2_fu_23268_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_59_4_fu_34296_p4() {
    tmp_27_59_4_fu_34296_p4 = y_V_1_59_4_fu_34282_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_59_cast_fu_10390_p1() {
    tmp_27_59_cast_fu_10390_p1 = esl_zext<15,14>(tmp_27_59_s_fu_10386_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_59_s_fu_10386_p1() {
    tmp_27_59_s_fu_10386_p1 = esl_sext<14,13>(tmp_1183_fu_10376_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_5_1_cast_fu_12738_p1() {
    tmp_27_5_1_cast_fu_12738_p1 = esl_zext<15,14>(tmp_27_5_1_fu_12734_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_5_1_fu_12734_p1() {
    tmp_27_5_1_fu_12734_p1 = esl_sext<14,12>(tmp_106_fu_12724_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_5_2_fu_12806_p4() {
    tmp_27_5_2_fu_12806_p4 = y_V_1_5_2_fu_12792_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_5_4_fu_26304_p4() {
    tmp_27_5_4_fu_26304_p4 = y_V_1_5_4_fu_26290_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_5_cast_fu_4018_p1() {
    tmp_27_5_cast_fu_4018_p1 = esl_zext<15,14>(tmp_27_5_s_fu_4014_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_5_s_fu_4014_p1() {
    tmp_27_5_s_fu_4014_p1 = esl_sext<14,13>(tmp_103_fu_4004_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_60_1_cast_fu_23408_p1() {
    tmp_27_60_1_cast_fu_23408_p1 = esl_zext<15,14>(tmp_27_60_1_fu_23404_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_60_1_fu_23404_p1() {
    tmp_27_60_1_fu_23404_p1 = esl_sext<14,12>(tmp_1206_fu_23394_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_60_2_fu_23476_p4() {
    tmp_27_60_2_fu_23476_p4 = y_V_1_60_2_fu_23462_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_60_4_fu_34444_p4() {
    tmp_27_60_4_fu_34444_p4 = y_V_1_60_4_fu_34430_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_60_cast_fu_10508_p1() {
    tmp_27_60_cast_fu_10508_p1 = esl_zext<15,14>(tmp_27_60_s_fu_10504_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_60_s_fu_10504_p1() {
    tmp_27_60_s_fu_10504_p1 = esl_sext<14,13>(tmp_1203_fu_10494_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_61_1_cast_fu_23602_p1() {
    tmp_27_61_1_cast_fu_23602_p1 = esl_zext<15,14>(tmp_27_61_1_fu_23598_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_61_1_fu_23598_p1() {
    tmp_27_61_1_fu_23598_p1 = esl_sext<14,12>(tmp_1226_fu_23588_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_61_2_fu_23670_p4() {
    tmp_27_61_2_fu_23670_p4 = y_V_1_61_2_fu_23656_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_61_4_fu_34592_p4() {
    tmp_27_61_4_fu_34592_p4 = y_V_1_61_4_fu_34578_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_61_cast_fu_10626_p1() {
    tmp_27_61_cast_fu_10626_p1 = esl_zext<15,14>(tmp_27_61_s_fu_10622_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_61_s_fu_10622_p1() {
    tmp_27_61_s_fu_10622_p1 = esl_sext<14,13>(tmp_1223_fu_10612_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_62_1_cast_fu_23796_p1() {
    tmp_27_62_1_cast_fu_23796_p1 = esl_zext<15,14>(tmp_27_62_1_fu_23792_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_62_1_fu_23792_p1() {
    tmp_27_62_1_fu_23792_p1 = esl_sext<14,12>(tmp_1246_fu_23782_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_62_2_fu_23864_p4() {
    tmp_27_62_2_fu_23864_p4 = y_V_1_62_2_fu_23850_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_62_4_fu_34740_p4() {
    tmp_27_62_4_fu_34740_p4 = y_V_1_62_4_fu_34726_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_62_cast_fu_10744_p1() {
    tmp_27_62_cast_fu_10744_p1 = esl_zext<15,14>(tmp_27_62_s_fu_10740_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_62_s_fu_10740_p1() {
    tmp_27_62_s_fu_10740_p1 = esl_sext<14,13>(tmp_1243_fu_10730_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_63_1_cast_fu_23990_p1() {
    tmp_27_63_1_cast_fu_23990_p1 = esl_zext<15,14>(tmp_27_63_1_fu_23986_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_63_1_fu_23986_p1() {
    tmp_27_63_1_fu_23986_p1 = esl_sext<14,12>(tmp_1266_fu_23976_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_63_2_fu_24058_p4() {
    tmp_27_63_2_fu_24058_p4 = y_V_1_63_2_fu_24044_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_63_4_fu_34888_p4() {
    tmp_27_63_4_fu_34888_p4 = y_V_1_63_4_fu_34874_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_63_cast_fu_10862_p1() {
    tmp_27_63_cast_fu_10862_p1 = esl_zext<15,14>(tmp_27_63_s_fu_10858_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_63_s_fu_10858_p1() {
    tmp_27_63_s_fu_10858_p1 = esl_sext<14,13>(tmp_1263_fu_10848_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_64_1_cast_fu_24184_p1() {
    tmp_27_64_1_cast_fu_24184_p1 = esl_zext<15,14>(tmp_27_64_1_fu_24180_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_64_1_fu_24180_p1() {
    tmp_27_64_1_fu_24180_p1 = esl_sext<14,12>(tmp_1286_fu_24170_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_64_2_fu_24252_p4() {
    tmp_27_64_2_fu_24252_p4 = y_V_1_64_2_fu_24238_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_64_4_fu_35036_p4() {
    tmp_27_64_4_fu_35036_p4 = y_V_1_64_4_fu_35022_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_64_cast_fu_10980_p1() {
    tmp_27_64_cast_fu_10980_p1 = esl_zext<15,14>(tmp_27_64_s_fu_10976_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_64_s_fu_10976_p1() {
    tmp_27_64_s_fu_10976_p1 = esl_sext<14,13>(tmp_1283_fu_10966_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_65_1_cast_fu_24378_p1() {
    tmp_27_65_1_cast_fu_24378_p1 = esl_zext<15,14>(tmp_27_65_1_fu_24374_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_65_1_fu_24374_p1() {
    tmp_27_65_1_fu_24374_p1 = esl_sext<14,12>(tmp_1306_fu_24364_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_65_2_fu_24446_p4() {
    tmp_27_65_2_fu_24446_p4 = y_V_1_65_2_fu_24432_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_65_4_fu_35184_p4() {
    tmp_27_65_4_fu_35184_p4 = y_V_1_65_4_fu_35170_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_65_cast_fu_11098_p1() {
    tmp_27_65_cast_fu_11098_p1 = esl_zext<15,14>(tmp_27_65_s_fu_11094_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_65_s_fu_11094_p1() {
    tmp_27_65_s_fu_11094_p1 = esl_sext<14,13>(tmp_1303_fu_11084_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_66_1_cast_fu_24572_p1() {
    tmp_27_66_1_cast_fu_24572_p1 = esl_zext<15,14>(tmp_27_66_1_fu_24568_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_66_1_fu_24568_p1() {
    tmp_27_66_1_fu_24568_p1 = esl_sext<14,12>(tmp_1326_fu_24558_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_66_2_fu_24640_p4() {
    tmp_27_66_2_fu_24640_p4 = y_V_1_66_2_fu_24626_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_66_4_fu_35332_p4() {
    tmp_27_66_4_fu_35332_p4 = y_V_1_66_4_fu_35318_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_66_cast_fu_11216_p1() {
    tmp_27_66_cast_fu_11216_p1 = esl_zext<15,14>(tmp_27_66_s_fu_11212_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_66_s_fu_11212_p1() {
    tmp_27_66_s_fu_11212_p1 = esl_sext<14,13>(tmp_1323_fu_11202_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_67_1_cast_fu_24766_p1() {
    tmp_27_67_1_cast_fu_24766_p1 = esl_zext<15,14>(tmp_27_67_1_fu_24762_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_67_1_fu_24762_p1() {
    tmp_27_67_1_fu_24762_p1 = esl_sext<14,12>(tmp_1346_fu_24752_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_67_2_fu_24834_p4() {
    tmp_27_67_2_fu_24834_p4 = y_V_1_67_2_fu_24820_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_67_4_fu_35480_p4() {
    tmp_27_67_4_fu_35480_p4 = y_V_1_67_4_fu_35466_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_67_cast_fu_11334_p1() {
    tmp_27_67_cast_fu_11334_p1 = esl_zext<15,14>(tmp_27_67_s_fu_11330_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_67_s_fu_11330_p1() {
    tmp_27_67_s_fu_11330_p1 = esl_sext<14,13>(tmp_1343_fu_11320_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_68_1_cast_fu_24960_p1() {
    tmp_27_68_1_cast_fu_24960_p1 = esl_zext<15,14>(tmp_27_68_1_fu_24956_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_68_1_fu_24956_p1() {
    tmp_27_68_1_fu_24956_p1 = esl_sext<14,12>(tmp_1366_fu_24946_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_68_2_fu_25028_p4() {
    tmp_27_68_2_fu_25028_p4 = y_V_1_68_2_fu_25014_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_68_4_fu_35628_p4() {
    tmp_27_68_4_fu_35628_p4 = y_V_1_68_4_fu_35614_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_68_cast_fu_11452_p1() {
    tmp_27_68_cast_fu_11452_p1 = esl_zext<15,14>(tmp_27_68_s_fu_11448_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_68_s_fu_11448_p1() {
    tmp_27_68_s_fu_11448_p1 = esl_sext<14,13>(tmp_1363_fu_11438_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_69_1_cast_fu_25154_p1() {
    tmp_27_69_1_cast_fu_25154_p1 = esl_zext<15,14>(tmp_27_69_1_fu_25150_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_69_1_fu_25150_p1() {
    tmp_27_69_1_fu_25150_p1 = esl_sext<14,12>(tmp_1386_fu_25140_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_69_2_fu_25222_p4() {
    tmp_27_69_2_fu_25222_p4 = y_V_1_69_2_fu_25208_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_69_4_fu_35776_p4() {
    tmp_27_69_4_fu_35776_p4 = y_V_1_69_4_fu_35762_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_69_cast_fu_11570_p1() {
    tmp_27_69_cast_fu_11570_p1 = esl_zext<15,14>(tmp_27_69_s_fu_11566_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_69_s_fu_11566_p1() {
    tmp_27_69_s_fu_11566_p1 = esl_sext<14,13>(tmp_1383_fu_11556_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_6_1_cast_fu_12932_p1() {
    tmp_27_6_1_cast_fu_12932_p1 = esl_zext<15,14>(tmp_27_6_1_fu_12928_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_6_1_fu_12928_p1() {
    tmp_27_6_1_fu_12928_p1 = esl_sext<14,12>(tmp_126_fu_12918_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_6_2_fu_13000_p4() {
    tmp_27_6_2_fu_13000_p4 = y_V_1_6_2_fu_12986_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_6_4_fu_26452_p4() {
    tmp_27_6_4_fu_26452_p4 = y_V_1_6_4_fu_26438_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_6_cast_fu_4136_p1() {
    tmp_27_6_cast_fu_4136_p1 = esl_zext<15,14>(tmp_27_6_s_fu_4132_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_6_s_fu_4132_p1() {
    tmp_27_6_s_fu_4132_p1 = esl_sext<14,13>(tmp_123_fu_4122_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_70_1_cast_fu_25348_p1() {
    tmp_27_70_1_cast_fu_25348_p1 = esl_zext<15,14>(tmp_27_70_1_fu_25344_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_70_1_fu_25344_p1() {
    tmp_27_70_1_fu_25344_p1 = esl_sext<14,12>(tmp_1406_fu_25334_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_70_2_fu_25416_p4() {
    tmp_27_70_2_fu_25416_p4 = y_V_1_70_2_fu_25402_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_70_4_fu_35924_p4() {
    tmp_27_70_4_fu_35924_p4 = y_V_1_70_4_fu_35910_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_70_cast_fu_11688_p1() {
    tmp_27_70_cast_fu_11688_p1 = esl_zext<15,14>(tmp_27_70_s_fu_11684_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_70_s_fu_11684_p1() {
    tmp_27_70_s_fu_11684_p1 = esl_sext<14,13>(tmp_1403_fu_11674_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_7_1_cast_fu_13126_p1() {
    tmp_27_7_1_cast_fu_13126_p1 = esl_zext<15,14>(tmp_27_7_1_fu_13122_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_7_1_fu_13122_p1() {
    tmp_27_7_1_fu_13122_p1 = esl_sext<14,12>(tmp_146_fu_13112_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_7_2_fu_13194_p4() {
    tmp_27_7_2_fu_13194_p4 = y_V_1_7_2_fu_13180_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_7_4_fu_26600_p4() {
    tmp_27_7_4_fu_26600_p4 = y_V_1_7_4_fu_26586_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_7_cast_fu_4254_p1() {
    tmp_27_7_cast_fu_4254_p1 = esl_zext<15,14>(tmp_27_7_s_fu_4250_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_7_s_fu_4250_p1() {
    tmp_27_7_s_fu_4250_p1 = esl_sext<14,13>(tmp_143_fu_4240_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_8_1_cast_fu_13320_p1() {
    tmp_27_8_1_cast_fu_13320_p1 = esl_zext<15,14>(tmp_27_8_1_fu_13316_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_8_1_fu_13316_p1() {
    tmp_27_8_1_fu_13316_p1 = esl_sext<14,12>(tmp_166_fu_13306_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_8_2_fu_13388_p4() {
    tmp_27_8_2_fu_13388_p4 = y_V_1_8_2_fu_13374_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_8_4_fu_26748_p4() {
    tmp_27_8_4_fu_26748_p4 = y_V_1_8_4_fu_26734_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_8_cast_fu_4372_p1() {
    tmp_27_8_cast_fu_4372_p1 = esl_zext<15,14>(tmp_27_8_s_fu_4368_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_8_s_fu_4368_p1() {
    tmp_27_8_s_fu_4368_p1 = esl_sext<14,13>(tmp_163_fu_4358_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_9_1_cast_fu_13514_p1() {
    tmp_27_9_1_cast_fu_13514_p1 = esl_zext<15,14>(tmp_27_9_1_fu_13510_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_9_1_fu_13510_p1() {
    tmp_27_9_1_fu_13510_p1 = esl_sext<14,12>(tmp_186_fu_13500_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_9_2_fu_13582_p4() {
    tmp_27_9_2_fu_13582_p4 = y_V_1_9_2_fu_13568_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_27_9_4_fu_26896_p4() {
    tmp_27_9_4_fu_26896_p4 = y_V_1_9_4_fu_26882_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_27_9_cast_fu_4490_p1() {
    tmp_27_9_cast_fu_4490_p1 = esl_zext<15,14>(tmp_27_9_s_fu_4486_p1.read());
}

void Sobel_phase_strm::thread_tmp_27_9_s_fu_4486_p1() {
    tmp_27_9_s_fu_4486_p1 = esl_sext<14,13>(tmp_183_fu_4476_p4.read());
}

void Sobel_phase_strm::thread_tmp_27_fu_11972_p4() {
    tmp_27_fu_11972_p4 = x_V_1_1_1_fu_11928_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_281_fu_56234_p3() {
    tmp_281_fu_56234_p3 = p_Val2_19_12_reg_66918.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_282_fu_48647_p1() {
    tmp_282_fu_48647_p1 = p_Val2_19_12_fu_48629_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_283_fu_5066_p4() {
    tmp_283_fu_5066_p4 = p_Val2_7_13_fu_5054_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_284_fu_5090_p4() {
    tmp_284_fu_5090_p4 = p_Val2_4_13_fu_5044_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_285_fu_5100_p1() {
    tmp_285_fu_5100_p1 = esl_zext<14,13>(tmp_284_fu_5090_p4.read());
}

void Sobel_phase_strm::thread_tmp_286_fu_14470_p4() {
    tmp_286_fu_14470_p4 = y_V_1_14_1_fu_14455_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_287_fu_14494_p4() {
    tmp_287_fu_14494_p4 = x_V_1_14_1_fu_14450_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_288_fu_14562_p1() {
    tmp_288_fu_14562_p1 = esl_zext<15,12>(tmp_27_14_2_fu_14552_p4.read());
}

void Sobel_phase_strm::thread_tmp_289_fu_14572_p4() {
    tmp_289_fu_14572_p4 = x_V_1_14_2_fu_14530_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_28_fu_12040_p1() {
    tmp_28_fu_12040_p1 = esl_zext<15,12>(tmp_27_1_2_fu_12030_p4.read());
}

void Sobel_phase_strm::thread_tmp_290_fu_27585_p1() {
    tmp_290_fu_27585_p1 = esl_zext<15,11>(tmp_27_14_3_reg_60948.read());
}

void Sobel_phase_strm::thread_tmp_292_fu_27646_p1() {
    tmp_292_fu_27646_p1 = esl_zext<15,10>(tmp_27_14_4_fu_27636_p4.read());
}

void Sobel_phase_strm::thread_tmp_293_fu_27656_p4() {
    tmp_293_fu_27656_p4 = x_V_1_14_4_fu_27614_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_294_fu_38210_p1() {
    tmp_294_fu_38210_p1 = esl_zext<15,9>(tmp_27_14_5_reg_63362.read());
}

void Sobel_phase_strm::thread_tmp_296_fu_38253_p4() {
    tmp_296_fu_38253_p4 = p_Val2_4_14_6_fu_38213_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_297_fu_38263_p4() {
    tmp_297_fu_38263_p4 = p_Val2_12_14_6_fu_38229_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_298_fu_38273_p3() {
    tmp_298_fu_38273_p3 = (!dneg_14_6_fu_38205_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_14_6_fu_38205_p2.read()[0].to_bool())? tmp_296_fu_38253_p4.read(): tmp_297_fu_38263_p4.read());
}

void Sobel_phase_strm::thread_tmp_299_fu_48751_p2() {
    tmp_299_fu_48751_p2 = (sel_tmp29_fu_48738_p2.read() | ap_reg_ppstg_tmp_19_13_reg_58283_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_29_fu_12050_p4() {
    tmp_29_fu_12050_p4 = x_V_1_1_2_fu_12008_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_2_fu_3438_p4() {
    tmp_2_fu_3438_p4 = p_Val2_4_fu_3392_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_301_fu_56260_p3() {
    tmp_301_fu_56260_p3 = p_Val2_19_13_reg_66935.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_302_fu_48774_p1() {
    tmp_302_fu_48774_p1 = p_Val2_19_13_fu_48756_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_303_fu_5184_p4() {
    tmp_303_fu_5184_p4 = p_Val2_7_14_fu_5172_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_304_fu_5208_p4() {
    tmp_304_fu_5208_p4 = p_Val2_4_14_fu_5162_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_305_fu_5218_p1() {
    tmp_305_fu_5218_p1 = esl_zext<14,13>(tmp_304_fu_5208_p4.read());
}

void Sobel_phase_strm::thread_tmp_306_fu_14664_p4() {
    tmp_306_fu_14664_p4 = y_V_1_15_1_fu_14649_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_307_fu_14688_p4() {
    tmp_307_fu_14688_p4 = x_V_1_15_1_fu_14644_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_308_fu_14756_p1() {
    tmp_308_fu_14756_p1 = esl_zext<15,12>(tmp_27_15_2_fu_14746_p4.read());
}

void Sobel_phase_strm::thread_tmp_309_fu_14766_p4() {
    tmp_309_fu_14766_p4 = x_V_1_15_2_fu_14724_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_30_fu_25661_p1() {
    tmp_30_fu_25661_p1 = esl_zext<15,11>(tmp_27_1_3_reg_60506.read());
}

void Sobel_phase_strm::thread_tmp_310_fu_27733_p1() {
    tmp_310_fu_27733_p1 = esl_zext<15,11>(tmp_27_15_3_reg_60982.read());
}

void Sobel_phase_strm::thread_tmp_312_fu_27794_p1() {
    tmp_312_fu_27794_p1 = esl_zext<15,10>(tmp_27_15_4_fu_27784_p4.read());
}

void Sobel_phase_strm::thread_tmp_313_fu_27804_p4() {
    tmp_313_fu_27804_p4 = x_V_1_15_4_fu_27762_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_314_fu_38363_p1() {
    tmp_314_fu_38363_p1 = esl_zext<15,9>(tmp_27_15_5_reg_63396.read());
}

void Sobel_phase_strm::thread_tmp_316_fu_38406_p4() {
    tmp_316_fu_38406_p4 = p_Val2_4_15_6_fu_38366_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_317_fu_38416_p4() {
    tmp_317_fu_38416_p4 = p_Val2_12_15_6_fu_38382_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_318_fu_38426_p3() {
    tmp_318_fu_38426_p3 = (!dneg_15_6_fu_38358_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_15_6_fu_38358_p2.read()[0].to_bool())? tmp_316_fu_38406_p4.read(): tmp_317_fu_38416_p4.read());
}

void Sobel_phase_strm::thread_tmp_319_fu_48878_p2() {
    tmp_319_fu_48878_p2 = (sel_tmp31_fu_48865_p2.read() | ap_reg_ppstg_tmp_19_14_reg_58321_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_321_fu_56286_p3() {
    tmp_321_fu_56286_p3 = p_Val2_19_14_reg_66952.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_322_fu_48901_p1() {
    tmp_322_fu_48901_p1 = p_Val2_19_14_fu_48883_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_323_fu_5302_p4() {
    tmp_323_fu_5302_p4 = p_Val2_7_15_fu_5290_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_324_fu_5326_p4() {
    tmp_324_fu_5326_p4 = p_Val2_4_15_fu_5280_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_325_fu_5336_p1() {
    tmp_325_fu_5336_p1 = esl_zext<14,13>(tmp_324_fu_5326_p4.read());
}

void Sobel_phase_strm::thread_tmp_326_fu_14858_p4() {
    tmp_326_fu_14858_p4 = y_V_1_16_1_fu_14843_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_327_fu_14882_p4() {
    tmp_327_fu_14882_p4 = x_V_1_16_1_fu_14838_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_328_fu_14950_p1() {
    tmp_328_fu_14950_p1 = esl_zext<15,12>(tmp_27_16_2_fu_14940_p4.read());
}

void Sobel_phase_strm::thread_tmp_329_fu_14960_p4() {
    tmp_329_fu_14960_p4 = x_V_1_16_2_fu_14918_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_32_fu_25722_p1() {
    tmp_32_fu_25722_p1 = esl_zext<15,10>(tmp_27_1_4_fu_25712_p4.read());
}

void Sobel_phase_strm::thread_tmp_330_fu_27881_p1() {
    tmp_330_fu_27881_p1 = esl_zext<15,11>(tmp_27_16_3_reg_61016.read());
}

void Sobel_phase_strm::thread_tmp_332_fu_27942_p1() {
    tmp_332_fu_27942_p1 = esl_zext<15,10>(tmp_27_16_4_fu_27932_p4.read());
}

void Sobel_phase_strm::thread_tmp_333_fu_27952_p4() {
    tmp_333_fu_27952_p4 = x_V_1_16_4_fu_27910_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_334_fu_38516_p1() {
    tmp_334_fu_38516_p1 = esl_zext<15,9>(tmp_27_16_5_reg_63430.read());
}

void Sobel_phase_strm::thread_tmp_336_fu_38559_p4() {
    tmp_336_fu_38559_p4 = p_Val2_4_16_6_fu_38519_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_337_fu_38569_p4() {
    tmp_337_fu_38569_p4 = p_Val2_12_16_6_fu_38535_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_338_fu_38579_p3() {
    tmp_338_fu_38579_p3 = (!dneg_16_6_fu_38511_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_16_6_fu_38511_p2.read()[0].to_bool())? tmp_336_fu_38559_p4.read(): tmp_337_fu_38569_p4.read());
}

void Sobel_phase_strm::thread_tmp_339_fu_49005_p2() {
    tmp_339_fu_49005_p2 = (sel_tmp33_fu_48992_p2.read() | ap_reg_ppstg_tmp_19_15_reg_58359_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_33_fu_25732_p4() {
    tmp_33_fu_25732_p4 = x_V_1_1_4_fu_25690_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_341_fu_56312_p3() {
    tmp_341_fu_56312_p3 = p_Val2_19_15_reg_66969.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_342_fu_49028_p1() {
    tmp_342_fu_49028_p1 = p_Val2_19_15_fu_49010_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_343_fu_5420_p4() {
    tmp_343_fu_5420_p4 = p_Val2_7_16_fu_5408_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_344_fu_5444_p4() {
    tmp_344_fu_5444_p4 = p_Val2_4_16_fu_5398_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_345_fu_5454_p1() {
    tmp_345_fu_5454_p1 = esl_zext<14,13>(tmp_344_fu_5444_p4.read());
}

void Sobel_phase_strm::thread_tmp_346_fu_15052_p4() {
    tmp_346_fu_15052_p4 = y_V_1_17_1_fu_15037_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_347_fu_15076_p4() {
    tmp_347_fu_15076_p4 = x_V_1_17_1_fu_15032_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_348_fu_15144_p1() {
    tmp_348_fu_15144_p1 = esl_zext<15,12>(tmp_27_17_2_fu_15134_p4.read());
}

void Sobel_phase_strm::thread_tmp_349_fu_15154_p4() {
    tmp_349_fu_15154_p4 = x_V_1_17_2_fu_15112_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_34_fu_36221_p1() {
    tmp_34_fu_36221_p1 = esl_zext<15,9>(tmp_27_1_5_reg_62920.read());
}

void Sobel_phase_strm::thread_tmp_350_fu_28029_p1() {
    tmp_350_fu_28029_p1 = esl_zext<15,11>(tmp_27_17_3_reg_61050.read());
}

void Sobel_phase_strm::thread_tmp_352_fu_28090_p1() {
    tmp_352_fu_28090_p1 = esl_zext<15,10>(tmp_27_17_4_fu_28080_p4.read());
}

void Sobel_phase_strm::thread_tmp_353_fu_28100_p4() {
    tmp_353_fu_28100_p4 = x_V_1_17_4_fu_28058_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_354_fu_38669_p1() {
    tmp_354_fu_38669_p1 = esl_zext<15,9>(tmp_27_17_5_reg_63464.read());
}

void Sobel_phase_strm::thread_tmp_356_fu_38712_p4() {
    tmp_356_fu_38712_p4 = p_Val2_4_17_6_fu_38672_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_357_fu_38722_p4() {
    tmp_357_fu_38722_p4 = p_Val2_12_17_6_fu_38688_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_358_fu_38732_p3() {
    tmp_358_fu_38732_p3 = (!dneg_17_6_fu_38664_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_17_6_fu_38664_p2.read()[0].to_bool())? tmp_356_fu_38712_p4.read(): tmp_357_fu_38722_p4.read());
}

void Sobel_phase_strm::thread_tmp_359_fu_49132_p2() {
    tmp_359_fu_49132_p2 = (sel_tmp35_fu_49119_p2.read() | ap_reg_ppstg_tmp_19_16_reg_58397_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_361_fu_56338_p3() {
    tmp_361_fu_56338_p3 = p_Val2_19_16_reg_66986.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_362_fu_49155_p1() {
    tmp_362_fu_49155_p1 = p_Val2_19_16_fu_49137_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_363_fu_5538_p4() {
    tmp_363_fu_5538_p4 = p_Val2_7_17_fu_5526_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_364_fu_5562_p4() {
    tmp_364_fu_5562_p4 = p_Val2_4_17_fu_5516_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_365_fu_5572_p1() {
    tmp_365_fu_5572_p1 = esl_zext<14,13>(tmp_364_fu_5562_p4.read());
}

void Sobel_phase_strm::thread_tmp_366_fu_15246_p4() {
    tmp_366_fu_15246_p4 = y_V_1_18_1_fu_15231_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_367_fu_15270_p4() {
    tmp_367_fu_15270_p4 = x_V_1_18_1_fu_15226_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_368_fu_15338_p1() {
    tmp_368_fu_15338_p1 = esl_zext<15,12>(tmp_27_18_2_fu_15328_p4.read());
}

void Sobel_phase_strm::thread_tmp_369_fu_15348_p4() {
    tmp_369_fu_15348_p4 = x_V_1_18_2_fu_15306_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_36_fu_36264_p4() {
    tmp_36_fu_36264_p4 = p_Val2_4_1_6_fu_36224_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_370_fu_28177_p1() {
    tmp_370_fu_28177_p1 = esl_zext<15,11>(tmp_27_18_3_reg_61084.read());
}

void Sobel_phase_strm::thread_tmp_372_fu_28238_p1() {
    tmp_372_fu_28238_p1 = esl_zext<15,10>(tmp_27_18_4_fu_28228_p4.read());
}

void Sobel_phase_strm::thread_tmp_373_fu_28248_p4() {
    tmp_373_fu_28248_p4 = x_V_1_18_4_fu_28206_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_374_fu_38822_p1() {
    tmp_374_fu_38822_p1 = esl_zext<15,9>(tmp_27_18_5_reg_63498.read());
}

void Sobel_phase_strm::thread_tmp_376_fu_38865_p4() {
    tmp_376_fu_38865_p4 = p_Val2_4_18_6_fu_38825_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_377_fu_38875_p4() {
    tmp_377_fu_38875_p4 = p_Val2_12_18_6_fu_38841_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_378_fu_38885_p3() {
    tmp_378_fu_38885_p3 = (!dneg_18_6_fu_38817_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_18_6_fu_38817_p2.read()[0].to_bool())? tmp_376_fu_38865_p4.read(): tmp_377_fu_38875_p4.read());
}

void Sobel_phase_strm::thread_tmp_379_fu_49259_p2() {
    tmp_379_fu_49259_p2 = (sel_tmp37_fu_49246_p2.read() | ap_reg_ppstg_tmp_19_17_reg_58435_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_37_fu_36274_p4() {
    tmp_37_fu_36274_p4 = p_Val2_12_1_6_fu_36240_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_381_fu_56364_p3() {
    tmp_381_fu_56364_p3 = p_Val2_19_17_reg_67003.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_382_fu_49282_p1() {
    tmp_382_fu_49282_p1 = p_Val2_19_17_fu_49264_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_383_fu_5656_p4() {
    tmp_383_fu_5656_p4 = p_Val2_7_18_fu_5644_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_384_fu_5680_p4() {
    tmp_384_fu_5680_p4 = p_Val2_4_18_fu_5634_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_385_fu_5690_p1() {
    tmp_385_fu_5690_p1 = esl_zext<14,13>(tmp_384_fu_5680_p4.read());
}

void Sobel_phase_strm::thread_tmp_386_fu_15440_p4() {
    tmp_386_fu_15440_p4 = y_V_1_19_1_fu_15425_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_387_fu_15464_p4() {
    tmp_387_fu_15464_p4 = x_V_1_19_1_fu_15420_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_388_fu_15532_p1() {
    tmp_388_fu_15532_p1 = esl_zext<15,12>(tmp_27_19_2_fu_15522_p4.read());
}

void Sobel_phase_strm::thread_tmp_389_fu_15542_p4() {
    tmp_389_fu_15542_p4 = x_V_1_19_2_fu_15500_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_38_fu_36284_p3() {
    tmp_38_fu_36284_p3 = (!dneg_1_6_fu_36216_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_1_6_fu_36216_p2.read()[0].to_bool())? tmp_36_fu_36264_p4.read(): tmp_37_fu_36274_p4.read());
}

void Sobel_phase_strm::thread_tmp_390_fu_28325_p1() {
    tmp_390_fu_28325_p1 = esl_zext<15,11>(tmp_27_19_3_reg_61118.read());
}

void Sobel_phase_strm::thread_tmp_392_fu_28386_p1() {
    tmp_392_fu_28386_p1 = esl_zext<15,10>(tmp_27_19_4_fu_28376_p4.read());
}

void Sobel_phase_strm::thread_tmp_393_fu_28396_p4() {
    tmp_393_fu_28396_p4 = x_V_1_19_4_fu_28354_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_394_fu_38975_p1() {
    tmp_394_fu_38975_p1 = esl_zext<15,9>(tmp_27_19_5_reg_63532.read());
}

void Sobel_phase_strm::thread_tmp_396_fu_39018_p4() {
    tmp_396_fu_39018_p4 = p_Val2_4_19_6_fu_38978_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_397_fu_39028_p4() {
    tmp_397_fu_39028_p4 = p_Val2_12_19_6_fu_38994_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_398_fu_39038_p3() {
    tmp_398_fu_39038_p3 = (!dneg_19_6_fu_38970_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_19_6_fu_38970_p2.read()[0].to_bool())? tmp_396_fu_39018_p4.read(): tmp_397_fu_39028_p4.read());
}

void Sobel_phase_strm::thread_tmp_399_fu_49386_p2() {
    tmp_399_fu_49386_p2 = (sel_tmp39_fu_49373_p2.read() | ap_reg_ppstg_tmp_19_18_reg_58473_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_39_fu_47100_p2() {
    tmp_39_fu_47100_p2 = (sel_tmp4_fu_47087_p2.read() | ap_reg_ppstg_tmp_19_1_reg_57789_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_3_fu_3448_p1() {
    tmp_3_fu_3448_p1 = esl_zext<14,13>(tmp_2_fu_3438_p4.read());
}

void Sobel_phase_strm::thread_tmp_401_fu_56390_p3() {
    tmp_401_fu_56390_p3 = p_Val2_19_18_reg_67020.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_402_fu_49409_p1() {
    tmp_402_fu_49409_p1 = p_Val2_19_18_fu_49391_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_403_fu_5774_p4() {
    tmp_403_fu_5774_p4 = p_Val2_7_19_fu_5762_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_404_fu_5798_p4() {
    tmp_404_fu_5798_p4 = p_Val2_4_19_fu_5752_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_405_fu_5808_p1() {
    tmp_405_fu_5808_p1 = esl_zext<14,13>(tmp_404_fu_5798_p4.read());
}

void Sobel_phase_strm::thread_tmp_406_fu_15634_p4() {
    tmp_406_fu_15634_p4 = y_V_1_20_1_fu_15619_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_407_fu_15658_p4() {
    tmp_407_fu_15658_p4 = x_V_1_20_1_fu_15614_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_408_fu_15726_p1() {
    tmp_408_fu_15726_p1 = esl_zext<15,12>(tmp_27_20_2_fu_15716_p4.read());
}

void Sobel_phase_strm::thread_tmp_409_fu_15736_p4() {
    tmp_409_fu_15736_p4 = x_V_1_20_2_fu_15694_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_410_fu_28473_p1() {
    tmp_410_fu_28473_p1 = esl_zext<15,11>(tmp_27_20_3_reg_61152.read());
}

void Sobel_phase_strm::thread_tmp_412_fu_28534_p1() {
    tmp_412_fu_28534_p1 = esl_zext<15,10>(tmp_27_20_4_fu_28524_p4.read());
}

void Sobel_phase_strm::thread_tmp_413_fu_28544_p4() {
    tmp_413_fu_28544_p4 = x_V_1_20_4_fu_28502_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_414_fu_39128_p1() {
    tmp_414_fu_39128_p1 = esl_zext<15,9>(tmp_27_20_5_reg_63566.read());
}

void Sobel_phase_strm::thread_tmp_416_fu_39171_p4() {
    tmp_416_fu_39171_p4 = p_Val2_4_20_6_fu_39131_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_417_fu_39181_p4() {
    tmp_417_fu_39181_p4 = p_Val2_12_20_6_fu_39147_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_418_fu_39191_p3() {
    tmp_418_fu_39191_p3 = (!dneg_20_6_fu_39123_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_20_6_fu_39123_p2.read()[0].to_bool())? tmp_416_fu_39171_p4.read(): tmp_417_fu_39181_p4.read());
}

void Sobel_phase_strm::thread_tmp_419_fu_49513_p2() {
    tmp_419_fu_49513_p2 = (sel_tmp41_fu_49500_p2.read() | ap_reg_ppstg_tmp_19_19_reg_58511_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_41_fu_55922_p3() {
    tmp_41_fu_55922_p3 = p_Val2_19_1_reg_66714.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_421_fu_56416_p3() {
    tmp_421_fu_56416_p3 = p_Val2_19_19_reg_67037.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_422_fu_49536_p1() {
    tmp_422_fu_49536_p1 = p_Val2_19_19_fu_49518_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_423_fu_5892_p4() {
    tmp_423_fu_5892_p4 = p_Val2_7_20_fu_5880_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_424_fu_5916_p4() {
    tmp_424_fu_5916_p4 = p_Val2_4_20_fu_5870_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_425_fu_5926_p1() {
    tmp_425_fu_5926_p1 = esl_zext<14,13>(tmp_424_fu_5916_p4.read());
}

void Sobel_phase_strm::thread_tmp_426_fu_15828_p4() {
    tmp_426_fu_15828_p4 = y_V_1_21_1_fu_15813_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_427_fu_15852_p4() {
    tmp_427_fu_15852_p4 = x_V_1_21_1_fu_15808_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_428_fu_15920_p1() {
    tmp_428_fu_15920_p1 = esl_zext<15,12>(tmp_27_21_2_fu_15910_p4.read());
}

void Sobel_phase_strm::thread_tmp_429_fu_15930_p4() {
    tmp_429_fu_15930_p4 = x_V_1_21_2_fu_15888_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_42_fu_47123_p1() {
    tmp_42_fu_47123_p1 = p_Val2_19_1_fu_47105_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_430_fu_28621_p1() {
    tmp_430_fu_28621_p1 = esl_zext<15,11>(tmp_27_21_3_reg_61186.read());
}

void Sobel_phase_strm::thread_tmp_432_fu_28682_p1() {
    tmp_432_fu_28682_p1 = esl_zext<15,10>(tmp_27_21_4_fu_28672_p4.read());
}

void Sobel_phase_strm::thread_tmp_433_fu_28692_p4() {
    tmp_433_fu_28692_p4 = x_V_1_21_4_fu_28650_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_434_fu_39281_p1() {
    tmp_434_fu_39281_p1 = esl_zext<15,9>(tmp_27_21_5_reg_63600.read());
}

void Sobel_phase_strm::thread_tmp_436_fu_39324_p4() {
    tmp_436_fu_39324_p4 = p_Val2_4_21_6_fu_39284_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_437_fu_39334_p4() {
    tmp_437_fu_39334_p4 = p_Val2_12_21_6_fu_39300_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_438_fu_39344_p3() {
    tmp_438_fu_39344_p3 = (!dneg_21_6_fu_39276_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_21_6_fu_39276_p2.read()[0].to_bool())? tmp_436_fu_39324_p4.read(): tmp_437_fu_39334_p4.read());
}

void Sobel_phase_strm::thread_tmp_439_fu_49640_p2() {
    tmp_439_fu_49640_p2 = (sel_tmp43_fu_49627_p2.read() | ap_reg_ppstg_tmp_19_20_reg_58549_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_43_fu_3650_p4() {
    tmp_43_fu_3650_p4 = p_Val2_7_2_fu_3638_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_441_fu_56442_p3() {
    tmp_441_fu_56442_p3 = p_Val2_19_20_reg_67054.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_442_fu_49663_p1() {
    tmp_442_fu_49663_p1 = p_Val2_19_20_fu_49645_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_443_fu_6010_p4() {
    tmp_443_fu_6010_p4 = p_Val2_7_21_fu_5998_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_444_fu_6034_p4() {
    tmp_444_fu_6034_p4 = p_Val2_4_21_fu_5988_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_445_fu_6044_p1() {
    tmp_445_fu_6044_p1 = esl_zext<14,13>(tmp_444_fu_6034_p4.read());
}

void Sobel_phase_strm::thread_tmp_446_fu_16022_p4() {
    tmp_446_fu_16022_p4 = y_V_1_22_1_fu_16007_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_447_fu_16046_p4() {
    tmp_447_fu_16046_p4 = x_V_1_22_1_fu_16002_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_448_fu_16114_p1() {
    tmp_448_fu_16114_p1 = esl_zext<15,12>(tmp_27_22_2_fu_16104_p4.read());
}

void Sobel_phase_strm::thread_tmp_449_fu_16124_p4() {
    tmp_449_fu_16124_p4 = x_V_1_22_2_fu_16082_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_44_fu_3674_p4() {
    tmp_44_fu_3674_p4 = p_Val2_4_2_fu_3628_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_450_fu_28769_p1() {
    tmp_450_fu_28769_p1 = esl_zext<15,11>(tmp_27_22_3_reg_61220.read());
}

void Sobel_phase_strm::thread_tmp_452_fu_28830_p1() {
    tmp_452_fu_28830_p1 = esl_zext<15,10>(tmp_27_22_4_fu_28820_p4.read());
}

void Sobel_phase_strm::thread_tmp_453_fu_28840_p4() {
    tmp_453_fu_28840_p4 = x_V_1_22_4_fu_28798_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_454_fu_39434_p1() {
    tmp_454_fu_39434_p1 = esl_zext<15,9>(tmp_27_22_5_reg_63634.read());
}

void Sobel_phase_strm::thread_tmp_456_fu_39477_p4() {
    tmp_456_fu_39477_p4 = p_Val2_4_22_6_fu_39437_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_457_fu_39487_p4() {
    tmp_457_fu_39487_p4 = p_Val2_12_22_6_fu_39453_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_458_fu_39497_p3() {
    tmp_458_fu_39497_p3 = (!dneg_22_6_fu_39429_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_22_6_fu_39429_p2.read()[0].to_bool())? tmp_456_fu_39477_p4.read(): tmp_457_fu_39487_p4.read());
}

void Sobel_phase_strm::thread_tmp_459_fu_49767_p2() {
    tmp_459_fu_49767_p2 = (sel_tmp45_fu_49754_p2.read() | ap_reg_ppstg_tmp_19_21_reg_58587_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_45_fu_3684_p1() {
    tmp_45_fu_3684_p1 = esl_zext<14,13>(tmp_44_fu_3674_p4.read());
}

void Sobel_phase_strm::thread_tmp_461_fu_56468_p3() {
    tmp_461_fu_56468_p3 = p_Val2_19_21_reg_67071.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_462_fu_49790_p1() {
    tmp_462_fu_49790_p1 = p_Val2_19_21_fu_49772_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_463_fu_6128_p4() {
    tmp_463_fu_6128_p4 = p_Val2_7_22_fu_6116_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_464_fu_6152_p4() {
    tmp_464_fu_6152_p4 = p_Val2_4_22_fu_6106_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_465_fu_6162_p1() {
    tmp_465_fu_6162_p1 = esl_zext<14,13>(tmp_464_fu_6152_p4.read());
}

void Sobel_phase_strm::thread_tmp_466_fu_16216_p4() {
    tmp_466_fu_16216_p4 = y_V_1_23_1_fu_16201_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_467_fu_16240_p4() {
    tmp_467_fu_16240_p4 = x_V_1_23_1_fu_16196_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_468_fu_16308_p1() {
    tmp_468_fu_16308_p1 = esl_zext<15,12>(tmp_27_23_2_fu_16298_p4.read());
}

void Sobel_phase_strm::thread_tmp_469_fu_16318_p4() {
    tmp_469_fu_16318_p4 = x_V_1_23_2_fu_16276_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_46_fu_12142_p4() {
    tmp_46_fu_12142_p4 = y_V_1_2_1_fu_12127_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_470_fu_28917_p1() {
    tmp_470_fu_28917_p1 = esl_zext<15,11>(tmp_27_23_3_reg_61254.read());
}

void Sobel_phase_strm::thread_tmp_472_fu_28978_p1() {
    tmp_472_fu_28978_p1 = esl_zext<15,10>(tmp_27_23_4_fu_28968_p4.read());
}

void Sobel_phase_strm::thread_tmp_473_fu_28988_p4() {
    tmp_473_fu_28988_p4 = x_V_1_23_4_fu_28946_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_474_fu_39587_p1() {
    tmp_474_fu_39587_p1 = esl_zext<15,9>(tmp_27_23_5_reg_63668.read());
}

void Sobel_phase_strm::thread_tmp_476_fu_39630_p4() {
    tmp_476_fu_39630_p4 = p_Val2_4_23_6_fu_39590_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_477_fu_39640_p4() {
    tmp_477_fu_39640_p4 = p_Val2_12_23_6_fu_39606_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_478_fu_39650_p3() {
    tmp_478_fu_39650_p3 = (!dneg_23_6_fu_39582_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_23_6_fu_39582_p2.read()[0].to_bool())? tmp_476_fu_39630_p4.read(): tmp_477_fu_39640_p4.read());
}

void Sobel_phase_strm::thread_tmp_479_fu_49894_p2() {
    tmp_479_fu_49894_p2 = (sel_tmp47_fu_49881_p2.read() | ap_reg_ppstg_tmp_19_22_reg_58625_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_47_fu_12166_p4() {
    tmp_47_fu_12166_p4 = x_V_1_2_1_fu_12122_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_481_fu_56494_p3() {
    tmp_481_fu_56494_p3 = p_Val2_19_22_reg_67088.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_482_fu_49917_p1() {
    tmp_482_fu_49917_p1 = p_Val2_19_22_fu_49899_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_483_fu_6246_p4() {
    tmp_483_fu_6246_p4 = p_Val2_7_23_fu_6234_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_484_fu_6270_p4() {
    tmp_484_fu_6270_p4 = p_Val2_4_23_fu_6224_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_485_fu_6280_p1() {
    tmp_485_fu_6280_p1 = esl_zext<14,13>(tmp_484_fu_6270_p4.read());
}

void Sobel_phase_strm::thread_tmp_486_fu_16410_p4() {
    tmp_486_fu_16410_p4 = y_V_1_24_1_fu_16395_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_487_fu_16434_p4() {
    tmp_487_fu_16434_p4 = x_V_1_24_1_fu_16390_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_488_fu_16502_p1() {
    tmp_488_fu_16502_p1 = esl_zext<15,12>(tmp_27_24_2_fu_16492_p4.read());
}

void Sobel_phase_strm::thread_tmp_489_fu_16512_p4() {
    tmp_489_fu_16512_p4 = x_V_1_24_2_fu_16470_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_48_fu_12234_p1() {
    tmp_48_fu_12234_p1 = esl_zext<15,12>(tmp_27_2_2_fu_12224_p4.read());
}

void Sobel_phase_strm::thread_tmp_490_fu_29065_p1() {
    tmp_490_fu_29065_p1 = esl_zext<15,11>(tmp_27_24_3_reg_61288.read());
}

void Sobel_phase_strm::thread_tmp_492_fu_29126_p1() {
    tmp_492_fu_29126_p1 = esl_zext<15,10>(tmp_27_24_4_fu_29116_p4.read());
}

void Sobel_phase_strm::thread_tmp_493_fu_29136_p4() {
    tmp_493_fu_29136_p4 = x_V_1_24_4_fu_29094_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_494_fu_39740_p1() {
    tmp_494_fu_39740_p1 = esl_zext<15,9>(tmp_27_24_5_reg_63702.read());
}

void Sobel_phase_strm::thread_tmp_496_fu_39783_p4() {
    tmp_496_fu_39783_p4 = p_Val2_4_24_6_fu_39743_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_497_fu_39793_p4() {
    tmp_497_fu_39793_p4 = p_Val2_12_24_6_fu_39759_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_498_fu_39803_p3() {
    tmp_498_fu_39803_p3 = (!dneg_24_6_fu_39735_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_24_6_fu_39735_p2.read()[0].to_bool())? tmp_496_fu_39783_p4.read(): tmp_497_fu_39793_p4.read());
}

void Sobel_phase_strm::thread_tmp_499_fu_50021_p2() {
    tmp_499_fu_50021_p2 = (sel_tmp49_fu_50008_p2.read() | ap_reg_ppstg_tmp_19_23_reg_58663_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_49_fu_12244_p4() {
    tmp_49_fu_12244_p4 = x_V_1_2_2_fu_12202_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_4_fu_3414_p4() {
    tmp_4_fu_3414_p4 = p_Val2_7_fu_3402_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_501_fu_56520_p3() {
    tmp_501_fu_56520_p3 = p_Val2_19_23_reg_67105.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_502_fu_50044_p1() {
    tmp_502_fu_50044_p1 = p_Val2_19_23_fu_50026_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_503_fu_6364_p4() {
    tmp_503_fu_6364_p4 = p_Val2_7_24_fu_6352_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_504_fu_6388_p4() {
    tmp_504_fu_6388_p4 = p_Val2_4_24_fu_6342_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_505_fu_6398_p1() {
    tmp_505_fu_6398_p1 = esl_zext<14,13>(tmp_504_fu_6388_p4.read());
}

void Sobel_phase_strm::thread_tmp_506_fu_16604_p4() {
    tmp_506_fu_16604_p4 = y_V_1_25_1_fu_16589_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_507_fu_16628_p4() {
    tmp_507_fu_16628_p4 = x_V_1_25_1_fu_16584_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_508_fu_16696_p1() {
    tmp_508_fu_16696_p1 = esl_zext<15,12>(tmp_27_25_2_fu_16686_p4.read());
}

void Sobel_phase_strm::thread_tmp_509_fu_16706_p4() {
    tmp_509_fu_16706_p4 = x_V_1_25_2_fu_16664_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_50_fu_25809_p1() {
    tmp_50_fu_25809_p1 = esl_zext<15,11>(tmp_27_2_3_reg_60540.read());
}

void Sobel_phase_strm::thread_tmp_510_fu_29213_p1() {
    tmp_510_fu_29213_p1 = esl_zext<15,11>(tmp_27_25_3_reg_61322.read());
}

void Sobel_phase_strm::thread_tmp_512_fu_29274_p1() {
    tmp_512_fu_29274_p1 = esl_zext<15,10>(tmp_27_25_4_fu_29264_p4.read());
}

void Sobel_phase_strm::thread_tmp_513_fu_29284_p4() {
    tmp_513_fu_29284_p4 = x_V_1_25_4_fu_29242_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_514_fu_39893_p1() {
    tmp_514_fu_39893_p1 = esl_zext<15,9>(tmp_27_25_5_reg_63736.read());
}

void Sobel_phase_strm::thread_tmp_516_fu_39936_p4() {
    tmp_516_fu_39936_p4 = p_Val2_4_25_6_fu_39896_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_517_fu_39946_p4() {
    tmp_517_fu_39946_p4 = p_Val2_12_25_6_fu_39912_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_518_fu_39956_p3() {
    tmp_518_fu_39956_p3 = (!dneg_25_6_fu_39888_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_25_6_fu_39888_p2.read()[0].to_bool())? tmp_516_fu_39936_p4.read(): tmp_517_fu_39946_p4.read());
}

void Sobel_phase_strm::thread_tmp_519_fu_50148_p2() {
    tmp_519_fu_50148_p2 = (sel_tmp51_fu_50135_p2.read() | ap_reg_ppstg_tmp_19_24_reg_58701_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_521_fu_56546_p3() {
    tmp_521_fu_56546_p3 = p_Val2_19_24_reg_67122.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_522_fu_50171_p1() {
    tmp_522_fu_50171_p1 = p_Val2_19_24_fu_50153_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_523_fu_6482_p4() {
    tmp_523_fu_6482_p4 = p_Val2_7_25_fu_6470_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_524_fu_6506_p4() {
    tmp_524_fu_6506_p4 = p_Val2_4_25_fu_6460_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_525_fu_6516_p1() {
    tmp_525_fu_6516_p1 = esl_zext<14,13>(tmp_524_fu_6506_p4.read());
}

void Sobel_phase_strm::thread_tmp_526_fu_16798_p4() {
    tmp_526_fu_16798_p4 = y_V_1_26_1_fu_16783_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_527_fu_16822_p4() {
    tmp_527_fu_16822_p4 = x_V_1_26_1_fu_16778_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_528_fu_16890_p1() {
    tmp_528_fu_16890_p1 = esl_zext<15,12>(tmp_27_26_2_fu_16880_p4.read());
}

void Sobel_phase_strm::thread_tmp_529_fu_16900_p4() {
    tmp_529_fu_16900_p4 = x_V_1_26_2_fu_16858_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_52_fu_25870_p1() {
    tmp_52_fu_25870_p1 = esl_zext<15,10>(tmp_27_2_4_fu_25860_p4.read());
}

void Sobel_phase_strm::thread_tmp_530_fu_29361_p1() {
    tmp_530_fu_29361_p1 = esl_zext<15,11>(tmp_27_26_3_reg_61356.read());
}

void Sobel_phase_strm::thread_tmp_532_fu_29422_p1() {
    tmp_532_fu_29422_p1 = esl_zext<15,10>(tmp_27_26_4_fu_29412_p4.read());
}

void Sobel_phase_strm::thread_tmp_533_fu_29432_p4() {
    tmp_533_fu_29432_p4 = x_V_1_26_4_fu_29390_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_534_fu_40046_p1() {
    tmp_534_fu_40046_p1 = esl_zext<15,9>(tmp_27_26_5_reg_63770.read());
}

void Sobel_phase_strm::thread_tmp_536_fu_40089_p4() {
    tmp_536_fu_40089_p4 = p_Val2_4_26_6_fu_40049_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_537_fu_40099_p4() {
    tmp_537_fu_40099_p4 = p_Val2_12_26_6_fu_40065_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_538_fu_40109_p3() {
    tmp_538_fu_40109_p3 = (!dneg_26_6_fu_40041_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_26_6_fu_40041_p2.read()[0].to_bool())? tmp_536_fu_40089_p4.read(): tmp_537_fu_40099_p4.read());
}

void Sobel_phase_strm::thread_tmp_539_fu_50275_p2() {
    tmp_539_fu_50275_p2 = (sel_tmp53_fu_50262_p2.read() | ap_reg_ppstg_tmp_19_25_reg_58739_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_53_fu_25880_p4() {
    tmp_53_fu_25880_p4 = x_V_1_2_4_fu_25838_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_541_fu_56572_p3() {
    tmp_541_fu_56572_p3 = p_Val2_19_25_reg_67139.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_542_fu_50298_p1() {
    tmp_542_fu_50298_p1 = p_Val2_19_25_fu_50280_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_543_fu_6600_p4() {
    tmp_543_fu_6600_p4 = p_Val2_7_26_fu_6588_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_544_fu_6624_p4() {
    tmp_544_fu_6624_p4 = p_Val2_4_26_fu_6578_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_545_fu_6634_p1() {
    tmp_545_fu_6634_p1 = esl_zext<14,13>(tmp_544_fu_6624_p4.read());
}

void Sobel_phase_strm::thread_tmp_546_fu_16992_p4() {
    tmp_546_fu_16992_p4 = y_V_1_27_1_fu_16977_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_547_fu_17016_p4() {
    tmp_547_fu_17016_p4 = x_V_1_27_1_fu_16972_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_548_fu_17084_p1() {
    tmp_548_fu_17084_p1 = esl_zext<15,12>(tmp_27_27_2_fu_17074_p4.read());
}

void Sobel_phase_strm::thread_tmp_549_fu_17094_p4() {
    tmp_549_fu_17094_p4 = x_V_1_27_2_fu_17052_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_54_fu_36374_p1() {
    tmp_54_fu_36374_p1 = esl_zext<15,9>(tmp_27_2_5_reg_62954.read());
}

void Sobel_phase_strm::thread_tmp_550_fu_29509_p1() {
    tmp_550_fu_29509_p1 = esl_zext<15,11>(tmp_27_27_3_reg_61390.read());
}

void Sobel_phase_strm::thread_tmp_552_fu_29570_p1() {
    tmp_552_fu_29570_p1 = esl_zext<15,10>(tmp_27_27_4_fu_29560_p4.read());
}

void Sobel_phase_strm::thread_tmp_553_fu_29580_p4() {
    tmp_553_fu_29580_p4 = x_V_1_27_4_fu_29538_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_554_fu_40199_p1() {
    tmp_554_fu_40199_p1 = esl_zext<15,9>(tmp_27_27_5_reg_63804.read());
}

void Sobel_phase_strm::thread_tmp_556_fu_40242_p4() {
    tmp_556_fu_40242_p4 = p_Val2_4_27_6_fu_40202_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_557_fu_40252_p4() {
    tmp_557_fu_40252_p4 = p_Val2_12_27_6_fu_40218_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_558_fu_40262_p3() {
    tmp_558_fu_40262_p3 = (!dneg_27_6_fu_40194_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_27_6_fu_40194_p2.read()[0].to_bool())? tmp_556_fu_40242_p4.read(): tmp_557_fu_40252_p4.read());
}

void Sobel_phase_strm::thread_tmp_559_fu_50402_p2() {
    tmp_559_fu_50402_p2 = (sel_tmp55_fu_50389_p2.read() | ap_reg_ppstg_tmp_19_26_reg_58777_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_55_10_fu_48397_p2() {
    tmp_55_10_fu_48397_p2 = (!tmp_242_fu_48393_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_242_fu_48393_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_11_fu_48524_p2() {
    tmp_55_11_fu_48524_p2 = (!tmp_262_fu_48520_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_262_fu_48520_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_12_fu_48651_p2() {
    tmp_55_12_fu_48651_p2 = (!tmp_282_fu_48647_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_282_fu_48647_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_13_fu_48778_p2() {
    tmp_55_13_fu_48778_p2 = (!tmp_302_fu_48774_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_302_fu_48774_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_14_fu_48905_p2() {
    tmp_55_14_fu_48905_p2 = (!tmp_322_fu_48901_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_322_fu_48901_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_15_fu_49032_p2() {
    tmp_55_15_fu_49032_p2 = (!tmp_342_fu_49028_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_342_fu_49028_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_16_fu_49159_p2() {
    tmp_55_16_fu_49159_p2 = (!tmp_362_fu_49155_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_362_fu_49155_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_17_fu_49286_p2() {
    tmp_55_17_fu_49286_p2 = (!tmp_382_fu_49282_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_382_fu_49282_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_18_fu_49413_p2() {
    tmp_55_18_fu_49413_p2 = (!tmp_402_fu_49409_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_402_fu_49409_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_19_fu_49540_p2() {
    tmp_55_19_fu_49540_p2 = (!tmp_422_fu_49536_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_422_fu_49536_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_1_fu_47127_p2() {
    tmp_55_1_fu_47127_p2 = (!tmp_42_fu_47123_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_47123_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_20_fu_49667_p2() {
    tmp_55_20_fu_49667_p2 = (!tmp_442_fu_49663_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_442_fu_49663_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_21_fu_49794_p2() {
    tmp_55_21_fu_49794_p2 = (!tmp_462_fu_49790_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_462_fu_49790_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_22_fu_49921_p2() {
    tmp_55_22_fu_49921_p2 = (!tmp_482_fu_49917_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_482_fu_49917_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_23_fu_50048_p2() {
    tmp_55_23_fu_50048_p2 = (!tmp_502_fu_50044_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_502_fu_50044_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_24_fu_50175_p2() {
    tmp_55_24_fu_50175_p2 = (!tmp_522_fu_50171_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_522_fu_50171_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_25_fu_50302_p2() {
    tmp_55_25_fu_50302_p2 = (!tmp_542_fu_50298_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_542_fu_50298_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_26_fu_50429_p2() {
    tmp_55_26_fu_50429_p2 = (!tmp_562_fu_50425_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_562_fu_50425_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_27_fu_50556_p2() {
    tmp_55_27_fu_50556_p2 = (!tmp_582_fu_50552_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_582_fu_50552_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_28_fu_50683_p2() {
    tmp_55_28_fu_50683_p2 = (!tmp_602_fu_50679_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_602_fu_50679_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_29_fu_50810_p2() {
    tmp_55_29_fu_50810_p2 = (!tmp_622_fu_50806_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_622_fu_50806_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_2_fu_47254_p2() {
    tmp_55_2_fu_47254_p2 = (!tmp_62_fu_47250_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_fu_47250_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_30_fu_50937_p2() {
    tmp_55_30_fu_50937_p2 = (!tmp_642_fu_50933_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_642_fu_50933_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_31_fu_51064_p2() {
    tmp_55_31_fu_51064_p2 = (!tmp_662_fu_51060_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_662_fu_51060_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_32_fu_51191_p2() {
    tmp_55_32_fu_51191_p2 = (!tmp_682_fu_51187_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_682_fu_51187_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_33_fu_51318_p2() {
    tmp_55_33_fu_51318_p2 = (!tmp_702_fu_51314_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_702_fu_51314_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_34_fu_51445_p2() {
    tmp_55_34_fu_51445_p2 = (!tmp_722_fu_51441_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_722_fu_51441_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_35_fu_51572_p2() {
    tmp_55_35_fu_51572_p2 = (!tmp_742_fu_51568_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_742_fu_51568_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_36_fu_51699_p2() {
    tmp_55_36_fu_51699_p2 = (!tmp_762_fu_51695_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_762_fu_51695_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_37_fu_51826_p2() {
    tmp_55_37_fu_51826_p2 = (!tmp_782_fu_51822_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_782_fu_51822_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_38_fu_51953_p2() {
    tmp_55_38_fu_51953_p2 = (!tmp_802_fu_51949_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_802_fu_51949_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_39_fu_52080_p2() {
    tmp_55_39_fu_52080_p2 = (!tmp_822_fu_52076_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_822_fu_52076_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_3_fu_47381_p2() {
    tmp_55_3_fu_47381_p2 = (!tmp_82_fu_47377_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_82_fu_47377_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_40_fu_52207_p2() {
    tmp_55_40_fu_52207_p2 = (!tmp_842_fu_52203_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_842_fu_52203_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_41_fu_52334_p2() {
    tmp_55_41_fu_52334_p2 = (!tmp_862_fu_52330_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_862_fu_52330_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_42_fu_52461_p2() {
    tmp_55_42_fu_52461_p2 = (!tmp_882_fu_52457_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_882_fu_52457_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_43_fu_52588_p2() {
    tmp_55_43_fu_52588_p2 = (!tmp_902_fu_52584_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_902_fu_52584_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_44_fu_52715_p2() {
    tmp_55_44_fu_52715_p2 = (!tmp_922_fu_52711_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_922_fu_52711_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_45_fu_52842_p2() {
    tmp_55_45_fu_52842_p2 = (!tmp_942_fu_52838_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_942_fu_52838_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_46_fu_52969_p2() {
    tmp_55_46_fu_52969_p2 = (!tmp_962_fu_52965_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_962_fu_52965_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_47_fu_53096_p2() {
    tmp_55_47_fu_53096_p2 = (!tmp_982_fu_53092_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_982_fu_53092_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_48_fu_53223_p2() {
    tmp_55_48_fu_53223_p2 = (!tmp_1002_fu_53219_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1002_fu_53219_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_49_fu_53350_p2() {
    tmp_55_49_fu_53350_p2 = (!tmp_1022_fu_53346_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1022_fu_53346_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_4_fu_47508_p2() {
    tmp_55_4_fu_47508_p2 = (!tmp_102_fu_47504_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_102_fu_47504_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_50_fu_53477_p2() {
    tmp_55_50_fu_53477_p2 = (!tmp_1042_fu_53473_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1042_fu_53473_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_51_fu_53604_p2() {
    tmp_55_51_fu_53604_p2 = (!tmp_1062_fu_53600_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1062_fu_53600_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_52_fu_53731_p2() {
    tmp_55_52_fu_53731_p2 = (!tmp_1082_fu_53727_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1082_fu_53727_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_53_fu_53858_p2() {
    tmp_55_53_fu_53858_p2 = (!tmp_1102_fu_53854_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1102_fu_53854_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_54_fu_53985_p2() {
    tmp_55_54_fu_53985_p2 = (!tmp_1122_fu_53981_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1122_fu_53981_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_55_fu_54112_p2() {
    tmp_55_55_fu_54112_p2 = (!tmp_1142_fu_54108_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1142_fu_54108_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_56_fu_54239_p2() {
    tmp_55_56_fu_54239_p2 = (!tmp_1162_fu_54235_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1162_fu_54235_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_57_fu_54366_p2() {
    tmp_55_57_fu_54366_p2 = (!tmp_1182_fu_54362_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1182_fu_54362_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_58_fu_54493_p2() {
    tmp_55_58_fu_54493_p2 = (!tmp_1202_fu_54489_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1202_fu_54489_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_59_fu_54620_p2() {
    tmp_55_59_fu_54620_p2 = (!tmp_1222_fu_54616_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1222_fu_54616_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_5_fu_47635_p2() {
    tmp_55_5_fu_47635_p2 = (!tmp_122_fu_47631_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_122_fu_47631_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_60_fu_54747_p2() {
    tmp_55_60_fu_54747_p2 = (!tmp_1242_fu_54743_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1242_fu_54743_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_61_fu_54874_p2() {
    tmp_55_61_fu_54874_p2 = (!tmp_1262_fu_54870_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1262_fu_54870_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_62_fu_55001_p2() {
    tmp_55_62_fu_55001_p2 = (!tmp_1282_fu_54997_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1282_fu_54997_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_63_fu_55128_p2() {
    tmp_55_63_fu_55128_p2 = (!tmp_1302_fu_55124_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1302_fu_55124_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_64_fu_55255_p2() {
    tmp_55_64_fu_55255_p2 = (!tmp_1322_fu_55251_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1322_fu_55251_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_65_fu_55382_p2() {
    tmp_55_65_fu_55382_p2 = (!tmp_1342_fu_55378_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1342_fu_55378_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_66_fu_55509_p2() {
    tmp_55_66_fu_55509_p2 = (!tmp_1362_fu_55505_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1362_fu_55505_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_67_fu_55636_p2() {
    tmp_55_67_fu_55636_p2 = (!tmp_1382_fu_55632_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1382_fu_55632_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_68_fu_55763_p2() {
    tmp_55_68_fu_55763_p2 = (!tmp_1402_fu_55759_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1402_fu_55759_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_69_fu_55890_p2() {
    tmp_55_69_fu_55890_p2 = (!tmp_1422_fu_55886_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1422_fu_55886_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_6_fu_47762_p2() {
    tmp_55_6_fu_47762_p2 = (!tmp_142_fu_47758_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_142_fu_47758_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_7_fu_47889_p2() {
    tmp_55_7_fu_47889_p2 = (!tmp_162_fu_47885_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_162_fu_47885_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_8_fu_48016_p2() {
    tmp_55_8_fu_48016_p2 = (!tmp_182_fu_48012_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_182_fu_48012_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_9_fu_48143_p2() {
    tmp_55_9_fu_48143_p2 = (!tmp_202_fu_48139_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_202_fu_48139_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_55_s_fu_48270_p2() {
    tmp_55_s_fu_48270_p2 = (!tmp_222_fu_48266_p1.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_222_fu_48266_p1.read() == ap_const_lv5_0);
}

void Sobel_phase_strm::thread_tmp_561_fu_56598_p3() {
    tmp_561_fu_56598_p3 = p_Val2_19_26_reg_67156.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_562_fu_50425_p1() {
    tmp_562_fu_50425_p1 = p_Val2_19_26_fu_50407_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_563_fu_6718_p4() {
    tmp_563_fu_6718_p4 = p_Val2_7_27_fu_6706_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_564_fu_6742_p4() {
    tmp_564_fu_6742_p4 = p_Val2_4_27_fu_6696_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_565_fu_6752_p1() {
    tmp_565_fu_6752_p1 = esl_zext<14,13>(tmp_564_fu_6742_p4.read());
}

void Sobel_phase_strm::thread_tmp_566_fu_17186_p4() {
    tmp_566_fu_17186_p4 = y_V_1_28_1_fu_17171_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_567_fu_17210_p4() {
    tmp_567_fu_17210_p4 = x_V_1_28_1_fu_17166_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_568_fu_17278_p1() {
    tmp_568_fu_17278_p1 = esl_zext<15,12>(tmp_27_28_2_fu_17268_p4.read());
}

void Sobel_phase_strm::thread_tmp_569_fu_17288_p4() {
    tmp_569_fu_17288_p4 = x_V_1_28_2_fu_17246_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_56_fu_36417_p4() {
    tmp_56_fu_36417_p4 = p_Val2_4_2_6_fu_36377_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_570_fu_29657_p1() {
    tmp_570_fu_29657_p1 = esl_zext<15,11>(tmp_27_28_3_reg_61424.read());
}

void Sobel_phase_strm::thread_tmp_572_fu_29718_p1() {
    tmp_572_fu_29718_p1 = esl_zext<15,10>(tmp_27_28_4_fu_29708_p4.read());
}

void Sobel_phase_strm::thread_tmp_573_fu_29728_p4() {
    tmp_573_fu_29728_p4 = x_V_1_28_4_fu_29686_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_574_fu_40352_p1() {
    tmp_574_fu_40352_p1 = esl_zext<15,9>(tmp_27_28_5_reg_63838.read());
}

void Sobel_phase_strm::thread_tmp_576_fu_40395_p4() {
    tmp_576_fu_40395_p4 = p_Val2_4_28_6_fu_40355_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_577_fu_40405_p4() {
    tmp_577_fu_40405_p4 = p_Val2_12_28_6_fu_40371_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_578_fu_40415_p3() {
    tmp_578_fu_40415_p3 = (!dneg_28_6_fu_40347_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_28_6_fu_40347_p2.read()[0].to_bool())? tmp_576_fu_40395_p4.read(): tmp_577_fu_40405_p4.read());
}

void Sobel_phase_strm::thread_tmp_579_fu_50529_p2() {
    tmp_579_fu_50529_p2 = (sel_tmp57_fu_50516_p2.read() | ap_reg_ppstg_tmp_19_27_reg_58815_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_57_fu_36427_p4() {
    tmp_57_fu_36427_p4 = p_Val2_12_2_6_fu_36393_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_581_fu_56624_p3() {
    tmp_581_fu_56624_p3 = p_Val2_19_27_reg_67173.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_582_fu_50552_p1() {
    tmp_582_fu_50552_p1 = p_Val2_19_27_fu_50534_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_583_fu_6836_p4() {
    tmp_583_fu_6836_p4 = p_Val2_7_28_fu_6824_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_584_fu_6860_p4() {
    tmp_584_fu_6860_p4 = p_Val2_4_28_fu_6814_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_585_fu_6870_p1() {
    tmp_585_fu_6870_p1 = esl_zext<14,13>(tmp_584_fu_6860_p4.read());
}

void Sobel_phase_strm::thread_tmp_586_fu_17380_p4() {
    tmp_586_fu_17380_p4 = y_V_1_29_1_fu_17365_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_587_fu_17404_p4() {
    tmp_587_fu_17404_p4 = x_V_1_29_1_fu_17360_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_588_fu_17472_p1() {
    tmp_588_fu_17472_p1 = esl_zext<15,12>(tmp_27_29_2_fu_17462_p4.read());
}

void Sobel_phase_strm::thread_tmp_589_fu_17482_p4() {
    tmp_589_fu_17482_p4 = x_V_1_29_2_fu_17440_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_58_fu_36437_p3() {
    tmp_58_fu_36437_p3 = (!dneg_2_6_fu_36369_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_2_6_fu_36369_p2.read()[0].to_bool())? tmp_56_fu_36417_p4.read(): tmp_57_fu_36427_p4.read());
}

void Sobel_phase_strm::thread_tmp_590_fu_29805_p1() {
    tmp_590_fu_29805_p1 = esl_zext<15,11>(tmp_27_29_3_reg_61458.read());
}

void Sobel_phase_strm::thread_tmp_592_fu_29866_p1() {
    tmp_592_fu_29866_p1 = esl_zext<15,10>(tmp_27_29_4_fu_29856_p4.read());
}

void Sobel_phase_strm::thread_tmp_593_fu_29876_p4() {
    tmp_593_fu_29876_p4 = x_V_1_29_4_fu_29834_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_594_fu_40505_p1() {
    tmp_594_fu_40505_p1 = esl_zext<15,9>(tmp_27_29_5_reg_63872.read());
}

void Sobel_phase_strm::thread_tmp_596_fu_40548_p4() {
    tmp_596_fu_40548_p4 = p_Val2_4_29_6_fu_40508_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_597_fu_40558_p4() {
    tmp_597_fu_40558_p4 = p_Val2_12_29_6_fu_40524_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_598_fu_40568_p3() {
    tmp_598_fu_40568_p3 = (!dneg_29_6_fu_40500_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_29_6_fu_40500_p2.read()[0].to_bool())? tmp_596_fu_40548_p4.read(): tmp_597_fu_40558_p4.read());
}

void Sobel_phase_strm::thread_tmp_599_fu_50656_p2() {
    tmp_599_fu_50656_p2 = (sel_tmp59_fu_50643_p2.read() | ap_reg_ppstg_tmp_19_28_reg_58853_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_59_fu_47227_p2() {
    tmp_59_fu_47227_p2 = (sel_tmp7_fu_47214_p2.read() | ap_reg_ppstg_tmp_19_2_reg_57827_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_5_fu_11846_p1() {
    tmp_5_fu_11846_p1 = esl_zext<15,12>(tmp_27_0_2_fu_11836_p4.read());
}

void Sobel_phase_strm::thread_tmp_601_fu_56650_p3() {
    tmp_601_fu_56650_p3 = p_Val2_19_28_reg_67190.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_602_fu_50679_p1() {
    tmp_602_fu_50679_p1 = p_Val2_19_28_fu_50661_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_603_fu_6954_p4() {
    tmp_603_fu_6954_p4 = p_Val2_7_29_fu_6942_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_604_fu_6978_p4() {
    tmp_604_fu_6978_p4 = p_Val2_4_29_fu_6932_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_605_fu_6988_p1() {
    tmp_605_fu_6988_p1 = esl_zext<14,13>(tmp_604_fu_6978_p4.read());
}

void Sobel_phase_strm::thread_tmp_606_fu_17574_p4() {
    tmp_606_fu_17574_p4 = y_V_1_30_1_fu_17559_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_607_fu_17598_p4() {
    tmp_607_fu_17598_p4 = x_V_1_30_1_fu_17554_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_608_fu_17666_p1() {
    tmp_608_fu_17666_p1 = esl_zext<15,12>(tmp_27_30_2_fu_17656_p4.read());
}

void Sobel_phase_strm::thread_tmp_609_fu_17676_p4() {
    tmp_609_fu_17676_p4 = x_V_1_30_2_fu_17634_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_610_fu_29953_p1() {
    tmp_610_fu_29953_p1 = esl_zext<15,11>(tmp_27_30_3_reg_61492.read());
}

void Sobel_phase_strm::thread_tmp_612_fu_30014_p1() {
    tmp_612_fu_30014_p1 = esl_zext<15,10>(tmp_27_30_4_fu_30004_p4.read());
}

void Sobel_phase_strm::thread_tmp_613_fu_30024_p4() {
    tmp_613_fu_30024_p4 = x_V_1_30_4_fu_29982_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_614_fu_40658_p1() {
    tmp_614_fu_40658_p1 = esl_zext<15,9>(tmp_27_30_5_reg_63906.read());
}

void Sobel_phase_strm::thread_tmp_616_fu_40701_p4() {
    tmp_616_fu_40701_p4 = p_Val2_4_30_6_fu_40661_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_617_fu_40711_p4() {
    tmp_617_fu_40711_p4 = p_Val2_12_30_6_fu_40677_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_618_fu_40721_p3() {
    tmp_618_fu_40721_p3 = (!dneg_30_6_fu_40653_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_30_6_fu_40653_p2.read()[0].to_bool())? tmp_616_fu_40701_p4.read(): tmp_617_fu_40711_p4.read());
}

void Sobel_phase_strm::thread_tmp_619_fu_50783_p2() {
    tmp_619_fu_50783_p2 = (sel_tmp61_fu_50770_p2.read() | ap_reg_ppstg_tmp_19_29_reg_58891_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_61_fu_55948_p3() {
    tmp_61_fu_55948_p3 = p_Val2_19_2_reg_66731.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_621_fu_56676_p3() {
    tmp_621_fu_56676_p3 = p_Val2_19_29_reg_67207.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_622_fu_50806_p1() {
    tmp_622_fu_50806_p1 = p_Val2_19_29_fu_50788_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_623_fu_7072_p4() {
    tmp_623_fu_7072_p4 = p_Val2_7_30_fu_7060_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_624_fu_7096_p4() {
    tmp_624_fu_7096_p4 = p_Val2_4_30_fu_7050_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_625_fu_7106_p1() {
    tmp_625_fu_7106_p1 = esl_zext<14,13>(tmp_624_fu_7096_p4.read());
}

void Sobel_phase_strm::thread_tmp_626_fu_17768_p4() {
    tmp_626_fu_17768_p4 = y_V_1_31_1_fu_17753_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_627_fu_17792_p4() {
    tmp_627_fu_17792_p4 = x_V_1_31_1_fu_17748_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_628_fu_17860_p1() {
    tmp_628_fu_17860_p1 = esl_zext<15,12>(tmp_27_31_2_fu_17850_p4.read());
}

void Sobel_phase_strm::thread_tmp_629_fu_17870_p4() {
    tmp_629_fu_17870_p4 = x_V_1_31_2_fu_17828_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_62_fu_47250_p1() {
    tmp_62_fu_47250_p1 = p_Val2_19_2_fu_47232_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_630_fu_30101_p1() {
    tmp_630_fu_30101_p1 = esl_zext<15,11>(tmp_27_31_3_reg_61526.read());
}

void Sobel_phase_strm::thread_tmp_632_fu_30162_p1() {
    tmp_632_fu_30162_p1 = esl_zext<15,10>(tmp_27_31_4_fu_30152_p4.read());
}

void Sobel_phase_strm::thread_tmp_633_fu_30172_p4() {
    tmp_633_fu_30172_p4 = x_V_1_31_4_fu_30130_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_634_fu_40811_p1() {
    tmp_634_fu_40811_p1 = esl_zext<15,9>(tmp_27_31_5_reg_63940.read());
}

void Sobel_phase_strm::thread_tmp_636_fu_40854_p4() {
    tmp_636_fu_40854_p4 = p_Val2_4_31_6_fu_40814_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_637_fu_40864_p4() {
    tmp_637_fu_40864_p4 = p_Val2_12_31_6_fu_40830_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_638_fu_40874_p3() {
    tmp_638_fu_40874_p3 = (!dneg_31_6_fu_40806_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_31_6_fu_40806_p2.read()[0].to_bool())? tmp_636_fu_40854_p4.read(): tmp_637_fu_40864_p4.read());
}

void Sobel_phase_strm::thread_tmp_639_fu_50910_p2() {
    tmp_639_fu_50910_p2 = (sel_tmp63_fu_50897_p2.read() | ap_reg_ppstg_tmp_19_30_reg_58929_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_63_fu_3768_p4() {
    tmp_63_fu_3768_p4 = p_Val2_7_3_fu_3756_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_641_fu_56702_p3() {
    tmp_641_fu_56702_p3 = p_Val2_19_30_reg_67224.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_642_fu_50933_p1() {
    tmp_642_fu_50933_p1 = p_Val2_19_30_fu_50915_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_643_fu_7190_p4() {
    tmp_643_fu_7190_p4 = p_Val2_7_31_fu_7178_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_644_fu_7214_p4() {
    tmp_644_fu_7214_p4 = p_Val2_4_31_fu_7168_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_645_fu_7224_p1() {
    tmp_645_fu_7224_p1 = esl_zext<14,13>(tmp_644_fu_7214_p4.read());
}

void Sobel_phase_strm::thread_tmp_646_fu_17962_p4() {
    tmp_646_fu_17962_p4 = y_V_1_32_1_fu_17947_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_647_fu_17986_p4() {
    tmp_647_fu_17986_p4 = x_V_1_32_1_fu_17942_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_648_fu_18054_p1() {
    tmp_648_fu_18054_p1 = esl_zext<15,12>(tmp_27_32_2_fu_18044_p4.read());
}

void Sobel_phase_strm::thread_tmp_649_fu_18064_p4() {
    tmp_649_fu_18064_p4 = x_V_1_32_2_fu_18022_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_64_fu_3792_p4() {
    tmp_64_fu_3792_p4 = p_Val2_4_3_fu_3746_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_650_fu_30249_p1() {
    tmp_650_fu_30249_p1 = esl_zext<15,11>(tmp_27_32_3_reg_61560.read());
}

void Sobel_phase_strm::thread_tmp_652_fu_30310_p1() {
    tmp_652_fu_30310_p1 = esl_zext<15,10>(tmp_27_32_4_fu_30300_p4.read());
}

void Sobel_phase_strm::thread_tmp_653_fu_30320_p4() {
    tmp_653_fu_30320_p4 = x_V_1_32_4_fu_30278_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_654_fu_40964_p1() {
    tmp_654_fu_40964_p1 = esl_zext<15,9>(tmp_27_32_5_reg_63974.read());
}

void Sobel_phase_strm::thread_tmp_656_fu_41007_p4() {
    tmp_656_fu_41007_p4 = p_Val2_4_32_6_fu_40967_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_657_fu_41017_p4() {
    tmp_657_fu_41017_p4 = p_Val2_12_32_6_fu_40983_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_658_fu_41027_p3() {
    tmp_658_fu_41027_p3 = (!dneg_32_6_fu_40959_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_32_6_fu_40959_p2.read()[0].to_bool())? tmp_656_fu_41007_p4.read(): tmp_657_fu_41017_p4.read());
}

void Sobel_phase_strm::thread_tmp_659_fu_51037_p2() {
    tmp_659_fu_51037_p2 = (sel_tmp65_fu_51024_p2.read() | ap_reg_ppstg_tmp_19_31_reg_58967_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_65_fu_3802_p1() {
    tmp_65_fu_3802_p1 = esl_zext<14,13>(tmp_64_fu_3792_p4.read());
}

void Sobel_phase_strm::thread_tmp_661_fu_56728_p3() {
    tmp_661_fu_56728_p3 = p_Val2_19_31_reg_67241.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_662_fu_51060_p1() {
    tmp_662_fu_51060_p1 = p_Val2_19_31_fu_51042_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_663_fu_7308_p4() {
    tmp_663_fu_7308_p4 = p_Val2_7_32_fu_7296_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_664_fu_7332_p4() {
    tmp_664_fu_7332_p4 = p_Val2_4_32_fu_7286_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_665_fu_7342_p1() {
    tmp_665_fu_7342_p1 = esl_zext<14,13>(tmp_664_fu_7332_p4.read());
}

void Sobel_phase_strm::thread_tmp_666_fu_18156_p4() {
    tmp_666_fu_18156_p4 = y_V_1_33_1_fu_18141_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_667_fu_18180_p4() {
    tmp_667_fu_18180_p4 = x_V_1_33_1_fu_18136_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_668_fu_18248_p1() {
    tmp_668_fu_18248_p1 = esl_zext<15,12>(tmp_27_33_2_fu_18238_p4.read());
}

void Sobel_phase_strm::thread_tmp_669_fu_18258_p4() {
    tmp_669_fu_18258_p4 = x_V_1_33_2_fu_18216_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_66_fu_12336_p4() {
    tmp_66_fu_12336_p4 = y_V_1_3_1_fu_12321_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_670_fu_30397_p1() {
    tmp_670_fu_30397_p1 = esl_zext<15,11>(tmp_27_33_3_reg_61594.read());
}

void Sobel_phase_strm::thread_tmp_672_fu_30458_p1() {
    tmp_672_fu_30458_p1 = esl_zext<15,10>(tmp_27_33_4_fu_30448_p4.read());
}

void Sobel_phase_strm::thread_tmp_673_fu_30468_p4() {
    tmp_673_fu_30468_p4 = x_V_1_33_4_fu_30426_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_674_fu_41117_p1() {
    tmp_674_fu_41117_p1 = esl_zext<15,9>(tmp_27_33_5_reg_64008.read());
}

void Sobel_phase_strm::thread_tmp_676_fu_41160_p4() {
    tmp_676_fu_41160_p4 = p_Val2_4_33_6_fu_41120_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_677_fu_41170_p4() {
    tmp_677_fu_41170_p4 = p_Val2_12_33_6_fu_41136_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_678_fu_41180_p3() {
    tmp_678_fu_41180_p3 = (!dneg_33_6_fu_41112_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_33_6_fu_41112_p2.read()[0].to_bool())? tmp_676_fu_41160_p4.read(): tmp_677_fu_41170_p4.read());
}

void Sobel_phase_strm::thread_tmp_679_fu_51164_p2() {
    tmp_679_fu_51164_p2 = (sel_tmp67_fu_51151_p2.read() | ap_reg_ppstg_tmp_19_32_reg_59005_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_67_fu_12360_p4() {
    tmp_67_fu_12360_p4 = x_V_1_3_1_fu_12316_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_681_fu_56754_p3() {
    tmp_681_fu_56754_p3 = p_Val2_19_32_reg_67258.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_682_fu_51187_p1() {
    tmp_682_fu_51187_p1 = p_Val2_19_32_fu_51169_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_683_fu_7426_p4() {
    tmp_683_fu_7426_p4 = p_Val2_7_33_fu_7414_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_684_fu_7450_p4() {
    tmp_684_fu_7450_p4 = p_Val2_4_33_fu_7404_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_685_fu_7460_p1() {
    tmp_685_fu_7460_p1 = esl_zext<14,13>(tmp_684_fu_7450_p4.read());
}

void Sobel_phase_strm::thread_tmp_686_fu_18350_p4() {
    tmp_686_fu_18350_p4 = y_V_1_34_1_fu_18335_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_687_fu_18374_p4() {
    tmp_687_fu_18374_p4 = x_V_1_34_1_fu_18330_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_688_fu_18442_p1() {
    tmp_688_fu_18442_p1 = esl_zext<15,12>(tmp_27_34_2_fu_18432_p4.read());
}

void Sobel_phase_strm::thread_tmp_689_fu_18452_p4() {
    tmp_689_fu_18452_p4 = x_V_1_34_2_fu_18410_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_68_fu_12428_p1() {
    tmp_68_fu_12428_p1 = esl_zext<15,12>(tmp_27_3_2_fu_12418_p4.read());
}

void Sobel_phase_strm::thread_tmp_690_fu_30545_p1() {
    tmp_690_fu_30545_p1 = esl_zext<15,11>(tmp_27_34_3_reg_61628.read());
}

void Sobel_phase_strm::thread_tmp_692_fu_30606_p1() {
    tmp_692_fu_30606_p1 = esl_zext<15,10>(tmp_27_34_4_fu_30596_p4.read());
}

void Sobel_phase_strm::thread_tmp_693_fu_30616_p4() {
    tmp_693_fu_30616_p4 = x_V_1_34_4_fu_30574_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_694_fu_41270_p1() {
    tmp_694_fu_41270_p1 = esl_zext<15,9>(tmp_27_34_5_reg_64042.read());
}

void Sobel_phase_strm::thread_tmp_696_fu_41313_p4() {
    tmp_696_fu_41313_p4 = p_Val2_4_34_6_fu_41273_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_697_fu_41323_p4() {
    tmp_697_fu_41323_p4 = p_Val2_12_34_6_fu_41289_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_698_fu_41333_p3() {
    tmp_698_fu_41333_p3 = (!dneg_34_6_fu_41265_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_34_6_fu_41265_p2.read()[0].to_bool())? tmp_696_fu_41313_p4.read(): tmp_697_fu_41323_p4.read());
}

void Sobel_phase_strm::thread_tmp_699_fu_51291_p2() {
    tmp_699_fu_51291_p2 = (sel_tmp69_fu_51278_p2.read() | ap_reg_ppstg_tmp_19_33_reg_59043_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_69_fu_12438_p4() {
    tmp_69_fu_12438_p4 = x_V_1_3_2_fu_12396_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_6_fu_11778_p4() {
    tmp_6_fu_11778_p4 = x_V_1_0_1_fu_11734_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_701_fu_56780_p3() {
    tmp_701_fu_56780_p3 = p_Val2_19_33_reg_67275.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_702_fu_51314_p1() {
    tmp_702_fu_51314_p1 = p_Val2_19_33_fu_51296_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_703_fu_7544_p4() {
    tmp_703_fu_7544_p4 = p_Val2_7_34_fu_7532_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_704_fu_7568_p4() {
    tmp_704_fu_7568_p4 = p_Val2_4_34_fu_7522_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_705_fu_7578_p1() {
    tmp_705_fu_7578_p1 = esl_zext<14,13>(tmp_704_fu_7568_p4.read());
}

void Sobel_phase_strm::thread_tmp_706_fu_18544_p4() {
    tmp_706_fu_18544_p4 = y_V_1_35_1_fu_18529_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_707_fu_18568_p4() {
    tmp_707_fu_18568_p4 = x_V_1_35_1_fu_18524_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_708_fu_18636_p1() {
    tmp_708_fu_18636_p1 = esl_zext<15,12>(tmp_27_35_2_fu_18626_p4.read());
}

void Sobel_phase_strm::thread_tmp_709_fu_18646_p4() {
    tmp_709_fu_18646_p4 = x_V_1_35_2_fu_18604_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_70_fu_25957_p1() {
    tmp_70_fu_25957_p1 = esl_zext<15,11>(tmp_27_3_3_reg_60574.read());
}

void Sobel_phase_strm::thread_tmp_710_fu_30693_p1() {
    tmp_710_fu_30693_p1 = esl_zext<15,11>(tmp_27_35_3_reg_61662.read());
}

void Sobel_phase_strm::thread_tmp_712_fu_30754_p1() {
    tmp_712_fu_30754_p1 = esl_zext<15,10>(tmp_27_35_4_fu_30744_p4.read());
}

void Sobel_phase_strm::thread_tmp_713_fu_30764_p4() {
    tmp_713_fu_30764_p4 = x_V_1_35_4_fu_30722_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_714_fu_41423_p1() {
    tmp_714_fu_41423_p1 = esl_zext<15,9>(tmp_27_35_5_reg_64076.read());
}

void Sobel_phase_strm::thread_tmp_716_fu_41466_p4() {
    tmp_716_fu_41466_p4 = p_Val2_4_35_6_fu_41426_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_717_fu_41476_p4() {
    tmp_717_fu_41476_p4 = p_Val2_12_35_6_fu_41442_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_718_fu_41486_p3() {
    tmp_718_fu_41486_p3 = (!dneg_35_6_fu_41418_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_35_6_fu_41418_p2.read()[0].to_bool())? tmp_716_fu_41466_p4.read(): tmp_717_fu_41476_p4.read());
}

void Sobel_phase_strm::thread_tmp_719_fu_51418_p2() {
    tmp_719_fu_51418_p2 = (sel_tmp71_fu_51405_p2.read() | ap_reg_ppstg_tmp_19_34_reg_59081_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_721_fu_56806_p3() {
    tmp_721_fu_56806_p3 = p_Val2_19_34_reg_67292.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_722_fu_51441_p1() {
    tmp_722_fu_51441_p1 = p_Val2_19_34_fu_51423_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_723_fu_7662_p4() {
    tmp_723_fu_7662_p4 = p_Val2_7_35_fu_7650_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_724_fu_7686_p4() {
    tmp_724_fu_7686_p4 = p_Val2_4_35_fu_7640_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_725_fu_7696_p1() {
    tmp_725_fu_7696_p1 = esl_zext<14,13>(tmp_724_fu_7686_p4.read());
}

void Sobel_phase_strm::thread_tmp_726_fu_18738_p4() {
    tmp_726_fu_18738_p4 = y_V_1_36_1_fu_18723_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_727_fu_18762_p4() {
    tmp_727_fu_18762_p4 = x_V_1_36_1_fu_18718_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_728_fu_18830_p1() {
    tmp_728_fu_18830_p1 = esl_zext<15,12>(tmp_27_36_2_fu_18820_p4.read());
}

void Sobel_phase_strm::thread_tmp_729_fu_18840_p4() {
    tmp_729_fu_18840_p4 = x_V_1_36_2_fu_18798_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_72_fu_26018_p1() {
    tmp_72_fu_26018_p1 = esl_zext<15,10>(tmp_27_3_4_fu_26008_p4.read());
}

void Sobel_phase_strm::thread_tmp_730_fu_30841_p1() {
    tmp_730_fu_30841_p1 = esl_zext<15,11>(tmp_27_36_3_reg_61696.read());
}

void Sobel_phase_strm::thread_tmp_732_fu_30902_p1() {
    tmp_732_fu_30902_p1 = esl_zext<15,10>(tmp_27_36_4_fu_30892_p4.read());
}

void Sobel_phase_strm::thread_tmp_733_fu_30912_p4() {
    tmp_733_fu_30912_p4 = x_V_1_36_4_fu_30870_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_734_fu_41576_p1() {
    tmp_734_fu_41576_p1 = esl_zext<15,9>(tmp_27_36_5_reg_64110.read());
}

void Sobel_phase_strm::thread_tmp_736_fu_41619_p4() {
    tmp_736_fu_41619_p4 = p_Val2_4_36_6_fu_41579_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_737_fu_41629_p4() {
    tmp_737_fu_41629_p4 = p_Val2_12_36_6_fu_41595_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_738_fu_41639_p3() {
    tmp_738_fu_41639_p3 = (!dneg_36_6_fu_41571_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_36_6_fu_41571_p2.read()[0].to_bool())? tmp_736_fu_41619_p4.read(): tmp_737_fu_41629_p4.read());
}

void Sobel_phase_strm::thread_tmp_739_fu_51545_p2() {
    tmp_739_fu_51545_p2 = (sel_tmp73_fu_51532_p2.read() | ap_reg_ppstg_tmp_19_35_reg_59119_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_73_fu_26028_p4() {
    tmp_73_fu_26028_p4 = x_V_1_3_4_fu_25986_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_741_fu_56832_p3() {
    tmp_741_fu_56832_p3 = p_Val2_19_35_reg_67309.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_742_fu_51568_p1() {
    tmp_742_fu_51568_p1 = p_Val2_19_35_fu_51550_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_743_fu_7780_p4() {
    tmp_743_fu_7780_p4 = p_Val2_7_36_fu_7768_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_744_fu_7804_p4() {
    tmp_744_fu_7804_p4 = p_Val2_4_36_fu_7758_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_745_fu_7814_p1() {
    tmp_745_fu_7814_p1 = esl_zext<14,13>(tmp_744_fu_7804_p4.read());
}

void Sobel_phase_strm::thread_tmp_746_fu_18932_p4() {
    tmp_746_fu_18932_p4 = y_V_1_37_1_fu_18917_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_747_fu_18956_p4() {
    tmp_747_fu_18956_p4 = x_V_1_37_1_fu_18912_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_748_fu_19024_p1() {
    tmp_748_fu_19024_p1 = esl_zext<15,12>(tmp_27_37_2_fu_19014_p4.read());
}

void Sobel_phase_strm::thread_tmp_749_fu_19034_p4() {
    tmp_749_fu_19034_p4 = x_V_1_37_2_fu_18992_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_74_fu_36527_p1() {
    tmp_74_fu_36527_p1 = esl_zext<15,9>(tmp_27_3_5_reg_62988.read());
}

void Sobel_phase_strm::thread_tmp_750_fu_30989_p1() {
    tmp_750_fu_30989_p1 = esl_zext<15,11>(tmp_27_37_3_reg_61730.read());
}

void Sobel_phase_strm::thread_tmp_752_fu_31050_p1() {
    tmp_752_fu_31050_p1 = esl_zext<15,10>(tmp_27_37_4_fu_31040_p4.read());
}

void Sobel_phase_strm::thread_tmp_753_fu_31060_p4() {
    tmp_753_fu_31060_p4 = x_V_1_37_4_fu_31018_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_754_fu_41729_p1() {
    tmp_754_fu_41729_p1 = esl_zext<15,9>(tmp_27_37_5_reg_64144.read());
}

void Sobel_phase_strm::thread_tmp_756_fu_41772_p4() {
    tmp_756_fu_41772_p4 = p_Val2_4_37_6_fu_41732_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_757_fu_41782_p4() {
    tmp_757_fu_41782_p4 = p_Val2_12_37_6_fu_41748_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_758_fu_41792_p3() {
    tmp_758_fu_41792_p3 = (!dneg_37_6_fu_41724_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_37_6_fu_41724_p2.read()[0].to_bool())? tmp_756_fu_41772_p4.read(): tmp_757_fu_41782_p4.read());
}

void Sobel_phase_strm::thread_tmp_759_fu_51672_p2() {
    tmp_759_fu_51672_p2 = (sel_tmp75_fu_51659_p2.read() | ap_reg_ppstg_tmp_19_36_reg_59157_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_761_fu_56858_p3() {
    tmp_761_fu_56858_p3 = p_Val2_19_36_reg_67326.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_762_fu_51695_p1() {
    tmp_762_fu_51695_p1 = p_Val2_19_36_fu_51677_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_763_fu_7898_p4() {
    tmp_763_fu_7898_p4 = p_Val2_7_37_fu_7886_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_764_fu_7922_p4() {
    tmp_764_fu_7922_p4 = p_Val2_4_37_fu_7876_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_765_fu_7932_p1() {
    tmp_765_fu_7932_p1 = esl_zext<14,13>(tmp_764_fu_7922_p4.read());
}

void Sobel_phase_strm::thread_tmp_766_fu_19126_p4() {
    tmp_766_fu_19126_p4 = y_V_1_38_1_fu_19111_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_767_fu_19150_p4() {
    tmp_767_fu_19150_p4 = x_V_1_38_1_fu_19106_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_768_fu_19218_p1() {
    tmp_768_fu_19218_p1 = esl_zext<15,12>(tmp_27_38_2_fu_19208_p4.read());
}

void Sobel_phase_strm::thread_tmp_769_fu_19228_p4() {
    tmp_769_fu_19228_p4 = x_V_1_38_2_fu_19186_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_76_fu_36570_p4() {
    tmp_76_fu_36570_p4 = p_Val2_4_3_6_fu_36530_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_770_fu_31137_p1() {
    tmp_770_fu_31137_p1 = esl_zext<15,11>(tmp_27_38_3_reg_61764.read());
}

void Sobel_phase_strm::thread_tmp_772_fu_31198_p1() {
    tmp_772_fu_31198_p1 = esl_zext<15,10>(tmp_27_38_4_fu_31188_p4.read());
}

void Sobel_phase_strm::thread_tmp_773_fu_31208_p4() {
    tmp_773_fu_31208_p4 = x_V_1_38_4_fu_31166_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_774_fu_41882_p1() {
    tmp_774_fu_41882_p1 = esl_zext<15,9>(tmp_27_38_5_reg_64178.read());
}

void Sobel_phase_strm::thread_tmp_776_fu_41925_p4() {
    tmp_776_fu_41925_p4 = p_Val2_4_38_6_fu_41885_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_777_fu_41935_p4() {
    tmp_777_fu_41935_p4 = p_Val2_12_38_6_fu_41901_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_778_fu_41945_p3() {
    tmp_778_fu_41945_p3 = (!dneg_38_6_fu_41877_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_38_6_fu_41877_p2.read()[0].to_bool())? tmp_776_fu_41925_p4.read(): tmp_777_fu_41935_p4.read());
}

void Sobel_phase_strm::thread_tmp_779_fu_51799_p2() {
    tmp_779_fu_51799_p2 = (sel_tmp77_fu_51786_p2.read() | ap_reg_ppstg_tmp_19_37_reg_59195_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_77_fu_36580_p4() {
    tmp_77_fu_36580_p4 = p_Val2_12_3_6_fu_36546_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_781_fu_56884_p3() {
    tmp_781_fu_56884_p3 = p_Val2_19_37_reg_67343.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_782_fu_51822_p1() {
    tmp_782_fu_51822_p1 = p_Val2_19_37_fu_51804_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_783_fu_8016_p4() {
    tmp_783_fu_8016_p4 = p_Val2_7_38_fu_8004_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_784_fu_8040_p4() {
    tmp_784_fu_8040_p4 = p_Val2_4_38_fu_7994_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_785_fu_8050_p1() {
    tmp_785_fu_8050_p1 = esl_zext<14,13>(tmp_784_fu_8040_p4.read());
}

void Sobel_phase_strm::thread_tmp_786_fu_19320_p4() {
    tmp_786_fu_19320_p4 = y_V_1_39_1_fu_19305_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_787_fu_19344_p4() {
    tmp_787_fu_19344_p4 = x_V_1_39_1_fu_19300_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_788_fu_19412_p1() {
    tmp_788_fu_19412_p1 = esl_zext<15,12>(tmp_27_39_2_fu_19402_p4.read());
}

void Sobel_phase_strm::thread_tmp_789_fu_19422_p4() {
    tmp_789_fu_19422_p4 = x_V_1_39_2_fu_19380_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_78_fu_36590_p3() {
    tmp_78_fu_36590_p3 = (!dneg_3_6_fu_36522_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_3_6_fu_36522_p2.read()[0].to_bool())? tmp_76_fu_36570_p4.read(): tmp_77_fu_36580_p4.read());
}

void Sobel_phase_strm::thread_tmp_790_fu_31285_p1() {
    tmp_790_fu_31285_p1 = esl_zext<15,11>(tmp_27_39_3_reg_61798.read());
}

void Sobel_phase_strm::thread_tmp_792_fu_31346_p1() {
    tmp_792_fu_31346_p1 = esl_zext<15,10>(tmp_27_39_4_fu_31336_p4.read());
}

void Sobel_phase_strm::thread_tmp_793_fu_31356_p4() {
    tmp_793_fu_31356_p4 = x_V_1_39_4_fu_31314_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_794_fu_42035_p1() {
    tmp_794_fu_42035_p1 = esl_zext<15,9>(tmp_27_39_5_reg_64212.read());
}

void Sobel_phase_strm::thread_tmp_796_fu_42078_p4() {
    tmp_796_fu_42078_p4 = p_Val2_4_39_6_fu_42038_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_797_fu_42088_p4() {
    tmp_797_fu_42088_p4 = p_Val2_12_39_6_fu_42054_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_798_fu_42098_p3() {
    tmp_798_fu_42098_p3 = (!dneg_39_6_fu_42030_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_39_6_fu_42030_p2.read()[0].to_bool())? tmp_796_fu_42078_p4.read(): tmp_797_fu_42088_p4.read());
}

void Sobel_phase_strm::thread_tmp_799_fu_51926_p2() {
    tmp_799_fu_51926_p2 = (sel_tmp79_fu_51913_p2.read() | ap_reg_ppstg_tmp_19_38_reg_59233_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_79_fu_47354_p2() {
    tmp_79_fu_47354_p2 = (sel_tmp_fu_47341_p2.read() | ap_reg_ppstg_tmp_19_3_reg_57865_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_7_fu_11856_p4() {
    tmp_7_fu_11856_p4 = x_V_1_0_2_fu_11814_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_801_fu_56910_p3() {
    tmp_801_fu_56910_p3 = p_Val2_19_38_reg_67360.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_802_fu_51949_p1() {
    tmp_802_fu_51949_p1 = p_Val2_19_38_fu_51931_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_803_fu_8134_p4() {
    tmp_803_fu_8134_p4 = p_Val2_7_39_fu_8122_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_804_fu_8158_p4() {
    tmp_804_fu_8158_p4 = p_Val2_4_39_fu_8112_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_805_fu_8168_p1() {
    tmp_805_fu_8168_p1 = esl_zext<14,13>(tmp_804_fu_8158_p4.read());
}

void Sobel_phase_strm::thread_tmp_806_fu_19514_p4() {
    tmp_806_fu_19514_p4 = y_V_1_40_1_fu_19499_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_807_fu_19538_p4() {
    tmp_807_fu_19538_p4 = x_V_1_40_1_fu_19494_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_808_fu_19606_p1() {
    tmp_808_fu_19606_p1 = esl_zext<15,12>(tmp_27_40_2_fu_19596_p4.read());
}

void Sobel_phase_strm::thread_tmp_809_fu_19616_p4() {
    tmp_809_fu_19616_p4 = x_V_1_40_2_fu_19574_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_810_fu_31433_p1() {
    tmp_810_fu_31433_p1 = esl_zext<15,11>(tmp_27_40_3_reg_61832.read());
}

void Sobel_phase_strm::thread_tmp_812_fu_31494_p1() {
    tmp_812_fu_31494_p1 = esl_zext<15,10>(tmp_27_40_4_fu_31484_p4.read());
}

void Sobel_phase_strm::thread_tmp_813_fu_31504_p4() {
    tmp_813_fu_31504_p4 = x_V_1_40_4_fu_31462_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_814_fu_42188_p1() {
    tmp_814_fu_42188_p1 = esl_zext<15,9>(tmp_27_40_5_reg_64246.read());
}

void Sobel_phase_strm::thread_tmp_816_fu_42231_p4() {
    tmp_816_fu_42231_p4 = p_Val2_4_40_6_fu_42191_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_817_fu_42241_p4() {
    tmp_817_fu_42241_p4 = p_Val2_12_40_6_fu_42207_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_818_fu_42251_p3() {
    tmp_818_fu_42251_p3 = (!dneg_40_6_fu_42183_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_40_6_fu_42183_p2.read()[0].to_bool())? tmp_816_fu_42231_p4.read(): tmp_817_fu_42241_p4.read());
}

void Sobel_phase_strm::thread_tmp_819_fu_52053_p2() {
    tmp_819_fu_52053_p2 = (sel_tmp81_fu_52040_p2.read() | ap_reg_ppstg_tmp_19_39_reg_59271_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_81_fu_55974_p3() {
    tmp_81_fu_55974_p3 = p_Val2_19_3_reg_66748.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_821_fu_56936_p3() {
    tmp_821_fu_56936_p3 = p_Val2_19_39_reg_67377.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_822_fu_52076_p1() {
    tmp_822_fu_52076_p1 = p_Val2_19_39_fu_52058_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_823_fu_8252_p4() {
    tmp_823_fu_8252_p4 = p_Val2_7_40_fu_8240_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_824_fu_8276_p4() {
    tmp_824_fu_8276_p4 = p_Val2_4_40_fu_8230_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_825_fu_8286_p1() {
    tmp_825_fu_8286_p1 = esl_zext<14,13>(tmp_824_fu_8276_p4.read());
}

void Sobel_phase_strm::thread_tmp_826_fu_19708_p4() {
    tmp_826_fu_19708_p4 = y_V_1_41_1_fu_19693_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_827_fu_19732_p4() {
    tmp_827_fu_19732_p4 = x_V_1_41_1_fu_19688_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_828_fu_19800_p1() {
    tmp_828_fu_19800_p1 = esl_zext<15,12>(tmp_27_41_2_fu_19790_p4.read());
}

void Sobel_phase_strm::thread_tmp_829_fu_19810_p4() {
    tmp_829_fu_19810_p4 = x_V_1_41_2_fu_19768_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_82_fu_47377_p1() {
    tmp_82_fu_47377_p1 = p_Val2_19_3_fu_47359_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_830_fu_31581_p1() {
    tmp_830_fu_31581_p1 = esl_zext<15,11>(tmp_27_41_3_reg_61866.read());
}

void Sobel_phase_strm::thread_tmp_832_fu_31642_p1() {
    tmp_832_fu_31642_p1 = esl_zext<15,10>(tmp_27_41_4_fu_31632_p4.read());
}

void Sobel_phase_strm::thread_tmp_833_fu_31652_p4() {
    tmp_833_fu_31652_p4 = x_V_1_41_4_fu_31610_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_834_fu_42341_p1() {
    tmp_834_fu_42341_p1 = esl_zext<15,9>(tmp_27_41_5_reg_64280.read());
}

void Sobel_phase_strm::thread_tmp_836_fu_42384_p4() {
    tmp_836_fu_42384_p4 = p_Val2_4_41_6_fu_42344_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_837_fu_42394_p4() {
    tmp_837_fu_42394_p4 = p_Val2_12_41_6_fu_42360_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_838_fu_42404_p3() {
    tmp_838_fu_42404_p3 = (!dneg_41_6_fu_42336_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_41_6_fu_42336_p2.read()[0].to_bool())? tmp_836_fu_42384_p4.read(): tmp_837_fu_42394_p4.read());
}

void Sobel_phase_strm::thread_tmp_839_fu_52180_p2() {
    tmp_839_fu_52180_p2 = (sel_tmp83_fu_52167_p2.read() | ap_reg_ppstg_tmp_19_40_reg_59309_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_83_fu_3886_p4() {
    tmp_83_fu_3886_p4 = p_Val2_7_4_fu_3874_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_841_fu_56962_p3() {
    tmp_841_fu_56962_p3 = p_Val2_19_40_reg_67394.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_842_fu_52203_p1() {
    tmp_842_fu_52203_p1 = p_Val2_19_40_fu_52185_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_843_fu_8370_p4() {
    tmp_843_fu_8370_p4 = p_Val2_7_41_fu_8358_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_844_fu_8394_p4() {
    tmp_844_fu_8394_p4 = p_Val2_4_41_fu_8348_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_845_fu_8404_p1() {
    tmp_845_fu_8404_p1 = esl_zext<14,13>(tmp_844_fu_8394_p4.read());
}

void Sobel_phase_strm::thread_tmp_846_fu_19902_p4() {
    tmp_846_fu_19902_p4 = y_V_1_42_1_fu_19887_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_847_fu_19926_p4() {
    tmp_847_fu_19926_p4 = x_V_1_42_1_fu_19882_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_848_fu_19994_p1() {
    tmp_848_fu_19994_p1 = esl_zext<15,12>(tmp_27_42_2_fu_19984_p4.read());
}

void Sobel_phase_strm::thread_tmp_849_fu_20004_p4() {
    tmp_849_fu_20004_p4 = x_V_1_42_2_fu_19962_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_84_fu_3910_p4() {
    tmp_84_fu_3910_p4 = p_Val2_4_4_fu_3864_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_850_fu_31729_p1() {
    tmp_850_fu_31729_p1 = esl_zext<15,11>(tmp_27_42_3_reg_61900.read());
}

void Sobel_phase_strm::thread_tmp_852_fu_31790_p1() {
    tmp_852_fu_31790_p1 = esl_zext<15,10>(tmp_27_42_4_fu_31780_p4.read());
}

void Sobel_phase_strm::thread_tmp_853_fu_31800_p4() {
    tmp_853_fu_31800_p4 = x_V_1_42_4_fu_31758_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_854_fu_42494_p1() {
    tmp_854_fu_42494_p1 = esl_zext<15,9>(tmp_27_42_5_reg_64314.read());
}

void Sobel_phase_strm::thread_tmp_856_fu_42537_p4() {
    tmp_856_fu_42537_p4 = p_Val2_4_42_6_fu_42497_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_857_fu_42547_p4() {
    tmp_857_fu_42547_p4 = p_Val2_12_42_6_fu_42513_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_858_fu_42557_p3() {
    tmp_858_fu_42557_p3 = (!dneg_42_6_fu_42489_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_42_6_fu_42489_p2.read()[0].to_bool())? tmp_856_fu_42537_p4.read(): tmp_857_fu_42547_p4.read());
}

void Sobel_phase_strm::thread_tmp_859_fu_52307_p2() {
    tmp_859_fu_52307_p2 = (sel_tmp85_fu_52294_p2.read() | ap_reg_ppstg_tmp_19_41_reg_59347_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_85_fu_3920_p1() {
    tmp_85_fu_3920_p1 = esl_zext<14,13>(tmp_84_fu_3910_p4.read());
}

void Sobel_phase_strm::thread_tmp_861_fu_56988_p3() {
    tmp_861_fu_56988_p3 = p_Val2_19_41_reg_67411.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_862_fu_52330_p1() {
    tmp_862_fu_52330_p1 = p_Val2_19_41_fu_52312_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_863_fu_8488_p4() {
    tmp_863_fu_8488_p4 = p_Val2_7_42_fu_8476_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_864_fu_8512_p4() {
    tmp_864_fu_8512_p4 = p_Val2_4_42_fu_8466_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_865_fu_8522_p1() {
    tmp_865_fu_8522_p1 = esl_zext<14,13>(tmp_864_fu_8512_p4.read());
}

void Sobel_phase_strm::thread_tmp_866_fu_20096_p4() {
    tmp_866_fu_20096_p4 = y_V_1_43_1_fu_20081_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_867_fu_20120_p4() {
    tmp_867_fu_20120_p4 = x_V_1_43_1_fu_20076_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_868_fu_20188_p1() {
    tmp_868_fu_20188_p1 = esl_zext<15,12>(tmp_27_43_2_fu_20178_p4.read());
}

void Sobel_phase_strm::thread_tmp_869_fu_20198_p4() {
    tmp_869_fu_20198_p4 = x_V_1_43_2_fu_20156_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_86_fu_12530_p4() {
    tmp_86_fu_12530_p4 = y_V_1_4_1_fu_12515_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_870_fu_31877_p1() {
    tmp_870_fu_31877_p1 = esl_zext<15,11>(tmp_27_43_3_reg_61934.read());
}

void Sobel_phase_strm::thread_tmp_872_fu_31938_p1() {
    tmp_872_fu_31938_p1 = esl_zext<15,10>(tmp_27_43_4_fu_31928_p4.read());
}

void Sobel_phase_strm::thread_tmp_873_fu_31948_p4() {
    tmp_873_fu_31948_p4 = x_V_1_43_4_fu_31906_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_874_fu_42647_p1() {
    tmp_874_fu_42647_p1 = esl_zext<15,9>(tmp_27_43_5_reg_64348.read());
}

void Sobel_phase_strm::thread_tmp_876_fu_42690_p4() {
    tmp_876_fu_42690_p4 = p_Val2_4_43_6_fu_42650_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_877_fu_42700_p4() {
    tmp_877_fu_42700_p4 = p_Val2_12_43_6_fu_42666_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_878_fu_42710_p3() {
    tmp_878_fu_42710_p3 = (!dneg_43_6_fu_42642_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_43_6_fu_42642_p2.read()[0].to_bool())? tmp_876_fu_42690_p4.read(): tmp_877_fu_42700_p4.read());
}

void Sobel_phase_strm::thread_tmp_879_fu_52434_p2() {
    tmp_879_fu_52434_p2 = (sel_tmp87_fu_52421_p2.read() | ap_reg_ppstg_tmp_19_42_reg_59385_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_87_fu_12554_p4() {
    tmp_87_fu_12554_p4 = x_V_1_4_1_fu_12510_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_881_fu_57014_p3() {
    tmp_881_fu_57014_p3 = p_Val2_19_42_reg_67428.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_882_fu_52457_p1() {
    tmp_882_fu_52457_p1 = p_Val2_19_42_fu_52439_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_883_fu_8606_p4() {
    tmp_883_fu_8606_p4 = p_Val2_7_43_fu_8594_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_884_fu_8630_p4() {
    tmp_884_fu_8630_p4 = p_Val2_4_43_fu_8584_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_885_fu_8640_p1() {
    tmp_885_fu_8640_p1 = esl_zext<14,13>(tmp_884_fu_8630_p4.read());
}

void Sobel_phase_strm::thread_tmp_886_fu_20290_p4() {
    tmp_886_fu_20290_p4 = y_V_1_44_1_fu_20275_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_887_fu_20314_p4() {
    tmp_887_fu_20314_p4 = x_V_1_44_1_fu_20270_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_888_fu_20382_p1() {
    tmp_888_fu_20382_p1 = esl_zext<15,12>(tmp_27_44_2_fu_20372_p4.read());
}

void Sobel_phase_strm::thread_tmp_889_fu_20392_p4() {
    tmp_889_fu_20392_p4 = x_V_1_44_2_fu_20350_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_88_fu_12622_p1() {
    tmp_88_fu_12622_p1 = esl_zext<15,12>(tmp_27_4_2_fu_12612_p4.read());
}

void Sobel_phase_strm::thread_tmp_890_fu_32025_p1() {
    tmp_890_fu_32025_p1 = esl_zext<15,11>(tmp_27_44_3_reg_61968.read());
}

void Sobel_phase_strm::thread_tmp_892_fu_32086_p1() {
    tmp_892_fu_32086_p1 = esl_zext<15,10>(tmp_27_44_4_fu_32076_p4.read());
}

void Sobel_phase_strm::thread_tmp_893_fu_32096_p4() {
    tmp_893_fu_32096_p4 = x_V_1_44_4_fu_32054_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_894_fu_42800_p1() {
    tmp_894_fu_42800_p1 = esl_zext<15,9>(tmp_27_44_5_reg_64382.read());
}

void Sobel_phase_strm::thread_tmp_896_fu_42843_p4() {
    tmp_896_fu_42843_p4 = p_Val2_4_44_6_fu_42803_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_897_fu_42853_p4() {
    tmp_897_fu_42853_p4 = p_Val2_12_44_6_fu_42819_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_898_fu_42863_p3() {
    tmp_898_fu_42863_p3 = (!dneg_44_6_fu_42795_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_44_6_fu_42795_p2.read()[0].to_bool())? tmp_896_fu_42843_p4.read(): tmp_897_fu_42853_p4.read());
}

void Sobel_phase_strm::thread_tmp_899_fu_52561_p2() {
    tmp_899_fu_52561_p2 = (sel_tmp89_fu_52548_p2.read() | ap_reg_ppstg_tmp_19_43_reg_59423_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_89_fu_12632_p4() {
    tmp_89_fu_12632_p4 = x_V_1_4_2_fu_12590_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_8_fu_11754_p4() {
    tmp_8_fu_11754_p4 = y_V_1_0_1_fu_11739_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_901_fu_57040_p3() {
    tmp_901_fu_57040_p3 = p_Val2_19_43_reg_67445.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_902_fu_52584_p1() {
    tmp_902_fu_52584_p1 = p_Val2_19_43_fu_52566_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_903_fu_8724_p4() {
    tmp_903_fu_8724_p4 = p_Val2_7_44_fu_8712_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_904_fu_8748_p4() {
    tmp_904_fu_8748_p4 = p_Val2_4_44_fu_8702_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_905_fu_8758_p1() {
    tmp_905_fu_8758_p1 = esl_zext<14,13>(tmp_904_fu_8748_p4.read());
}

void Sobel_phase_strm::thread_tmp_906_fu_20484_p4() {
    tmp_906_fu_20484_p4 = y_V_1_45_1_fu_20469_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_907_fu_20508_p4() {
    tmp_907_fu_20508_p4 = x_V_1_45_1_fu_20464_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_908_fu_20576_p1() {
    tmp_908_fu_20576_p1 = esl_zext<15,12>(tmp_27_45_2_fu_20566_p4.read());
}

void Sobel_phase_strm::thread_tmp_909_fu_20586_p4() {
    tmp_909_fu_20586_p4 = x_V_1_45_2_fu_20544_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_90_fu_26105_p1() {
    tmp_90_fu_26105_p1 = esl_zext<15,11>(tmp_27_4_3_reg_60608.read());
}

void Sobel_phase_strm::thread_tmp_910_fu_32173_p1() {
    tmp_910_fu_32173_p1 = esl_zext<15,11>(tmp_27_45_3_reg_62002.read());
}

void Sobel_phase_strm::thread_tmp_912_fu_32234_p1() {
    tmp_912_fu_32234_p1 = esl_zext<15,10>(tmp_27_45_4_fu_32224_p4.read());
}

void Sobel_phase_strm::thread_tmp_913_fu_32244_p4() {
    tmp_913_fu_32244_p4 = x_V_1_45_4_fu_32202_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_914_fu_42953_p1() {
    tmp_914_fu_42953_p1 = esl_zext<15,9>(tmp_27_45_5_reg_64416.read());
}

void Sobel_phase_strm::thread_tmp_916_fu_42996_p4() {
    tmp_916_fu_42996_p4 = p_Val2_4_45_6_fu_42956_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_917_fu_43006_p4() {
    tmp_917_fu_43006_p4 = p_Val2_12_45_6_fu_42972_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_918_fu_43016_p3() {
    tmp_918_fu_43016_p3 = (!dneg_45_6_fu_42948_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_45_6_fu_42948_p2.read()[0].to_bool())? tmp_916_fu_42996_p4.read(): tmp_917_fu_43006_p4.read());
}

void Sobel_phase_strm::thread_tmp_919_fu_52688_p2() {
    tmp_919_fu_52688_p2 = (sel_tmp91_fu_52675_p2.read() | ap_reg_ppstg_tmp_19_44_reg_59461_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_921_fu_57066_p3() {
    tmp_921_fu_57066_p3 = p_Val2_19_44_reg_67462.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_922_fu_52711_p1() {
    tmp_922_fu_52711_p1 = p_Val2_19_44_fu_52693_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_923_fu_8842_p4() {
    tmp_923_fu_8842_p4 = p_Val2_7_45_fu_8830_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_924_fu_8866_p4() {
    tmp_924_fu_8866_p4 = p_Val2_4_45_fu_8820_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_925_fu_8876_p1() {
    tmp_925_fu_8876_p1 = esl_zext<14,13>(tmp_924_fu_8866_p4.read());
}

void Sobel_phase_strm::thread_tmp_926_fu_20678_p4() {
    tmp_926_fu_20678_p4 = y_V_1_46_1_fu_20663_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_927_fu_20702_p4() {
    tmp_927_fu_20702_p4 = x_V_1_46_1_fu_20658_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_928_fu_20770_p1() {
    tmp_928_fu_20770_p1 = esl_zext<15,12>(tmp_27_46_2_fu_20760_p4.read());
}

void Sobel_phase_strm::thread_tmp_929_fu_20780_p4() {
    tmp_929_fu_20780_p4 = x_V_1_46_2_fu_20738_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_92_fu_26166_p1() {
    tmp_92_fu_26166_p1 = esl_zext<15,10>(tmp_27_4_4_fu_26156_p4.read());
}

void Sobel_phase_strm::thread_tmp_930_fu_32321_p1() {
    tmp_930_fu_32321_p1 = esl_zext<15,11>(tmp_27_46_3_reg_62036.read());
}

void Sobel_phase_strm::thread_tmp_932_fu_32382_p1() {
    tmp_932_fu_32382_p1 = esl_zext<15,10>(tmp_27_46_4_fu_32372_p4.read());
}

void Sobel_phase_strm::thread_tmp_933_fu_32392_p4() {
    tmp_933_fu_32392_p4 = x_V_1_46_4_fu_32350_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_934_fu_43106_p1() {
    tmp_934_fu_43106_p1 = esl_zext<15,9>(tmp_27_46_5_reg_64450.read());
}

void Sobel_phase_strm::thread_tmp_936_fu_43149_p4() {
    tmp_936_fu_43149_p4 = p_Val2_4_46_6_fu_43109_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_937_fu_43159_p4() {
    tmp_937_fu_43159_p4 = p_Val2_12_46_6_fu_43125_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_938_fu_43169_p3() {
    tmp_938_fu_43169_p3 = (!dneg_46_6_fu_43101_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_46_6_fu_43101_p2.read()[0].to_bool())? tmp_936_fu_43149_p4.read(): tmp_937_fu_43159_p4.read());
}

void Sobel_phase_strm::thread_tmp_939_fu_52815_p2() {
    tmp_939_fu_52815_p2 = (sel_tmp93_fu_52802_p2.read() | ap_reg_ppstg_tmp_19_45_reg_59499_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_93_fu_26176_p4() {
    tmp_93_fu_26176_p4 = x_V_1_4_4_fu_26134_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_941_fu_57092_p3() {
    tmp_941_fu_57092_p3 = p_Val2_19_45_reg_67479.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_942_fu_52838_p1() {
    tmp_942_fu_52838_p1 = p_Val2_19_45_fu_52820_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_943_fu_8960_p4() {
    tmp_943_fu_8960_p4 = p_Val2_7_46_fu_8948_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_944_fu_8984_p4() {
    tmp_944_fu_8984_p4 = p_Val2_4_46_fu_8938_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_945_fu_8994_p1() {
    tmp_945_fu_8994_p1 = esl_zext<14,13>(tmp_944_fu_8984_p4.read());
}

void Sobel_phase_strm::thread_tmp_946_fu_20872_p4() {
    tmp_946_fu_20872_p4 = y_V_1_47_1_fu_20857_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_947_fu_20896_p4() {
    tmp_947_fu_20896_p4 = x_V_1_47_1_fu_20852_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_948_fu_20964_p1() {
    tmp_948_fu_20964_p1 = esl_zext<15,12>(tmp_27_47_2_fu_20954_p4.read());
}

void Sobel_phase_strm::thread_tmp_949_fu_20974_p4() {
    tmp_949_fu_20974_p4 = x_V_1_47_2_fu_20932_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_94_fu_36680_p1() {
    tmp_94_fu_36680_p1 = esl_zext<15,9>(tmp_27_4_5_reg_63022.read());
}

void Sobel_phase_strm::thread_tmp_950_fu_32469_p1() {
    tmp_950_fu_32469_p1 = esl_zext<15,11>(tmp_27_47_3_reg_62070.read());
}

void Sobel_phase_strm::thread_tmp_952_fu_32530_p1() {
    tmp_952_fu_32530_p1 = esl_zext<15,10>(tmp_27_47_4_fu_32520_p4.read());
}

void Sobel_phase_strm::thread_tmp_953_fu_32540_p4() {
    tmp_953_fu_32540_p4 = x_V_1_47_4_fu_32498_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_954_fu_43259_p1() {
    tmp_954_fu_43259_p1 = esl_zext<15,9>(tmp_27_47_5_reg_64484.read());
}

void Sobel_phase_strm::thread_tmp_956_fu_43302_p4() {
    tmp_956_fu_43302_p4 = p_Val2_4_47_6_fu_43262_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_957_fu_43312_p4() {
    tmp_957_fu_43312_p4 = p_Val2_12_47_6_fu_43278_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_958_fu_43322_p3() {
    tmp_958_fu_43322_p3 = (!dneg_47_6_fu_43254_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_47_6_fu_43254_p2.read()[0].to_bool())? tmp_956_fu_43302_p4.read(): tmp_957_fu_43312_p4.read());
}

void Sobel_phase_strm::thread_tmp_959_fu_52942_p2() {
    tmp_959_fu_52942_p2 = (sel_tmp95_fu_52929_p2.read() | ap_reg_ppstg_tmp_19_46_reg_59537_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_961_fu_57118_p3() {
    tmp_961_fu_57118_p3 = p_Val2_19_46_reg_67496.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_962_fu_52965_p1() {
    tmp_962_fu_52965_p1 = p_Val2_19_46_fu_52947_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_963_fu_9078_p4() {
    tmp_963_fu_9078_p4 = p_Val2_7_47_fu_9066_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_964_fu_9102_p4() {
    tmp_964_fu_9102_p4 = p_Val2_4_47_fu_9056_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_965_fu_9112_p1() {
    tmp_965_fu_9112_p1 = esl_zext<14,13>(tmp_964_fu_9102_p4.read());
}

void Sobel_phase_strm::thread_tmp_966_fu_21066_p4() {
    tmp_966_fu_21066_p4 = y_V_1_48_1_fu_21051_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_967_fu_21090_p4() {
    tmp_967_fu_21090_p4 = x_V_1_48_1_fu_21046_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_968_fu_21158_p1() {
    tmp_968_fu_21158_p1 = esl_zext<15,12>(tmp_27_48_2_fu_21148_p4.read());
}

void Sobel_phase_strm::thread_tmp_969_fu_21168_p4() {
    tmp_969_fu_21168_p4 = x_V_1_48_2_fu_21126_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_96_fu_36723_p4() {
    tmp_96_fu_36723_p4 = p_Val2_4_4_6_fu_36683_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_970_fu_32617_p1() {
    tmp_970_fu_32617_p1 = esl_zext<15,11>(tmp_27_48_3_reg_62104.read());
}

void Sobel_phase_strm::thread_tmp_972_fu_32678_p1() {
    tmp_972_fu_32678_p1 = esl_zext<15,10>(tmp_27_48_4_fu_32668_p4.read());
}

void Sobel_phase_strm::thread_tmp_973_fu_32688_p4() {
    tmp_973_fu_32688_p4 = x_V_1_48_4_fu_32646_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_974_fu_43412_p1() {
    tmp_974_fu_43412_p1 = esl_zext<15,9>(tmp_27_48_5_reg_64518.read());
}

void Sobel_phase_strm::thread_tmp_976_fu_43455_p4() {
    tmp_976_fu_43455_p4 = p_Val2_4_48_6_fu_43415_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_977_fu_43465_p4() {
    tmp_977_fu_43465_p4 = p_Val2_12_48_6_fu_43431_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_978_fu_43475_p3() {
    tmp_978_fu_43475_p3 = (!dneg_48_6_fu_43407_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_48_6_fu_43407_p2.read()[0].to_bool())? tmp_976_fu_43455_p4.read(): tmp_977_fu_43465_p4.read());
}

void Sobel_phase_strm::thread_tmp_979_fu_53069_p2() {
    tmp_979_fu_53069_p2 = (sel_tmp97_fu_53056_p2.read() | ap_reg_ppstg_tmp_19_47_reg_59575_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_97_fu_36733_p4() {
    tmp_97_fu_36733_p4 = p_Val2_12_4_6_fu_36699_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_981_fu_57144_p3() {
    tmp_981_fu_57144_p3 = p_Val2_19_47_reg_67513.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_982_fu_53092_p1() {
    tmp_982_fu_53092_p1 = p_Val2_19_47_fu_53074_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_983_fu_9196_p4() {
    tmp_983_fu_9196_p4 = p_Val2_7_48_fu_9184_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_984_fu_9220_p4() {
    tmp_984_fu_9220_p4 = p_Val2_4_48_fu_9174_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_985_fu_9230_p1() {
    tmp_985_fu_9230_p1 = esl_zext<14,13>(tmp_984_fu_9220_p4.read());
}

void Sobel_phase_strm::thread_tmp_986_fu_21260_p4() {
    tmp_986_fu_21260_p4 = y_V_1_49_1_fu_21245_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_987_fu_21284_p4() {
    tmp_987_fu_21284_p4 = x_V_1_49_1_fu_21240_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_988_fu_21352_p1() {
    tmp_988_fu_21352_p1 = esl_zext<15,12>(tmp_27_49_2_fu_21342_p4.read());
}

void Sobel_phase_strm::thread_tmp_989_fu_21362_p4() {
    tmp_989_fu_21362_p4 = x_V_1_49_2_fu_21320_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_98_fu_36743_p3() {
    tmp_98_fu_36743_p3 = (!dneg_4_6_fu_36675_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_4_6_fu_36675_p2.read()[0].to_bool())? tmp_96_fu_36723_p4.read(): tmp_97_fu_36733_p4.read());
}

void Sobel_phase_strm::thread_tmp_990_fu_32765_p1() {
    tmp_990_fu_32765_p1 = esl_zext<15,11>(tmp_27_49_3_reg_62138.read());
}

void Sobel_phase_strm::thread_tmp_992_fu_32826_p1() {
    tmp_992_fu_32826_p1 = esl_zext<15,10>(tmp_27_49_4_fu_32816_p4.read());
}

void Sobel_phase_strm::thread_tmp_993_fu_32836_p4() {
    tmp_993_fu_32836_p4 = x_V_1_49_4_fu_32794_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_994_fu_43565_p1() {
    tmp_994_fu_43565_p1 = esl_zext<15,9>(tmp_27_49_5_reg_64552.read());
}

void Sobel_phase_strm::thread_tmp_996_fu_43608_p4() {
    tmp_996_fu_43608_p4 = p_Val2_4_49_6_fu_43568_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_997_fu_43618_p4() {
    tmp_997_fu_43618_p4 = p_Val2_12_49_6_fu_43584_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_998_fu_43628_p3() {
    tmp_998_fu_43628_p3 = (!dneg_49_6_fu_43560_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_49_6_fu_43560_p2.read()[0].to_bool())? tmp_996_fu_43608_p4.read(): tmp_997_fu_43618_p4.read());
}

void Sobel_phase_strm::thread_tmp_999_fu_53196_p2() {
    tmp_999_fu_53196_p2 = (sel_tmp99_fu_53183_p2.read() | ap_reg_ppstg_tmp_19_48_reg_59613_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_99_fu_47481_p2() {
    tmp_99_fu_47481_p2 = (sel_tmp8_fu_47468_p2.read() | ap_reg_ppstg_tmp_19_4_reg_57903_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_9_fu_25513_p1() {
    tmp_9_fu_25513_p1 = esl_zext<15,11>(tmp_27_0_3_reg_60472.read());
}

void Sobel_phase_strm::thread_tmp_s_fu_3380_p2() {
    tmp_s_fu_3380_p2 = (!grad_y_V_pixel_0_dout.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grad_y_V_pixel_0_dout.read() == ap_const_lv8_0);
}

void Sobel_phase_strm::thread_x0_V_10_cast_fu_4674_p1() {
    x0_V_10_cast_fu_4674_p1 = esl_zext<14,13>(x0_V_10_fu_4666_p3.read());
}

void Sobel_phase_strm::thread_x0_V_10_fu_4666_p3() {
    x0_V_10_fu_4666_p3 = esl_concat<8,5>(grad_x_V_pixel_11_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_11_cast_fu_4792_p1() {
    x0_V_11_cast_fu_4792_p1 = esl_zext<14,13>(x0_V_11_fu_4784_p3.read());
}

void Sobel_phase_strm::thread_x0_V_11_fu_4784_p3() {
    x0_V_11_fu_4784_p3 = esl_concat<8,5>(grad_x_V_pixel_12_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_12_cast_fu_4910_p1() {
    x0_V_12_cast_fu_4910_p1 = esl_zext<14,13>(x0_V_12_fu_4902_p3.read());
}

void Sobel_phase_strm::thread_x0_V_12_fu_4902_p3() {
    x0_V_12_fu_4902_p3 = esl_concat<8,5>(grad_x_V_pixel_13_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_13_cast_fu_5028_p1() {
    x0_V_13_cast_fu_5028_p1 = esl_zext<14,13>(x0_V_13_fu_5020_p3.read());
}

void Sobel_phase_strm::thread_x0_V_13_fu_5020_p3() {
    x0_V_13_fu_5020_p3 = esl_concat<8,5>(grad_x_V_pixel_14_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_14_cast_fu_5146_p1() {
    x0_V_14_cast_fu_5146_p1 = esl_zext<14,13>(x0_V_14_fu_5138_p3.read());
}

void Sobel_phase_strm::thread_x0_V_14_fu_5138_p3() {
    x0_V_14_fu_5138_p3 = esl_concat<8,5>(grad_x_V_pixel_15_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_15_cast_fu_5264_p1() {
    x0_V_15_cast_fu_5264_p1 = esl_zext<14,13>(x0_V_15_fu_5256_p3.read());
}

void Sobel_phase_strm::thread_x0_V_15_fu_5256_p3() {
    x0_V_15_fu_5256_p3 = esl_concat<8,5>(grad_x_V_pixel_16_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_16_cast_fu_5382_p1() {
    x0_V_16_cast_fu_5382_p1 = esl_zext<14,13>(x0_V_16_fu_5374_p3.read());
}

void Sobel_phase_strm::thread_x0_V_16_fu_5374_p3() {
    x0_V_16_fu_5374_p3 = esl_concat<8,5>(grad_x_V_pixel_17_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_17_cast_fu_5500_p1() {
    x0_V_17_cast_fu_5500_p1 = esl_zext<14,13>(x0_V_17_fu_5492_p3.read());
}

void Sobel_phase_strm::thread_x0_V_17_fu_5492_p3() {
    x0_V_17_fu_5492_p3 = esl_concat<8,5>(grad_x_V_pixel_18_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_18_cast_fu_5618_p1() {
    x0_V_18_cast_fu_5618_p1 = esl_zext<14,13>(x0_V_18_fu_5610_p3.read());
}

void Sobel_phase_strm::thread_x0_V_18_fu_5610_p3() {
    x0_V_18_fu_5610_p3 = esl_concat<8,5>(grad_x_V_pixel_19_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_19_cast_fu_5736_p1() {
    x0_V_19_cast_fu_5736_p1 = esl_zext<14,13>(x0_V_19_fu_5728_p3.read());
}

void Sobel_phase_strm::thread_x0_V_19_fu_5728_p3() {
    x0_V_19_fu_5728_p3 = esl_concat<8,5>(grad_x_V_pixel_20_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_1_cast_fu_3494_p1() {
    x0_V_1_cast_fu_3494_p1 = esl_zext<14,13>(x0_V_1_fu_3486_p3.read());
}

void Sobel_phase_strm::thread_x0_V_1_fu_3486_p3() {
    x0_V_1_fu_3486_p3 = esl_concat<8,5>(grad_x_V_pixel_1_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_20_cast_fu_5854_p1() {
    x0_V_20_cast_fu_5854_p1 = esl_zext<14,13>(x0_V_20_fu_5846_p3.read());
}

}

