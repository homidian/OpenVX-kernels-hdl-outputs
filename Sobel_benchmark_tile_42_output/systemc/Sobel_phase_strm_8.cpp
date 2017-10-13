#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_z_V_21_6_v_cast_cast_fu_30478_p3() {
    z_V_21_6_v_cast_cast_fu_30478_p3 = (!dneg_21_6_reg_39109.read()[0].is_01())? sc_lv<7>(): ((dneg_21_6_reg_39109.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_21_7_v_cast_cast_fu_30485_p3() {
    z_V_21_7_v_cast_cast_fu_30485_p3 = (!dneg_21_7_reg_39114.read()[0].is_01())? sc_lv<6>(): ((dneg_21_7_reg_39114.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_21_8_fu_30534_p2() {
    z_V_21_8_fu_30534_p2 = (!tmp424_fu_30509_p2.read().is_01() || !tmp1116_cast_fu_30530_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp424_fu_30509_p2.read()) + sc_bigint<13>(tmp1116_cast_fu_30530_p1.read()));
}

void Sobel_phase_strm::thread_z_V_21_8_v_cast_cast_cast_fu_30492_p3() {
    z_V_21_8_v_cast_cast_cast_fu_30492_p3 = (!dneg_21_8_reg_39119.read()[0].is_01())? sc_lv<6>(): ((dneg_21_8_reg_39119.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_22_1_fu_24737_p3() {
    z_V_22_1_fu_24737_p3 = (!ap_reg_ppstg_dneg_22_1_reg_35079_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_22_1_reg_35079_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_22_2_cast_fu_24757_p1() {
    z_V_22_2_cast_fu_24757_p1 = esl_zext<13,12>(z_V_22_2_fu_24751_p2.read());
}

void Sobel_phase_strm::thread_z_V_22_2_fu_24751_p2() {
    z_V_22_2_fu_24751_p2 = (!z_V_22_2_v_cast_cast_fu_24744_p3.read().is_01() || !z_V_22_1_fu_24737_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_22_2_v_cast_cast_fu_24744_p3.read()) + sc_biguint<12>(z_V_22_1_fu_24737_p3.read()));
}

void Sobel_phase_strm::thread_z_V_22_2_v_cast_cast_fu_24744_p3() {
    z_V_22_2_v_cast_cast_fu_24744_p3 = (!ap_reg_ppstg_dneg_22_2_reg_36576_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_22_2_reg_36576_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_22_3_fu_24777_p3() {
    z_V_22_3_fu_24777_p3 = (!ap_reg_ppstg_dneg_22_3_reg_36581_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_22_3_reg_36581_pp0_iter3.read()[0].to_bool())? p_Val2_10_22_3_cast_fu_24767_p1.read(): p_Val2_16_22_3_fu_24771_p2.read());
}

void Sobel_phase_strm::thread_z_V_22_4_v_cast_cast_fu_30591_p3() {
    z_V_22_4_v_cast_cast_fu_30591_p3 = (!ap_reg_ppstg_dneg_22_4_reg_38004_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_22_4_reg_38004_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_22_5_v_cast_cast_fu_30598_p3() {
    z_V_22_5_v_cast_cast_fu_30598_p3 = (!ap_reg_ppstg_dneg_22_5_reg_38009_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_22_5_reg_38009_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_22_6_v_cast_cast_fu_30605_p3() {
    z_V_22_6_v_cast_cast_fu_30605_p3 = (!dneg_22_6_reg_39129.read()[0].is_01())? sc_lv<7>(): ((dneg_22_6_reg_39129.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_22_7_v_cast_cast_fu_30612_p3() {
    z_V_22_7_v_cast_cast_fu_30612_p3 = (!dneg_22_7_reg_39134.read()[0].is_01())? sc_lv<6>(): ((dneg_22_7_reg_39134.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_22_8_fu_30661_p2() {
    z_V_22_8_fu_30661_p2 = (!tmp444_fu_30636_p2.read().is_01() || !tmp1120_cast_fu_30657_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp444_fu_30636_p2.read()) + sc_bigint<13>(tmp1120_cast_fu_30657_p1.read()));
}

void Sobel_phase_strm::thread_z_V_22_8_v_cast_cast_cast_fu_30619_p3() {
    z_V_22_8_v_cast_cast_cast_fu_30619_p3 = (!dneg_22_8_reg_39139.read()[0].is_01())? sc_lv<6>(): ((dneg_22_8_reg_39139.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_23_1_fu_24890_p3() {
    z_V_23_1_fu_24890_p3 = (!ap_reg_ppstg_dneg_23_1_reg_35117_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_23_1_reg_35117_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_23_2_cast_fu_24910_p1() {
    z_V_23_2_cast_fu_24910_p1 = esl_zext<13,12>(z_V_23_2_fu_24904_p2.read());
}

void Sobel_phase_strm::thread_z_V_23_2_fu_24904_p2() {
    z_V_23_2_fu_24904_p2 = (!z_V_23_2_v_cast_cast_fu_24897_p3.read().is_01() || !z_V_23_1_fu_24890_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_23_2_v_cast_cast_fu_24897_p3.read()) + sc_biguint<12>(z_V_23_1_fu_24890_p3.read()));
}

void Sobel_phase_strm::thread_z_V_23_2_v_cast_cast_fu_24897_p3() {
    z_V_23_2_v_cast_cast_fu_24897_p3 = (!ap_reg_ppstg_dneg_23_2_reg_36610_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_23_2_reg_36610_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_23_3_fu_24930_p3() {
    z_V_23_3_fu_24930_p3 = (!ap_reg_ppstg_dneg_23_3_reg_36615_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_23_3_reg_36615_pp0_iter3.read()[0].to_bool())? p_Val2_10_23_3_cast_fu_24920_p1.read(): p_Val2_16_23_3_fu_24924_p2.read());
}

void Sobel_phase_strm::thread_z_V_23_4_v_cast_cast_fu_30718_p3() {
    z_V_23_4_v_cast_cast_fu_30718_p3 = (!ap_reg_ppstg_dneg_23_4_reg_38038_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_23_4_reg_38038_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_23_5_v_cast_cast_fu_30725_p3() {
    z_V_23_5_v_cast_cast_fu_30725_p3 = (!ap_reg_ppstg_dneg_23_5_reg_38043_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_23_5_reg_38043_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_23_6_v_cast_cast_fu_30732_p3() {
    z_V_23_6_v_cast_cast_fu_30732_p3 = (!dneg_23_6_reg_39149.read()[0].is_01())? sc_lv<7>(): ((dneg_23_6_reg_39149.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_23_7_v_cast_cast_fu_30739_p3() {
    z_V_23_7_v_cast_cast_fu_30739_p3 = (!dneg_23_7_reg_39154.read()[0].is_01())? sc_lv<6>(): ((dneg_23_7_reg_39154.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_23_8_fu_30788_p2() {
    z_V_23_8_fu_30788_p2 = (!tmp464_fu_30763_p2.read().is_01() || !tmp1124_cast_fu_30784_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp464_fu_30763_p2.read()) + sc_bigint<13>(tmp1124_cast_fu_30784_p1.read()));
}

void Sobel_phase_strm::thread_z_V_23_8_v_cast_cast_cast_fu_30746_p3() {
    z_V_23_8_v_cast_cast_cast_fu_30746_p3 = (!dneg_23_8_reg_39159.read()[0].is_01())? sc_lv<6>(): ((dneg_23_8_reg_39159.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_24_1_fu_25043_p3() {
    z_V_24_1_fu_25043_p3 = (!ap_reg_ppstg_dneg_24_1_reg_35155_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_24_1_reg_35155_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_24_2_cast_fu_25063_p1() {
    z_V_24_2_cast_fu_25063_p1 = esl_zext<13,12>(z_V_24_2_fu_25057_p2.read());
}

void Sobel_phase_strm::thread_z_V_24_2_fu_25057_p2() {
    z_V_24_2_fu_25057_p2 = (!z_V_24_2_v_cast_cast_fu_25050_p3.read().is_01() || !z_V_24_1_fu_25043_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_24_2_v_cast_cast_fu_25050_p3.read()) + sc_biguint<12>(z_V_24_1_fu_25043_p3.read()));
}

void Sobel_phase_strm::thread_z_V_24_2_v_cast_cast_fu_25050_p3() {
    z_V_24_2_v_cast_cast_fu_25050_p3 = (!ap_reg_ppstg_dneg_24_2_reg_36644_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_24_2_reg_36644_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_24_3_fu_25083_p3() {
    z_V_24_3_fu_25083_p3 = (!ap_reg_ppstg_dneg_24_3_reg_36649_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_24_3_reg_36649_pp0_iter3.read()[0].to_bool())? p_Val2_10_24_3_cast_fu_25073_p1.read(): p_Val2_16_24_3_fu_25077_p2.read());
}

void Sobel_phase_strm::thread_z_V_24_4_v_cast_cast_fu_30845_p3() {
    z_V_24_4_v_cast_cast_fu_30845_p3 = (!ap_reg_ppstg_dneg_24_4_reg_38072_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_24_4_reg_38072_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_24_5_v_cast_cast_fu_30852_p3() {
    z_V_24_5_v_cast_cast_fu_30852_p3 = (!ap_reg_ppstg_dneg_24_5_reg_38077_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_24_5_reg_38077_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_24_6_v_cast_cast_fu_30859_p3() {
    z_V_24_6_v_cast_cast_fu_30859_p3 = (!dneg_24_6_reg_39169.read()[0].is_01())? sc_lv<7>(): ((dneg_24_6_reg_39169.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_24_7_v_cast_cast_fu_30866_p3() {
    z_V_24_7_v_cast_cast_fu_30866_p3 = (!dneg_24_7_reg_39174.read()[0].is_01())? sc_lv<6>(): ((dneg_24_7_reg_39174.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_24_8_fu_30915_p2() {
    z_V_24_8_fu_30915_p2 = (!tmp484_fu_30890_p2.read().is_01() || !tmp1128_cast_fu_30911_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp484_fu_30890_p2.read()) + sc_bigint<13>(tmp1128_cast_fu_30911_p1.read()));
}

void Sobel_phase_strm::thread_z_V_24_8_v_cast_cast_cast_fu_30873_p3() {
    z_V_24_8_v_cast_cast_cast_fu_30873_p3 = (!dneg_24_8_reg_39179.read()[0].is_01())? sc_lv<6>(): ((dneg_24_8_reg_39179.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_25_1_fu_25196_p3() {
    z_V_25_1_fu_25196_p3 = (!ap_reg_ppstg_dneg_25_1_reg_35193_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_25_1_reg_35193_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_25_2_cast_fu_25216_p1() {
    z_V_25_2_cast_fu_25216_p1 = esl_zext<13,12>(z_V_25_2_fu_25210_p2.read());
}

void Sobel_phase_strm::thread_z_V_25_2_fu_25210_p2() {
    z_V_25_2_fu_25210_p2 = (!z_V_25_2_v_cast_cast_fu_25203_p3.read().is_01() || !z_V_25_1_fu_25196_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_25_2_v_cast_cast_fu_25203_p3.read()) + sc_biguint<12>(z_V_25_1_fu_25196_p3.read()));
}

void Sobel_phase_strm::thread_z_V_25_2_v_cast_cast_fu_25203_p3() {
    z_V_25_2_v_cast_cast_fu_25203_p3 = (!ap_reg_ppstg_dneg_25_2_reg_36678_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_25_2_reg_36678_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_25_3_fu_25236_p3() {
    z_V_25_3_fu_25236_p3 = (!ap_reg_ppstg_dneg_25_3_reg_36683_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_25_3_reg_36683_pp0_iter3.read()[0].to_bool())? p_Val2_10_25_3_cast_fu_25226_p1.read(): p_Val2_16_25_3_fu_25230_p2.read());
}

void Sobel_phase_strm::thread_z_V_25_4_v_cast_cast_fu_30972_p3() {
    z_V_25_4_v_cast_cast_fu_30972_p3 = (!ap_reg_ppstg_dneg_25_4_reg_38106_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_25_4_reg_38106_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_25_5_v_cast_cast_fu_30979_p3() {
    z_V_25_5_v_cast_cast_fu_30979_p3 = (!ap_reg_ppstg_dneg_25_5_reg_38111_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_25_5_reg_38111_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_25_6_v_cast_cast_fu_30986_p3() {
    z_V_25_6_v_cast_cast_fu_30986_p3 = (!dneg_25_6_reg_39189.read()[0].is_01())? sc_lv<7>(): ((dneg_25_6_reg_39189.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_25_7_v_cast_cast_fu_30993_p3() {
    z_V_25_7_v_cast_cast_fu_30993_p3 = (!dneg_25_7_reg_39194.read()[0].is_01())? sc_lv<6>(): ((dneg_25_7_reg_39194.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_25_8_fu_31042_p2() {
    z_V_25_8_fu_31042_p2 = (!tmp504_fu_31017_p2.read().is_01() || !tmp1132_cast_fu_31038_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp504_fu_31017_p2.read()) + sc_bigint<13>(tmp1132_cast_fu_31038_p1.read()));
}

void Sobel_phase_strm::thread_z_V_25_8_v_cast_cast_cast_fu_31000_p3() {
    z_V_25_8_v_cast_cast_cast_fu_31000_p3 = (!dneg_25_8_reg_39199.read()[0].is_01())? sc_lv<6>(): ((dneg_25_8_reg_39199.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_26_1_fu_25349_p3() {
    z_V_26_1_fu_25349_p3 = (!ap_reg_ppstg_dneg_26_1_reg_35231_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_26_1_reg_35231_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_26_2_cast_fu_25369_p1() {
    z_V_26_2_cast_fu_25369_p1 = esl_zext<13,12>(z_V_26_2_fu_25363_p2.read());
}

void Sobel_phase_strm::thread_z_V_26_2_fu_25363_p2() {
    z_V_26_2_fu_25363_p2 = (!z_V_26_2_v_cast_cast_fu_25356_p3.read().is_01() || !z_V_26_1_fu_25349_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_26_2_v_cast_cast_fu_25356_p3.read()) + sc_biguint<12>(z_V_26_1_fu_25349_p3.read()));
}

void Sobel_phase_strm::thread_z_V_26_2_v_cast_cast_fu_25356_p3() {
    z_V_26_2_v_cast_cast_fu_25356_p3 = (!ap_reg_ppstg_dneg_26_2_reg_36712_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_26_2_reg_36712_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_26_3_fu_25389_p3() {
    z_V_26_3_fu_25389_p3 = (!ap_reg_ppstg_dneg_26_3_reg_36717_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_26_3_reg_36717_pp0_iter3.read()[0].to_bool())? p_Val2_10_26_3_cast_fu_25379_p1.read(): p_Val2_16_26_3_fu_25383_p2.read());
}

void Sobel_phase_strm::thread_z_V_26_4_v_cast_cast_fu_31099_p3() {
    z_V_26_4_v_cast_cast_fu_31099_p3 = (!ap_reg_ppstg_dneg_26_4_reg_38140_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_26_4_reg_38140_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_26_5_v_cast_cast_fu_31106_p3() {
    z_V_26_5_v_cast_cast_fu_31106_p3 = (!ap_reg_ppstg_dneg_26_5_reg_38145_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_26_5_reg_38145_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_26_6_v_cast_cast_fu_31113_p3() {
    z_V_26_6_v_cast_cast_fu_31113_p3 = (!dneg_26_6_reg_39209.read()[0].is_01())? sc_lv<7>(): ((dneg_26_6_reg_39209.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_26_7_v_cast_cast_fu_31120_p3() {
    z_V_26_7_v_cast_cast_fu_31120_p3 = (!dneg_26_7_reg_39214.read()[0].is_01())? sc_lv<6>(): ((dneg_26_7_reg_39214.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_26_8_fu_31169_p2() {
    z_V_26_8_fu_31169_p2 = (!tmp524_fu_31144_p2.read().is_01() || !tmp1136_cast_fu_31165_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp524_fu_31144_p2.read()) + sc_bigint<13>(tmp1136_cast_fu_31165_p1.read()));
}

void Sobel_phase_strm::thread_z_V_26_8_v_cast_cast_cast_fu_31127_p3() {
    z_V_26_8_v_cast_cast_cast_fu_31127_p3 = (!dneg_26_8_reg_39219.read()[0].is_01())? sc_lv<6>(): ((dneg_26_8_reg_39219.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_27_1_fu_25502_p3() {
    z_V_27_1_fu_25502_p3 = (!ap_reg_ppstg_dneg_27_1_reg_35269_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_27_1_reg_35269_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_27_2_cast_fu_25522_p1() {
    z_V_27_2_cast_fu_25522_p1 = esl_zext<13,12>(z_V_27_2_fu_25516_p2.read());
}

void Sobel_phase_strm::thread_z_V_27_2_fu_25516_p2() {
    z_V_27_2_fu_25516_p2 = (!z_V_27_2_v_cast_cast_fu_25509_p3.read().is_01() || !z_V_27_1_fu_25502_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_27_2_v_cast_cast_fu_25509_p3.read()) + sc_biguint<12>(z_V_27_1_fu_25502_p3.read()));
}

void Sobel_phase_strm::thread_z_V_27_2_v_cast_cast_fu_25509_p3() {
    z_V_27_2_v_cast_cast_fu_25509_p3 = (!ap_reg_ppstg_dneg_27_2_reg_36746_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_27_2_reg_36746_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_27_3_fu_25542_p3() {
    z_V_27_3_fu_25542_p3 = (!ap_reg_ppstg_dneg_27_3_reg_36751_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_27_3_reg_36751_pp0_iter3.read()[0].to_bool())? p_Val2_10_27_3_cast_fu_25532_p1.read(): p_Val2_16_27_3_fu_25536_p2.read());
}

void Sobel_phase_strm::thread_z_V_27_4_v_cast_cast_fu_31226_p3() {
    z_V_27_4_v_cast_cast_fu_31226_p3 = (!ap_reg_ppstg_dneg_27_4_reg_38174_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_27_4_reg_38174_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_27_5_v_cast_cast_fu_31233_p3() {
    z_V_27_5_v_cast_cast_fu_31233_p3 = (!ap_reg_ppstg_dneg_27_5_reg_38179_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_27_5_reg_38179_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_27_6_v_cast_cast_fu_31240_p3() {
    z_V_27_6_v_cast_cast_fu_31240_p3 = (!dneg_27_6_reg_39229.read()[0].is_01())? sc_lv<7>(): ((dneg_27_6_reg_39229.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_27_7_v_cast_cast_fu_31247_p3() {
    z_V_27_7_v_cast_cast_fu_31247_p3 = (!dneg_27_7_reg_39234.read()[0].is_01())? sc_lv<6>(): ((dneg_27_7_reg_39234.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_27_8_fu_31296_p2() {
    z_V_27_8_fu_31296_p2 = (!tmp544_fu_31271_p2.read().is_01() || !tmp1140_cast_fu_31292_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp544_fu_31271_p2.read()) + sc_bigint<13>(tmp1140_cast_fu_31292_p1.read()));
}

void Sobel_phase_strm::thread_z_V_27_8_v_cast_cast_cast_fu_31254_p3() {
    z_V_27_8_v_cast_cast_cast_fu_31254_p3 = (!dneg_27_8_reg_39239.read()[0].is_01())? sc_lv<6>(): ((dneg_27_8_reg_39239.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_28_1_fu_25655_p3() {
    z_V_28_1_fu_25655_p3 = (!ap_reg_ppstg_dneg_28_1_reg_35307_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_28_1_reg_35307_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_28_2_cast_fu_25675_p1() {
    z_V_28_2_cast_fu_25675_p1 = esl_zext<13,12>(z_V_28_2_fu_25669_p2.read());
}

void Sobel_phase_strm::thread_z_V_28_2_fu_25669_p2() {
    z_V_28_2_fu_25669_p2 = (!z_V_28_2_v_cast_cast_fu_25662_p3.read().is_01() || !z_V_28_1_fu_25655_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_28_2_v_cast_cast_fu_25662_p3.read()) + sc_biguint<12>(z_V_28_1_fu_25655_p3.read()));
}

void Sobel_phase_strm::thread_z_V_28_2_v_cast_cast_fu_25662_p3() {
    z_V_28_2_v_cast_cast_fu_25662_p3 = (!ap_reg_ppstg_dneg_28_2_reg_36780_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_28_2_reg_36780_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_28_3_fu_25695_p3() {
    z_V_28_3_fu_25695_p3 = (!ap_reg_ppstg_dneg_28_3_reg_36785_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_28_3_reg_36785_pp0_iter3.read()[0].to_bool())? p_Val2_10_28_3_cast_fu_25685_p1.read(): p_Val2_16_28_3_fu_25689_p2.read());
}

void Sobel_phase_strm::thread_z_V_28_4_v_cast_cast_fu_31353_p3() {
    z_V_28_4_v_cast_cast_fu_31353_p3 = (!ap_reg_ppstg_dneg_28_4_reg_38208_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_28_4_reg_38208_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_28_5_v_cast_cast_fu_31360_p3() {
    z_V_28_5_v_cast_cast_fu_31360_p3 = (!ap_reg_ppstg_dneg_28_5_reg_38213_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_28_5_reg_38213_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_28_6_v_cast_cast_fu_31367_p3() {
    z_V_28_6_v_cast_cast_fu_31367_p3 = (!dneg_28_6_reg_39249.read()[0].is_01())? sc_lv<7>(): ((dneg_28_6_reg_39249.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_28_7_v_cast_cast_fu_31374_p3() {
    z_V_28_7_v_cast_cast_fu_31374_p3 = (!dneg_28_7_reg_39254.read()[0].is_01())? sc_lv<6>(): ((dneg_28_7_reg_39254.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_28_8_fu_31423_p2() {
    z_V_28_8_fu_31423_p2 = (!tmp564_fu_31398_p2.read().is_01() || !tmp1144_cast_fu_31419_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp564_fu_31398_p2.read()) + sc_bigint<13>(tmp1144_cast_fu_31419_p1.read()));
}

void Sobel_phase_strm::thread_z_V_28_8_v_cast_cast_cast_fu_31381_p3() {
    z_V_28_8_v_cast_cast_cast_fu_31381_p3 = (!dneg_28_8_reg_39259.read()[0].is_01())? sc_lv<6>(): ((dneg_28_8_reg_39259.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_29_1_fu_25808_p3() {
    z_V_29_1_fu_25808_p3 = (!ap_reg_ppstg_dneg_29_1_reg_35345_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_29_1_reg_35345_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_29_2_cast_fu_25828_p1() {
    z_V_29_2_cast_fu_25828_p1 = esl_zext<13,12>(z_V_29_2_fu_25822_p2.read());
}

void Sobel_phase_strm::thread_z_V_29_2_fu_25822_p2() {
    z_V_29_2_fu_25822_p2 = (!z_V_29_2_v_cast_cast_fu_25815_p3.read().is_01() || !z_V_29_1_fu_25808_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_29_2_v_cast_cast_fu_25815_p3.read()) + sc_biguint<12>(z_V_29_1_fu_25808_p3.read()));
}

void Sobel_phase_strm::thread_z_V_29_2_v_cast_cast_fu_25815_p3() {
    z_V_29_2_v_cast_cast_fu_25815_p3 = (!ap_reg_ppstg_dneg_29_2_reg_36814_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_29_2_reg_36814_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_29_3_fu_25848_p3() {
    z_V_29_3_fu_25848_p3 = (!ap_reg_ppstg_dneg_29_3_reg_36819_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_29_3_reg_36819_pp0_iter3.read()[0].to_bool())? p_Val2_10_29_3_cast_fu_25838_p1.read(): p_Val2_16_29_3_fu_25842_p2.read());
}

void Sobel_phase_strm::thread_z_V_29_4_v_cast_cast_fu_31480_p3() {
    z_V_29_4_v_cast_cast_fu_31480_p3 = (!ap_reg_ppstg_dneg_29_4_reg_38242_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_29_4_reg_38242_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_29_5_v_cast_cast_fu_31487_p3() {
    z_V_29_5_v_cast_cast_fu_31487_p3 = (!ap_reg_ppstg_dneg_29_5_reg_38247_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_29_5_reg_38247_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_29_6_v_cast_cast_fu_31494_p3() {
    z_V_29_6_v_cast_cast_fu_31494_p3 = (!dneg_29_6_reg_39269.read()[0].is_01())? sc_lv<7>(): ((dneg_29_6_reg_39269.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_29_7_v_cast_cast_fu_31501_p3() {
    z_V_29_7_v_cast_cast_fu_31501_p3 = (!dneg_29_7_reg_39274.read()[0].is_01())? sc_lv<6>(): ((dneg_29_7_reg_39274.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_29_8_fu_31550_p2() {
    z_V_29_8_fu_31550_p2 = (!tmp584_fu_31525_p2.read().is_01() || !tmp1148_cast_fu_31546_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp584_fu_31525_p2.read()) + sc_bigint<13>(tmp1148_cast_fu_31546_p1.read()));
}

void Sobel_phase_strm::thread_z_V_29_8_v_cast_cast_cast_fu_31508_p3() {
    z_V_29_8_v_cast_cast_cast_fu_31508_p3 = (!dneg_29_8_reg_39279.read()[0].is_01())? sc_lv<6>(): ((dneg_29_8_reg_39279.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_2_1_fu_21677_p3() {
    z_V_2_1_fu_21677_p3 = (!ap_reg_ppstg_dneg_2_1_reg_34319_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_2_1_reg_34319_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_2_2_cast_fu_21697_p1() {
    z_V_2_2_cast_fu_21697_p1 = esl_zext<13,12>(z_V_2_2_fu_21691_p2.read());
}

void Sobel_phase_strm::thread_z_V_2_2_fu_21691_p2() {
    z_V_2_2_fu_21691_p2 = (!z_V_2_2_v_cast_cast_fu_21684_p3.read().is_01() || !z_V_2_1_fu_21677_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_2_2_v_cast_cast_fu_21684_p3.read()) + sc_biguint<12>(z_V_2_1_fu_21677_p3.read()));
}

void Sobel_phase_strm::thread_z_V_2_2_v_cast_cast_fu_21684_p3() {
    z_V_2_2_v_cast_cast_fu_21684_p3 = (!ap_reg_ppstg_dneg_2_2_reg_35896_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_2_2_reg_35896_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_2_3_fu_21717_p3() {
    z_V_2_3_fu_21717_p3 = (!ap_reg_ppstg_dneg_2_3_reg_35901_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_2_3_reg_35901_pp0_iter3.read()[0].to_bool())? p_Val2_10_2_3_cast_fu_21707_p1.read(): p_Val2_16_2_3_fu_21711_p2.read());
}

void Sobel_phase_strm::thread_z_V_2_4_v_cast_cast_fu_28051_p3() {
    z_V_2_4_v_cast_cast_fu_28051_p3 = (!ap_reg_ppstg_dneg_2_4_reg_37324_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_2_4_reg_37324_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_2_5_v_cast_cast_fu_28058_p3() {
    z_V_2_5_v_cast_cast_fu_28058_p3 = (!ap_reg_ppstg_dneg_2_5_reg_37329_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_2_5_reg_37329_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_2_6_v_cast_cast_fu_28065_p3() {
    z_V_2_6_v_cast_cast_fu_28065_p3 = (!dneg_2_6_reg_38729.read()[0].is_01())? sc_lv<7>(): ((dneg_2_6_reg_38729.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_2_7_v_cast_cast_fu_28072_p3() {
    z_V_2_7_v_cast_cast_fu_28072_p3 = (!dneg_2_7_reg_38734.read()[0].is_01())? sc_lv<6>(): ((dneg_2_7_reg_38734.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_2_8_fu_28121_p2() {
    z_V_2_8_fu_28121_p2 = (!tmp44_fu_28096_p2.read().is_01() || !tmp1040_cast_fu_28117_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp44_fu_28096_p2.read()) + sc_bigint<13>(tmp1040_cast_fu_28117_p1.read()));
}

void Sobel_phase_strm::thread_z_V_2_8_v_cast_cast_cast_fu_28079_p3() {
    z_V_2_8_v_cast_cast_cast_fu_28079_p3 = (!dneg_2_8_reg_38739.read()[0].is_01())? sc_lv<6>(): ((dneg_2_8_reg_38739.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_30_1_fu_25961_p3() {
    z_V_30_1_fu_25961_p3 = (!ap_reg_ppstg_dneg_30_1_reg_35383_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_30_1_reg_35383_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_30_2_cast_fu_25981_p1() {
    z_V_30_2_cast_fu_25981_p1 = esl_zext<13,12>(z_V_30_2_fu_25975_p2.read());
}

void Sobel_phase_strm::thread_z_V_30_2_fu_25975_p2() {
    z_V_30_2_fu_25975_p2 = (!z_V_30_2_v_cast_cast_fu_25968_p3.read().is_01() || !z_V_30_1_fu_25961_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_30_2_v_cast_cast_fu_25968_p3.read()) + sc_biguint<12>(z_V_30_1_fu_25961_p3.read()));
}

void Sobel_phase_strm::thread_z_V_30_2_v_cast_cast_fu_25968_p3() {
    z_V_30_2_v_cast_cast_fu_25968_p3 = (!ap_reg_ppstg_dneg_30_2_reg_36848_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_30_2_reg_36848_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_30_3_fu_26001_p3() {
    z_V_30_3_fu_26001_p3 = (!ap_reg_ppstg_dneg_30_3_reg_36853_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_30_3_reg_36853_pp0_iter3.read()[0].to_bool())? p_Val2_10_30_3_cast_fu_25991_p1.read(): p_Val2_16_30_3_fu_25995_p2.read());
}

void Sobel_phase_strm::thread_z_V_30_4_v_cast_cast_fu_31607_p3() {
    z_V_30_4_v_cast_cast_fu_31607_p3 = (!ap_reg_ppstg_dneg_30_4_reg_38276_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_30_4_reg_38276_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_30_5_v_cast_cast_fu_31614_p3() {
    z_V_30_5_v_cast_cast_fu_31614_p3 = (!ap_reg_ppstg_dneg_30_5_reg_38281_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_30_5_reg_38281_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_30_6_v_cast_cast_fu_31621_p3() {
    z_V_30_6_v_cast_cast_fu_31621_p3 = (!dneg_30_6_reg_39289.read()[0].is_01())? sc_lv<7>(): ((dneg_30_6_reg_39289.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_30_7_v_cast_cast_fu_31628_p3() {
    z_V_30_7_v_cast_cast_fu_31628_p3 = (!dneg_30_7_reg_39294.read()[0].is_01())? sc_lv<6>(): ((dneg_30_7_reg_39294.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_30_8_fu_31677_p2() {
    z_V_30_8_fu_31677_p2 = (!tmp604_fu_31652_p2.read().is_01() || !tmp1152_cast_fu_31673_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp604_fu_31652_p2.read()) + sc_bigint<13>(tmp1152_cast_fu_31673_p1.read()));
}

void Sobel_phase_strm::thread_z_V_30_8_v_cast_cast_cast_fu_31635_p3() {
    z_V_30_8_v_cast_cast_cast_fu_31635_p3 = (!dneg_30_8_reg_39299.read()[0].is_01())? sc_lv<6>(): ((dneg_30_8_reg_39299.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_31_1_fu_26114_p3() {
    z_V_31_1_fu_26114_p3 = (!ap_reg_ppstg_dneg_31_1_reg_35421_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_31_1_reg_35421_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_31_2_cast_fu_26134_p1() {
    z_V_31_2_cast_fu_26134_p1 = esl_zext<13,12>(z_V_31_2_fu_26128_p2.read());
}

void Sobel_phase_strm::thread_z_V_31_2_fu_26128_p2() {
    z_V_31_2_fu_26128_p2 = (!z_V_31_2_v_cast_cast_fu_26121_p3.read().is_01() || !z_V_31_1_fu_26114_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_31_2_v_cast_cast_fu_26121_p3.read()) + sc_biguint<12>(z_V_31_1_fu_26114_p3.read()));
}

void Sobel_phase_strm::thread_z_V_31_2_v_cast_cast_fu_26121_p3() {
    z_V_31_2_v_cast_cast_fu_26121_p3 = (!ap_reg_ppstg_dneg_31_2_reg_36882_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_31_2_reg_36882_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_31_3_fu_26154_p3() {
    z_V_31_3_fu_26154_p3 = (!ap_reg_ppstg_dneg_31_3_reg_36887_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_31_3_reg_36887_pp0_iter3.read()[0].to_bool())? p_Val2_10_31_3_cast_fu_26144_p1.read(): p_Val2_16_31_3_fu_26148_p2.read());
}

void Sobel_phase_strm::thread_z_V_31_4_v_cast_cast_fu_31734_p3() {
    z_V_31_4_v_cast_cast_fu_31734_p3 = (!ap_reg_ppstg_dneg_31_4_reg_38310_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_31_4_reg_38310_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_31_5_v_cast_cast_fu_31741_p3() {
    z_V_31_5_v_cast_cast_fu_31741_p3 = (!ap_reg_ppstg_dneg_31_5_reg_38315_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_31_5_reg_38315_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_31_6_v_cast_cast_fu_31748_p3() {
    z_V_31_6_v_cast_cast_fu_31748_p3 = (!dneg_31_6_reg_39309.read()[0].is_01())? sc_lv<7>(): ((dneg_31_6_reg_39309.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_31_7_v_cast_cast_fu_31755_p3() {
    z_V_31_7_v_cast_cast_fu_31755_p3 = (!dneg_31_7_reg_39314.read()[0].is_01())? sc_lv<6>(): ((dneg_31_7_reg_39314.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_31_8_fu_31804_p2() {
    z_V_31_8_fu_31804_p2 = (!tmp624_fu_31779_p2.read().is_01() || !tmp1156_cast_fu_31800_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp624_fu_31779_p2.read()) + sc_bigint<13>(tmp1156_cast_fu_31800_p1.read()));
}

void Sobel_phase_strm::thread_z_V_31_8_v_cast_cast_cast_fu_31762_p3() {
    z_V_31_8_v_cast_cast_cast_fu_31762_p3 = (!dneg_31_8_reg_39319.read()[0].is_01())? sc_lv<6>(): ((dneg_31_8_reg_39319.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_32_1_fu_26267_p3() {
    z_V_32_1_fu_26267_p3 = (!ap_reg_ppstg_dneg_32_1_reg_35459_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_32_1_reg_35459_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_32_2_cast_fu_26287_p1() {
    z_V_32_2_cast_fu_26287_p1 = esl_zext<13,12>(z_V_32_2_fu_26281_p2.read());
}

void Sobel_phase_strm::thread_z_V_32_2_fu_26281_p2() {
    z_V_32_2_fu_26281_p2 = (!z_V_32_2_v_cast_cast_fu_26274_p3.read().is_01() || !z_V_32_1_fu_26267_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_32_2_v_cast_cast_fu_26274_p3.read()) + sc_biguint<12>(z_V_32_1_fu_26267_p3.read()));
}

void Sobel_phase_strm::thread_z_V_32_2_v_cast_cast_fu_26274_p3() {
    z_V_32_2_v_cast_cast_fu_26274_p3 = (!ap_reg_ppstg_dneg_32_2_reg_36916_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_32_2_reg_36916_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_32_3_fu_26307_p3() {
    z_V_32_3_fu_26307_p3 = (!ap_reg_ppstg_dneg_32_3_reg_36921_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_32_3_reg_36921_pp0_iter3.read()[0].to_bool())? p_Val2_10_32_3_cast_fu_26297_p1.read(): p_Val2_16_32_3_fu_26301_p2.read());
}

void Sobel_phase_strm::thread_z_V_32_4_v_cast_cast_fu_31861_p3() {
    z_V_32_4_v_cast_cast_fu_31861_p3 = (!ap_reg_ppstg_dneg_32_4_reg_38344_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_32_4_reg_38344_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_32_5_v_cast_cast_fu_31868_p3() {
    z_V_32_5_v_cast_cast_fu_31868_p3 = (!ap_reg_ppstg_dneg_32_5_reg_38349_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_32_5_reg_38349_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_32_6_v_cast_cast_fu_31875_p3() {
    z_V_32_6_v_cast_cast_fu_31875_p3 = (!dneg_32_6_reg_39329.read()[0].is_01())? sc_lv<7>(): ((dneg_32_6_reg_39329.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_32_7_v_cast_cast_fu_31882_p3() {
    z_V_32_7_v_cast_cast_fu_31882_p3 = (!dneg_32_7_reg_39334.read()[0].is_01())? sc_lv<6>(): ((dneg_32_7_reg_39334.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_32_8_fu_31931_p2() {
    z_V_32_8_fu_31931_p2 = (!tmp644_fu_31906_p2.read().is_01() || !tmp1160_cast_fu_31927_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp644_fu_31906_p2.read()) + sc_bigint<13>(tmp1160_cast_fu_31927_p1.read()));
}

void Sobel_phase_strm::thread_z_V_32_8_v_cast_cast_cast_fu_31889_p3() {
    z_V_32_8_v_cast_cast_cast_fu_31889_p3 = (!dneg_32_8_reg_39339.read()[0].is_01())? sc_lv<6>(): ((dneg_32_8_reg_39339.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_33_1_fu_26420_p3() {
    z_V_33_1_fu_26420_p3 = (!ap_reg_ppstg_dneg_33_1_reg_35497_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_33_1_reg_35497_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_33_2_cast_fu_26440_p1() {
    z_V_33_2_cast_fu_26440_p1 = esl_zext<13,12>(z_V_33_2_fu_26434_p2.read());
}

void Sobel_phase_strm::thread_z_V_33_2_fu_26434_p2() {
    z_V_33_2_fu_26434_p2 = (!z_V_33_2_v_cast_cast_fu_26427_p3.read().is_01() || !z_V_33_1_fu_26420_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_33_2_v_cast_cast_fu_26427_p3.read()) + sc_biguint<12>(z_V_33_1_fu_26420_p3.read()));
}

void Sobel_phase_strm::thread_z_V_33_2_v_cast_cast_fu_26427_p3() {
    z_V_33_2_v_cast_cast_fu_26427_p3 = (!ap_reg_ppstg_dneg_33_2_reg_36950_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_33_2_reg_36950_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_33_3_fu_26460_p3() {
    z_V_33_3_fu_26460_p3 = (!ap_reg_ppstg_dneg_33_3_reg_36955_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_33_3_reg_36955_pp0_iter3.read()[0].to_bool())? p_Val2_10_33_3_cast_fu_26450_p1.read(): p_Val2_16_33_3_fu_26454_p2.read());
}

void Sobel_phase_strm::thread_z_V_33_4_v_cast_cast_fu_31988_p3() {
    z_V_33_4_v_cast_cast_fu_31988_p3 = (!ap_reg_ppstg_dneg_33_4_reg_38378_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_33_4_reg_38378_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_33_5_v_cast_cast_fu_31995_p3() {
    z_V_33_5_v_cast_cast_fu_31995_p3 = (!ap_reg_ppstg_dneg_33_5_reg_38383_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_33_5_reg_38383_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_33_6_v_cast_cast_fu_32002_p3() {
    z_V_33_6_v_cast_cast_fu_32002_p3 = (!dneg_33_6_reg_39349.read()[0].is_01())? sc_lv<7>(): ((dneg_33_6_reg_39349.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_33_7_v_cast_cast_fu_32009_p3() {
    z_V_33_7_v_cast_cast_fu_32009_p3 = (!dneg_33_7_reg_39354.read()[0].is_01())? sc_lv<6>(): ((dneg_33_7_reg_39354.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_33_8_fu_32058_p2() {
    z_V_33_8_fu_32058_p2 = (!tmp664_fu_32033_p2.read().is_01() || !tmp1164_cast_fu_32054_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp664_fu_32033_p2.read()) + sc_bigint<13>(tmp1164_cast_fu_32054_p1.read()));
}

void Sobel_phase_strm::thread_z_V_33_8_v_cast_cast_cast_fu_32016_p3() {
    z_V_33_8_v_cast_cast_cast_fu_32016_p3 = (!dneg_33_8_reg_39359.read()[0].is_01())? sc_lv<6>(): ((dneg_33_8_reg_39359.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_34_1_fu_26573_p3() {
    z_V_34_1_fu_26573_p3 = (!ap_reg_ppstg_dneg_34_1_reg_35535_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_34_1_reg_35535_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_34_2_cast_fu_26593_p1() {
    z_V_34_2_cast_fu_26593_p1 = esl_zext<13,12>(z_V_34_2_fu_26587_p2.read());
}

void Sobel_phase_strm::thread_z_V_34_2_fu_26587_p2() {
    z_V_34_2_fu_26587_p2 = (!z_V_34_2_v_cast_cast_fu_26580_p3.read().is_01() || !z_V_34_1_fu_26573_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_34_2_v_cast_cast_fu_26580_p3.read()) + sc_biguint<12>(z_V_34_1_fu_26573_p3.read()));
}

void Sobel_phase_strm::thread_z_V_34_2_v_cast_cast_fu_26580_p3() {
    z_V_34_2_v_cast_cast_fu_26580_p3 = (!ap_reg_ppstg_dneg_34_2_reg_36984_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_34_2_reg_36984_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_34_3_fu_26613_p3() {
    z_V_34_3_fu_26613_p3 = (!ap_reg_ppstg_dneg_34_3_reg_36989_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_34_3_reg_36989_pp0_iter3.read()[0].to_bool())? p_Val2_10_34_3_cast_fu_26603_p1.read(): p_Val2_16_34_3_fu_26607_p2.read());
}

void Sobel_phase_strm::thread_z_V_34_4_v_cast_cast_fu_32115_p3() {
    z_V_34_4_v_cast_cast_fu_32115_p3 = (!ap_reg_ppstg_dneg_34_4_reg_38412_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_34_4_reg_38412_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_34_5_v_cast_cast_fu_32122_p3() {
    z_V_34_5_v_cast_cast_fu_32122_p3 = (!ap_reg_ppstg_dneg_34_5_reg_38417_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_34_5_reg_38417_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_34_6_v_cast_cast_fu_32129_p3() {
    z_V_34_6_v_cast_cast_fu_32129_p3 = (!dneg_34_6_reg_39369.read()[0].is_01())? sc_lv<7>(): ((dneg_34_6_reg_39369.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_34_7_v_cast_cast_fu_32136_p3() {
    z_V_34_7_v_cast_cast_fu_32136_p3 = (!dneg_34_7_reg_39374.read()[0].is_01())? sc_lv<6>(): ((dneg_34_7_reg_39374.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_34_8_fu_32185_p2() {
    z_V_34_8_fu_32185_p2 = (!tmp684_fu_32160_p2.read().is_01() || !tmp1168_cast_fu_32181_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp684_fu_32160_p2.read()) + sc_bigint<13>(tmp1168_cast_fu_32181_p1.read()));
}

void Sobel_phase_strm::thread_z_V_34_8_v_cast_cast_cast_fu_32143_p3() {
    z_V_34_8_v_cast_cast_cast_fu_32143_p3 = (!dneg_34_8_reg_39379.read()[0].is_01())? sc_lv<6>(): ((dneg_34_8_reg_39379.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_35_1_fu_26726_p3() {
    z_V_35_1_fu_26726_p3 = (!ap_reg_ppstg_dneg_35_1_reg_35573_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_35_1_reg_35573_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_35_2_cast_fu_26746_p1() {
    z_V_35_2_cast_fu_26746_p1 = esl_zext<13,12>(z_V_35_2_fu_26740_p2.read());
}

void Sobel_phase_strm::thread_z_V_35_2_fu_26740_p2() {
    z_V_35_2_fu_26740_p2 = (!z_V_35_2_v_cast_cast_fu_26733_p3.read().is_01() || !z_V_35_1_fu_26726_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_35_2_v_cast_cast_fu_26733_p3.read()) + sc_biguint<12>(z_V_35_1_fu_26726_p3.read()));
}

void Sobel_phase_strm::thread_z_V_35_2_v_cast_cast_fu_26733_p3() {
    z_V_35_2_v_cast_cast_fu_26733_p3 = (!ap_reg_ppstg_dneg_35_2_reg_37018_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_35_2_reg_37018_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_35_3_fu_26766_p3() {
    z_V_35_3_fu_26766_p3 = (!ap_reg_ppstg_dneg_35_3_reg_37023_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_35_3_reg_37023_pp0_iter3.read()[0].to_bool())? p_Val2_10_35_3_cast_fu_26756_p1.read(): p_Val2_16_35_3_fu_26760_p2.read());
}

void Sobel_phase_strm::thread_z_V_35_4_v_cast_cast_fu_32242_p3() {
    z_V_35_4_v_cast_cast_fu_32242_p3 = (!ap_reg_ppstg_dneg_35_4_reg_38446_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_35_4_reg_38446_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_35_5_v_cast_cast_fu_32249_p3() {
    z_V_35_5_v_cast_cast_fu_32249_p3 = (!ap_reg_ppstg_dneg_35_5_reg_38451_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_35_5_reg_38451_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_35_6_v_cast_cast_fu_32256_p3() {
    z_V_35_6_v_cast_cast_fu_32256_p3 = (!dneg_35_6_reg_39389.read()[0].is_01())? sc_lv<7>(): ((dneg_35_6_reg_39389.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_35_7_v_cast_cast_fu_32263_p3() {
    z_V_35_7_v_cast_cast_fu_32263_p3 = (!dneg_35_7_reg_39394.read()[0].is_01())? sc_lv<6>(): ((dneg_35_7_reg_39394.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_35_8_fu_32312_p2() {
    z_V_35_8_fu_32312_p2 = (!tmp704_fu_32287_p2.read().is_01() || !tmp1172_cast_fu_32308_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp704_fu_32287_p2.read()) + sc_bigint<13>(tmp1172_cast_fu_32308_p1.read()));
}

void Sobel_phase_strm::thread_z_V_35_8_v_cast_cast_cast_fu_32270_p3() {
    z_V_35_8_v_cast_cast_cast_fu_32270_p3 = (!dneg_35_8_reg_39399.read()[0].is_01())? sc_lv<6>(): ((dneg_35_8_reg_39399.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_36_1_fu_26879_p3() {
    z_V_36_1_fu_26879_p3 = (!ap_reg_ppstg_dneg_36_1_reg_35611_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_36_1_reg_35611_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_36_2_cast_fu_26899_p1() {
    z_V_36_2_cast_fu_26899_p1 = esl_zext<13,12>(z_V_36_2_fu_26893_p2.read());
}

void Sobel_phase_strm::thread_z_V_36_2_fu_26893_p2() {
    z_V_36_2_fu_26893_p2 = (!z_V_36_2_v_cast_cast_fu_26886_p3.read().is_01() || !z_V_36_1_fu_26879_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_36_2_v_cast_cast_fu_26886_p3.read()) + sc_biguint<12>(z_V_36_1_fu_26879_p3.read()));
}

void Sobel_phase_strm::thread_z_V_36_2_v_cast_cast_fu_26886_p3() {
    z_V_36_2_v_cast_cast_fu_26886_p3 = (!ap_reg_ppstg_dneg_36_2_reg_37052_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_36_2_reg_37052_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_36_3_fu_26919_p3() {
    z_V_36_3_fu_26919_p3 = (!ap_reg_ppstg_dneg_36_3_reg_37057_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_36_3_reg_37057_pp0_iter3.read()[0].to_bool())? p_Val2_10_36_3_cast_fu_26909_p1.read(): p_Val2_16_36_3_fu_26913_p2.read());
}

void Sobel_phase_strm::thread_z_V_36_4_v_cast_cast_fu_32369_p3() {
    z_V_36_4_v_cast_cast_fu_32369_p3 = (!ap_reg_ppstg_dneg_36_4_reg_38480_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_36_4_reg_38480_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_36_5_v_cast_cast_fu_32376_p3() {
    z_V_36_5_v_cast_cast_fu_32376_p3 = (!ap_reg_ppstg_dneg_36_5_reg_38485_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_36_5_reg_38485_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_36_6_v_cast_cast_fu_32383_p3() {
    z_V_36_6_v_cast_cast_fu_32383_p3 = (!dneg_36_6_reg_39409.read()[0].is_01())? sc_lv<7>(): ((dneg_36_6_reg_39409.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_36_7_v_cast_cast_fu_32390_p3() {
    z_V_36_7_v_cast_cast_fu_32390_p3 = (!dneg_36_7_reg_39414.read()[0].is_01())? sc_lv<6>(): ((dneg_36_7_reg_39414.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_36_8_fu_32439_p2() {
    z_V_36_8_fu_32439_p2 = (!tmp724_fu_32414_p2.read().is_01() || !tmp1176_cast_fu_32435_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp724_fu_32414_p2.read()) + sc_bigint<13>(tmp1176_cast_fu_32435_p1.read()));
}

void Sobel_phase_strm::thread_z_V_36_8_v_cast_cast_cast_fu_32397_p3() {
    z_V_36_8_v_cast_cast_cast_fu_32397_p3 = (!dneg_36_8_reg_39419.read()[0].is_01())? sc_lv<6>(): ((dneg_36_8_reg_39419.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_37_1_fu_27032_p3() {
    z_V_37_1_fu_27032_p3 = (!ap_reg_ppstg_dneg_37_1_reg_35649_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_37_1_reg_35649_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_37_2_cast_fu_27052_p1() {
    z_V_37_2_cast_fu_27052_p1 = esl_zext<13,12>(z_V_37_2_fu_27046_p2.read());
}

void Sobel_phase_strm::thread_z_V_37_2_fu_27046_p2() {
    z_V_37_2_fu_27046_p2 = (!z_V_37_2_v_cast_cast_fu_27039_p3.read().is_01() || !z_V_37_1_fu_27032_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_37_2_v_cast_cast_fu_27039_p3.read()) + sc_biguint<12>(z_V_37_1_fu_27032_p3.read()));
}

void Sobel_phase_strm::thread_z_V_37_2_v_cast_cast_fu_27039_p3() {
    z_V_37_2_v_cast_cast_fu_27039_p3 = (!ap_reg_ppstg_dneg_37_2_reg_37086_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_37_2_reg_37086_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_37_3_fu_27072_p3() {
    z_V_37_3_fu_27072_p3 = (!ap_reg_ppstg_dneg_37_3_reg_37091_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_37_3_reg_37091_pp0_iter3.read()[0].to_bool())? p_Val2_10_37_3_cast_fu_27062_p1.read(): p_Val2_16_37_3_fu_27066_p2.read());
}

void Sobel_phase_strm::thread_z_V_37_4_v_cast_cast_fu_32496_p3() {
    z_V_37_4_v_cast_cast_fu_32496_p3 = (!ap_reg_ppstg_dneg_37_4_reg_38514_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_37_4_reg_38514_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_37_5_v_cast_cast_fu_32503_p3() {
    z_V_37_5_v_cast_cast_fu_32503_p3 = (!ap_reg_ppstg_dneg_37_5_reg_38519_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_37_5_reg_38519_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_37_6_v_cast_cast_fu_32510_p3() {
    z_V_37_6_v_cast_cast_fu_32510_p3 = (!dneg_37_6_reg_39429.read()[0].is_01())? sc_lv<7>(): ((dneg_37_6_reg_39429.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_37_7_v_cast_cast_fu_32517_p3() {
    z_V_37_7_v_cast_cast_fu_32517_p3 = (!dneg_37_7_reg_39434.read()[0].is_01())? sc_lv<6>(): ((dneg_37_7_reg_39434.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_37_8_fu_32566_p2() {
    z_V_37_8_fu_32566_p2 = (!tmp744_fu_32541_p2.read().is_01() || !tmp1180_cast_fu_32562_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp744_fu_32541_p2.read()) + sc_bigint<13>(tmp1180_cast_fu_32562_p1.read()));
}

void Sobel_phase_strm::thread_z_V_37_8_v_cast_cast_cast_fu_32524_p3() {
    z_V_37_8_v_cast_cast_cast_fu_32524_p3 = (!dneg_37_8_reg_39439.read()[0].is_01())? sc_lv<6>(): ((dneg_37_8_reg_39439.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_38_1_fu_27185_p3() {
    z_V_38_1_fu_27185_p3 = (!ap_reg_ppstg_dneg_38_1_reg_35687_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_38_1_reg_35687_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_38_2_cast_fu_27205_p1() {
    z_V_38_2_cast_fu_27205_p1 = esl_zext<13,12>(z_V_38_2_fu_27199_p2.read());
}

void Sobel_phase_strm::thread_z_V_38_2_fu_27199_p2() {
    z_V_38_2_fu_27199_p2 = (!z_V_38_2_v_cast_cast_fu_27192_p3.read().is_01() || !z_V_38_1_fu_27185_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_38_2_v_cast_cast_fu_27192_p3.read()) + sc_biguint<12>(z_V_38_1_fu_27185_p3.read()));
}

void Sobel_phase_strm::thread_z_V_38_2_v_cast_cast_fu_27192_p3() {
    z_V_38_2_v_cast_cast_fu_27192_p3 = (!ap_reg_ppstg_dneg_38_2_reg_37120_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_38_2_reg_37120_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_38_3_fu_27225_p3() {
    z_V_38_3_fu_27225_p3 = (!ap_reg_ppstg_dneg_38_3_reg_37125_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_38_3_reg_37125_pp0_iter3.read()[0].to_bool())? p_Val2_10_38_3_cast_fu_27215_p1.read(): p_Val2_16_38_3_fu_27219_p2.read());
}

void Sobel_phase_strm::thread_z_V_38_4_v_cast_cast_fu_32623_p3() {
    z_V_38_4_v_cast_cast_fu_32623_p3 = (!ap_reg_ppstg_dneg_38_4_reg_38548_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_38_4_reg_38548_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_38_5_v_cast_cast_fu_32630_p3() {
    z_V_38_5_v_cast_cast_fu_32630_p3 = (!ap_reg_ppstg_dneg_38_5_reg_38553_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_38_5_reg_38553_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_38_6_v_cast_cast_fu_32637_p3() {
    z_V_38_6_v_cast_cast_fu_32637_p3 = (!dneg_38_6_reg_39449.read()[0].is_01())? sc_lv<7>(): ((dneg_38_6_reg_39449.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_38_7_v_cast_cast_fu_32644_p3() {
    z_V_38_7_v_cast_cast_fu_32644_p3 = (!dneg_38_7_reg_39454.read()[0].is_01())? sc_lv<6>(): ((dneg_38_7_reg_39454.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_38_8_fu_32693_p2() {
    z_V_38_8_fu_32693_p2 = (!tmp764_fu_32668_p2.read().is_01() || !tmp1184_cast_fu_32689_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp764_fu_32668_p2.read()) + sc_bigint<13>(tmp1184_cast_fu_32689_p1.read()));
}

void Sobel_phase_strm::thread_z_V_38_8_v_cast_cast_cast_fu_32651_p3() {
    z_V_38_8_v_cast_cast_cast_fu_32651_p3 = (!dneg_38_8_reg_39459.read()[0].is_01())? sc_lv<6>(): ((dneg_38_8_reg_39459.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_39_1_fu_27338_p3() {
    z_V_39_1_fu_27338_p3 = (!ap_reg_ppstg_dneg_39_1_reg_35725_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_39_1_reg_35725_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_39_2_cast_fu_27358_p1() {
    z_V_39_2_cast_fu_27358_p1 = esl_zext<13,12>(z_V_39_2_fu_27352_p2.read());
}

void Sobel_phase_strm::thread_z_V_39_2_fu_27352_p2() {
    z_V_39_2_fu_27352_p2 = (!z_V_39_2_v_cast_cast_fu_27345_p3.read().is_01() || !z_V_39_1_fu_27338_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_39_2_v_cast_cast_fu_27345_p3.read()) + sc_biguint<12>(z_V_39_1_fu_27338_p3.read()));
}

void Sobel_phase_strm::thread_z_V_39_2_v_cast_cast_fu_27345_p3() {
    z_V_39_2_v_cast_cast_fu_27345_p3 = (!ap_reg_ppstg_dneg_39_2_reg_37154_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_39_2_reg_37154_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_39_3_fu_27378_p3() {
    z_V_39_3_fu_27378_p3 = (!ap_reg_ppstg_dneg_39_3_reg_37159_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_39_3_reg_37159_pp0_iter3.read()[0].to_bool())? p_Val2_10_39_3_cast_fu_27368_p1.read(): p_Val2_16_39_3_fu_27372_p2.read());
}

void Sobel_phase_strm::thread_z_V_39_4_v_cast_cast_fu_32750_p3() {
    z_V_39_4_v_cast_cast_fu_32750_p3 = (!ap_reg_ppstg_dneg_39_4_reg_38582_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_39_4_reg_38582_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_39_5_v_cast_cast_fu_32757_p3() {
    z_V_39_5_v_cast_cast_fu_32757_p3 = (!ap_reg_ppstg_dneg_39_5_reg_38587_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_39_5_reg_38587_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_39_6_v_cast_cast_fu_32764_p3() {
    z_V_39_6_v_cast_cast_fu_32764_p3 = (!dneg_39_6_reg_39469.read()[0].is_01())? sc_lv<7>(): ((dneg_39_6_reg_39469.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_39_7_v_cast_cast_fu_32771_p3() {
    z_V_39_7_v_cast_cast_fu_32771_p3 = (!dneg_39_7_reg_39474.read()[0].is_01())? sc_lv<6>(): ((dneg_39_7_reg_39474.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_39_8_fu_32820_p2() {
    z_V_39_8_fu_32820_p2 = (!tmp784_fu_32795_p2.read().is_01() || !tmp1188_cast_fu_32816_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp784_fu_32795_p2.read()) + sc_bigint<13>(tmp1188_cast_fu_32816_p1.read()));
}

void Sobel_phase_strm::thread_z_V_39_8_v_cast_cast_cast_fu_32778_p3() {
    z_V_39_8_v_cast_cast_cast_fu_32778_p3 = (!dneg_39_8_reg_39479.read()[0].is_01())? sc_lv<6>(): ((dneg_39_8_reg_39479.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_3_1_fu_21830_p3() {
    z_V_3_1_fu_21830_p3 = (!ap_reg_ppstg_dneg_3_1_reg_34357_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_3_1_reg_34357_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_3_2_cast_fu_21850_p1() {
    z_V_3_2_cast_fu_21850_p1 = esl_zext<13,12>(z_V_3_2_fu_21844_p2.read());
}

void Sobel_phase_strm::thread_z_V_3_2_fu_21844_p2() {
    z_V_3_2_fu_21844_p2 = (!z_V_3_2_v_cast_cast_fu_21837_p3.read().is_01() || !z_V_3_1_fu_21830_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_3_2_v_cast_cast_fu_21837_p3.read()) + sc_biguint<12>(z_V_3_1_fu_21830_p3.read()));
}

void Sobel_phase_strm::thread_z_V_3_2_v_cast_cast_fu_21837_p3() {
    z_V_3_2_v_cast_cast_fu_21837_p3 = (!ap_reg_ppstg_dneg_3_2_reg_35930_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_3_2_reg_35930_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_3_3_fu_21870_p3() {
    z_V_3_3_fu_21870_p3 = (!ap_reg_ppstg_dneg_3_3_reg_35935_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_3_3_reg_35935_pp0_iter3.read()[0].to_bool())? p_Val2_10_3_3_cast_fu_21860_p1.read(): p_Val2_16_3_3_fu_21864_p2.read());
}

void Sobel_phase_strm::thread_z_V_3_4_v_cast_cast_fu_28178_p3() {
    z_V_3_4_v_cast_cast_fu_28178_p3 = (!ap_reg_ppstg_dneg_3_4_reg_37358_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_3_4_reg_37358_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_3_5_v_cast_cast_fu_28185_p3() {
    z_V_3_5_v_cast_cast_fu_28185_p3 = (!ap_reg_ppstg_dneg_3_5_reg_37363_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_3_5_reg_37363_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_3_6_v_cast_cast_fu_28192_p3() {
    z_V_3_6_v_cast_cast_fu_28192_p3 = (!dneg_3_6_reg_38749.read()[0].is_01())? sc_lv<7>(): ((dneg_3_6_reg_38749.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_3_7_v_cast_cast_fu_28199_p3() {
    z_V_3_7_v_cast_cast_fu_28199_p3 = (!dneg_3_7_reg_38754.read()[0].is_01())? sc_lv<6>(): ((dneg_3_7_reg_38754.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_3_8_fu_28248_p2() {
    z_V_3_8_fu_28248_p2 = (!tmp64_fu_28223_p2.read().is_01() || !tmp1044_cast_fu_28244_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp64_fu_28223_p2.read()) + sc_bigint<13>(tmp1044_cast_fu_28244_p1.read()));
}

void Sobel_phase_strm::thread_z_V_3_8_v_cast_cast_cast_fu_28206_p3() {
    z_V_3_8_v_cast_cast_cast_fu_28206_p3 = (!dneg_3_8_reg_38759.read()[0].is_01())? sc_lv<6>(): ((dneg_3_8_reg_38759.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_40_1_fu_27491_p3() {
    z_V_40_1_fu_27491_p3 = (!ap_reg_ppstg_dneg_40_1_reg_35763_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_40_1_reg_35763_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_40_2_cast_fu_27511_p1() {
    z_V_40_2_cast_fu_27511_p1 = esl_zext<13,12>(z_V_40_2_fu_27505_p2.read());
}

void Sobel_phase_strm::thread_z_V_40_2_fu_27505_p2() {
    z_V_40_2_fu_27505_p2 = (!z_V_40_2_v_cast_cast_fu_27498_p3.read().is_01() || !z_V_40_1_fu_27491_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_40_2_v_cast_cast_fu_27498_p3.read()) + sc_biguint<12>(z_V_40_1_fu_27491_p3.read()));
}

void Sobel_phase_strm::thread_z_V_40_2_v_cast_cast_fu_27498_p3() {
    z_V_40_2_v_cast_cast_fu_27498_p3 = (!ap_reg_ppstg_dneg_40_2_reg_37188_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_40_2_reg_37188_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_40_3_fu_27531_p3() {
    z_V_40_3_fu_27531_p3 = (!ap_reg_ppstg_dneg_40_3_reg_37193_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_40_3_reg_37193_pp0_iter3.read()[0].to_bool())? p_Val2_10_40_3_cast_fu_27521_p1.read(): p_Val2_16_40_3_fu_27525_p2.read());
}

void Sobel_phase_strm::thread_z_V_40_4_v_cast_cast_fu_32877_p3() {
    z_V_40_4_v_cast_cast_fu_32877_p3 = (!ap_reg_ppstg_dneg_40_4_reg_38616_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_40_4_reg_38616_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_40_5_v_cast_cast_fu_32884_p3() {
    z_V_40_5_v_cast_cast_fu_32884_p3 = (!ap_reg_ppstg_dneg_40_5_reg_38621_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_40_5_reg_38621_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_40_6_v_cast_cast_fu_32891_p3() {
    z_V_40_6_v_cast_cast_fu_32891_p3 = (!dneg_40_6_reg_39489.read()[0].is_01())? sc_lv<7>(): ((dneg_40_6_reg_39489.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_40_7_v_cast_cast_fu_32898_p3() {
    z_V_40_7_v_cast_cast_fu_32898_p3 = (!dneg_40_7_reg_39494.read()[0].is_01())? sc_lv<6>(): ((dneg_40_7_reg_39494.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_40_8_fu_32947_p2() {
    z_V_40_8_fu_32947_p2 = (!tmp804_fu_32922_p2.read().is_01() || !tmp1192_cast_fu_32943_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp804_fu_32922_p2.read()) + sc_bigint<13>(tmp1192_cast_fu_32943_p1.read()));
}

void Sobel_phase_strm::thread_z_V_40_8_v_cast_cast_cast_fu_32905_p3() {
    z_V_40_8_v_cast_cast_cast_fu_32905_p3 = (!dneg_40_8_reg_39499.read()[0].is_01())? sc_lv<6>(): ((dneg_40_8_reg_39499.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_41_1_fu_27644_p3() {
    z_V_41_1_fu_27644_p3 = (!ap_reg_ppstg_dneg_41_1_reg_35801_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_41_1_reg_35801_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_41_2_cast_fu_27664_p1() {
    z_V_41_2_cast_fu_27664_p1 = esl_zext<13,12>(z_V_41_2_fu_27658_p2.read());
}

void Sobel_phase_strm::thread_z_V_41_2_fu_27658_p2() {
    z_V_41_2_fu_27658_p2 = (!z_V_41_2_v_cast_cast_fu_27651_p3.read().is_01() || !z_V_41_1_fu_27644_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_41_2_v_cast_cast_fu_27651_p3.read()) + sc_biguint<12>(z_V_41_1_fu_27644_p3.read()));
}

void Sobel_phase_strm::thread_z_V_41_2_v_cast_cast_fu_27651_p3() {
    z_V_41_2_v_cast_cast_fu_27651_p3 = (!ap_reg_ppstg_dneg_41_2_reg_37222_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_41_2_reg_37222_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_41_3_fu_27684_p3() {
    z_V_41_3_fu_27684_p3 = (!ap_reg_ppstg_dneg_41_3_reg_37227_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_41_3_reg_37227_pp0_iter3.read()[0].to_bool())? p_Val2_10_41_3_cast_fu_27674_p1.read(): p_Val2_16_41_3_fu_27678_p2.read());
}

void Sobel_phase_strm::thread_z_V_41_4_v_cast_cast_fu_33004_p3() {
    z_V_41_4_v_cast_cast_fu_33004_p3 = (!ap_reg_ppstg_dneg_41_4_reg_38650_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_41_4_reg_38650_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_41_5_v_cast_cast_fu_33011_p3() {
    z_V_41_5_v_cast_cast_fu_33011_p3 = (!ap_reg_ppstg_dneg_41_5_reg_38655_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_41_5_reg_38655_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_41_6_v_cast_cast_fu_33018_p3() {
    z_V_41_6_v_cast_cast_fu_33018_p3 = (!dneg_41_6_reg_39509.read()[0].is_01())? sc_lv<7>(): ((dneg_41_6_reg_39509.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_41_7_v_cast_cast_fu_33025_p3() {
    z_V_41_7_v_cast_cast_fu_33025_p3 = (!dneg_41_7_reg_39514.read()[0].is_01())? sc_lv<6>(): ((dneg_41_7_reg_39514.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_41_8_fu_33074_p2() {
    z_V_41_8_fu_33074_p2 = (!tmp824_fu_33049_p2.read().is_01() || !tmp1196_cast_fu_33070_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp824_fu_33049_p2.read()) + sc_bigint<13>(tmp1196_cast_fu_33070_p1.read()));
}

void Sobel_phase_strm::thread_z_V_41_8_v_cast_cast_cast_fu_33032_p3() {
    z_V_41_8_v_cast_cast_cast_fu_33032_p3 = (!dneg_41_8_reg_39519.read()[0].is_01())? sc_lv<6>(): ((dneg_41_8_reg_39519.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_4_1_fu_21983_p3() {
    z_V_4_1_fu_21983_p3 = (!ap_reg_ppstg_dneg_4_1_reg_34395_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_4_1_reg_34395_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_4_2_cast_fu_22003_p1() {
    z_V_4_2_cast_fu_22003_p1 = esl_zext<13,12>(z_V_4_2_fu_21997_p2.read());
}

void Sobel_phase_strm::thread_z_V_4_2_fu_21997_p2() {
    z_V_4_2_fu_21997_p2 = (!z_V_4_2_v_cast_cast_fu_21990_p3.read().is_01() || !z_V_4_1_fu_21983_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_4_2_v_cast_cast_fu_21990_p3.read()) + sc_biguint<12>(z_V_4_1_fu_21983_p3.read()));
}

void Sobel_phase_strm::thread_z_V_4_2_v_cast_cast_fu_21990_p3() {
    z_V_4_2_v_cast_cast_fu_21990_p3 = (!ap_reg_ppstg_dneg_4_2_reg_35964_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_4_2_reg_35964_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_4_3_fu_22023_p3() {
    z_V_4_3_fu_22023_p3 = (!ap_reg_ppstg_dneg_4_3_reg_35969_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_4_3_reg_35969_pp0_iter3.read()[0].to_bool())? p_Val2_10_4_3_cast_fu_22013_p1.read(): p_Val2_16_4_3_fu_22017_p2.read());
}

void Sobel_phase_strm::thread_z_V_4_4_v_cast_cast_fu_28305_p3() {
    z_V_4_4_v_cast_cast_fu_28305_p3 = (!ap_reg_ppstg_dneg_4_4_reg_37392_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_4_4_reg_37392_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_4_5_v_cast_cast_fu_28312_p3() {
    z_V_4_5_v_cast_cast_fu_28312_p3 = (!ap_reg_ppstg_dneg_4_5_reg_37397_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_4_5_reg_37397_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_4_6_v_cast_cast_fu_28319_p3() {
    z_V_4_6_v_cast_cast_fu_28319_p3 = (!dneg_4_6_reg_38769.read()[0].is_01())? sc_lv<7>(): ((dneg_4_6_reg_38769.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_4_7_v_cast_cast_fu_28326_p3() {
    z_V_4_7_v_cast_cast_fu_28326_p3 = (!dneg_4_7_reg_38774.read()[0].is_01())? sc_lv<6>(): ((dneg_4_7_reg_38774.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_4_8_fu_28375_p2() {
    z_V_4_8_fu_28375_p2 = (!tmp84_fu_28350_p2.read().is_01() || !tmp1048_cast_fu_28371_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp84_fu_28350_p2.read()) + sc_bigint<13>(tmp1048_cast_fu_28371_p1.read()));
}

void Sobel_phase_strm::thread_z_V_4_8_v_cast_cast_cast_fu_28333_p3() {
    z_V_4_8_v_cast_cast_cast_fu_28333_p3 = (!dneg_4_8_reg_38779.read()[0].is_01())? sc_lv<6>(): ((dneg_4_8_reg_38779.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_5_1_fu_22136_p3() {
    z_V_5_1_fu_22136_p3 = (!ap_reg_ppstg_dneg_5_1_reg_34433_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_5_1_reg_34433_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_5_2_cast_fu_22156_p1() {
    z_V_5_2_cast_fu_22156_p1 = esl_zext<13,12>(z_V_5_2_fu_22150_p2.read());
}

void Sobel_phase_strm::thread_z_V_5_2_fu_22150_p2() {
    z_V_5_2_fu_22150_p2 = (!z_V_5_2_v_cast_cast_fu_22143_p3.read().is_01() || !z_V_5_1_fu_22136_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_5_2_v_cast_cast_fu_22143_p3.read()) + sc_biguint<12>(z_V_5_1_fu_22136_p3.read()));
}

void Sobel_phase_strm::thread_z_V_5_2_v_cast_cast_fu_22143_p3() {
    z_V_5_2_v_cast_cast_fu_22143_p3 = (!ap_reg_ppstg_dneg_5_2_reg_35998_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_5_2_reg_35998_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_5_3_fu_22176_p3() {
    z_V_5_3_fu_22176_p3 = (!ap_reg_ppstg_dneg_5_3_reg_36003_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_5_3_reg_36003_pp0_iter3.read()[0].to_bool())? p_Val2_10_5_3_cast_fu_22166_p1.read(): p_Val2_16_5_3_fu_22170_p2.read());
}

void Sobel_phase_strm::thread_z_V_5_4_v_cast_cast_fu_28432_p3() {
    z_V_5_4_v_cast_cast_fu_28432_p3 = (!ap_reg_ppstg_dneg_5_4_reg_37426_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_5_4_reg_37426_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_5_5_v_cast_cast_fu_28439_p3() {
    z_V_5_5_v_cast_cast_fu_28439_p3 = (!ap_reg_ppstg_dneg_5_5_reg_37431_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_5_5_reg_37431_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_5_6_v_cast_cast_fu_28446_p3() {
    z_V_5_6_v_cast_cast_fu_28446_p3 = (!dneg_5_6_reg_38789.read()[0].is_01())? sc_lv<7>(): ((dneg_5_6_reg_38789.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_5_7_v_cast_cast_fu_28453_p3() {
    z_V_5_7_v_cast_cast_fu_28453_p3 = (!dneg_5_7_reg_38794.read()[0].is_01())? sc_lv<6>(): ((dneg_5_7_reg_38794.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_5_8_fu_28502_p2() {
    z_V_5_8_fu_28502_p2 = (!tmp104_fu_28477_p2.read().is_01() || !tmp1052_cast_fu_28498_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp104_fu_28477_p2.read()) + sc_bigint<13>(tmp1052_cast_fu_28498_p1.read()));
}

void Sobel_phase_strm::thread_z_V_5_8_v_cast_cast_cast_fu_28460_p3() {
    z_V_5_8_v_cast_cast_cast_fu_28460_p3 = (!dneg_5_8_reg_38799.read()[0].is_01())? sc_lv<6>(): ((dneg_5_8_reg_38799.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_6_1_fu_22289_p3() {
    z_V_6_1_fu_22289_p3 = (!ap_reg_ppstg_dneg_6_1_reg_34471_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_6_1_reg_34471_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_6_2_cast_fu_22309_p1() {
    z_V_6_2_cast_fu_22309_p1 = esl_zext<13,12>(z_V_6_2_fu_22303_p2.read());
}

void Sobel_phase_strm::thread_z_V_6_2_fu_22303_p2() {
    z_V_6_2_fu_22303_p2 = (!z_V_6_2_v_cast_cast_fu_22296_p3.read().is_01() || !z_V_6_1_fu_22289_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_6_2_v_cast_cast_fu_22296_p3.read()) + sc_biguint<12>(z_V_6_1_fu_22289_p3.read()));
}

void Sobel_phase_strm::thread_z_V_6_2_v_cast_cast_fu_22296_p3() {
    z_V_6_2_v_cast_cast_fu_22296_p3 = (!ap_reg_ppstg_dneg_6_2_reg_36032_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_6_2_reg_36032_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_6_3_fu_22329_p3() {
    z_V_6_3_fu_22329_p3 = (!ap_reg_ppstg_dneg_6_3_reg_36037_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_6_3_reg_36037_pp0_iter3.read()[0].to_bool())? p_Val2_10_6_3_cast_fu_22319_p1.read(): p_Val2_16_6_3_fu_22323_p2.read());
}

void Sobel_phase_strm::thread_z_V_6_4_v_cast_cast_fu_28559_p3() {
    z_V_6_4_v_cast_cast_fu_28559_p3 = (!ap_reg_ppstg_dneg_6_4_reg_37460_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_6_4_reg_37460_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_6_5_v_cast_cast_fu_28566_p3() {
    z_V_6_5_v_cast_cast_fu_28566_p3 = (!ap_reg_ppstg_dneg_6_5_reg_37465_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_6_5_reg_37465_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_6_6_v_cast_cast_fu_28573_p3() {
    z_V_6_6_v_cast_cast_fu_28573_p3 = (!dneg_6_6_reg_38809.read()[0].is_01())? sc_lv<7>(): ((dneg_6_6_reg_38809.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_6_7_v_cast_cast_fu_28580_p3() {
    z_V_6_7_v_cast_cast_fu_28580_p3 = (!dneg_6_7_reg_38814.read()[0].is_01())? sc_lv<6>(): ((dneg_6_7_reg_38814.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_6_8_fu_28629_p2() {
    z_V_6_8_fu_28629_p2 = (!tmp124_fu_28604_p2.read().is_01() || !tmp1056_cast_fu_28625_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp124_fu_28604_p2.read()) + sc_bigint<13>(tmp1056_cast_fu_28625_p1.read()));
}

void Sobel_phase_strm::thread_z_V_6_8_v_cast_cast_cast_fu_28587_p3() {
    z_V_6_8_v_cast_cast_cast_fu_28587_p3 = (!dneg_6_8_reg_38819.read()[0].is_01())? sc_lv<6>(): ((dneg_6_8_reg_38819.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_7_1_fu_22442_p3() {
    z_V_7_1_fu_22442_p3 = (!ap_reg_ppstg_dneg_7_1_reg_34509_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_7_1_reg_34509_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_7_2_cast_fu_22462_p1() {
    z_V_7_2_cast_fu_22462_p1 = esl_zext<13,12>(z_V_7_2_fu_22456_p2.read());
}

void Sobel_phase_strm::thread_z_V_7_2_fu_22456_p2() {
    z_V_7_2_fu_22456_p2 = (!z_V_7_2_v_cast_cast_fu_22449_p3.read().is_01() || !z_V_7_1_fu_22442_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_7_2_v_cast_cast_fu_22449_p3.read()) + sc_biguint<12>(z_V_7_1_fu_22442_p3.read()));
}

void Sobel_phase_strm::thread_z_V_7_2_v_cast_cast_fu_22449_p3() {
    z_V_7_2_v_cast_cast_fu_22449_p3 = (!ap_reg_ppstg_dneg_7_2_reg_36066_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_7_2_reg_36066_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_7_3_fu_22482_p3() {
    z_V_7_3_fu_22482_p3 = (!ap_reg_ppstg_dneg_7_3_reg_36071_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_7_3_reg_36071_pp0_iter3.read()[0].to_bool())? p_Val2_10_7_3_cast_fu_22472_p1.read(): p_Val2_16_7_3_fu_22476_p2.read());
}

void Sobel_phase_strm::thread_z_V_7_4_v_cast_cast_fu_28686_p3() {
    z_V_7_4_v_cast_cast_fu_28686_p3 = (!ap_reg_ppstg_dneg_7_4_reg_37494_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_7_4_reg_37494_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_7_5_v_cast_cast_fu_28693_p3() {
    z_V_7_5_v_cast_cast_fu_28693_p3 = (!ap_reg_ppstg_dneg_7_5_reg_37499_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_7_5_reg_37499_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_7_6_v_cast_cast_fu_28700_p3() {
    z_V_7_6_v_cast_cast_fu_28700_p3 = (!dneg_7_6_reg_38829.read()[0].is_01())? sc_lv<7>(): ((dneg_7_6_reg_38829.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_7_7_v_cast_cast_fu_28707_p3() {
    z_V_7_7_v_cast_cast_fu_28707_p3 = (!dneg_7_7_reg_38834.read()[0].is_01())? sc_lv<6>(): ((dneg_7_7_reg_38834.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_7_8_fu_28756_p2() {
    z_V_7_8_fu_28756_p2 = (!tmp144_fu_28731_p2.read().is_01() || !tmp1060_cast_fu_28752_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp144_fu_28731_p2.read()) + sc_bigint<13>(tmp1060_cast_fu_28752_p1.read()));
}

void Sobel_phase_strm::thread_z_V_7_8_v_cast_cast_cast_fu_28714_p3() {
    z_V_7_8_v_cast_cast_cast_fu_28714_p3 = (!dneg_7_8_reg_38839.read()[0].is_01())? sc_lv<6>(): ((dneg_7_8_reg_38839.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_8_1_fu_22595_p3() {
    z_V_8_1_fu_22595_p3 = (!ap_reg_ppstg_dneg_8_1_reg_34547_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_8_1_reg_34547_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_8_2_cast_fu_22615_p1() {
    z_V_8_2_cast_fu_22615_p1 = esl_zext<13,12>(z_V_8_2_fu_22609_p2.read());
}

void Sobel_phase_strm::thread_z_V_8_2_fu_22609_p2() {
    z_V_8_2_fu_22609_p2 = (!z_V_8_2_v_cast_cast_fu_22602_p3.read().is_01() || !z_V_8_1_fu_22595_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_8_2_v_cast_cast_fu_22602_p3.read()) + sc_biguint<12>(z_V_8_1_fu_22595_p3.read()));
}

void Sobel_phase_strm::thread_z_V_8_2_v_cast_cast_fu_22602_p3() {
    z_V_8_2_v_cast_cast_fu_22602_p3 = (!ap_reg_ppstg_dneg_8_2_reg_36100_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_8_2_reg_36100_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_8_3_fu_22635_p3() {
    z_V_8_3_fu_22635_p3 = (!ap_reg_ppstg_dneg_8_3_reg_36105_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_8_3_reg_36105_pp0_iter3.read()[0].to_bool())? p_Val2_10_8_3_cast_fu_22625_p1.read(): p_Val2_16_8_3_fu_22629_p2.read());
}

void Sobel_phase_strm::thread_z_V_8_4_v_cast_cast_fu_28813_p3() {
    z_V_8_4_v_cast_cast_fu_28813_p3 = (!ap_reg_ppstg_dneg_8_4_reg_37528_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_8_4_reg_37528_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_8_5_v_cast_cast_fu_28820_p3() {
    z_V_8_5_v_cast_cast_fu_28820_p3 = (!ap_reg_ppstg_dneg_8_5_reg_37533_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_8_5_reg_37533_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_8_6_v_cast_cast_fu_28827_p3() {
    z_V_8_6_v_cast_cast_fu_28827_p3 = (!dneg_8_6_reg_38849.read()[0].is_01())? sc_lv<7>(): ((dneg_8_6_reg_38849.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_8_7_v_cast_cast_fu_28834_p3() {
    z_V_8_7_v_cast_cast_fu_28834_p3 = (!dneg_8_7_reg_38854.read()[0].is_01())? sc_lv<6>(): ((dneg_8_7_reg_38854.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_8_8_fu_28883_p2() {
    z_V_8_8_fu_28883_p2 = (!tmp164_fu_28858_p2.read().is_01() || !tmp1064_cast_fu_28879_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp164_fu_28858_p2.read()) + sc_bigint<13>(tmp1064_cast_fu_28879_p1.read()));
}

void Sobel_phase_strm::thread_z_V_8_8_v_cast_cast_cast_fu_28841_p3() {
    z_V_8_8_v_cast_cast_cast_fu_28841_p3 = (!dneg_8_8_reg_38859.read()[0].is_01())? sc_lv<6>(): ((dneg_8_8_reg_38859.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

void Sobel_phase_strm::thread_z_V_9_1_fu_22748_p3() {
    z_V_9_1_fu_22748_p3 = (!ap_reg_ppstg_dneg_9_1_reg_34585_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_9_1_reg_34585_pp0_iter3.read()[0].to_bool())? ap_const_lv12_8F1: ap_const_lv12_24F);
}

void Sobel_phase_strm::thread_z_V_9_2_cast_fu_22768_p1() {
    z_V_9_2_cast_fu_22768_p1 = esl_zext<13,12>(z_V_9_2_fu_22762_p2.read());
}

void Sobel_phase_strm::thread_z_V_9_2_fu_22762_p2() {
    z_V_9_2_fu_22762_p2 = (!z_V_9_2_v_cast_cast_fu_22755_p3.read().is_01() || !z_V_9_1_fu_22748_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(z_V_9_2_v_cast_cast_fu_22755_p3.read()) + sc_biguint<12>(z_V_9_1_fu_22748_p3.read()));
}

void Sobel_phase_strm::thread_z_V_9_2_v_cast_cast_fu_22755_p3() {
    z_V_9_2_v_cast_cast_fu_22755_p3 = (!ap_reg_ppstg_dneg_9_2_reg_36134_pp0_iter3.read()[0].is_01())? sc_lv<12>(): ((ap_reg_ppstg_dneg_9_2_reg_36134_pp0_iter3.read()[0].to_bool())? ap_const_lv12_1C0: ap_const_lv12_E40);
}

void Sobel_phase_strm::thread_z_V_9_3_fu_22788_p3() {
    z_V_9_3_fu_22788_p3 = (!ap_reg_ppstg_dneg_9_3_reg_36139_pp0_iter3.read()[0].is_01())? sc_lv<13>(): ((ap_reg_ppstg_dneg_9_3_reg_36139_pp0_iter3.read()[0].to_bool())? p_Val2_10_9_3_cast_fu_22778_p1.read(): p_Val2_16_9_3_fu_22782_p2.read());
}

void Sobel_phase_strm::thread_z_V_9_4_v_cast_cast_fu_28940_p3() {
    z_V_9_4_v_cast_cast_fu_28940_p3 = (!ap_reg_ppstg_dneg_9_4_reg_37562_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_9_4_reg_37562_pp0_iter4.read()[0].to_bool())? ap_const_lv9_72: ap_const_lv9_18E);
}

void Sobel_phase_strm::thread_z_V_9_5_v_cast_cast_fu_28947_p3() {
    z_V_9_5_v_cast_cast_fu_28947_p3 = (!ap_reg_ppstg_dneg_9_5_reg_37567_pp0_iter4.read()[0].is_01())? sc_lv<9>(): ((ap_reg_ppstg_dneg_9_5_reg_37567_pp0_iter4.read()[0].to_bool())? ap_const_lv9_38: ap_const_lv9_1C8);
}

void Sobel_phase_strm::thread_z_V_9_6_v_cast_cast_fu_28954_p3() {
    z_V_9_6_v_cast_cast_fu_28954_p3 = (!dneg_9_6_reg_38869.read()[0].is_01())? sc_lv<7>(): ((dneg_9_6_reg_38869.read()[0].to_bool())? ap_const_lv7_1C: ap_const_lv7_64);
}

void Sobel_phase_strm::thread_z_V_9_7_v_cast_cast_fu_28961_p3() {
    z_V_9_7_v_cast_cast_fu_28961_p3 = (!dneg_9_7_reg_38874.read()[0].is_01())? sc_lv<6>(): ((dneg_9_7_reg_38874.read()[0].to_bool())? ap_const_lv6_E: ap_const_lv6_32);
}

void Sobel_phase_strm::thread_z_V_9_8_fu_29010_p2() {
    z_V_9_8_fu_29010_p2 = (!tmp184_fu_28985_p2.read().is_01() || !tmp1068_cast_fu_29006_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp184_fu_28985_p2.read()) + sc_bigint<13>(tmp1068_cast_fu_29006_p1.read()));
}

void Sobel_phase_strm::thread_z_V_9_8_v_cast_cast_cast_fu_28968_p3() {
    z_V_9_8_v_cast_cast_cast_fu_28968_p3 = (!dneg_9_8_reg_38879.read()[0].is_01())? sc_lv<6>(): ((dneg_9_8_reg_38879.read()[0].to_bool())? ap_const_lv6_7: ap_const_lv6_39);
}

}

