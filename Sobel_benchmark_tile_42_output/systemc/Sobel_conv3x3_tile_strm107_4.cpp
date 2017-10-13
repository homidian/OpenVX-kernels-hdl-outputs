#include "Sobel_conv3x3_tile_strm107.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_conv3x3_tile_strm107::thread_tmp_903_fu_5879_p2() {
    tmp_903_fu_5879_p2 = (!tmp_125_26_fu_5867_p2.read().is_01() || !tmp_3070_cast_fu_5873_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_26_fu_5867_p2.read()) - sc_biguint<11>(tmp_3070_cast_fu_5873_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_904_fu_5927_p2() {
    tmp_904_fu_5927_p2 = (icmp28_fu_5901_p2.read() | tmp_1094_fu_5907_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_905_fu_5984_p2() {
    tmp_905_fu_5984_p2 = (!tmp_125_27_fu_5972_p2.read().is_01() || !tmp_3075_cast_fu_5978_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_27_fu_5972_p2.read()) - sc_biguint<11>(tmp_3075_cast_fu_5978_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_906_fu_6032_p2() {
    tmp_906_fu_6032_p2 = (icmp29_fu_6006_p2.read() | tmp_1097_fu_6012_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_907_fu_6089_p2() {
    tmp_907_fu_6089_p2 = (!tmp_125_28_fu_6077_p2.read().is_01() || !tmp_3080_cast_fu_6083_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_28_fu_6077_p2.read()) - sc_biguint<11>(tmp_3080_cast_fu_6083_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_908_fu_6137_p2() {
    tmp_908_fu_6137_p2 = (icmp30_fu_6111_p2.read() | tmp_1100_fu_6117_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_909_fu_6194_p2() {
    tmp_909_fu_6194_p2 = (!tmp_125_29_fu_6182_p2.read().is_01() || !tmp_3085_cast_fu_6188_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_29_fu_6182_p2.read()) - sc_biguint<11>(tmp_3085_cast_fu_6188_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_910_fu_6242_p2() {
    tmp_910_fu_6242_p2 = (icmp31_fu_6216_p2.read() | tmp_1103_fu_6222_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_911_fu_6299_p2() {
    tmp_911_fu_6299_p2 = (!tmp_125_30_fu_6287_p2.read().is_01() || !tmp_3090_cast_fu_6293_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_30_fu_6287_p2.read()) - sc_biguint<11>(tmp_3090_cast_fu_6293_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_912_fu_6347_p2() {
    tmp_912_fu_6347_p2 = (icmp32_fu_6321_p2.read() | tmp_1106_fu_6327_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_913_fu_6404_p2() {
    tmp_913_fu_6404_p2 = (!tmp_125_31_fu_6392_p2.read().is_01() || !tmp_3095_cast_fu_6398_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_31_fu_6392_p2.read()) - sc_biguint<11>(tmp_3095_cast_fu_6398_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_914_fu_6452_p2() {
    tmp_914_fu_6452_p2 = (icmp33_fu_6426_p2.read() | tmp_1109_fu_6432_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_915_fu_6509_p2() {
    tmp_915_fu_6509_p2 = (!tmp_125_32_fu_6497_p2.read().is_01() || !tmp_3100_cast_fu_6503_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_32_fu_6497_p2.read()) - sc_biguint<11>(tmp_3100_cast_fu_6503_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_916_fu_6557_p2() {
    tmp_916_fu_6557_p2 = (icmp34_fu_6531_p2.read() | tmp_1112_fu_6537_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_917_fu_6614_p2() {
    tmp_917_fu_6614_p2 = (!tmp_125_33_fu_6602_p2.read().is_01() || !tmp_3105_cast_fu_6608_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_33_fu_6602_p2.read()) - sc_biguint<11>(tmp_3105_cast_fu_6608_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_918_fu_6662_p2() {
    tmp_918_fu_6662_p2 = (icmp35_fu_6636_p2.read() | tmp_1115_fu_6642_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_919_fu_6719_p2() {
    tmp_919_fu_6719_p2 = (!tmp_125_34_fu_6707_p2.read().is_01() || !tmp_3110_cast_fu_6713_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_34_fu_6707_p2.read()) - sc_biguint<11>(tmp_3110_cast_fu_6713_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_920_fu_6767_p2() {
    tmp_920_fu_6767_p2 = (icmp36_fu_6741_p2.read() | tmp_1118_fu_6747_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_921_fu_6824_p2() {
    tmp_921_fu_6824_p2 = (!tmp_125_35_fu_6812_p2.read().is_01() || !tmp_3115_cast_fu_6818_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_35_fu_6812_p2.read()) - sc_biguint<11>(tmp_3115_cast_fu_6818_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_922_fu_6872_p2() {
    tmp_922_fu_6872_p2 = (icmp37_fu_6846_p2.read() | tmp_1121_fu_6852_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_923_fu_6929_p2() {
    tmp_923_fu_6929_p2 = (!tmp_125_36_fu_6917_p2.read().is_01() || !tmp_3120_cast_fu_6923_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_36_fu_6917_p2.read()) - sc_biguint<11>(tmp_3120_cast_fu_6923_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_924_fu_6977_p2() {
    tmp_924_fu_6977_p2 = (icmp38_fu_6951_p2.read() | tmp_1124_fu_6957_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_925_fu_7034_p2() {
    tmp_925_fu_7034_p2 = (!tmp_125_37_fu_7022_p2.read().is_01() || !tmp_3125_cast_fu_7028_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_37_fu_7022_p2.read()) - sc_biguint<11>(tmp_3125_cast_fu_7028_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_926_fu_7082_p2() {
    tmp_926_fu_7082_p2 = (icmp39_fu_7056_p2.read() | tmp_1127_fu_7062_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_927_fu_7139_p2() {
    tmp_927_fu_7139_p2 = (!tmp_125_38_fu_7127_p2.read().is_01() || !tmp_3130_cast_fu_7133_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_38_fu_7127_p2.read()) - sc_biguint<11>(tmp_3130_cast_fu_7133_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_928_fu_7187_p2() {
    tmp_928_fu_7187_p2 = (icmp40_fu_7161_p2.read() | tmp_1130_fu_7167_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_929_fu_7244_p2() {
    tmp_929_fu_7244_p2 = (!tmp_125_39_fu_7232_p2.read().is_01() || !tmp_3135_cast_fu_7238_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_39_fu_7232_p2.read()) - sc_biguint<11>(tmp_3135_cast_fu_7238_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_930_fu_7292_p2() {
    tmp_930_fu_7292_p2 = (icmp41_fu_7266_p2.read() | tmp_1133_fu_7272_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_931_fu_7349_p2() {
    tmp_931_fu_7349_p2 = (!tmp_125_40_fu_7337_p2.read().is_01() || !tmp_3140_cast_fu_7343_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_40_fu_7337_p2.read()) - sc_biguint<11>(tmp_3140_cast_fu_7343_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_tmp_932_fu_7397_p2() {
    tmp_932_fu_7397_p2 = (icmp42_fu_7371_p2.read() | tmp_1136_fu_7377_p3.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_0_fu_3098_p3() {
    tmp_pixel_0_fu_3098_p3 = (!tmp_850_fu_3092_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_850_fu_3092_p2.read()[0].to_bool())? v_1_fu_3084_p3.read(): tmp_1014_fu_3080_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_10_fu_4148_p3() {
    tmp_pixel_10_fu_4148_p3 = (!tmp_870_fu_4142_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_870_fu_4142_p2.read()[0].to_bool())? v_1_s_fu_4134_p3.read(): tmp_1044_fu_4130_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_11_fu_4253_p3() {
    tmp_pixel_11_fu_4253_p3 = (!tmp_872_fu_4247_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_872_fu_4247_p2.read()[0].to_bool())? v_1_10_fu_4239_p3.read(): tmp_1047_fu_4235_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_12_fu_4358_p3() {
    tmp_pixel_12_fu_4358_p3 = (!tmp_874_fu_4352_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_874_fu_4352_p2.read()[0].to_bool())? v_1_11_fu_4344_p3.read(): tmp_1050_fu_4340_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_13_fu_4463_p3() {
    tmp_pixel_13_fu_4463_p3 = (!tmp_876_fu_4457_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_876_fu_4457_p2.read()[0].to_bool())? v_1_12_fu_4449_p3.read(): tmp_1053_fu_4445_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_14_fu_4568_p3() {
    tmp_pixel_14_fu_4568_p3 = (!tmp_878_fu_4562_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_878_fu_4562_p2.read()[0].to_bool())? v_1_13_fu_4554_p3.read(): tmp_1056_fu_4550_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_15_fu_4673_p3() {
    tmp_pixel_15_fu_4673_p3 = (!tmp_880_fu_4667_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_880_fu_4667_p2.read()[0].to_bool())? v_1_14_fu_4659_p3.read(): tmp_1059_fu_4655_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_16_fu_4778_p3() {
    tmp_pixel_16_fu_4778_p3 = (!tmp_882_fu_4772_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_882_fu_4772_p2.read()[0].to_bool())? v_1_15_fu_4764_p3.read(): tmp_1062_fu_4760_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_17_fu_4883_p3() {
    tmp_pixel_17_fu_4883_p3 = (!tmp_884_fu_4877_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_884_fu_4877_p2.read()[0].to_bool())? v_1_16_fu_4869_p3.read(): tmp_1065_fu_4865_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_18_fu_4988_p3() {
    tmp_pixel_18_fu_4988_p3 = (!tmp_886_fu_4982_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_886_fu_4982_p2.read()[0].to_bool())? v_1_17_fu_4974_p3.read(): tmp_1068_fu_4970_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_19_fu_5093_p3() {
    tmp_pixel_19_fu_5093_p3 = (!tmp_888_fu_5087_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_888_fu_5087_p2.read()[0].to_bool())? v_1_18_fu_5079_p3.read(): tmp_1071_fu_5075_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_1_fu_3203_p3() {
    tmp_pixel_1_fu_3203_p3 = (!tmp_852_fu_3197_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_852_fu_3197_p2.read()[0].to_bool())? v_1_1_fu_3189_p3.read(): tmp_1017_fu_3185_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_20_fu_5198_p3() {
    tmp_pixel_20_fu_5198_p3 = (!tmp_890_fu_5192_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_890_fu_5192_p2.read()[0].to_bool())? v_1_19_fu_5184_p3.read(): tmp_1074_fu_5180_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_21_fu_5303_p3() {
    tmp_pixel_21_fu_5303_p3 = (!tmp_892_fu_5297_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_892_fu_5297_p2.read()[0].to_bool())? v_1_20_fu_5289_p3.read(): tmp_1077_fu_5285_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_22_fu_5408_p3() {
    tmp_pixel_22_fu_5408_p3 = (!tmp_894_fu_5402_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_894_fu_5402_p2.read()[0].to_bool())? v_1_21_fu_5394_p3.read(): tmp_1080_fu_5390_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_23_fu_5513_p3() {
    tmp_pixel_23_fu_5513_p3 = (!tmp_896_fu_5507_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_896_fu_5507_p2.read()[0].to_bool())? v_1_22_fu_5499_p3.read(): tmp_1083_fu_5495_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_24_fu_5618_p3() {
    tmp_pixel_24_fu_5618_p3 = (!tmp_898_fu_5612_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_898_fu_5612_p2.read()[0].to_bool())? v_1_23_fu_5604_p3.read(): tmp_1086_fu_5600_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_25_fu_5723_p3() {
    tmp_pixel_25_fu_5723_p3 = (!tmp_900_fu_5717_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_900_fu_5717_p2.read()[0].to_bool())? v_1_24_fu_5709_p3.read(): tmp_1089_fu_5705_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_26_fu_5828_p3() {
    tmp_pixel_26_fu_5828_p3 = (!tmp_902_fu_5822_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_902_fu_5822_p2.read()[0].to_bool())? v_1_25_fu_5814_p3.read(): tmp_1092_fu_5810_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_27_fu_5933_p3() {
    tmp_pixel_27_fu_5933_p3 = (!tmp_904_fu_5927_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_904_fu_5927_p2.read()[0].to_bool())? v_1_26_fu_5919_p3.read(): tmp_1095_fu_5915_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_28_fu_6038_p3() {
    tmp_pixel_28_fu_6038_p3 = (!tmp_906_fu_6032_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_906_fu_6032_p2.read()[0].to_bool())? v_1_27_fu_6024_p3.read(): tmp_1098_fu_6020_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_29_fu_6143_p3() {
    tmp_pixel_29_fu_6143_p3 = (!tmp_908_fu_6137_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_908_fu_6137_p2.read()[0].to_bool())? v_1_28_fu_6129_p3.read(): tmp_1101_fu_6125_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_2_fu_3308_p3() {
    tmp_pixel_2_fu_3308_p3 = (!tmp_854_fu_3302_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_854_fu_3302_p2.read()[0].to_bool())? v_1_2_fu_3294_p3.read(): tmp_1020_fu_3290_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_30_fu_6248_p3() {
    tmp_pixel_30_fu_6248_p3 = (!tmp_910_fu_6242_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_910_fu_6242_p2.read()[0].to_bool())? v_1_29_fu_6234_p3.read(): tmp_1104_fu_6230_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_31_fu_6353_p3() {
    tmp_pixel_31_fu_6353_p3 = (!tmp_912_fu_6347_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_912_fu_6347_p2.read()[0].to_bool())? v_1_30_fu_6339_p3.read(): tmp_1107_fu_6335_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_32_fu_6458_p3() {
    tmp_pixel_32_fu_6458_p3 = (!tmp_914_fu_6452_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_914_fu_6452_p2.read()[0].to_bool())? v_1_31_fu_6444_p3.read(): tmp_1110_fu_6440_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_33_fu_6563_p3() {
    tmp_pixel_33_fu_6563_p3 = (!tmp_916_fu_6557_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_916_fu_6557_p2.read()[0].to_bool())? v_1_32_fu_6549_p3.read(): tmp_1113_fu_6545_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_34_fu_6668_p3() {
    tmp_pixel_34_fu_6668_p3 = (!tmp_918_fu_6662_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_918_fu_6662_p2.read()[0].to_bool())? v_1_33_fu_6654_p3.read(): tmp_1116_fu_6650_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_35_fu_6773_p3() {
    tmp_pixel_35_fu_6773_p3 = (!tmp_920_fu_6767_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_920_fu_6767_p2.read()[0].to_bool())? v_1_34_fu_6759_p3.read(): tmp_1119_fu_6755_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_36_fu_6878_p3() {
    tmp_pixel_36_fu_6878_p3 = (!tmp_922_fu_6872_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_922_fu_6872_p2.read()[0].to_bool())? v_1_35_fu_6864_p3.read(): tmp_1122_fu_6860_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_37_fu_6983_p3() {
    tmp_pixel_37_fu_6983_p3 = (!tmp_924_fu_6977_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_924_fu_6977_p2.read()[0].to_bool())? v_1_36_fu_6969_p3.read(): tmp_1125_fu_6965_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_38_fu_7088_p3() {
    tmp_pixel_38_fu_7088_p3 = (!tmp_926_fu_7082_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_926_fu_7082_p2.read()[0].to_bool())? v_1_37_fu_7074_p3.read(): tmp_1128_fu_7070_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_39_fu_7193_p3() {
    tmp_pixel_39_fu_7193_p3 = (!tmp_928_fu_7187_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_928_fu_7187_p2.read()[0].to_bool())? v_1_38_fu_7179_p3.read(): tmp_1131_fu_7175_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_3_fu_3413_p3() {
    tmp_pixel_3_fu_3413_p3 = (!tmp_856_fu_3407_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_856_fu_3407_p2.read()[0].to_bool())? v_1_3_fu_3399_p3.read(): tmp_1023_fu_3395_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_40_fu_7298_p3() {
    tmp_pixel_40_fu_7298_p3 = (!tmp_930_fu_7292_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_930_fu_7292_p2.read()[0].to_bool())? v_1_39_fu_7284_p3.read(): tmp_1134_fu_7280_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_41_fu_7403_p3() {
    tmp_pixel_41_fu_7403_p3 = (!tmp_932_fu_7397_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_932_fu_7397_p2.read()[0].to_bool())? v_1_40_fu_7389_p3.read(): tmp_1137_fu_7385_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_4_fu_3518_p3() {
    tmp_pixel_4_fu_3518_p3 = (!tmp_858_fu_3512_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_858_fu_3512_p2.read()[0].to_bool())? v_1_4_fu_3504_p3.read(): tmp_1026_fu_3500_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_5_fu_3623_p3() {
    tmp_pixel_5_fu_3623_p3 = (!tmp_860_fu_3617_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_860_fu_3617_p2.read()[0].to_bool())? v_1_5_fu_3609_p3.read(): tmp_1029_fu_3605_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_6_fu_3728_p3() {
    tmp_pixel_6_fu_3728_p3 = (!tmp_862_fu_3722_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_862_fu_3722_p2.read()[0].to_bool())? v_1_6_fu_3714_p3.read(): tmp_1032_fu_3710_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_7_fu_3833_p3() {
    tmp_pixel_7_fu_3833_p3 = (!tmp_864_fu_3827_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_864_fu_3827_p2.read()[0].to_bool())? v_1_7_fu_3819_p3.read(): tmp_1035_fu_3815_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_8_fu_3938_p3() {
    tmp_pixel_8_fu_3938_p3 = (!tmp_866_fu_3932_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_866_fu_3932_p2.read()[0].to_bool())? v_1_8_fu_3924_p3.read(): tmp_1038_fu_3920_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_pixel_9_fu_4043_p3() {
    tmp_pixel_9_fu_4043_p3 = (!tmp_868_fu_4037_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_868_fu_4037_p2.read()[0].to_bool())? v_1_9_fu_4029_p3.read(): tmp_1041_fu_4025_p1.read());
}

void Sobel_conv3x3_tile_strm107::thread_tmp_s_fu_3044_p2() {
    tmp_s_fu_3044_p2 = (!tmp_125_fu_3032_p2.read().is_01() || !tmp_2935_cast_fu_3038_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_125_fu_3032_p2.read()) - sc_biguint<11>(tmp_2935_cast_fu_3038_p1.read()));
}

void Sobel_conv3x3_tile_strm107::thread_v_1_10_fu_4239_p3() {
    v_1_10_fu_4239_p3 = (!icmp12_fu_4221_p2.read()[0].is_01())? sc_lv<8>(): ((icmp12_fu_4221_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_11_fu_4344_p3() {
    v_1_11_fu_4344_p3 = (!icmp13_fu_4326_p2.read()[0].is_01())? sc_lv<8>(): ((icmp13_fu_4326_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_12_fu_4449_p3() {
    v_1_12_fu_4449_p3 = (!icmp14_fu_4431_p2.read()[0].is_01())? sc_lv<8>(): ((icmp14_fu_4431_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_13_fu_4554_p3() {
    v_1_13_fu_4554_p3 = (!icmp15_fu_4536_p2.read()[0].is_01())? sc_lv<8>(): ((icmp15_fu_4536_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_14_fu_4659_p3() {
    v_1_14_fu_4659_p3 = (!icmp16_fu_4641_p2.read()[0].is_01())? sc_lv<8>(): ((icmp16_fu_4641_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_15_fu_4764_p3() {
    v_1_15_fu_4764_p3 = (!icmp17_fu_4746_p2.read()[0].is_01())? sc_lv<8>(): ((icmp17_fu_4746_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_16_fu_4869_p3() {
    v_1_16_fu_4869_p3 = (!icmp18_fu_4851_p2.read()[0].is_01())? sc_lv<8>(): ((icmp18_fu_4851_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_17_fu_4974_p3() {
    v_1_17_fu_4974_p3 = (!icmp19_fu_4956_p2.read()[0].is_01())? sc_lv<8>(): ((icmp19_fu_4956_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_18_fu_5079_p3() {
    v_1_18_fu_5079_p3 = (!icmp20_fu_5061_p2.read()[0].is_01())? sc_lv<8>(): ((icmp20_fu_5061_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_19_fu_5184_p3() {
    v_1_19_fu_5184_p3 = (!icmp21_fu_5166_p2.read()[0].is_01())? sc_lv<8>(): ((icmp21_fu_5166_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_1_fu_3189_p3() {
    v_1_1_fu_3189_p3 = (!icmp7_fu_3171_p2.read()[0].is_01())? sc_lv<8>(): ((icmp7_fu_3171_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_20_fu_5289_p3() {
    v_1_20_fu_5289_p3 = (!icmp22_fu_5271_p2.read()[0].is_01())? sc_lv<8>(): ((icmp22_fu_5271_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_21_fu_5394_p3() {
    v_1_21_fu_5394_p3 = (!icmp23_fu_5376_p2.read()[0].is_01())? sc_lv<8>(): ((icmp23_fu_5376_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_22_fu_5499_p3() {
    v_1_22_fu_5499_p3 = (!icmp24_fu_5481_p2.read()[0].is_01())? sc_lv<8>(): ((icmp24_fu_5481_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_23_fu_5604_p3() {
    v_1_23_fu_5604_p3 = (!icmp25_fu_5586_p2.read()[0].is_01())? sc_lv<8>(): ((icmp25_fu_5586_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_24_fu_5709_p3() {
    v_1_24_fu_5709_p3 = (!icmp26_fu_5691_p2.read()[0].is_01())? sc_lv<8>(): ((icmp26_fu_5691_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_25_fu_5814_p3() {
    v_1_25_fu_5814_p3 = (!icmp27_fu_5796_p2.read()[0].is_01())? sc_lv<8>(): ((icmp27_fu_5796_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_26_fu_5919_p3() {
    v_1_26_fu_5919_p3 = (!icmp28_fu_5901_p2.read()[0].is_01())? sc_lv<8>(): ((icmp28_fu_5901_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_27_fu_6024_p3() {
    v_1_27_fu_6024_p3 = (!icmp29_fu_6006_p2.read()[0].is_01())? sc_lv<8>(): ((icmp29_fu_6006_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_28_fu_6129_p3() {
    v_1_28_fu_6129_p3 = (!icmp30_fu_6111_p2.read()[0].is_01())? sc_lv<8>(): ((icmp30_fu_6111_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_29_fu_6234_p3() {
    v_1_29_fu_6234_p3 = (!icmp31_fu_6216_p2.read()[0].is_01())? sc_lv<8>(): ((icmp31_fu_6216_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_2_fu_3294_p3() {
    v_1_2_fu_3294_p3 = (!icmp1_fu_3276_p2.read()[0].is_01())? sc_lv<8>(): ((icmp1_fu_3276_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_30_fu_6339_p3() {
    v_1_30_fu_6339_p3 = (!icmp32_fu_6321_p2.read()[0].is_01())? sc_lv<8>(): ((icmp32_fu_6321_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_31_fu_6444_p3() {
    v_1_31_fu_6444_p3 = (!icmp33_fu_6426_p2.read()[0].is_01())? sc_lv<8>(): ((icmp33_fu_6426_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_32_fu_6549_p3() {
    v_1_32_fu_6549_p3 = (!icmp34_fu_6531_p2.read()[0].is_01())? sc_lv<8>(): ((icmp34_fu_6531_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_33_fu_6654_p3() {
    v_1_33_fu_6654_p3 = (!icmp35_fu_6636_p2.read()[0].is_01())? sc_lv<8>(): ((icmp35_fu_6636_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_34_fu_6759_p3() {
    v_1_34_fu_6759_p3 = (!icmp36_fu_6741_p2.read()[0].is_01())? sc_lv<8>(): ((icmp36_fu_6741_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_35_fu_6864_p3() {
    v_1_35_fu_6864_p3 = (!icmp37_fu_6846_p2.read()[0].is_01())? sc_lv<8>(): ((icmp37_fu_6846_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_36_fu_6969_p3() {
    v_1_36_fu_6969_p3 = (!icmp38_fu_6951_p2.read()[0].is_01())? sc_lv<8>(): ((icmp38_fu_6951_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_37_fu_7074_p3() {
    v_1_37_fu_7074_p3 = (!icmp39_fu_7056_p2.read()[0].is_01())? sc_lv<8>(): ((icmp39_fu_7056_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_38_fu_7179_p3() {
    v_1_38_fu_7179_p3 = (!icmp40_fu_7161_p2.read()[0].is_01())? sc_lv<8>(): ((icmp40_fu_7161_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_39_fu_7284_p3() {
    v_1_39_fu_7284_p3 = (!icmp41_fu_7266_p2.read()[0].is_01())? sc_lv<8>(): ((icmp41_fu_7266_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_3_fu_3399_p3() {
    v_1_3_fu_3399_p3 = (!icmp2_fu_3381_p2.read()[0].is_01())? sc_lv<8>(): ((icmp2_fu_3381_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_40_fu_7389_p3() {
    v_1_40_fu_7389_p3 = (!icmp42_fu_7371_p2.read()[0].is_01())? sc_lv<8>(): ((icmp42_fu_7371_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_4_fu_3504_p3() {
    v_1_4_fu_3504_p3 = (!icmp4_fu_3486_p2.read()[0].is_01())? sc_lv<8>(): ((icmp4_fu_3486_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_5_fu_3609_p3() {
    v_1_5_fu_3609_p3 = (!icmp5_fu_3591_p2.read()[0].is_01())? sc_lv<8>(): ((icmp5_fu_3591_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_6_fu_3714_p3() {
    v_1_6_fu_3714_p3 = (!icmp6_fu_3696_p2.read()[0].is_01())? sc_lv<8>(): ((icmp6_fu_3696_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_7_fu_3819_p3() {
    v_1_7_fu_3819_p3 = (!icmp8_fu_3801_p2.read()[0].is_01())? sc_lv<8>(): ((icmp8_fu_3801_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_8_fu_3924_p3() {
    v_1_8_fu_3924_p3 = (!icmp9_fu_3906_p2.read()[0].is_01())? sc_lv<8>(): ((icmp9_fu_3906_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_9_fu_4029_p3() {
    v_1_9_fu_4029_p3 = (!icmp10_fu_4011_p2.read()[0].is_01())? sc_lv<8>(): ((icmp10_fu_4011_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_fu_3084_p3() {
    v_1_fu_3084_p3 = (!icmp3_fu_3066_p2.read()[0].is_01())? sc_lv<8>(): ((icmp3_fu_3066_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_v_1_s_fu_4134_p3() {
    v_1_s_fu_4134_p3 = (!icmp11_fu_4116_p2.read()[0].is_01())? sc_lv<8>(): ((icmp11_fu_4116_p2.read()[0].to_bool())? ap_const_lv8_FF: ap_const_lv8_0);
}

void Sobel_conv3x3_tile_strm107::thread_x_3_fu_1511_p2() {
    x_3_fu_1511_p2 = (!x_reg_1494.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(x_reg_1494.read()) + sc_biguint<9>(ap_const_lv9_1));
}

}

