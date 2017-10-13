#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_tmp_717_fu_26831_p4() {
    tmp_717_fu_26831_p4 = p_Val2_12_35_6_fu_26797_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_718_fu_26841_p3() {
    tmp_718_fu_26841_p3 = (!dneg_35_6_fu_26773_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_35_6_fu_26773_p2.read()[0].to_bool())? tmp_716_fu_26821_p4.read(): tmp_717_fu_26831_p4.read());
}

void Sobel_phase_strm::thread_tmp_719_fu_32336_p2() {
    tmp_719_fu_32336_p2 = (sel_tmp71_fu_32323_p2.read() | ap_reg_ppstg_tmp_19_34_reg_35562_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_721_fu_34041_p3() {
    tmp_721_fu_34041_p3 = p_Val2_19_34_reg_40119.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_722_fu_32359_p1() {
    tmp_722_fu_32359_p1 = p_Val2_19_34_fu_32341_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_723_fu_6357_p4() {
    tmp_723_fu_6357_p4 = p_Val2_7_35_fu_6345_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_724_fu_6381_p4() {
    tmp_724_fu_6381_p4 = p_Val2_4_35_fu_6335_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_725_fu_6391_p1() {
    tmp_725_fu_6391_p1 = esl_zext<14,13>(tmp_724_fu_6381_p4.read());
}

void Sobel_phase_strm::thread_tmp_726_fu_14011_p4() {
    tmp_726_fu_14011_p4 = y_V_1_36_1_fu_13996_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_727_fu_14035_p4() {
    tmp_727_fu_14035_p4 = x_V_1_36_1_fu_13991_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_728_fu_14103_p1() {
    tmp_728_fu_14103_p1 = esl_zext<15,12>(tmp_27_36_2_fu_14093_p4.read());
}

void Sobel_phase_strm::thread_tmp_729_fu_14113_p4() {
    tmp_729_fu_14113_p4 = x_V_1_36_2_fu_14071_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_72_fu_15665_p1() {
    tmp_72_fu_15665_p1 = esl_zext<15,10>(tmp_27_3_4_fu_15655_p4.read());
}

void Sobel_phase_strm::thread_tmp_730_fu_20488_p1() {
    tmp_730_fu_20488_p1 = esl_zext<15,11>(tmp_27_36_3_reg_37075.read());
}

void Sobel_phase_strm::thread_tmp_732_fu_20549_p1() {
    tmp_732_fu_20549_p1 = esl_zext<15,10>(tmp_27_36_4_fu_20539_p4.read());
}

void Sobel_phase_strm::thread_tmp_733_fu_20559_p4() {
    tmp_733_fu_20559_p4 = x_V_1_36_4_fu_20517_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_734_fu_26931_p1() {
    tmp_734_fu_26931_p1 = esl_zext<15,9>(tmp_27_36_5_reg_38503.read());
}

void Sobel_phase_strm::thread_tmp_736_fu_26974_p4() {
    tmp_736_fu_26974_p4 = p_Val2_4_36_6_fu_26934_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_737_fu_26984_p4() {
    tmp_737_fu_26984_p4 = p_Val2_12_36_6_fu_26950_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_738_fu_26994_p3() {
    tmp_738_fu_26994_p3 = (!dneg_36_6_fu_26926_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_36_6_fu_26926_p2.read()[0].to_bool())? tmp_736_fu_26974_p4.read(): tmp_737_fu_26984_p4.read());
}

void Sobel_phase_strm::thread_tmp_739_fu_32463_p2() {
    tmp_739_fu_32463_p2 = (sel_tmp73_fu_32450_p2.read() | ap_reg_ppstg_tmp_19_35_reg_35600_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_73_fu_15675_p4() {
    tmp_73_fu_15675_p4 = x_V_1_3_4_fu_15633_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_741_fu_34067_p3() {
    tmp_741_fu_34067_p3 = p_Val2_19_35_reg_40136.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_742_fu_32486_p1() {
    tmp_742_fu_32486_p1 = p_Val2_19_35_fu_32468_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_743_fu_6475_p4() {
    tmp_743_fu_6475_p4 = p_Val2_7_36_fu_6463_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_744_fu_6499_p4() {
    tmp_744_fu_6499_p4 = p_Val2_4_36_fu_6453_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_745_fu_6509_p1() {
    tmp_745_fu_6509_p1 = esl_zext<14,13>(tmp_744_fu_6499_p4.read());
}

void Sobel_phase_strm::thread_tmp_746_fu_14205_p4() {
    tmp_746_fu_14205_p4 = y_V_1_37_1_fu_14190_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_747_fu_14229_p4() {
    tmp_747_fu_14229_p4 = x_V_1_37_1_fu_14185_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_748_fu_14297_p1() {
    tmp_748_fu_14297_p1 = esl_zext<15,12>(tmp_27_37_2_fu_14287_p4.read());
}

void Sobel_phase_strm::thread_tmp_749_fu_14307_p4() {
    tmp_749_fu_14307_p4 = x_V_1_37_2_fu_14265_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_74_fu_21882_p1() {
    tmp_74_fu_21882_p1 = esl_zext<15,9>(tmp_27_3_5_reg_37381.read());
}

void Sobel_phase_strm::thread_tmp_750_fu_20636_p1() {
    tmp_750_fu_20636_p1 = esl_zext<15,11>(tmp_27_37_3_reg_37109.read());
}

void Sobel_phase_strm::thread_tmp_752_fu_20697_p1() {
    tmp_752_fu_20697_p1 = esl_zext<15,10>(tmp_27_37_4_fu_20687_p4.read());
}

void Sobel_phase_strm::thread_tmp_753_fu_20707_p4() {
    tmp_753_fu_20707_p4 = x_V_1_37_4_fu_20665_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_754_fu_27084_p1() {
    tmp_754_fu_27084_p1 = esl_zext<15,9>(tmp_27_37_5_reg_38537.read());
}

void Sobel_phase_strm::thread_tmp_756_fu_27127_p4() {
    tmp_756_fu_27127_p4 = p_Val2_4_37_6_fu_27087_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_757_fu_27137_p4() {
    tmp_757_fu_27137_p4 = p_Val2_12_37_6_fu_27103_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_758_fu_27147_p3() {
    tmp_758_fu_27147_p3 = (!dneg_37_6_fu_27079_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_37_6_fu_27079_p2.read()[0].to_bool())? tmp_756_fu_27127_p4.read(): tmp_757_fu_27137_p4.read());
}

void Sobel_phase_strm::thread_tmp_759_fu_32590_p2() {
    tmp_759_fu_32590_p2 = (sel_tmp75_fu_32577_p2.read() | ap_reg_ppstg_tmp_19_36_reg_35638_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_761_fu_34093_p3() {
    tmp_761_fu_34093_p3 = p_Val2_19_36_reg_40153.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_762_fu_32613_p1() {
    tmp_762_fu_32613_p1 = p_Val2_19_36_fu_32595_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_763_fu_6593_p4() {
    tmp_763_fu_6593_p4 = p_Val2_7_37_fu_6581_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_764_fu_6617_p4() {
    tmp_764_fu_6617_p4 = p_Val2_4_37_fu_6571_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_765_fu_6627_p1() {
    tmp_765_fu_6627_p1 = esl_zext<14,13>(tmp_764_fu_6617_p4.read());
}

void Sobel_phase_strm::thread_tmp_766_fu_14399_p4() {
    tmp_766_fu_14399_p4 = y_V_1_38_1_fu_14384_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_767_fu_14423_p4() {
    tmp_767_fu_14423_p4 = x_V_1_38_1_fu_14379_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_768_fu_14491_p1() {
    tmp_768_fu_14491_p1 = esl_zext<15,12>(tmp_27_38_2_fu_14481_p4.read());
}

void Sobel_phase_strm::thread_tmp_769_fu_14501_p4() {
    tmp_769_fu_14501_p4 = x_V_1_38_2_fu_14459_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_76_fu_21925_p4() {
    tmp_76_fu_21925_p4 = p_Val2_4_3_6_fu_21885_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_770_fu_20784_p1() {
    tmp_770_fu_20784_p1 = esl_zext<15,11>(tmp_27_38_3_reg_37143.read());
}

void Sobel_phase_strm::thread_tmp_772_fu_20845_p1() {
    tmp_772_fu_20845_p1 = esl_zext<15,10>(tmp_27_38_4_fu_20835_p4.read());
}

void Sobel_phase_strm::thread_tmp_773_fu_20855_p4() {
    tmp_773_fu_20855_p4 = x_V_1_38_4_fu_20813_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_774_fu_27237_p1() {
    tmp_774_fu_27237_p1 = esl_zext<15,9>(tmp_27_38_5_reg_38571.read());
}

void Sobel_phase_strm::thread_tmp_776_fu_27280_p4() {
    tmp_776_fu_27280_p4 = p_Val2_4_38_6_fu_27240_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_777_fu_27290_p4() {
    tmp_777_fu_27290_p4 = p_Val2_12_38_6_fu_27256_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_778_fu_27300_p3() {
    tmp_778_fu_27300_p3 = (!dneg_38_6_fu_27232_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_38_6_fu_27232_p2.read()[0].to_bool())? tmp_776_fu_27280_p4.read(): tmp_777_fu_27290_p4.read());
}

void Sobel_phase_strm::thread_tmp_779_fu_32717_p2() {
    tmp_779_fu_32717_p2 = (sel_tmp77_fu_32704_p2.read() | ap_reg_ppstg_tmp_19_37_reg_35676_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_77_fu_21935_p4() {
    tmp_77_fu_21935_p4 = p_Val2_12_3_6_fu_21901_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_781_fu_34119_p3() {
    tmp_781_fu_34119_p3 = p_Val2_19_37_reg_40170.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_782_fu_32740_p1() {
    tmp_782_fu_32740_p1 = p_Val2_19_37_fu_32722_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_783_fu_6711_p4() {
    tmp_783_fu_6711_p4 = p_Val2_7_38_fu_6699_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_784_fu_6735_p4() {
    tmp_784_fu_6735_p4 = p_Val2_4_38_fu_6689_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_785_fu_6745_p1() {
    tmp_785_fu_6745_p1 = esl_zext<14,13>(tmp_784_fu_6735_p4.read());
}

void Sobel_phase_strm::thread_tmp_786_fu_14593_p4() {
    tmp_786_fu_14593_p4 = y_V_1_39_1_fu_14578_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_787_fu_14617_p4() {
    tmp_787_fu_14617_p4 = x_V_1_39_1_fu_14573_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_788_fu_14685_p1() {
    tmp_788_fu_14685_p1 = esl_zext<15,12>(tmp_27_39_2_fu_14675_p4.read());
}

void Sobel_phase_strm::thread_tmp_789_fu_14695_p4() {
    tmp_789_fu_14695_p4 = x_V_1_39_2_fu_14653_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_78_fu_21945_p3() {
    tmp_78_fu_21945_p3 = (!dneg_3_6_fu_21877_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_3_6_fu_21877_p2.read()[0].to_bool())? tmp_76_fu_21925_p4.read(): tmp_77_fu_21935_p4.read());
}

void Sobel_phase_strm::thread_tmp_790_fu_20932_p1() {
    tmp_790_fu_20932_p1 = esl_zext<15,11>(tmp_27_39_3_reg_37177.read());
}

void Sobel_phase_strm::thread_tmp_792_fu_20993_p1() {
    tmp_792_fu_20993_p1 = esl_zext<15,10>(tmp_27_39_4_fu_20983_p4.read());
}

void Sobel_phase_strm::thread_tmp_793_fu_21003_p4() {
    tmp_793_fu_21003_p4 = x_V_1_39_4_fu_20961_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_794_fu_27390_p1() {
    tmp_794_fu_27390_p1 = esl_zext<15,9>(tmp_27_39_5_reg_38605.read());
}

void Sobel_phase_strm::thread_tmp_796_fu_27433_p4() {
    tmp_796_fu_27433_p4 = p_Val2_4_39_6_fu_27393_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_797_fu_27443_p4() {
    tmp_797_fu_27443_p4 = p_Val2_12_39_6_fu_27409_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_798_fu_27453_p3() {
    tmp_798_fu_27453_p3 = (!dneg_39_6_fu_27385_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_39_6_fu_27385_p2.read()[0].to_bool())? tmp_796_fu_27433_p4.read(): tmp_797_fu_27443_p4.read());
}

void Sobel_phase_strm::thread_tmp_799_fu_32844_p2() {
    tmp_799_fu_32844_p2 = (sel_tmp79_fu_32831_p2.read() | ap_reg_ppstg_tmp_19_38_reg_35714_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_79_fu_28272_p2() {
    tmp_79_fu_28272_p2 = (sel_tmp_fu_28259_p2.read() | ap_reg_ppstg_tmp_19_3_reg_34346_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_7_fu_7129_p4() {
    tmp_7_fu_7129_p4 = x_V_1_0_2_fu_7087_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_801_fu_34145_p3() {
    tmp_801_fu_34145_p3 = p_Val2_19_38_reg_40187.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_802_fu_32867_p1() {
    tmp_802_fu_32867_p1 = p_Val2_19_38_fu_32849_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_803_fu_6829_p4() {
    tmp_803_fu_6829_p4 = p_Val2_7_39_fu_6817_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_804_fu_6853_p4() {
    tmp_804_fu_6853_p4 = p_Val2_4_39_fu_6807_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_805_fu_6863_p1() {
    tmp_805_fu_6863_p1 = esl_zext<14,13>(tmp_804_fu_6853_p4.read());
}

void Sobel_phase_strm::thread_tmp_806_fu_14787_p4() {
    tmp_806_fu_14787_p4 = y_V_1_40_1_fu_14772_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_807_fu_14811_p4() {
    tmp_807_fu_14811_p4 = x_V_1_40_1_fu_14767_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_808_fu_14879_p1() {
    tmp_808_fu_14879_p1 = esl_zext<15,12>(tmp_27_40_2_fu_14869_p4.read());
}

void Sobel_phase_strm::thread_tmp_809_fu_14889_p4() {
    tmp_809_fu_14889_p4 = x_V_1_40_2_fu_14847_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_810_fu_21080_p1() {
    tmp_810_fu_21080_p1 = esl_zext<15,11>(tmp_27_40_3_reg_37211.read());
}

void Sobel_phase_strm::thread_tmp_812_fu_21141_p1() {
    tmp_812_fu_21141_p1 = esl_zext<15,10>(tmp_27_40_4_fu_21131_p4.read());
}

void Sobel_phase_strm::thread_tmp_813_fu_21151_p4() {
    tmp_813_fu_21151_p4 = x_V_1_40_4_fu_21109_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_814_fu_27543_p1() {
    tmp_814_fu_27543_p1 = esl_zext<15,9>(tmp_27_40_5_reg_38639.read());
}

void Sobel_phase_strm::thread_tmp_816_fu_27586_p4() {
    tmp_816_fu_27586_p4 = p_Val2_4_40_6_fu_27546_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_817_fu_27596_p4() {
    tmp_817_fu_27596_p4 = p_Val2_12_40_6_fu_27562_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_818_fu_27606_p3() {
    tmp_818_fu_27606_p3 = (!dneg_40_6_fu_27538_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_40_6_fu_27538_p2.read()[0].to_bool())? tmp_816_fu_27586_p4.read(): tmp_817_fu_27596_p4.read());
}

void Sobel_phase_strm::thread_tmp_819_fu_32971_p2() {
    tmp_819_fu_32971_p2 = (sel_tmp81_fu_32958_p2.read() | ap_reg_ppstg_tmp_19_39_reg_35752_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_81_fu_33209_p3() {
    tmp_81_fu_33209_p3 = p_Val2_19_3_reg_39575.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_821_fu_34171_p3() {
    tmp_821_fu_34171_p3 = p_Val2_19_39_reg_40204.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_822_fu_32994_p1() {
    tmp_822_fu_32994_p1 = p_Val2_19_39_fu_32976_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_823_fu_6947_p4() {
    tmp_823_fu_6947_p4 = p_Val2_7_40_fu_6935_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_824_fu_6971_p4() {
    tmp_824_fu_6971_p4 = p_Val2_4_40_fu_6925_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_825_fu_6981_p1() {
    tmp_825_fu_6981_p1 = esl_zext<14,13>(tmp_824_fu_6971_p4.read());
}

void Sobel_phase_strm::thread_tmp_826_fu_14981_p4() {
    tmp_826_fu_14981_p4 = y_V_1_41_1_fu_14966_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_827_fu_15005_p4() {
    tmp_827_fu_15005_p4 = x_V_1_41_1_fu_14961_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_828_fu_15073_p1() {
    tmp_828_fu_15073_p1 = esl_zext<15,12>(tmp_27_41_2_fu_15063_p4.read());
}

void Sobel_phase_strm::thread_tmp_829_fu_15083_p4() {
    tmp_829_fu_15083_p4 = x_V_1_41_2_fu_15041_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_82_fu_28295_p1() {
    tmp_82_fu_28295_p1 = p_Val2_19_3_fu_28277_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_830_fu_21228_p1() {
    tmp_830_fu_21228_p1 = esl_zext<15,11>(tmp_27_41_3_reg_37245.read());
}

void Sobel_phase_strm::thread_tmp_832_fu_21289_p1() {
    tmp_832_fu_21289_p1 = esl_zext<15,10>(tmp_27_41_4_fu_21279_p4.read());
}

void Sobel_phase_strm::thread_tmp_833_fu_21299_p4() {
    tmp_833_fu_21299_p4 = x_V_1_41_4_fu_21257_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_834_fu_27696_p1() {
    tmp_834_fu_27696_p1 = esl_zext<15,9>(tmp_27_41_5_reg_38673.read());
}

void Sobel_phase_strm::thread_tmp_836_fu_27739_p4() {
    tmp_836_fu_27739_p4 = p_Val2_4_41_6_fu_27699_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_837_fu_27749_p4() {
    tmp_837_fu_27749_p4 = p_Val2_12_41_6_fu_27715_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_838_fu_27759_p3() {
    tmp_838_fu_27759_p3 = (!dneg_41_6_fu_27691_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_41_6_fu_27691_p2.read()[0].to_bool())? tmp_836_fu_27739_p4.read(): tmp_837_fu_27749_p4.read());
}

void Sobel_phase_strm::thread_tmp_839_fu_33098_p2() {
    tmp_839_fu_33098_p2 = (sel_tmp83_fu_33085_p2.read() | ap_reg_ppstg_tmp_19_40_reg_35790_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_83_fu_2581_p4() {
    tmp_83_fu_2581_p4 = p_Val2_7_4_fu_2569_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_841_fu_34197_p3() {
    tmp_841_fu_34197_p3 = p_Val2_19_40_reg_40221.read().range(12, 12);
}

void Sobel_phase_strm::thread_tmp_842_fu_33121_p1() {
    tmp_842_fu_33121_p1 = p_Val2_19_40_fu_33103_p3.read().range(5-1, 0);
}

void Sobel_phase_strm::thread_tmp_84_fu_2605_p4() {
    tmp_84_fu_2605_p4 = p_Val2_4_4_fu_2559_p2.read().range(13, 1);
}

void Sobel_phase_strm::thread_tmp_85_fu_2615_p1() {
    tmp_85_fu_2615_p1 = esl_zext<14,13>(tmp_84_fu_2605_p4.read());
}

void Sobel_phase_strm::thread_tmp_86_fu_7803_p4() {
    tmp_86_fu_7803_p4 = y_V_1_4_1_fu_7788_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_87_fu_7827_p4() {
    tmp_87_fu_7827_p4 = x_V_1_4_1_fu_7783_p3.read().range(14, 2);
}

void Sobel_phase_strm::thread_tmp_88_fu_7895_p1() {
    tmp_88_fu_7895_p1 = esl_zext<15,12>(tmp_27_4_2_fu_7885_p4.read());
}

void Sobel_phase_strm::thread_tmp_89_fu_7905_p4() {
    tmp_89_fu_7905_p4 = x_V_1_4_2_fu_7863_p3.read().range(14, 3);
}

void Sobel_phase_strm::thread_tmp_8_fu_7027_p4() {
    tmp_8_fu_7027_p4 = y_V_1_0_1_fu_7012_p3.read().range(13, 2);
}

void Sobel_phase_strm::thread_tmp_90_fu_15752_p1() {
    tmp_90_fu_15752_p1 = esl_zext<15,11>(tmp_27_4_3_reg_35987.read());
}

void Sobel_phase_strm::thread_tmp_92_fu_15813_p1() {
    tmp_92_fu_15813_p1 = esl_zext<15,10>(tmp_27_4_4_fu_15803_p4.read());
}

void Sobel_phase_strm::thread_tmp_93_fu_15823_p4() {
    tmp_93_fu_15823_p4 = x_V_1_4_4_fu_15781_p3.read().range(14, 5);
}

void Sobel_phase_strm::thread_tmp_94_fu_22035_p1() {
    tmp_94_fu_22035_p1 = esl_zext<15,9>(tmp_27_4_5_reg_37415.read());
}

void Sobel_phase_strm::thread_tmp_96_fu_22078_p4() {
    tmp_96_fu_22078_p4 = p_Val2_4_4_6_fu_22038_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_97_fu_22088_p4() {
    tmp_97_fu_22088_p4 = p_Val2_12_4_6_fu_22054_p2.read().range(14, 7);
}

void Sobel_phase_strm::thread_tmp_98_fu_22098_p3() {
    tmp_98_fu_22098_p3 = (!dneg_4_6_fu_22030_p2.read()[0].is_01())? sc_lv<8>(): ((dneg_4_6_fu_22030_p2.read()[0].to_bool())? tmp_96_fu_22078_p4.read(): tmp_97_fu_22088_p4.read());
}

void Sobel_phase_strm::thread_tmp_99_fu_28399_p2() {
    tmp_99_fu_28399_p2 = (sel_tmp8_fu_28386_p2.read() | ap_reg_ppstg_tmp_19_4_reg_34384_pp0_iter4.read());
}

void Sobel_phase_strm::thread_tmp_9_fu_15160_p1() {
    tmp_9_fu_15160_p1 = esl_zext<15,11>(tmp_27_0_3_reg_35851.read());
}

void Sobel_phase_strm::thread_tmp_s_fu_2075_p2() {
    tmp_s_fu_2075_p2 = (!grad_y_V_pixel_0_dout.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(grad_y_V_pixel_0_dout.read() == ap_const_lv8_0);
}

void Sobel_phase_strm::thread_x0_V_10_cast_fu_3369_p1() {
    x0_V_10_cast_fu_3369_p1 = esl_zext<14,13>(x0_V_10_fu_3361_p3.read());
}

void Sobel_phase_strm::thread_x0_V_10_fu_3361_p3() {
    x0_V_10_fu_3361_p3 = esl_concat<8,5>(grad_x_V_pixel_11_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_11_cast_fu_3487_p1() {
    x0_V_11_cast_fu_3487_p1 = esl_zext<14,13>(x0_V_11_fu_3479_p3.read());
}

void Sobel_phase_strm::thread_x0_V_11_fu_3479_p3() {
    x0_V_11_fu_3479_p3 = esl_concat<8,5>(grad_x_V_pixel_12_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_12_cast_fu_3605_p1() {
    x0_V_12_cast_fu_3605_p1 = esl_zext<14,13>(x0_V_12_fu_3597_p3.read());
}

void Sobel_phase_strm::thread_x0_V_12_fu_3597_p3() {
    x0_V_12_fu_3597_p3 = esl_concat<8,5>(grad_x_V_pixel_13_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_13_cast_fu_3723_p1() {
    x0_V_13_cast_fu_3723_p1 = esl_zext<14,13>(x0_V_13_fu_3715_p3.read());
}

void Sobel_phase_strm::thread_x0_V_13_fu_3715_p3() {
    x0_V_13_fu_3715_p3 = esl_concat<8,5>(grad_x_V_pixel_14_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_14_cast_fu_3841_p1() {
    x0_V_14_cast_fu_3841_p1 = esl_zext<14,13>(x0_V_14_fu_3833_p3.read());
}

void Sobel_phase_strm::thread_x0_V_14_fu_3833_p3() {
    x0_V_14_fu_3833_p3 = esl_concat<8,5>(grad_x_V_pixel_15_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_15_cast_fu_3959_p1() {
    x0_V_15_cast_fu_3959_p1 = esl_zext<14,13>(x0_V_15_fu_3951_p3.read());
}

void Sobel_phase_strm::thread_x0_V_15_fu_3951_p3() {
    x0_V_15_fu_3951_p3 = esl_concat<8,5>(grad_x_V_pixel_16_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_16_cast_fu_4077_p1() {
    x0_V_16_cast_fu_4077_p1 = esl_zext<14,13>(x0_V_16_fu_4069_p3.read());
}

void Sobel_phase_strm::thread_x0_V_16_fu_4069_p3() {
    x0_V_16_fu_4069_p3 = esl_concat<8,5>(grad_x_V_pixel_17_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_17_cast_fu_4195_p1() {
    x0_V_17_cast_fu_4195_p1 = esl_zext<14,13>(x0_V_17_fu_4187_p3.read());
}

void Sobel_phase_strm::thread_x0_V_17_fu_4187_p3() {
    x0_V_17_fu_4187_p3 = esl_concat<8,5>(grad_x_V_pixel_18_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_18_cast_fu_4313_p1() {
    x0_V_18_cast_fu_4313_p1 = esl_zext<14,13>(x0_V_18_fu_4305_p3.read());
}

void Sobel_phase_strm::thread_x0_V_18_fu_4305_p3() {
    x0_V_18_fu_4305_p3 = esl_concat<8,5>(grad_x_V_pixel_19_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_19_cast_fu_4431_p1() {
    x0_V_19_cast_fu_4431_p1 = esl_zext<14,13>(x0_V_19_fu_4423_p3.read());
}

void Sobel_phase_strm::thread_x0_V_19_fu_4423_p3() {
    x0_V_19_fu_4423_p3 = esl_concat<8,5>(grad_x_V_pixel_20_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_1_cast_fu_2189_p1() {
    x0_V_1_cast_fu_2189_p1 = esl_zext<14,13>(x0_V_1_fu_2181_p3.read());
}

void Sobel_phase_strm::thread_x0_V_1_fu_2181_p3() {
    x0_V_1_fu_2181_p3 = esl_concat<8,5>(grad_x_V_pixel_1_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_20_cast_fu_4549_p1() {
    x0_V_20_cast_fu_4549_p1 = esl_zext<14,13>(x0_V_20_fu_4541_p3.read());
}

void Sobel_phase_strm::thread_x0_V_20_fu_4541_p3() {
    x0_V_20_fu_4541_p3 = esl_concat<8,5>(grad_x_V_pixel_21_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_21_cast_fu_4667_p1() {
    x0_V_21_cast_fu_4667_p1 = esl_zext<14,13>(x0_V_21_fu_4659_p3.read());
}

void Sobel_phase_strm::thread_x0_V_21_fu_4659_p3() {
    x0_V_21_fu_4659_p3 = esl_concat<8,5>(grad_x_V_pixel_22_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_22_cast_fu_4785_p1() {
    x0_V_22_cast_fu_4785_p1 = esl_zext<14,13>(x0_V_22_fu_4777_p3.read());
}

void Sobel_phase_strm::thread_x0_V_22_fu_4777_p3() {
    x0_V_22_fu_4777_p3 = esl_concat<8,5>(grad_x_V_pixel_23_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_23_cast_fu_4903_p1() {
    x0_V_23_cast_fu_4903_p1 = esl_zext<14,13>(x0_V_23_fu_4895_p3.read());
}

void Sobel_phase_strm::thread_x0_V_23_fu_4895_p3() {
    x0_V_23_fu_4895_p3 = esl_concat<8,5>(grad_x_V_pixel_24_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_24_cast_fu_5021_p1() {
    x0_V_24_cast_fu_5021_p1 = esl_zext<14,13>(x0_V_24_fu_5013_p3.read());
}

void Sobel_phase_strm::thread_x0_V_24_fu_5013_p3() {
    x0_V_24_fu_5013_p3 = esl_concat<8,5>(grad_x_V_pixel_25_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_25_cast_fu_5139_p1() {
    x0_V_25_cast_fu_5139_p1 = esl_zext<14,13>(x0_V_25_fu_5131_p3.read());
}

void Sobel_phase_strm::thread_x0_V_25_fu_5131_p3() {
    x0_V_25_fu_5131_p3 = esl_concat<8,5>(grad_x_V_pixel_26_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_26_cast_fu_5257_p1() {
    x0_V_26_cast_fu_5257_p1 = esl_zext<14,13>(x0_V_26_fu_5249_p3.read());
}

void Sobel_phase_strm::thread_x0_V_26_fu_5249_p3() {
    x0_V_26_fu_5249_p3 = esl_concat<8,5>(grad_x_V_pixel_27_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_27_cast_fu_5375_p1() {
    x0_V_27_cast_fu_5375_p1 = esl_zext<14,13>(x0_V_27_fu_5367_p3.read());
}

void Sobel_phase_strm::thread_x0_V_27_fu_5367_p3() {
    x0_V_27_fu_5367_p3 = esl_concat<8,5>(grad_x_V_pixel_28_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_28_cast_fu_5493_p1() {
    x0_V_28_cast_fu_5493_p1 = esl_zext<14,13>(x0_V_28_fu_5485_p3.read());
}

void Sobel_phase_strm::thread_x0_V_28_fu_5485_p3() {
    x0_V_28_fu_5485_p3 = esl_concat<8,5>(grad_x_V_pixel_29_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_29_cast_fu_5611_p1() {
    x0_V_29_cast_fu_5611_p1 = esl_zext<14,13>(x0_V_29_fu_5603_p3.read());
}

void Sobel_phase_strm::thread_x0_V_29_fu_5603_p3() {
    x0_V_29_fu_5603_p3 = esl_concat<8,5>(grad_x_V_pixel_30_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_2_cast_fu_2307_p1() {
    x0_V_2_cast_fu_2307_p1 = esl_zext<14,13>(x0_V_2_fu_2299_p3.read());
}

void Sobel_phase_strm::thread_x0_V_2_fu_2299_p3() {
    x0_V_2_fu_2299_p3 = esl_concat<8,5>(grad_x_V_pixel_2_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_30_cast_fu_5729_p1() {
    x0_V_30_cast_fu_5729_p1 = esl_zext<14,13>(x0_V_30_fu_5721_p3.read());
}

void Sobel_phase_strm::thread_x0_V_30_fu_5721_p3() {
    x0_V_30_fu_5721_p3 = esl_concat<8,5>(grad_x_V_pixel_31_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_31_cast_fu_5847_p1() {
    x0_V_31_cast_fu_5847_p1 = esl_zext<14,13>(x0_V_31_fu_5839_p3.read());
}

void Sobel_phase_strm::thread_x0_V_31_fu_5839_p3() {
    x0_V_31_fu_5839_p3 = esl_concat<8,5>(grad_x_V_pixel_32_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_32_cast_fu_5965_p1() {
    x0_V_32_cast_fu_5965_p1 = esl_zext<14,13>(x0_V_32_fu_5957_p3.read());
}

void Sobel_phase_strm::thread_x0_V_32_fu_5957_p3() {
    x0_V_32_fu_5957_p3 = esl_concat<8,5>(grad_x_V_pixel_33_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_33_cast_fu_6083_p1() {
    x0_V_33_cast_fu_6083_p1 = esl_zext<14,13>(x0_V_33_fu_6075_p3.read());
}

void Sobel_phase_strm::thread_x0_V_33_fu_6075_p3() {
    x0_V_33_fu_6075_p3 = esl_concat<8,5>(grad_x_V_pixel_34_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_34_cast_fu_6201_p1() {
    x0_V_34_cast_fu_6201_p1 = esl_zext<14,13>(x0_V_34_fu_6193_p3.read());
}

void Sobel_phase_strm::thread_x0_V_34_fu_6193_p3() {
    x0_V_34_fu_6193_p3 = esl_concat<8,5>(grad_x_V_pixel_35_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_35_cast_fu_6319_p1() {
    x0_V_35_cast_fu_6319_p1 = esl_zext<14,13>(x0_V_35_fu_6311_p3.read());
}

void Sobel_phase_strm::thread_x0_V_35_fu_6311_p3() {
    x0_V_35_fu_6311_p3 = esl_concat<8,5>(grad_x_V_pixel_36_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_36_cast_fu_6437_p1() {
    x0_V_36_cast_fu_6437_p1 = esl_zext<14,13>(x0_V_36_fu_6429_p3.read());
}

void Sobel_phase_strm::thread_x0_V_36_fu_6429_p3() {
    x0_V_36_fu_6429_p3 = esl_concat<8,5>(grad_x_V_pixel_37_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_37_cast_fu_6555_p1() {
    x0_V_37_cast_fu_6555_p1 = esl_zext<14,13>(x0_V_37_fu_6547_p3.read());
}

void Sobel_phase_strm::thread_x0_V_37_fu_6547_p3() {
    x0_V_37_fu_6547_p3 = esl_concat<8,5>(grad_x_V_pixel_38_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_38_cast_fu_6673_p1() {
    x0_V_38_cast_fu_6673_p1 = esl_zext<14,13>(x0_V_38_fu_6665_p3.read());
}

void Sobel_phase_strm::thread_x0_V_38_fu_6665_p3() {
    x0_V_38_fu_6665_p3 = esl_concat<8,5>(grad_x_V_pixel_39_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_39_cast_fu_6791_p1() {
    x0_V_39_cast_fu_6791_p1 = esl_zext<14,13>(x0_V_39_fu_6783_p3.read());
}

void Sobel_phase_strm::thread_x0_V_39_fu_6783_p3() {
    x0_V_39_fu_6783_p3 = esl_concat<8,5>(grad_x_V_pixel_40_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_3_cast_fu_2425_p1() {
    x0_V_3_cast_fu_2425_p1 = esl_zext<14,13>(x0_V_3_fu_2417_p3.read());
}

void Sobel_phase_strm::thread_x0_V_3_fu_2417_p3() {
    x0_V_3_fu_2417_p3 = esl_concat<8,5>(grad_x_V_pixel_3_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_40_cast_fu_6909_p1() {
    x0_V_40_cast_fu_6909_p1 = esl_zext<14,13>(x0_V_40_fu_6901_p3.read());
}

void Sobel_phase_strm::thread_x0_V_40_fu_6901_p3() {
    x0_V_40_fu_6901_p3 = esl_concat<8,5>(grad_x_V_pixel_41_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_4_cast_fu_2543_p1() {
    x0_V_4_cast_fu_2543_p1 = esl_zext<14,13>(x0_V_4_fu_2535_p3.read());
}

void Sobel_phase_strm::thread_x0_V_4_fu_2535_p3() {
    x0_V_4_fu_2535_p3 = esl_concat<8,5>(grad_x_V_pixel_4_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_5_cast_fu_2661_p1() {
    x0_V_5_cast_fu_2661_p1 = esl_zext<14,13>(x0_V_5_fu_2653_p3.read());
}

void Sobel_phase_strm::thread_x0_V_5_fu_2653_p3() {
    x0_V_5_fu_2653_p3 = esl_concat<8,5>(grad_x_V_pixel_5_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_6_cast_fu_2779_p1() {
    x0_V_6_cast_fu_2779_p1 = esl_zext<14,13>(x0_V_6_fu_2771_p3.read());
}

void Sobel_phase_strm::thread_x0_V_6_fu_2771_p3() {
    x0_V_6_fu_2771_p3 = esl_concat<8,5>(grad_x_V_pixel_6_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_7_cast_fu_2897_p1() {
    x0_V_7_cast_fu_2897_p1 = esl_zext<14,13>(x0_V_7_fu_2889_p3.read());
}

void Sobel_phase_strm::thread_x0_V_7_fu_2889_p3() {
    x0_V_7_fu_2889_p3 = esl_concat<8,5>(grad_x_V_pixel_7_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_8_cast_fu_3015_p1() {
    x0_V_8_cast_fu_3015_p1 = esl_zext<14,13>(x0_V_8_fu_3007_p3.read());
}

void Sobel_phase_strm::thread_x0_V_8_fu_3007_p3() {
    x0_V_8_fu_3007_p3 = esl_concat<8,5>(grad_x_V_pixel_8_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_9_cast_fu_3133_p1() {
    x0_V_9_cast_fu_3133_p1 = esl_zext<14,13>(x0_V_9_fu_3125_p3.read());
}

void Sobel_phase_strm::thread_x0_V_9_fu_3125_p3() {
    x0_V_9_fu_3125_p3 = esl_concat<8,5>(grad_x_V_pixel_9_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_cast_711_fu_3251_p1() {
    x0_V_cast_711_fu_3251_p1 = esl_zext<14,13>(x0_V_s_fu_3243_p3.read());
}

void Sobel_phase_strm::thread_x0_V_cast_fu_2071_p1() {
    x0_V_cast_fu_2071_p1 = esl_zext<14,13>(x0_V_fu_2063_p3.read());
}

void Sobel_phase_strm::thread_x0_V_fu_2063_p3() {
    x0_V_fu_2063_p3 = esl_concat<8,5>(grad_x_V_pixel_0_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x0_V_s_fu_3243_p3() {
    x0_V_s_fu_3243_p3 = esl_concat<8,5>(grad_x_V_pixel_10_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_x_1_fu_1709_p2() {
    x_1_fu_1709_p2 = (!x_reg_1692.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(x_reg_1692.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void Sobel_phase_strm::thread_x_V_1_0_1_fu_7007_p3() {
    x_V_1_0_1_fu_7007_p3 = (!dneg_0_1_reg_34243.read()[0].is_01())? sc_lv<15>(): ((dneg_0_1_reg_34243.read()[0].to_bool())? p_Val2_4_0_1_reg_34250.read(): p_Val2_12_0_1_reg_34260.read());
}

void Sobel_phase_strm::thread_x_V_1_0_2_fu_7087_p3() {
    x_V_1_0_2_fu_7087_p3 = (!dneg_0_2_fu_7021_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_2_fu_7021_p2.read()[0].to_bool())? p_Val2_4_0_2_fu_7045_p2.read(): p_Val2_12_0_2_fu_7075_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_3_fu_7165_p3() {
    x_V_1_0_3_fu_7165_p3 = (!dneg_0_3_fu_7103_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_3_fu_7103_p2.read()[0].to_bool())? p_Val2_4_0_3_fu_7123_p2.read(): p_Val2_12_0_3_fu_7153_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_4_fu_15189_p3() {
    x_V_1_0_4_fu_15189_p3 = (!dneg_0_4_fu_15155_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_4_fu_15155_p2.read()[0].to_bool())? p_Val2_4_0_4_fu_15163_p2.read(): p_Val2_12_0_4_fu_15179_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_0_5_fu_15267_p3() {
    x_V_1_0_5_fu_15267_p3 = (!dneg_0_5_fu_15205_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_5_fu_15205_p2.read()[0].to_bool())? p_Val2_4_0_5_fu_15225_p2.read(): p_Val2_12_0_5_fu_15255_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_1_fu_8947_p3() {
    x_V_1_10_1_fu_8947_p3 = (!dneg_10_1_reg_34623.read()[0].is_01())? sc_lv<15>(): ((dneg_10_1_reg_34623.read()[0].to_bool())? p_Val2_4_10_1_reg_34630.read(): p_Val2_12_10_1_reg_34640.read());
}

void Sobel_phase_strm::thread_x_V_1_10_2_fu_9027_p3() {
    x_V_1_10_2_fu_9027_p3 = (!dneg_10_2_fu_8961_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_2_fu_8961_p2.read()[0].to_bool())? p_Val2_4_10_2_fu_8985_p2.read(): p_Val2_12_10_2_fu_9015_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_3_fu_9105_p3() {
    x_V_1_10_3_fu_9105_p3 = (!dneg_10_3_fu_9043_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_3_fu_9043_p2.read()[0].to_bool())? p_Val2_4_10_3_fu_9063_p2.read(): p_Val2_12_10_3_fu_9093_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_4_fu_16669_p3() {
    x_V_1_10_4_fu_16669_p3 = (!dneg_10_4_fu_16635_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_4_fu_16635_p2.read()[0].to_bool())? p_Val2_4_10_4_fu_16643_p2.read(): p_Val2_12_10_4_fu_16659_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_10_5_fu_16747_p3() {
    x_V_1_10_5_fu_16747_p3 = (!dneg_10_5_fu_16685_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_5_fu_16685_p2.read()[0].to_bool())? p_Val2_4_10_5_fu_16705_p2.read(): p_Val2_12_10_5_fu_16735_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_1_fu_9141_p3() {
    x_V_1_11_1_fu_9141_p3 = (!dneg_11_1_reg_34661.read()[0].is_01())? sc_lv<15>(): ((dneg_11_1_reg_34661.read()[0].to_bool())? p_Val2_4_11_1_reg_34668.read(): p_Val2_12_11_1_reg_34678.read());
}

void Sobel_phase_strm::thread_x_V_1_11_2_fu_9221_p3() {
    x_V_1_11_2_fu_9221_p3 = (!dneg_11_2_fu_9155_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_2_fu_9155_p2.read()[0].to_bool())? p_Val2_4_11_2_fu_9179_p2.read(): p_Val2_12_11_2_fu_9209_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_3_fu_9299_p3() {
    x_V_1_11_3_fu_9299_p3 = (!dneg_11_3_fu_9237_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_3_fu_9237_p2.read()[0].to_bool())? p_Val2_4_11_3_fu_9257_p2.read(): p_Val2_12_11_3_fu_9287_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_4_fu_16817_p3() {
    x_V_1_11_4_fu_16817_p3 = (!dneg_11_4_fu_16783_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_4_fu_16783_p2.read()[0].to_bool())? p_Val2_4_11_4_fu_16791_p2.read(): p_Val2_12_11_4_fu_16807_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_11_5_fu_16895_p3() {
    x_V_1_11_5_fu_16895_p3 = (!dneg_11_5_fu_16833_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_5_fu_16833_p2.read()[0].to_bool())? p_Val2_4_11_5_fu_16853_p2.read(): p_Val2_12_11_5_fu_16883_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_1_fu_9335_p3() {
    x_V_1_12_1_fu_9335_p3 = (!dneg_12_1_reg_34699.read()[0].is_01())? sc_lv<15>(): ((dneg_12_1_reg_34699.read()[0].to_bool())? p_Val2_4_12_1_reg_34706.read(): p_Val2_12_12_1_reg_34716.read());
}

void Sobel_phase_strm::thread_x_V_1_12_2_fu_9415_p3() {
    x_V_1_12_2_fu_9415_p3 = (!dneg_12_2_fu_9349_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_2_fu_9349_p2.read()[0].to_bool())? p_Val2_4_12_2_fu_9373_p2.read(): p_Val2_12_12_2_fu_9403_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_3_fu_9493_p3() {
    x_V_1_12_3_fu_9493_p3 = (!dneg_12_3_fu_9431_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_3_fu_9431_p2.read()[0].to_bool())? p_Val2_4_12_3_fu_9451_p2.read(): p_Val2_12_12_3_fu_9481_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_4_fu_16965_p3() {
    x_V_1_12_4_fu_16965_p3 = (!dneg_12_4_fu_16931_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_4_fu_16931_p2.read()[0].to_bool())? p_Val2_4_12_4_fu_16939_p2.read(): p_Val2_12_12_4_fu_16955_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_12_5_fu_17043_p3() {
    x_V_1_12_5_fu_17043_p3 = (!dneg_12_5_fu_16981_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_5_fu_16981_p2.read()[0].to_bool())? p_Val2_4_12_5_fu_17001_p2.read(): p_Val2_12_12_5_fu_17031_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_1_fu_9529_p3() {
    x_V_1_13_1_fu_9529_p3 = (!dneg_13_1_reg_34737.read()[0].is_01())? sc_lv<15>(): ((dneg_13_1_reg_34737.read()[0].to_bool())? p_Val2_4_13_1_reg_34744.read(): p_Val2_12_13_1_reg_34754.read());
}

void Sobel_phase_strm::thread_x_V_1_13_2_fu_9609_p3() {
    x_V_1_13_2_fu_9609_p3 = (!dneg_13_2_fu_9543_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_2_fu_9543_p2.read()[0].to_bool())? p_Val2_4_13_2_fu_9567_p2.read(): p_Val2_12_13_2_fu_9597_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_3_fu_9687_p3() {
    x_V_1_13_3_fu_9687_p3 = (!dneg_13_3_fu_9625_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_3_fu_9625_p2.read()[0].to_bool())? p_Val2_4_13_3_fu_9645_p2.read(): p_Val2_12_13_3_fu_9675_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_4_fu_17113_p3() {
    x_V_1_13_4_fu_17113_p3 = (!dneg_13_4_fu_17079_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_4_fu_17079_p2.read()[0].to_bool())? p_Val2_4_13_4_fu_17087_p2.read(): p_Val2_12_13_4_fu_17103_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_13_5_fu_17191_p3() {
    x_V_1_13_5_fu_17191_p3 = (!dneg_13_5_fu_17129_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_5_fu_17129_p2.read()[0].to_bool())? p_Val2_4_13_5_fu_17149_p2.read(): p_Val2_12_13_5_fu_17179_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_1_fu_9723_p3() {
    x_V_1_14_1_fu_9723_p3 = (!dneg_14_1_reg_34775.read()[0].is_01())? sc_lv<15>(): ((dneg_14_1_reg_34775.read()[0].to_bool())? p_Val2_4_14_1_reg_34782.read(): p_Val2_12_14_1_reg_34792.read());
}

void Sobel_phase_strm::thread_x_V_1_14_2_fu_9803_p3() {
    x_V_1_14_2_fu_9803_p3 = (!dneg_14_2_fu_9737_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_2_fu_9737_p2.read()[0].to_bool())? p_Val2_4_14_2_fu_9761_p2.read(): p_Val2_12_14_2_fu_9791_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_3_fu_9881_p3() {
    x_V_1_14_3_fu_9881_p3 = (!dneg_14_3_fu_9819_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_3_fu_9819_p2.read()[0].to_bool())? p_Val2_4_14_3_fu_9839_p2.read(): p_Val2_12_14_3_fu_9869_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_4_fu_17261_p3() {
    x_V_1_14_4_fu_17261_p3 = (!dneg_14_4_fu_17227_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_4_fu_17227_p2.read()[0].to_bool())? p_Val2_4_14_4_fu_17235_p2.read(): p_Val2_12_14_4_fu_17251_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_14_5_fu_17339_p3() {
    x_V_1_14_5_fu_17339_p3 = (!dneg_14_5_fu_17277_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_5_fu_17277_p2.read()[0].to_bool())? p_Val2_4_14_5_fu_17297_p2.read(): p_Val2_12_14_5_fu_17327_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_1_fu_9917_p3() {
    x_V_1_15_1_fu_9917_p3 = (!dneg_15_1_reg_34813.read()[0].is_01())? sc_lv<15>(): ((dneg_15_1_reg_34813.read()[0].to_bool())? p_Val2_4_15_1_reg_34820.read(): p_Val2_12_15_1_reg_34830.read());
}

void Sobel_phase_strm::thread_x_V_1_15_2_fu_9997_p3() {
    x_V_1_15_2_fu_9997_p3 = (!dneg_15_2_fu_9931_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_2_fu_9931_p2.read()[0].to_bool())? p_Val2_4_15_2_fu_9955_p2.read(): p_Val2_12_15_2_fu_9985_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_3_fu_10075_p3() {
    x_V_1_15_3_fu_10075_p3 = (!dneg_15_3_fu_10013_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_3_fu_10013_p2.read()[0].to_bool())? p_Val2_4_15_3_fu_10033_p2.read(): p_Val2_12_15_3_fu_10063_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_4_fu_17409_p3() {
    x_V_1_15_4_fu_17409_p3 = (!dneg_15_4_fu_17375_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_4_fu_17375_p2.read()[0].to_bool())? p_Val2_4_15_4_fu_17383_p2.read(): p_Val2_12_15_4_fu_17399_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_15_5_fu_17487_p3() {
    x_V_1_15_5_fu_17487_p3 = (!dneg_15_5_fu_17425_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_5_fu_17425_p2.read()[0].to_bool())? p_Val2_4_15_5_fu_17445_p2.read(): p_Val2_12_15_5_fu_17475_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_1_fu_10111_p3() {
    x_V_1_16_1_fu_10111_p3 = (!dneg_16_1_reg_34851.read()[0].is_01())? sc_lv<15>(): ((dneg_16_1_reg_34851.read()[0].to_bool())? p_Val2_4_16_1_reg_34858.read(): p_Val2_12_16_1_reg_34868.read());
}

void Sobel_phase_strm::thread_x_V_1_16_2_fu_10191_p3() {
    x_V_1_16_2_fu_10191_p3 = (!dneg_16_2_fu_10125_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_2_fu_10125_p2.read()[0].to_bool())? p_Val2_4_16_2_fu_10149_p2.read(): p_Val2_12_16_2_fu_10179_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_3_fu_10269_p3() {
    x_V_1_16_3_fu_10269_p3 = (!dneg_16_3_fu_10207_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_3_fu_10207_p2.read()[0].to_bool())? p_Val2_4_16_3_fu_10227_p2.read(): p_Val2_12_16_3_fu_10257_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_4_fu_17557_p3() {
    x_V_1_16_4_fu_17557_p3 = (!dneg_16_4_fu_17523_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_4_fu_17523_p2.read()[0].to_bool())? p_Val2_4_16_4_fu_17531_p2.read(): p_Val2_12_16_4_fu_17547_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_16_5_fu_17635_p3() {
    x_V_1_16_5_fu_17635_p3 = (!dneg_16_5_fu_17573_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_5_fu_17573_p2.read()[0].to_bool())? p_Val2_4_16_5_fu_17593_p2.read(): p_Val2_12_16_5_fu_17623_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_1_fu_10305_p3() {
    x_V_1_17_1_fu_10305_p3 = (!dneg_17_1_reg_34889.read()[0].is_01())? sc_lv<15>(): ((dneg_17_1_reg_34889.read()[0].to_bool())? p_Val2_4_17_1_reg_34896.read(): p_Val2_12_17_1_reg_34906.read());
}

void Sobel_phase_strm::thread_x_V_1_17_2_fu_10385_p3() {
    x_V_1_17_2_fu_10385_p3 = (!dneg_17_2_fu_10319_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_2_fu_10319_p2.read()[0].to_bool())? p_Val2_4_17_2_fu_10343_p2.read(): p_Val2_12_17_2_fu_10373_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_3_fu_10463_p3() {
    x_V_1_17_3_fu_10463_p3 = (!dneg_17_3_fu_10401_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_3_fu_10401_p2.read()[0].to_bool())? p_Val2_4_17_3_fu_10421_p2.read(): p_Val2_12_17_3_fu_10451_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_4_fu_17705_p3() {
    x_V_1_17_4_fu_17705_p3 = (!dneg_17_4_fu_17671_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_4_fu_17671_p2.read()[0].to_bool())? p_Val2_4_17_4_fu_17679_p2.read(): p_Val2_12_17_4_fu_17695_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_17_5_fu_17783_p3() {
    x_V_1_17_5_fu_17783_p3 = (!dneg_17_5_fu_17721_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_5_fu_17721_p2.read()[0].to_bool())? p_Val2_4_17_5_fu_17741_p2.read(): p_Val2_12_17_5_fu_17771_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_1_fu_10499_p3() {
    x_V_1_18_1_fu_10499_p3 = (!dneg_18_1_reg_34927.read()[0].is_01())? sc_lv<15>(): ((dneg_18_1_reg_34927.read()[0].to_bool())? p_Val2_4_18_1_reg_34934.read(): p_Val2_12_18_1_reg_34944.read());
}

void Sobel_phase_strm::thread_x_V_1_18_2_fu_10579_p3() {
    x_V_1_18_2_fu_10579_p3 = (!dneg_18_2_fu_10513_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_2_fu_10513_p2.read()[0].to_bool())? p_Val2_4_18_2_fu_10537_p2.read(): p_Val2_12_18_2_fu_10567_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_3_fu_10657_p3() {
    x_V_1_18_3_fu_10657_p3 = (!dneg_18_3_fu_10595_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_3_fu_10595_p2.read()[0].to_bool())? p_Val2_4_18_3_fu_10615_p2.read(): p_Val2_12_18_3_fu_10645_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_4_fu_17853_p3() {
    x_V_1_18_4_fu_17853_p3 = (!dneg_18_4_fu_17819_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_4_fu_17819_p2.read()[0].to_bool())? p_Val2_4_18_4_fu_17827_p2.read(): p_Val2_12_18_4_fu_17843_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_18_5_fu_17931_p3() {
    x_V_1_18_5_fu_17931_p3 = (!dneg_18_5_fu_17869_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_5_fu_17869_p2.read()[0].to_bool())? p_Val2_4_18_5_fu_17889_p2.read(): p_Val2_12_18_5_fu_17919_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_1_fu_10693_p3() {
    x_V_1_19_1_fu_10693_p3 = (!dneg_19_1_reg_34965.read()[0].is_01())? sc_lv<15>(): ((dneg_19_1_reg_34965.read()[0].to_bool())? p_Val2_4_19_1_reg_34972.read(): p_Val2_12_19_1_reg_34982.read());
}

void Sobel_phase_strm::thread_x_V_1_19_2_fu_10773_p3() {
    x_V_1_19_2_fu_10773_p3 = (!dneg_19_2_fu_10707_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_2_fu_10707_p2.read()[0].to_bool())? p_Val2_4_19_2_fu_10731_p2.read(): p_Val2_12_19_2_fu_10761_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_3_fu_10851_p3() {
    x_V_1_19_3_fu_10851_p3 = (!dneg_19_3_fu_10789_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_3_fu_10789_p2.read()[0].to_bool())? p_Val2_4_19_3_fu_10809_p2.read(): p_Val2_12_19_3_fu_10839_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_4_fu_18001_p3() {
    x_V_1_19_4_fu_18001_p3 = (!dneg_19_4_fu_17967_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_4_fu_17967_p2.read()[0].to_bool())? p_Val2_4_19_4_fu_17975_p2.read(): p_Val2_12_19_4_fu_17991_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_19_5_fu_18079_p3() {
    x_V_1_19_5_fu_18079_p3 = (!dneg_19_5_fu_18017_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_5_fu_18017_p2.read()[0].to_bool())? p_Val2_4_19_5_fu_18037_p2.read(): p_Val2_12_19_5_fu_18067_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_1_fu_7201_p3() {
    x_V_1_1_1_fu_7201_p3 = (!dneg_1_1_reg_34281.read()[0].is_01())? sc_lv<15>(): ((dneg_1_1_reg_34281.read()[0].to_bool())? p_Val2_4_1_1_reg_34288.read(): p_Val2_12_1_1_reg_34298.read());
}

void Sobel_phase_strm::thread_x_V_1_1_2_fu_7281_p3() {
    x_V_1_1_2_fu_7281_p3 = (!dneg_1_2_fu_7215_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_2_fu_7215_p2.read()[0].to_bool())? p_Val2_4_1_2_fu_7239_p2.read(): p_Val2_12_1_2_fu_7269_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_3_fu_7359_p3() {
    x_V_1_1_3_fu_7359_p3 = (!dneg_1_3_fu_7297_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_3_fu_7297_p2.read()[0].to_bool())? p_Val2_4_1_3_fu_7317_p2.read(): p_Val2_12_1_3_fu_7347_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_4_fu_15337_p3() {
    x_V_1_1_4_fu_15337_p3 = (!dneg_1_4_fu_15303_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_4_fu_15303_p2.read()[0].to_bool())? p_Val2_4_1_4_fu_15311_p2.read(): p_Val2_12_1_4_fu_15327_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_1_5_fu_15415_p3() {
    x_V_1_1_5_fu_15415_p3 = (!dneg_1_5_fu_15353_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_5_fu_15353_p2.read()[0].to_bool())? p_Val2_4_1_5_fu_15373_p2.read(): p_Val2_12_1_5_fu_15403_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_1_fu_10887_p3() {
    x_V_1_20_1_fu_10887_p3 = (!dneg_20_1_reg_35003.read()[0].is_01())? sc_lv<15>(): ((dneg_20_1_reg_35003.read()[0].to_bool())? p_Val2_4_20_1_reg_35010.read(): p_Val2_12_20_1_reg_35020.read());
}

void Sobel_phase_strm::thread_x_V_1_20_2_fu_10967_p3() {
    x_V_1_20_2_fu_10967_p3 = (!dneg_20_2_fu_10901_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_2_fu_10901_p2.read()[0].to_bool())? p_Val2_4_20_2_fu_10925_p2.read(): p_Val2_12_20_2_fu_10955_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_3_fu_11045_p3() {
    x_V_1_20_3_fu_11045_p3 = (!dneg_20_3_fu_10983_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_3_fu_10983_p2.read()[0].to_bool())? p_Val2_4_20_3_fu_11003_p2.read(): p_Val2_12_20_3_fu_11033_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_4_fu_18149_p3() {
    x_V_1_20_4_fu_18149_p3 = (!dneg_20_4_fu_18115_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_4_fu_18115_p2.read()[0].to_bool())? p_Val2_4_20_4_fu_18123_p2.read(): p_Val2_12_20_4_fu_18139_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_20_5_fu_18227_p3() {
    x_V_1_20_5_fu_18227_p3 = (!dneg_20_5_fu_18165_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_5_fu_18165_p2.read()[0].to_bool())? p_Val2_4_20_5_fu_18185_p2.read(): p_Val2_12_20_5_fu_18215_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_1_fu_11081_p3() {
    x_V_1_21_1_fu_11081_p3 = (!dneg_21_1_reg_35041.read()[0].is_01())? sc_lv<15>(): ((dneg_21_1_reg_35041.read()[0].to_bool())? p_Val2_4_21_1_reg_35048.read(): p_Val2_12_21_1_reg_35058.read());
}

void Sobel_phase_strm::thread_x_V_1_21_2_fu_11161_p3() {
    x_V_1_21_2_fu_11161_p3 = (!dneg_21_2_fu_11095_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_2_fu_11095_p2.read()[0].to_bool())? p_Val2_4_21_2_fu_11119_p2.read(): p_Val2_12_21_2_fu_11149_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_3_fu_11239_p3() {
    x_V_1_21_3_fu_11239_p3 = (!dneg_21_3_fu_11177_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_3_fu_11177_p2.read()[0].to_bool())? p_Val2_4_21_3_fu_11197_p2.read(): p_Val2_12_21_3_fu_11227_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_4_fu_18297_p3() {
    x_V_1_21_4_fu_18297_p3 = (!dneg_21_4_fu_18263_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_4_fu_18263_p2.read()[0].to_bool())? p_Val2_4_21_4_fu_18271_p2.read(): p_Val2_12_21_4_fu_18287_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_21_5_fu_18375_p3() {
    x_V_1_21_5_fu_18375_p3 = (!dneg_21_5_fu_18313_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_5_fu_18313_p2.read()[0].to_bool())? p_Val2_4_21_5_fu_18333_p2.read(): p_Val2_12_21_5_fu_18363_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_1_fu_11275_p3() {
    x_V_1_22_1_fu_11275_p3 = (!dneg_22_1_reg_35079.read()[0].is_01())? sc_lv<15>(): ((dneg_22_1_reg_35079.read()[0].to_bool())? p_Val2_4_22_1_reg_35086.read(): p_Val2_12_22_1_reg_35096.read());
}

void Sobel_phase_strm::thread_x_V_1_22_2_fu_11355_p3() {
    x_V_1_22_2_fu_11355_p3 = (!dneg_22_2_fu_11289_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_2_fu_11289_p2.read()[0].to_bool())? p_Val2_4_22_2_fu_11313_p2.read(): p_Val2_12_22_2_fu_11343_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_3_fu_11433_p3() {
    x_V_1_22_3_fu_11433_p3 = (!dneg_22_3_fu_11371_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_3_fu_11371_p2.read()[0].to_bool())? p_Val2_4_22_3_fu_11391_p2.read(): p_Val2_12_22_3_fu_11421_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_4_fu_18445_p3() {
    x_V_1_22_4_fu_18445_p3 = (!dneg_22_4_fu_18411_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_4_fu_18411_p2.read()[0].to_bool())? p_Val2_4_22_4_fu_18419_p2.read(): p_Val2_12_22_4_fu_18435_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_22_5_fu_18523_p3() {
    x_V_1_22_5_fu_18523_p3 = (!dneg_22_5_fu_18461_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_5_fu_18461_p2.read()[0].to_bool())? p_Val2_4_22_5_fu_18481_p2.read(): p_Val2_12_22_5_fu_18511_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_1_fu_11469_p3() {
    x_V_1_23_1_fu_11469_p3 = (!dneg_23_1_reg_35117.read()[0].is_01())? sc_lv<15>(): ((dneg_23_1_reg_35117.read()[0].to_bool())? p_Val2_4_23_1_reg_35124.read(): p_Val2_12_23_1_reg_35134.read());
}

void Sobel_phase_strm::thread_x_V_1_23_2_fu_11549_p3() {
    x_V_1_23_2_fu_11549_p3 = (!dneg_23_2_fu_11483_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_2_fu_11483_p2.read()[0].to_bool())? p_Val2_4_23_2_fu_11507_p2.read(): p_Val2_12_23_2_fu_11537_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_3_fu_11627_p3() {
    x_V_1_23_3_fu_11627_p3 = (!dneg_23_3_fu_11565_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_3_fu_11565_p2.read()[0].to_bool())? p_Val2_4_23_3_fu_11585_p2.read(): p_Val2_12_23_3_fu_11615_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_4_fu_18593_p3() {
    x_V_1_23_4_fu_18593_p3 = (!dneg_23_4_fu_18559_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_4_fu_18559_p2.read()[0].to_bool())? p_Val2_4_23_4_fu_18567_p2.read(): p_Val2_12_23_4_fu_18583_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_23_5_fu_18671_p3() {
    x_V_1_23_5_fu_18671_p3 = (!dneg_23_5_fu_18609_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_5_fu_18609_p2.read()[0].to_bool())? p_Val2_4_23_5_fu_18629_p2.read(): p_Val2_12_23_5_fu_18659_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_1_fu_11663_p3() {
    x_V_1_24_1_fu_11663_p3 = (!dneg_24_1_reg_35155.read()[0].is_01())? sc_lv<15>(): ((dneg_24_1_reg_35155.read()[0].to_bool())? p_Val2_4_24_1_reg_35162.read(): p_Val2_12_24_1_reg_35172.read());
}

void Sobel_phase_strm::thread_x_V_1_24_2_fu_11743_p3() {
    x_V_1_24_2_fu_11743_p3 = (!dneg_24_2_fu_11677_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_2_fu_11677_p2.read()[0].to_bool())? p_Val2_4_24_2_fu_11701_p2.read(): p_Val2_12_24_2_fu_11731_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_3_fu_11821_p3() {
    x_V_1_24_3_fu_11821_p3 = (!dneg_24_3_fu_11759_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_3_fu_11759_p2.read()[0].to_bool())? p_Val2_4_24_3_fu_11779_p2.read(): p_Val2_12_24_3_fu_11809_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_4_fu_18741_p3() {
    x_V_1_24_4_fu_18741_p3 = (!dneg_24_4_fu_18707_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_4_fu_18707_p2.read()[0].to_bool())? p_Val2_4_24_4_fu_18715_p2.read(): p_Val2_12_24_4_fu_18731_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_24_5_fu_18819_p3() {
    x_V_1_24_5_fu_18819_p3 = (!dneg_24_5_fu_18757_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_5_fu_18757_p2.read()[0].to_bool())? p_Val2_4_24_5_fu_18777_p2.read(): p_Val2_12_24_5_fu_18807_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_1_fu_11857_p3() {
    x_V_1_25_1_fu_11857_p3 = (!dneg_25_1_reg_35193.read()[0].is_01())? sc_lv<15>(): ((dneg_25_1_reg_35193.read()[0].to_bool())? p_Val2_4_25_1_reg_35200.read(): p_Val2_12_25_1_reg_35210.read());
}

void Sobel_phase_strm::thread_x_V_1_25_2_fu_11937_p3() {
    x_V_1_25_2_fu_11937_p3 = (!dneg_25_2_fu_11871_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_2_fu_11871_p2.read()[0].to_bool())? p_Val2_4_25_2_fu_11895_p2.read(): p_Val2_12_25_2_fu_11925_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_3_fu_12015_p3() {
    x_V_1_25_3_fu_12015_p3 = (!dneg_25_3_fu_11953_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_3_fu_11953_p2.read()[0].to_bool())? p_Val2_4_25_3_fu_11973_p2.read(): p_Val2_12_25_3_fu_12003_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_4_fu_18889_p3() {
    x_V_1_25_4_fu_18889_p3 = (!dneg_25_4_fu_18855_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_4_fu_18855_p2.read()[0].to_bool())? p_Val2_4_25_4_fu_18863_p2.read(): p_Val2_12_25_4_fu_18879_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_25_5_fu_18967_p3() {
    x_V_1_25_5_fu_18967_p3 = (!dneg_25_5_fu_18905_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_5_fu_18905_p2.read()[0].to_bool())? p_Val2_4_25_5_fu_18925_p2.read(): p_Val2_12_25_5_fu_18955_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_1_fu_12051_p3() {
    x_V_1_26_1_fu_12051_p3 = (!dneg_26_1_reg_35231.read()[0].is_01())? sc_lv<15>(): ((dneg_26_1_reg_35231.read()[0].to_bool())? p_Val2_4_26_1_reg_35238.read(): p_Val2_12_26_1_reg_35248.read());
}

void Sobel_phase_strm::thread_x_V_1_26_2_fu_12131_p3() {
    x_V_1_26_2_fu_12131_p3 = (!dneg_26_2_fu_12065_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_2_fu_12065_p2.read()[0].to_bool())? p_Val2_4_26_2_fu_12089_p2.read(): p_Val2_12_26_2_fu_12119_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_3_fu_12209_p3() {
    x_V_1_26_3_fu_12209_p3 = (!dneg_26_3_fu_12147_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_3_fu_12147_p2.read()[0].to_bool())? p_Val2_4_26_3_fu_12167_p2.read(): p_Val2_12_26_3_fu_12197_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_4_fu_19037_p3() {
    x_V_1_26_4_fu_19037_p3 = (!dneg_26_4_fu_19003_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_4_fu_19003_p2.read()[0].to_bool())? p_Val2_4_26_4_fu_19011_p2.read(): p_Val2_12_26_4_fu_19027_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_26_5_fu_19115_p3() {
    x_V_1_26_5_fu_19115_p3 = (!dneg_26_5_fu_19053_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_5_fu_19053_p2.read()[0].to_bool())? p_Val2_4_26_5_fu_19073_p2.read(): p_Val2_12_26_5_fu_19103_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_1_fu_12245_p3() {
    x_V_1_27_1_fu_12245_p3 = (!dneg_27_1_reg_35269.read()[0].is_01())? sc_lv<15>(): ((dneg_27_1_reg_35269.read()[0].to_bool())? p_Val2_4_27_1_reg_35276.read(): p_Val2_12_27_1_reg_35286.read());
}

void Sobel_phase_strm::thread_x_V_1_27_2_fu_12325_p3() {
    x_V_1_27_2_fu_12325_p3 = (!dneg_27_2_fu_12259_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_2_fu_12259_p2.read()[0].to_bool())? p_Val2_4_27_2_fu_12283_p2.read(): p_Val2_12_27_2_fu_12313_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_3_fu_12403_p3() {
    x_V_1_27_3_fu_12403_p3 = (!dneg_27_3_fu_12341_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_3_fu_12341_p2.read()[0].to_bool())? p_Val2_4_27_3_fu_12361_p2.read(): p_Val2_12_27_3_fu_12391_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_4_fu_19185_p3() {
    x_V_1_27_4_fu_19185_p3 = (!dneg_27_4_fu_19151_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_4_fu_19151_p2.read()[0].to_bool())? p_Val2_4_27_4_fu_19159_p2.read(): p_Val2_12_27_4_fu_19175_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_27_5_fu_19263_p3() {
    x_V_1_27_5_fu_19263_p3 = (!dneg_27_5_fu_19201_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_5_fu_19201_p2.read()[0].to_bool())? p_Val2_4_27_5_fu_19221_p2.read(): p_Val2_12_27_5_fu_19251_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_1_fu_12439_p3() {
    x_V_1_28_1_fu_12439_p3 = (!dneg_28_1_reg_35307.read()[0].is_01())? sc_lv<15>(): ((dneg_28_1_reg_35307.read()[0].to_bool())? p_Val2_4_28_1_reg_35314.read(): p_Val2_12_28_1_reg_35324.read());
}

void Sobel_phase_strm::thread_x_V_1_28_2_fu_12519_p3() {
    x_V_1_28_2_fu_12519_p3 = (!dneg_28_2_fu_12453_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_2_fu_12453_p2.read()[0].to_bool())? p_Val2_4_28_2_fu_12477_p2.read(): p_Val2_12_28_2_fu_12507_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_3_fu_12597_p3() {
    x_V_1_28_3_fu_12597_p3 = (!dneg_28_3_fu_12535_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_3_fu_12535_p2.read()[0].to_bool())? p_Val2_4_28_3_fu_12555_p2.read(): p_Val2_12_28_3_fu_12585_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_4_fu_19333_p3() {
    x_V_1_28_4_fu_19333_p3 = (!dneg_28_4_fu_19299_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_4_fu_19299_p2.read()[0].to_bool())? p_Val2_4_28_4_fu_19307_p2.read(): p_Val2_12_28_4_fu_19323_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_28_5_fu_19411_p3() {
    x_V_1_28_5_fu_19411_p3 = (!dneg_28_5_fu_19349_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_5_fu_19349_p2.read()[0].to_bool())? p_Val2_4_28_5_fu_19369_p2.read(): p_Val2_12_28_5_fu_19399_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_1_fu_12633_p3() {
    x_V_1_29_1_fu_12633_p3 = (!dneg_29_1_reg_35345.read()[0].is_01())? sc_lv<15>(): ((dneg_29_1_reg_35345.read()[0].to_bool())? p_Val2_4_29_1_reg_35352.read(): p_Val2_12_29_1_reg_35362.read());
}

void Sobel_phase_strm::thread_x_V_1_29_2_fu_12713_p3() {
    x_V_1_29_2_fu_12713_p3 = (!dneg_29_2_fu_12647_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_2_fu_12647_p2.read()[0].to_bool())? p_Val2_4_29_2_fu_12671_p2.read(): p_Val2_12_29_2_fu_12701_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_3_fu_12791_p3() {
    x_V_1_29_3_fu_12791_p3 = (!dneg_29_3_fu_12729_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_3_fu_12729_p2.read()[0].to_bool())? p_Val2_4_29_3_fu_12749_p2.read(): p_Val2_12_29_3_fu_12779_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_4_fu_19481_p3() {
    x_V_1_29_4_fu_19481_p3 = (!dneg_29_4_fu_19447_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_4_fu_19447_p2.read()[0].to_bool())? p_Val2_4_29_4_fu_19455_p2.read(): p_Val2_12_29_4_fu_19471_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_29_5_fu_19559_p3() {
    x_V_1_29_5_fu_19559_p3 = (!dneg_29_5_fu_19497_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_5_fu_19497_p2.read()[0].to_bool())? p_Val2_4_29_5_fu_19517_p2.read(): p_Val2_12_29_5_fu_19547_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_1_fu_7395_p3() {
    x_V_1_2_1_fu_7395_p3 = (!dneg_2_1_reg_34319.read()[0].is_01())? sc_lv<15>(): ((dneg_2_1_reg_34319.read()[0].to_bool())? p_Val2_4_2_1_reg_34326.read(): p_Val2_12_2_1_reg_34336.read());
}

void Sobel_phase_strm::thread_x_V_1_2_2_fu_7475_p3() {
    x_V_1_2_2_fu_7475_p3 = (!dneg_2_2_fu_7409_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_2_fu_7409_p2.read()[0].to_bool())? p_Val2_4_2_2_fu_7433_p2.read(): p_Val2_12_2_2_fu_7463_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_3_fu_7553_p3() {
    x_V_1_2_3_fu_7553_p3 = (!dneg_2_3_fu_7491_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_3_fu_7491_p2.read()[0].to_bool())? p_Val2_4_2_3_fu_7511_p2.read(): p_Val2_12_2_3_fu_7541_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_4_fu_15485_p3() {
    x_V_1_2_4_fu_15485_p3 = (!dneg_2_4_fu_15451_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_4_fu_15451_p2.read()[0].to_bool())? p_Val2_4_2_4_fu_15459_p2.read(): p_Val2_12_2_4_fu_15475_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_2_5_fu_15563_p3() {
    x_V_1_2_5_fu_15563_p3 = (!dneg_2_5_fu_15501_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_5_fu_15501_p2.read()[0].to_bool())? p_Val2_4_2_5_fu_15521_p2.read(): p_Val2_12_2_5_fu_15551_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_1_fu_12827_p3() {
    x_V_1_30_1_fu_12827_p3 = (!dneg_30_1_reg_35383.read()[0].is_01())? sc_lv<15>(): ((dneg_30_1_reg_35383.read()[0].to_bool())? p_Val2_4_30_1_reg_35390.read(): p_Val2_12_30_1_reg_35400.read());
}

void Sobel_phase_strm::thread_x_V_1_30_2_fu_12907_p3() {
    x_V_1_30_2_fu_12907_p3 = (!dneg_30_2_fu_12841_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_2_fu_12841_p2.read()[0].to_bool())? p_Val2_4_30_2_fu_12865_p2.read(): p_Val2_12_30_2_fu_12895_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_3_fu_12985_p3() {
    x_V_1_30_3_fu_12985_p3 = (!dneg_30_3_fu_12923_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_3_fu_12923_p2.read()[0].to_bool())? p_Val2_4_30_3_fu_12943_p2.read(): p_Val2_12_30_3_fu_12973_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_4_fu_19629_p3() {
    x_V_1_30_4_fu_19629_p3 = (!dneg_30_4_fu_19595_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_4_fu_19595_p2.read()[0].to_bool())? p_Val2_4_30_4_fu_19603_p2.read(): p_Val2_12_30_4_fu_19619_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_30_5_fu_19707_p3() {
    x_V_1_30_5_fu_19707_p3 = (!dneg_30_5_fu_19645_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_5_fu_19645_p2.read()[0].to_bool())? p_Val2_4_30_5_fu_19665_p2.read(): p_Val2_12_30_5_fu_19695_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_1_fu_13021_p3() {
    x_V_1_31_1_fu_13021_p3 = (!dneg_31_1_reg_35421.read()[0].is_01())? sc_lv<15>(): ((dneg_31_1_reg_35421.read()[0].to_bool())? p_Val2_4_31_1_reg_35428.read(): p_Val2_12_31_1_reg_35438.read());
}

void Sobel_phase_strm::thread_x_V_1_31_2_fu_13101_p3() {
    x_V_1_31_2_fu_13101_p3 = (!dneg_31_2_fu_13035_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_2_fu_13035_p2.read()[0].to_bool())? p_Val2_4_31_2_fu_13059_p2.read(): p_Val2_12_31_2_fu_13089_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_3_fu_13179_p3() {
    x_V_1_31_3_fu_13179_p3 = (!dneg_31_3_fu_13117_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_3_fu_13117_p2.read()[0].to_bool())? p_Val2_4_31_3_fu_13137_p2.read(): p_Val2_12_31_3_fu_13167_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_4_fu_19777_p3() {
    x_V_1_31_4_fu_19777_p3 = (!dneg_31_4_fu_19743_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_4_fu_19743_p2.read()[0].to_bool())? p_Val2_4_31_4_fu_19751_p2.read(): p_Val2_12_31_4_fu_19767_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_31_5_fu_19855_p3() {
    x_V_1_31_5_fu_19855_p3 = (!dneg_31_5_fu_19793_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_5_fu_19793_p2.read()[0].to_bool())? p_Val2_4_31_5_fu_19813_p2.read(): p_Val2_12_31_5_fu_19843_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_1_fu_13215_p3() {
    x_V_1_32_1_fu_13215_p3 = (!dneg_32_1_reg_35459.read()[0].is_01())? sc_lv<15>(): ((dneg_32_1_reg_35459.read()[0].to_bool())? p_Val2_4_32_1_reg_35466.read(): p_Val2_12_32_1_reg_35476.read());
}

void Sobel_phase_strm::thread_x_V_1_32_2_fu_13295_p3() {
    x_V_1_32_2_fu_13295_p3 = (!dneg_32_2_fu_13229_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_2_fu_13229_p2.read()[0].to_bool())? p_Val2_4_32_2_fu_13253_p2.read(): p_Val2_12_32_2_fu_13283_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_3_fu_13373_p3() {
    x_V_1_32_3_fu_13373_p3 = (!dneg_32_3_fu_13311_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_3_fu_13311_p2.read()[0].to_bool())? p_Val2_4_32_3_fu_13331_p2.read(): p_Val2_12_32_3_fu_13361_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_4_fu_19925_p3() {
    x_V_1_32_4_fu_19925_p3 = (!dneg_32_4_fu_19891_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_4_fu_19891_p2.read()[0].to_bool())? p_Val2_4_32_4_fu_19899_p2.read(): p_Val2_12_32_4_fu_19915_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_32_5_fu_20003_p3() {
    x_V_1_32_5_fu_20003_p3 = (!dneg_32_5_fu_19941_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_5_fu_19941_p2.read()[0].to_bool())? p_Val2_4_32_5_fu_19961_p2.read(): p_Val2_12_32_5_fu_19991_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_1_fu_13409_p3() {
    x_V_1_33_1_fu_13409_p3 = (!dneg_33_1_reg_35497.read()[0].is_01())? sc_lv<15>(): ((dneg_33_1_reg_35497.read()[0].to_bool())? p_Val2_4_33_1_reg_35504.read(): p_Val2_12_33_1_reg_35514.read());
}

void Sobel_phase_strm::thread_x_V_1_33_2_fu_13489_p3() {
    x_V_1_33_2_fu_13489_p3 = (!dneg_33_2_fu_13423_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_2_fu_13423_p2.read()[0].to_bool())? p_Val2_4_33_2_fu_13447_p2.read(): p_Val2_12_33_2_fu_13477_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_3_fu_13567_p3() {
    x_V_1_33_3_fu_13567_p3 = (!dneg_33_3_fu_13505_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_3_fu_13505_p2.read()[0].to_bool())? p_Val2_4_33_3_fu_13525_p2.read(): p_Val2_12_33_3_fu_13555_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_4_fu_20073_p3() {
    x_V_1_33_4_fu_20073_p3 = (!dneg_33_4_fu_20039_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_4_fu_20039_p2.read()[0].to_bool())? p_Val2_4_33_4_fu_20047_p2.read(): p_Val2_12_33_4_fu_20063_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_33_5_fu_20151_p3() {
    x_V_1_33_5_fu_20151_p3 = (!dneg_33_5_fu_20089_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_5_fu_20089_p2.read()[0].to_bool())? p_Val2_4_33_5_fu_20109_p2.read(): p_Val2_12_33_5_fu_20139_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_1_fu_13603_p3() {
    x_V_1_34_1_fu_13603_p3 = (!dneg_34_1_reg_35535.read()[0].is_01())? sc_lv<15>(): ((dneg_34_1_reg_35535.read()[0].to_bool())? p_Val2_4_34_1_reg_35542.read(): p_Val2_12_34_1_reg_35552.read());
}

void Sobel_phase_strm::thread_x_V_1_34_2_fu_13683_p3() {
    x_V_1_34_2_fu_13683_p3 = (!dneg_34_2_fu_13617_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_2_fu_13617_p2.read()[0].to_bool())? p_Val2_4_34_2_fu_13641_p2.read(): p_Val2_12_34_2_fu_13671_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_3_fu_13761_p3() {
    x_V_1_34_3_fu_13761_p3 = (!dneg_34_3_fu_13699_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_3_fu_13699_p2.read()[0].to_bool())? p_Val2_4_34_3_fu_13719_p2.read(): p_Val2_12_34_3_fu_13749_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_4_fu_20221_p3() {
    x_V_1_34_4_fu_20221_p3 = (!dneg_34_4_fu_20187_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_4_fu_20187_p2.read()[0].to_bool())? p_Val2_4_34_4_fu_20195_p2.read(): p_Val2_12_34_4_fu_20211_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_34_5_fu_20299_p3() {
    x_V_1_34_5_fu_20299_p3 = (!dneg_34_5_fu_20237_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_5_fu_20237_p2.read()[0].to_bool())? p_Val2_4_34_5_fu_20257_p2.read(): p_Val2_12_34_5_fu_20287_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_1_fu_13797_p3() {
    x_V_1_35_1_fu_13797_p3 = (!dneg_35_1_reg_35573.read()[0].is_01())? sc_lv<15>(): ((dneg_35_1_reg_35573.read()[0].to_bool())? p_Val2_4_35_1_reg_35580.read(): p_Val2_12_35_1_reg_35590.read());
}

void Sobel_phase_strm::thread_x_V_1_35_2_fu_13877_p3() {
    x_V_1_35_2_fu_13877_p3 = (!dneg_35_2_fu_13811_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_2_fu_13811_p2.read()[0].to_bool())? p_Val2_4_35_2_fu_13835_p2.read(): p_Val2_12_35_2_fu_13865_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_3_fu_13955_p3() {
    x_V_1_35_3_fu_13955_p3 = (!dneg_35_3_fu_13893_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_3_fu_13893_p2.read()[0].to_bool())? p_Val2_4_35_3_fu_13913_p2.read(): p_Val2_12_35_3_fu_13943_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_4_fu_20369_p3() {
    x_V_1_35_4_fu_20369_p3 = (!dneg_35_4_fu_20335_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_4_fu_20335_p2.read()[0].to_bool())? p_Val2_4_35_4_fu_20343_p2.read(): p_Val2_12_35_4_fu_20359_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_35_5_fu_20447_p3() {
    x_V_1_35_5_fu_20447_p3 = (!dneg_35_5_fu_20385_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_5_fu_20385_p2.read()[0].to_bool())? p_Val2_4_35_5_fu_20405_p2.read(): p_Val2_12_35_5_fu_20435_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_1_fu_13991_p3() {
    x_V_1_36_1_fu_13991_p3 = (!dneg_36_1_reg_35611.read()[0].is_01())? sc_lv<15>(): ((dneg_36_1_reg_35611.read()[0].to_bool())? p_Val2_4_36_1_reg_35618.read(): p_Val2_12_36_1_reg_35628.read());
}

void Sobel_phase_strm::thread_x_V_1_36_2_fu_14071_p3() {
    x_V_1_36_2_fu_14071_p3 = (!dneg_36_2_fu_14005_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_2_fu_14005_p2.read()[0].to_bool())? p_Val2_4_36_2_fu_14029_p2.read(): p_Val2_12_36_2_fu_14059_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_3_fu_14149_p3() {
    x_V_1_36_3_fu_14149_p3 = (!dneg_36_3_fu_14087_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_3_fu_14087_p2.read()[0].to_bool())? p_Val2_4_36_3_fu_14107_p2.read(): p_Val2_12_36_3_fu_14137_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_4_fu_20517_p3() {
    x_V_1_36_4_fu_20517_p3 = (!dneg_36_4_fu_20483_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_4_fu_20483_p2.read()[0].to_bool())? p_Val2_4_36_4_fu_20491_p2.read(): p_Val2_12_36_4_fu_20507_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_36_5_fu_20595_p3() {
    x_V_1_36_5_fu_20595_p3 = (!dneg_36_5_fu_20533_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_5_fu_20533_p2.read()[0].to_bool())? p_Val2_4_36_5_fu_20553_p2.read(): p_Val2_12_36_5_fu_20583_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_1_fu_14185_p3() {
    x_V_1_37_1_fu_14185_p3 = (!dneg_37_1_reg_35649.read()[0].is_01())? sc_lv<15>(): ((dneg_37_1_reg_35649.read()[0].to_bool())? p_Val2_4_37_1_reg_35656.read(): p_Val2_12_37_1_reg_35666.read());
}

void Sobel_phase_strm::thread_x_V_1_37_2_fu_14265_p3() {
    x_V_1_37_2_fu_14265_p3 = (!dneg_37_2_fu_14199_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_2_fu_14199_p2.read()[0].to_bool())? p_Val2_4_37_2_fu_14223_p2.read(): p_Val2_12_37_2_fu_14253_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_3_fu_14343_p3() {
    x_V_1_37_3_fu_14343_p3 = (!dneg_37_3_fu_14281_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_3_fu_14281_p2.read()[0].to_bool())? p_Val2_4_37_3_fu_14301_p2.read(): p_Val2_12_37_3_fu_14331_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_4_fu_20665_p3() {
    x_V_1_37_4_fu_20665_p3 = (!dneg_37_4_fu_20631_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_4_fu_20631_p2.read()[0].to_bool())? p_Val2_4_37_4_fu_20639_p2.read(): p_Val2_12_37_4_fu_20655_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_37_5_fu_20743_p3() {
    x_V_1_37_5_fu_20743_p3 = (!dneg_37_5_fu_20681_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_5_fu_20681_p2.read()[0].to_bool())? p_Val2_4_37_5_fu_20701_p2.read(): p_Val2_12_37_5_fu_20731_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_1_fu_14379_p3() {
    x_V_1_38_1_fu_14379_p3 = (!dneg_38_1_reg_35687.read()[0].is_01())? sc_lv<15>(): ((dneg_38_1_reg_35687.read()[0].to_bool())? p_Val2_4_38_1_reg_35694.read(): p_Val2_12_38_1_reg_35704.read());
}

void Sobel_phase_strm::thread_x_V_1_38_2_fu_14459_p3() {
    x_V_1_38_2_fu_14459_p3 = (!dneg_38_2_fu_14393_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_2_fu_14393_p2.read()[0].to_bool())? p_Val2_4_38_2_fu_14417_p2.read(): p_Val2_12_38_2_fu_14447_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_3_fu_14537_p3() {
    x_V_1_38_3_fu_14537_p3 = (!dneg_38_3_fu_14475_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_3_fu_14475_p2.read()[0].to_bool())? p_Val2_4_38_3_fu_14495_p2.read(): p_Val2_12_38_3_fu_14525_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_4_fu_20813_p3() {
    x_V_1_38_4_fu_20813_p3 = (!dneg_38_4_fu_20779_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_4_fu_20779_p2.read()[0].to_bool())? p_Val2_4_38_4_fu_20787_p2.read(): p_Val2_12_38_4_fu_20803_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_38_5_fu_20891_p3() {
    x_V_1_38_5_fu_20891_p3 = (!dneg_38_5_fu_20829_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_5_fu_20829_p2.read()[0].to_bool())? p_Val2_4_38_5_fu_20849_p2.read(): p_Val2_12_38_5_fu_20879_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_1_fu_14573_p3() {
    x_V_1_39_1_fu_14573_p3 = (!dneg_39_1_reg_35725.read()[0].is_01())? sc_lv<15>(): ((dneg_39_1_reg_35725.read()[0].to_bool())? p_Val2_4_39_1_reg_35732.read(): p_Val2_12_39_1_reg_35742.read());
}

void Sobel_phase_strm::thread_x_V_1_39_2_fu_14653_p3() {
    x_V_1_39_2_fu_14653_p3 = (!dneg_39_2_fu_14587_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_2_fu_14587_p2.read()[0].to_bool())? p_Val2_4_39_2_fu_14611_p2.read(): p_Val2_12_39_2_fu_14641_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_3_fu_14731_p3() {
    x_V_1_39_3_fu_14731_p3 = (!dneg_39_3_fu_14669_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_3_fu_14669_p2.read()[0].to_bool())? p_Val2_4_39_3_fu_14689_p2.read(): p_Val2_12_39_3_fu_14719_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_4_fu_20961_p3() {
    x_V_1_39_4_fu_20961_p3 = (!dneg_39_4_fu_20927_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_4_fu_20927_p2.read()[0].to_bool())? p_Val2_4_39_4_fu_20935_p2.read(): p_Val2_12_39_4_fu_20951_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_39_5_fu_21039_p3() {
    x_V_1_39_5_fu_21039_p3 = (!dneg_39_5_fu_20977_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_5_fu_20977_p2.read()[0].to_bool())? p_Val2_4_39_5_fu_20997_p2.read(): p_Val2_12_39_5_fu_21027_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_1_fu_7589_p3() {
    x_V_1_3_1_fu_7589_p3 = (!dneg_3_1_reg_34357.read()[0].is_01())? sc_lv<15>(): ((dneg_3_1_reg_34357.read()[0].to_bool())? p_Val2_4_3_1_reg_34364.read(): p_Val2_12_3_1_reg_34374.read());
}

void Sobel_phase_strm::thread_x_V_1_3_2_fu_7669_p3() {
    x_V_1_3_2_fu_7669_p3 = (!dneg_3_2_fu_7603_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_2_fu_7603_p2.read()[0].to_bool())? p_Val2_4_3_2_fu_7627_p2.read(): p_Val2_12_3_2_fu_7657_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_3_fu_7747_p3() {
    x_V_1_3_3_fu_7747_p3 = (!dneg_3_3_fu_7685_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_3_fu_7685_p2.read()[0].to_bool())? p_Val2_4_3_3_fu_7705_p2.read(): p_Val2_12_3_3_fu_7735_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_4_fu_15633_p3() {
    x_V_1_3_4_fu_15633_p3 = (!dneg_3_4_fu_15599_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_4_fu_15599_p2.read()[0].to_bool())? p_Val2_4_3_4_fu_15607_p2.read(): p_Val2_12_3_4_fu_15623_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_3_5_fu_15711_p3() {
    x_V_1_3_5_fu_15711_p3 = (!dneg_3_5_fu_15649_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_5_fu_15649_p2.read()[0].to_bool())? p_Val2_4_3_5_fu_15669_p2.read(): p_Val2_12_3_5_fu_15699_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_1_fu_14767_p3() {
    x_V_1_40_1_fu_14767_p3 = (!dneg_40_1_reg_35763.read()[0].is_01())? sc_lv<15>(): ((dneg_40_1_reg_35763.read()[0].to_bool())? p_Val2_4_40_1_reg_35770.read(): p_Val2_12_40_1_reg_35780.read());
}

void Sobel_phase_strm::thread_x_V_1_40_2_fu_14847_p3() {
    x_V_1_40_2_fu_14847_p3 = (!dneg_40_2_fu_14781_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_2_fu_14781_p2.read()[0].to_bool())? p_Val2_4_40_2_fu_14805_p2.read(): p_Val2_12_40_2_fu_14835_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_3_fu_14925_p3() {
    x_V_1_40_3_fu_14925_p3 = (!dneg_40_3_fu_14863_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_3_fu_14863_p2.read()[0].to_bool())? p_Val2_4_40_3_fu_14883_p2.read(): p_Val2_12_40_3_fu_14913_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_4_fu_21109_p3() {
    x_V_1_40_4_fu_21109_p3 = (!dneg_40_4_fu_21075_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_4_fu_21075_p2.read()[0].to_bool())? p_Val2_4_40_4_fu_21083_p2.read(): p_Val2_12_40_4_fu_21099_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_40_5_fu_21187_p3() {
    x_V_1_40_5_fu_21187_p3 = (!dneg_40_5_fu_21125_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_5_fu_21125_p2.read()[0].to_bool())? p_Val2_4_40_5_fu_21145_p2.read(): p_Val2_12_40_5_fu_21175_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_1_fu_14961_p3() {
    x_V_1_41_1_fu_14961_p3 = (!dneg_41_1_reg_35801.read()[0].is_01())? sc_lv<15>(): ((dneg_41_1_reg_35801.read()[0].to_bool())? p_Val2_4_41_1_reg_35808.read(): p_Val2_12_41_1_reg_35818.read());
}

void Sobel_phase_strm::thread_x_V_1_41_2_fu_15041_p3() {
    x_V_1_41_2_fu_15041_p3 = (!dneg_41_2_fu_14975_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_2_fu_14975_p2.read()[0].to_bool())? p_Val2_4_41_2_fu_14999_p2.read(): p_Val2_12_41_2_fu_15029_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_3_fu_15119_p3() {
    x_V_1_41_3_fu_15119_p3 = (!dneg_41_3_fu_15057_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_3_fu_15057_p2.read()[0].to_bool())? p_Val2_4_41_3_fu_15077_p2.read(): p_Val2_12_41_3_fu_15107_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_4_fu_21257_p3() {
    x_V_1_41_4_fu_21257_p3 = (!dneg_41_4_fu_21223_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_4_fu_21223_p2.read()[0].to_bool())? p_Val2_4_41_4_fu_21231_p2.read(): p_Val2_12_41_4_fu_21247_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_41_5_fu_21335_p3() {
    x_V_1_41_5_fu_21335_p3 = (!dneg_41_5_fu_21273_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_5_fu_21273_p2.read()[0].to_bool())? p_Val2_4_41_5_fu_21293_p2.read(): p_Val2_12_41_5_fu_21323_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_1_fu_7783_p3() {
    x_V_1_4_1_fu_7783_p3 = (!dneg_4_1_reg_34395.read()[0].is_01())? sc_lv<15>(): ((dneg_4_1_reg_34395.read()[0].to_bool())? p_Val2_4_4_1_reg_34402.read(): p_Val2_12_4_1_reg_34412.read());
}

void Sobel_phase_strm::thread_x_V_1_4_2_fu_7863_p3() {
    x_V_1_4_2_fu_7863_p3 = (!dneg_4_2_fu_7797_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_2_fu_7797_p2.read()[0].to_bool())? p_Val2_4_4_2_fu_7821_p2.read(): p_Val2_12_4_2_fu_7851_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_3_fu_7941_p3() {
    x_V_1_4_3_fu_7941_p3 = (!dneg_4_3_fu_7879_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_3_fu_7879_p2.read()[0].to_bool())? p_Val2_4_4_3_fu_7899_p2.read(): p_Val2_12_4_3_fu_7929_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_4_fu_15781_p3() {
    x_V_1_4_4_fu_15781_p3 = (!dneg_4_4_fu_15747_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_4_fu_15747_p2.read()[0].to_bool())? p_Val2_4_4_4_fu_15755_p2.read(): p_Val2_12_4_4_fu_15771_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_4_5_fu_15859_p3() {
    x_V_1_4_5_fu_15859_p3 = (!dneg_4_5_fu_15797_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_5_fu_15797_p2.read()[0].to_bool())? p_Val2_4_4_5_fu_15817_p2.read(): p_Val2_12_4_5_fu_15847_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_1_fu_7977_p3() {
    x_V_1_5_1_fu_7977_p3 = (!dneg_5_1_reg_34433.read()[0].is_01())? sc_lv<15>(): ((dneg_5_1_reg_34433.read()[0].to_bool())? p_Val2_4_5_1_reg_34440.read(): p_Val2_12_5_1_reg_34450.read());
}

void Sobel_phase_strm::thread_x_V_1_5_2_fu_8057_p3() {
    x_V_1_5_2_fu_8057_p3 = (!dneg_5_2_fu_7991_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_2_fu_7991_p2.read()[0].to_bool())? p_Val2_4_5_2_fu_8015_p2.read(): p_Val2_12_5_2_fu_8045_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_3_fu_8135_p3() {
    x_V_1_5_3_fu_8135_p3 = (!dneg_5_3_fu_8073_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_3_fu_8073_p2.read()[0].to_bool())? p_Val2_4_5_3_fu_8093_p2.read(): p_Val2_12_5_3_fu_8123_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_4_fu_15929_p3() {
    x_V_1_5_4_fu_15929_p3 = (!dneg_5_4_fu_15895_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_4_fu_15895_p2.read()[0].to_bool())? p_Val2_4_5_4_fu_15903_p2.read(): p_Val2_12_5_4_fu_15919_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_5_5_fu_16007_p3() {
    x_V_1_5_5_fu_16007_p3 = (!dneg_5_5_fu_15945_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_5_fu_15945_p2.read()[0].to_bool())? p_Val2_4_5_5_fu_15965_p2.read(): p_Val2_12_5_5_fu_15995_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_1_fu_8171_p3() {
    x_V_1_6_1_fu_8171_p3 = (!dneg_6_1_reg_34471.read()[0].is_01())? sc_lv<15>(): ((dneg_6_1_reg_34471.read()[0].to_bool())? p_Val2_4_6_1_reg_34478.read(): p_Val2_12_6_1_reg_34488.read());
}

void Sobel_phase_strm::thread_x_V_1_6_2_fu_8251_p3() {
    x_V_1_6_2_fu_8251_p3 = (!dneg_6_2_fu_8185_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_2_fu_8185_p2.read()[0].to_bool())? p_Val2_4_6_2_fu_8209_p2.read(): p_Val2_12_6_2_fu_8239_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_3_fu_8329_p3() {
    x_V_1_6_3_fu_8329_p3 = (!dneg_6_3_fu_8267_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_3_fu_8267_p2.read()[0].to_bool())? p_Val2_4_6_3_fu_8287_p2.read(): p_Val2_12_6_3_fu_8317_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_4_fu_16077_p3() {
    x_V_1_6_4_fu_16077_p3 = (!dneg_6_4_fu_16043_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_4_fu_16043_p2.read()[0].to_bool())? p_Val2_4_6_4_fu_16051_p2.read(): p_Val2_12_6_4_fu_16067_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_6_5_fu_16155_p3() {
    x_V_1_6_5_fu_16155_p3 = (!dneg_6_5_fu_16093_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_5_fu_16093_p2.read()[0].to_bool())? p_Val2_4_6_5_fu_16113_p2.read(): p_Val2_12_6_5_fu_16143_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_1_fu_8365_p3() {
    x_V_1_7_1_fu_8365_p3 = (!dneg_7_1_reg_34509.read()[0].is_01())? sc_lv<15>(): ((dneg_7_1_reg_34509.read()[0].to_bool())? p_Val2_4_7_1_reg_34516.read(): p_Val2_12_7_1_reg_34526.read());
}

void Sobel_phase_strm::thread_x_V_1_7_2_fu_8445_p3() {
    x_V_1_7_2_fu_8445_p3 = (!dneg_7_2_fu_8379_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_2_fu_8379_p2.read()[0].to_bool())? p_Val2_4_7_2_fu_8403_p2.read(): p_Val2_12_7_2_fu_8433_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_3_fu_8523_p3() {
    x_V_1_7_3_fu_8523_p3 = (!dneg_7_3_fu_8461_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_3_fu_8461_p2.read()[0].to_bool())? p_Val2_4_7_3_fu_8481_p2.read(): p_Val2_12_7_3_fu_8511_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_4_fu_16225_p3() {
    x_V_1_7_4_fu_16225_p3 = (!dneg_7_4_fu_16191_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_4_fu_16191_p2.read()[0].to_bool())? p_Val2_4_7_4_fu_16199_p2.read(): p_Val2_12_7_4_fu_16215_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_7_5_fu_16303_p3() {
    x_V_1_7_5_fu_16303_p3 = (!dneg_7_5_fu_16241_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_5_fu_16241_p2.read()[0].to_bool())? p_Val2_4_7_5_fu_16261_p2.read(): p_Val2_12_7_5_fu_16291_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_1_fu_8559_p3() {
    x_V_1_8_1_fu_8559_p3 = (!dneg_8_1_reg_34547.read()[0].is_01())? sc_lv<15>(): ((dneg_8_1_reg_34547.read()[0].to_bool())? p_Val2_4_8_1_reg_34554.read(): p_Val2_12_8_1_reg_34564.read());
}

void Sobel_phase_strm::thread_x_V_1_8_2_fu_8639_p3() {
    x_V_1_8_2_fu_8639_p3 = (!dneg_8_2_fu_8573_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_2_fu_8573_p2.read()[0].to_bool())? p_Val2_4_8_2_fu_8597_p2.read(): p_Val2_12_8_2_fu_8627_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_3_fu_8717_p3() {
    x_V_1_8_3_fu_8717_p3 = (!dneg_8_3_fu_8655_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_3_fu_8655_p2.read()[0].to_bool())? p_Val2_4_8_3_fu_8675_p2.read(): p_Val2_12_8_3_fu_8705_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_4_fu_16373_p3() {
    x_V_1_8_4_fu_16373_p3 = (!dneg_8_4_fu_16339_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_4_fu_16339_p2.read()[0].to_bool())? p_Val2_4_8_4_fu_16347_p2.read(): p_Val2_12_8_4_fu_16363_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_8_5_fu_16451_p3() {
    x_V_1_8_5_fu_16451_p3 = (!dneg_8_5_fu_16389_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_5_fu_16389_p2.read()[0].to_bool())? p_Val2_4_8_5_fu_16409_p2.read(): p_Val2_12_8_5_fu_16439_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_1_fu_8753_p3() {
    x_V_1_9_1_fu_8753_p3 = (!dneg_9_1_reg_34585.read()[0].is_01())? sc_lv<15>(): ((dneg_9_1_reg_34585.read()[0].to_bool())? p_Val2_4_9_1_reg_34592.read(): p_Val2_12_9_1_reg_34602.read());
}

void Sobel_phase_strm::thread_x_V_1_9_2_fu_8833_p3() {
    x_V_1_9_2_fu_8833_p3 = (!dneg_9_2_fu_8767_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_2_fu_8767_p2.read()[0].to_bool())? p_Val2_4_9_2_fu_8791_p2.read(): p_Val2_12_9_2_fu_8821_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_3_fu_8911_p3() {
    x_V_1_9_3_fu_8911_p3 = (!dneg_9_3_fu_8849_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_3_fu_8849_p2.read()[0].to_bool())? p_Val2_4_9_3_fu_8869_p2.read(): p_Val2_12_9_3_fu_8899_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_4_fu_16521_p3() {
    x_V_1_9_4_fu_16521_p3 = (!dneg_9_4_fu_16487_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_4_fu_16487_p2.read()[0].to_bool())? p_Val2_4_9_4_fu_16495_p2.read(): p_Val2_12_9_4_fu_16511_p2.read());
}

void Sobel_phase_strm::thread_x_V_1_9_5_fu_16599_p3() {
    x_V_1_9_5_fu_16599_p3 = (!dneg_9_5_fu_16537_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_5_fu_16537_p2.read()[0].to_bool())? p_Val2_4_9_5_fu_16557_p2.read(): p_Val2_12_9_5_fu_16587_p2.read());
}

void Sobel_phase_strm::thread_y0_V_10_cast_fu_3357_p1() {
    y0_V_10_cast_fu_3357_p1 = esl_zext<14,13>(y0_V_10_fu_3349_p3.read());
}

void Sobel_phase_strm::thread_y0_V_10_fu_3349_p3() {
    y0_V_10_fu_3349_p3 = esl_concat<8,5>(grad_y_V_pixel_11_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_11_cast_fu_3475_p1() {
    y0_V_11_cast_fu_3475_p1 = esl_zext<14,13>(y0_V_11_fu_3467_p3.read());
}

void Sobel_phase_strm::thread_y0_V_11_fu_3467_p3() {
    y0_V_11_fu_3467_p3 = esl_concat<8,5>(grad_y_V_pixel_12_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_12_cast_fu_3593_p1() {
    y0_V_12_cast_fu_3593_p1 = esl_zext<14,13>(y0_V_12_fu_3585_p3.read());
}

void Sobel_phase_strm::thread_y0_V_12_fu_3585_p3() {
    y0_V_12_fu_3585_p3 = esl_concat<8,5>(grad_y_V_pixel_13_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_13_cast_fu_3711_p1() {
    y0_V_13_cast_fu_3711_p1 = esl_zext<14,13>(y0_V_13_fu_3703_p3.read());
}

void Sobel_phase_strm::thread_y0_V_13_fu_3703_p3() {
    y0_V_13_fu_3703_p3 = esl_concat<8,5>(grad_y_V_pixel_14_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_14_cast_fu_3829_p1() {
    y0_V_14_cast_fu_3829_p1 = esl_zext<14,13>(y0_V_14_fu_3821_p3.read());
}

void Sobel_phase_strm::thread_y0_V_14_fu_3821_p3() {
    y0_V_14_fu_3821_p3 = esl_concat<8,5>(grad_y_V_pixel_15_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_15_cast_fu_3947_p1() {
    y0_V_15_cast_fu_3947_p1 = esl_zext<14,13>(y0_V_15_fu_3939_p3.read());
}

void Sobel_phase_strm::thread_y0_V_15_fu_3939_p3() {
    y0_V_15_fu_3939_p3 = esl_concat<8,5>(grad_y_V_pixel_16_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_16_cast_fu_4065_p1() {
    y0_V_16_cast_fu_4065_p1 = esl_zext<14,13>(y0_V_16_fu_4057_p3.read());
}

void Sobel_phase_strm::thread_y0_V_16_fu_4057_p3() {
    y0_V_16_fu_4057_p3 = esl_concat<8,5>(grad_y_V_pixel_17_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_17_cast_fu_4183_p1() {
    y0_V_17_cast_fu_4183_p1 = esl_zext<14,13>(y0_V_17_fu_4175_p3.read());
}

void Sobel_phase_strm::thread_y0_V_17_fu_4175_p3() {
    y0_V_17_fu_4175_p3 = esl_concat<8,5>(grad_y_V_pixel_18_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_18_cast_fu_4301_p1() {
    y0_V_18_cast_fu_4301_p1 = esl_zext<14,13>(y0_V_18_fu_4293_p3.read());
}

void Sobel_phase_strm::thread_y0_V_18_fu_4293_p3() {
    y0_V_18_fu_4293_p3 = esl_concat<8,5>(grad_y_V_pixel_19_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_19_cast_fu_4419_p1() {
    y0_V_19_cast_fu_4419_p1 = esl_zext<14,13>(y0_V_19_fu_4411_p3.read());
}

void Sobel_phase_strm::thread_y0_V_19_fu_4411_p3() {
    y0_V_19_fu_4411_p3 = esl_concat<8,5>(grad_y_V_pixel_20_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_1_cast_fu_2177_p1() {
    y0_V_1_cast_fu_2177_p1 = esl_zext<14,13>(y0_V_1_fu_2169_p3.read());
}

void Sobel_phase_strm::thread_y0_V_1_fu_2169_p3() {
    y0_V_1_fu_2169_p3 = esl_concat<8,5>(grad_y_V_pixel_1_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_20_cast_fu_4537_p1() {
    y0_V_20_cast_fu_4537_p1 = esl_zext<14,13>(y0_V_20_fu_4529_p3.read());
}

void Sobel_phase_strm::thread_y0_V_20_fu_4529_p3() {
    y0_V_20_fu_4529_p3 = esl_concat<8,5>(grad_y_V_pixel_21_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_21_cast_fu_4655_p1() {
    y0_V_21_cast_fu_4655_p1 = esl_zext<14,13>(y0_V_21_fu_4647_p3.read());
}

void Sobel_phase_strm::thread_y0_V_21_fu_4647_p3() {
    y0_V_21_fu_4647_p3 = esl_concat<8,5>(grad_y_V_pixel_22_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_22_cast_fu_4773_p1() {
    y0_V_22_cast_fu_4773_p1 = esl_zext<14,13>(y0_V_22_fu_4765_p3.read());
}

void Sobel_phase_strm::thread_y0_V_22_fu_4765_p3() {
    y0_V_22_fu_4765_p3 = esl_concat<8,5>(grad_y_V_pixel_23_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_23_cast_fu_4891_p1() {
    y0_V_23_cast_fu_4891_p1 = esl_zext<14,13>(y0_V_23_fu_4883_p3.read());
}

void Sobel_phase_strm::thread_y0_V_23_fu_4883_p3() {
    y0_V_23_fu_4883_p3 = esl_concat<8,5>(grad_y_V_pixel_24_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_24_cast_fu_5009_p1() {
    y0_V_24_cast_fu_5009_p1 = esl_zext<14,13>(y0_V_24_fu_5001_p3.read());
}

void Sobel_phase_strm::thread_y0_V_24_fu_5001_p3() {
    y0_V_24_fu_5001_p3 = esl_concat<8,5>(grad_y_V_pixel_25_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_25_cast_fu_5127_p1() {
    y0_V_25_cast_fu_5127_p1 = esl_zext<14,13>(y0_V_25_fu_5119_p3.read());
}

void Sobel_phase_strm::thread_y0_V_25_fu_5119_p3() {
    y0_V_25_fu_5119_p3 = esl_concat<8,5>(grad_y_V_pixel_26_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_26_cast_fu_5245_p1() {
    y0_V_26_cast_fu_5245_p1 = esl_zext<14,13>(y0_V_26_fu_5237_p3.read());
}

void Sobel_phase_strm::thread_y0_V_26_fu_5237_p3() {
    y0_V_26_fu_5237_p3 = esl_concat<8,5>(grad_y_V_pixel_27_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_27_cast_fu_5363_p1() {
    y0_V_27_cast_fu_5363_p1 = esl_zext<14,13>(y0_V_27_fu_5355_p3.read());
}

void Sobel_phase_strm::thread_y0_V_27_fu_5355_p3() {
    y0_V_27_fu_5355_p3 = esl_concat<8,5>(grad_y_V_pixel_28_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_28_cast_fu_5481_p1() {
    y0_V_28_cast_fu_5481_p1 = esl_zext<14,13>(y0_V_28_fu_5473_p3.read());
}

void Sobel_phase_strm::thread_y0_V_28_fu_5473_p3() {
    y0_V_28_fu_5473_p3 = esl_concat<8,5>(grad_y_V_pixel_29_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_29_cast_fu_5599_p1() {
    y0_V_29_cast_fu_5599_p1 = esl_zext<14,13>(y0_V_29_fu_5591_p3.read());
}

void Sobel_phase_strm::thread_y0_V_29_fu_5591_p3() {
    y0_V_29_fu_5591_p3 = esl_concat<8,5>(grad_y_V_pixel_30_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_2_cast_fu_2295_p1() {
    y0_V_2_cast_fu_2295_p1 = esl_zext<14,13>(y0_V_2_fu_2287_p3.read());
}

void Sobel_phase_strm::thread_y0_V_2_fu_2287_p3() {
    y0_V_2_fu_2287_p3 = esl_concat<8,5>(grad_y_V_pixel_2_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_30_cast_fu_5717_p1() {
    y0_V_30_cast_fu_5717_p1 = esl_zext<14,13>(y0_V_30_fu_5709_p3.read());
}

void Sobel_phase_strm::thread_y0_V_30_fu_5709_p3() {
    y0_V_30_fu_5709_p3 = esl_concat<8,5>(grad_y_V_pixel_31_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_31_cast_fu_5835_p1() {
    y0_V_31_cast_fu_5835_p1 = esl_zext<14,13>(y0_V_31_fu_5827_p3.read());
}

void Sobel_phase_strm::thread_y0_V_31_fu_5827_p3() {
    y0_V_31_fu_5827_p3 = esl_concat<8,5>(grad_y_V_pixel_32_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_32_cast_fu_5953_p1() {
    y0_V_32_cast_fu_5953_p1 = esl_zext<14,13>(y0_V_32_fu_5945_p3.read());
}

void Sobel_phase_strm::thread_y0_V_32_fu_5945_p3() {
    y0_V_32_fu_5945_p3 = esl_concat<8,5>(grad_y_V_pixel_33_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_33_cast_fu_6071_p1() {
    y0_V_33_cast_fu_6071_p1 = esl_zext<14,13>(y0_V_33_fu_6063_p3.read());
}

void Sobel_phase_strm::thread_y0_V_33_fu_6063_p3() {
    y0_V_33_fu_6063_p3 = esl_concat<8,5>(grad_y_V_pixel_34_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_34_cast_fu_6189_p1() {
    y0_V_34_cast_fu_6189_p1 = esl_zext<14,13>(y0_V_34_fu_6181_p3.read());
}

void Sobel_phase_strm::thread_y0_V_34_fu_6181_p3() {
    y0_V_34_fu_6181_p3 = esl_concat<8,5>(grad_y_V_pixel_35_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_35_cast_fu_6307_p1() {
    y0_V_35_cast_fu_6307_p1 = esl_zext<14,13>(y0_V_35_fu_6299_p3.read());
}

void Sobel_phase_strm::thread_y0_V_35_fu_6299_p3() {
    y0_V_35_fu_6299_p3 = esl_concat<8,5>(grad_y_V_pixel_36_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_36_cast_fu_6425_p1() {
    y0_V_36_cast_fu_6425_p1 = esl_zext<14,13>(y0_V_36_fu_6417_p3.read());
}

void Sobel_phase_strm::thread_y0_V_36_fu_6417_p3() {
    y0_V_36_fu_6417_p3 = esl_concat<8,5>(grad_y_V_pixel_37_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_37_cast_fu_6543_p1() {
    y0_V_37_cast_fu_6543_p1 = esl_zext<14,13>(y0_V_37_fu_6535_p3.read());
}

void Sobel_phase_strm::thread_y0_V_37_fu_6535_p3() {
    y0_V_37_fu_6535_p3 = esl_concat<8,5>(grad_y_V_pixel_38_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_38_cast_fu_6661_p1() {
    y0_V_38_cast_fu_6661_p1 = esl_zext<14,13>(y0_V_38_fu_6653_p3.read());
}

void Sobel_phase_strm::thread_y0_V_38_fu_6653_p3() {
    y0_V_38_fu_6653_p3 = esl_concat<8,5>(grad_y_V_pixel_39_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_39_cast_fu_6779_p1() {
    y0_V_39_cast_fu_6779_p1 = esl_zext<14,13>(y0_V_39_fu_6771_p3.read());
}

void Sobel_phase_strm::thread_y0_V_39_fu_6771_p3() {
    y0_V_39_fu_6771_p3 = esl_concat<8,5>(grad_y_V_pixel_40_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_3_cast_fu_2413_p1() {
    y0_V_3_cast_fu_2413_p1 = esl_zext<14,13>(y0_V_3_fu_2405_p3.read());
}

void Sobel_phase_strm::thread_y0_V_3_fu_2405_p3() {
    y0_V_3_fu_2405_p3 = esl_concat<8,5>(grad_y_V_pixel_3_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_40_cast_fu_6897_p1() {
    y0_V_40_cast_fu_6897_p1 = esl_zext<14,13>(y0_V_40_fu_6889_p3.read());
}

void Sobel_phase_strm::thread_y0_V_40_fu_6889_p3() {
    y0_V_40_fu_6889_p3 = esl_concat<8,5>(grad_y_V_pixel_41_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_4_cast_fu_2531_p1() {
    y0_V_4_cast_fu_2531_p1 = esl_zext<14,13>(y0_V_4_fu_2523_p3.read());
}

void Sobel_phase_strm::thread_y0_V_4_fu_2523_p3() {
    y0_V_4_fu_2523_p3 = esl_concat<8,5>(grad_y_V_pixel_4_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_5_cast_fu_2649_p1() {
    y0_V_5_cast_fu_2649_p1 = esl_zext<14,13>(y0_V_5_fu_2641_p3.read());
}

void Sobel_phase_strm::thread_y0_V_5_fu_2641_p3() {
    y0_V_5_fu_2641_p3 = esl_concat<8,5>(grad_y_V_pixel_5_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_6_cast_fu_2767_p1() {
    y0_V_6_cast_fu_2767_p1 = esl_zext<14,13>(y0_V_6_fu_2759_p3.read());
}

void Sobel_phase_strm::thread_y0_V_6_fu_2759_p3() {
    y0_V_6_fu_2759_p3 = esl_concat<8,5>(grad_y_V_pixel_6_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_7_cast_fu_2885_p1() {
    y0_V_7_cast_fu_2885_p1 = esl_zext<14,13>(y0_V_7_fu_2877_p3.read());
}

void Sobel_phase_strm::thread_y0_V_7_fu_2877_p3() {
    y0_V_7_fu_2877_p3 = esl_concat<8,5>(grad_y_V_pixel_7_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_8_cast_fu_3003_p1() {
    y0_V_8_cast_fu_3003_p1 = esl_zext<14,13>(y0_V_8_fu_2995_p3.read());
}

void Sobel_phase_strm::thread_y0_V_8_fu_2995_p3() {
    y0_V_8_fu_2995_p3 = esl_concat<8,5>(grad_y_V_pixel_8_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_9_cast_fu_3121_p1() {
    y0_V_9_cast_fu_3121_p1 = esl_zext<14,13>(y0_V_9_fu_3113_p3.read());
}

void Sobel_phase_strm::thread_y0_V_9_fu_3113_p3() {
    y0_V_9_fu_3113_p3 = esl_concat<8,5>(grad_y_V_pixel_9_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_cast_710_fu_3239_p1() {
    y0_V_cast_710_fu_3239_p1 = esl_zext<14,13>(y0_V_s_fu_3231_p3.read());
}

void Sobel_phase_strm::thread_y0_V_cast_fu_2059_p1() {
    y0_V_cast_fu_2059_p1 = esl_zext<14,13>(y0_V_fu_2051_p3.read());
}

void Sobel_phase_strm::thread_y0_V_fu_2051_p3() {
    y0_V_fu_2051_p3 = esl_concat<8,5>(grad_y_V_pixel_0_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y0_V_s_fu_3231_p3() {
    y0_V_s_fu_3231_p3 = esl_concat<8,5>(grad_y_V_pixel_10_dout.read(), ap_const_lv5_0);
}

void Sobel_phase_strm::thread_y_V_1_0_1_cast_fu_7017_p1() {
    y_V_1_0_1_cast_fu_7017_p1 = esl_sext<15,14>(y_V_1_0_1_fu_7012_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_0_1_fu_7012_p3() {
    y_V_1_0_1_fu_7012_p3 = (!dneg_0_1_reg_34243.read()[0].is_01())? sc_lv<14>(): ((dneg_0_1_reg_34243.read()[0].to_bool())? p_Val2_7_0_1_reg_34255.read(): p_Val2_14_0_1_reg_34265.read());
}

void Sobel_phase_strm::thread_y_V_1_0_2_fu_7095_p3() {
    y_V_1_0_2_fu_7095_p3 = (!dneg_0_2_fu_7021_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_2_fu_7021_p2.read()[0].to_bool())? p_Val2_7_0_2_fu_7065_p2.read(): p_Val2_14_0_2_fu_7081_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_3_fu_7173_p3() {
    y_V_1_0_3_fu_7173_p3 = (!dneg_0_3_fu_7103_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_3_fu_7103_p2.read()[0].to_bool())? p_Val2_7_0_3_fu_7143_p2.read(): p_Val2_14_0_3_fu_7159_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_4_fu_15197_p3() {
    y_V_1_0_4_fu_15197_p3 = (!dneg_0_4_fu_15155_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_4_fu_15155_p2.read()[0].to_bool())? p_Val2_7_0_4_fu_15171_p2.read(): p_Val2_14_0_4_fu_15184_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_5_fu_15275_p3() {
    y_V_1_0_5_fu_15275_p3 = (!dneg_0_5_fu_15205_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_5_fu_15205_p2.read()[0].to_bool())? p_Val2_7_0_5_fu_15245_p2.read(): p_Val2_14_0_5_fu_15261_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_6_fu_21452_p3() {
    y_V_1_0_6_fu_21452_p3 = (!dneg_0_6_fu_21418_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_6_fu_21418_p2.read()[0].to_bool())? p_Val2_7_0_6_fu_21434_p2.read(): p_Val2_14_0_6_fu_21447_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_0_7_fu_21510_p3() {
    y_V_1_0_7_fu_21510_p3 = (!dneg_0_7_fu_21460_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_0_7_fu_21460_p2.read()[0].to_bool())? p_Val2_7_0_7_fu_21498_p2.read(): p_Val2_14_0_7_fu_21504_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_1_cast_fu_8957_p1() {
    y_V_1_10_1_cast_fu_8957_p1 = esl_sext<15,14>(y_V_1_10_1_fu_8952_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_10_1_fu_8952_p3() {
    y_V_1_10_1_fu_8952_p3 = (!dneg_10_1_reg_34623.read()[0].is_01())? sc_lv<14>(): ((dneg_10_1_reg_34623.read()[0].to_bool())? p_Val2_7_10_1_reg_34635.read(): p_Val2_14_10_1_reg_34645.read());
}

void Sobel_phase_strm::thread_y_V_1_10_2_fu_9035_p3() {
    y_V_1_10_2_fu_9035_p3 = (!dneg_10_2_fu_8961_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_2_fu_8961_p2.read()[0].to_bool())? p_Val2_7_10_2_fu_9005_p2.read(): p_Val2_14_10_2_fu_9021_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_3_fu_9113_p3() {
    y_V_1_10_3_fu_9113_p3 = (!dneg_10_3_fu_9043_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_3_fu_9043_p2.read()[0].to_bool())? p_Val2_7_10_3_fu_9083_p2.read(): p_Val2_14_10_3_fu_9099_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_4_fu_16677_p3() {
    y_V_1_10_4_fu_16677_p3 = (!dneg_10_4_fu_16635_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_4_fu_16635_p2.read()[0].to_bool())? p_Val2_7_10_4_fu_16651_p2.read(): p_Val2_14_10_4_fu_16664_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_5_fu_16755_p3() {
    y_V_1_10_5_fu_16755_p3 = (!dneg_10_5_fu_16685_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_5_fu_16685_p2.read()[0].to_bool())? p_Val2_7_10_5_fu_16725_p2.read(): p_Val2_14_10_5_fu_16741_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_6_fu_22982_p3() {
    y_V_1_10_6_fu_22982_p3 = (!dneg_10_6_fu_22948_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_6_fu_22948_p2.read()[0].to_bool())? p_Val2_7_10_6_fu_22964_p2.read(): p_Val2_14_10_6_fu_22977_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_10_7_fu_23040_p3() {
    y_V_1_10_7_fu_23040_p3 = (!dneg_10_7_fu_22990_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_10_7_fu_22990_p2.read()[0].to_bool())? p_Val2_7_10_7_fu_23028_p2.read(): p_Val2_14_10_7_fu_23034_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_1_cast_fu_9151_p1() {
    y_V_1_11_1_cast_fu_9151_p1 = esl_sext<15,14>(y_V_1_11_1_fu_9146_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_11_1_fu_9146_p3() {
    y_V_1_11_1_fu_9146_p3 = (!dneg_11_1_reg_34661.read()[0].is_01())? sc_lv<14>(): ((dneg_11_1_reg_34661.read()[0].to_bool())? p_Val2_7_11_1_reg_34673.read(): p_Val2_14_11_1_reg_34683.read());
}

void Sobel_phase_strm::thread_y_V_1_11_2_fu_9229_p3() {
    y_V_1_11_2_fu_9229_p3 = (!dneg_11_2_fu_9155_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_2_fu_9155_p2.read()[0].to_bool())? p_Val2_7_11_2_fu_9199_p2.read(): p_Val2_14_11_2_fu_9215_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_3_fu_9307_p3() {
    y_V_1_11_3_fu_9307_p3 = (!dneg_11_3_fu_9237_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_3_fu_9237_p2.read()[0].to_bool())? p_Val2_7_11_3_fu_9277_p2.read(): p_Val2_14_11_3_fu_9293_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_4_fu_16825_p3() {
    y_V_1_11_4_fu_16825_p3 = (!dneg_11_4_fu_16783_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_4_fu_16783_p2.read()[0].to_bool())? p_Val2_7_11_4_fu_16799_p2.read(): p_Val2_14_11_4_fu_16812_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_5_fu_16903_p3() {
    y_V_1_11_5_fu_16903_p3 = (!dneg_11_5_fu_16833_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_5_fu_16833_p2.read()[0].to_bool())? p_Val2_7_11_5_fu_16873_p2.read(): p_Val2_14_11_5_fu_16889_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_6_fu_23135_p3() {
    y_V_1_11_6_fu_23135_p3 = (!dneg_11_6_fu_23101_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_6_fu_23101_p2.read()[0].to_bool())? p_Val2_7_11_6_fu_23117_p2.read(): p_Val2_14_11_6_fu_23130_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_11_7_fu_23193_p3() {
    y_V_1_11_7_fu_23193_p3 = (!dneg_11_7_fu_23143_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_11_7_fu_23143_p2.read()[0].to_bool())? p_Val2_7_11_7_fu_23181_p2.read(): p_Val2_14_11_7_fu_23187_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_1_cast_fu_9345_p1() {
    y_V_1_12_1_cast_fu_9345_p1 = esl_sext<15,14>(y_V_1_12_1_fu_9340_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_12_1_fu_9340_p3() {
    y_V_1_12_1_fu_9340_p3 = (!dneg_12_1_reg_34699.read()[0].is_01())? sc_lv<14>(): ((dneg_12_1_reg_34699.read()[0].to_bool())? p_Val2_7_12_1_reg_34711.read(): p_Val2_14_12_1_reg_34721.read());
}

void Sobel_phase_strm::thread_y_V_1_12_2_fu_9423_p3() {
    y_V_1_12_2_fu_9423_p3 = (!dneg_12_2_fu_9349_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_2_fu_9349_p2.read()[0].to_bool())? p_Val2_7_12_2_fu_9393_p2.read(): p_Val2_14_12_2_fu_9409_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_3_fu_9501_p3() {
    y_V_1_12_3_fu_9501_p3 = (!dneg_12_3_fu_9431_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_3_fu_9431_p2.read()[0].to_bool())? p_Val2_7_12_3_fu_9471_p2.read(): p_Val2_14_12_3_fu_9487_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_4_fu_16973_p3() {
    y_V_1_12_4_fu_16973_p3 = (!dneg_12_4_fu_16931_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_4_fu_16931_p2.read()[0].to_bool())? p_Val2_7_12_4_fu_16947_p2.read(): p_Val2_14_12_4_fu_16960_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_5_fu_17051_p3() {
    y_V_1_12_5_fu_17051_p3 = (!dneg_12_5_fu_16981_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_5_fu_16981_p2.read()[0].to_bool())? p_Val2_7_12_5_fu_17021_p2.read(): p_Val2_14_12_5_fu_17037_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_6_fu_23288_p3() {
    y_V_1_12_6_fu_23288_p3 = (!dneg_12_6_fu_23254_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_6_fu_23254_p2.read()[0].to_bool())? p_Val2_7_12_6_fu_23270_p2.read(): p_Val2_14_12_6_fu_23283_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_12_7_fu_23346_p3() {
    y_V_1_12_7_fu_23346_p3 = (!dneg_12_7_fu_23296_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_12_7_fu_23296_p2.read()[0].to_bool())? p_Val2_7_12_7_fu_23334_p2.read(): p_Val2_14_12_7_fu_23340_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_1_cast_fu_9539_p1() {
    y_V_1_13_1_cast_fu_9539_p1 = esl_sext<15,14>(y_V_1_13_1_fu_9534_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_13_1_fu_9534_p3() {
    y_V_1_13_1_fu_9534_p3 = (!dneg_13_1_reg_34737.read()[0].is_01())? sc_lv<14>(): ((dneg_13_1_reg_34737.read()[0].to_bool())? p_Val2_7_13_1_reg_34749.read(): p_Val2_14_13_1_reg_34759.read());
}

void Sobel_phase_strm::thread_y_V_1_13_2_fu_9617_p3() {
    y_V_1_13_2_fu_9617_p3 = (!dneg_13_2_fu_9543_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_2_fu_9543_p2.read()[0].to_bool())? p_Val2_7_13_2_fu_9587_p2.read(): p_Val2_14_13_2_fu_9603_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_3_fu_9695_p3() {
    y_V_1_13_3_fu_9695_p3 = (!dneg_13_3_fu_9625_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_3_fu_9625_p2.read()[0].to_bool())? p_Val2_7_13_3_fu_9665_p2.read(): p_Val2_14_13_3_fu_9681_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_4_fu_17121_p3() {
    y_V_1_13_4_fu_17121_p3 = (!dneg_13_4_fu_17079_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_4_fu_17079_p2.read()[0].to_bool())? p_Val2_7_13_4_fu_17095_p2.read(): p_Val2_14_13_4_fu_17108_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_5_fu_17199_p3() {
    y_V_1_13_5_fu_17199_p3 = (!dneg_13_5_fu_17129_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_5_fu_17129_p2.read()[0].to_bool())? p_Val2_7_13_5_fu_17169_p2.read(): p_Val2_14_13_5_fu_17185_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_6_fu_23441_p3() {
    y_V_1_13_6_fu_23441_p3 = (!dneg_13_6_fu_23407_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_6_fu_23407_p2.read()[0].to_bool())? p_Val2_7_13_6_fu_23423_p2.read(): p_Val2_14_13_6_fu_23436_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_13_7_fu_23499_p3() {
    y_V_1_13_7_fu_23499_p3 = (!dneg_13_7_fu_23449_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_13_7_fu_23449_p2.read()[0].to_bool())? p_Val2_7_13_7_fu_23487_p2.read(): p_Val2_14_13_7_fu_23493_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_1_cast_fu_9733_p1() {
    y_V_1_14_1_cast_fu_9733_p1 = esl_sext<15,14>(y_V_1_14_1_fu_9728_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_14_1_fu_9728_p3() {
    y_V_1_14_1_fu_9728_p3 = (!dneg_14_1_reg_34775.read()[0].is_01())? sc_lv<14>(): ((dneg_14_1_reg_34775.read()[0].to_bool())? p_Val2_7_14_1_reg_34787.read(): p_Val2_14_14_1_reg_34797.read());
}

void Sobel_phase_strm::thread_y_V_1_14_2_fu_9811_p3() {
    y_V_1_14_2_fu_9811_p3 = (!dneg_14_2_fu_9737_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_2_fu_9737_p2.read()[0].to_bool())? p_Val2_7_14_2_fu_9781_p2.read(): p_Val2_14_14_2_fu_9797_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_3_fu_9889_p3() {
    y_V_1_14_3_fu_9889_p3 = (!dneg_14_3_fu_9819_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_3_fu_9819_p2.read()[0].to_bool())? p_Val2_7_14_3_fu_9859_p2.read(): p_Val2_14_14_3_fu_9875_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_4_fu_17269_p3() {
    y_V_1_14_4_fu_17269_p3 = (!dneg_14_4_fu_17227_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_4_fu_17227_p2.read()[0].to_bool())? p_Val2_7_14_4_fu_17243_p2.read(): p_Val2_14_14_4_fu_17256_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_5_fu_17347_p3() {
    y_V_1_14_5_fu_17347_p3 = (!dneg_14_5_fu_17277_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_5_fu_17277_p2.read()[0].to_bool())? p_Val2_7_14_5_fu_17317_p2.read(): p_Val2_14_14_5_fu_17333_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_6_fu_23594_p3() {
    y_V_1_14_6_fu_23594_p3 = (!dneg_14_6_fu_23560_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_6_fu_23560_p2.read()[0].to_bool())? p_Val2_7_14_6_fu_23576_p2.read(): p_Val2_14_14_6_fu_23589_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_14_7_fu_23652_p3() {
    y_V_1_14_7_fu_23652_p3 = (!dneg_14_7_fu_23602_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_14_7_fu_23602_p2.read()[0].to_bool())? p_Val2_7_14_7_fu_23640_p2.read(): p_Val2_14_14_7_fu_23646_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_1_cast_fu_9927_p1() {
    y_V_1_15_1_cast_fu_9927_p1 = esl_sext<15,14>(y_V_1_15_1_fu_9922_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_15_1_fu_9922_p3() {
    y_V_1_15_1_fu_9922_p3 = (!dneg_15_1_reg_34813.read()[0].is_01())? sc_lv<14>(): ((dneg_15_1_reg_34813.read()[0].to_bool())? p_Val2_7_15_1_reg_34825.read(): p_Val2_14_15_1_reg_34835.read());
}

void Sobel_phase_strm::thread_y_V_1_15_2_fu_10005_p3() {
    y_V_1_15_2_fu_10005_p3 = (!dneg_15_2_fu_9931_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_2_fu_9931_p2.read()[0].to_bool())? p_Val2_7_15_2_fu_9975_p2.read(): p_Val2_14_15_2_fu_9991_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_3_fu_10083_p3() {
    y_V_1_15_3_fu_10083_p3 = (!dneg_15_3_fu_10013_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_3_fu_10013_p2.read()[0].to_bool())? p_Val2_7_15_3_fu_10053_p2.read(): p_Val2_14_15_3_fu_10069_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_4_fu_17417_p3() {
    y_V_1_15_4_fu_17417_p3 = (!dneg_15_4_fu_17375_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_4_fu_17375_p2.read()[0].to_bool())? p_Val2_7_15_4_fu_17391_p2.read(): p_Val2_14_15_4_fu_17404_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_5_fu_17495_p3() {
    y_V_1_15_5_fu_17495_p3 = (!dneg_15_5_fu_17425_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_5_fu_17425_p2.read()[0].to_bool())? p_Val2_7_15_5_fu_17465_p2.read(): p_Val2_14_15_5_fu_17481_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_6_fu_23747_p3() {
    y_V_1_15_6_fu_23747_p3 = (!dneg_15_6_fu_23713_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_6_fu_23713_p2.read()[0].to_bool())? p_Val2_7_15_6_fu_23729_p2.read(): p_Val2_14_15_6_fu_23742_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_15_7_fu_23805_p3() {
    y_V_1_15_7_fu_23805_p3 = (!dneg_15_7_fu_23755_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_15_7_fu_23755_p2.read()[0].to_bool())? p_Val2_7_15_7_fu_23793_p2.read(): p_Val2_14_15_7_fu_23799_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_1_cast_fu_10121_p1() {
    y_V_1_16_1_cast_fu_10121_p1 = esl_sext<15,14>(y_V_1_16_1_fu_10116_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_16_1_fu_10116_p3() {
    y_V_1_16_1_fu_10116_p3 = (!dneg_16_1_reg_34851.read()[0].is_01())? sc_lv<14>(): ((dneg_16_1_reg_34851.read()[0].to_bool())? p_Val2_7_16_1_reg_34863.read(): p_Val2_14_16_1_reg_34873.read());
}

void Sobel_phase_strm::thread_y_V_1_16_2_fu_10199_p3() {
    y_V_1_16_2_fu_10199_p3 = (!dneg_16_2_fu_10125_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_2_fu_10125_p2.read()[0].to_bool())? p_Val2_7_16_2_fu_10169_p2.read(): p_Val2_14_16_2_fu_10185_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_3_fu_10277_p3() {
    y_V_1_16_3_fu_10277_p3 = (!dneg_16_3_fu_10207_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_3_fu_10207_p2.read()[0].to_bool())? p_Val2_7_16_3_fu_10247_p2.read(): p_Val2_14_16_3_fu_10263_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_4_fu_17565_p3() {
    y_V_1_16_4_fu_17565_p3 = (!dneg_16_4_fu_17523_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_4_fu_17523_p2.read()[0].to_bool())? p_Val2_7_16_4_fu_17539_p2.read(): p_Val2_14_16_4_fu_17552_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_5_fu_17643_p3() {
    y_V_1_16_5_fu_17643_p3 = (!dneg_16_5_fu_17573_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_5_fu_17573_p2.read()[0].to_bool())? p_Val2_7_16_5_fu_17613_p2.read(): p_Val2_14_16_5_fu_17629_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_6_fu_23900_p3() {
    y_V_1_16_6_fu_23900_p3 = (!dneg_16_6_fu_23866_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_6_fu_23866_p2.read()[0].to_bool())? p_Val2_7_16_6_fu_23882_p2.read(): p_Val2_14_16_6_fu_23895_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_16_7_fu_23958_p3() {
    y_V_1_16_7_fu_23958_p3 = (!dneg_16_7_fu_23908_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_16_7_fu_23908_p2.read()[0].to_bool())? p_Val2_7_16_7_fu_23946_p2.read(): p_Val2_14_16_7_fu_23952_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_1_cast_fu_10315_p1() {
    y_V_1_17_1_cast_fu_10315_p1 = esl_sext<15,14>(y_V_1_17_1_fu_10310_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_17_1_fu_10310_p3() {
    y_V_1_17_1_fu_10310_p3 = (!dneg_17_1_reg_34889.read()[0].is_01())? sc_lv<14>(): ((dneg_17_1_reg_34889.read()[0].to_bool())? p_Val2_7_17_1_reg_34901.read(): p_Val2_14_17_1_reg_34911.read());
}

void Sobel_phase_strm::thread_y_V_1_17_2_fu_10393_p3() {
    y_V_1_17_2_fu_10393_p3 = (!dneg_17_2_fu_10319_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_2_fu_10319_p2.read()[0].to_bool())? p_Val2_7_17_2_fu_10363_p2.read(): p_Val2_14_17_2_fu_10379_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_3_fu_10471_p3() {
    y_V_1_17_3_fu_10471_p3 = (!dneg_17_3_fu_10401_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_3_fu_10401_p2.read()[0].to_bool())? p_Val2_7_17_3_fu_10441_p2.read(): p_Val2_14_17_3_fu_10457_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_4_fu_17713_p3() {
    y_V_1_17_4_fu_17713_p3 = (!dneg_17_4_fu_17671_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_4_fu_17671_p2.read()[0].to_bool())? p_Val2_7_17_4_fu_17687_p2.read(): p_Val2_14_17_4_fu_17700_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_5_fu_17791_p3() {
    y_V_1_17_5_fu_17791_p3 = (!dneg_17_5_fu_17721_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_5_fu_17721_p2.read()[0].to_bool())? p_Val2_7_17_5_fu_17761_p2.read(): p_Val2_14_17_5_fu_17777_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_6_fu_24053_p3() {
    y_V_1_17_6_fu_24053_p3 = (!dneg_17_6_fu_24019_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_6_fu_24019_p2.read()[0].to_bool())? p_Val2_7_17_6_fu_24035_p2.read(): p_Val2_14_17_6_fu_24048_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_17_7_fu_24111_p3() {
    y_V_1_17_7_fu_24111_p3 = (!dneg_17_7_fu_24061_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_17_7_fu_24061_p2.read()[0].to_bool())? p_Val2_7_17_7_fu_24099_p2.read(): p_Val2_14_17_7_fu_24105_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_1_cast_fu_10509_p1() {
    y_V_1_18_1_cast_fu_10509_p1 = esl_sext<15,14>(y_V_1_18_1_fu_10504_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_18_1_fu_10504_p3() {
    y_V_1_18_1_fu_10504_p3 = (!dneg_18_1_reg_34927.read()[0].is_01())? sc_lv<14>(): ((dneg_18_1_reg_34927.read()[0].to_bool())? p_Val2_7_18_1_reg_34939.read(): p_Val2_14_18_1_reg_34949.read());
}

void Sobel_phase_strm::thread_y_V_1_18_2_fu_10587_p3() {
    y_V_1_18_2_fu_10587_p3 = (!dneg_18_2_fu_10513_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_2_fu_10513_p2.read()[0].to_bool())? p_Val2_7_18_2_fu_10557_p2.read(): p_Val2_14_18_2_fu_10573_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_3_fu_10665_p3() {
    y_V_1_18_3_fu_10665_p3 = (!dneg_18_3_fu_10595_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_3_fu_10595_p2.read()[0].to_bool())? p_Val2_7_18_3_fu_10635_p2.read(): p_Val2_14_18_3_fu_10651_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_4_fu_17861_p3() {
    y_V_1_18_4_fu_17861_p3 = (!dneg_18_4_fu_17819_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_4_fu_17819_p2.read()[0].to_bool())? p_Val2_7_18_4_fu_17835_p2.read(): p_Val2_14_18_4_fu_17848_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_5_fu_17939_p3() {
    y_V_1_18_5_fu_17939_p3 = (!dneg_18_5_fu_17869_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_5_fu_17869_p2.read()[0].to_bool())? p_Val2_7_18_5_fu_17909_p2.read(): p_Val2_14_18_5_fu_17925_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_6_fu_24206_p3() {
    y_V_1_18_6_fu_24206_p3 = (!dneg_18_6_fu_24172_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_6_fu_24172_p2.read()[0].to_bool())? p_Val2_7_18_6_fu_24188_p2.read(): p_Val2_14_18_6_fu_24201_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_18_7_fu_24264_p3() {
    y_V_1_18_7_fu_24264_p3 = (!dneg_18_7_fu_24214_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_18_7_fu_24214_p2.read()[0].to_bool())? p_Val2_7_18_7_fu_24252_p2.read(): p_Val2_14_18_7_fu_24258_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_1_cast_fu_10703_p1() {
    y_V_1_19_1_cast_fu_10703_p1 = esl_sext<15,14>(y_V_1_19_1_fu_10698_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_19_1_fu_10698_p3() {
    y_V_1_19_1_fu_10698_p3 = (!dneg_19_1_reg_34965.read()[0].is_01())? sc_lv<14>(): ((dneg_19_1_reg_34965.read()[0].to_bool())? p_Val2_7_19_1_reg_34977.read(): p_Val2_14_19_1_reg_34987.read());
}

void Sobel_phase_strm::thread_y_V_1_19_2_fu_10781_p3() {
    y_V_1_19_2_fu_10781_p3 = (!dneg_19_2_fu_10707_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_2_fu_10707_p2.read()[0].to_bool())? p_Val2_7_19_2_fu_10751_p2.read(): p_Val2_14_19_2_fu_10767_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_3_fu_10859_p3() {
    y_V_1_19_3_fu_10859_p3 = (!dneg_19_3_fu_10789_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_3_fu_10789_p2.read()[0].to_bool())? p_Val2_7_19_3_fu_10829_p2.read(): p_Val2_14_19_3_fu_10845_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_4_fu_18009_p3() {
    y_V_1_19_4_fu_18009_p3 = (!dneg_19_4_fu_17967_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_4_fu_17967_p2.read()[0].to_bool())? p_Val2_7_19_4_fu_17983_p2.read(): p_Val2_14_19_4_fu_17996_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_5_fu_18087_p3() {
    y_V_1_19_5_fu_18087_p3 = (!dneg_19_5_fu_18017_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_5_fu_18017_p2.read()[0].to_bool())? p_Val2_7_19_5_fu_18057_p2.read(): p_Val2_14_19_5_fu_18073_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_6_fu_24359_p3() {
    y_V_1_19_6_fu_24359_p3 = (!dneg_19_6_fu_24325_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_6_fu_24325_p2.read()[0].to_bool())? p_Val2_7_19_6_fu_24341_p2.read(): p_Val2_14_19_6_fu_24354_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_19_7_fu_24417_p3() {
    y_V_1_19_7_fu_24417_p3 = (!dneg_19_7_fu_24367_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_19_7_fu_24367_p2.read()[0].to_bool())? p_Val2_7_19_7_fu_24405_p2.read(): p_Val2_14_19_7_fu_24411_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_1_cast_fu_7211_p1() {
    y_V_1_1_1_cast_fu_7211_p1 = esl_sext<15,14>(y_V_1_1_1_fu_7206_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_1_1_fu_7206_p3() {
    y_V_1_1_1_fu_7206_p3 = (!dneg_1_1_reg_34281.read()[0].is_01())? sc_lv<14>(): ((dneg_1_1_reg_34281.read()[0].to_bool())? p_Val2_7_1_1_reg_34293.read(): p_Val2_14_1_1_reg_34303.read());
}

void Sobel_phase_strm::thread_y_V_1_1_2_fu_7289_p3() {
    y_V_1_1_2_fu_7289_p3 = (!dneg_1_2_fu_7215_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_2_fu_7215_p2.read()[0].to_bool())? p_Val2_7_1_2_fu_7259_p2.read(): p_Val2_14_1_2_fu_7275_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_3_fu_7367_p3() {
    y_V_1_1_3_fu_7367_p3 = (!dneg_1_3_fu_7297_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_3_fu_7297_p2.read()[0].to_bool())? p_Val2_7_1_3_fu_7337_p2.read(): p_Val2_14_1_3_fu_7353_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_4_fu_15345_p3() {
    y_V_1_1_4_fu_15345_p3 = (!dneg_1_4_fu_15303_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_4_fu_15303_p2.read()[0].to_bool())? p_Val2_7_1_4_fu_15319_p2.read(): p_Val2_14_1_4_fu_15332_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_5_fu_15423_p3() {
    y_V_1_1_5_fu_15423_p3 = (!dneg_1_5_fu_15353_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_5_fu_15353_p2.read()[0].to_bool())? p_Val2_7_1_5_fu_15393_p2.read(): p_Val2_14_1_5_fu_15409_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_6_fu_21605_p3() {
    y_V_1_1_6_fu_21605_p3 = (!dneg_1_6_fu_21571_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_6_fu_21571_p2.read()[0].to_bool())? p_Val2_7_1_6_fu_21587_p2.read(): p_Val2_14_1_6_fu_21600_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_1_7_fu_21663_p3() {
    y_V_1_1_7_fu_21663_p3 = (!dneg_1_7_fu_21613_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_1_7_fu_21613_p2.read()[0].to_bool())? p_Val2_7_1_7_fu_21651_p2.read(): p_Val2_14_1_7_fu_21657_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_1_cast_fu_10897_p1() {
    y_V_1_20_1_cast_fu_10897_p1 = esl_sext<15,14>(y_V_1_20_1_fu_10892_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_20_1_fu_10892_p3() {
    y_V_1_20_1_fu_10892_p3 = (!dneg_20_1_reg_35003.read()[0].is_01())? sc_lv<14>(): ((dneg_20_1_reg_35003.read()[0].to_bool())? p_Val2_7_20_1_reg_35015.read(): p_Val2_14_20_1_reg_35025.read());
}

void Sobel_phase_strm::thread_y_V_1_20_2_fu_10975_p3() {
    y_V_1_20_2_fu_10975_p3 = (!dneg_20_2_fu_10901_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_2_fu_10901_p2.read()[0].to_bool())? p_Val2_7_20_2_fu_10945_p2.read(): p_Val2_14_20_2_fu_10961_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_3_fu_11053_p3() {
    y_V_1_20_3_fu_11053_p3 = (!dneg_20_3_fu_10983_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_3_fu_10983_p2.read()[0].to_bool())? p_Val2_7_20_3_fu_11023_p2.read(): p_Val2_14_20_3_fu_11039_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_4_fu_18157_p3() {
    y_V_1_20_4_fu_18157_p3 = (!dneg_20_4_fu_18115_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_4_fu_18115_p2.read()[0].to_bool())? p_Val2_7_20_4_fu_18131_p2.read(): p_Val2_14_20_4_fu_18144_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_5_fu_18235_p3() {
    y_V_1_20_5_fu_18235_p3 = (!dneg_20_5_fu_18165_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_5_fu_18165_p2.read()[0].to_bool())? p_Val2_7_20_5_fu_18205_p2.read(): p_Val2_14_20_5_fu_18221_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_6_fu_24512_p3() {
    y_V_1_20_6_fu_24512_p3 = (!dneg_20_6_fu_24478_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_6_fu_24478_p2.read()[0].to_bool())? p_Val2_7_20_6_fu_24494_p2.read(): p_Val2_14_20_6_fu_24507_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_20_7_fu_24570_p3() {
    y_V_1_20_7_fu_24570_p3 = (!dneg_20_7_fu_24520_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_20_7_fu_24520_p2.read()[0].to_bool())? p_Val2_7_20_7_fu_24558_p2.read(): p_Val2_14_20_7_fu_24564_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_1_cast_fu_11091_p1() {
    y_V_1_21_1_cast_fu_11091_p1 = esl_sext<15,14>(y_V_1_21_1_fu_11086_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_21_1_fu_11086_p3() {
    y_V_1_21_1_fu_11086_p3 = (!dneg_21_1_reg_35041.read()[0].is_01())? sc_lv<14>(): ((dneg_21_1_reg_35041.read()[0].to_bool())? p_Val2_7_21_1_reg_35053.read(): p_Val2_14_21_1_reg_35063.read());
}

void Sobel_phase_strm::thread_y_V_1_21_2_fu_11169_p3() {
    y_V_1_21_2_fu_11169_p3 = (!dneg_21_2_fu_11095_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_2_fu_11095_p2.read()[0].to_bool())? p_Val2_7_21_2_fu_11139_p2.read(): p_Val2_14_21_2_fu_11155_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_3_fu_11247_p3() {
    y_V_1_21_3_fu_11247_p3 = (!dneg_21_3_fu_11177_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_3_fu_11177_p2.read()[0].to_bool())? p_Val2_7_21_3_fu_11217_p2.read(): p_Val2_14_21_3_fu_11233_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_4_fu_18305_p3() {
    y_V_1_21_4_fu_18305_p3 = (!dneg_21_4_fu_18263_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_4_fu_18263_p2.read()[0].to_bool())? p_Val2_7_21_4_fu_18279_p2.read(): p_Val2_14_21_4_fu_18292_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_5_fu_18383_p3() {
    y_V_1_21_5_fu_18383_p3 = (!dneg_21_5_fu_18313_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_5_fu_18313_p2.read()[0].to_bool())? p_Val2_7_21_5_fu_18353_p2.read(): p_Val2_14_21_5_fu_18369_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_6_fu_24665_p3() {
    y_V_1_21_6_fu_24665_p3 = (!dneg_21_6_fu_24631_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_6_fu_24631_p2.read()[0].to_bool())? p_Val2_7_21_6_fu_24647_p2.read(): p_Val2_14_21_6_fu_24660_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_21_7_fu_24723_p3() {
    y_V_1_21_7_fu_24723_p3 = (!dneg_21_7_fu_24673_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_21_7_fu_24673_p2.read()[0].to_bool())? p_Val2_7_21_7_fu_24711_p2.read(): p_Val2_14_21_7_fu_24717_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_1_cast_fu_11285_p1() {
    y_V_1_22_1_cast_fu_11285_p1 = esl_sext<15,14>(y_V_1_22_1_fu_11280_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_22_1_fu_11280_p3() {
    y_V_1_22_1_fu_11280_p3 = (!dneg_22_1_reg_35079.read()[0].is_01())? sc_lv<14>(): ((dneg_22_1_reg_35079.read()[0].to_bool())? p_Val2_7_22_1_reg_35091.read(): p_Val2_14_22_1_reg_35101.read());
}

void Sobel_phase_strm::thread_y_V_1_22_2_fu_11363_p3() {
    y_V_1_22_2_fu_11363_p3 = (!dneg_22_2_fu_11289_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_2_fu_11289_p2.read()[0].to_bool())? p_Val2_7_22_2_fu_11333_p2.read(): p_Val2_14_22_2_fu_11349_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_3_fu_11441_p3() {
    y_V_1_22_3_fu_11441_p3 = (!dneg_22_3_fu_11371_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_3_fu_11371_p2.read()[0].to_bool())? p_Val2_7_22_3_fu_11411_p2.read(): p_Val2_14_22_3_fu_11427_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_4_fu_18453_p3() {
    y_V_1_22_4_fu_18453_p3 = (!dneg_22_4_fu_18411_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_4_fu_18411_p2.read()[0].to_bool())? p_Val2_7_22_4_fu_18427_p2.read(): p_Val2_14_22_4_fu_18440_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_5_fu_18531_p3() {
    y_V_1_22_5_fu_18531_p3 = (!dneg_22_5_fu_18461_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_5_fu_18461_p2.read()[0].to_bool())? p_Val2_7_22_5_fu_18501_p2.read(): p_Val2_14_22_5_fu_18517_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_6_fu_24818_p3() {
    y_V_1_22_6_fu_24818_p3 = (!dneg_22_6_fu_24784_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_6_fu_24784_p2.read()[0].to_bool())? p_Val2_7_22_6_fu_24800_p2.read(): p_Val2_14_22_6_fu_24813_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_22_7_fu_24876_p3() {
    y_V_1_22_7_fu_24876_p3 = (!dneg_22_7_fu_24826_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_22_7_fu_24826_p2.read()[0].to_bool())? p_Val2_7_22_7_fu_24864_p2.read(): p_Val2_14_22_7_fu_24870_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_1_cast_fu_11479_p1() {
    y_V_1_23_1_cast_fu_11479_p1 = esl_sext<15,14>(y_V_1_23_1_fu_11474_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_23_1_fu_11474_p3() {
    y_V_1_23_1_fu_11474_p3 = (!dneg_23_1_reg_35117.read()[0].is_01())? sc_lv<14>(): ((dneg_23_1_reg_35117.read()[0].to_bool())? p_Val2_7_23_1_reg_35129.read(): p_Val2_14_23_1_reg_35139.read());
}

void Sobel_phase_strm::thread_y_V_1_23_2_fu_11557_p3() {
    y_V_1_23_2_fu_11557_p3 = (!dneg_23_2_fu_11483_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_2_fu_11483_p2.read()[0].to_bool())? p_Val2_7_23_2_fu_11527_p2.read(): p_Val2_14_23_2_fu_11543_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_3_fu_11635_p3() {
    y_V_1_23_3_fu_11635_p3 = (!dneg_23_3_fu_11565_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_3_fu_11565_p2.read()[0].to_bool())? p_Val2_7_23_3_fu_11605_p2.read(): p_Val2_14_23_3_fu_11621_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_4_fu_18601_p3() {
    y_V_1_23_4_fu_18601_p3 = (!dneg_23_4_fu_18559_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_4_fu_18559_p2.read()[0].to_bool())? p_Val2_7_23_4_fu_18575_p2.read(): p_Val2_14_23_4_fu_18588_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_5_fu_18679_p3() {
    y_V_1_23_5_fu_18679_p3 = (!dneg_23_5_fu_18609_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_5_fu_18609_p2.read()[0].to_bool())? p_Val2_7_23_5_fu_18649_p2.read(): p_Val2_14_23_5_fu_18665_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_6_fu_24971_p3() {
    y_V_1_23_6_fu_24971_p3 = (!dneg_23_6_fu_24937_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_6_fu_24937_p2.read()[0].to_bool())? p_Val2_7_23_6_fu_24953_p2.read(): p_Val2_14_23_6_fu_24966_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_23_7_fu_25029_p3() {
    y_V_1_23_7_fu_25029_p3 = (!dneg_23_7_fu_24979_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_23_7_fu_24979_p2.read()[0].to_bool())? p_Val2_7_23_7_fu_25017_p2.read(): p_Val2_14_23_7_fu_25023_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_1_cast_fu_11673_p1() {
    y_V_1_24_1_cast_fu_11673_p1 = esl_sext<15,14>(y_V_1_24_1_fu_11668_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_24_1_fu_11668_p3() {
    y_V_1_24_1_fu_11668_p3 = (!dneg_24_1_reg_35155.read()[0].is_01())? sc_lv<14>(): ((dneg_24_1_reg_35155.read()[0].to_bool())? p_Val2_7_24_1_reg_35167.read(): p_Val2_14_24_1_reg_35177.read());
}

void Sobel_phase_strm::thread_y_V_1_24_2_fu_11751_p3() {
    y_V_1_24_2_fu_11751_p3 = (!dneg_24_2_fu_11677_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_2_fu_11677_p2.read()[0].to_bool())? p_Val2_7_24_2_fu_11721_p2.read(): p_Val2_14_24_2_fu_11737_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_3_fu_11829_p3() {
    y_V_1_24_3_fu_11829_p3 = (!dneg_24_3_fu_11759_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_3_fu_11759_p2.read()[0].to_bool())? p_Val2_7_24_3_fu_11799_p2.read(): p_Val2_14_24_3_fu_11815_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_4_fu_18749_p3() {
    y_V_1_24_4_fu_18749_p3 = (!dneg_24_4_fu_18707_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_4_fu_18707_p2.read()[0].to_bool())? p_Val2_7_24_4_fu_18723_p2.read(): p_Val2_14_24_4_fu_18736_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_5_fu_18827_p3() {
    y_V_1_24_5_fu_18827_p3 = (!dneg_24_5_fu_18757_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_5_fu_18757_p2.read()[0].to_bool())? p_Val2_7_24_5_fu_18797_p2.read(): p_Val2_14_24_5_fu_18813_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_6_fu_25124_p3() {
    y_V_1_24_6_fu_25124_p3 = (!dneg_24_6_fu_25090_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_6_fu_25090_p2.read()[0].to_bool())? p_Val2_7_24_6_fu_25106_p2.read(): p_Val2_14_24_6_fu_25119_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_24_7_fu_25182_p3() {
    y_V_1_24_7_fu_25182_p3 = (!dneg_24_7_fu_25132_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_24_7_fu_25132_p2.read()[0].to_bool())? p_Val2_7_24_7_fu_25170_p2.read(): p_Val2_14_24_7_fu_25176_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_1_cast_fu_11867_p1() {
    y_V_1_25_1_cast_fu_11867_p1 = esl_sext<15,14>(y_V_1_25_1_fu_11862_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_25_1_fu_11862_p3() {
    y_V_1_25_1_fu_11862_p3 = (!dneg_25_1_reg_35193.read()[0].is_01())? sc_lv<14>(): ((dneg_25_1_reg_35193.read()[0].to_bool())? p_Val2_7_25_1_reg_35205.read(): p_Val2_14_25_1_reg_35215.read());
}

void Sobel_phase_strm::thread_y_V_1_25_2_fu_11945_p3() {
    y_V_1_25_2_fu_11945_p3 = (!dneg_25_2_fu_11871_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_2_fu_11871_p2.read()[0].to_bool())? p_Val2_7_25_2_fu_11915_p2.read(): p_Val2_14_25_2_fu_11931_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_3_fu_12023_p3() {
    y_V_1_25_3_fu_12023_p3 = (!dneg_25_3_fu_11953_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_3_fu_11953_p2.read()[0].to_bool())? p_Val2_7_25_3_fu_11993_p2.read(): p_Val2_14_25_3_fu_12009_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_4_fu_18897_p3() {
    y_V_1_25_4_fu_18897_p3 = (!dneg_25_4_fu_18855_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_4_fu_18855_p2.read()[0].to_bool())? p_Val2_7_25_4_fu_18871_p2.read(): p_Val2_14_25_4_fu_18884_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_5_fu_18975_p3() {
    y_V_1_25_5_fu_18975_p3 = (!dneg_25_5_fu_18905_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_5_fu_18905_p2.read()[0].to_bool())? p_Val2_7_25_5_fu_18945_p2.read(): p_Val2_14_25_5_fu_18961_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_6_fu_25277_p3() {
    y_V_1_25_6_fu_25277_p3 = (!dneg_25_6_fu_25243_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_6_fu_25243_p2.read()[0].to_bool())? p_Val2_7_25_6_fu_25259_p2.read(): p_Val2_14_25_6_fu_25272_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_25_7_fu_25335_p3() {
    y_V_1_25_7_fu_25335_p3 = (!dneg_25_7_fu_25285_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_25_7_fu_25285_p2.read()[0].to_bool())? p_Val2_7_25_7_fu_25323_p2.read(): p_Val2_14_25_7_fu_25329_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_1_cast_fu_12061_p1() {
    y_V_1_26_1_cast_fu_12061_p1 = esl_sext<15,14>(y_V_1_26_1_fu_12056_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_26_1_fu_12056_p3() {
    y_V_1_26_1_fu_12056_p3 = (!dneg_26_1_reg_35231.read()[0].is_01())? sc_lv<14>(): ((dneg_26_1_reg_35231.read()[0].to_bool())? p_Val2_7_26_1_reg_35243.read(): p_Val2_14_26_1_reg_35253.read());
}

void Sobel_phase_strm::thread_y_V_1_26_2_fu_12139_p3() {
    y_V_1_26_2_fu_12139_p3 = (!dneg_26_2_fu_12065_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_2_fu_12065_p2.read()[0].to_bool())? p_Val2_7_26_2_fu_12109_p2.read(): p_Val2_14_26_2_fu_12125_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_3_fu_12217_p3() {
    y_V_1_26_3_fu_12217_p3 = (!dneg_26_3_fu_12147_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_3_fu_12147_p2.read()[0].to_bool())? p_Val2_7_26_3_fu_12187_p2.read(): p_Val2_14_26_3_fu_12203_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_4_fu_19045_p3() {
    y_V_1_26_4_fu_19045_p3 = (!dneg_26_4_fu_19003_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_4_fu_19003_p2.read()[0].to_bool())? p_Val2_7_26_4_fu_19019_p2.read(): p_Val2_14_26_4_fu_19032_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_5_fu_19123_p3() {
    y_V_1_26_5_fu_19123_p3 = (!dneg_26_5_fu_19053_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_5_fu_19053_p2.read()[0].to_bool())? p_Val2_7_26_5_fu_19093_p2.read(): p_Val2_14_26_5_fu_19109_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_6_fu_25430_p3() {
    y_V_1_26_6_fu_25430_p3 = (!dneg_26_6_fu_25396_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_6_fu_25396_p2.read()[0].to_bool())? p_Val2_7_26_6_fu_25412_p2.read(): p_Val2_14_26_6_fu_25425_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_26_7_fu_25488_p3() {
    y_V_1_26_7_fu_25488_p3 = (!dneg_26_7_fu_25438_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_26_7_fu_25438_p2.read()[0].to_bool())? p_Val2_7_26_7_fu_25476_p2.read(): p_Val2_14_26_7_fu_25482_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_1_cast_fu_12255_p1() {
    y_V_1_27_1_cast_fu_12255_p1 = esl_sext<15,14>(y_V_1_27_1_fu_12250_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_27_1_fu_12250_p3() {
    y_V_1_27_1_fu_12250_p3 = (!dneg_27_1_reg_35269.read()[0].is_01())? sc_lv<14>(): ((dneg_27_1_reg_35269.read()[0].to_bool())? p_Val2_7_27_1_reg_35281.read(): p_Val2_14_27_1_reg_35291.read());
}

void Sobel_phase_strm::thread_y_V_1_27_2_fu_12333_p3() {
    y_V_1_27_2_fu_12333_p3 = (!dneg_27_2_fu_12259_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_2_fu_12259_p2.read()[0].to_bool())? p_Val2_7_27_2_fu_12303_p2.read(): p_Val2_14_27_2_fu_12319_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_3_fu_12411_p3() {
    y_V_1_27_3_fu_12411_p3 = (!dneg_27_3_fu_12341_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_3_fu_12341_p2.read()[0].to_bool())? p_Val2_7_27_3_fu_12381_p2.read(): p_Val2_14_27_3_fu_12397_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_4_fu_19193_p3() {
    y_V_1_27_4_fu_19193_p3 = (!dneg_27_4_fu_19151_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_4_fu_19151_p2.read()[0].to_bool())? p_Val2_7_27_4_fu_19167_p2.read(): p_Val2_14_27_4_fu_19180_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_5_fu_19271_p3() {
    y_V_1_27_5_fu_19271_p3 = (!dneg_27_5_fu_19201_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_5_fu_19201_p2.read()[0].to_bool())? p_Val2_7_27_5_fu_19241_p2.read(): p_Val2_14_27_5_fu_19257_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_6_fu_25583_p3() {
    y_V_1_27_6_fu_25583_p3 = (!dneg_27_6_fu_25549_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_6_fu_25549_p2.read()[0].to_bool())? p_Val2_7_27_6_fu_25565_p2.read(): p_Val2_14_27_6_fu_25578_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_27_7_fu_25641_p3() {
    y_V_1_27_7_fu_25641_p3 = (!dneg_27_7_fu_25591_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_27_7_fu_25591_p2.read()[0].to_bool())? p_Val2_7_27_7_fu_25629_p2.read(): p_Val2_14_27_7_fu_25635_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_1_cast_fu_12449_p1() {
    y_V_1_28_1_cast_fu_12449_p1 = esl_sext<15,14>(y_V_1_28_1_fu_12444_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_28_1_fu_12444_p3() {
    y_V_1_28_1_fu_12444_p3 = (!dneg_28_1_reg_35307.read()[0].is_01())? sc_lv<14>(): ((dneg_28_1_reg_35307.read()[0].to_bool())? p_Val2_7_28_1_reg_35319.read(): p_Val2_14_28_1_reg_35329.read());
}

void Sobel_phase_strm::thread_y_V_1_28_2_fu_12527_p3() {
    y_V_1_28_2_fu_12527_p3 = (!dneg_28_2_fu_12453_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_2_fu_12453_p2.read()[0].to_bool())? p_Val2_7_28_2_fu_12497_p2.read(): p_Val2_14_28_2_fu_12513_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_3_fu_12605_p3() {
    y_V_1_28_3_fu_12605_p3 = (!dneg_28_3_fu_12535_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_3_fu_12535_p2.read()[0].to_bool())? p_Val2_7_28_3_fu_12575_p2.read(): p_Val2_14_28_3_fu_12591_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_4_fu_19341_p3() {
    y_V_1_28_4_fu_19341_p3 = (!dneg_28_4_fu_19299_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_4_fu_19299_p2.read()[0].to_bool())? p_Val2_7_28_4_fu_19315_p2.read(): p_Val2_14_28_4_fu_19328_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_5_fu_19419_p3() {
    y_V_1_28_5_fu_19419_p3 = (!dneg_28_5_fu_19349_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_5_fu_19349_p2.read()[0].to_bool())? p_Val2_7_28_5_fu_19389_p2.read(): p_Val2_14_28_5_fu_19405_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_6_fu_25736_p3() {
    y_V_1_28_6_fu_25736_p3 = (!dneg_28_6_fu_25702_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_6_fu_25702_p2.read()[0].to_bool())? p_Val2_7_28_6_fu_25718_p2.read(): p_Val2_14_28_6_fu_25731_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_28_7_fu_25794_p3() {
    y_V_1_28_7_fu_25794_p3 = (!dneg_28_7_fu_25744_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_28_7_fu_25744_p2.read()[0].to_bool())? p_Val2_7_28_7_fu_25782_p2.read(): p_Val2_14_28_7_fu_25788_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_1_cast_fu_12643_p1() {
    y_V_1_29_1_cast_fu_12643_p1 = esl_sext<15,14>(y_V_1_29_1_fu_12638_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_29_1_fu_12638_p3() {
    y_V_1_29_1_fu_12638_p3 = (!dneg_29_1_reg_35345.read()[0].is_01())? sc_lv<14>(): ((dneg_29_1_reg_35345.read()[0].to_bool())? p_Val2_7_29_1_reg_35357.read(): p_Val2_14_29_1_reg_35367.read());
}

void Sobel_phase_strm::thread_y_V_1_29_2_fu_12721_p3() {
    y_V_1_29_2_fu_12721_p3 = (!dneg_29_2_fu_12647_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_2_fu_12647_p2.read()[0].to_bool())? p_Val2_7_29_2_fu_12691_p2.read(): p_Val2_14_29_2_fu_12707_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_3_fu_12799_p3() {
    y_V_1_29_3_fu_12799_p3 = (!dneg_29_3_fu_12729_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_3_fu_12729_p2.read()[0].to_bool())? p_Val2_7_29_3_fu_12769_p2.read(): p_Val2_14_29_3_fu_12785_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_4_fu_19489_p3() {
    y_V_1_29_4_fu_19489_p3 = (!dneg_29_4_fu_19447_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_4_fu_19447_p2.read()[0].to_bool())? p_Val2_7_29_4_fu_19463_p2.read(): p_Val2_14_29_4_fu_19476_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_5_fu_19567_p3() {
    y_V_1_29_5_fu_19567_p3 = (!dneg_29_5_fu_19497_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_5_fu_19497_p2.read()[0].to_bool())? p_Val2_7_29_5_fu_19537_p2.read(): p_Val2_14_29_5_fu_19553_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_6_fu_25889_p3() {
    y_V_1_29_6_fu_25889_p3 = (!dneg_29_6_fu_25855_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_6_fu_25855_p2.read()[0].to_bool())? p_Val2_7_29_6_fu_25871_p2.read(): p_Val2_14_29_6_fu_25884_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_29_7_fu_25947_p3() {
    y_V_1_29_7_fu_25947_p3 = (!dneg_29_7_fu_25897_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_29_7_fu_25897_p2.read()[0].to_bool())? p_Val2_7_29_7_fu_25935_p2.read(): p_Val2_14_29_7_fu_25941_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_1_cast_fu_7405_p1() {
    y_V_1_2_1_cast_fu_7405_p1 = esl_sext<15,14>(y_V_1_2_1_fu_7400_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_2_1_fu_7400_p3() {
    y_V_1_2_1_fu_7400_p3 = (!dneg_2_1_reg_34319.read()[0].is_01())? sc_lv<14>(): ((dneg_2_1_reg_34319.read()[0].to_bool())? p_Val2_7_2_1_reg_34331.read(): p_Val2_14_2_1_reg_34341.read());
}

void Sobel_phase_strm::thread_y_V_1_2_2_fu_7483_p3() {
    y_V_1_2_2_fu_7483_p3 = (!dneg_2_2_fu_7409_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_2_fu_7409_p2.read()[0].to_bool())? p_Val2_7_2_2_fu_7453_p2.read(): p_Val2_14_2_2_fu_7469_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_3_fu_7561_p3() {
    y_V_1_2_3_fu_7561_p3 = (!dneg_2_3_fu_7491_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_3_fu_7491_p2.read()[0].to_bool())? p_Val2_7_2_3_fu_7531_p2.read(): p_Val2_14_2_3_fu_7547_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_4_fu_15493_p3() {
    y_V_1_2_4_fu_15493_p3 = (!dneg_2_4_fu_15451_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_4_fu_15451_p2.read()[0].to_bool())? p_Val2_7_2_4_fu_15467_p2.read(): p_Val2_14_2_4_fu_15480_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_5_fu_15571_p3() {
    y_V_1_2_5_fu_15571_p3 = (!dneg_2_5_fu_15501_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_5_fu_15501_p2.read()[0].to_bool())? p_Val2_7_2_5_fu_15541_p2.read(): p_Val2_14_2_5_fu_15557_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_6_fu_21758_p3() {
    y_V_1_2_6_fu_21758_p3 = (!dneg_2_6_fu_21724_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_6_fu_21724_p2.read()[0].to_bool())? p_Val2_7_2_6_fu_21740_p2.read(): p_Val2_14_2_6_fu_21753_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_2_7_fu_21816_p3() {
    y_V_1_2_7_fu_21816_p3 = (!dneg_2_7_fu_21766_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_2_7_fu_21766_p2.read()[0].to_bool())? p_Val2_7_2_7_fu_21804_p2.read(): p_Val2_14_2_7_fu_21810_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_1_cast_fu_12837_p1() {
    y_V_1_30_1_cast_fu_12837_p1 = esl_sext<15,14>(y_V_1_30_1_fu_12832_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_30_1_fu_12832_p3() {
    y_V_1_30_1_fu_12832_p3 = (!dneg_30_1_reg_35383.read()[0].is_01())? sc_lv<14>(): ((dneg_30_1_reg_35383.read()[0].to_bool())? p_Val2_7_30_1_reg_35395.read(): p_Val2_14_30_1_reg_35405.read());
}

void Sobel_phase_strm::thread_y_V_1_30_2_fu_12915_p3() {
    y_V_1_30_2_fu_12915_p3 = (!dneg_30_2_fu_12841_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_2_fu_12841_p2.read()[0].to_bool())? p_Val2_7_30_2_fu_12885_p2.read(): p_Val2_14_30_2_fu_12901_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_3_fu_12993_p3() {
    y_V_1_30_3_fu_12993_p3 = (!dneg_30_3_fu_12923_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_3_fu_12923_p2.read()[0].to_bool())? p_Val2_7_30_3_fu_12963_p2.read(): p_Val2_14_30_3_fu_12979_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_4_fu_19637_p3() {
    y_V_1_30_4_fu_19637_p3 = (!dneg_30_4_fu_19595_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_4_fu_19595_p2.read()[0].to_bool())? p_Val2_7_30_4_fu_19611_p2.read(): p_Val2_14_30_4_fu_19624_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_5_fu_19715_p3() {
    y_V_1_30_5_fu_19715_p3 = (!dneg_30_5_fu_19645_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_5_fu_19645_p2.read()[0].to_bool())? p_Val2_7_30_5_fu_19685_p2.read(): p_Val2_14_30_5_fu_19701_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_6_fu_26042_p3() {
    y_V_1_30_6_fu_26042_p3 = (!dneg_30_6_fu_26008_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_6_fu_26008_p2.read()[0].to_bool())? p_Val2_7_30_6_fu_26024_p2.read(): p_Val2_14_30_6_fu_26037_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_30_7_fu_26100_p3() {
    y_V_1_30_7_fu_26100_p3 = (!dneg_30_7_fu_26050_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_30_7_fu_26050_p2.read()[0].to_bool())? p_Val2_7_30_7_fu_26088_p2.read(): p_Val2_14_30_7_fu_26094_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_1_cast_fu_13031_p1() {
    y_V_1_31_1_cast_fu_13031_p1 = esl_sext<15,14>(y_V_1_31_1_fu_13026_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_31_1_fu_13026_p3() {
    y_V_1_31_1_fu_13026_p3 = (!dneg_31_1_reg_35421.read()[0].is_01())? sc_lv<14>(): ((dneg_31_1_reg_35421.read()[0].to_bool())? p_Val2_7_31_1_reg_35433.read(): p_Val2_14_31_1_reg_35443.read());
}

void Sobel_phase_strm::thread_y_V_1_31_2_fu_13109_p3() {
    y_V_1_31_2_fu_13109_p3 = (!dneg_31_2_fu_13035_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_2_fu_13035_p2.read()[0].to_bool())? p_Val2_7_31_2_fu_13079_p2.read(): p_Val2_14_31_2_fu_13095_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_3_fu_13187_p3() {
    y_V_1_31_3_fu_13187_p3 = (!dneg_31_3_fu_13117_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_3_fu_13117_p2.read()[0].to_bool())? p_Val2_7_31_3_fu_13157_p2.read(): p_Val2_14_31_3_fu_13173_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_4_fu_19785_p3() {
    y_V_1_31_4_fu_19785_p3 = (!dneg_31_4_fu_19743_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_4_fu_19743_p2.read()[0].to_bool())? p_Val2_7_31_4_fu_19759_p2.read(): p_Val2_14_31_4_fu_19772_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_5_fu_19863_p3() {
    y_V_1_31_5_fu_19863_p3 = (!dneg_31_5_fu_19793_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_5_fu_19793_p2.read()[0].to_bool())? p_Val2_7_31_5_fu_19833_p2.read(): p_Val2_14_31_5_fu_19849_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_6_fu_26195_p3() {
    y_V_1_31_6_fu_26195_p3 = (!dneg_31_6_fu_26161_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_6_fu_26161_p2.read()[0].to_bool())? p_Val2_7_31_6_fu_26177_p2.read(): p_Val2_14_31_6_fu_26190_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_31_7_fu_26253_p3() {
    y_V_1_31_7_fu_26253_p3 = (!dneg_31_7_fu_26203_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_31_7_fu_26203_p2.read()[0].to_bool())? p_Val2_7_31_7_fu_26241_p2.read(): p_Val2_14_31_7_fu_26247_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_1_cast_fu_13225_p1() {
    y_V_1_32_1_cast_fu_13225_p1 = esl_sext<15,14>(y_V_1_32_1_fu_13220_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_32_1_fu_13220_p3() {
    y_V_1_32_1_fu_13220_p3 = (!dneg_32_1_reg_35459.read()[0].is_01())? sc_lv<14>(): ((dneg_32_1_reg_35459.read()[0].to_bool())? p_Val2_7_32_1_reg_35471.read(): p_Val2_14_32_1_reg_35481.read());
}

void Sobel_phase_strm::thread_y_V_1_32_2_fu_13303_p3() {
    y_V_1_32_2_fu_13303_p3 = (!dneg_32_2_fu_13229_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_2_fu_13229_p2.read()[0].to_bool())? p_Val2_7_32_2_fu_13273_p2.read(): p_Val2_14_32_2_fu_13289_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_3_fu_13381_p3() {
    y_V_1_32_3_fu_13381_p3 = (!dneg_32_3_fu_13311_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_3_fu_13311_p2.read()[0].to_bool())? p_Val2_7_32_3_fu_13351_p2.read(): p_Val2_14_32_3_fu_13367_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_4_fu_19933_p3() {
    y_V_1_32_4_fu_19933_p3 = (!dneg_32_4_fu_19891_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_4_fu_19891_p2.read()[0].to_bool())? p_Val2_7_32_4_fu_19907_p2.read(): p_Val2_14_32_4_fu_19920_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_5_fu_20011_p3() {
    y_V_1_32_5_fu_20011_p3 = (!dneg_32_5_fu_19941_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_5_fu_19941_p2.read()[0].to_bool())? p_Val2_7_32_5_fu_19981_p2.read(): p_Val2_14_32_5_fu_19997_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_6_fu_26348_p3() {
    y_V_1_32_6_fu_26348_p3 = (!dneg_32_6_fu_26314_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_6_fu_26314_p2.read()[0].to_bool())? p_Val2_7_32_6_fu_26330_p2.read(): p_Val2_14_32_6_fu_26343_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_32_7_fu_26406_p3() {
    y_V_1_32_7_fu_26406_p3 = (!dneg_32_7_fu_26356_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_32_7_fu_26356_p2.read()[0].to_bool())? p_Val2_7_32_7_fu_26394_p2.read(): p_Val2_14_32_7_fu_26400_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_1_cast_fu_13419_p1() {
    y_V_1_33_1_cast_fu_13419_p1 = esl_sext<15,14>(y_V_1_33_1_fu_13414_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_33_1_fu_13414_p3() {
    y_V_1_33_1_fu_13414_p3 = (!dneg_33_1_reg_35497.read()[0].is_01())? sc_lv<14>(): ((dneg_33_1_reg_35497.read()[0].to_bool())? p_Val2_7_33_1_reg_35509.read(): p_Val2_14_33_1_reg_35519.read());
}

void Sobel_phase_strm::thread_y_V_1_33_2_fu_13497_p3() {
    y_V_1_33_2_fu_13497_p3 = (!dneg_33_2_fu_13423_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_2_fu_13423_p2.read()[0].to_bool())? p_Val2_7_33_2_fu_13467_p2.read(): p_Val2_14_33_2_fu_13483_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_3_fu_13575_p3() {
    y_V_1_33_3_fu_13575_p3 = (!dneg_33_3_fu_13505_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_3_fu_13505_p2.read()[0].to_bool())? p_Val2_7_33_3_fu_13545_p2.read(): p_Val2_14_33_3_fu_13561_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_4_fu_20081_p3() {
    y_V_1_33_4_fu_20081_p3 = (!dneg_33_4_fu_20039_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_4_fu_20039_p2.read()[0].to_bool())? p_Val2_7_33_4_fu_20055_p2.read(): p_Val2_14_33_4_fu_20068_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_5_fu_20159_p3() {
    y_V_1_33_5_fu_20159_p3 = (!dneg_33_5_fu_20089_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_5_fu_20089_p2.read()[0].to_bool())? p_Val2_7_33_5_fu_20129_p2.read(): p_Val2_14_33_5_fu_20145_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_6_fu_26501_p3() {
    y_V_1_33_6_fu_26501_p3 = (!dneg_33_6_fu_26467_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_6_fu_26467_p2.read()[0].to_bool())? p_Val2_7_33_6_fu_26483_p2.read(): p_Val2_14_33_6_fu_26496_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_33_7_fu_26559_p3() {
    y_V_1_33_7_fu_26559_p3 = (!dneg_33_7_fu_26509_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_33_7_fu_26509_p2.read()[0].to_bool())? p_Val2_7_33_7_fu_26547_p2.read(): p_Val2_14_33_7_fu_26553_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_1_cast_fu_13613_p1() {
    y_V_1_34_1_cast_fu_13613_p1 = esl_sext<15,14>(y_V_1_34_1_fu_13608_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_34_1_fu_13608_p3() {
    y_V_1_34_1_fu_13608_p3 = (!dneg_34_1_reg_35535.read()[0].is_01())? sc_lv<14>(): ((dneg_34_1_reg_35535.read()[0].to_bool())? p_Val2_7_34_1_reg_35547.read(): p_Val2_14_34_1_reg_35557.read());
}

void Sobel_phase_strm::thread_y_V_1_34_2_fu_13691_p3() {
    y_V_1_34_2_fu_13691_p3 = (!dneg_34_2_fu_13617_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_2_fu_13617_p2.read()[0].to_bool())? p_Val2_7_34_2_fu_13661_p2.read(): p_Val2_14_34_2_fu_13677_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_3_fu_13769_p3() {
    y_V_1_34_3_fu_13769_p3 = (!dneg_34_3_fu_13699_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_3_fu_13699_p2.read()[0].to_bool())? p_Val2_7_34_3_fu_13739_p2.read(): p_Val2_14_34_3_fu_13755_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_4_fu_20229_p3() {
    y_V_1_34_4_fu_20229_p3 = (!dneg_34_4_fu_20187_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_4_fu_20187_p2.read()[0].to_bool())? p_Val2_7_34_4_fu_20203_p2.read(): p_Val2_14_34_4_fu_20216_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_5_fu_20307_p3() {
    y_V_1_34_5_fu_20307_p3 = (!dneg_34_5_fu_20237_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_5_fu_20237_p2.read()[0].to_bool())? p_Val2_7_34_5_fu_20277_p2.read(): p_Val2_14_34_5_fu_20293_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_6_fu_26654_p3() {
    y_V_1_34_6_fu_26654_p3 = (!dneg_34_6_fu_26620_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_6_fu_26620_p2.read()[0].to_bool())? p_Val2_7_34_6_fu_26636_p2.read(): p_Val2_14_34_6_fu_26649_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_34_7_fu_26712_p3() {
    y_V_1_34_7_fu_26712_p3 = (!dneg_34_7_fu_26662_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_34_7_fu_26662_p2.read()[0].to_bool())? p_Val2_7_34_7_fu_26700_p2.read(): p_Val2_14_34_7_fu_26706_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_1_cast_fu_13807_p1() {
    y_V_1_35_1_cast_fu_13807_p1 = esl_sext<15,14>(y_V_1_35_1_fu_13802_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_35_1_fu_13802_p3() {
    y_V_1_35_1_fu_13802_p3 = (!dneg_35_1_reg_35573.read()[0].is_01())? sc_lv<14>(): ((dneg_35_1_reg_35573.read()[0].to_bool())? p_Val2_7_35_1_reg_35585.read(): p_Val2_14_35_1_reg_35595.read());
}

void Sobel_phase_strm::thread_y_V_1_35_2_fu_13885_p3() {
    y_V_1_35_2_fu_13885_p3 = (!dneg_35_2_fu_13811_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_2_fu_13811_p2.read()[0].to_bool())? p_Val2_7_35_2_fu_13855_p2.read(): p_Val2_14_35_2_fu_13871_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_3_fu_13963_p3() {
    y_V_1_35_3_fu_13963_p3 = (!dneg_35_3_fu_13893_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_3_fu_13893_p2.read()[0].to_bool())? p_Val2_7_35_3_fu_13933_p2.read(): p_Val2_14_35_3_fu_13949_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_4_fu_20377_p3() {
    y_V_1_35_4_fu_20377_p3 = (!dneg_35_4_fu_20335_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_4_fu_20335_p2.read()[0].to_bool())? p_Val2_7_35_4_fu_20351_p2.read(): p_Val2_14_35_4_fu_20364_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_5_fu_20455_p3() {
    y_V_1_35_5_fu_20455_p3 = (!dneg_35_5_fu_20385_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_5_fu_20385_p2.read()[0].to_bool())? p_Val2_7_35_5_fu_20425_p2.read(): p_Val2_14_35_5_fu_20441_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_6_fu_26807_p3() {
    y_V_1_35_6_fu_26807_p3 = (!dneg_35_6_fu_26773_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_6_fu_26773_p2.read()[0].to_bool())? p_Val2_7_35_6_fu_26789_p2.read(): p_Val2_14_35_6_fu_26802_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_35_7_fu_26865_p3() {
    y_V_1_35_7_fu_26865_p3 = (!dneg_35_7_fu_26815_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_35_7_fu_26815_p2.read()[0].to_bool())? p_Val2_7_35_7_fu_26853_p2.read(): p_Val2_14_35_7_fu_26859_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_1_cast_fu_14001_p1() {
    y_V_1_36_1_cast_fu_14001_p1 = esl_sext<15,14>(y_V_1_36_1_fu_13996_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_36_1_fu_13996_p3() {
    y_V_1_36_1_fu_13996_p3 = (!dneg_36_1_reg_35611.read()[0].is_01())? sc_lv<14>(): ((dneg_36_1_reg_35611.read()[0].to_bool())? p_Val2_7_36_1_reg_35623.read(): p_Val2_14_36_1_reg_35633.read());
}

void Sobel_phase_strm::thread_y_V_1_36_2_fu_14079_p3() {
    y_V_1_36_2_fu_14079_p3 = (!dneg_36_2_fu_14005_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_2_fu_14005_p2.read()[0].to_bool())? p_Val2_7_36_2_fu_14049_p2.read(): p_Val2_14_36_2_fu_14065_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_3_fu_14157_p3() {
    y_V_1_36_3_fu_14157_p3 = (!dneg_36_3_fu_14087_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_3_fu_14087_p2.read()[0].to_bool())? p_Val2_7_36_3_fu_14127_p2.read(): p_Val2_14_36_3_fu_14143_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_4_fu_20525_p3() {
    y_V_1_36_4_fu_20525_p3 = (!dneg_36_4_fu_20483_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_4_fu_20483_p2.read()[0].to_bool())? p_Val2_7_36_4_fu_20499_p2.read(): p_Val2_14_36_4_fu_20512_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_5_fu_20603_p3() {
    y_V_1_36_5_fu_20603_p3 = (!dneg_36_5_fu_20533_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_5_fu_20533_p2.read()[0].to_bool())? p_Val2_7_36_5_fu_20573_p2.read(): p_Val2_14_36_5_fu_20589_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_6_fu_26960_p3() {
    y_V_1_36_6_fu_26960_p3 = (!dneg_36_6_fu_26926_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_6_fu_26926_p2.read()[0].to_bool())? p_Val2_7_36_6_fu_26942_p2.read(): p_Val2_14_36_6_fu_26955_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_36_7_fu_27018_p3() {
    y_V_1_36_7_fu_27018_p3 = (!dneg_36_7_fu_26968_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_36_7_fu_26968_p2.read()[0].to_bool())? p_Val2_7_36_7_fu_27006_p2.read(): p_Val2_14_36_7_fu_27012_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_1_cast_fu_14195_p1() {
    y_V_1_37_1_cast_fu_14195_p1 = esl_sext<15,14>(y_V_1_37_1_fu_14190_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_37_1_fu_14190_p3() {
    y_V_1_37_1_fu_14190_p3 = (!dneg_37_1_reg_35649.read()[0].is_01())? sc_lv<14>(): ((dneg_37_1_reg_35649.read()[0].to_bool())? p_Val2_7_37_1_reg_35661.read(): p_Val2_14_37_1_reg_35671.read());
}

void Sobel_phase_strm::thread_y_V_1_37_2_fu_14273_p3() {
    y_V_1_37_2_fu_14273_p3 = (!dneg_37_2_fu_14199_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_2_fu_14199_p2.read()[0].to_bool())? p_Val2_7_37_2_fu_14243_p2.read(): p_Val2_14_37_2_fu_14259_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_3_fu_14351_p3() {
    y_V_1_37_3_fu_14351_p3 = (!dneg_37_3_fu_14281_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_3_fu_14281_p2.read()[0].to_bool())? p_Val2_7_37_3_fu_14321_p2.read(): p_Val2_14_37_3_fu_14337_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_4_fu_20673_p3() {
    y_V_1_37_4_fu_20673_p3 = (!dneg_37_4_fu_20631_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_4_fu_20631_p2.read()[0].to_bool())? p_Val2_7_37_4_fu_20647_p2.read(): p_Val2_14_37_4_fu_20660_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_5_fu_20751_p3() {
    y_V_1_37_5_fu_20751_p3 = (!dneg_37_5_fu_20681_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_5_fu_20681_p2.read()[0].to_bool())? p_Val2_7_37_5_fu_20721_p2.read(): p_Val2_14_37_5_fu_20737_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_6_fu_27113_p3() {
    y_V_1_37_6_fu_27113_p3 = (!dneg_37_6_fu_27079_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_6_fu_27079_p2.read()[0].to_bool())? p_Val2_7_37_6_fu_27095_p2.read(): p_Val2_14_37_6_fu_27108_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_37_7_fu_27171_p3() {
    y_V_1_37_7_fu_27171_p3 = (!dneg_37_7_fu_27121_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_37_7_fu_27121_p2.read()[0].to_bool())? p_Val2_7_37_7_fu_27159_p2.read(): p_Val2_14_37_7_fu_27165_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_1_cast_fu_14389_p1() {
    y_V_1_38_1_cast_fu_14389_p1 = esl_sext<15,14>(y_V_1_38_1_fu_14384_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_38_1_fu_14384_p3() {
    y_V_1_38_1_fu_14384_p3 = (!dneg_38_1_reg_35687.read()[0].is_01())? sc_lv<14>(): ((dneg_38_1_reg_35687.read()[0].to_bool())? p_Val2_7_38_1_reg_35699.read(): p_Val2_14_38_1_reg_35709.read());
}

void Sobel_phase_strm::thread_y_V_1_38_2_fu_14467_p3() {
    y_V_1_38_2_fu_14467_p3 = (!dneg_38_2_fu_14393_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_2_fu_14393_p2.read()[0].to_bool())? p_Val2_7_38_2_fu_14437_p2.read(): p_Val2_14_38_2_fu_14453_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_3_fu_14545_p3() {
    y_V_1_38_3_fu_14545_p3 = (!dneg_38_3_fu_14475_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_3_fu_14475_p2.read()[0].to_bool())? p_Val2_7_38_3_fu_14515_p2.read(): p_Val2_14_38_3_fu_14531_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_4_fu_20821_p3() {
    y_V_1_38_4_fu_20821_p3 = (!dneg_38_4_fu_20779_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_4_fu_20779_p2.read()[0].to_bool())? p_Val2_7_38_4_fu_20795_p2.read(): p_Val2_14_38_4_fu_20808_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_5_fu_20899_p3() {
    y_V_1_38_5_fu_20899_p3 = (!dneg_38_5_fu_20829_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_5_fu_20829_p2.read()[0].to_bool())? p_Val2_7_38_5_fu_20869_p2.read(): p_Val2_14_38_5_fu_20885_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_6_fu_27266_p3() {
    y_V_1_38_6_fu_27266_p3 = (!dneg_38_6_fu_27232_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_6_fu_27232_p2.read()[0].to_bool())? p_Val2_7_38_6_fu_27248_p2.read(): p_Val2_14_38_6_fu_27261_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_38_7_fu_27324_p3() {
    y_V_1_38_7_fu_27324_p3 = (!dneg_38_7_fu_27274_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_38_7_fu_27274_p2.read()[0].to_bool())? p_Val2_7_38_7_fu_27312_p2.read(): p_Val2_14_38_7_fu_27318_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_1_cast_fu_14583_p1() {
    y_V_1_39_1_cast_fu_14583_p1 = esl_sext<15,14>(y_V_1_39_1_fu_14578_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_39_1_fu_14578_p3() {
    y_V_1_39_1_fu_14578_p3 = (!dneg_39_1_reg_35725.read()[0].is_01())? sc_lv<14>(): ((dneg_39_1_reg_35725.read()[0].to_bool())? p_Val2_7_39_1_reg_35737.read(): p_Val2_14_39_1_reg_35747.read());
}

void Sobel_phase_strm::thread_y_V_1_39_2_fu_14661_p3() {
    y_V_1_39_2_fu_14661_p3 = (!dneg_39_2_fu_14587_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_2_fu_14587_p2.read()[0].to_bool())? p_Val2_7_39_2_fu_14631_p2.read(): p_Val2_14_39_2_fu_14647_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_3_fu_14739_p3() {
    y_V_1_39_3_fu_14739_p3 = (!dneg_39_3_fu_14669_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_3_fu_14669_p2.read()[0].to_bool())? p_Val2_7_39_3_fu_14709_p2.read(): p_Val2_14_39_3_fu_14725_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_4_fu_20969_p3() {
    y_V_1_39_4_fu_20969_p3 = (!dneg_39_4_fu_20927_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_4_fu_20927_p2.read()[0].to_bool())? p_Val2_7_39_4_fu_20943_p2.read(): p_Val2_14_39_4_fu_20956_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_5_fu_21047_p3() {
    y_V_1_39_5_fu_21047_p3 = (!dneg_39_5_fu_20977_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_5_fu_20977_p2.read()[0].to_bool())? p_Val2_7_39_5_fu_21017_p2.read(): p_Val2_14_39_5_fu_21033_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_6_fu_27419_p3() {
    y_V_1_39_6_fu_27419_p3 = (!dneg_39_6_fu_27385_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_6_fu_27385_p2.read()[0].to_bool())? p_Val2_7_39_6_fu_27401_p2.read(): p_Val2_14_39_6_fu_27414_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_39_7_fu_27477_p3() {
    y_V_1_39_7_fu_27477_p3 = (!dneg_39_7_fu_27427_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_39_7_fu_27427_p2.read()[0].to_bool())? p_Val2_7_39_7_fu_27465_p2.read(): p_Val2_14_39_7_fu_27471_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_1_cast_fu_7599_p1() {
    y_V_1_3_1_cast_fu_7599_p1 = esl_sext<15,14>(y_V_1_3_1_fu_7594_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_3_1_fu_7594_p3() {
    y_V_1_3_1_fu_7594_p3 = (!dneg_3_1_reg_34357.read()[0].is_01())? sc_lv<14>(): ((dneg_3_1_reg_34357.read()[0].to_bool())? p_Val2_7_3_1_reg_34369.read(): p_Val2_14_3_1_reg_34379.read());
}

void Sobel_phase_strm::thread_y_V_1_3_2_fu_7677_p3() {
    y_V_1_3_2_fu_7677_p3 = (!dneg_3_2_fu_7603_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_2_fu_7603_p2.read()[0].to_bool())? p_Val2_7_3_2_fu_7647_p2.read(): p_Val2_14_3_2_fu_7663_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_3_fu_7755_p3() {
    y_V_1_3_3_fu_7755_p3 = (!dneg_3_3_fu_7685_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_3_fu_7685_p2.read()[0].to_bool())? p_Val2_7_3_3_fu_7725_p2.read(): p_Val2_14_3_3_fu_7741_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_4_fu_15641_p3() {
    y_V_1_3_4_fu_15641_p3 = (!dneg_3_4_fu_15599_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_4_fu_15599_p2.read()[0].to_bool())? p_Val2_7_3_4_fu_15615_p2.read(): p_Val2_14_3_4_fu_15628_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_5_fu_15719_p3() {
    y_V_1_3_5_fu_15719_p3 = (!dneg_3_5_fu_15649_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_5_fu_15649_p2.read()[0].to_bool())? p_Val2_7_3_5_fu_15689_p2.read(): p_Val2_14_3_5_fu_15705_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_6_fu_21911_p3() {
    y_V_1_3_6_fu_21911_p3 = (!dneg_3_6_fu_21877_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_6_fu_21877_p2.read()[0].to_bool())? p_Val2_7_3_6_fu_21893_p2.read(): p_Val2_14_3_6_fu_21906_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_3_7_fu_21969_p3() {
    y_V_1_3_7_fu_21969_p3 = (!dneg_3_7_fu_21919_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_3_7_fu_21919_p2.read()[0].to_bool())? p_Val2_7_3_7_fu_21957_p2.read(): p_Val2_14_3_7_fu_21963_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_1_cast_fu_14777_p1() {
    y_V_1_40_1_cast_fu_14777_p1 = esl_sext<15,14>(y_V_1_40_1_fu_14772_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_40_1_fu_14772_p3() {
    y_V_1_40_1_fu_14772_p3 = (!dneg_40_1_reg_35763.read()[0].is_01())? sc_lv<14>(): ((dneg_40_1_reg_35763.read()[0].to_bool())? p_Val2_7_40_1_reg_35775.read(): p_Val2_14_40_1_reg_35785.read());
}

void Sobel_phase_strm::thread_y_V_1_40_2_fu_14855_p3() {
    y_V_1_40_2_fu_14855_p3 = (!dneg_40_2_fu_14781_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_2_fu_14781_p2.read()[0].to_bool())? p_Val2_7_40_2_fu_14825_p2.read(): p_Val2_14_40_2_fu_14841_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_3_fu_14933_p3() {
    y_V_1_40_3_fu_14933_p3 = (!dneg_40_3_fu_14863_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_3_fu_14863_p2.read()[0].to_bool())? p_Val2_7_40_3_fu_14903_p2.read(): p_Val2_14_40_3_fu_14919_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_4_fu_21117_p3() {
    y_V_1_40_4_fu_21117_p3 = (!dneg_40_4_fu_21075_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_4_fu_21075_p2.read()[0].to_bool())? p_Val2_7_40_4_fu_21091_p2.read(): p_Val2_14_40_4_fu_21104_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_5_fu_21195_p3() {
    y_V_1_40_5_fu_21195_p3 = (!dneg_40_5_fu_21125_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_5_fu_21125_p2.read()[0].to_bool())? p_Val2_7_40_5_fu_21165_p2.read(): p_Val2_14_40_5_fu_21181_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_6_fu_27572_p3() {
    y_V_1_40_6_fu_27572_p3 = (!dneg_40_6_fu_27538_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_6_fu_27538_p2.read()[0].to_bool())? p_Val2_7_40_6_fu_27554_p2.read(): p_Val2_14_40_6_fu_27567_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_40_7_fu_27630_p3() {
    y_V_1_40_7_fu_27630_p3 = (!dneg_40_7_fu_27580_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_40_7_fu_27580_p2.read()[0].to_bool())? p_Val2_7_40_7_fu_27618_p2.read(): p_Val2_14_40_7_fu_27624_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_1_cast_fu_14971_p1() {
    y_V_1_41_1_cast_fu_14971_p1 = esl_sext<15,14>(y_V_1_41_1_fu_14966_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_41_1_fu_14966_p3() {
    y_V_1_41_1_fu_14966_p3 = (!dneg_41_1_reg_35801.read()[0].is_01())? sc_lv<14>(): ((dneg_41_1_reg_35801.read()[0].to_bool())? p_Val2_7_41_1_reg_35813.read(): p_Val2_14_41_1_reg_35823.read());
}

void Sobel_phase_strm::thread_y_V_1_41_2_fu_15049_p3() {
    y_V_1_41_2_fu_15049_p3 = (!dneg_41_2_fu_14975_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_2_fu_14975_p2.read()[0].to_bool())? p_Val2_7_41_2_fu_15019_p2.read(): p_Val2_14_41_2_fu_15035_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_3_fu_15127_p3() {
    y_V_1_41_3_fu_15127_p3 = (!dneg_41_3_fu_15057_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_3_fu_15057_p2.read()[0].to_bool())? p_Val2_7_41_3_fu_15097_p2.read(): p_Val2_14_41_3_fu_15113_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_4_fu_21265_p3() {
    y_V_1_41_4_fu_21265_p3 = (!dneg_41_4_fu_21223_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_4_fu_21223_p2.read()[0].to_bool())? p_Val2_7_41_4_fu_21239_p2.read(): p_Val2_14_41_4_fu_21252_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_5_fu_21343_p3() {
    y_V_1_41_5_fu_21343_p3 = (!dneg_41_5_fu_21273_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_5_fu_21273_p2.read()[0].to_bool())? p_Val2_7_41_5_fu_21313_p2.read(): p_Val2_14_41_5_fu_21329_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_6_fu_27725_p3() {
    y_V_1_41_6_fu_27725_p3 = (!dneg_41_6_fu_27691_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_6_fu_27691_p2.read()[0].to_bool())? p_Val2_7_41_6_fu_27707_p2.read(): p_Val2_14_41_6_fu_27720_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_41_7_fu_27783_p3() {
    y_V_1_41_7_fu_27783_p3 = (!dneg_41_7_fu_27733_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_41_7_fu_27733_p2.read()[0].to_bool())? p_Val2_7_41_7_fu_27771_p2.read(): p_Val2_14_41_7_fu_27777_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_1_cast_fu_7793_p1() {
    y_V_1_4_1_cast_fu_7793_p1 = esl_sext<15,14>(y_V_1_4_1_fu_7788_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_4_1_fu_7788_p3() {
    y_V_1_4_1_fu_7788_p3 = (!dneg_4_1_reg_34395.read()[0].is_01())? sc_lv<14>(): ((dneg_4_1_reg_34395.read()[0].to_bool())? p_Val2_7_4_1_reg_34407.read(): p_Val2_14_4_1_reg_34417.read());
}

void Sobel_phase_strm::thread_y_V_1_4_2_fu_7871_p3() {
    y_V_1_4_2_fu_7871_p3 = (!dneg_4_2_fu_7797_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_2_fu_7797_p2.read()[0].to_bool())? p_Val2_7_4_2_fu_7841_p2.read(): p_Val2_14_4_2_fu_7857_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_3_fu_7949_p3() {
    y_V_1_4_3_fu_7949_p3 = (!dneg_4_3_fu_7879_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_3_fu_7879_p2.read()[0].to_bool())? p_Val2_7_4_3_fu_7919_p2.read(): p_Val2_14_4_3_fu_7935_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_4_fu_15789_p3() {
    y_V_1_4_4_fu_15789_p3 = (!dneg_4_4_fu_15747_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_4_fu_15747_p2.read()[0].to_bool())? p_Val2_7_4_4_fu_15763_p2.read(): p_Val2_14_4_4_fu_15776_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_5_fu_15867_p3() {
    y_V_1_4_5_fu_15867_p3 = (!dneg_4_5_fu_15797_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_5_fu_15797_p2.read()[0].to_bool())? p_Val2_7_4_5_fu_15837_p2.read(): p_Val2_14_4_5_fu_15853_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_6_fu_22064_p3() {
    y_V_1_4_6_fu_22064_p3 = (!dneg_4_6_fu_22030_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_6_fu_22030_p2.read()[0].to_bool())? p_Val2_7_4_6_fu_22046_p2.read(): p_Val2_14_4_6_fu_22059_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_4_7_fu_22122_p3() {
    y_V_1_4_7_fu_22122_p3 = (!dneg_4_7_fu_22072_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_4_7_fu_22072_p2.read()[0].to_bool())? p_Val2_7_4_7_fu_22110_p2.read(): p_Val2_14_4_7_fu_22116_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_1_cast_fu_7987_p1() {
    y_V_1_5_1_cast_fu_7987_p1 = esl_sext<15,14>(y_V_1_5_1_fu_7982_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_5_1_fu_7982_p3() {
    y_V_1_5_1_fu_7982_p3 = (!dneg_5_1_reg_34433.read()[0].is_01())? sc_lv<14>(): ((dneg_5_1_reg_34433.read()[0].to_bool())? p_Val2_7_5_1_reg_34445.read(): p_Val2_14_5_1_reg_34455.read());
}

void Sobel_phase_strm::thread_y_V_1_5_2_fu_8065_p3() {
    y_V_1_5_2_fu_8065_p3 = (!dneg_5_2_fu_7991_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_2_fu_7991_p2.read()[0].to_bool())? p_Val2_7_5_2_fu_8035_p2.read(): p_Val2_14_5_2_fu_8051_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_3_fu_8143_p3() {
    y_V_1_5_3_fu_8143_p3 = (!dneg_5_3_fu_8073_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_3_fu_8073_p2.read()[0].to_bool())? p_Val2_7_5_3_fu_8113_p2.read(): p_Val2_14_5_3_fu_8129_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_4_fu_15937_p3() {
    y_V_1_5_4_fu_15937_p3 = (!dneg_5_4_fu_15895_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_4_fu_15895_p2.read()[0].to_bool())? p_Val2_7_5_4_fu_15911_p2.read(): p_Val2_14_5_4_fu_15924_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_5_fu_16015_p3() {
    y_V_1_5_5_fu_16015_p3 = (!dneg_5_5_fu_15945_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_5_fu_15945_p2.read()[0].to_bool())? p_Val2_7_5_5_fu_15985_p2.read(): p_Val2_14_5_5_fu_16001_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_6_fu_22217_p3() {
    y_V_1_5_6_fu_22217_p3 = (!dneg_5_6_fu_22183_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_6_fu_22183_p2.read()[0].to_bool())? p_Val2_7_5_6_fu_22199_p2.read(): p_Val2_14_5_6_fu_22212_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_5_7_fu_22275_p3() {
    y_V_1_5_7_fu_22275_p3 = (!dneg_5_7_fu_22225_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_5_7_fu_22225_p2.read()[0].to_bool())? p_Val2_7_5_7_fu_22263_p2.read(): p_Val2_14_5_7_fu_22269_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_1_cast_fu_8181_p1() {
    y_V_1_6_1_cast_fu_8181_p1 = esl_sext<15,14>(y_V_1_6_1_fu_8176_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_6_1_fu_8176_p3() {
    y_V_1_6_1_fu_8176_p3 = (!dneg_6_1_reg_34471.read()[0].is_01())? sc_lv<14>(): ((dneg_6_1_reg_34471.read()[0].to_bool())? p_Val2_7_6_1_reg_34483.read(): p_Val2_14_6_1_reg_34493.read());
}

void Sobel_phase_strm::thread_y_V_1_6_2_fu_8259_p3() {
    y_V_1_6_2_fu_8259_p3 = (!dneg_6_2_fu_8185_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_2_fu_8185_p2.read()[0].to_bool())? p_Val2_7_6_2_fu_8229_p2.read(): p_Val2_14_6_2_fu_8245_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_3_fu_8337_p3() {
    y_V_1_6_3_fu_8337_p3 = (!dneg_6_3_fu_8267_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_3_fu_8267_p2.read()[0].to_bool())? p_Val2_7_6_3_fu_8307_p2.read(): p_Val2_14_6_3_fu_8323_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_4_fu_16085_p3() {
    y_V_1_6_4_fu_16085_p3 = (!dneg_6_4_fu_16043_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_4_fu_16043_p2.read()[0].to_bool())? p_Val2_7_6_4_fu_16059_p2.read(): p_Val2_14_6_4_fu_16072_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_5_fu_16163_p3() {
    y_V_1_6_5_fu_16163_p3 = (!dneg_6_5_fu_16093_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_5_fu_16093_p2.read()[0].to_bool())? p_Val2_7_6_5_fu_16133_p2.read(): p_Val2_14_6_5_fu_16149_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_6_fu_22370_p3() {
    y_V_1_6_6_fu_22370_p3 = (!dneg_6_6_fu_22336_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_6_fu_22336_p2.read()[0].to_bool())? p_Val2_7_6_6_fu_22352_p2.read(): p_Val2_14_6_6_fu_22365_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_6_7_fu_22428_p3() {
    y_V_1_6_7_fu_22428_p3 = (!dneg_6_7_fu_22378_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_6_7_fu_22378_p2.read()[0].to_bool())? p_Val2_7_6_7_fu_22416_p2.read(): p_Val2_14_6_7_fu_22422_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_1_cast_fu_8375_p1() {
    y_V_1_7_1_cast_fu_8375_p1 = esl_sext<15,14>(y_V_1_7_1_fu_8370_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_7_1_fu_8370_p3() {
    y_V_1_7_1_fu_8370_p3 = (!dneg_7_1_reg_34509.read()[0].is_01())? sc_lv<14>(): ((dneg_7_1_reg_34509.read()[0].to_bool())? p_Val2_7_7_1_reg_34521.read(): p_Val2_14_7_1_reg_34531.read());
}

void Sobel_phase_strm::thread_y_V_1_7_2_fu_8453_p3() {
    y_V_1_7_2_fu_8453_p3 = (!dneg_7_2_fu_8379_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_2_fu_8379_p2.read()[0].to_bool())? p_Val2_7_7_2_fu_8423_p2.read(): p_Val2_14_7_2_fu_8439_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_3_fu_8531_p3() {
    y_V_1_7_3_fu_8531_p3 = (!dneg_7_3_fu_8461_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_3_fu_8461_p2.read()[0].to_bool())? p_Val2_7_7_3_fu_8501_p2.read(): p_Val2_14_7_3_fu_8517_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_4_fu_16233_p3() {
    y_V_1_7_4_fu_16233_p3 = (!dneg_7_4_fu_16191_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_4_fu_16191_p2.read()[0].to_bool())? p_Val2_7_7_4_fu_16207_p2.read(): p_Val2_14_7_4_fu_16220_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_5_fu_16311_p3() {
    y_V_1_7_5_fu_16311_p3 = (!dneg_7_5_fu_16241_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_5_fu_16241_p2.read()[0].to_bool())? p_Val2_7_7_5_fu_16281_p2.read(): p_Val2_14_7_5_fu_16297_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_6_fu_22523_p3() {
    y_V_1_7_6_fu_22523_p3 = (!dneg_7_6_fu_22489_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_6_fu_22489_p2.read()[0].to_bool())? p_Val2_7_7_6_fu_22505_p2.read(): p_Val2_14_7_6_fu_22518_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_7_7_fu_22581_p3() {
    y_V_1_7_7_fu_22581_p3 = (!dneg_7_7_fu_22531_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_7_7_fu_22531_p2.read()[0].to_bool())? p_Val2_7_7_7_fu_22569_p2.read(): p_Val2_14_7_7_fu_22575_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_1_cast_fu_8569_p1() {
    y_V_1_8_1_cast_fu_8569_p1 = esl_sext<15,14>(y_V_1_8_1_fu_8564_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_8_1_fu_8564_p3() {
    y_V_1_8_1_fu_8564_p3 = (!dneg_8_1_reg_34547.read()[0].is_01())? sc_lv<14>(): ((dneg_8_1_reg_34547.read()[0].to_bool())? p_Val2_7_8_1_reg_34559.read(): p_Val2_14_8_1_reg_34569.read());
}

void Sobel_phase_strm::thread_y_V_1_8_2_fu_8647_p3() {
    y_V_1_8_2_fu_8647_p3 = (!dneg_8_2_fu_8573_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_2_fu_8573_p2.read()[0].to_bool())? p_Val2_7_8_2_fu_8617_p2.read(): p_Val2_14_8_2_fu_8633_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_3_fu_8725_p3() {
    y_V_1_8_3_fu_8725_p3 = (!dneg_8_3_fu_8655_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_3_fu_8655_p2.read()[0].to_bool())? p_Val2_7_8_3_fu_8695_p2.read(): p_Val2_14_8_3_fu_8711_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_4_fu_16381_p3() {
    y_V_1_8_4_fu_16381_p3 = (!dneg_8_4_fu_16339_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_4_fu_16339_p2.read()[0].to_bool())? p_Val2_7_8_4_fu_16355_p2.read(): p_Val2_14_8_4_fu_16368_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_5_fu_16459_p3() {
    y_V_1_8_5_fu_16459_p3 = (!dneg_8_5_fu_16389_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_5_fu_16389_p2.read()[0].to_bool())? p_Val2_7_8_5_fu_16429_p2.read(): p_Val2_14_8_5_fu_16445_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_6_fu_22676_p3() {
    y_V_1_8_6_fu_22676_p3 = (!dneg_8_6_fu_22642_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_6_fu_22642_p2.read()[0].to_bool())? p_Val2_7_8_6_fu_22658_p2.read(): p_Val2_14_8_6_fu_22671_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_8_7_fu_22734_p3() {
    y_V_1_8_7_fu_22734_p3 = (!dneg_8_7_fu_22684_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_8_7_fu_22684_p2.read()[0].to_bool())? p_Val2_7_8_7_fu_22722_p2.read(): p_Val2_14_8_7_fu_22728_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_1_cast_fu_8763_p1() {
    y_V_1_9_1_cast_fu_8763_p1 = esl_sext<15,14>(y_V_1_9_1_fu_8758_p3.read());
}

void Sobel_phase_strm::thread_y_V_1_9_1_fu_8758_p3() {
    y_V_1_9_1_fu_8758_p3 = (!dneg_9_1_reg_34585.read()[0].is_01())? sc_lv<14>(): ((dneg_9_1_reg_34585.read()[0].to_bool())? p_Val2_7_9_1_reg_34597.read(): p_Val2_14_9_1_reg_34607.read());
}

void Sobel_phase_strm::thread_y_V_1_9_2_fu_8841_p3() {
    y_V_1_9_2_fu_8841_p3 = (!dneg_9_2_fu_8767_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_2_fu_8767_p2.read()[0].to_bool())? p_Val2_7_9_2_fu_8811_p2.read(): p_Val2_14_9_2_fu_8827_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_3_fu_8919_p3() {
    y_V_1_9_3_fu_8919_p3 = (!dneg_9_3_fu_8849_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_3_fu_8849_p2.read()[0].to_bool())? p_Val2_7_9_3_fu_8889_p2.read(): p_Val2_14_9_3_fu_8905_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_4_fu_16529_p3() {
    y_V_1_9_4_fu_16529_p3 = (!dneg_9_4_fu_16487_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_4_fu_16487_p2.read()[0].to_bool())? p_Val2_7_9_4_fu_16503_p2.read(): p_Val2_14_9_4_fu_16516_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_5_fu_16607_p3() {
    y_V_1_9_5_fu_16607_p3 = (!dneg_9_5_fu_16537_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_5_fu_16537_p2.read()[0].to_bool())? p_Val2_7_9_5_fu_16577_p2.read(): p_Val2_14_9_5_fu_16593_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_6_fu_22829_p3() {
    y_V_1_9_6_fu_22829_p3 = (!dneg_9_6_fu_22795_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_6_fu_22795_p2.read()[0].to_bool())? p_Val2_7_9_6_fu_22811_p2.read(): p_Val2_14_9_6_fu_22824_p2.read());
}

void Sobel_phase_strm::thread_y_V_1_9_7_fu_22887_p3() {
    y_V_1_9_7_fu_22887_p3 = (!dneg_9_7_fu_22837_p2.read()[0].is_01())? sc_lv<15>(): ((dneg_9_7_fu_22837_p2.read()[0].to_bool())? p_Val2_7_9_7_fu_22875_p2.read(): p_Val2_14_9_7_fu_22881_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_1_fu_21371_p3() {
    z_V_0_1_fu_21371_p3 = (!ap_reg_ppstg_dneg_0_1_reg_34243_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_0_1_reg_34243_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_0_2_cast_fu_21391_p1() {
    z_V_0_2_cast_fu_21391_p1 = esl_zext<13,12>(z_V_0_2_fu_21385_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_2_fu_21385_p2() {
    z_V_0_2_fu_21385_p2 = (!z_V_0_2_v_cast_cast_fu_21378_p3.read().is_01() || !z_V_0_1_fu_21371_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_0_2_v_cast_cast_fu_21378_p3.read()) + sc_biguint<12>(z_V_0_1_fu_21371_p3.read()));
}

void Sobel_phase_strm::thread_z_V_0_2_v_cast_cast_fu_21378_p3() {
    z_V_0_2_v_cast_cast_fu_21378_p3 = (!ap_reg_ppstg_dneg_0_2_reg_35828_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_0_2_reg_35828_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_0_3_fu_21411_p3() {
    z_V_0_3_fu_21411_p3 = (!ap_reg_ppstg_dneg_0_3_reg_35833_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_0_3_reg_35833_pp0_iter3.read()[0].to_bool())? p_Val2_10_0_3_cast_fu_21401_p1.read(): p_Val2_16_0_3_fu_21405_p2.read());
}

void Sobel_phase_strm::thread_z_V_0_4_v_cast_cast_fu_27797_p3() {
    z_V_0_4_v_cast_cast_fu_27797_p3 = (!ap_reg_ppstg_dneg_0_4_reg_37256_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_0_4_reg_37256_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_0_5_v_cast_cast_fu_27804_p3() {
    z_V_0_5_v_cast_cast_fu_27804_p3 = (!ap_reg_ppstg_dneg_0_5_reg_37261_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_0_5_reg_37261_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_0_6_v_cast_cast_fu_27811_p3() {
    z_V_0_6_v_cast_cast_fu_27811_p3 = (!dneg_0_6_reg_38689.read()[0].is_01())? sc_lv<7>(): ((dneg_0_6_reg_38689.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_0_7_v_cast_cast_fu_27818_p3() {
    z_V_0_7_v_cast_cast_fu_27818_p3 = (!dneg_0_7_reg_38694.read()[0].is_01())? sc_lv<6>(): ((dneg_0_7_reg_38694.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_0_8_fu_27867_p2() {
    z_V_0_8_fu_27867_p2 = (!tmp1_fu_27842_p2.read().is_01() || !tmp1032_cast_fu_27863_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp1_fu_27842_p2.read()) + sc_bigint<13>(tmp1032_cast_fu_27863_p1.read()));
}

void Sobel_phase_strm::thread_z_V_0_8_v_cast_cast_cast_fu_27825_p3() {
    z_V_0_8_v_cast_cast_cast_fu_27825_p3 = (!dneg_0_8_reg_38699.read()[0].is_01())? sc_lv<6>(): ((dneg_0_8_reg_38699.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_10_1_fu_22901_p3() {
    z_V_10_1_fu_22901_p3 = (!ap_reg_ppstg_dneg_10_1_reg_34623_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_10_1_reg_34623_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_10_2_cast_fu_22921_p1() {
    z_V_10_2_cast_fu_22921_p1 = esl_zext<13,12>(z_V_10_2_fu_22915_p2.read());
}

void Sobel_phase_strm::thread_z_V_10_2_fu_22915_p2() {
    z_V_10_2_fu_22915_p2 = (!z_V_10_2_v_cast_cast_fu_22908_p3.read().is_01() || !z_V_10_1_fu_22901_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_10_2_v_cast_cast_fu_22908_p3.read()) + sc_biguint<12>(z_V_10_1_fu_22901_p3.read()));
}

void Sobel_phase_strm::thread_z_V_10_2_v_cast_cast_fu_22908_p3() {
    z_V_10_2_v_cast_cast_fu_22908_p3 = (!ap_reg_ppstg_dneg_10_2_reg_36168_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_10_2_reg_36168_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_10_3_fu_22941_p3() {
    z_V_10_3_fu_22941_p3 = (!ap_reg_ppstg_dneg_10_3_reg_36173_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_10_3_reg_36173_pp0_iter3.read()[0].to_bool())? p_Val2_10_10_3_cast_fu_22931_p1.read(): p_Val2_16_10_3_fu_22935_p2.read());
}

void Sobel_phase_strm::thread_z_V_10_4_v_cast_cast_fu_29067_p3() {
    z_V_10_4_v_cast_cast_fu_29067_p3 = (!ap_reg_ppstg_dneg_10_4_reg_37596_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_10_4_reg_37596_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_10_5_v_cast_cast_fu_29074_p3() {
    z_V_10_5_v_cast_cast_fu_29074_p3 = (!ap_reg_ppstg_dneg_10_5_reg_37601_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_10_5_reg_37601_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_10_6_v_cast_cast_fu_29081_p3() {
    z_V_10_6_v_cast_cast_fu_29081_p3 = (!dneg_10_6_reg_38889.read()[0].is_01())? sc_lv<7>(): ((dneg_10_6_reg_38889.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_10_7_v_cast_cast_fu_29088_p3() {
    z_V_10_7_v_cast_cast_fu_29088_p3 = (!dneg_10_7_reg_38894.read()[0].is_01())? sc_lv<6>(): ((dneg_10_7_reg_38894.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_10_8_fu_29137_p2() {
    z_V_10_8_fu_29137_p2 = (!tmp204_fu_29112_p2.read().is_01() || !tmp1072_cast_fu_29133_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp204_fu_29112_p2.read()) + sc_bigint<13>(tmp1072_cast_fu_29133_p1.read()));
}

void Sobel_phase_strm::thread_z_V_10_8_v_cast_cast_cast_fu_29095_p3() {
    z_V_10_8_v_cast_cast_cast_fu_29095_p3 = (!dneg_10_8_reg_38899.read()[0].is_01())? sc_lv<6>(): ((dneg_10_8_reg_38899.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_11_1_fu_23054_p3() {
    z_V_11_1_fu_23054_p3 = (!ap_reg_ppstg_dneg_11_1_reg_34661_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_11_1_reg_34661_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_11_2_cast_fu_23074_p1() {
    z_V_11_2_cast_fu_23074_p1 = esl_zext<13,12>(z_V_11_2_fu_23068_p2.read());
}

void Sobel_phase_strm::thread_z_V_11_2_fu_23068_p2() {
    z_V_11_2_fu_23068_p2 = (!z_V_11_2_v_cast_cast_fu_23061_p3.read().is_01() || !z_V_11_1_fu_23054_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_11_2_v_cast_cast_fu_23061_p3.read()) + sc_biguint<12>(z_V_11_1_fu_23054_p3.read()));
}

void Sobel_phase_strm::thread_z_V_11_2_v_cast_cast_fu_23061_p3() {
    z_V_11_2_v_cast_cast_fu_23061_p3 = (!ap_reg_ppstg_dneg_11_2_reg_36202_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_11_2_reg_36202_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_11_3_fu_23094_p3() {
    z_V_11_3_fu_23094_p3 = (!ap_reg_ppstg_dneg_11_3_reg_36207_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_11_3_reg_36207_pp0_iter3.read()[0].to_bool())? p_Val2_10_11_3_cast_fu_23084_p1.read(): p_Val2_16_11_3_fu_23088_p2.read());
}

void Sobel_phase_strm::thread_z_V_11_4_v_cast_cast_fu_29194_p3() {
    z_V_11_4_v_cast_cast_fu_29194_p3 = (!ap_reg_ppstg_dneg_11_4_reg_37630_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_11_4_reg_37630_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_11_5_v_cast_cast_fu_29201_p3() {
    z_V_11_5_v_cast_cast_fu_29201_p3 = (!ap_reg_ppstg_dneg_11_5_reg_37635_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_11_5_reg_37635_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_11_6_v_cast_cast_fu_29208_p3() {
    z_V_11_6_v_cast_cast_fu_29208_p3 = (!dneg_11_6_reg_38909.read()[0].is_01())? sc_lv<7>(): ((dneg_11_6_reg_38909.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_11_7_v_cast_cast_fu_29215_p3() {
    z_V_11_7_v_cast_cast_fu_29215_p3 = (!dneg_11_7_reg_38914.read()[0].is_01())? sc_lv<6>(): ((dneg_11_7_reg_38914.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_11_8_fu_29264_p2() {
    z_V_11_8_fu_29264_p2 = (!tmp224_fu_29239_p2.read().is_01() || !tmp1076_cast_fu_29260_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp224_fu_29239_p2.read()) + sc_bigint<13>(tmp1076_cast_fu_29260_p1.read()));
}

void Sobel_phase_strm::thread_z_V_11_8_v_cast_cast_cast_fu_29222_p3() {
    z_V_11_8_v_cast_cast_cast_fu_29222_p3 = (!dneg_11_8_reg_38919.read()[0].is_01())? sc_lv<6>(): ((dneg_11_8_reg_38919.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_12_1_fu_23207_p3() {
    z_V_12_1_fu_23207_p3 = (!ap_reg_ppstg_dneg_12_1_reg_34699_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_12_1_reg_34699_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_12_2_cast_fu_23227_p1() {
    z_V_12_2_cast_fu_23227_p1 = esl_zext<13,12>(z_V_12_2_fu_23221_p2.read());
}

void Sobel_phase_strm::thread_z_V_12_2_fu_23221_p2() {
    z_V_12_2_fu_23221_p2 = (!z_V_12_2_v_cast_cast_fu_23214_p3.read().is_01() || !z_V_12_1_fu_23207_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_12_2_v_cast_cast_fu_23214_p3.read()) + sc_biguint<12>(z_V_12_1_fu_23207_p3.read()));
}

void Sobel_phase_strm::thread_z_V_12_2_v_cast_cast_fu_23214_p3() {
    z_V_12_2_v_cast_cast_fu_23214_p3 = (!ap_reg_ppstg_dneg_12_2_reg_36236_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_12_2_reg_36236_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_12_3_fu_23247_p3() {
    z_V_12_3_fu_23247_p3 = (!ap_reg_ppstg_dneg_12_3_reg_36241_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_12_3_reg_36241_pp0_iter3.read()[0].to_bool())? p_Val2_10_12_3_cast_fu_23237_p1.read(): p_Val2_16_12_3_fu_23241_p2.read());
}

void Sobel_phase_strm::thread_z_V_12_4_v_cast_cast_fu_29321_p3() {
    z_V_12_4_v_cast_cast_fu_29321_p3 = (!ap_reg_ppstg_dneg_12_4_reg_37664_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_12_4_reg_37664_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_12_5_v_cast_cast_fu_29328_p3() {
    z_V_12_5_v_cast_cast_fu_29328_p3 = (!ap_reg_ppstg_dneg_12_5_reg_37669_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_12_5_reg_37669_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_12_6_v_cast_cast_fu_29335_p3() {
    z_V_12_6_v_cast_cast_fu_29335_p3 = (!dneg_12_6_reg_38929.read()[0].is_01())? sc_lv<7>(): ((dneg_12_6_reg_38929.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_12_7_v_cast_cast_fu_29342_p3() {
    z_V_12_7_v_cast_cast_fu_29342_p3 = (!dneg_12_7_reg_38934.read()[0].is_01())? sc_lv<6>(): ((dneg_12_7_reg_38934.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_12_8_fu_29391_p2() {
    z_V_12_8_fu_29391_p2 = (!tmp244_fu_29366_p2.read().is_01() || !tmp1080_cast_fu_29387_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp244_fu_29366_p2.read()) + sc_bigint<13>(tmp1080_cast_fu_29387_p1.read()));
}

void Sobel_phase_strm::thread_z_V_12_8_v_cast_cast_cast_fu_29349_p3() {
    z_V_12_8_v_cast_cast_cast_fu_29349_p3 = (!dneg_12_8_reg_38939.read()[0].is_01())? sc_lv<6>(): ((dneg_12_8_reg_38939.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_13_1_fu_23360_p3() {
    z_V_13_1_fu_23360_p3 = (!ap_reg_ppstg_dneg_13_1_reg_34737_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_13_1_reg_34737_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_13_2_cast_fu_23380_p1() {
    z_V_13_2_cast_fu_23380_p1 = esl_zext<13,12>(z_V_13_2_fu_23374_p2.read());
}

void Sobel_phase_strm::thread_z_V_13_2_fu_23374_p2() {
    z_V_13_2_fu_23374_p2 = (!z_V_13_2_v_cast_cast_fu_23367_p3.read().is_01() || !z_V_13_1_fu_23360_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_13_2_v_cast_cast_fu_23367_p3.read()) + sc_biguint<12>(z_V_13_1_fu_23360_p3.read()));
}

void Sobel_phase_strm::thread_z_V_13_2_v_cast_cast_fu_23367_p3() {
    z_V_13_2_v_cast_cast_fu_23367_p3 = (!ap_reg_ppstg_dneg_13_2_reg_36270_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_13_2_reg_36270_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_13_3_fu_23400_p3() {
    z_V_13_3_fu_23400_p3 = (!ap_reg_ppstg_dneg_13_3_reg_36275_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_13_3_reg_36275_pp0_iter3.read()[0].to_bool())? p_Val2_10_13_3_cast_fu_23390_p1.read(): p_Val2_16_13_3_fu_23394_p2.read());
}

void Sobel_phase_strm::thread_z_V_13_4_v_cast_cast_fu_29448_p3() {
    z_V_13_4_v_cast_cast_fu_29448_p3 = (!ap_reg_ppstg_dneg_13_4_reg_37698_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_13_4_reg_37698_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_13_5_v_cast_cast_fu_29455_p3() {
    z_V_13_5_v_cast_cast_fu_29455_p3 = (!ap_reg_ppstg_dneg_13_5_reg_37703_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_13_5_reg_37703_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_13_6_v_cast_cast_fu_29462_p3() {
    z_V_13_6_v_cast_cast_fu_29462_p3 = (!dneg_13_6_reg_38949.read()[0].is_01())? sc_lv<7>(): ((dneg_13_6_reg_38949.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_13_7_v_cast_cast_fu_29469_p3() {
    z_V_13_7_v_cast_cast_fu_29469_p3 = (!dneg_13_7_reg_38954.read()[0].is_01())? sc_lv<6>(): ((dneg_13_7_reg_38954.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_13_8_fu_29518_p2() {
    z_V_13_8_fu_29518_p2 = (!tmp264_fu_29493_p2.read().is_01() || !tmp1084_cast_fu_29514_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp264_fu_29493_p2.read()) + sc_bigint<13>(tmp1084_cast_fu_29514_p1.read()));
}

void Sobel_phase_strm::thread_z_V_13_8_v_cast_cast_cast_fu_29476_p3() {
    z_V_13_8_v_cast_cast_cast_fu_29476_p3 = (!dneg_13_8_reg_38959.read()[0].is_01())? sc_lv<6>(): ((dneg_13_8_reg_38959.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_14_1_fu_23513_p3() {
    z_V_14_1_fu_23513_p3 = (!ap_reg_ppstg_dneg_14_1_reg_34775_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_14_1_reg_34775_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_14_2_cast_fu_23533_p1() {
    z_V_14_2_cast_fu_23533_p1 = esl_zext<13,12>(z_V_14_2_fu_23527_p2.read());
}

void Sobel_phase_strm::thread_z_V_14_2_fu_23527_p2() {
    z_V_14_2_fu_23527_p2 = (!z_V_14_2_v_cast_cast_fu_23520_p3.read().is_01() || !z_V_14_1_fu_23513_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_14_2_v_cast_cast_fu_23520_p3.read()) + sc_biguint<12>(z_V_14_1_fu_23513_p3.read()));
}

void Sobel_phase_strm::thread_z_V_14_2_v_cast_cast_fu_23520_p3() {
    z_V_14_2_v_cast_cast_fu_23520_p3 = (!ap_reg_ppstg_dneg_14_2_reg_36304_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_14_2_reg_36304_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_14_3_fu_23553_p3() {
    z_V_14_3_fu_23553_p3 = (!ap_reg_ppstg_dneg_14_3_reg_36309_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_14_3_reg_36309_pp0_iter3.read()[0].to_bool())? p_Val2_10_14_3_cast_fu_23543_p1.read(): p_Val2_16_14_3_fu_23547_p2.read());
}

void Sobel_phase_strm::thread_z_V_14_4_v_cast_cast_fu_29575_p3() {
    z_V_14_4_v_cast_cast_fu_29575_p3 = (!ap_reg_ppstg_dneg_14_4_reg_37732_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_14_4_reg_37732_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_14_5_v_cast_cast_fu_29582_p3() {
    z_V_14_5_v_cast_cast_fu_29582_p3 = (!ap_reg_ppstg_dneg_14_5_reg_37737_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_14_5_reg_37737_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_14_6_v_cast_cast_fu_29589_p3() {
    z_V_14_6_v_cast_cast_fu_29589_p3 = (!dneg_14_6_reg_38969.read()[0].is_01())? sc_lv<7>(): ((dneg_14_6_reg_38969.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_14_7_v_cast_cast_fu_29596_p3() {
    z_V_14_7_v_cast_cast_fu_29596_p3 = (!dneg_14_7_reg_38974.read()[0].is_01())? sc_lv<6>(): ((dneg_14_7_reg_38974.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_14_8_fu_29645_p2() {
    z_V_14_8_fu_29645_p2 = (!tmp284_fu_29620_p2.read().is_01() || !tmp1088_cast_fu_29641_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp284_fu_29620_p2.read()) + sc_bigint<13>(tmp1088_cast_fu_29641_p1.read()));
}

void Sobel_phase_strm::thread_z_V_14_8_v_cast_cast_cast_fu_29603_p3() {
    z_V_14_8_v_cast_cast_cast_fu_29603_p3 = (!dneg_14_8_reg_38979.read()[0].is_01())? sc_lv<6>(): ((dneg_14_8_reg_38979.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_15_1_fu_23666_p3() {
    z_V_15_1_fu_23666_p3 = (!ap_reg_ppstg_dneg_15_1_reg_34813_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_15_1_reg_34813_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_15_2_cast_fu_23686_p1() {
    z_V_15_2_cast_fu_23686_p1 = esl_zext<13,12>(z_V_15_2_fu_23680_p2.read());
}

void Sobel_phase_strm::thread_z_V_15_2_fu_23680_p2() {
    z_V_15_2_fu_23680_p2 = (!z_V_15_2_v_cast_cast_fu_23673_p3.read().is_01() || !z_V_15_1_fu_23666_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_15_2_v_cast_cast_fu_23673_p3.read()) + sc_biguint<12>(z_V_15_1_fu_23666_p3.read()));
}

void Sobel_phase_strm::thread_z_V_15_2_v_cast_cast_fu_23673_p3() {
    z_V_15_2_v_cast_cast_fu_23673_p3 = (!ap_reg_ppstg_dneg_15_2_reg_36338_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_15_2_reg_36338_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_15_3_fu_23706_p3() {
    z_V_15_3_fu_23706_p3 = (!ap_reg_ppstg_dneg_15_3_reg_36343_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_15_3_reg_36343_pp0_iter3.read()[0].to_bool())? p_Val2_10_15_3_cast_fu_23696_p1.read(): p_Val2_16_15_3_fu_23700_p2.read());
}

void Sobel_phase_strm::thread_z_V_15_4_v_cast_cast_fu_29702_p3() {
    z_V_15_4_v_cast_cast_fu_29702_p3 = (!ap_reg_ppstg_dneg_15_4_reg_37766_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_15_4_reg_37766_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_15_5_v_cast_cast_fu_29709_p3() {
    z_V_15_5_v_cast_cast_fu_29709_p3 = (!ap_reg_ppstg_dneg_15_5_reg_37771_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_15_5_reg_37771_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_15_6_v_cast_cast_fu_29716_p3() {
    z_V_15_6_v_cast_cast_fu_29716_p3 = (!dneg_15_6_reg_38989.read()[0].is_01())? sc_lv<7>(): ((dneg_15_6_reg_38989.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_15_7_v_cast_cast_fu_29723_p3() {
    z_V_15_7_v_cast_cast_fu_29723_p3 = (!dneg_15_7_reg_38994.read()[0].is_01())? sc_lv<6>(): ((dneg_15_7_reg_38994.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_15_8_fu_29772_p2() {
    z_V_15_8_fu_29772_p2 = (!tmp304_fu_29747_p2.read().is_01() || !tmp1092_cast_fu_29768_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp304_fu_29747_p2.read()) + sc_bigint<13>(tmp1092_cast_fu_29768_p1.read()));
}

void Sobel_phase_strm::thread_z_V_15_8_v_cast_cast_cast_fu_29730_p3() {
    z_V_15_8_v_cast_cast_cast_fu_29730_p3 = (!dneg_15_8_reg_38999.read()[0].is_01())? sc_lv<6>(): ((dneg_15_8_reg_38999.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_16_1_fu_23819_p3() {
    z_V_16_1_fu_23819_p3 = (!ap_reg_ppstg_dneg_16_1_reg_34851_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_16_1_reg_34851_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_16_2_cast_fu_23839_p1() {
    z_V_16_2_cast_fu_23839_p1 = esl_zext<13,12>(z_V_16_2_fu_23833_p2.read());
}

void Sobel_phase_strm::thread_z_V_16_2_fu_23833_p2() {
    z_V_16_2_fu_23833_p2 = (!z_V_16_2_v_cast_cast_fu_23826_p3.read().is_01() || !z_V_16_1_fu_23819_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_16_2_v_cast_cast_fu_23826_p3.read()) + sc_biguint<12>(z_V_16_1_fu_23819_p3.read()));
}

void Sobel_phase_strm::thread_z_V_16_2_v_cast_cast_fu_23826_p3() {
    z_V_16_2_v_cast_cast_fu_23826_p3 = (!ap_reg_ppstg_dneg_16_2_reg_36372_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_16_2_reg_36372_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_16_3_fu_23859_p3() {
    z_V_16_3_fu_23859_p3 = (!ap_reg_ppstg_dneg_16_3_reg_36377_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_16_3_reg_36377_pp0_iter3.read()[0].to_bool())? p_Val2_10_16_3_cast_fu_23849_p1.read(): p_Val2_16_16_3_fu_23853_p2.read());
}

void Sobel_phase_strm::thread_z_V_16_4_v_cast_cast_fu_29829_p3() {
    z_V_16_4_v_cast_cast_fu_29829_p3 = (!ap_reg_ppstg_dneg_16_4_reg_37800_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_16_4_reg_37800_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_16_5_v_cast_cast_fu_29836_p3() {
    z_V_16_5_v_cast_cast_fu_29836_p3 = (!ap_reg_ppstg_dneg_16_5_reg_37805_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_16_5_reg_37805_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_16_6_v_cast_cast_fu_29843_p3() {
    z_V_16_6_v_cast_cast_fu_29843_p3 = (!dneg_16_6_reg_39009.read()[0].is_01())? sc_lv<7>(): ((dneg_16_6_reg_39009.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_16_7_v_cast_cast_fu_29850_p3() {
    z_V_16_7_v_cast_cast_fu_29850_p3 = (!dneg_16_7_reg_39014.read()[0].is_01())? sc_lv<6>(): ((dneg_16_7_reg_39014.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_16_8_fu_29899_p2() {
    z_V_16_8_fu_29899_p2 = (!tmp324_fu_29874_p2.read().is_01() || !tmp1096_cast_fu_29895_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp324_fu_29874_p2.read()) + sc_bigint<13>(tmp1096_cast_fu_29895_p1.read()));
}

void Sobel_phase_strm::thread_z_V_16_8_v_cast_cast_cast_fu_29857_p3() {
    z_V_16_8_v_cast_cast_cast_fu_29857_p3 = (!dneg_16_8_reg_39019.read()[0].is_01())? sc_lv<6>(): ((dneg_16_8_reg_39019.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_17_1_fu_23972_p3() {
    z_V_17_1_fu_23972_p3 = (!ap_reg_ppstg_dneg_17_1_reg_34889_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_17_1_reg_34889_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_17_2_cast_fu_23992_p1() {
    z_V_17_2_cast_fu_23992_p1 = esl_zext<13,12>(z_V_17_2_fu_23986_p2.read());
}

void Sobel_phase_strm::thread_z_V_17_2_fu_23986_p2() {
    z_V_17_2_fu_23986_p2 = (!z_V_17_2_v_cast_cast_fu_23979_p3.read().is_01() || !z_V_17_1_fu_23972_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_17_2_v_cast_cast_fu_23979_p3.read()) + sc_biguint<12>(z_V_17_1_fu_23972_p3.read()));
}

void Sobel_phase_strm::thread_z_V_17_2_v_cast_cast_fu_23979_p3() {
    z_V_17_2_v_cast_cast_fu_23979_p3 = (!ap_reg_ppstg_dneg_17_2_reg_36406_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_17_2_reg_36406_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_17_3_fu_24012_p3() {
    z_V_17_3_fu_24012_p3 = (!ap_reg_ppstg_dneg_17_3_reg_36411_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_17_3_reg_36411_pp0_iter3.read()[0].to_bool())? p_Val2_10_17_3_cast_fu_24002_p1.read(): p_Val2_16_17_3_fu_24006_p2.read());
}

void Sobel_phase_strm::thread_z_V_17_4_v_cast_cast_fu_29956_p3() {
    z_V_17_4_v_cast_cast_fu_29956_p3 = (!ap_reg_ppstg_dneg_17_4_reg_37834_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_17_4_reg_37834_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_17_5_v_cast_cast_fu_29963_p3() {
    z_V_17_5_v_cast_cast_fu_29963_p3 = (!ap_reg_ppstg_dneg_17_5_reg_37839_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_17_5_reg_37839_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_17_6_v_cast_cast_fu_29970_p3() {
    z_V_17_6_v_cast_cast_fu_29970_p3 = (!dneg_17_6_reg_39029.read()[0].is_01())? sc_lv<7>(): ((dneg_17_6_reg_39029.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_17_7_v_cast_cast_fu_29977_p3() {
    z_V_17_7_v_cast_cast_fu_29977_p3 = (!dneg_17_7_reg_39034.read()[0].is_01())? sc_lv<6>(): ((dneg_17_7_reg_39034.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_17_8_fu_30026_p2() {
    z_V_17_8_fu_30026_p2 = (!tmp344_fu_30001_p2.read().is_01() || !tmp1100_cast_fu_30022_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp344_fu_30001_p2.read()) + sc_bigint<13>(tmp1100_cast_fu_30022_p1.read()));
}

void Sobel_phase_strm::thread_z_V_17_8_v_cast_cast_cast_fu_29984_p3() {
    z_V_17_8_v_cast_cast_cast_fu_29984_p3 = (!dneg_17_8_reg_39039.read()[0].is_01())? sc_lv<6>(): ((dneg_17_8_reg_39039.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_18_1_fu_24125_p3() {
    z_V_18_1_fu_24125_p3 = (!ap_reg_ppstg_dneg_18_1_reg_34927_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_18_1_reg_34927_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_18_2_cast_fu_24145_p1() {
    z_V_18_2_cast_fu_24145_p1 = esl_zext<13,12>(z_V_18_2_fu_24139_p2.read());
}

void Sobel_phase_strm::thread_z_V_18_2_fu_24139_p2() {
    z_V_18_2_fu_24139_p2 = (!z_V_18_2_v_cast_cast_fu_24132_p3.read().is_01() || !z_V_18_1_fu_24125_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_18_2_v_cast_cast_fu_24132_p3.read()) + sc_biguint<12>(z_V_18_1_fu_24125_p3.read()));
}

void Sobel_phase_strm::thread_z_V_18_2_v_cast_cast_fu_24132_p3() {
    z_V_18_2_v_cast_cast_fu_24132_p3 = (!ap_reg_ppstg_dneg_18_2_reg_36440_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_18_2_reg_36440_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_18_3_fu_24165_p3() {
    z_V_18_3_fu_24165_p3 = (!ap_reg_ppstg_dneg_18_3_reg_36445_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_18_3_reg_36445_pp0_iter3.read()[0].to_bool())? p_Val2_10_18_3_cast_fu_24155_p1.read(): p_Val2_16_18_3_fu_24159_p2.read());
}

void Sobel_phase_strm::thread_z_V_18_4_v_cast_cast_fu_30083_p3() {
    z_V_18_4_v_cast_cast_fu_30083_p3 = (!ap_reg_ppstg_dneg_18_4_reg_37868_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_18_4_reg_37868_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_18_5_v_cast_cast_fu_30090_p3() {
    z_V_18_5_v_cast_cast_fu_30090_p3 = (!ap_reg_ppstg_dneg_18_5_reg_37873_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_18_5_reg_37873_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_18_6_v_cast_cast_fu_30097_p3() {
    z_V_18_6_v_cast_cast_fu_30097_p3 = (!dneg_18_6_reg_39049.read()[0].is_01())? sc_lv<7>(): ((dneg_18_6_reg_39049.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_18_7_v_cast_cast_fu_30104_p3() {
    z_V_18_7_v_cast_cast_fu_30104_p3 = (!dneg_18_7_reg_39054.read()[0].is_01())? sc_lv<6>(): ((dneg_18_7_reg_39054.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_18_8_fu_30153_p2() {
    z_V_18_8_fu_30153_p2 = (!tmp364_fu_30128_p2.read().is_01() || !tmp1104_cast_fu_30149_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp364_fu_30128_p2.read()) + sc_bigint<13>(tmp1104_cast_fu_30149_p1.read()));
}

void Sobel_phase_strm::thread_z_V_18_8_v_cast_cast_cast_fu_30111_p3() {
    z_V_18_8_v_cast_cast_cast_fu_30111_p3 = (!dneg_18_8_reg_39059.read()[0].is_01())? sc_lv<6>(): ((dneg_18_8_reg_39059.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_19_1_fu_24278_p3() {
    z_V_19_1_fu_24278_p3 = (!ap_reg_ppstg_dneg_19_1_reg_34965_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_19_1_reg_34965_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_19_2_cast_fu_24298_p1() {
    z_V_19_2_cast_fu_24298_p1 = esl_zext<13,12>(z_V_19_2_fu_24292_p2.read());
}

void Sobel_phase_strm::thread_z_V_19_2_fu_24292_p2() {
    z_V_19_2_fu_24292_p2 = (!z_V_19_2_v_cast_cast_fu_24285_p3.read().is_01() || !z_V_19_1_fu_24278_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_19_2_v_cast_cast_fu_24285_p3.read()) + sc_biguint<12>(z_V_19_1_fu_24278_p3.read()));
}

void Sobel_phase_strm::thread_z_V_19_2_v_cast_cast_fu_24285_p3() {
    z_V_19_2_v_cast_cast_fu_24285_p3 = (!ap_reg_ppstg_dneg_19_2_reg_36474_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_19_2_reg_36474_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_19_3_fu_24318_p3() {
    z_V_19_3_fu_24318_p3 = (!ap_reg_ppstg_dneg_19_3_reg_36479_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_19_3_reg_36479_pp0_iter3.read()[0].to_bool())? p_Val2_10_19_3_cast_fu_24308_p1.read(): p_Val2_16_19_3_fu_24312_p2.read());
}

void Sobel_phase_strm::thread_z_V_19_4_v_cast_cast_fu_30210_p3() {
    z_V_19_4_v_cast_cast_fu_30210_p3 = (!ap_reg_ppstg_dneg_19_4_reg_37902_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_19_4_reg_37902_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_19_5_v_cast_cast_fu_30217_p3() {
    z_V_19_5_v_cast_cast_fu_30217_p3 = (!ap_reg_ppstg_dneg_19_5_reg_37907_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_19_5_reg_37907_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_19_6_v_cast_cast_fu_30224_p3() {
    z_V_19_6_v_cast_cast_fu_30224_p3 = (!dneg_19_6_reg_39069.read()[0].is_01())? sc_lv<7>(): ((dneg_19_6_reg_39069.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_19_7_v_cast_cast_fu_30231_p3() {
    z_V_19_7_v_cast_cast_fu_30231_p3 = (!dneg_19_7_reg_39074.read()[0].is_01())? sc_lv<6>(): ((dneg_19_7_reg_39074.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_19_8_fu_30280_p2() {
    z_V_19_8_fu_30280_p2 = (!tmp384_fu_30255_p2.read().is_01() || !tmp1108_cast_fu_30276_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp384_fu_30255_p2.read()) + sc_bigint<13>(tmp1108_cast_fu_30276_p1.read()));
}

void Sobel_phase_strm::thread_z_V_19_8_v_cast_cast_cast_fu_30238_p3() {
    z_V_19_8_v_cast_cast_cast_fu_30238_p3 = (!dneg_19_8_reg_39079.read()[0].is_01())? sc_lv<6>(): ((dneg_19_8_reg_39079.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_1_1_fu_21524_p3() {
    z_V_1_1_fu_21524_p3 = (!ap_reg_ppstg_dneg_1_1_reg_34281_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_1_1_reg_34281_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_1_2_cast_fu_21544_p1() {
    z_V_1_2_cast_fu_21544_p1 = esl_zext<13,12>(z_V_1_2_fu_21538_p2.read());
}

void Sobel_phase_strm::thread_z_V_1_2_fu_21538_p2() {
    z_V_1_2_fu_21538_p2 = (!z_V_1_2_v_cast_cast_fu_21531_p3.read().is_01() || !z_V_1_1_fu_21524_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_1_2_v_cast_cast_fu_21531_p3.read()) + sc_biguint<12>(z_V_1_1_fu_21524_p3.read()));
}

void Sobel_phase_strm::thread_z_V_1_2_v_cast_cast_fu_21531_p3() {
    z_V_1_2_v_cast_cast_fu_21531_p3 = (!ap_reg_ppstg_dneg_1_2_reg_35862_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_1_2_reg_35862_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_1_3_fu_21564_p3() {
    z_V_1_3_fu_21564_p3 = (!ap_reg_ppstg_dneg_1_3_reg_35867_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_1_3_reg_35867_pp0_iter3.read()[0].to_bool())? p_Val2_10_1_3_cast_fu_21554_p1.read(): p_Val2_16_1_3_fu_21558_p2.read());
}

void Sobel_phase_strm::thread_z_V_1_4_v_cast_cast_fu_27924_p3() {
    z_V_1_4_v_cast_cast_fu_27924_p3 = (!ap_reg_ppstg_dneg_1_4_reg_37290_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_1_4_reg_37290_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_1_5_v_cast_cast_fu_27931_p3() {
    z_V_1_5_v_cast_cast_fu_27931_p3 = (!ap_reg_ppstg_dneg_1_5_reg_37295_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_1_5_reg_37295_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_1_6_v_cast_cast_fu_27938_p3() {
    z_V_1_6_v_cast_cast_fu_27938_p3 = (!dneg_1_6_reg_38709.read()[0].is_01())? sc_lv<7>(): ((dneg_1_6_reg_38709.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_1_7_v_cast_cast_fu_27945_p3() {
    z_V_1_7_v_cast_cast_fu_27945_p3 = (!dneg_1_7_reg_38714.read()[0].is_01())? sc_lv<6>(): ((dneg_1_7_reg_38714.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_1_8_fu_27994_p2() {
    z_V_1_8_fu_27994_p2 = (!tmp23_fu_27969_p2.read().is_01() || !tmp1036_cast_fu_27990_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp23_fu_27969_p2.read()) + sc_bigint<13>(tmp1036_cast_fu_27990_p1.read()));
}

void Sobel_phase_strm::thread_z_V_1_8_v_cast_cast_cast_fu_27952_p3() {
    z_V_1_8_v_cast_cast_cast_fu_27952_p3 = (!dneg_1_8_reg_38719.read()[0].is_01())? sc_lv<6>(): ((dneg_1_8_reg_38719.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_20_1_fu_24431_p3() {
    z_V_20_1_fu_24431_p3 = (!ap_reg_ppstg_dneg_20_1_reg_35003_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_20_1_reg_35003_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_20_2_cast_fu_24451_p1() {
    z_V_20_2_cast_fu_24451_p1 = esl_zext<13,12>(z_V_20_2_fu_24445_p2.read());
}

void Sobel_phase_strm::thread_z_V_20_2_fu_24445_p2() {
    z_V_20_2_fu_24445_p2 = (!z_V_20_2_v_cast_cast_fu_24438_p3.read().is_01() || !z_V_20_1_fu_24431_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_20_2_v_cast_cast_fu_24438_p3.read()) + sc_biguint<12>(z_V_20_1_fu_24431_p3.read()));
}

void Sobel_phase_strm::thread_z_V_20_2_v_cast_cast_fu_24438_p3() {
    z_V_20_2_v_cast_cast_fu_24438_p3 = (!ap_reg_ppstg_dneg_20_2_reg_36508_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_20_2_reg_36508_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_20_3_fu_24471_p3() {
    z_V_20_3_fu_24471_p3 = (!ap_reg_ppstg_dneg_20_3_reg_36513_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_20_3_reg_36513_pp0_iter3.read()[0].to_bool())? p_Val2_10_20_3_cast_fu_24461_p1.read(): p_Val2_16_20_3_fu_24465_p2.read());
}

void Sobel_phase_strm::thread_z_V_20_4_v_cast_cast_fu_30337_p3() {
    z_V_20_4_v_cast_cast_fu_30337_p3 = (!ap_reg_ppstg_dneg_20_4_reg_37936_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_20_4_reg_37936_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_20_5_v_cast_cast_fu_30344_p3() {
    z_V_20_5_v_cast_cast_fu_30344_p3 = (!ap_reg_ppstg_dneg_20_5_reg_37941_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_20_5_reg_37941_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_20_6_v_cast_cast_fu_30351_p3() {
    z_V_20_6_v_cast_cast_fu_30351_p3 = (!dneg_20_6_reg_39089.read()[0].is_01())? sc_lv<7>(): ((dneg_20_6_reg_39089.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_20_7_v_cast_cast_fu_30358_p3() {
    z_V_20_7_v_cast_cast_fu_30358_p3 = (!dneg_20_7_reg_39094.read()[0].is_01())? sc_lv<6>(): ((dneg_20_7_reg_39094.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_20_8_fu_30407_p2() {
    z_V_20_8_fu_30407_p2 = (!tmp404_fu_30382_p2.read().is_01() || !tmp1112_cast_fu_30403_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp404_fu_30382_p2.read()) + sc_bigint<13>(tmp1112_cast_fu_30403_p1.read()));
}

void Sobel_phase_strm::thread_z_V_20_8_v_cast_cast_cast_fu_30365_p3() {
    z_V_20_8_v_cast_cast_cast_fu_30365_p3 = (!dneg_20_8_reg_39099.read()[0].is_01())? sc_lv<6>(): ((dneg_20_8_reg_39099.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_21_1_fu_24584_p3() {
    z_V_21_1_fu_24584_p3 = (!ap_reg_ppstg_dneg_21_1_reg_35041_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_21_1_reg_35041_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_21_2_cast_fu_24604_p1() {
    z_V_21_2_cast_fu_24604_p1 = esl_zext<13,12>(z_V_21_2_fu_24598_p2.read());
}

void Sobel_phase_strm::thread_z_V_21_2_fu_24598_p2() {
    z_V_21_2_fu_24598_p2 = (!z_V_21_2_v_cast_cast_fu_24591_p3.read().is_01() || !z_V_21_1_fu_24584_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_21_2_v_cast_cast_fu_24591_p3.read()) + sc_biguint<12>(z_V_21_1_fu_24584_p3.read()));
}

void Sobel_phase_strm::thread_z_V_21_2_v_cast_cast_fu_24591_p3() {
    z_V_21_2_v_cast_cast_fu_24591_p3 = (!ap_reg_ppstg_dneg_21_2_reg_36542_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_21_2_reg_36542_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_21_3_fu_24624_p3() {
    z_V_21_3_fu_24624_p3 = (!ap_reg_ppstg_dneg_21_3_reg_36547_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_21_3_reg_36547_pp0_iter3.read()[0].to_bool())? p_Val2_10_21_3_cast_fu_24614_p1.read(): p_Val2_16_21_3_fu_24618_p2.read());
}

void Sobel_phase_strm::thread_z_V_21_4_v_cast_cast_fu_30464_p3() {
    z_V_21_4_v_cast_cast_fu_30464_p3 = (!ap_reg_ppstg_dneg_21_4_reg_37970_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_21_4_reg_37970_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_21_5_v_cast_cast_fu_30471_p3() {
    z_V_21_5_v_cast_cast_fu_30471_p3 = (!ap_reg_ppstg_dneg_21_5_reg_37975_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_21_5_reg_37975_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

}

