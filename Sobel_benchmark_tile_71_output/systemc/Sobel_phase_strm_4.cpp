#include "Sobel_phase_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Sobel_phase_strm::thread_output_V_pixel_49_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_49_blk_n = output_V_pixel_49_full_n.read();
    } else {
        output_V_pixel_49_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_49_din() {
    output_V_pixel_49_din = (!tmp_1001_fu_57170_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1001_fu_57170_p3.read()[0].to_bool())? p_i_48_fu_57182_p3.read(): tmp_1000_reg_67535.read());
}

void Sobel_phase_strm::thread_output_V_pixel_49_write() {
    output_V_pixel_49_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_4_blk_n = output_V_pixel_4_full_n.read();
    } else {
        output_V_pixel_4_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_4_din() {
    output_V_pixel_4_din = (!tmp_101_fu_56000_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_101_fu_56000_p3.read()[0].to_bool())? p_i_4_fu_56012_p3.read(): tmp_100_reg_66770.read());
}

void Sobel_phase_strm::thread_output_V_pixel_4_write() {
    output_V_pixel_4_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_50_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_50_blk_n = output_V_pixel_50_full_n.read();
    } else {
        output_V_pixel_50_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_50_din() {
    output_V_pixel_50_din = (!tmp_1021_fu_57196_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1021_fu_57196_p3.read()[0].to_bool())? p_i_49_fu_57208_p3.read(): tmp_1020_reg_67552.read());
}

void Sobel_phase_strm::thread_output_V_pixel_50_write() {
    output_V_pixel_50_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_51_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_51_blk_n = output_V_pixel_51_full_n.read();
    } else {
        output_V_pixel_51_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_51_din() {
    output_V_pixel_51_din = (!tmp_1041_fu_57222_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1041_fu_57222_p3.read()[0].to_bool())? p_i_50_fu_57234_p3.read(): tmp_1040_reg_67569.read());
}

void Sobel_phase_strm::thread_output_V_pixel_51_write() {
    output_V_pixel_51_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_52_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_52_blk_n = output_V_pixel_52_full_n.read();
    } else {
        output_V_pixel_52_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_52_din() {
    output_V_pixel_52_din = (!tmp_1061_fu_57248_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1061_fu_57248_p3.read()[0].to_bool())? p_i_51_fu_57260_p3.read(): tmp_1060_reg_67586.read());
}

void Sobel_phase_strm::thread_output_V_pixel_52_write() {
    output_V_pixel_52_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_53_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_53_blk_n = output_V_pixel_53_full_n.read();
    } else {
        output_V_pixel_53_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_53_din() {
    output_V_pixel_53_din = (!tmp_1081_fu_57274_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1081_fu_57274_p3.read()[0].to_bool())? p_i_52_fu_57286_p3.read(): tmp_1080_reg_67603.read());
}

void Sobel_phase_strm::thread_output_V_pixel_53_write() {
    output_V_pixel_53_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_54_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_54_blk_n = output_V_pixel_54_full_n.read();
    } else {
        output_V_pixel_54_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_54_din() {
    output_V_pixel_54_din = (!tmp_1101_fu_57300_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1101_fu_57300_p3.read()[0].to_bool())? p_i_53_fu_57312_p3.read(): tmp_1100_reg_67620.read());
}

void Sobel_phase_strm::thread_output_V_pixel_54_write() {
    output_V_pixel_54_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_55_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_55_blk_n = output_V_pixel_55_full_n.read();
    } else {
        output_V_pixel_55_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_55_din() {
    output_V_pixel_55_din = (!tmp_1121_fu_57326_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1121_fu_57326_p3.read()[0].to_bool())? p_i_54_fu_57338_p3.read(): tmp_1120_reg_67637.read());
}

void Sobel_phase_strm::thread_output_V_pixel_55_write() {
    output_V_pixel_55_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_56_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_56_blk_n = output_V_pixel_56_full_n.read();
    } else {
        output_V_pixel_56_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_56_din() {
    output_V_pixel_56_din = (!tmp_1141_fu_57352_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1141_fu_57352_p3.read()[0].to_bool())? p_i_55_fu_57364_p3.read(): tmp_1140_reg_67654.read());
}

void Sobel_phase_strm::thread_output_V_pixel_56_write() {
    output_V_pixel_56_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_57_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_57_blk_n = output_V_pixel_57_full_n.read();
    } else {
        output_V_pixel_57_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_57_din() {
    output_V_pixel_57_din = (!tmp_1161_fu_57378_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1161_fu_57378_p3.read()[0].to_bool())? p_i_56_fu_57390_p3.read(): tmp_1160_reg_67671.read());
}

void Sobel_phase_strm::thread_output_V_pixel_57_write() {
    output_V_pixel_57_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_58_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_58_blk_n = output_V_pixel_58_full_n.read();
    } else {
        output_V_pixel_58_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_58_din() {
    output_V_pixel_58_din = (!tmp_1181_fu_57404_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1181_fu_57404_p3.read()[0].to_bool())? p_i_57_fu_57416_p3.read(): tmp_1180_reg_67688.read());
}

void Sobel_phase_strm::thread_output_V_pixel_58_write() {
    output_V_pixel_58_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_59_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_59_blk_n = output_V_pixel_59_full_n.read();
    } else {
        output_V_pixel_59_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_59_din() {
    output_V_pixel_59_din = (!tmp_1201_fu_57430_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1201_fu_57430_p3.read()[0].to_bool())? p_i_58_fu_57442_p3.read(): tmp_1200_reg_67705.read());
}

void Sobel_phase_strm::thread_output_V_pixel_59_write() {
    output_V_pixel_59_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_5_blk_n = output_V_pixel_5_full_n.read();
    } else {
        output_V_pixel_5_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_5_din() {
    output_V_pixel_5_din = (!tmp_121_fu_56026_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_121_fu_56026_p3.read()[0].to_bool())? p_i_5_fu_56038_p3.read(): tmp_120_reg_66787.read());
}

void Sobel_phase_strm::thread_output_V_pixel_5_write() {
    output_V_pixel_5_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_60_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_60_blk_n = output_V_pixel_60_full_n.read();
    } else {
        output_V_pixel_60_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_60_din() {
    output_V_pixel_60_din = (!tmp_1221_fu_57456_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1221_fu_57456_p3.read()[0].to_bool())? p_i_59_fu_57468_p3.read(): tmp_1220_reg_67722.read());
}

void Sobel_phase_strm::thread_output_V_pixel_60_write() {
    output_V_pixel_60_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_61_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_61_blk_n = output_V_pixel_61_full_n.read();
    } else {
        output_V_pixel_61_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_61_din() {
    output_V_pixel_61_din = (!tmp_1241_fu_57482_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1241_fu_57482_p3.read()[0].to_bool())? p_i_60_fu_57494_p3.read(): tmp_1240_reg_67739.read());
}

void Sobel_phase_strm::thread_output_V_pixel_61_write() {
    output_V_pixel_61_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_62_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_62_blk_n = output_V_pixel_62_full_n.read();
    } else {
        output_V_pixel_62_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_62_din() {
    output_V_pixel_62_din = (!tmp_1261_fu_57508_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1261_fu_57508_p3.read()[0].to_bool())? p_i_61_fu_57520_p3.read(): tmp_1260_reg_67756.read());
}

void Sobel_phase_strm::thread_output_V_pixel_62_write() {
    output_V_pixel_62_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_63_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_63_blk_n = output_V_pixel_63_full_n.read();
    } else {
        output_V_pixel_63_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_63_din() {
    output_V_pixel_63_din = (!tmp_1281_fu_57534_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1281_fu_57534_p3.read()[0].to_bool())? p_i_62_fu_57546_p3.read(): tmp_1280_reg_67773.read());
}

void Sobel_phase_strm::thread_output_V_pixel_63_write() {
    output_V_pixel_63_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_64_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_64_blk_n = output_V_pixel_64_full_n.read();
    } else {
        output_V_pixel_64_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_64_din() {
    output_V_pixel_64_din = (!tmp_1301_fu_57560_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1301_fu_57560_p3.read()[0].to_bool())? p_i_63_fu_57572_p3.read(): tmp_1300_reg_67790.read());
}

void Sobel_phase_strm::thread_output_V_pixel_64_write() {
    output_V_pixel_64_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_65_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_65_blk_n = output_V_pixel_65_full_n.read();
    } else {
        output_V_pixel_65_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_65_din() {
    output_V_pixel_65_din = (!tmp_1321_fu_57586_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1321_fu_57586_p3.read()[0].to_bool())? p_i_64_fu_57598_p3.read(): tmp_1320_reg_67807.read());
}

void Sobel_phase_strm::thread_output_V_pixel_65_write() {
    output_V_pixel_65_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_66_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_66_blk_n = output_V_pixel_66_full_n.read();
    } else {
        output_V_pixel_66_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_66_din() {
    output_V_pixel_66_din = (!tmp_1341_fu_57612_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1341_fu_57612_p3.read()[0].to_bool())? p_i_65_fu_57624_p3.read(): tmp_1340_reg_67824.read());
}

void Sobel_phase_strm::thread_output_V_pixel_66_write() {
    output_V_pixel_66_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_67_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_67_blk_n = output_V_pixel_67_full_n.read();
    } else {
        output_V_pixel_67_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_67_din() {
    output_V_pixel_67_din = (!tmp_1361_fu_57638_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1361_fu_57638_p3.read()[0].to_bool())? p_i_66_fu_57650_p3.read(): tmp_1360_reg_67841.read());
}

void Sobel_phase_strm::thread_output_V_pixel_67_write() {
    output_V_pixel_67_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_68_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_68_blk_n = output_V_pixel_68_full_n.read();
    } else {
        output_V_pixel_68_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_68_din() {
    output_V_pixel_68_din = (!tmp_1381_fu_57664_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1381_fu_57664_p3.read()[0].to_bool())? p_i_67_fu_57676_p3.read(): tmp_1380_reg_67858.read());
}

void Sobel_phase_strm::thread_output_V_pixel_68_write() {
    output_V_pixel_68_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_69_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_69_blk_n = output_V_pixel_69_full_n.read();
    } else {
        output_V_pixel_69_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_69_din() {
    output_V_pixel_69_din = (!tmp_1401_fu_57690_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1401_fu_57690_p3.read()[0].to_bool())? p_i_68_fu_57702_p3.read(): tmp_1400_reg_67875.read());
}

void Sobel_phase_strm::thread_output_V_pixel_69_write() {
    output_V_pixel_69_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_6_blk_n = output_V_pixel_6_full_n.read();
    } else {
        output_V_pixel_6_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_6_din() {
    output_V_pixel_6_din = (!tmp_141_fu_56052_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_141_fu_56052_p3.read()[0].to_bool())? p_i_6_fu_56064_p3.read(): tmp_140_reg_66804.read());
}

void Sobel_phase_strm::thread_output_V_pixel_6_write() {
    output_V_pixel_6_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_70_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_70_blk_n = output_V_pixel_70_full_n.read();
    } else {
        output_V_pixel_70_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_70_din() {
    output_V_pixel_70_din = (!tmp_1421_fu_57716_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_1421_fu_57716_p3.read()[0].to_bool())? p_i_69_fu_57728_p3.read(): tmp_1420_reg_67892.read());
}

void Sobel_phase_strm::thread_output_V_pixel_70_write() {
    output_V_pixel_70_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_7_blk_n = output_V_pixel_7_full_n.read();
    } else {
        output_V_pixel_7_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_7_din() {
    output_V_pixel_7_din = (!tmp_161_fu_56078_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_161_fu_56078_p3.read()[0].to_bool())? p_i_7_fu_56090_p3.read(): tmp_160_reg_66821.read());
}

void Sobel_phase_strm::thread_output_V_pixel_7_write() {
    output_V_pixel_7_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_8_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_8_blk_n = output_V_pixel_8_full_n.read();
    } else {
        output_V_pixel_8_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_8_din() {
    output_V_pixel_8_din = (!tmp_181_fu_56104_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_181_fu_56104_p3.read()[0].to_bool())? p_i_8_fu_56116_p3.read(): tmp_180_reg_66838.read());
}

void Sobel_phase_strm::thread_output_V_pixel_8_write() {
    output_V_pixel_8_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_output_V_pixel_9_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_57742_pp0_iter5.read()))) {
        output_V_pixel_9_blk_n = output_V_pixel_9_full_n.read();
    } else {
        output_V_pixel_9_blk_n = ap_const_logic_1;
    }
}

void Sobel_phase_strm::thread_output_V_pixel_9_din() {
    output_V_pixel_9_din = (!tmp_201_fu_56130_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_201_fu_56130_p3.read()[0].to_bool())? p_i_9_fu_56142_p3.read(): tmp_200_reg_66855.read());
}

void Sobel_phase_strm::thread_output_V_pixel_9_write() {
    output_V_pixel_9_write = output_V_pixel_11_update.read();
}

void Sobel_phase_strm::thread_p_Val2_10_0_3_cast_fu_36046_p1() {
    p_Val2_10_0_3_cast_fu_36046_p1 = esl_zext<13,12>(p_Val2_10_0_3_fu_36040_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_0_3_fu_36040_p2() {
    p_Val2_10_0_3_fu_36040_p2 = (!ap_const_lv12_E3.is_01() || !z_V_0_2_fu_36030_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_0_2_fu_36030_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_10_3_cast_fu_37576_p1() {
    p_Val2_10_10_3_cast_fu_37576_p1 = esl_zext<13,12>(p_Val2_10_10_3_fu_37570_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_10_3_fu_37570_p2() {
    p_Val2_10_10_3_fu_37570_p2 = (!ap_const_lv12_E3.is_01() || !z_V_10_2_fu_37560_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_10_2_fu_37560_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_11_3_cast_fu_37729_p1() {
    p_Val2_10_11_3_cast_fu_37729_p1 = esl_zext<13,12>(p_Val2_10_11_3_fu_37723_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_11_3_fu_37723_p2() {
    p_Val2_10_11_3_fu_37723_p2 = (!ap_const_lv12_E3.is_01() || !z_V_11_2_fu_37713_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_11_2_fu_37713_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_12_3_cast_fu_37882_p1() {
    p_Val2_10_12_3_cast_fu_37882_p1 = esl_zext<13,12>(p_Val2_10_12_3_fu_37876_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_12_3_fu_37876_p2() {
    p_Val2_10_12_3_fu_37876_p2 = (!ap_const_lv12_E3.is_01() || !z_V_12_2_fu_37866_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_12_2_fu_37866_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_13_3_cast_fu_38035_p1() {
    p_Val2_10_13_3_cast_fu_38035_p1 = esl_zext<13,12>(p_Val2_10_13_3_fu_38029_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_13_3_fu_38029_p2() {
    p_Val2_10_13_3_fu_38029_p2 = (!ap_const_lv12_E3.is_01() || !z_V_13_2_fu_38019_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_13_2_fu_38019_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_14_3_cast_fu_38188_p1() {
    p_Val2_10_14_3_cast_fu_38188_p1 = esl_zext<13,12>(p_Val2_10_14_3_fu_38182_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_14_3_fu_38182_p2() {
    p_Val2_10_14_3_fu_38182_p2 = (!ap_const_lv12_E3.is_01() || !z_V_14_2_fu_38172_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_14_2_fu_38172_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_15_3_cast_fu_38341_p1() {
    p_Val2_10_15_3_cast_fu_38341_p1 = esl_zext<13,12>(p_Val2_10_15_3_fu_38335_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_15_3_fu_38335_p2() {
    p_Val2_10_15_3_fu_38335_p2 = (!ap_const_lv12_E3.is_01() || !z_V_15_2_fu_38325_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_15_2_fu_38325_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_16_3_cast_fu_38494_p1() {
    p_Val2_10_16_3_cast_fu_38494_p1 = esl_zext<13,12>(p_Val2_10_16_3_fu_38488_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_16_3_fu_38488_p2() {
    p_Val2_10_16_3_fu_38488_p2 = (!ap_const_lv12_E3.is_01() || !z_V_16_2_fu_38478_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_16_2_fu_38478_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_17_3_cast_fu_38647_p1() {
    p_Val2_10_17_3_cast_fu_38647_p1 = esl_zext<13,12>(p_Val2_10_17_3_fu_38641_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_17_3_fu_38641_p2() {
    p_Val2_10_17_3_fu_38641_p2 = (!ap_const_lv12_E3.is_01() || !z_V_17_2_fu_38631_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_17_2_fu_38631_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_18_3_cast_fu_38800_p1() {
    p_Val2_10_18_3_cast_fu_38800_p1 = esl_zext<13,12>(p_Val2_10_18_3_fu_38794_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_18_3_fu_38794_p2() {
    p_Val2_10_18_3_fu_38794_p2 = (!ap_const_lv12_E3.is_01() || !z_V_18_2_fu_38784_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_18_2_fu_38784_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_19_3_cast_fu_38953_p1() {
    p_Val2_10_19_3_cast_fu_38953_p1 = esl_zext<13,12>(p_Val2_10_19_3_fu_38947_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_19_3_fu_38947_p2() {
    p_Val2_10_19_3_fu_38947_p2 = (!ap_const_lv12_E3.is_01() || !z_V_19_2_fu_38937_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_19_2_fu_38937_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_1_3_cast_fu_36199_p1() {
    p_Val2_10_1_3_cast_fu_36199_p1 = esl_zext<13,12>(p_Val2_10_1_3_fu_36193_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_1_3_fu_36193_p2() {
    p_Val2_10_1_3_fu_36193_p2 = (!ap_const_lv12_E3.is_01() || !z_V_1_2_fu_36183_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_1_2_fu_36183_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_20_3_cast_fu_39106_p1() {
    p_Val2_10_20_3_cast_fu_39106_p1 = esl_zext<13,12>(p_Val2_10_20_3_fu_39100_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_20_3_fu_39100_p2() {
    p_Val2_10_20_3_fu_39100_p2 = (!ap_const_lv12_E3.is_01() || !z_V_20_2_fu_39090_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_20_2_fu_39090_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_21_3_cast_fu_39259_p1() {
    p_Val2_10_21_3_cast_fu_39259_p1 = esl_zext<13,12>(p_Val2_10_21_3_fu_39253_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_21_3_fu_39253_p2() {
    p_Val2_10_21_3_fu_39253_p2 = (!ap_const_lv12_E3.is_01() || !z_V_21_2_fu_39243_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_21_2_fu_39243_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_22_3_cast_fu_39412_p1() {
    p_Val2_10_22_3_cast_fu_39412_p1 = esl_zext<13,12>(p_Val2_10_22_3_fu_39406_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_22_3_fu_39406_p2() {
    p_Val2_10_22_3_fu_39406_p2 = (!ap_const_lv12_E3.is_01() || !z_V_22_2_fu_39396_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_22_2_fu_39396_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_23_3_cast_fu_39565_p1() {
    p_Val2_10_23_3_cast_fu_39565_p1 = esl_zext<13,12>(p_Val2_10_23_3_fu_39559_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_23_3_fu_39559_p2() {
    p_Val2_10_23_3_fu_39559_p2 = (!ap_const_lv12_E3.is_01() || !z_V_23_2_fu_39549_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_23_2_fu_39549_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_24_3_cast_fu_39718_p1() {
    p_Val2_10_24_3_cast_fu_39718_p1 = esl_zext<13,12>(p_Val2_10_24_3_fu_39712_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_24_3_fu_39712_p2() {
    p_Val2_10_24_3_fu_39712_p2 = (!ap_const_lv12_E3.is_01() || !z_V_24_2_fu_39702_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_24_2_fu_39702_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_25_3_cast_fu_39871_p1() {
    p_Val2_10_25_3_cast_fu_39871_p1 = esl_zext<13,12>(p_Val2_10_25_3_fu_39865_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_25_3_fu_39865_p2() {
    p_Val2_10_25_3_fu_39865_p2 = (!ap_const_lv12_E3.is_01() || !z_V_25_2_fu_39855_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_25_2_fu_39855_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_26_3_cast_fu_40024_p1() {
    p_Val2_10_26_3_cast_fu_40024_p1 = esl_zext<13,12>(p_Val2_10_26_3_fu_40018_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_26_3_fu_40018_p2() {
    p_Val2_10_26_3_fu_40018_p2 = (!ap_const_lv12_E3.is_01() || !z_V_26_2_fu_40008_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_26_2_fu_40008_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_27_3_cast_fu_40177_p1() {
    p_Val2_10_27_3_cast_fu_40177_p1 = esl_zext<13,12>(p_Val2_10_27_3_fu_40171_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_27_3_fu_40171_p2() {
    p_Val2_10_27_3_fu_40171_p2 = (!ap_const_lv12_E3.is_01() || !z_V_27_2_fu_40161_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_27_2_fu_40161_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_28_3_cast_fu_40330_p1() {
    p_Val2_10_28_3_cast_fu_40330_p1 = esl_zext<13,12>(p_Val2_10_28_3_fu_40324_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_28_3_fu_40324_p2() {
    p_Val2_10_28_3_fu_40324_p2 = (!ap_const_lv12_E3.is_01() || !z_V_28_2_fu_40314_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_28_2_fu_40314_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_29_3_cast_fu_40483_p1() {
    p_Val2_10_29_3_cast_fu_40483_p1 = esl_zext<13,12>(p_Val2_10_29_3_fu_40477_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_29_3_fu_40477_p2() {
    p_Val2_10_29_3_fu_40477_p2 = (!ap_const_lv12_E3.is_01() || !z_V_29_2_fu_40467_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_29_2_fu_40467_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_2_3_cast_fu_36352_p1() {
    p_Val2_10_2_3_cast_fu_36352_p1 = esl_zext<13,12>(p_Val2_10_2_3_fu_36346_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_2_3_fu_36346_p2() {
    p_Val2_10_2_3_fu_36346_p2 = (!ap_const_lv12_E3.is_01() || !z_V_2_2_fu_36336_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_2_2_fu_36336_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_30_3_cast_fu_40636_p1() {
    p_Val2_10_30_3_cast_fu_40636_p1 = esl_zext<13,12>(p_Val2_10_30_3_fu_40630_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_30_3_fu_40630_p2() {
    p_Val2_10_30_3_fu_40630_p2 = (!ap_const_lv12_E3.is_01() || !z_V_30_2_fu_40620_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_30_2_fu_40620_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_31_3_cast_fu_40789_p1() {
    p_Val2_10_31_3_cast_fu_40789_p1 = esl_zext<13,12>(p_Val2_10_31_3_fu_40783_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_31_3_fu_40783_p2() {
    p_Val2_10_31_3_fu_40783_p2 = (!ap_const_lv12_E3.is_01() || !z_V_31_2_fu_40773_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_31_2_fu_40773_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_32_3_cast_fu_40942_p1() {
    p_Val2_10_32_3_cast_fu_40942_p1 = esl_zext<13,12>(p_Val2_10_32_3_fu_40936_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_32_3_fu_40936_p2() {
    p_Val2_10_32_3_fu_40936_p2 = (!ap_const_lv12_E3.is_01() || !z_V_32_2_fu_40926_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_32_2_fu_40926_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_33_3_cast_fu_41095_p1() {
    p_Val2_10_33_3_cast_fu_41095_p1 = esl_zext<13,12>(p_Val2_10_33_3_fu_41089_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_33_3_fu_41089_p2() {
    p_Val2_10_33_3_fu_41089_p2 = (!ap_const_lv12_E3.is_01() || !z_V_33_2_fu_41079_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_33_2_fu_41079_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_34_3_cast_fu_41248_p1() {
    p_Val2_10_34_3_cast_fu_41248_p1 = esl_zext<13,12>(p_Val2_10_34_3_fu_41242_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_34_3_fu_41242_p2() {
    p_Val2_10_34_3_fu_41242_p2 = (!ap_const_lv12_E3.is_01() || !z_V_34_2_fu_41232_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_34_2_fu_41232_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_35_3_cast_fu_41401_p1() {
    p_Val2_10_35_3_cast_fu_41401_p1 = esl_zext<13,12>(p_Val2_10_35_3_fu_41395_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_35_3_fu_41395_p2() {
    p_Val2_10_35_3_fu_41395_p2 = (!ap_const_lv12_E3.is_01() || !z_V_35_2_fu_41385_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_35_2_fu_41385_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_36_3_cast_fu_41554_p1() {
    p_Val2_10_36_3_cast_fu_41554_p1 = esl_zext<13,12>(p_Val2_10_36_3_fu_41548_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_36_3_fu_41548_p2() {
    p_Val2_10_36_3_fu_41548_p2 = (!ap_const_lv12_E3.is_01() || !z_V_36_2_fu_41538_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_36_2_fu_41538_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_37_3_cast_fu_41707_p1() {
    p_Val2_10_37_3_cast_fu_41707_p1 = esl_zext<13,12>(p_Val2_10_37_3_fu_41701_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_37_3_fu_41701_p2() {
    p_Val2_10_37_3_fu_41701_p2 = (!ap_const_lv12_E3.is_01() || !z_V_37_2_fu_41691_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_37_2_fu_41691_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_38_3_cast_fu_41860_p1() {
    p_Val2_10_38_3_cast_fu_41860_p1 = esl_zext<13,12>(p_Val2_10_38_3_fu_41854_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_38_3_fu_41854_p2() {
    p_Val2_10_38_3_fu_41854_p2 = (!ap_const_lv12_E3.is_01() || !z_V_38_2_fu_41844_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_38_2_fu_41844_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_39_3_cast_fu_42013_p1() {
    p_Val2_10_39_3_cast_fu_42013_p1 = esl_zext<13,12>(p_Val2_10_39_3_fu_42007_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_39_3_fu_42007_p2() {
    p_Val2_10_39_3_fu_42007_p2 = (!ap_const_lv12_E3.is_01() || !z_V_39_2_fu_41997_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_39_2_fu_41997_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_3_3_cast_fu_36505_p1() {
    p_Val2_10_3_3_cast_fu_36505_p1 = esl_zext<13,12>(p_Val2_10_3_3_fu_36499_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_3_3_fu_36499_p2() {
    p_Val2_10_3_3_fu_36499_p2 = (!ap_const_lv12_E3.is_01() || !z_V_3_2_fu_36489_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_3_2_fu_36489_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_40_3_cast_fu_42166_p1() {
    p_Val2_10_40_3_cast_fu_42166_p1 = esl_zext<13,12>(p_Val2_10_40_3_fu_42160_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_40_3_fu_42160_p2() {
    p_Val2_10_40_3_fu_42160_p2 = (!ap_const_lv12_E3.is_01() || !z_V_40_2_fu_42150_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_40_2_fu_42150_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_41_3_cast_fu_42319_p1() {
    p_Val2_10_41_3_cast_fu_42319_p1 = esl_zext<13,12>(p_Val2_10_41_3_fu_42313_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_41_3_fu_42313_p2() {
    p_Val2_10_41_3_fu_42313_p2 = (!ap_const_lv12_E3.is_01() || !z_V_41_2_fu_42303_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_41_2_fu_42303_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_42_3_cast_fu_42472_p1() {
    p_Val2_10_42_3_cast_fu_42472_p1 = esl_zext<13,12>(p_Val2_10_42_3_fu_42466_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_42_3_fu_42466_p2() {
    p_Val2_10_42_3_fu_42466_p2 = (!ap_const_lv12_E3.is_01() || !z_V_42_2_fu_42456_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_42_2_fu_42456_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_43_3_cast_fu_42625_p1() {
    p_Val2_10_43_3_cast_fu_42625_p1 = esl_zext<13,12>(p_Val2_10_43_3_fu_42619_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_43_3_fu_42619_p2() {
    p_Val2_10_43_3_fu_42619_p2 = (!ap_const_lv12_E3.is_01() || !z_V_43_2_fu_42609_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_43_2_fu_42609_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_44_3_cast_fu_42778_p1() {
    p_Val2_10_44_3_cast_fu_42778_p1 = esl_zext<13,12>(p_Val2_10_44_3_fu_42772_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_44_3_fu_42772_p2() {
    p_Val2_10_44_3_fu_42772_p2 = (!ap_const_lv12_E3.is_01() || !z_V_44_2_fu_42762_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_44_2_fu_42762_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_45_3_cast_fu_42931_p1() {
    p_Val2_10_45_3_cast_fu_42931_p1 = esl_zext<13,12>(p_Val2_10_45_3_fu_42925_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_45_3_fu_42925_p2() {
    p_Val2_10_45_3_fu_42925_p2 = (!ap_const_lv12_E3.is_01() || !z_V_45_2_fu_42915_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_45_2_fu_42915_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_46_3_cast_fu_43084_p1() {
    p_Val2_10_46_3_cast_fu_43084_p1 = esl_zext<13,12>(p_Val2_10_46_3_fu_43078_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_46_3_fu_43078_p2() {
    p_Val2_10_46_3_fu_43078_p2 = (!ap_const_lv12_E3.is_01() || !z_V_46_2_fu_43068_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_46_2_fu_43068_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_47_3_cast_fu_43237_p1() {
    p_Val2_10_47_3_cast_fu_43237_p1 = esl_zext<13,12>(p_Val2_10_47_3_fu_43231_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_47_3_fu_43231_p2() {
    p_Val2_10_47_3_fu_43231_p2 = (!ap_const_lv12_E3.is_01() || !z_V_47_2_fu_43221_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_47_2_fu_43221_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_48_3_cast_fu_43390_p1() {
    p_Val2_10_48_3_cast_fu_43390_p1 = esl_zext<13,12>(p_Val2_10_48_3_fu_43384_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_48_3_fu_43384_p2() {
    p_Val2_10_48_3_fu_43384_p2 = (!ap_const_lv12_E3.is_01() || !z_V_48_2_fu_43374_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_48_2_fu_43374_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_49_3_cast_fu_43543_p1() {
    p_Val2_10_49_3_cast_fu_43543_p1 = esl_zext<13,12>(p_Val2_10_49_3_fu_43537_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_49_3_fu_43537_p2() {
    p_Val2_10_49_3_fu_43537_p2 = (!ap_const_lv12_E3.is_01() || !z_V_49_2_fu_43527_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_49_2_fu_43527_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_4_3_cast_fu_36658_p1() {
    p_Val2_10_4_3_cast_fu_36658_p1 = esl_zext<13,12>(p_Val2_10_4_3_fu_36652_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_4_3_fu_36652_p2() {
    p_Val2_10_4_3_fu_36652_p2 = (!ap_const_lv12_E3.is_01() || !z_V_4_2_fu_36642_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_4_2_fu_36642_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_50_3_cast_fu_43696_p1() {
    p_Val2_10_50_3_cast_fu_43696_p1 = esl_zext<13,12>(p_Val2_10_50_3_fu_43690_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_50_3_fu_43690_p2() {
    p_Val2_10_50_3_fu_43690_p2 = (!ap_const_lv12_E3.is_01() || !z_V_50_2_fu_43680_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_50_2_fu_43680_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_51_3_cast_fu_43849_p1() {
    p_Val2_10_51_3_cast_fu_43849_p1 = esl_zext<13,12>(p_Val2_10_51_3_fu_43843_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_51_3_fu_43843_p2() {
    p_Val2_10_51_3_fu_43843_p2 = (!ap_const_lv12_E3.is_01() || !z_V_51_2_fu_43833_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_51_2_fu_43833_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_52_3_cast_fu_44002_p1() {
    p_Val2_10_52_3_cast_fu_44002_p1 = esl_zext<13,12>(p_Val2_10_52_3_fu_43996_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_52_3_fu_43996_p2() {
    p_Val2_10_52_3_fu_43996_p2 = (!ap_const_lv12_E3.is_01() || !z_V_52_2_fu_43986_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_52_2_fu_43986_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_53_3_cast_fu_44155_p1() {
    p_Val2_10_53_3_cast_fu_44155_p1 = esl_zext<13,12>(p_Val2_10_53_3_fu_44149_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_53_3_fu_44149_p2() {
    p_Val2_10_53_3_fu_44149_p2 = (!ap_const_lv12_E3.is_01() || !z_V_53_2_fu_44139_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_53_2_fu_44139_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_54_3_cast_fu_44308_p1() {
    p_Val2_10_54_3_cast_fu_44308_p1 = esl_zext<13,12>(p_Val2_10_54_3_fu_44302_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_54_3_fu_44302_p2() {
    p_Val2_10_54_3_fu_44302_p2 = (!ap_const_lv12_E3.is_01() || !z_V_54_2_fu_44292_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_54_2_fu_44292_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_55_3_cast_fu_44461_p1() {
    p_Val2_10_55_3_cast_fu_44461_p1 = esl_zext<13,12>(p_Val2_10_55_3_fu_44455_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_55_3_fu_44455_p2() {
    p_Val2_10_55_3_fu_44455_p2 = (!ap_const_lv12_E3.is_01() || !z_V_55_2_fu_44445_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_55_2_fu_44445_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_56_3_cast_fu_44614_p1() {
    p_Val2_10_56_3_cast_fu_44614_p1 = esl_zext<13,12>(p_Val2_10_56_3_fu_44608_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_56_3_fu_44608_p2() {
    p_Val2_10_56_3_fu_44608_p2 = (!ap_const_lv12_E3.is_01() || !z_V_56_2_fu_44598_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_56_2_fu_44598_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_57_3_cast_fu_44767_p1() {
    p_Val2_10_57_3_cast_fu_44767_p1 = esl_zext<13,12>(p_Val2_10_57_3_fu_44761_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_57_3_fu_44761_p2() {
    p_Val2_10_57_3_fu_44761_p2 = (!ap_const_lv12_E3.is_01() || !z_V_57_2_fu_44751_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_57_2_fu_44751_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_58_3_cast_fu_44920_p1() {
    p_Val2_10_58_3_cast_fu_44920_p1 = esl_zext<13,12>(p_Val2_10_58_3_fu_44914_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_58_3_fu_44914_p2() {
    p_Val2_10_58_3_fu_44914_p2 = (!ap_const_lv12_E3.is_01() || !z_V_58_2_fu_44904_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_58_2_fu_44904_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_59_3_cast_fu_45073_p1() {
    p_Val2_10_59_3_cast_fu_45073_p1 = esl_zext<13,12>(p_Val2_10_59_3_fu_45067_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_59_3_fu_45067_p2() {
    p_Val2_10_59_3_fu_45067_p2 = (!ap_const_lv12_E3.is_01() || !z_V_59_2_fu_45057_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_59_2_fu_45057_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_5_3_cast_fu_36811_p1() {
    p_Val2_10_5_3_cast_fu_36811_p1 = esl_zext<13,12>(p_Val2_10_5_3_fu_36805_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_5_3_fu_36805_p2() {
    p_Val2_10_5_3_fu_36805_p2 = (!ap_const_lv12_E3.is_01() || !z_V_5_2_fu_36795_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_5_2_fu_36795_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_60_3_cast_fu_45226_p1() {
    p_Val2_10_60_3_cast_fu_45226_p1 = esl_zext<13,12>(p_Val2_10_60_3_fu_45220_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_60_3_fu_45220_p2() {
    p_Val2_10_60_3_fu_45220_p2 = (!ap_const_lv12_E3.is_01() || !z_V_60_2_fu_45210_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_60_2_fu_45210_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_61_3_cast_fu_45379_p1() {
    p_Val2_10_61_3_cast_fu_45379_p1 = esl_zext<13,12>(p_Val2_10_61_3_fu_45373_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_61_3_fu_45373_p2() {
    p_Val2_10_61_3_fu_45373_p2 = (!ap_const_lv12_E3.is_01() || !z_V_61_2_fu_45363_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_61_2_fu_45363_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_62_3_cast_fu_45532_p1() {
    p_Val2_10_62_3_cast_fu_45532_p1 = esl_zext<13,12>(p_Val2_10_62_3_fu_45526_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_62_3_fu_45526_p2() {
    p_Val2_10_62_3_fu_45526_p2 = (!ap_const_lv12_E3.is_01() || !z_V_62_2_fu_45516_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_62_2_fu_45516_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_63_3_cast_fu_45685_p1() {
    p_Val2_10_63_3_cast_fu_45685_p1 = esl_zext<13,12>(p_Val2_10_63_3_fu_45679_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_63_3_fu_45679_p2() {
    p_Val2_10_63_3_fu_45679_p2 = (!ap_const_lv12_E3.is_01() || !z_V_63_2_fu_45669_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_63_2_fu_45669_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_64_3_cast_fu_45838_p1() {
    p_Val2_10_64_3_cast_fu_45838_p1 = esl_zext<13,12>(p_Val2_10_64_3_fu_45832_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_64_3_fu_45832_p2() {
    p_Val2_10_64_3_fu_45832_p2 = (!ap_const_lv12_E3.is_01() || !z_V_64_2_fu_45822_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_64_2_fu_45822_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_65_3_cast_fu_45991_p1() {
    p_Val2_10_65_3_cast_fu_45991_p1 = esl_zext<13,12>(p_Val2_10_65_3_fu_45985_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_65_3_fu_45985_p2() {
    p_Val2_10_65_3_fu_45985_p2 = (!ap_const_lv12_E3.is_01() || !z_V_65_2_fu_45975_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_65_2_fu_45975_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_66_3_cast_fu_46144_p1() {
    p_Val2_10_66_3_cast_fu_46144_p1 = esl_zext<13,12>(p_Val2_10_66_3_fu_46138_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_66_3_fu_46138_p2() {
    p_Val2_10_66_3_fu_46138_p2 = (!ap_const_lv12_E3.is_01() || !z_V_66_2_fu_46128_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_66_2_fu_46128_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_67_3_cast_fu_46297_p1() {
    p_Val2_10_67_3_cast_fu_46297_p1 = esl_zext<13,12>(p_Val2_10_67_3_fu_46291_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_67_3_fu_46291_p2() {
    p_Val2_10_67_3_fu_46291_p2 = (!ap_const_lv12_E3.is_01() || !z_V_67_2_fu_46281_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_67_2_fu_46281_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_68_3_cast_fu_46450_p1() {
    p_Val2_10_68_3_cast_fu_46450_p1 = esl_zext<13,12>(p_Val2_10_68_3_fu_46444_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_68_3_fu_46444_p2() {
    p_Val2_10_68_3_fu_46444_p2 = (!ap_const_lv12_E3.is_01() || !z_V_68_2_fu_46434_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_68_2_fu_46434_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_69_3_cast_fu_46603_p1() {
    p_Val2_10_69_3_cast_fu_46603_p1 = esl_zext<13,12>(p_Val2_10_69_3_fu_46597_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_69_3_fu_46597_p2() {
    p_Val2_10_69_3_fu_46597_p2 = (!ap_const_lv12_E3.is_01() || !z_V_69_2_fu_46587_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_69_2_fu_46587_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_6_3_cast_fu_36964_p1() {
    p_Val2_10_6_3_cast_fu_36964_p1 = esl_zext<13,12>(p_Val2_10_6_3_fu_36958_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_6_3_fu_36958_p2() {
    p_Val2_10_6_3_fu_36958_p2 = (!ap_const_lv12_E3.is_01() || !z_V_6_2_fu_36948_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_6_2_fu_36948_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_70_3_cast_fu_46756_p1() {
    p_Val2_10_70_3_cast_fu_46756_p1 = esl_zext<13,12>(p_Val2_10_70_3_fu_46750_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_70_3_fu_46750_p2() {
    p_Val2_10_70_3_fu_46750_p2 = (!ap_const_lv12_E3.is_01() || !z_V_70_2_fu_46740_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_70_2_fu_46740_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_7_3_cast_fu_37117_p1() {
    p_Val2_10_7_3_cast_fu_37117_p1 = esl_zext<13,12>(p_Val2_10_7_3_fu_37111_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_7_3_fu_37111_p2() {
    p_Val2_10_7_3_fu_37111_p2 = (!ap_const_lv12_E3.is_01() || !z_V_7_2_fu_37101_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_7_2_fu_37101_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_8_3_cast_fu_37270_p1() {
    p_Val2_10_8_3_cast_fu_37270_p1 = esl_zext<13,12>(p_Val2_10_8_3_fu_37264_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_8_3_fu_37264_p2() {
    p_Val2_10_8_3_fu_37264_p2 = (!ap_const_lv12_E3.is_01() || !z_V_8_2_fu_37254_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_8_2_fu_37254_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_10_9_3_cast_fu_37423_p1() {
    p_Val2_10_9_3_cast_fu_37423_p1 = esl_zext<13,12>(p_Val2_10_9_3_fu_37417_p2.read());
}

void Sobel_phase_strm::thread_p_Val2_10_9_3_fu_37417_p2() {
    p_Val2_10_9_3_fu_37417_p2 = (!ap_const_lv12_E3.is_01() || !z_V_9_2_fu_37407_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E3) + sc_biguint<12>(z_V_9_2_fu_37407_p2.read()));
}

void Sobel_phase_strm::thread_p_Val2_11_0_1_fu_3458_p1() {
    p_Val2_11_0_1_fu_3458_p1 = esl_sext<15,13>(tmp_4_fu_3414_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_2_fu_11798_p1() {
    p_Val2_11_0_2_fu_11798_p1 = esl_sext<15,12>(tmp_8_fu_11754_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_3_fu_11876_p1() {
    p_Val2_11_0_3_fu_11876_p1 = esl_sext<15,12>(tmp_27_0_2_fu_11836_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_4_fu_25529_p1() {
    p_Val2_11_0_4_fu_25529_p1 = esl_sext<15,11>(tmp_27_0_3_reg_60472.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_5_fu_25604_p1() {
    p_Val2_11_0_5_fu_25604_p1 = esl_sext<15,10>(tmp_27_0_4_fu_25564_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_0_6_fu_36084_p1() {
    p_Val2_11_0_6_fu_36084_p1 = esl_sext<15,9>(tmp_27_0_5_reg_62886.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_1_fu_4638_p1() {
    p_Val2_11_10_1_fu_4638_p1 = esl_sext<15,13>(tmp_203_fu_4594_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_2_fu_13738_p1() {
    p_Val2_11_10_2_fu_13738_p1 = esl_sext<15,12>(tmp_206_fu_13694_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_3_fu_13816_p1() {
    p_Val2_11_10_3_fu_13816_p1 = esl_sext<15,12>(tmp_27_10_2_fu_13776_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_4_fu_27009_p1() {
    p_Val2_11_10_4_fu_27009_p1 = esl_sext<15,11>(tmp_27_10_3_reg_60812.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_5_fu_27084_p1() {
    p_Val2_11_10_5_fu_27084_p1 = esl_sext<15,10>(tmp_27_10_4_fu_27044_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_10_6_fu_37614_p1() {
    p_Val2_11_10_6_fu_37614_p1 = esl_sext<15,9>(tmp_27_10_5_reg_63226.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_1_fu_4756_p1() {
    p_Val2_11_11_1_fu_4756_p1 = esl_sext<15,13>(tmp_223_fu_4712_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_2_fu_13932_p1() {
    p_Val2_11_11_2_fu_13932_p1 = esl_sext<15,12>(tmp_226_fu_13888_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_3_fu_14010_p1() {
    p_Val2_11_11_3_fu_14010_p1 = esl_sext<15,12>(tmp_27_11_2_fu_13970_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_4_fu_27157_p1() {
    p_Val2_11_11_4_fu_27157_p1 = esl_sext<15,11>(tmp_27_11_3_reg_60846.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_5_fu_27232_p1() {
    p_Val2_11_11_5_fu_27232_p1 = esl_sext<15,10>(tmp_27_11_4_fu_27192_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_11_6_fu_37767_p1() {
    p_Val2_11_11_6_fu_37767_p1 = esl_sext<15,9>(tmp_27_11_5_reg_63260.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_1_fu_4874_p1() {
    p_Val2_11_12_1_fu_4874_p1 = esl_sext<15,13>(tmp_243_fu_4830_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_2_fu_14126_p1() {
    p_Val2_11_12_2_fu_14126_p1 = esl_sext<15,12>(tmp_246_fu_14082_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_3_fu_14204_p1() {
    p_Val2_11_12_3_fu_14204_p1 = esl_sext<15,12>(tmp_27_12_2_fu_14164_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_4_fu_27305_p1() {
    p_Val2_11_12_4_fu_27305_p1 = esl_sext<15,11>(tmp_27_12_3_reg_60880.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_5_fu_27380_p1() {
    p_Val2_11_12_5_fu_27380_p1 = esl_sext<15,10>(tmp_27_12_4_fu_27340_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_12_6_fu_37920_p1() {
    p_Val2_11_12_6_fu_37920_p1 = esl_sext<15,9>(tmp_27_12_5_reg_63294.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_1_fu_4992_p1() {
    p_Val2_11_13_1_fu_4992_p1 = esl_sext<15,13>(tmp_263_fu_4948_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_2_fu_14320_p1() {
    p_Val2_11_13_2_fu_14320_p1 = esl_sext<15,12>(tmp_266_fu_14276_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_3_fu_14398_p1() {
    p_Val2_11_13_3_fu_14398_p1 = esl_sext<15,12>(tmp_27_13_2_fu_14358_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_4_fu_27453_p1() {
    p_Val2_11_13_4_fu_27453_p1 = esl_sext<15,11>(tmp_27_13_3_reg_60914.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_5_fu_27528_p1() {
    p_Val2_11_13_5_fu_27528_p1 = esl_sext<15,10>(tmp_27_13_4_fu_27488_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_13_6_fu_38073_p1() {
    p_Val2_11_13_6_fu_38073_p1 = esl_sext<15,9>(tmp_27_13_5_reg_63328.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_1_fu_5110_p1() {
    p_Val2_11_14_1_fu_5110_p1 = esl_sext<15,13>(tmp_283_fu_5066_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_2_fu_14514_p1() {
    p_Val2_11_14_2_fu_14514_p1 = esl_sext<15,12>(tmp_286_fu_14470_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_3_fu_14592_p1() {
    p_Val2_11_14_3_fu_14592_p1 = esl_sext<15,12>(tmp_27_14_2_fu_14552_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_4_fu_27601_p1() {
    p_Val2_11_14_4_fu_27601_p1 = esl_sext<15,11>(tmp_27_14_3_reg_60948.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_5_fu_27676_p1() {
    p_Val2_11_14_5_fu_27676_p1 = esl_sext<15,10>(tmp_27_14_4_fu_27636_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_14_6_fu_38226_p1() {
    p_Val2_11_14_6_fu_38226_p1 = esl_sext<15,9>(tmp_27_14_5_reg_63362.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_1_fu_5228_p1() {
    p_Val2_11_15_1_fu_5228_p1 = esl_sext<15,13>(tmp_303_fu_5184_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_2_fu_14708_p1() {
    p_Val2_11_15_2_fu_14708_p1 = esl_sext<15,12>(tmp_306_fu_14664_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_3_fu_14786_p1() {
    p_Val2_11_15_3_fu_14786_p1 = esl_sext<15,12>(tmp_27_15_2_fu_14746_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_4_fu_27749_p1() {
    p_Val2_11_15_4_fu_27749_p1 = esl_sext<15,11>(tmp_27_15_3_reg_60982.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_5_fu_27824_p1() {
    p_Val2_11_15_5_fu_27824_p1 = esl_sext<15,10>(tmp_27_15_4_fu_27784_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_15_6_fu_38379_p1() {
    p_Val2_11_15_6_fu_38379_p1 = esl_sext<15,9>(tmp_27_15_5_reg_63396.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_1_fu_5346_p1() {
    p_Val2_11_16_1_fu_5346_p1 = esl_sext<15,13>(tmp_323_fu_5302_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_2_fu_14902_p1() {
    p_Val2_11_16_2_fu_14902_p1 = esl_sext<15,12>(tmp_326_fu_14858_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_3_fu_14980_p1() {
    p_Val2_11_16_3_fu_14980_p1 = esl_sext<15,12>(tmp_27_16_2_fu_14940_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_4_fu_27897_p1() {
    p_Val2_11_16_4_fu_27897_p1 = esl_sext<15,11>(tmp_27_16_3_reg_61016.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_5_fu_27972_p1() {
    p_Val2_11_16_5_fu_27972_p1 = esl_sext<15,10>(tmp_27_16_4_fu_27932_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_16_6_fu_38532_p1() {
    p_Val2_11_16_6_fu_38532_p1 = esl_sext<15,9>(tmp_27_16_5_reg_63430.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_1_fu_5464_p1() {
    p_Val2_11_17_1_fu_5464_p1 = esl_sext<15,13>(tmp_343_fu_5420_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_2_fu_15096_p1() {
    p_Val2_11_17_2_fu_15096_p1 = esl_sext<15,12>(tmp_346_fu_15052_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_3_fu_15174_p1() {
    p_Val2_11_17_3_fu_15174_p1 = esl_sext<15,12>(tmp_27_17_2_fu_15134_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_4_fu_28045_p1() {
    p_Val2_11_17_4_fu_28045_p1 = esl_sext<15,11>(tmp_27_17_3_reg_61050.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_5_fu_28120_p1() {
    p_Val2_11_17_5_fu_28120_p1 = esl_sext<15,10>(tmp_27_17_4_fu_28080_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_17_6_fu_38685_p1() {
    p_Val2_11_17_6_fu_38685_p1 = esl_sext<15,9>(tmp_27_17_5_reg_63464.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_1_fu_5582_p1() {
    p_Val2_11_18_1_fu_5582_p1 = esl_sext<15,13>(tmp_363_fu_5538_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_2_fu_15290_p1() {
    p_Val2_11_18_2_fu_15290_p1 = esl_sext<15,12>(tmp_366_fu_15246_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_3_fu_15368_p1() {
    p_Val2_11_18_3_fu_15368_p1 = esl_sext<15,12>(tmp_27_18_2_fu_15328_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_4_fu_28193_p1() {
    p_Val2_11_18_4_fu_28193_p1 = esl_sext<15,11>(tmp_27_18_3_reg_61084.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_5_fu_28268_p1() {
    p_Val2_11_18_5_fu_28268_p1 = esl_sext<15,10>(tmp_27_18_4_fu_28228_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_18_6_fu_38838_p1() {
    p_Val2_11_18_6_fu_38838_p1 = esl_sext<15,9>(tmp_27_18_5_reg_63498.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_1_fu_5700_p1() {
    p_Val2_11_19_1_fu_5700_p1 = esl_sext<15,13>(tmp_383_fu_5656_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_2_fu_15484_p1() {
    p_Val2_11_19_2_fu_15484_p1 = esl_sext<15,12>(tmp_386_fu_15440_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_3_fu_15562_p1() {
    p_Val2_11_19_3_fu_15562_p1 = esl_sext<15,12>(tmp_27_19_2_fu_15522_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_4_fu_28341_p1() {
    p_Val2_11_19_4_fu_28341_p1 = esl_sext<15,11>(tmp_27_19_3_reg_61118.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_5_fu_28416_p1() {
    p_Val2_11_19_5_fu_28416_p1 = esl_sext<15,10>(tmp_27_19_4_fu_28376_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_19_6_fu_38991_p1() {
    p_Val2_11_19_6_fu_38991_p1 = esl_sext<15,9>(tmp_27_19_5_reg_63532.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_1_fu_3576_p1() {
    p_Val2_11_1_1_fu_3576_p1 = esl_sext<15,13>(tmp_23_fu_3532_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_2_fu_11992_p1() {
    p_Val2_11_1_2_fu_11992_p1 = esl_sext<15,12>(tmp_26_fu_11948_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_3_fu_12070_p1() {
    p_Val2_11_1_3_fu_12070_p1 = esl_sext<15,12>(tmp_27_1_2_fu_12030_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_4_fu_25677_p1() {
    p_Val2_11_1_4_fu_25677_p1 = esl_sext<15,11>(tmp_27_1_3_reg_60506.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_5_fu_25752_p1() {
    p_Val2_11_1_5_fu_25752_p1 = esl_sext<15,10>(tmp_27_1_4_fu_25712_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_1_6_fu_36237_p1() {
    p_Val2_11_1_6_fu_36237_p1 = esl_sext<15,9>(tmp_27_1_5_reg_62920.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_1_fu_5818_p1() {
    p_Val2_11_20_1_fu_5818_p1 = esl_sext<15,13>(tmp_403_fu_5774_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_2_fu_15678_p1() {
    p_Val2_11_20_2_fu_15678_p1 = esl_sext<15,12>(tmp_406_fu_15634_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_3_fu_15756_p1() {
    p_Val2_11_20_3_fu_15756_p1 = esl_sext<15,12>(tmp_27_20_2_fu_15716_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_4_fu_28489_p1() {
    p_Val2_11_20_4_fu_28489_p1 = esl_sext<15,11>(tmp_27_20_3_reg_61152.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_5_fu_28564_p1() {
    p_Val2_11_20_5_fu_28564_p1 = esl_sext<15,10>(tmp_27_20_4_fu_28524_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_20_6_fu_39144_p1() {
    p_Val2_11_20_6_fu_39144_p1 = esl_sext<15,9>(tmp_27_20_5_reg_63566.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_1_fu_5936_p1() {
    p_Val2_11_21_1_fu_5936_p1 = esl_sext<15,13>(tmp_423_fu_5892_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_2_fu_15872_p1() {
    p_Val2_11_21_2_fu_15872_p1 = esl_sext<15,12>(tmp_426_fu_15828_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_3_fu_15950_p1() {
    p_Val2_11_21_3_fu_15950_p1 = esl_sext<15,12>(tmp_27_21_2_fu_15910_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_4_fu_28637_p1() {
    p_Val2_11_21_4_fu_28637_p1 = esl_sext<15,11>(tmp_27_21_3_reg_61186.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_5_fu_28712_p1() {
    p_Val2_11_21_5_fu_28712_p1 = esl_sext<15,10>(tmp_27_21_4_fu_28672_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_21_6_fu_39297_p1() {
    p_Val2_11_21_6_fu_39297_p1 = esl_sext<15,9>(tmp_27_21_5_reg_63600.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_1_fu_6054_p1() {
    p_Val2_11_22_1_fu_6054_p1 = esl_sext<15,13>(tmp_443_fu_6010_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_2_fu_16066_p1() {
    p_Val2_11_22_2_fu_16066_p1 = esl_sext<15,12>(tmp_446_fu_16022_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_3_fu_16144_p1() {
    p_Val2_11_22_3_fu_16144_p1 = esl_sext<15,12>(tmp_27_22_2_fu_16104_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_4_fu_28785_p1() {
    p_Val2_11_22_4_fu_28785_p1 = esl_sext<15,11>(tmp_27_22_3_reg_61220.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_5_fu_28860_p1() {
    p_Val2_11_22_5_fu_28860_p1 = esl_sext<15,10>(tmp_27_22_4_fu_28820_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_22_6_fu_39450_p1() {
    p_Val2_11_22_6_fu_39450_p1 = esl_sext<15,9>(tmp_27_22_5_reg_63634.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_1_fu_6172_p1() {
    p_Val2_11_23_1_fu_6172_p1 = esl_sext<15,13>(tmp_463_fu_6128_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_2_fu_16260_p1() {
    p_Val2_11_23_2_fu_16260_p1 = esl_sext<15,12>(tmp_466_fu_16216_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_3_fu_16338_p1() {
    p_Val2_11_23_3_fu_16338_p1 = esl_sext<15,12>(tmp_27_23_2_fu_16298_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_4_fu_28933_p1() {
    p_Val2_11_23_4_fu_28933_p1 = esl_sext<15,11>(tmp_27_23_3_reg_61254.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_5_fu_29008_p1() {
    p_Val2_11_23_5_fu_29008_p1 = esl_sext<15,10>(tmp_27_23_4_fu_28968_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_23_6_fu_39603_p1() {
    p_Val2_11_23_6_fu_39603_p1 = esl_sext<15,9>(tmp_27_23_5_reg_63668.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_1_fu_6290_p1() {
    p_Val2_11_24_1_fu_6290_p1 = esl_sext<15,13>(tmp_483_fu_6246_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_2_fu_16454_p1() {
    p_Val2_11_24_2_fu_16454_p1 = esl_sext<15,12>(tmp_486_fu_16410_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_3_fu_16532_p1() {
    p_Val2_11_24_3_fu_16532_p1 = esl_sext<15,12>(tmp_27_24_2_fu_16492_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_4_fu_29081_p1() {
    p_Val2_11_24_4_fu_29081_p1 = esl_sext<15,11>(tmp_27_24_3_reg_61288.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_5_fu_29156_p1() {
    p_Val2_11_24_5_fu_29156_p1 = esl_sext<15,10>(tmp_27_24_4_fu_29116_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_24_6_fu_39756_p1() {
    p_Val2_11_24_6_fu_39756_p1 = esl_sext<15,9>(tmp_27_24_5_reg_63702.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_1_fu_6408_p1() {
    p_Val2_11_25_1_fu_6408_p1 = esl_sext<15,13>(tmp_503_fu_6364_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_2_fu_16648_p1() {
    p_Val2_11_25_2_fu_16648_p1 = esl_sext<15,12>(tmp_506_fu_16604_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_3_fu_16726_p1() {
    p_Val2_11_25_3_fu_16726_p1 = esl_sext<15,12>(tmp_27_25_2_fu_16686_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_4_fu_29229_p1() {
    p_Val2_11_25_4_fu_29229_p1 = esl_sext<15,11>(tmp_27_25_3_reg_61322.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_5_fu_29304_p1() {
    p_Val2_11_25_5_fu_29304_p1 = esl_sext<15,10>(tmp_27_25_4_fu_29264_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_25_6_fu_39909_p1() {
    p_Val2_11_25_6_fu_39909_p1 = esl_sext<15,9>(tmp_27_25_5_reg_63736.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_1_fu_6526_p1() {
    p_Val2_11_26_1_fu_6526_p1 = esl_sext<15,13>(tmp_523_fu_6482_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_2_fu_16842_p1() {
    p_Val2_11_26_2_fu_16842_p1 = esl_sext<15,12>(tmp_526_fu_16798_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_3_fu_16920_p1() {
    p_Val2_11_26_3_fu_16920_p1 = esl_sext<15,12>(tmp_27_26_2_fu_16880_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_4_fu_29377_p1() {
    p_Val2_11_26_4_fu_29377_p1 = esl_sext<15,11>(tmp_27_26_3_reg_61356.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_5_fu_29452_p1() {
    p_Val2_11_26_5_fu_29452_p1 = esl_sext<15,10>(tmp_27_26_4_fu_29412_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_26_6_fu_40062_p1() {
    p_Val2_11_26_6_fu_40062_p1 = esl_sext<15,9>(tmp_27_26_5_reg_63770.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_1_fu_6644_p1() {
    p_Val2_11_27_1_fu_6644_p1 = esl_sext<15,13>(tmp_543_fu_6600_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_2_fu_17036_p1() {
    p_Val2_11_27_2_fu_17036_p1 = esl_sext<15,12>(tmp_546_fu_16992_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_3_fu_17114_p1() {
    p_Val2_11_27_3_fu_17114_p1 = esl_sext<15,12>(tmp_27_27_2_fu_17074_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_4_fu_29525_p1() {
    p_Val2_11_27_4_fu_29525_p1 = esl_sext<15,11>(tmp_27_27_3_reg_61390.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_5_fu_29600_p1() {
    p_Val2_11_27_5_fu_29600_p1 = esl_sext<15,10>(tmp_27_27_4_fu_29560_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_27_6_fu_40215_p1() {
    p_Val2_11_27_6_fu_40215_p1 = esl_sext<15,9>(tmp_27_27_5_reg_63804.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_1_fu_6762_p1() {
    p_Val2_11_28_1_fu_6762_p1 = esl_sext<15,13>(tmp_563_fu_6718_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_2_fu_17230_p1() {
    p_Val2_11_28_2_fu_17230_p1 = esl_sext<15,12>(tmp_566_fu_17186_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_3_fu_17308_p1() {
    p_Val2_11_28_3_fu_17308_p1 = esl_sext<15,12>(tmp_27_28_2_fu_17268_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_4_fu_29673_p1() {
    p_Val2_11_28_4_fu_29673_p1 = esl_sext<15,11>(tmp_27_28_3_reg_61424.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_5_fu_29748_p1() {
    p_Val2_11_28_5_fu_29748_p1 = esl_sext<15,10>(tmp_27_28_4_fu_29708_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_28_6_fu_40368_p1() {
    p_Val2_11_28_6_fu_40368_p1 = esl_sext<15,9>(tmp_27_28_5_reg_63838.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_1_fu_6880_p1() {
    p_Val2_11_29_1_fu_6880_p1 = esl_sext<15,13>(tmp_583_fu_6836_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_2_fu_17424_p1() {
    p_Val2_11_29_2_fu_17424_p1 = esl_sext<15,12>(tmp_586_fu_17380_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_3_fu_17502_p1() {
    p_Val2_11_29_3_fu_17502_p1 = esl_sext<15,12>(tmp_27_29_2_fu_17462_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_4_fu_29821_p1() {
    p_Val2_11_29_4_fu_29821_p1 = esl_sext<15,11>(tmp_27_29_3_reg_61458.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_5_fu_29896_p1() {
    p_Val2_11_29_5_fu_29896_p1 = esl_sext<15,10>(tmp_27_29_4_fu_29856_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_29_6_fu_40521_p1() {
    p_Val2_11_29_6_fu_40521_p1 = esl_sext<15,9>(tmp_27_29_5_reg_63872.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_1_fu_3694_p1() {
    p_Val2_11_2_1_fu_3694_p1 = esl_sext<15,13>(tmp_43_fu_3650_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_2_fu_12186_p1() {
    p_Val2_11_2_2_fu_12186_p1 = esl_sext<15,12>(tmp_46_fu_12142_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_3_fu_12264_p1() {
    p_Val2_11_2_3_fu_12264_p1 = esl_sext<15,12>(tmp_27_2_2_fu_12224_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_4_fu_25825_p1() {
    p_Val2_11_2_4_fu_25825_p1 = esl_sext<15,11>(tmp_27_2_3_reg_60540.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_5_fu_25900_p1() {
    p_Val2_11_2_5_fu_25900_p1 = esl_sext<15,10>(tmp_27_2_4_fu_25860_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_2_6_fu_36390_p1() {
    p_Val2_11_2_6_fu_36390_p1 = esl_sext<15,9>(tmp_27_2_5_reg_62954.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_1_fu_6998_p1() {
    p_Val2_11_30_1_fu_6998_p1 = esl_sext<15,13>(tmp_603_fu_6954_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_2_fu_17618_p1() {
    p_Val2_11_30_2_fu_17618_p1 = esl_sext<15,12>(tmp_606_fu_17574_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_3_fu_17696_p1() {
    p_Val2_11_30_3_fu_17696_p1 = esl_sext<15,12>(tmp_27_30_2_fu_17656_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_4_fu_29969_p1() {
    p_Val2_11_30_4_fu_29969_p1 = esl_sext<15,11>(tmp_27_30_3_reg_61492.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_5_fu_30044_p1() {
    p_Val2_11_30_5_fu_30044_p1 = esl_sext<15,10>(tmp_27_30_4_fu_30004_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_30_6_fu_40674_p1() {
    p_Val2_11_30_6_fu_40674_p1 = esl_sext<15,9>(tmp_27_30_5_reg_63906.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_1_fu_7116_p1() {
    p_Val2_11_31_1_fu_7116_p1 = esl_sext<15,13>(tmp_623_fu_7072_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_2_fu_17812_p1() {
    p_Val2_11_31_2_fu_17812_p1 = esl_sext<15,12>(tmp_626_fu_17768_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_3_fu_17890_p1() {
    p_Val2_11_31_3_fu_17890_p1 = esl_sext<15,12>(tmp_27_31_2_fu_17850_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_4_fu_30117_p1() {
    p_Val2_11_31_4_fu_30117_p1 = esl_sext<15,11>(tmp_27_31_3_reg_61526.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_5_fu_30192_p1() {
    p_Val2_11_31_5_fu_30192_p1 = esl_sext<15,10>(tmp_27_31_4_fu_30152_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_31_6_fu_40827_p1() {
    p_Val2_11_31_6_fu_40827_p1 = esl_sext<15,9>(tmp_27_31_5_reg_63940.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_1_fu_7234_p1() {
    p_Val2_11_32_1_fu_7234_p1 = esl_sext<15,13>(tmp_643_fu_7190_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_2_fu_18006_p1() {
    p_Val2_11_32_2_fu_18006_p1 = esl_sext<15,12>(tmp_646_fu_17962_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_3_fu_18084_p1() {
    p_Val2_11_32_3_fu_18084_p1 = esl_sext<15,12>(tmp_27_32_2_fu_18044_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_4_fu_30265_p1() {
    p_Val2_11_32_4_fu_30265_p1 = esl_sext<15,11>(tmp_27_32_3_reg_61560.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_5_fu_30340_p1() {
    p_Val2_11_32_5_fu_30340_p1 = esl_sext<15,10>(tmp_27_32_4_fu_30300_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_32_6_fu_40980_p1() {
    p_Val2_11_32_6_fu_40980_p1 = esl_sext<15,9>(tmp_27_32_5_reg_63974.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_1_fu_7352_p1() {
    p_Val2_11_33_1_fu_7352_p1 = esl_sext<15,13>(tmp_663_fu_7308_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_2_fu_18200_p1() {
    p_Val2_11_33_2_fu_18200_p1 = esl_sext<15,12>(tmp_666_fu_18156_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_3_fu_18278_p1() {
    p_Val2_11_33_3_fu_18278_p1 = esl_sext<15,12>(tmp_27_33_2_fu_18238_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_4_fu_30413_p1() {
    p_Val2_11_33_4_fu_30413_p1 = esl_sext<15,11>(tmp_27_33_3_reg_61594.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_5_fu_30488_p1() {
    p_Val2_11_33_5_fu_30488_p1 = esl_sext<15,10>(tmp_27_33_4_fu_30448_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_33_6_fu_41133_p1() {
    p_Val2_11_33_6_fu_41133_p1 = esl_sext<15,9>(tmp_27_33_5_reg_64008.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_1_fu_7470_p1() {
    p_Val2_11_34_1_fu_7470_p1 = esl_sext<15,13>(tmp_683_fu_7426_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_2_fu_18394_p1() {
    p_Val2_11_34_2_fu_18394_p1 = esl_sext<15,12>(tmp_686_fu_18350_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_3_fu_18472_p1() {
    p_Val2_11_34_3_fu_18472_p1 = esl_sext<15,12>(tmp_27_34_2_fu_18432_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_4_fu_30561_p1() {
    p_Val2_11_34_4_fu_30561_p1 = esl_sext<15,11>(tmp_27_34_3_reg_61628.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_5_fu_30636_p1() {
    p_Val2_11_34_5_fu_30636_p1 = esl_sext<15,10>(tmp_27_34_4_fu_30596_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_34_6_fu_41286_p1() {
    p_Val2_11_34_6_fu_41286_p1 = esl_sext<15,9>(tmp_27_34_5_reg_64042.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_1_fu_7588_p1() {
    p_Val2_11_35_1_fu_7588_p1 = esl_sext<15,13>(tmp_703_fu_7544_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_2_fu_18588_p1() {
    p_Val2_11_35_2_fu_18588_p1 = esl_sext<15,12>(tmp_706_fu_18544_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_3_fu_18666_p1() {
    p_Val2_11_35_3_fu_18666_p1 = esl_sext<15,12>(tmp_27_35_2_fu_18626_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_4_fu_30709_p1() {
    p_Val2_11_35_4_fu_30709_p1 = esl_sext<15,11>(tmp_27_35_3_reg_61662.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_5_fu_30784_p1() {
    p_Val2_11_35_5_fu_30784_p1 = esl_sext<15,10>(tmp_27_35_4_fu_30744_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_35_6_fu_41439_p1() {
    p_Val2_11_35_6_fu_41439_p1 = esl_sext<15,9>(tmp_27_35_5_reg_64076.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_1_fu_7706_p1() {
    p_Val2_11_36_1_fu_7706_p1 = esl_sext<15,13>(tmp_723_fu_7662_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_2_fu_18782_p1() {
    p_Val2_11_36_2_fu_18782_p1 = esl_sext<15,12>(tmp_726_fu_18738_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_3_fu_18860_p1() {
    p_Val2_11_36_3_fu_18860_p1 = esl_sext<15,12>(tmp_27_36_2_fu_18820_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_4_fu_30857_p1() {
    p_Val2_11_36_4_fu_30857_p1 = esl_sext<15,11>(tmp_27_36_3_reg_61696.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_5_fu_30932_p1() {
    p_Val2_11_36_5_fu_30932_p1 = esl_sext<15,10>(tmp_27_36_4_fu_30892_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_36_6_fu_41592_p1() {
    p_Val2_11_36_6_fu_41592_p1 = esl_sext<15,9>(tmp_27_36_5_reg_64110.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_1_fu_7824_p1() {
    p_Val2_11_37_1_fu_7824_p1 = esl_sext<15,13>(tmp_743_fu_7780_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_2_fu_18976_p1() {
    p_Val2_11_37_2_fu_18976_p1 = esl_sext<15,12>(tmp_746_fu_18932_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_3_fu_19054_p1() {
    p_Val2_11_37_3_fu_19054_p1 = esl_sext<15,12>(tmp_27_37_2_fu_19014_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_4_fu_31005_p1() {
    p_Val2_11_37_4_fu_31005_p1 = esl_sext<15,11>(tmp_27_37_3_reg_61730.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_5_fu_31080_p1() {
    p_Val2_11_37_5_fu_31080_p1 = esl_sext<15,10>(tmp_27_37_4_fu_31040_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_37_6_fu_41745_p1() {
    p_Val2_11_37_6_fu_41745_p1 = esl_sext<15,9>(tmp_27_37_5_reg_64144.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_1_fu_7942_p1() {
    p_Val2_11_38_1_fu_7942_p1 = esl_sext<15,13>(tmp_763_fu_7898_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_2_fu_19170_p1() {
    p_Val2_11_38_2_fu_19170_p1 = esl_sext<15,12>(tmp_766_fu_19126_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_3_fu_19248_p1() {
    p_Val2_11_38_3_fu_19248_p1 = esl_sext<15,12>(tmp_27_38_2_fu_19208_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_4_fu_31153_p1() {
    p_Val2_11_38_4_fu_31153_p1 = esl_sext<15,11>(tmp_27_38_3_reg_61764.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_5_fu_31228_p1() {
    p_Val2_11_38_5_fu_31228_p1 = esl_sext<15,10>(tmp_27_38_4_fu_31188_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_38_6_fu_41898_p1() {
    p_Val2_11_38_6_fu_41898_p1 = esl_sext<15,9>(tmp_27_38_5_reg_64178.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_1_fu_8060_p1() {
    p_Val2_11_39_1_fu_8060_p1 = esl_sext<15,13>(tmp_783_fu_8016_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_2_fu_19364_p1() {
    p_Val2_11_39_2_fu_19364_p1 = esl_sext<15,12>(tmp_786_fu_19320_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_3_fu_19442_p1() {
    p_Val2_11_39_3_fu_19442_p1 = esl_sext<15,12>(tmp_27_39_2_fu_19402_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_4_fu_31301_p1() {
    p_Val2_11_39_4_fu_31301_p1 = esl_sext<15,11>(tmp_27_39_3_reg_61798.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_5_fu_31376_p1() {
    p_Val2_11_39_5_fu_31376_p1 = esl_sext<15,10>(tmp_27_39_4_fu_31336_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_39_6_fu_42051_p1() {
    p_Val2_11_39_6_fu_42051_p1 = esl_sext<15,9>(tmp_27_39_5_reg_64212.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_1_fu_3812_p1() {
    p_Val2_11_3_1_fu_3812_p1 = esl_sext<15,13>(tmp_63_fu_3768_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_2_fu_12380_p1() {
    p_Val2_11_3_2_fu_12380_p1 = esl_sext<15,12>(tmp_66_fu_12336_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_3_fu_12458_p1() {
    p_Val2_11_3_3_fu_12458_p1 = esl_sext<15,12>(tmp_27_3_2_fu_12418_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_4_fu_25973_p1() {
    p_Val2_11_3_4_fu_25973_p1 = esl_sext<15,11>(tmp_27_3_3_reg_60574.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_5_fu_26048_p1() {
    p_Val2_11_3_5_fu_26048_p1 = esl_sext<15,10>(tmp_27_3_4_fu_26008_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_3_6_fu_36543_p1() {
    p_Val2_11_3_6_fu_36543_p1 = esl_sext<15,9>(tmp_27_3_5_reg_62988.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_1_fu_8178_p1() {
    p_Val2_11_40_1_fu_8178_p1 = esl_sext<15,13>(tmp_803_fu_8134_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_2_fu_19558_p1() {
    p_Val2_11_40_2_fu_19558_p1 = esl_sext<15,12>(tmp_806_fu_19514_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_3_fu_19636_p1() {
    p_Val2_11_40_3_fu_19636_p1 = esl_sext<15,12>(tmp_27_40_2_fu_19596_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_4_fu_31449_p1() {
    p_Val2_11_40_4_fu_31449_p1 = esl_sext<15,11>(tmp_27_40_3_reg_61832.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_5_fu_31524_p1() {
    p_Val2_11_40_5_fu_31524_p1 = esl_sext<15,10>(tmp_27_40_4_fu_31484_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_40_6_fu_42204_p1() {
    p_Val2_11_40_6_fu_42204_p1 = esl_sext<15,9>(tmp_27_40_5_reg_64246.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_1_fu_8296_p1() {
    p_Val2_11_41_1_fu_8296_p1 = esl_sext<15,13>(tmp_823_fu_8252_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_2_fu_19752_p1() {
    p_Val2_11_41_2_fu_19752_p1 = esl_sext<15,12>(tmp_826_fu_19708_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_3_fu_19830_p1() {
    p_Val2_11_41_3_fu_19830_p1 = esl_sext<15,12>(tmp_27_41_2_fu_19790_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_4_fu_31597_p1() {
    p_Val2_11_41_4_fu_31597_p1 = esl_sext<15,11>(tmp_27_41_3_reg_61866.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_5_fu_31672_p1() {
    p_Val2_11_41_5_fu_31672_p1 = esl_sext<15,10>(tmp_27_41_4_fu_31632_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_41_6_fu_42357_p1() {
    p_Val2_11_41_6_fu_42357_p1 = esl_sext<15,9>(tmp_27_41_5_reg_64280.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_1_fu_8414_p1() {
    p_Val2_11_42_1_fu_8414_p1 = esl_sext<15,13>(tmp_843_fu_8370_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_2_fu_19946_p1() {
    p_Val2_11_42_2_fu_19946_p1 = esl_sext<15,12>(tmp_846_fu_19902_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_3_fu_20024_p1() {
    p_Val2_11_42_3_fu_20024_p1 = esl_sext<15,12>(tmp_27_42_2_fu_19984_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_4_fu_31745_p1() {
    p_Val2_11_42_4_fu_31745_p1 = esl_sext<15,11>(tmp_27_42_3_reg_61900.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_5_fu_31820_p1() {
    p_Val2_11_42_5_fu_31820_p1 = esl_sext<15,10>(tmp_27_42_4_fu_31780_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_42_6_fu_42510_p1() {
    p_Val2_11_42_6_fu_42510_p1 = esl_sext<15,9>(tmp_27_42_5_reg_64314.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_1_fu_8532_p1() {
    p_Val2_11_43_1_fu_8532_p1 = esl_sext<15,13>(tmp_863_fu_8488_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_2_fu_20140_p1() {
    p_Val2_11_43_2_fu_20140_p1 = esl_sext<15,12>(tmp_866_fu_20096_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_3_fu_20218_p1() {
    p_Val2_11_43_3_fu_20218_p1 = esl_sext<15,12>(tmp_27_43_2_fu_20178_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_4_fu_31893_p1() {
    p_Val2_11_43_4_fu_31893_p1 = esl_sext<15,11>(tmp_27_43_3_reg_61934.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_5_fu_31968_p1() {
    p_Val2_11_43_5_fu_31968_p1 = esl_sext<15,10>(tmp_27_43_4_fu_31928_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_43_6_fu_42663_p1() {
    p_Val2_11_43_6_fu_42663_p1 = esl_sext<15,9>(tmp_27_43_5_reg_64348.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_1_fu_8650_p1() {
    p_Val2_11_44_1_fu_8650_p1 = esl_sext<15,13>(tmp_883_fu_8606_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_2_fu_20334_p1() {
    p_Val2_11_44_2_fu_20334_p1 = esl_sext<15,12>(tmp_886_fu_20290_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_3_fu_20412_p1() {
    p_Val2_11_44_3_fu_20412_p1 = esl_sext<15,12>(tmp_27_44_2_fu_20372_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_4_fu_32041_p1() {
    p_Val2_11_44_4_fu_32041_p1 = esl_sext<15,11>(tmp_27_44_3_reg_61968.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_5_fu_32116_p1() {
    p_Val2_11_44_5_fu_32116_p1 = esl_sext<15,10>(tmp_27_44_4_fu_32076_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_44_6_fu_42816_p1() {
    p_Val2_11_44_6_fu_42816_p1 = esl_sext<15,9>(tmp_27_44_5_reg_64382.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_1_fu_8768_p1() {
    p_Val2_11_45_1_fu_8768_p1 = esl_sext<15,13>(tmp_903_fu_8724_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_2_fu_20528_p1() {
    p_Val2_11_45_2_fu_20528_p1 = esl_sext<15,12>(tmp_906_fu_20484_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_3_fu_20606_p1() {
    p_Val2_11_45_3_fu_20606_p1 = esl_sext<15,12>(tmp_27_45_2_fu_20566_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_4_fu_32189_p1() {
    p_Val2_11_45_4_fu_32189_p1 = esl_sext<15,11>(tmp_27_45_3_reg_62002.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_5_fu_32264_p1() {
    p_Val2_11_45_5_fu_32264_p1 = esl_sext<15,10>(tmp_27_45_4_fu_32224_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_45_6_fu_42969_p1() {
    p_Val2_11_45_6_fu_42969_p1 = esl_sext<15,9>(tmp_27_45_5_reg_64416.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_1_fu_8886_p1() {
    p_Val2_11_46_1_fu_8886_p1 = esl_sext<15,13>(tmp_923_fu_8842_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_2_fu_20722_p1() {
    p_Val2_11_46_2_fu_20722_p1 = esl_sext<15,12>(tmp_926_fu_20678_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_3_fu_20800_p1() {
    p_Val2_11_46_3_fu_20800_p1 = esl_sext<15,12>(tmp_27_46_2_fu_20760_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_4_fu_32337_p1() {
    p_Val2_11_46_4_fu_32337_p1 = esl_sext<15,11>(tmp_27_46_3_reg_62036.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_5_fu_32412_p1() {
    p_Val2_11_46_5_fu_32412_p1 = esl_sext<15,10>(tmp_27_46_4_fu_32372_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_46_6_fu_43122_p1() {
    p_Val2_11_46_6_fu_43122_p1 = esl_sext<15,9>(tmp_27_46_5_reg_64450.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_1_fu_9004_p1() {
    p_Val2_11_47_1_fu_9004_p1 = esl_sext<15,13>(tmp_943_fu_8960_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_2_fu_20916_p1() {
    p_Val2_11_47_2_fu_20916_p1 = esl_sext<15,12>(tmp_946_fu_20872_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_3_fu_20994_p1() {
    p_Val2_11_47_3_fu_20994_p1 = esl_sext<15,12>(tmp_27_47_2_fu_20954_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_4_fu_32485_p1() {
    p_Val2_11_47_4_fu_32485_p1 = esl_sext<15,11>(tmp_27_47_3_reg_62070.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_5_fu_32560_p1() {
    p_Val2_11_47_5_fu_32560_p1 = esl_sext<15,10>(tmp_27_47_4_fu_32520_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_47_6_fu_43275_p1() {
    p_Val2_11_47_6_fu_43275_p1 = esl_sext<15,9>(tmp_27_47_5_reg_64484.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_1_fu_9122_p1() {
    p_Val2_11_48_1_fu_9122_p1 = esl_sext<15,13>(tmp_963_fu_9078_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_2_fu_21110_p1() {
    p_Val2_11_48_2_fu_21110_p1 = esl_sext<15,12>(tmp_966_fu_21066_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_3_fu_21188_p1() {
    p_Val2_11_48_3_fu_21188_p1 = esl_sext<15,12>(tmp_27_48_2_fu_21148_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_4_fu_32633_p1() {
    p_Val2_11_48_4_fu_32633_p1 = esl_sext<15,11>(tmp_27_48_3_reg_62104.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_5_fu_32708_p1() {
    p_Val2_11_48_5_fu_32708_p1 = esl_sext<15,10>(tmp_27_48_4_fu_32668_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_48_6_fu_43428_p1() {
    p_Val2_11_48_6_fu_43428_p1 = esl_sext<15,9>(tmp_27_48_5_reg_64518.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_1_fu_9240_p1() {
    p_Val2_11_49_1_fu_9240_p1 = esl_sext<15,13>(tmp_983_fu_9196_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_2_fu_21304_p1() {
    p_Val2_11_49_2_fu_21304_p1 = esl_sext<15,12>(tmp_986_fu_21260_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_3_fu_21382_p1() {
    p_Val2_11_49_3_fu_21382_p1 = esl_sext<15,12>(tmp_27_49_2_fu_21342_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_4_fu_32781_p1() {
    p_Val2_11_49_4_fu_32781_p1 = esl_sext<15,11>(tmp_27_49_3_reg_62138.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_5_fu_32856_p1() {
    p_Val2_11_49_5_fu_32856_p1 = esl_sext<15,10>(tmp_27_49_4_fu_32816_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_49_6_fu_43581_p1() {
    p_Val2_11_49_6_fu_43581_p1 = esl_sext<15,9>(tmp_27_49_5_reg_64552.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_1_fu_3930_p1() {
    p_Val2_11_4_1_fu_3930_p1 = esl_sext<15,13>(tmp_83_fu_3886_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_2_fu_12574_p1() {
    p_Val2_11_4_2_fu_12574_p1 = esl_sext<15,12>(tmp_86_fu_12530_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_3_fu_12652_p1() {
    p_Val2_11_4_3_fu_12652_p1 = esl_sext<15,12>(tmp_27_4_2_fu_12612_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_4_fu_26121_p1() {
    p_Val2_11_4_4_fu_26121_p1 = esl_sext<15,11>(tmp_27_4_3_reg_60608.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_5_fu_26196_p1() {
    p_Val2_11_4_5_fu_26196_p1 = esl_sext<15,10>(tmp_27_4_4_fu_26156_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_4_6_fu_36696_p1() {
    p_Val2_11_4_6_fu_36696_p1 = esl_sext<15,9>(tmp_27_4_5_reg_63022.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_1_fu_9358_p1() {
    p_Val2_11_50_1_fu_9358_p1 = esl_sext<15,13>(tmp_1003_fu_9314_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_2_fu_21498_p1() {
    p_Val2_11_50_2_fu_21498_p1 = esl_sext<15,12>(tmp_1006_fu_21454_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_3_fu_21576_p1() {
    p_Val2_11_50_3_fu_21576_p1 = esl_sext<15,12>(tmp_27_50_2_fu_21536_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_4_fu_32929_p1() {
    p_Val2_11_50_4_fu_32929_p1 = esl_sext<15,11>(tmp_27_50_3_reg_62172.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_5_fu_33004_p1() {
    p_Val2_11_50_5_fu_33004_p1 = esl_sext<15,10>(tmp_27_50_4_fu_32964_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_50_6_fu_43734_p1() {
    p_Val2_11_50_6_fu_43734_p1 = esl_sext<15,9>(tmp_27_50_5_reg_64586.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_1_fu_9476_p1() {
    p_Val2_11_51_1_fu_9476_p1 = esl_sext<15,13>(tmp_1023_fu_9432_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_2_fu_21692_p1() {
    p_Val2_11_51_2_fu_21692_p1 = esl_sext<15,12>(tmp_1026_fu_21648_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_3_fu_21770_p1() {
    p_Val2_11_51_3_fu_21770_p1 = esl_sext<15,12>(tmp_27_51_2_fu_21730_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_4_fu_33077_p1() {
    p_Val2_11_51_4_fu_33077_p1 = esl_sext<15,11>(tmp_27_51_3_reg_62206.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_5_fu_33152_p1() {
    p_Val2_11_51_5_fu_33152_p1 = esl_sext<15,10>(tmp_27_51_4_fu_33112_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_51_6_fu_43887_p1() {
    p_Val2_11_51_6_fu_43887_p1 = esl_sext<15,9>(tmp_27_51_5_reg_64620.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_1_fu_9594_p1() {
    p_Val2_11_52_1_fu_9594_p1 = esl_sext<15,13>(tmp_1043_fu_9550_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_2_fu_21886_p1() {
    p_Val2_11_52_2_fu_21886_p1 = esl_sext<15,12>(tmp_1046_fu_21842_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_3_fu_21964_p1() {
    p_Val2_11_52_3_fu_21964_p1 = esl_sext<15,12>(tmp_27_52_2_fu_21924_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_4_fu_33225_p1() {
    p_Val2_11_52_4_fu_33225_p1 = esl_sext<15,11>(tmp_27_52_3_reg_62240.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_5_fu_33300_p1() {
    p_Val2_11_52_5_fu_33300_p1 = esl_sext<15,10>(tmp_27_52_4_fu_33260_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_52_6_fu_44040_p1() {
    p_Val2_11_52_6_fu_44040_p1 = esl_sext<15,9>(tmp_27_52_5_reg_64654.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_1_fu_9712_p1() {
    p_Val2_11_53_1_fu_9712_p1 = esl_sext<15,13>(tmp_1063_fu_9668_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_2_fu_22080_p1() {
    p_Val2_11_53_2_fu_22080_p1 = esl_sext<15,12>(tmp_1066_fu_22036_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_3_fu_22158_p1() {
    p_Val2_11_53_3_fu_22158_p1 = esl_sext<15,12>(tmp_27_53_2_fu_22118_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_4_fu_33373_p1() {
    p_Val2_11_53_4_fu_33373_p1 = esl_sext<15,11>(tmp_27_53_3_reg_62274.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_5_fu_33448_p1() {
    p_Val2_11_53_5_fu_33448_p1 = esl_sext<15,10>(tmp_27_53_4_fu_33408_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_53_6_fu_44193_p1() {
    p_Val2_11_53_6_fu_44193_p1 = esl_sext<15,9>(tmp_27_53_5_reg_64688.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_1_fu_9830_p1() {
    p_Val2_11_54_1_fu_9830_p1 = esl_sext<15,13>(tmp_1083_fu_9786_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_2_fu_22274_p1() {
    p_Val2_11_54_2_fu_22274_p1 = esl_sext<15,12>(tmp_1086_fu_22230_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_3_fu_22352_p1() {
    p_Val2_11_54_3_fu_22352_p1 = esl_sext<15,12>(tmp_27_54_2_fu_22312_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_4_fu_33521_p1() {
    p_Val2_11_54_4_fu_33521_p1 = esl_sext<15,11>(tmp_27_54_3_reg_62308.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_5_fu_33596_p1() {
    p_Val2_11_54_5_fu_33596_p1 = esl_sext<15,10>(tmp_27_54_4_fu_33556_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_54_6_fu_44346_p1() {
    p_Val2_11_54_6_fu_44346_p1 = esl_sext<15,9>(tmp_27_54_5_reg_64722.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_1_fu_9948_p1() {
    p_Val2_11_55_1_fu_9948_p1 = esl_sext<15,13>(tmp_1103_fu_9904_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_2_fu_22468_p1() {
    p_Val2_11_55_2_fu_22468_p1 = esl_sext<15,12>(tmp_1106_fu_22424_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_3_fu_22546_p1() {
    p_Val2_11_55_3_fu_22546_p1 = esl_sext<15,12>(tmp_27_55_2_fu_22506_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_4_fu_33669_p1() {
    p_Val2_11_55_4_fu_33669_p1 = esl_sext<15,11>(tmp_27_55_3_reg_62342.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_5_fu_33744_p1() {
    p_Val2_11_55_5_fu_33744_p1 = esl_sext<15,10>(tmp_27_55_4_fu_33704_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_55_6_fu_44499_p1() {
    p_Val2_11_55_6_fu_44499_p1 = esl_sext<15,9>(tmp_27_55_5_reg_64756.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_1_fu_10066_p1() {
    p_Val2_11_56_1_fu_10066_p1 = esl_sext<15,13>(tmp_1123_fu_10022_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_2_fu_22662_p1() {
    p_Val2_11_56_2_fu_22662_p1 = esl_sext<15,12>(tmp_1126_fu_22618_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_3_fu_22740_p1() {
    p_Val2_11_56_3_fu_22740_p1 = esl_sext<15,12>(tmp_27_56_2_fu_22700_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_4_fu_33817_p1() {
    p_Val2_11_56_4_fu_33817_p1 = esl_sext<15,11>(tmp_27_56_3_reg_62376.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_5_fu_33892_p1() {
    p_Val2_11_56_5_fu_33892_p1 = esl_sext<15,10>(tmp_27_56_4_fu_33852_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_56_6_fu_44652_p1() {
    p_Val2_11_56_6_fu_44652_p1 = esl_sext<15,9>(tmp_27_56_5_reg_64790.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_1_fu_10184_p1() {
    p_Val2_11_57_1_fu_10184_p1 = esl_sext<15,13>(tmp_1143_fu_10140_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_2_fu_22856_p1() {
    p_Val2_11_57_2_fu_22856_p1 = esl_sext<15,12>(tmp_1146_fu_22812_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_3_fu_22934_p1() {
    p_Val2_11_57_3_fu_22934_p1 = esl_sext<15,12>(tmp_27_57_2_fu_22894_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_4_fu_33965_p1() {
    p_Val2_11_57_4_fu_33965_p1 = esl_sext<15,11>(tmp_27_57_3_reg_62410.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_5_fu_34040_p1() {
    p_Val2_11_57_5_fu_34040_p1 = esl_sext<15,10>(tmp_27_57_4_fu_34000_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_57_6_fu_44805_p1() {
    p_Val2_11_57_6_fu_44805_p1 = esl_sext<15,9>(tmp_27_57_5_reg_64824.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_1_fu_10302_p1() {
    p_Val2_11_58_1_fu_10302_p1 = esl_sext<15,13>(tmp_1163_fu_10258_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_2_fu_23050_p1() {
    p_Val2_11_58_2_fu_23050_p1 = esl_sext<15,12>(tmp_1166_fu_23006_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_3_fu_23128_p1() {
    p_Val2_11_58_3_fu_23128_p1 = esl_sext<15,12>(tmp_27_58_2_fu_23088_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_4_fu_34113_p1() {
    p_Val2_11_58_4_fu_34113_p1 = esl_sext<15,11>(tmp_27_58_3_reg_62444.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_5_fu_34188_p1() {
    p_Val2_11_58_5_fu_34188_p1 = esl_sext<15,10>(tmp_27_58_4_fu_34148_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_58_6_fu_44958_p1() {
    p_Val2_11_58_6_fu_44958_p1 = esl_sext<15,9>(tmp_27_58_5_reg_64858.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_1_fu_10420_p1() {
    p_Val2_11_59_1_fu_10420_p1 = esl_sext<15,13>(tmp_1183_fu_10376_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_2_fu_23244_p1() {
    p_Val2_11_59_2_fu_23244_p1 = esl_sext<15,12>(tmp_1186_fu_23200_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_3_fu_23322_p1() {
    p_Val2_11_59_3_fu_23322_p1 = esl_sext<15,12>(tmp_27_59_2_fu_23282_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_4_fu_34261_p1() {
    p_Val2_11_59_4_fu_34261_p1 = esl_sext<15,11>(tmp_27_59_3_reg_62478.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_5_fu_34336_p1() {
    p_Val2_11_59_5_fu_34336_p1 = esl_sext<15,10>(tmp_27_59_4_fu_34296_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_59_6_fu_45111_p1() {
    p_Val2_11_59_6_fu_45111_p1 = esl_sext<15,9>(tmp_27_59_5_reg_64892.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_1_fu_4048_p1() {
    p_Val2_11_5_1_fu_4048_p1 = esl_sext<15,13>(tmp_103_fu_4004_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_2_fu_12768_p1() {
    p_Val2_11_5_2_fu_12768_p1 = esl_sext<15,12>(tmp_106_fu_12724_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_3_fu_12846_p1() {
    p_Val2_11_5_3_fu_12846_p1 = esl_sext<15,12>(tmp_27_5_2_fu_12806_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_4_fu_26269_p1() {
    p_Val2_11_5_4_fu_26269_p1 = esl_sext<15,11>(tmp_27_5_3_reg_60642.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_5_fu_26344_p1() {
    p_Val2_11_5_5_fu_26344_p1 = esl_sext<15,10>(tmp_27_5_4_fu_26304_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_5_6_fu_36849_p1() {
    p_Val2_11_5_6_fu_36849_p1 = esl_sext<15,9>(tmp_27_5_5_reg_63056.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_1_fu_10538_p1() {
    p_Val2_11_60_1_fu_10538_p1 = esl_sext<15,13>(tmp_1203_fu_10494_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_2_fu_23438_p1() {
    p_Val2_11_60_2_fu_23438_p1 = esl_sext<15,12>(tmp_1206_fu_23394_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_3_fu_23516_p1() {
    p_Val2_11_60_3_fu_23516_p1 = esl_sext<15,12>(tmp_27_60_2_fu_23476_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_4_fu_34409_p1() {
    p_Val2_11_60_4_fu_34409_p1 = esl_sext<15,11>(tmp_27_60_3_reg_62512.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_5_fu_34484_p1() {
    p_Val2_11_60_5_fu_34484_p1 = esl_sext<15,10>(tmp_27_60_4_fu_34444_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_60_6_fu_45264_p1() {
    p_Val2_11_60_6_fu_45264_p1 = esl_sext<15,9>(tmp_27_60_5_reg_64926.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_1_fu_10656_p1() {
    p_Val2_11_61_1_fu_10656_p1 = esl_sext<15,13>(tmp_1223_fu_10612_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_2_fu_23632_p1() {
    p_Val2_11_61_2_fu_23632_p1 = esl_sext<15,12>(tmp_1226_fu_23588_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_3_fu_23710_p1() {
    p_Val2_11_61_3_fu_23710_p1 = esl_sext<15,12>(tmp_27_61_2_fu_23670_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_4_fu_34557_p1() {
    p_Val2_11_61_4_fu_34557_p1 = esl_sext<15,11>(tmp_27_61_3_reg_62546.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_5_fu_34632_p1() {
    p_Val2_11_61_5_fu_34632_p1 = esl_sext<15,10>(tmp_27_61_4_fu_34592_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_61_6_fu_45417_p1() {
    p_Val2_11_61_6_fu_45417_p1 = esl_sext<15,9>(tmp_27_61_5_reg_64960.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_1_fu_10774_p1() {
    p_Val2_11_62_1_fu_10774_p1 = esl_sext<15,13>(tmp_1243_fu_10730_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_2_fu_23826_p1() {
    p_Val2_11_62_2_fu_23826_p1 = esl_sext<15,12>(tmp_1246_fu_23782_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_3_fu_23904_p1() {
    p_Val2_11_62_3_fu_23904_p1 = esl_sext<15,12>(tmp_27_62_2_fu_23864_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_4_fu_34705_p1() {
    p_Val2_11_62_4_fu_34705_p1 = esl_sext<15,11>(tmp_27_62_3_reg_62580.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_5_fu_34780_p1() {
    p_Val2_11_62_5_fu_34780_p1 = esl_sext<15,10>(tmp_27_62_4_fu_34740_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_62_6_fu_45570_p1() {
    p_Val2_11_62_6_fu_45570_p1 = esl_sext<15,9>(tmp_27_62_5_reg_64994.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_1_fu_10892_p1() {
    p_Val2_11_63_1_fu_10892_p1 = esl_sext<15,13>(tmp_1263_fu_10848_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_2_fu_24020_p1() {
    p_Val2_11_63_2_fu_24020_p1 = esl_sext<15,12>(tmp_1266_fu_23976_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_3_fu_24098_p1() {
    p_Val2_11_63_3_fu_24098_p1 = esl_sext<15,12>(tmp_27_63_2_fu_24058_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_4_fu_34853_p1() {
    p_Val2_11_63_4_fu_34853_p1 = esl_sext<15,11>(tmp_27_63_3_reg_62614.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_5_fu_34928_p1() {
    p_Val2_11_63_5_fu_34928_p1 = esl_sext<15,10>(tmp_27_63_4_fu_34888_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_63_6_fu_45723_p1() {
    p_Val2_11_63_6_fu_45723_p1 = esl_sext<15,9>(tmp_27_63_5_reg_65028.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_1_fu_11010_p1() {
    p_Val2_11_64_1_fu_11010_p1 = esl_sext<15,13>(tmp_1283_fu_10966_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_2_fu_24214_p1() {
    p_Val2_11_64_2_fu_24214_p1 = esl_sext<15,12>(tmp_1286_fu_24170_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_3_fu_24292_p1() {
    p_Val2_11_64_3_fu_24292_p1 = esl_sext<15,12>(tmp_27_64_2_fu_24252_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_4_fu_35001_p1() {
    p_Val2_11_64_4_fu_35001_p1 = esl_sext<15,11>(tmp_27_64_3_reg_62648.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_5_fu_35076_p1() {
    p_Val2_11_64_5_fu_35076_p1 = esl_sext<15,10>(tmp_27_64_4_fu_35036_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_64_6_fu_45876_p1() {
    p_Val2_11_64_6_fu_45876_p1 = esl_sext<15,9>(tmp_27_64_5_reg_65062.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_1_fu_11128_p1() {
    p_Val2_11_65_1_fu_11128_p1 = esl_sext<15,13>(tmp_1303_fu_11084_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_2_fu_24408_p1() {
    p_Val2_11_65_2_fu_24408_p1 = esl_sext<15,12>(tmp_1306_fu_24364_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_3_fu_24486_p1() {
    p_Val2_11_65_3_fu_24486_p1 = esl_sext<15,12>(tmp_27_65_2_fu_24446_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_4_fu_35149_p1() {
    p_Val2_11_65_4_fu_35149_p1 = esl_sext<15,11>(tmp_27_65_3_reg_62682.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_5_fu_35224_p1() {
    p_Val2_11_65_5_fu_35224_p1 = esl_sext<15,10>(tmp_27_65_4_fu_35184_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_65_6_fu_46029_p1() {
    p_Val2_11_65_6_fu_46029_p1 = esl_sext<15,9>(tmp_27_65_5_reg_65096.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_1_fu_11246_p1() {
    p_Val2_11_66_1_fu_11246_p1 = esl_sext<15,13>(tmp_1323_fu_11202_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_2_fu_24602_p1() {
    p_Val2_11_66_2_fu_24602_p1 = esl_sext<15,12>(tmp_1326_fu_24558_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_3_fu_24680_p1() {
    p_Val2_11_66_3_fu_24680_p1 = esl_sext<15,12>(tmp_27_66_2_fu_24640_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_4_fu_35297_p1() {
    p_Val2_11_66_4_fu_35297_p1 = esl_sext<15,11>(tmp_27_66_3_reg_62716.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_5_fu_35372_p1() {
    p_Val2_11_66_5_fu_35372_p1 = esl_sext<15,10>(tmp_27_66_4_fu_35332_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_66_6_fu_46182_p1() {
    p_Val2_11_66_6_fu_46182_p1 = esl_sext<15,9>(tmp_27_66_5_reg_65130.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_1_fu_11364_p1() {
    p_Val2_11_67_1_fu_11364_p1 = esl_sext<15,13>(tmp_1343_fu_11320_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_2_fu_24796_p1() {
    p_Val2_11_67_2_fu_24796_p1 = esl_sext<15,12>(tmp_1346_fu_24752_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_3_fu_24874_p1() {
    p_Val2_11_67_3_fu_24874_p1 = esl_sext<15,12>(tmp_27_67_2_fu_24834_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_4_fu_35445_p1() {
    p_Val2_11_67_4_fu_35445_p1 = esl_sext<15,11>(tmp_27_67_3_reg_62750.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_5_fu_35520_p1() {
    p_Val2_11_67_5_fu_35520_p1 = esl_sext<15,10>(tmp_27_67_4_fu_35480_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_67_6_fu_46335_p1() {
    p_Val2_11_67_6_fu_46335_p1 = esl_sext<15,9>(tmp_27_67_5_reg_65164.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_1_fu_11482_p1() {
    p_Val2_11_68_1_fu_11482_p1 = esl_sext<15,13>(tmp_1363_fu_11438_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_2_fu_24990_p1() {
    p_Val2_11_68_2_fu_24990_p1 = esl_sext<15,12>(tmp_1366_fu_24946_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_3_fu_25068_p1() {
    p_Val2_11_68_3_fu_25068_p1 = esl_sext<15,12>(tmp_27_68_2_fu_25028_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_4_fu_35593_p1() {
    p_Val2_11_68_4_fu_35593_p1 = esl_sext<15,11>(tmp_27_68_3_reg_62784.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_5_fu_35668_p1() {
    p_Val2_11_68_5_fu_35668_p1 = esl_sext<15,10>(tmp_27_68_4_fu_35628_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_68_6_fu_46488_p1() {
    p_Val2_11_68_6_fu_46488_p1 = esl_sext<15,9>(tmp_27_68_5_reg_65198.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_1_fu_11600_p1() {
    p_Val2_11_69_1_fu_11600_p1 = esl_sext<15,13>(tmp_1383_fu_11556_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_2_fu_25184_p1() {
    p_Val2_11_69_2_fu_25184_p1 = esl_sext<15,12>(tmp_1386_fu_25140_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_3_fu_25262_p1() {
    p_Val2_11_69_3_fu_25262_p1 = esl_sext<15,12>(tmp_27_69_2_fu_25222_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_4_fu_35741_p1() {
    p_Val2_11_69_4_fu_35741_p1 = esl_sext<15,11>(tmp_27_69_3_reg_62818.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_5_fu_35816_p1() {
    p_Val2_11_69_5_fu_35816_p1 = esl_sext<15,10>(tmp_27_69_4_fu_35776_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_69_6_fu_46641_p1() {
    p_Val2_11_69_6_fu_46641_p1 = esl_sext<15,9>(tmp_27_69_5_reg_65232.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_1_fu_4166_p1() {
    p_Val2_11_6_1_fu_4166_p1 = esl_sext<15,13>(tmp_123_fu_4122_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_2_fu_12962_p1() {
    p_Val2_11_6_2_fu_12962_p1 = esl_sext<15,12>(tmp_126_fu_12918_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_3_fu_13040_p1() {
    p_Val2_11_6_3_fu_13040_p1 = esl_sext<15,12>(tmp_27_6_2_fu_13000_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_4_fu_26417_p1() {
    p_Val2_11_6_4_fu_26417_p1 = esl_sext<15,11>(tmp_27_6_3_reg_60676.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_5_fu_26492_p1() {
    p_Val2_11_6_5_fu_26492_p1 = esl_sext<15,10>(tmp_27_6_4_fu_26452_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_6_6_fu_37002_p1() {
    p_Val2_11_6_6_fu_37002_p1 = esl_sext<15,9>(tmp_27_6_5_reg_63090.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_1_fu_11718_p1() {
    p_Val2_11_70_1_fu_11718_p1 = esl_sext<15,13>(tmp_1403_fu_11674_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_2_fu_25378_p1() {
    p_Val2_11_70_2_fu_25378_p1 = esl_sext<15,12>(tmp_1406_fu_25334_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_3_fu_25456_p1() {
    p_Val2_11_70_3_fu_25456_p1 = esl_sext<15,12>(tmp_27_70_2_fu_25416_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_4_fu_35889_p1() {
    p_Val2_11_70_4_fu_35889_p1 = esl_sext<15,11>(tmp_27_70_3_reg_62852.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_5_fu_35964_p1() {
    p_Val2_11_70_5_fu_35964_p1 = esl_sext<15,10>(tmp_27_70_4_fu_35924_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_70_6_fu_46794_p1() {
    p_Val2_11_70_6_fu_46794_p1 = esl_sext<15,9>(tmp_27_70_5_reg_65266.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_1_fu_4284_p1() {
    p_Val2_11_7_1_fu_4284_p1 = esl_sext<15,13>(tmp_143_fu_4240_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_2_fu_13156_p1() {
    p_Val2_11_7_2_fu_13156_p1 = esl_sext<15,12>(tmp_146_fu_13112_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_3_fu_13234_p1() {
    p_Val2_11_7_3_fu_13234_p1 = esl_sext<15,12>(tmp_27_7_2_fu_13194_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_4_fu_26565_p1() {
    p_Val2_11_7_4_fu_26565_p1 = esl_sext<15,11>(tmp_27_7_3_reg_60710.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_5_fu_26640_p1() {
    p_Val2_11_7_5_fu_26640_p1 = esl_sext<15,10>(tmp_27_7_4_fu_26600_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_7_6_fu_37155_p1() {
    p_Val2_11_7_6_fu_37155_p1 = esl_sext<15,9>(tmp_27_7_5_reg_63124.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_1_fu_4402_p1() {
    p_Val2_11_8_1_fu_4402_p1 = esl_sext<15,13>(tmp_163_fu_4358_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_2_fu_13350_p1() {
    p_Val2_11_8_2_fu_13350_p1 = esl_sext<15,12>(tmp_166_fu_13306_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_3_fu_13428_p1() {
    p_Val2_11_8_3_fu_13428_p1 = esl_sext<15,12>(tmp_27_8_2_fu_13388_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_4_fu_26713_p1() {
    p_Val2_11_8_4_fu_26713_p1 = esl_sext<15,11>(tmp_27_8_3_reg_60744.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_5_fu_26788_p1() {
    p_Val2_11_8_5_fu_26788_p1 = esl_sext<15,10>(tmp_27_8_4_fu_26748_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_8_6_fu_37308_p1() {
    p_Val2_11_8_6_fu_37308_p1 = esl_sext<15,9>(tmp_27_8_5_reg_63158.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_1_fu_4520_p1() {
    p_Val2_11_9_1_fu_4520_p1 = esl_sext<15,13>(tmp_183_fu_4476_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_2_fu_13544_p1() {
    p_Val2_11_9_2_fu_13544_p1 = esl_sext<15,12>(tmp_186_fu_13500_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_3_fu_13622_p1() {
    p_Val2_11_9_3_fu_13622_p1 = esl_sext<15,12>(tmp_27_9_2_fu_13582_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_4_fu_26861_p1() {
    p_Val2_11_9_4_fu_26861_p1 = esl_sext<15,11>(tmp_27_9_3_reg_60778.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_5_fu_26936_p1() {
    p_Val2_11_9_5_fu_26936_p1 = esl_sext<15,10>(tmp_27_9_4_fu_26896_p4.read());
}

void Sobel_phase_strm::thread_p_Val2_11_9_6_fu_37461_p1() {
    p_Val2_11_9_6_fu_37461_p1 = esl_sext<15,9>(tmp_27_9_5_reg_63192.read());
}

void Sobel_phase_strm::thread_p_Val2_12_0_1_fu_3462_p2() {
    p_Val2_12_0_1_fu_3462_p2 = (!p_Val2_4_0_cast_fu_3398_p1.read().is_01() || !p_Val2_11_0_1_fu_3458_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_0_cast_fu_3398_p1.read()) - sc_bigint<15>(p_Val2_11_0_1_fu_3458_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_2_fu_11802_p2() {
    p_Val2_12_0_2_fu_11802_p2 = (!x_V_1_0_1_fu_11734_p3.read().is_01() || !p_Val2_11_0_2_fu_11798_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_1_fu_11734_p3.read()) - sc_bigint<15>(p_Val2_11_0_2_fu_11798_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_3_fu_11880_p2() {
    p_Val2_12_0_3_fu_11880_p2 = (!x_V_1_0_2_fu_11814_p3.read().is_01() || !p_Val2_11_0_3_fu_11876_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_2_fu_11814_p3.read()) - sc_bigint<15>(p_Val2_11_0_3_fu_11876_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_4_fu_25532_p2() {
    p_Val2_12_0_4_fu_25532_p2 = (!x_V_1_0_3_reg_60459.read().is_01() || !p_Val2_11_0_4_fu_25529_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_3_reg_60459.read()) - sc_bigint<15>(p_Val2_11_0_4_fu_25529_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_5_fu_25608_p2() {
    p_Val2_12_0_5_fu_25608_p2 = (!x_V_1_0_4_fu_25542_p3.read().is_01() || !p_Val2_11_0_5_fu_25604_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_4_fu_25542_p3.read()) - sc_bigint<15>(p_Val2_11_0_5_fu_25604_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_0_6_fu_36087_p2() {
    p_Val2_12_0_6_fu_36087_p2 = (!x_V_1_0_5_reg_62873.read().is_01() || !p_Val2_11_0_6_fu_36084_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_0_5_reg_62873.read()) - sc_bigint<15>(p_Val2_11_0_6_fu_36084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_1_fu_4642_p2() {
    p_Val2_12_10_1_fu_4642_p2 = (!p_Val2_4_10_cast_fu_4578_p1.read().is_01() || !p_Val2_11_10_1_fu_4638_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_10_cast_fu_4578_p1.read()) - sc_bigint<15>(p_Val2_11_10_1_fu_4638_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_2_fu_13742_p2() {
    p_Val2_12_10_2_fu_13742_p2 = (!x_V_1_10_1_fu_13674_p3.read().is_01() || !p_Val2_11_10_2_fu_13738_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_1_fu_13674_p3.read()) - sc_bigint<15>(p_Val2_11_10_2_fu_13738_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_3_fu_13820_p2() {
    p_Val2_12_10_3_fu_13820_p2 = (!x_V_1_10_2_fu_13754_p3.read().is_01() || !p_Val2_11_10_3_fu_13816_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_2_fu_13754_p3.read()) - sc_bigint<15>(p_Val2_11_10_3_fu_13816_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_4_fu_27012_p2() {
    p_Val2_12_10_4_fu_27012_p2 = (!x_V_1_10_3_reg_60799.read().is_01() || !p_Val2_11_10_4_fu_27009_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_3_reg_60799.read()) - sc_bigint<15>(p_Val2_11_10_4_fu_27009_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_5_fu_27088_p2() {
    p_Val2_12_10_5_fu_27088_p2 = (!x_V_1_10_4_fu_27022_p3.read().is_01() || !p_Val2_11_10_5_fu_27084_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_4_fu_27022_p3.read()) - sc_bigint<15>(p_Val2_11_10_5_fu_27084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_10_6_fu_37617_p2() {
    p_Val2_12_10_6_fu_37617_p2 = (!x_V_1_10_5_reg_63213.read().is_01() || !p_Val2_11_10_6_fu_37614_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_10_5_reg_63213.read()) - sc_bigint<15>(p_Val2_11_10_6_fu_37614_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_1_fu_4760_p2() {
    p_Val2_12_11_1_fu_4760_p2 = (!p_Val2_4_11_cast_fu_4696_p1.read().is_01() || !p_Val2_11_11_1_fu_4756_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_11_cast_fu_4696_p1.read()) - sc_bigint<15>(p_Val2_11_11_1_fu_4756_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_2_fu_13936_p2() {
    p_Val2_12_11_2_fu_13936_p2 = (!x_V_1_11_1_fu_13868_p3.read().is_01() || !p_Val2_11_11_2_fu_13932_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_1_fu_13868_p3.read()) - sc_bigint<15>(p_Val2_11_11_2_fu_13932_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_3_fu_14014_p2() {
    p_Val2_12_11_3_fu_14014_p2 = (!x_V_1_11_2_fu_13948_p3.read().is_01() || !p_Val2_11_11_3_fu_14010_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_2_fu_13948_p3.read()) - sc_bigint<15>(p_Val2_11_11_3_fu_14010_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_4_fu_27160_p2() {
    p_Val2_12_11_4_fu_27160_p2 = (!x_V_1_11_3_reg_60833.read().is_01() || !p_Val2_11_11_4_fu_27157_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_3_reg_60833.read()) - sc_bigint<15>(p_Val2_11_11_4_fu_27157_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_5_fu_27236_p2() {
    p_Val2_12_11_5_fu_27236_p2 = (!x_V_1_11_4_fu_27170_p3.read().is_01() || !p_Val2_11_11_5_fu_27232_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_4_fu_27170_p3.read()) - sc_bigint<15>(p_Val2_11_11_5_fu_27232_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_11_6_fu_37770_p2() {
    p_Val2_12_11_6_fu_37770_p2 = (!x_V_1_11_5_reg_63247.read().is_01() || !p_Val2_11_11_6_fu_37767_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_11_5_reg_63247.read()) - sc_bigint<15>(p_Val2_11_11_6_fu_37767_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_1_fu_4878_p2() {
    p_Val2_12_12_1_fu_4878_p2 = (!p_Val2_4_12_cast_fu_4814_p1.read().is_01() || !p_Val2_11_12_1_fu_4874_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_12_cast_fu_4814_p1.read()) - sc_bigint<15>(p_Val2_11_12_1_fu_4874_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_2_fu_14130_p2() {
    p_Val2_12_12_2_fu_14130_p2 = (!x_V_1_12_1_fu_14062_p3.read().is_01() || !p_Val2_11_12_2_fu_14126_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_12_1_fu_14062_p3.read()) - sc_bigint<15>(p_Val2_11_12_2_fu_14126_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_3_fu_14208_p2() {
    p_Val2_12_12_3_fu_14208_p2 = (!x_V_1_12_2_fu_14142_p3.read().is_01() || !p_Val2_11_12_3_fu_14204_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_12_2_fu_14142_p3.read()) - sc_bigint<15>(p_Val2_11_12_3_fu_14204_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_4_fu_27308_p2() {
    p_Val2_12_12_4_fu_27308_p2 = (!x_V_1_12_3_reg_60867.read().is_01() || !p_Val2_11_12_4_fu_27305_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_12_3_reg_60867.read()) - sc_bigint<15>(p_Val2_11_12_4_fu_27305_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_5_fu_27384_p2() {
    p_Val2_12_12_5_fu_27384_p2 = (!x_V_1_12_4_fu_27318_p3.read().is_01() || !p_Val2_11_12_5_fu_27380_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_12_4_fu_27318_p3.read()) - sc_bigint<15>(p_Val2_11_12_5_fu_27380_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_12_6_fu_37923_p2() {
    p_Val2_12_12_6_fu_37923_p2 = (!x_V_1_12_5_reg_63281.read().is_01() || !p_Val2_11_12_6_fu_37920_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_12_5_reg_63281.read()) - sc_bigint<15>(p_Val2_11_12_6_fu_37920_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_1_fu_4996_p2() {
    p_Val2_12_13_1_fu_4996_p2 = (!p_Val2_4_13_cast_fu_4932_p1.read().is_01() || !p_Val2_11_13_1_fu_4992_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_13_cast_fu_4932_p1.read()) - sc_bigint<15>(p_Val2_11_13_1_fu_4992_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_2_fu_14324_p2() {
    p_Val2_12_13_2_fu_14324_p2 = (!x_V_1_13_1_fu_14256_p3.read().is_01() || !p_Val2_11_13_2_fu_14320_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_13_1_fu_14256_p3.read()) - sc_bigint<15>(p_Val2_11_13_2_fu_14320_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_3_fu_14402_p2() {
    p_Val2_12_13_3_fu_14402_p2 = (!x_V_1_13_2_fu_14336_p3.read().is_01() || !p_Val2_11_13_3_fu_14398_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_13_2_fu_14336_p3.read()) - sc_bigint<15>(p_Val2_11_13_3_fu_14398_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_4_fu_27456_p2() {
    p_Val2_12_13_4_fu_27456_p2 = (!x_V_1_13_3_reg_60901.read().is_01() || !p_Val2_11_13_4_fu_27453_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_13_3_reg_60901.read()) - sc_bigint<15>(p_Val2_11_13_4_fu_27453_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_5_fu_27532_p2() {
    p_Val2_12_13_5_fu_27532_p2 = (!x_V_1_13_4_fu_27466_p3.read().is_01() || !p_Val2_11_13_5_fu_27528_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_13_4_fu_27466_p3.read()) - sc_bigint<15>(p_Val2_11_13_5_fu_27528_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_13_6_fu_38076_p2() {
    p_Val2_12_13_6_fu_38076_p2 = (!x_V_1_13_5_reg_63315.read().is_01() || !p_Val2_11_13_6_fu_38073_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_13_5_reg_63315.read()) - sc_bigint<15>(p_Val2_11_13_6_fu_38073_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_1_fu_5114_p2() {
    p_Val2_12_14_1_fu_5114_p2 = (!p_Val2_4_14_cast_fu_5050_p1.read().is_01() || !p_Val2_11_14_1_fu_5110_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_14_cast_fu_5050_p1.read()) - sc_bigint<15>(p_Val2_11_14_1_fu_5110_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_2_fu_14518_p2() {
    p_Val2_12_14_2_fu_14518_p2 = (!x_V_1_14_1_fu_14450_p3.read().is_01() || !p_Val2_11_14_2_fu_14514_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_14_1_fu_14450_p3.read()) - sc_bigint<15>(p_Val2_11_14_2_fu_14514_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_3_fu_14596_p2() {
    p_Val2_12_14_3_fu_14596_p2 = (!x_V_1_14_2_fu_14530_p3.read().is_01() || !p_Val2_11_14_3_fu_14592_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_14_2_fu_14530_p3.read()) - sc_bigint<15>(p_Val2_11_14_3_fu_14592_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_4_fu_27604_p2() {
    p_Val2_12_14_4_fu_27604_p2 = (!x_V_1_14_3_reg_60935.read().is_01() || !p_Val2_11_14_4_fu_27601_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_14_3_reg_60935.read()) - sc_bigint<15>(p_Val2_11_14_4_fu_27601_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_5_fu_27680_p2() {
    p_Val2_12_14_5_fu_27680_p2 = (!x_V_1_14_4_fu_27614_p3.read().is_01() || !p_Val2_11_14_5_fu_27676_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_14_4_fu_27614_p3.read()) - sc_bigint<15>(p_Val2_11_14_5_fu_27676_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_14_6_fu_38229_p2() {
    p_Val2_12_14_6_fu_38229_p2 = (!x_V_1_14_5_reg_63349.read().is_01() || !p_Val2_11_14_6_fu_38226_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_14_5_reg_63349.read()) - sc_bigint<15>(p_Val2_11_14_6_fu_38226_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_1_fu_5232_p2() {
    p_Val2_12_15_1_fu_5232_p2 = (!p_Val2_4_15_cast_fu_5168_p1.read().is_01() || !p_Val2_11_15_1_fu_5228_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_15_cast_fu_5168_p1.read()) - sc_bigint<15>(p_Val2_11_15_1_fu_5228_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_2_fu_14712_p2() {
    p_Val2_12_15_2_fu_14712_p2 = (!x_V_1_15_1_fu_14644_p3.read().is_01() || !p_Val2_11_15_2_fu_14708_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_15_1_fu_14644_p3.read()) - sc_bigint<15>(p_Val2_11_15_2_fu_14708_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_3_fu_14790_p2() {
    p_Val2_12_15_3_fu_14790_p2 = (!x_V_1_15_2_fu_14724_p3.read().is_01() || !p_Val2_11_15_3_fu_14786_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_15_2_fu_14724_p3.read()) - sc_bigint<15>(p_Val2_11_15_3_fu_14786_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_4_fu_27752_p2() {
    p_Val2_12_15_4_fu_27752_p2 = (!x_V_1_15_3_reg_60969.read().is_01() || !p_Val2_11_15_4_fu_27749_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_15_3_reg_60969.read()) - sc_bigint<15>(p_Val2_11_15_4_fu_27749_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_5_fu_27828_p2() {
    p_Val2_12_15_5_fu_27828_p2 = (!x_V_1_15_4_fu_27762_p3.read().is_01() || !p_Val2_11_15_5_fu_27824_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_15_4_fu_27762_p3.read()) - sc_bigint<15>(p_Val2_11_15_5_fu_27824_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_15_6_fu_38382_p2() {
    p_Val2_12_15_6_fu_38382_p2 = (!x_V_1_15_5_reg_63383.read().is_01() || !p_Val2_11_15_6_fu_38379_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_15_5_reg_63383.read()) - sc_bigint<15>(p_Val2_11_15_6_fu_38379_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_1_fu_5350_p2() {
    p_Val2_12_16_1_fu_5350_p2 = (!p_Val2_4_16_cast_fu_5286_p1.read().is_01() || !p_Val2_11_16_1_fu_5346_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_16_cast_fu_5286_p1.read()) - sc_bigint<15>(p_Val2_11_16_1_fu_5346_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_2_fu_14906_p2() {
    p_Val2_12_16_2_fu_14906_p2 = (!x_V_1_16_1_fu_14838_p3.read().is_01() || !p_Val2_11_16_2_fu_14902_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_16_1_fu_14838_p3.read()) - sc_bigint<15>(p_Val2_11_16_2_fu_14902_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_3_fu_14984_p2() {
    p_Val2_12_16_3_fu_14984_p2 = (!x_V_1_16_2_fu_14918_p3.read().is_01() || !p_Val2_11_16_3_fu_14980_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_16_2_fu_14918_p3.read()) - sc_bigint<15>(p_Val2_11_16_3_fu_14980_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_4_fu_27900_p2() {
    p_Val2_12_16_4_fu_27900_p2 = (!x_V_1_16_3_reg_61003.read().is_01() || !p_Val2_11_16_4_fu_27897_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_16_3_reg_61003.read()) - sc_bigint<15>(p_Val2_11_16_4_fu_27897_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_5_fu_27976_p2() {
    p_Val2_12_16_5_fu_27976_p2 = (!x_V_1_16_4_fu_27910_p3.read().is_01() || !p_Val2_11_16_5_fu_27972_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_16_4_fu_27910_p3.read()) - sc_bigint<15>(p_Val2_11_16_5_fu_27972_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_16_6_fu_38535_p2() {
    p_Val2_12_16_6_fu_38535_p2 = (!x_V_1_16_5_reg_63417.read().is_01() || !p_Val2_11_16_6_fu_38532_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_16_5_reg_63417.read()) - sc_bigint<15>(p_Val2_11_16_6_fu_38532_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_1_fu_5468_p2() {
    p_Val2_12_17_1_fu_5468_p2 = (!p_Val2_4_17_cast_fu_5404_p1.read().is_01() || !p_Val2_11_17_1_fu_5464_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_17_cast_fu_5404_p1.read()) - sc_bigint<15>(p_Val2_11_17_1_fu_5464_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_2_fu_15100_p2() {
    p_Val2_12_17_2_fu_15100_p2 = (!x_V_1_17_1_fu_15032_p3.read().is_01() || !p_Val2_11_17_2_fu_15096_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_17_1_fu_15032_p3.read()) - sc_bigint<15>(p_Val2_11_17_2_fu_15096_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_3_fu_15178_p2() {
    p_Val2_12_17_3_fu_15178_p2 = (!x_V_1_17_2_fu_15112_p3.read().is_01() || !p_Val2_11_17_3_fu_15174_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_17_2_fu_15112_p3.read()) - sc_bigint<15>(p_Val2_11_17_3_fu_15174_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_4_fu_28048_p2() {
    p_Val2_12_17_4_fu_28048_p2 = (!x_V_1_17_3_reg_61037.read().is_01() || !p_Val2_11_17_4_fu_28045_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_17_3_reg_61037.read()) - sc_bigint<15>(p_Val2_11_17_4_fu_28045_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_5_fu_28124_p2() {
    p_Val2_12_17_5_fu_28124_p2 = (!x_V_1_17_4_fu_28058_p3.read().is_01() || !p_Val2_11_17_5_fu_28120_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_17_4_fu_28058_p3.read()) - sc_bigint<15>(p_Val2_11_17_5_fu_28120_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_17_6_fu_38688_p2() {
    p_Val2_12_17_6_fu_38688_p2 = (!x_V_1_17_5_reg_63451.read().is_01() || !p_Val2_11_17_6_fu_38685_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_17_5_reg_63451.read()) - sc_bigint<15>(p_Val2_11_17_6_fu_38685_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_1_fu_5586_p2() {
    p_Val2_12_18_1_fu_5586_p2 = (!p_Val2_4_18_cast_fu_5522_p1.read().is_01() || !p_Val2_11_18_1_fu_5582_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_18_cast_fu_5522_p1.read()) - sc_bigint<15>(p_Val2_11_18_1_fu_5582_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_2_fu_15294_p2() {
    p_Val2_12_18_2_fu_15294_p2 = (!x_V_1_18_1_fu_15226_p3.read().is_01() || !p_Val2_11_18_2_fu_15290_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_18_1_fu_15226_p3.read()) - sc_bigint<15>(p_Val2_11_18_2_fu_15290_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_3_fu_15372_p2() {
    p_Val2_12_18_3_fu_15372_p2 = (!x_V_1_18_2_fu_15306_p3.read().is_01() || !p_Val2_11_18_3_fu_15368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_18_2_fu_15306_p3.read()) - sc_bigint<15>(p_Val2_11_18_3_fu_15368_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_4_fu_28196_p2() {
    p_Val2_12_18_4_fu_28196_p2 = (!x_V_1_18_3_reg_61071.read().is_01() || !p_Val2_11_18_4_fu_28193_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_18_3_reg_61071.read()) - sc_bigint<15>(p_Val2_11_18_4_fu_28193_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_5_fu_28272_p2() {
    p_Val2_12_18_5_fu_28272_p2 = (!x_V_1_18_4_fu_28206_p3.read().is_01() || !p_Val2_11_18_5_fu_28268_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_18_4_fu_28206_p3.read()) - sc_bigint<15>(p_Val2_11_18_5_fu_28268_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_18_6_fu_38841_p2() {
    p_Val2_12_18_6_fu_38841_p2 = (!x_V_1_18_5_reg_63485.read().is_01() || !p_Val2_11_18_6_fu_38838_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_18_5_reg_63485.read()) - sc_bigint<15>(p_Val2_11_18_6_fu_38838_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_1_fu_5704_p2() {
    p_Val2_12_19_1_fu_5704_p2 = (!p_Val2_4_19_cast_fu_5640_p1.read().is_01() || !p_Val2_11_19_1_fu_5700_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_19_cast_fu_5640_p1.read()) - sc_bigint<15>(p_Val2_11_19_1_fu_5700_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_2_fu_15488_p2() {
    p_Val2_12_19_2_fu_15488_p2 = (!x_V_1_19_1_fu_15420_p3.read().is_01() || !p_Val2_11_19_2_fu_15484_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_19_1_fu_15420_p3.read()) - sc_bigint<15>(p_Val2_11_19_2_fu_15484_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_3_fu_15566_p2() {
    p_Val2_12_19_3_fu_15566_p2 = (!x_V_1_19_2_fu_15500_p3.read().is_01() || !p_Val2_11_19_3_fu_15562_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_19_2_fu_15500_p3.read()) - sc_bigint<15>(p_Val2_11_19_3_fu_15562_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_4_fu_28344_p2() {
    p_Val2_12_19_4_fu_28344_p2 = (!x_V_1_19_3_reg_61105.read().is_01() || !p_Val2_11_19_4_fu_28341_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_19_3_reg_61105.read()) - sc_bigint<15>(p_Val2_11_19_4_fu_28341_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_5_fu_28420_p2() {
    p_Val2_12_19_5_fu_28420_p2 = (!x_V_1_19_4_fu_28354_p3.read().is_01() || !p_Val2_11_19_5_fu_28416_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_19_4_fu_28354_p3.read()) - sc_bigint<15>(p_Val2_11_19_5_fu_28416_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_19_6_fu_38994_p2() {
    p_Val2_12_19_6_fu_38994_p2 = (!x_V_1_19_5_reg_63519.read().is_01() || !p_Val2_11_19_6_fu_38991_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_19_5_reg_63519.read()) - sc_bigint<15>(p_Val2_11_19_6_fu_38991_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_1_fu_3580_p2() {
    p_Val2_12_1_1_fu_3580_p2 = (!p_Val2_4_1_cast_fu_3516_p1.read().is_01() || !p_Val2_11_1_1_fu_3576_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_1_cast_fu_3516_p1.read()) - sc_bigint<15>(p_Val2_11_1_1_fu_3576_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_2_fu_11996_p2() {
    p_Val2_12_1_2_fu_11996_p2 = (!x_V_1_1_1_fu_11928_p3.read().is_01() || !p_Val2_11_1_2_fu_11992_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_1_1_fu_11928_p3.read()) - sc_bigint<15>(p_Val2_11_1_2_fu_11992_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_3_fu_12074_p2() {
    p_Val2_12_1_3_fu_12074_p2 = (!x_V_1_1_2_fu_12008_p3.read().is_01() || !p_Val2_11_1_3_fu_12070_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_1_2_fu_12008_p3.read()) - sc_bigint<15>(p_Val2_11_1_3_fu_12070_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_4_fu_25680_p2() {
    p_Val2_12_1_4_fu_25680_p2 = (!x_V_1_1_3_reg_60493.read().is_01() || !p_Val2_11_1_4_fu_25677_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_1_3_reg_60493.read()) - sc_bigint<15>(p_Val2_11_1_4_fu_25677_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_5_fu_25756_p2() {
    p_Val2_12_1_5_fu_25756_p2 = (!x_V_1_1_4_fu_25690_p3.read().is_01() || !p_Val2_11_1_5_fu_25752_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_1_4_fu_25690_p3.read()) - sc_bigint<15>(p_Val2_11_1_5_fu_25752_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_1_6_fu_36240_p2() {
    p_Val2_12_1_6_fu_36240_p2 = (!x_V_1_1_5_reg_62907.read().is_01() || !p_Val2_11_1_6_fu_36237_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_1_5_reg_62907.read()) - sc_bigint<15>(p_Val2_11_1_6_fu_36237_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_1_fu_5822_p2() {
    p_Val2_12_20_1_fu_5822_p2 = (!p_Val2_4_20_cast_fu_5758_p1.read().is_01() || !p_Val2_11_20_1_fu_5818_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_20_cast_fu_5758_p1.read()) - sc_bigint<15>(p_Val2_11_20_1_fu_5818_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_2_fu_15682_p2() {
    p_Val2_12_20_2_fu_15682_p2 = (!x_V_1_20_1_fu_15614_p3.read().is_01() || !p_Val2_11_20_2_fu_15678_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_20_1_fu_15614_p3.read()) - sc_bigint<15>(p_Val2_11_20_2_fu_15678_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_3_fu_15760_p2() {
    p_Val2_12_20_3_fu_15760_p2 = (!x_V_1_20_2_fu_15694_p3.read().is_01() || !p_Val2_11_20_3_fu_15756_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_20_2_fu_15694_p3.read()) - sc_bigint<15>(p_Val2_11_20_3_fu_15756_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_4_fu_28492_p2() {
    p_Val2_12_20_4_fu_28492_p2 = (!x_V_1_20_3_reg_61139.read().is_01() || !p_Val2_11_20_4_fu_28489_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_20_3_reg_61139.read()) - sc_bigint<15>(p_Val2_11_20_4_fu_28489_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_5_fu_28568_p2() {
    p_Val2_12_20_5_fu_28568_p2 = (!x_V_1_20_4_fu_28502_p3.read().is_01() || !p_Val2_11_20_5_fu_28564_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_20_4_fu_28502_p3.read()) - sc_bigint<15>(p_Val2_11_20_5_fu_28564_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_20_6_fu_39147_p2() {
    p_Val2_12_20_6_fu_39147_p2 = (!x_V_1_20_5_reg_63553.read().is_01() || !p_Val2_11_20_6_fu_39144_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_20_5_reg_63553.read()) - sc_bigint<15>(p_Val2_11_20_6_fu_39144_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_1_fu_5940_p2() {
    p_Val2_12_21_1_fu_5940_p2 = (!p_Val2_4_21_cast_fu_5876_p1.read().is_01() || !p_Val2_11_21_1_fu_5936_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_21_cast_fu_5876_p1.read()) - sc_bigint<15>(p_Val2_11_21_1_fu_5936_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_2_fu_15876_p2() {
    p_Val2_12_21_2_fu_15876_p2 = (!x_V_1_21_1_fu_15808_p3.read().is_01() || !p_Val2_11_21_2_fu_15872_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_21_1_fu_15808_p3.read()) - sc_bigint<15>(p_Val2_11_21_2_fu_15872_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_3_fu_15954_p2() {
    p_Val2_12_21_3_fu_15954_p2 = (!x_V_1_21_2_fu_15888_p3.read().is_01() || !p_Val2_11_21_3_fu_15950_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_21_2_fu_15888_p3.read()) - sc_bigint<15>(p_Val2_11_21_3_fu_15950_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_4_fu_28640_p2() {
    p_Val2_12_21_4_fu_28640_p2 = (!x_V_1_21_3_reg_61173.read().is_01() || !p_Val2_11_21_4_fu_28637_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_21_3_reg_61173.read()) - sc_bigint<15>(p_Val2_11_21_4_fu_28637_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_5_fu_28716_p2() {
    p_Val2_12_21_5_fu_28716_p2 = (!x_V_1_21_4_fu_28650_p3.read().is_01() || !p_Val2_11_21_5_fu_28712_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_21_4_fu_28650_p3.read()) - sc_bigint<15>(p_Val2_11_21_5_fu_28712_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_21_6_fu_39300_p2() {
    p_Val2_12_21_6_fu_39300_p2 = (!x_V_1_21_5_reg_63587.read().is_01() || !p_Val2_11_21_6_fu_39297_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_21_5_reg_63587.read()) - sc_bigint<15>(p_Val2_11_21_6_fu_39297_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_1_fu_6058_p2() {
    p_Val2_12_22_1_fu_6058_p2 = (!p_Val2_4_22_cast_fu_5994_p1.read().is_01() || !p_Val2_11_22_1_fu_6054_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_22_cast_fu_5994_p1.read()) - sc_bigint<15>(p_Val2_11_22_1_fu_6054_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_2_fu_16070_p2() {
    p_Val2_12_22_2_fu_16070_p2 = (!x_V_1_22_1_fu_16002_p3.read().is_01() || !p_Val2_11_22_2_fu_16066_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_22_1_fu_16002_p3.read()) - sc_bigint<15>(p_Val2_11_22_2_fu_16066_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_3_fu_16148_p2() {
    p_Val2_12_22_3_fu_16148_p2 = (!x_V_1_22_2_fu_16082_p3.read().is_01() || !p_Val2_11_22_3_fu_16144_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_22_2_fu_16082_p3.read()) - sc_bigint<15>(p_Val2_11_22_3_fu_16144_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_4_fu_28788_p2() {
    p_Val2_12_22_4_fu_28788_p2 = (!x_V_1_22_3_reg_61207.read().is_01() || !p_Val2_11_22_4_fu_28785_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_22_3_reg_61207.read()) - sc_bigint<15>(p_Val2_11_22_4_fu_28785_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_5_fu_28864_p2() {
    p_Val2_12_22_5_fu_28864_p2 = (!x_V_1_22_4_fu_28798_p3.read().is_01() || !p_Val2_11_22_5_fu_28860_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_22_4_fu_28798_p3.read()) - sc_bigint<15>(p_Val2_11_22_5_fu_28860_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_22_6_fu_39453_p2() {
    p_Val2_12_22_6_fu_39453_p2 = (!x_V_1_22_5_reg_63621.read().is_01() || !p_Val2_11_22_6_fu_39450_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_22_5_reg_63621.read()) - sc_bigint<15>(p_Val2_11_22_6_fu_39450_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_1_fu_6176_p2() {
    p_Val2_12_23_1_fu_6176_p2 = (!p_Val2_4_23_cast_fu_6112_p1.read().is_01() || !p_Val2_11_23_1_fu_6172_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_23_cast_fu_6112_p1.read()) - sc_bigint<15>(p_Val2_11_23_1_fu_6172_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_2_fu_16264_p2() {
    p_Val2_12_23_2_fu_16264_p2 = (!x_V_1_23_1_fu_16196_p3.read().is_01() || !p_Val2_11_23_2_fu_16260_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_23_1_fu_16196_p3.read()) - sc_bigint<15>(p_Val2_11_23_2_fu_16260_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_3_fu_16342_p2() {
    p_Val2_12_23_3_fu_16342_p2 = (!x_V_1_23_2_fu_16276_p3.read().is_01() || !p_Val2_11_23_3_fu_16338_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_23_2_fu_16276_p3.read()) - sc_bigint<15>(p_Val2_11_23_3_fu_16338_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_4_fu_28936_p2() {
    p_Val2_12_23_4_fu_28936_p2 = (!x_V_1_23_3_reg_61241.read().is_01() || !p_Val2_11_23_4_fu_28933_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_23_3_reg_61241.read()) - sc_bigint<15>(p_Val2_11_23_4_fu_28933_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_5_fu_29012_p2() {
    p_Val2_12_23_5_fu_29012_p2 = (!x_V_1_23_4_fu_28946_p3.read().is_01() || !p_Val2_11_23_5_fu_29008_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_23_4_fu_28946_p3.read()) - sc_bigint<15>(p_Val2_11_23_5_fu_29008_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_23_6_fu_39606_p2() {
    p_Val2_12_23_6_fu_39606_p2 = (!x_V_1_23_5_reg_63655.read().is_01() || !p_Val2_11_23_6_fu_39603_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_23_5_reg_63655.read()) - sc_bigint<15>(p_Val2_11_23_6_fu_39603_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_1_fu_6294_p2() {
    p_Val2_12_24_1_fu_6294_p2 = (!p_Val2_4_24_cast_fu_6230_p1.read().is_01() || !p_Val2_11_24_1_fu_6290_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_24_cast_fu_6230_p1.read()) - sc_bigint<15>(p_Val2_11_24_1_fu_6290_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_2_fu_16458_p2() {
    p_Val2_12_24_2_fu_16458_p2 = (!x_V_1_24_1_fu_16390_p3.read().is_01() || !p_Val2_11_24_2_fu_16454_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_24_1_fu_16390_p3.read()) - sc_bigint<15>(p_Val2_11_24_2_fu_16454_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_3_fu_16536_p2() {
    p_Val2_12_24_3_fu_16536_p2 = (!x_V_1_24_2_fu_16470_p3.read().is_01() || !p_Val2_11_24_3_fu_16532_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_24_2_fu_16470_p3.read()) - sc_bigint<15>(p_Val2_11_24_3_fu_16532_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_4_fu_29084_p2() {
    p_Val2_12_24_4_fu_29084_p2 = (!x_V_1_24_3_reg_61275.read().is_01() || !p_Val2_11_24_4_fu_29081_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_24_3_reg_61275.read()) - sc_bigint<15>(p_Val2_11_24_4_fu_29081_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_5_fu_29160_p2() {
    p_Val2_12_24_5_fu_29160_p2 = (!x_V_1_24_4_fu_29094_p3.read().is_01() || !p_Val2_11_24_5_fu_29156_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_24_4_fu_29094_p3.read()) - sc_bigint<15>(p_Val2_11_24_5_fu_29156_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_24_6_fu_39759_p2() {
    p_Val2_12_24_6_fu_39759_p2 = (!x_V_1_24_5_reg_63689.read().is_01() || !p_Val2_11_24_6_fu_39756_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_24_5_reg_63689.read()) - sc_bigint<15>(p_Val2_11_24_6_fu_39756_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_1_fu_6412_p2() {
    p_Val2_12_25_1_fu_6412_p2 = (!p_Val2_4_25_cast_fu_6348_p1.read().is_01() || !p_Val2_11_25_1_fu_6408_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_25_cast_fu_6348_p1.read()) - sc_bigint<15>(p_Val2_11_25_1_fu_6408_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_2_fu_16652_p2() {
    p_Val2_12_25_2_fu_16652_p2 = (!x_V_1_25_1_fu_16584_p3.read().is_01() || !p_Val2_11_25_2_fu_16648_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_25_1_fu_16584_p3.read()) - sc_bigint<15>(p_Val2_11_25_2_fu_16648_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_3_fu_16730_p2() {
    p_Val2_12_25_3_fu_16730_p2 = (!x_V_1_25_2_fu_16664_p3.read().is_01() || !p_Val2_11_25_3_fu_16726_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_25_2_fu_16664_p3.read()) - sc_bigint<15>(p_Val2_11_25_3_fu_16726_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_4_fu_29232_p2() {
    p_Val2_12_25_4_fu_29232_p2 = (!x_V_1_25_3_reg_61309.read().is_01() || !p_Val2_11_25_4_fu_29229_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_25_3_reg_61309.read()) - sc_bigint<15>(p_Val2_11_25_4_fu_29229_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_5_fu_29308_p2() {
    p_Val2_12_25_5_fu_29308_p2 = (!x_V_1_25_4_fu_29242_p3.read().is_01() || !p_Val2_11_25_5_fu_29304_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_25_4_fu_29242_p3.read()) - sc_bigint<15>(p_Val2_11_25_5_fu_29304_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_25_6_fu_39912_p2() {
    p_Val2_12_25_6_fu_39912_p2 = (!x_V_1_25_5_reg_63723.read().is_01() || !p_Val2_11_25_6_fu_39909_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_25_5_reg_63723.read()) - sc_bigint<15>(p_Val2_11_25_6_fu_39909_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_1_fu_6530_p2() {
    p_Val2_12_26_1_fu_6530_p2 = (!p_Val2_4_26_cast_fu_6466_p1.read().is_01() || !p_Val2_11_26_1_fu_6526_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_26_cast_fu_6466_p1.read()) - sc_bigint<15>(p_Val2_11_26_1_fu_6526_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_2_fu_16846_p2() {
    p_Val2_12_26_2_fu_16846_p2 = (!x_V_1_26_1_fu_16778_p3.read().is_01() || !p_Val2_11_26_2_fu_16842_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_26_1_fu_16778_p3.read()) - sc_bigint<15>(p_Val2_11_26_2_fu_16842_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_3_fu_16924_p2() {
    p_Val2_12_26_3_fu_16924_p2 = (!x_V_1_26_2_fu_16858_p3.read().is_01() || !p_Val2_11_26_3_fu_16920_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_26_2_fu_16858_p3.read()) - sc_bigint<15>(p_Val2_11_26_3_fu_16920_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_4_fu_29380_p2() {
    p_Val2_12_26_4_fu_29380_p2 = (!x_V_1_26_3_reg_61343.read().is_01() || !p_Val2_11_26_4_fu_29377_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_26_3_reg_61343.read()) - sc_bigint<15>(p_Val2_11_26_4_fu_29377_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_5_fu_29456_p2() {
    p_Val2_12_26_5_fu_29456_p2 = (!x_V_1_26_4_fu_29390_p3.read().is_01() || !p_Val2_11_26_5_fu_29452_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_26_4_fu_29390_p3.read()) - sc_bigint<15>(p_Val2_11_26_5_fu_29452_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_26_6_fu_40065_p2() {
    p_Val2_12_26_6_fu_40065_p2 = (!x_V_1_26_5_reg_63757.read().is_01() || !p_Val2_11_26_6_fu_40062_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_26_5_reg_63757.read()) - sc_bigint<15>(p_Val2_11_26_6_fu_40062_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_1_fu_6648_p2() {
    p_Val2_12_27_1_fu_6648_p2 = (!p_Val2_4_27_cast_fu_6584_p1.read().is_01() || !p_Val2_11_27_1_fu_6644_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_27_cast_fu_6584_p1.read()) - sc_bigint<15>(p_Val2_11_27_1_fu_6644_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_2_fu_17040_p2() {
    p_Val2_12_27_2_fu_17040_p2 = (!x_V_1_27_1_fu_16972_p3.read().is_01() || !p_Val2_11_27_2_fu_17036_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_27_1_fu_16972_p3.read()) - sc_bigint<15>(p_Val2_11_27_2_fu_17036_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_3_fu_17118_p2() {
    p_Val2_12_27_3_fu_17118_p2 = (!x_V_1_27_2_fu_17052_p3.read().is_01() || !p_Val2_11_27_3_fu_17114_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_27_2_fu_17052_p3.read()) - sc_bigint<15>(p_Val2_11_27_3_fu_17114_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_4_fu_29528_p2() {
    p_Val2_12_27_4_fu_29528_p2 = (!x_V_1_27_3_reg_61377.read().is_01() || !p_Val2_11_27_4_fu_29525_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_27_3_reg_61377.read()) - sc_bigint<15>(p_Val2_11_27_4_fu_29525_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_5_fu_29604_p2() {
    p_Val2_12_27_5_fu_29604_p2 = (!x_V_1_27_4_fu_29538_p3.read().is_01() || !p_Val2_11_27_5_fu_29600_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_27_4_fu_29538_p3.read()) - sc_bigint<15>(p_Val2_11_27_5_fu_29600_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_27_6_fu_40218_p2() {
    p_Val2_12_27_6_fu_40218_p2 = (!x_V_1_27_5_reg_63791.read().is_01() || !p_Val2_11_27_6_fu_40215_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_27_5_reg_63791.read()) - sc_bigint<15>(p_Val2_11_27_6_fu_40215_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_1_fu_6766_p2() {
    p_Val2_12_28_1_fu_6766_p2 = (!p_Val2_4_28_cast_fu_6702_p1.read().is_01() || !p_Val2_11_28_1_fu_6762_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_28_cast_fu_6702_p1.read()) - sc_bigint<15>(p_Val2_11_28_1_fu_6762_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_2_fu_17234_p2() {
    p_Val2_12_28_2_fu_17234_p2 = (!x_V_1_28_1_fu_17166_p3.read().is_01() || !p_Val2_11_28_2_fu_17230_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_28_1_fu_17166_p3.read()) - sc_bigint<15>(p_Val2_11_28_2_fu_17230_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_3_fu_17312_p2() {
    p_Val2_12_28_3_fu_17312_p2 = (!x_V_1_28_2_fu_17246_p3.read().is_01() || !p_Val2_11_28_3_fu_17308_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_28_2_fu_17246_p3.read()) - sc_bigint<15>(p_Val2_11_28_3_fu_17308_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_4_fu_29676_p2() {
    p_Val2_12_28_4_fu_29676_p2 = (!x_V_1_28_3_reg_61411.read().is_01() || !p_Val2_11_28_4_fu_29673_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_28_3_reg_61411.read()) - sc_bigint<15>(p_Val2_11_28_4_fu_29673_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_5_fu_29752_p2() {
    p_Val2_12_28_5_fu_29752_p2 = (!x_V_1_28_4_fu_29686_p3.read().is_01() || !p_Val2_11_28_5_fu_29748_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_28_4_fu_29686_p3.read()) - sc_bigint<15>(p_Val2_11_28_5_fu_29748_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_28_6_fu_40371_p2() {
    p_Val2_12_28_6_fu_40371_p2 = (!x_V_1_28_5_reg_63825.read().is_01() || !p_Val2_11_28_6_fu_40368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_28_5_reg_63825.read()) - sc_bigint<15>(p_Val2_11_28_6_fu_40368_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_1_fu_6884_p2() {
    p_Val2_12_29_1_fu_6884_p2 = (!p_Val2_4_29_cast_fu_6820_p1.read().is_01() || !p_Val2_11_29_1_fu_6880_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_29_cast_fu_6820_p1.read()) - sc_bigint<15>(p_Val2_11_29_1_fu_6880_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_2_fu_17428_p2() {
    p_Val2_12_29_2_fu_17428_p2 = (!x_V_1_29_1_fu_17360_p3.read().is_01() || !p_Val2_11_29_2_fu_17424_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_29_1_fu_17360_p3.read()) - sc_bigint<15>(p_Val2_11_29_2_fu_17424_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_3_fu_17506_p2() {
    p_Val2_12_29_3_fu_17506_p2 = (!x_V_1_29_2_fu_17440_p3.read().is_01() || !p_Val2_11_29_3_fu_17502_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_29_2_fu_17440_p3.read()) - sc_bigint<15>(p_Val2_11_29_3_fu_17502_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_4_fu_29824_p2() {
    p_Val2_12_29_4_fu_29824_p2 = (!x_V_1_29_3_reg_61445.read().is_01() || !p_Val2_11_29_4_fu_29821_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_29_3_reg_61445.read()) - sc_bigint<15>(p_Val2_11_29_4_fu_29821_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_5_fu_29900_p2() {
    p_Val2_12_29_5_fu_29900_p2 = (!x_V_1_29_4_fu_29834_p3.read().is_01() || !p_Val2_11_29_5_fu_29896_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_29_4_fu_29834_p3.read()) - sc_bigint<15>(p_Val2_11_29_5_fu_29896_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_29_6_fu_40524_p2() {
    p_Val2_12_29_6_fu_40524_p2 = (!x_V_1_29_5_reg_63859.read().is_01() || !p_Val2_11_29_6_fu_40521_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_29_5_reg_63859.read()) - sc_bigint<15>(p_Val2_11_29_6_fu_40521_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_1_fu_3698_p2() {
    p_Val2_12_2_1_fu_3698_p2 = (!p_Val2_4_2_cast_fu_3634_p1.read().is_01() || !p_Val2_11_2_1_fu_3694_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_2_cast_fu_3634_p1.read()) - sc_bigint<15>(p_Val2_11_2_1_fu_3694_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_2_fu_12190_p2() {
    p_Val2_12_2_2_fu_12190_p2 = (!x_V_1_2_1_fu_12122_p3.read().is_01() || !p_Val2_11_2_2_fu_12186_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_2_1_fu_12122_p3.read()) - sc_bigint<15>(p_Val2_11_2_2_fu_12186_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_3_fu_12268_p2() {
    p_Val2_12_2_3_fu_12268_p2 = (!x_V_1_2_2_fu_12202_p3.read().is_01() || !p_Val2_11_2_3_fu_12264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_2_2_fu_12202_p3.read()) - sc_bigint<15>(p_Val2_11_2_3_fu_12264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_4_fu_25828_p2() {
    p_Val2_12_2_4_fu_25828_p2 = (!x_V_1_2_3_reg_60527.read().is_01() || !p_Val2_11_2_4_fu_25825_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_2_3_reg_60527.read()) - sc_bigint<15>(p_Val2_11_2_4_fu_25825_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_5_fu_25904_p2() {
    p_Val2_12_2_5_fu_25904_p2 = (!x_V_1_2_4_fu_25838_p3.read().is_01() || !p_Val2_11_2_5_fu_25900_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_2_4_fu_25838_p3.read()) - sc_bigint<15>(p_Val2_11_2_5_fu_25900_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_2_6_fu_36393_p2() {
    p_Val2_12_2_6_fu_36393_p2 = (!x_V_1_2_5_reg_62941.read().is_01() || !p_Val2_11_2_6_fu_36390_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_2_5_reg_62941.read()) - sc_bigint<15>(p_Val2_11_2_6_fu_36390_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_1_fu_7002_p2() {
    p_Val2_12_30_1_fu_7002_p2 = (!p_Val2_4_30_cast_fu_6938_p1.read().is_01() || !p_Val2_11_30_1_fu_6998_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_30_cast_fu_6938_p1.read()) - sc_bigint<15>(p_Val2_11_30_1_fu_6998_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_2_fu_17622_p2() {
    p_Val2_12_30_2_fu_17622_p2 = (!x_V_1_30_1_fu_17554_p3.read().is_01() || !p_Val2_11_30_2_fu_17618_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_30_1_fu_17554_p3.read()) - sc_bigint<15>(p_Val2_11_30_2_fu_17618_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_3_fu_17700_p2() {
    p_Val2_12_30_3_fu_17700_p2 = (!x_V_1_30_2_fu_17634_p3.read().is_01() || !p_Val2_11_30_3_fu_17696_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_30_2_fu_17634_p3.read()) - sc_bigint<15>(p_Val2_11_30_3_fu_17696_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_4_fu_29972_p2() {
    p_Val2_12_30_4_fu_29972_p2 = (!x_V_1_30_3_reg_61479.read().is_01() || !p_Val2_11_30_4_fu_29969_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_30_3_reg_61479.read()) - sc_bigint<15>(p_Val2_11_30_4_fu_29969_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_5_fu_30048_p2() {
    p_Val2_12_30_5_fu_30048_p2 = (!x_V_1_30_4_fu_29982_p3.read().is_01() || !p_Val2_11_30_5_fu_30044_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_30_4_fu_29982_p3.read()) - sc_bigint<15>(p_Val2_11_30_5_fu_30044_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_30_6_fu_40677_p2() {
    p_Val2_12_30_6_fu_40677_p2 = (!x_V_1_30_5_reg_63893.read().is_01() || !p_Val2_11_30_6_fu_40674_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_30_5_reg_63893.read()) - sc_bigint<15>(p_Val2_11_30_6_fu_40674_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_1_fu_7120_p2() {
    p_Val2_12_31_1_fu_7120_p2 = (!p_Val2_4_31_cast_fu_7056_p1.read().is_01() || !p_Val2_11_31_1_fu_7116_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_31_cast_fu_7056_p1.read()) - sc_bigint<15>(p_Val2_11_31_1_fu_7116_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_2_fu_17816_p2() {
    p_Val2_12_31_2_fu_17816_p2 = (!x_V_1_31_1_fu_17748_p3.read().is_01() || !p_Val2_11_31_2_fu_17812_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_31_1_fu_17748_p3.read()) - sc_bigint<15>(p_Val2_11_31_2_fu_17812_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_3_fu_17894_p2() {
    p_Val2_12_31_3_fu_17894_p2 = (!x_V_1_31_2_fu_17828_p3.read().is_01() || !p_Val2_11_31_3_fu_17890_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_31_2_fu_17828_p3.read()) - sc_bigint<15>(p_Val2_11_31_3_fu_17890_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_4_fu_30120_p2() {
    p_Val2_12_31_4_fu_30120_p2 = (!x_V_1_31_3_reg_61513.read().is_01() || !p_Val2_11_31_4_fu_30117_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_31_3_reg_61513.read()) - sc_bigint<15>(p_Val2_11_31_4_fu_30117_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_5_fu_30196_p2() {
    p_Val2_12_31_5_fu_30196_p2 = (!x_V_1_31_4_fu_30130_p3.read().is_01() || !p_Val2_11_31_5_fu_30192_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_31_4_fu_30130_p3.read()) - sc_bigint<15>(p_Val2_11_31_5_fu_30192_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_31_6_fu_40830_p2() {
    p_Val2_12_31_6_fu_40830_p2 = (!x_V_1_31_5_reg_63927.read().is_01() || !p_Val2_11_31_6_fu_40827_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_31_5_reg_63927.read()) - sc_bigint<15>(p_Val2_11_31_6_fu_40827_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_1_fu_7238_p2() {
    p_Val2_12_32_1_fu_7238_p2 = (!p_Val2_4_32_cast_fu_7174_p1.read().is_01() || !p_Val2_11_32_1_fu_7234_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_32_cast_fu_7174_p1.read()) - sc_bigint<15>(p_Val2_11_32_1_fu_7234_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_2_fu_18010_p2() {
    p_Val2_12_32_2_fu_18010_p2 = (!x_V_1_32_1_fu_17942_p3.read().is_01() || !p_Val2_11_32_2_fu_18006_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_32_1_fu_17942_p3.read()) - sc_bigint<15>(p_Val2_11_32_2_fu_18006_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_3_fu_18088_p2() {
    p_Val2_12_32_3_fu_18088_p2 = (!x_V_1_32_2_fu_18022_p3.read().is_01() || !p_Val2_11_32_3_fu_18084_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_32_2_fu_18022_p3.read()) - sc_bigint<15>(p_Val2_11_32_3_fu_18084_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_4_fu_30268_p2() {
    p_Val2_12_32_4_fu_30268_p2 = (!x_V_1_32_3_reg_61547.read().is_01() || !p_Val2_11_32_4_fu_30265_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_32_3_reg_61547.read()) - sc_bigint<15>(p_Val2_11_32_4_fu_30265_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_5_fu_30344_p2() {
    p_Val2_12_32_5_fu_30344_p2 = (!x_V_1_32_4_fu_30278_p3.read().is_01() || !p_Val2_11_32_5_fu_30340_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_32_4_fu_30278_p3.read()) - sc_bigint<15>(p_Val2_11_32_5_fu_30340_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_32_6_fu_40983_p2() {
    p_Val2_12_32_6_fu_40983_p2 = (!x_V_1_32_5_reg_63961.read().is_01() || !p_Val2_11_32_6_fu_40980_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_32_5_reg_63961.read()) - sc_bigint<15>(p_Val2_11_32_6_fu_40980_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_1_fu_7356_p2() {
    p_Val2_12_33_1_fu_7356_p2 = (!p_Val2_4_33_cast_fu_7292_p1.read().is_01() || !p_Val2_11_33_1_fu_7352_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_33_cast_fu_7292_p1.read()) - sc_bigint<15>(p_Val2_11_33_1_fu_7352_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_2_fu_18204_p2() {
    p_Val2_12_33_2_fu_18204_p2 = (!x_V_1_33_1_fu_18136_p3.read().is_01() || !p_Val2_11_33_2_fu_18200_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_33_1_fu_18136_p3.read()) - sc_bigint<15>(p_Val2_11_33_2_fu_18200_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_3_fu_18282_p2() {
    p_Val2_12_33_3_fu_18282_p2 = (!x_V_1_33_2_fu_18216_p3.read().is_01() || !p_Val2_11_33_3_fu_18278_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_33_2_fu_18216_p3.read()) - sc_bigint<15>(p_Val2_11_33_3_fu_18278_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_4_fu_30416_p2() {
    p_Val2_12_33_4_fu_30416_p2 = (!x_V_1_33_3_reg_61581.read().is_01() || !p_Val2_11_33_4_fu_30413_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_33_3_reg_61581.read()) - sc_bigint<15>(p_Val2_11_33_4_fu_30413_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_5_fu_30492_p2() {
    p_Val2_12_33_5_fu_30492_p2 = (!x_V_1_33_4_fu_30426_p3.read().is_01() || !p_Val2_11_33_5_fu_30488_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_33_4_fu_30426_p3.read()) - sc_bigint<15>(p_Val2_11_33_5_fu_30488_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_33_6_fu_41136_p2() {
    p_Val2_12_33_6_fu_41136_p2 = (!x_V_1_33_5_reg_63995.read().is_01() || !p_Val2_11_33_6_fu_41133_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_33_5_reg_63995.read()) - sc_bigint<15>(p_Val2_11_33_6_fu_41133_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_1_fu_7474_p2() {
    p_Val2_12_34_1_fu_7474_p2 = (!p_Val2_4_34_cast_fu_7410_p1.read().is_01() || !p_Val2_11_34_1_fu_7470_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_34_cast_fu_7410_p1.read()) - sc_bigint<15>(p_Val2_11_34_1_fu_7470_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_2_fu_18398_p2() {
    p_Val2_12_34_2_fu_18398_p2 = (!x_V_1_34_1_fu_18330_p3.read().is_01() || !p_Val2_11_34_2_fu_18394_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_34_1_fu_18330_p3.read()) - sc_bigint<15>(p_Val2_11_34_2_fu_18394_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_3_fu_18476_p2() {
    p_Val2_12_34_3_fu_18476_p2 = (!x_V_1_34_2_fu_18410_p3.read().is_01() || !p_Val2_11_34_3_fu_18472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_34_2_fu_18410_p3.read()) - sc_bigint<15>(p_Val2_11_34_3_fu_18472_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_4_fu_30564_p2() {
    p_Val2_12_34_4_fu_30564_p2 = (!x_V_1_34_3_reg_61615.read().is_01() || !p_Val2_11_34_4_fu_30561_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_34_3_reg_61615.read()) - sc_bigint<15>(p_Val2_11_34_4_fu_30561_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_5_fu_30640_p2() {
    p_Val2_12_34_5_fu_30640_p2 = (!x_V_1_34_4_fu_30574_p3.read().is_01() || !p_Val2_11_34_5_fu_30636_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_34_4_fu_30574_p3.read()) - sc_bigint<15>(p_Val2_11_34_5_fu_30636_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_34_6_fu_41289_p2() {
    p_Val2_12_34_6_fu_41289_p2 = (!x_V_1_34_5_reg_64029.read().is_01() || !p_Val2_11_34_6_fu_41286_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_34_5_reg_64029.read()) - sc_bigint<15>(p_Val2_11_34_6_fu_41286_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_1_fu_7592_p2() {
    p_Val2_12_35_1_fu_7592_p2 = (!p_Val2_4_35_cast_fu_7528_p1.read().is_01() || !p_Val2_11_35_1_fu_7588_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_35_cast_fu_7528_p1.read()) - sc_bigint<15>(p_Val2_11_35_1_fu_7588_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_2_fu_18592_p2() {
    p_Val2_12_35_2_fu_18592_p2 = (!x_V_1_35_1_fu_18524_p3.read().is_01() || !p_Val2_11_35_2_fu_18588_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_35_1_fu_18524_p3.read()) - sc_bigint<15>(p_Val2_11_35_2_fu_18588_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_3_fu_18670_p2() {
    p_Val2_12_35_3_fu_18670_p2 = (!x_V_1_35_2_fu_18604_p3.read().is_01() || !p_Val2_11_35_3_fu_18666_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_35_2_fu_18604_p3.read()) - sc_bigint<15>(p_Val2_11_35_3_fu_18666_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_4_fu_30712_p2() {
    p_Val2_12_35_4_fu_30712_p2 = (!x_V_1_35_3_reg_61649.read().is_01() || !p_Val2_11_35_4_fu_30709_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_35_3_reg_61649.read()) - sc_bigint<15>(p_Val2_11_35_4_fu_30709_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_5_fu_30788_p2() {
    p_Val2_12_35_5_fu_30788_p2 = (!x_V_1_35_4_fu_30722_p3.read().is_01() || !p_Val2_11_35_5_fu_30784_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_35_4_fu_30722_p3.read()) - sc_bigint<15>(p_Val2_11_35_5_fu_30784_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_35_6_fu_41442_p2() {
    p_Val2_12_35_6_fu_41442_p2 = (!x_V_1_35_5_reg_64063.read().is_01() || !p_Val2_11_35_6_fu_41439_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_35_5_reg_64063.read()) - sc_bigint<15>(p_Val2_11_35_6_fu_41439_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_1_fu_7710_p2() {
    p_Val2_12_36_1_fu_7710_p2 = (!p_Val2_4_36_cast_fu_7646_p1.read().is_01() || !p_Val2_11_36_1_fu_7706_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_36_cast_fu_7646_p1.read()) - sc_bigint<15>(p_Val2_11_36_1_fu_7706_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_2_fu_18786_p2() {
    p_Val2_12_36_2_fu_18786_p2 = (!x_V_1_36_1_fu_18718_p3.read().is_01() || !p_Val2_11_36_2_fu_18782_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_36_1_fu_18718_p3.read()) - sc_bigint<15>(p_Val2_11_36_2_fu_18782_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_3_fu_18864_p2() {
    p_Val2_12_36_3_fu_18864_p2 = (!x_V_1_36_2_fu_18798_p3.read().is_01() || !p_Val2_11_36_3_fu_18860_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_36_2_fu_18798_p3.read()) - sc_bigint<15>(p_Val2_11_36_3_fu_18860_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_4_fu_30860_p2() {
    p_Val2_12_36_4_fu_30860_p2 = (!x_V_1_36_3_reg_61683.read().is_01() || !p_Val2_11_36_4_fu_30857_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_36_3_reg_61683.read()) - sc_bigint<15>(p_Val2_11_36_4_fu_30857_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_5_fu_30936_p2() {
    p_Val2_12_36_5_fu_30936_p2 = (!x_V_1_36_4_fu_30870_p3.read().is_01() || !p_Val2_11_36_5_fu_30932_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_36_4_fu_30870_p3.read()) - sc_bigint<15>(p_Val2_11_36_5_fu_30932_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_36_6_fu_41595_p2() {
    p_Val2_12_36_6_fu_41595_p2 = (!x_V_1_36_5_reg_64097.read().is_01() || !p_Val2_11_36_6_fu_41592_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_36_5_reg_64097.read()) - sc_bigint<15>(p_Val2_11_36_6_fu_41592_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_1_fu_7828_p2() {
    p_Val2_12_37_1_fu_7828_p2 = (!p_Val2_4_37_cast_fu_7764_p1.read().is_01() || !p_Val2_11_37_1_fu_7824_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_37_cast_fu_7764_p1.read()) - sc_bigint<15>(p_Val2_11_37_1_fu_7824_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_2_fu_18980_p2() {
    p_Val2_12_37_2_fu_18980_p2 = (!x_V_1_37_1_fu_18912_p3.read().is_01() || !p_Val2_11_37_2_fu_18976_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_37_1_fu_18912_p3.read()) - sc_bigint<15>(p_Val2_11_37_2_fu_18976_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_3_fu_19058_p2() {
    p_Val2_12_37_3_fu_19058_p2 = (!x_V_1_37_2_fu_18992_p3.read().is_01() || !p_Val2_11_37_3_fu_19054_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_37_2_fu_18992_p3.read()) - sc_bigint<15>(p_Val2_11_37_3_fu_19054_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_4_fu_31008_p2() {
    p_Val2_12_37_4_fu_31008_p2 = (!x_V_1_37_3_reg_61717.read().is_01() || !p_Val2_11_37_4_fu_31005_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_37_3_reg_61717.read()) - sc_bigint<15>(p_Val2_11_37_4_fu_31005_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_5_fu_31084_p2() {
    p_Val2_12_37_5_fu_31084_p2 = (!x_V_1_37_4_fu_31018_p3.read().is_01() || !p_Val2_11_37_5_fu_31080_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_37_4_fu_31018_p3.read()) - sc_bigint<15>(p_Val2_11_37_5_fu_31080_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_37_6_fu_41748_p2() {
    p_Val2_12_37_6_fu_41748_p2 = (!x_V_1_37_5_reg_64131.read().is_01() || !p_Val2_11_37_6_fu_41745_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_37_5_reg_64131.read()) - sc_bigint<15>(p_Val2_11_37_6_fu_41745_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_1_fu_7946_p2() {
    p_Val2_12_38_1_fu_7946_p2 = (!p_Val2_4_38_cast_fu_7882_p1.read().is_01() || !p_Val2_11_38_1_fu_7942_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_38_cast_fu_7882_p1.read()) - sc_bigint<15>(p_Val2_11_38_1_fu_7942_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_2_fu_19174_p2() {
    p_Val2_12_38_2_fu_19174_p2 = (!x_V_1_38_1_fu_19106_p3.read().is_01() || !p_Val2_11_38_2_fu_19170_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_38_1_fu_19106_p3.read()) - sc_bigint<15>(p_Val2_11_38_2_fu_19170_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_3_fu_19252_p2() {
    p_Val2_12_38_3_fu_19252_p2 = (!x_V_1_38_2_fu_19186_p3.read().is_01() || !p_Val2_11_38_3_fu_19248_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_38_2_fu_19186_p3.read()) - sc_bigint<15>(p_Val2_11_38_3_fu_19248_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_4_fu_31156_p2() {
    p_Val2_12_38_4_fu_31156_p2 = (!x_V_1_38_3_reg_61751.read().is_01() || !p_Val2_11_38_4_fu_31153_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_38_3_reg_61751.read()) - sc_bigint<15>(p_Val2_11_38_4_fu_31153_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_5_fu_31232_p2() {
    p_Val2_12_38_5_fu_31232_p2 = (!x_V_1_38_4_fu_31166_p3.read().is_01() || !p_Val2_11_38_5_fu_31228_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_38_4_fu_31166_p3.read()) - sc_bigint<15>(p_Val2_11_38_5_fu_31228_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_38_6_fu_41901_p2() {
    p_Val2_12_38_6_fu_41901_p2 = (!x_V_1_38_5_reg_64165.read().is_01() || !p_Val2_11_38_6_fu_41898_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_38_5_reg_64165.read()) - sc_bigint<15>(p_Val2_11_38_6_fu_41898_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_1_fu_8064_p2() {
    p_Val2_12_39_1_fu_8064_p2 = (!p_Val2_4_39_cast_fu_8000_p1.read().is_01() || !p_Val2_11_39_1_fu_8060_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_39_cast_fu_8000_p1.read()) - sc_bigint<15>(p_Val2_11_39_1_fu_8060_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_2_fu_19368_p2() {
    p_Val2_12_39_2_fu_19368_p2 = (!x_V_1_39_1_fu_19300_p3.read().is_01() || !p_Val2_11_39_2_fu_19364_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_39_1_fu_19300_p3.read()) - sc_bigint<15>(p_Val2_11_39_2_fu_19364_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_3_fu_19446_p2() {
    p_Val2_12_39_3_fu_19446_p2 = (!x_V_1_39_2_fu_19380_p3.read().is_01() || !p_Val2_11_39_3_fu_19442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_39_2_fu_19380_p3.read()) - sc_bigint<15>(p_Val2_11_39_3_fu_19442_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_4_fu_31304_p2() {
    p_Val2_12_39_4_fu_31304_p2 = (!x_V_1_39_3_reg_61785.read().is_01() || !p_Val2_11_39_4_fu_31301_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_39_3_reg_61785.read()) - sc_bigint<15>(p_Val2_11_39_4_fu_31301_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_5_fu_31380_p2() {
    p_Val2_12_39_5_fu_31380_p2 = (!x_V_1_39_4_fu_31314_p3.read().is_01() || !p_Val2_11_39_5_fu_31376_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_39_4_fu_31314_p3.read()) - sc_bigint<15>(p_Val2_11_39_5_fu_31376_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_39_6_fu_42054_p2() {
    p_Val2_12_39_6_fu_42054_p2 = (!x_V_1_39_5_reg_64199.read().is_01() || !p_Val2_11_39_6_fu_42051_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_39_5_reg_64199.read()) - sc_bigint<15>(p_Val2_11_39_6_fu_42051_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_1_fu_3816_p2() {
    p_Val2_12_3_1_fu_3816_p2 = (!p_Val2_4_3_cast_fu_3752_p1.read().is_01() || !p_Val2_11_3_1_fu_3812_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_3_cast_fu_3752_p1.read()) - sc_bigint<15>(p_Val2_11_3_1_fu_3812_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_2_fu_12384_p2() {
    p_Val2_12_3_2_fu_12384_p2 = (!x_V_1_3_1_fu_12316_p3.read().is_01() || !p_Val2_11_3_2_fu_12380_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_3_1_fu_12316_p3.read()) - sc_bigint<15>(p_Val2_11_3_2_fu_12380_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_3_fu_12462_p2() {
    p_Val2_12_3_3_fu_12462_p2 = (!x_V_1_3_2_fu_12396_p3.read().is_01() || !p_Val2_11_3_3_fu_12458_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_3_2_fu_12396_p3.read()) - sc_bigint<15>(p_Val2_11_3_3_fu_12458_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_4_fu_25976_p2() {
    p_Val2_12_3_4_fu_25976_p2 = (!x_V_1_3_3_reg_60561.read().is_01() || !p_Val2_11_3_4_fu_25973_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_3_3_reg_60561.read()) - sc_bigint<15>(p_Val2_11_3_4_fu_25973_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_5_fu_26052_p2() {
    p_Val2_12_3_5_fu_26052_p2 = (!x_V_1_3_4_fu_25986_p3.read().is_01() || !p_Val2_11_3_5_fu_26048_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_3_4_fu_25986_p3.read()) - sc_bigint<15>(p_Val2_11_3_5_fu_26048_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_3_6_fu_36546_p2() {
    p_Val2_12_3_6_fu_36546_p2 = (!x_V_1_3_5_reg_62975.read().is_01() || !p_Val2_11_3_6_fu_36543_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_3_5_reg_62975.read()) - sc_bigint<15>(p_Val2_11_3_6_fu_36543_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_1_fu_8182_p2() {
    p_Val2_12_40_1_fu_8182_p2 = (!p_Val2_4_40_cast_fu_8118_p1.read().is_01() || !p_Val2_11_40_1_fu_8178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_40_cast_fu_8118_p1.read()) - sc_bigint<15>(p_Val2_11_40_1_fu_8178_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_2_fu_19562_p2() {
    p_Val2_12_40_2_fu_19562_p2 = (!x_V_1_40_1_fu_19494_p3.read().is_01() || !p_Val2_11_40_2_fu_19558_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_40_1_fu_19494_p3.read()) - sc_bigint<15>(p_Val2_11_40_2_fu_19558_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_3_fu_19640_p2() {
    p_Val2_12_40_3_fu_19640_p2 = (!x_V_1_40_2_fu_19574_p3.read().is_01() || !p_Val2_11_40_3_fu_19636_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_40_2_fu_19574_p3.read()) - sc_bigint<15>(p_Val2_11_40_3_fu_19636_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_4_fu_31452_p2() {
    p_Val2_12_40_4_fu_31452_p2 = (!x_V_1_40_3_reg_61819.read().is_01() || !p_Val2_11_40_4_fu_31449_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_40_3_reg_61819.read()) - sc_bigint<15>(p_Val2_11_40_4_fu_31449_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_5_fu_31528_p2() {
    p_Val2_12_40_5_fu_31528_p2 = (!x_V_1_40_4_fu_31462_p3.read().is_01() || !p_Val2_11_40_5_fu_31524_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_40_4_fu_31462_p3.read()) - sc_bigint<15>(p_Val2_11_40_5_fu_31524_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_40_6_fu_42207_p2() {
    p_Val2_12_40_6_fu_42207_p2 = (!x_V_1_40_5_reg_64233.read().is_01() || !p_Val2_11_40_6_fu_42204_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_40_5_reg_64233.read()) - sc_bigint<15>(p_Val2_11_40_6_fu_42204_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_1_fu_8300_p2() {
    p_Val2_12_41_1_fu_8300_p2 = (!p_Val2_4_41_cast_fu_8236_p1.read().is_01() || !p_Val2_11_41_1_fu_8296_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_41_cast_fu_8236_p1.read()) - sc_bigint<15>(p_Val2_11_41_1_fu_8296_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_2_fu_19756_p2() {
    p_Val2_12_41_2_fu_19756_p2 = (!x_V_1_41_1_fu_19688_p3.read().is_01() || !p_Val2_11_41_2_fu_19752_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_41_1_fu_19688_p3.read()) - sc_bigint<15>(p_Val2_11_41_2_fu_19752_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_3_fu_19834_p2() {
    p_Val2_12_41_3_fu_19834_p2 = (!x_V_1_41_2_fu_19768_p3.read().is_01() || !p_Val2_11_41_3_fu_19830_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_41_2_fu_19768_p3.read()) - sc_bigint<15>(p_Val2_11_41_3_fu_19830_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_4_fu_31600_p2() {
    p_Val2_12_41_4_fu_31600_p2 = (!x_V_1_41_3_reg_61853.read().is_01() || !p_Val2_11_41_4_fu_31597_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_41_3_reg_61853.read()) - sc_bigint<15>(p_Val2_11_41_4_fu_31597_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_5_fu_31676_p2() {
    p_Val2_12_41_5_fu_31676_p2 = (!x_V_1_41_4_fu_31610_p3.read().is_01() || !p_Val2_11_41_5_fu_31672_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_41_4_fu_31610_p3.read()) - sc_bigint<15>(p_Val2_11_41_5_fu_31672_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_41_6_fu_42360_p2() {
    p_Val2_12_41_6_fu_42360_p2 = (!x_V_1_41_5_reg_64267.read().is_01() || !p_Val2_11_41_6_fu_42357_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_41_5_reg_64267.read()) - sc_bigint<15>(p_Val2_11_41_6_fu_42357_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_1_fu_8418_p2() {
    p_Val2_12_42_1_fu_8418_p2 = (!p_Val2_4_42_cast_fu_8354_p1.read().is_01() || !p_Val2_11_42_1_fu_8414_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_42_cast_fu_8354_p1.read()) - sc_bigint<15>(p_Val2_11_42_1_fu_8414_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_2_fu_19950_p2() {
    p_Val2_12_42_2_fu_19950_p2 = (!x_V_1_42_1_fu_19882_p3.read().is_01() || !p_Val2_11_42_2_fu_19946_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_42_1_fu_19882_p3.read()) - sc_bigint<15>(p_Val2_11_42_2_fu_19946_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_3_fu_20028_p2() {
    p_Val2_12_42_3_fu_20028_p2 = (!x_V_1_42_2_fu_19962_p3.read().is_01() || !p_Val2_11_42_3_fu_20024_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_42_2_fu_19962_p3.read()) - sc_bigint<15>(p_Val2_11_42_3_fu_20024_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_4_fu_31748_p2() {
    p_Val2_12_42_4_fu_31748_p2 = (!x_V_1_42_3_reg_61887.read().is_01() || !p_Val2_11_42_4_fu_31745_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_42_3_reg_61887.read()) - sc_bigint<15>(p_Val2_11_42_4_fu_31745_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_5_fu_31824_p2() {
    p_Val2_12_42_5_fu_31824_p2 = (!x_V_1_42_4_fu_31758_p3.read().is_01() || !p_Val2_11_42_5_fu_31820_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_42_4_fu_31758_p3.read()) - sc_bigint<15>(p_Val2_11_42_5_fu_31820_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_42_6_fu_42513_p2() {
    p_Val2_12_42_6_fu_42513_p2 = (!x_V_1_42_5_reg_64301.read().is_01() || !p_Val2_11_42_6_fu_42510_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_42_5_reg_64301.read()) - sc_bigint<15>(p_Val2_11_42_6_fu_42510_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_1_fu_8536_p2() {
    p_Val2_12_43_1_fu_8536_p2 = (!p_Val2_4_43_cast_fu_8472_p1.read().is_01() || !p_Val2_11_43_1_fu_8532_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_43_cast_fu_8472_p1.read()) - sc_bigint<15>(p_Val2_11_43_1_fu_8532_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_2_fu_20144_p2() {
    p_Val2_12_43_2_fu_20144_p2 = (!x_V_1_43_1_fu_20076_p3.read().is_01() || !p_Val2_11_43_2_fu_20140_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_43_1_fu_20076_p3.read()) - sc_bigint<15>(p_Val2_11_43_2_fu_20140_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_3_fu_20222_p2() {
    p_Val2_12_43_3_fu_20222_p2 = (!x_V_1_43_2_fu_20156_p3.read().is_01() || !p_Val2_11_43_3_fu_20218_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_43_2_fu_20156_p3.read()) - sc_bigint<15>(p_Val2_11_43_3_fu_20218_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_4_fu_31896_p2() {
    p_Val2_12_43_4_fu_31896_p2 = (!x_V_1_43_3_reg_61921.read().is_01() || !p_Val2_11_43_4_fu_31893_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_43_3_reg_61921.read()) - sc_bigint<15>(p_Val2_11_43_4_fu_31893_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_5_fu_31972_p2() {
    p_Val2_12_43_5_fu_31972_p2 = (!x_V_1_43_4_fu_31906_p3.read().is_01() || !p_Val2_11_43_5_fu_31968_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_43_4_fu_31906_p3.read()) - sc_bigint<15>(p_Val2_11_43_5_fu_31968_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_43_6_fu_42666_p2() {
    p_Val2_12_43_6_fu_42666_p2 = (!x_V_1_43_5_reg_64335.read().is_01() || !p_Val2_11_43_6_fu_42663_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_43_5_reg_64335.read()) - sc_bigint<15>(p_Val2_11_43_6_fu_42663_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_1_fu_8654_p2() {
    p_Val2_12_44_1_fu_8654_p2 = (!p_Val2_4_44_cast_fu_8590_p1.read().is_01() || !p_Val2_11_44_1_fu_8650_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_44_cast_fu_8590_p1.read()) - sc_bigint<15>(p_Val2_11_44_1_fu_8650_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_2_fu_20338_p2() {
    p_Val2_12_44_2_fu_20338_p2 = (!x_V_1_44_1_fu_20270_p3.read().is_01() || !p_Val2_11_44_2_fu_20334_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_44_1_fu_20270_p3.read()) - sc_bigint<15>(p_Val2_11_44_2_fu_20334_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_3_fu_20416_p2() {
    p_Val2_12_44_3_fu_20416_p2 = (!x_V_1_44_2_fu_20350_p3.read().is_01() || !p_Val2_11_44_3_fu_20412_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_44_2_fu_20350_p3.read()) - sc_bigint<15>(p_Val2_11_44_3_fu_20412_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_4_fu_32044_p2() {
    p_Val2_12_44_4_fu_32044_p2 = (!x_V_1_44_3_reg_61955.read().is_01() || !p_Val2_11_44_4_fu_32041_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_44_3_reg_61955.read()) - sc_bigint<15>(p_Val2_11_44_4_fu_32041_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_5_fu_32120_p2() {
    p_Val2_12_44_5_fu_32120_p2 = (!x_V_1_44_4_fu_32054_p3.read().is_01() || !p_Val2_11_44_5_fu_32116_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_44_4_fu_32054_p3.read()) - sc_bigint<15>(p_Val2_11_44_5_fu_32116_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_44_6_fu_42819_p2() {
    p_Val2_12_44_6_fu_42819_p2 = (!x_V_1_44_5_reg_64369.read().is_01() || !p_Val2_11_44_6_fu_42816_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_44_5_reg_64369.read()) - sc_bigint<15>(p_Val2_11_44_6_fu_42816_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_1_fu_8772_p2() {
    p_Val2_12_45_1_fu_8772_p2 = (!p_Val2_4_45_cast_fu_8708_p1.read().is_01() || !p_Val2_11_45_1_fu_8768_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_45_cast_fu_8708_p1.read()) - sc_bigint<15>(p_Val2_11_45_1_fu_8768_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_2_fu_20532_p2() {
    p_Val2_12_45_2_fu_20532_p2 = (!x_V_1_45_1_fu_20464_p3.read().is_01() || !p_Val2_11_45_2_fu_20528_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_45_1_fu_20464_p3.read()) - sc_bigint<15>(p_Val2_11_45_2_fu_20528_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_3_fu_20610_p2() {
    p_Val2_12_45_3_fu_20610_p2 = (!x_V_1_45_2_fu_20544_p3.read().is_01() || !p_Val2_11_45_3_fu_20606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_45_2_fu_20544_p3.read()) - sc_bigint<15>(p_Val2_11_45_3_fu_20606_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_4_fu_32192_p2() {
    p_Val2_12_45_4_fu_32192_p2 = (!x_V_1_45_3_reg_61989.read().is_01() || !p_Val2_11_45_4_fu_32189_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_45_3_reg_61989.read()) - sc_bigint<15>(p_Val2_11_45_4_fu_32189_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_5_fu_32268_p2() {
    p_Val2_12_45_5_fu_32268_p2 = (!x_V_1_45_4_fu_32202_p3.read().is_01() || !p_Val2_11_45_5_fu_32264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_45_4_fu_32202_p3.read()) - sc_bigint<15>(p_Val2_11_45_5_fu_32264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_45_6_fu_42972_p2() {
    p_Val2_12_45_6_fu_42972_p2 = (!x_V_1_45_5_reg_64403.read().is_01() || !p_Val2_11_45_6_fu_42969_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_45_5_reg_64403.read()) - sc_bigint<15>(p_Val2_11_45_6_fu_42969_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_1_fu_8890_p2() {
    p_Val2_12_46_1_fu_8890_p2 = (!p_Val2_4_46_cast_fu_8826_p1.read().is_01() || !p_Val2_11_46_1_fu_8886_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_46_cast_fu_8826_p1.read()) - sc_bigint<15>(p_Val2_11_46_1_fu_8886_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_2_fu_20726_p2() {
    p_Val2_12_46_2_fu_20726_p2 = (!x_V_1_46_1_fu_20658_p3.read().is_01() || !p_Val2_11_46_2_fu_20722_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_46_1_fu_20658_p3.read()) - sc_bigint<15>(p_Val2_11_46_2_fu_20722_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_3_fu_20804_p2() {
    p_Val2_12_46_3_fu_20804_p2 = (!x_V_1_46_2_fu_20738_p3.read().is_01() || !p_Val2_11_46_3_fu_20800_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_46_2_fu_20738_p3.read()) - sc_bigint<15>(p_Val2_11_46_3_fu_20800_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_4_fu_32340_p2() {
    p_Val2_12_46_4_fu_32340_p2 = (!x_V_1_46_3_reg_62023.read().is_01() || !p_Val2_11_46_4_fu_32337_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_46_3_reg_62023.read()) - sc_bigint<15>(p_Val2_11_46_4_fu_32337_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_5_fu_32416_p2() {
    p_Val2_12_46_5_fu_32416_p2 = (!x_V_1_46_4_fu_32350_p3.read().is_01() || !p_Val2_11_46_5_fu_32412_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_46_4_fu_32350_p3.read()) - sc_bigint<15>(p_Val2_11_46_5_fu_32412_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_46_6_fu_43125_p2() {
    p_Val2_12_46_6_fu_43125_p2 = (!x_V_1_46_5_reg_64437.read().is_01() || !p_Val2_11_46_6_fu_43122_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_46_5_reg_64437.read()) - sc_bigint<15>(p_Val2_11_46_6_fu_43122_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_1_fu_9008_p2() {
    p_Val2_12_47_1_fu_9008_p2 = (!p_Val2_4_47_cast_fu_8944_p1.read().is_01() || !p_Val2_11_47_1_fu_9004_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_47_cast_fu_8944_p1.read()) - sc_bigint<15>(p_Val2_11_47_1_fu_9004_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_2_fu_20920_p2() {
    p_Val2_12_47_2_fu_20920_p2 = (!x_V_1_47_1_fu_20852_p3.read().is_01() || !p_Val2_11_47_2_fu_20916_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_47_1_fu_20852_p3.read()) - sc_bigint<15>(p_Val2_11_47_2_fu_20916_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_3_fu_20998_p2() {
    p_Val2_12_47_3_fu_20998_p2 = (!x_V_1_47_2_fu_20932_p3.read().is_01() || !p_Val2_11_47_3_fu_20994_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_47_2_fu_20932_p3.read()) - sc_bigint<15>(p_Val2_11_47_3_fu_20994_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_4_fu_32488_p2() {
    p_Val2_12_47_4_fu_32488_p2 = (!x_V_1_47_3_reg_62057.read().is_01() || !p_Val2_11_47_4_fu_32485_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_47_3_reg_62057.read()) - sc_bigint<15>(p_Val2_11_47_4_fu_32485_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_5_fu_32564_p2() {
    p_Val2_12_47_5_fu_32564_p2 = (!x_V_1_47_4_fu_32498_p3.read().is_01() || !p_Val2_11_47_5_fu_32560_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_47_4_fu_32498_p3.read()) - sc_bigint<15>(p_Val2_11_47_5_fu_32560_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_47_6_fu_43278_p2() {
    p_Val2_12_47_6_fu_43278_p2 = (!x_V_1_47_5_reg_64471.read().is_01() || !p_Val2_11_47_6_fu_43275_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_47_5_reg_64471.read()) - sc_bigint<15>(p_Val2_11_47_6_fu_43275_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_1_fu_9126_p2() {
    p_Val2_12_48_1_fu_9126_p2 = (!p_Val2_4_48_cast_fu_9062_p1.read().is_01() || !p_Val2_11_48_1_fu_9122_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_48_cast_fu_9062_p1.read()) - sc_bigint<15>(p_Val2_11_48_1_fu_9122_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_2_fu_21114_p2() {
    p_Val2_12_48_2_fu_21114_p2 = (!x_V_1_48_1_fu_21046_p3.read().is_01() || !p_Val2_11_48_2_fu_21110_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_48_1_fu_21046_p3.read()) - sc_bigint<15>(p_Val2_11_48_2_fu_21110_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_3_fu_21192_p2() {
    p_Val2_12_48_3_fu_21192_p2 = (!x_V_1_48_2_fu_21126_p3.read().is_01() || !p_Val2_11_48_3_fu_21188_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_48_2_fu_21126_p3.read()) - sc_bigint<15>(p_Val2_11_48_3_fu_21188_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_4_fu_32636_p2() {
    p_Val2_12_48_4_fu_32636_p2 = (!x_V_1_48_3_reg_62091.read().is_01() || !p_Val2_11_48_4_fu_32633_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_48_3_reg_62091.read()) - sc_bigint<15>(p_Val2_11_48_4_fu_32633_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_5_fu_32712_p2() {
    p_Val2_12_48_5_fu_32712_p2 = (!x_V_1_48_4_fu_32646_p3.read().is_01() || !p_Val2_11_48_5_fu_32708_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_48_4_fu_32646_p3.read()) - sc_bigint<15>(p_Val2_11_48_5_fu_32708_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_48_6_fu_43431_p2() {
    p_Val2_12_48_6_fu_43431_p2 = (!x_V_1_48_5_reg_64505.read().is_01() || !p_Val2_11_48_6_fu_43428_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_48_5_reg_64505.read()) - sc_bigint<15>(p_Val2_11_48_6_fu_43428_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_1_fu_9244_p2() {
    p_Val2_12_49_1_fu_9244_p2 = (!p_Val2_4_49_cast_fu_9180_p1.read().is_01() || !p_Val2_11_49_1_fu_9240_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_49_cast_fu_9180_p1.read()) - sc_bigint<15>(p_Val2_11_49_1_fu_9240_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_2_fu_21308_p2() {
    p_Val2_12_49_2_fu_21308_p2 = (!x_V_1_49_1_fu_21240_p3.read().is_01() || !p_Val2_11_49_2_fu_21304_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_49_1_fu_21240_p3.read()) - sc_bigint<15>(p_Val2_11_49_2_fu_21304_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_3_fu_21386_p2() {
    p_Val2_12_49_3_fu_21386_p2 = (!x_V_1_49_2_fu_21320_p3.read().is_01() || !p_Val2_11_49_3_fu_21382_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_49_2_fu_21320_p3.read()) - sc_bigint<15>(p_Val2_11_49_3_fu_21382_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_4_fu_32784_p2() {
    p_Val2_12_49_4_fu_32784_p2 = (!x_V_1_49_3_reg_62125.read().is_01() || !p_Val2_11_49_4_fu_32781_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_49_3_reg_62125.read()) - sc_bigint<15>(p_Val2_11_49_4_fu_32781_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_5_fu_32860_p2() {
    p_Val2_12_49_5_fu_32860_p2 = (!x_V_1_49_4_fu_32794_p3.read().is_01() || !p_Val2_11_49_5_fu_32856_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_49_4_fu_32794_p3.read()) - sc_bigint<15>(p_Val2_11_49_5_fu_32856_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_49_6_fu_43584_p2() {
    p_Val2_12_49_6_fu_43584_p2 = (!x_V_1_49_5_reg_64539.read().is_01() || !p_Val2_11_49_6_fu_43581_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_49_5_reg_64539.read()) - sc_bigint<15>(p_Val2_11_49_6_fu_43581_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_1_fu_3934_p2() {
    p_Val2_12_4_1_fu_3934_p2 = (!p_Val2_4_4_cast_fu_3870_p1.read().is_01() || !p_Val2_11_4_1_fu_3930_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_4_cast_fu_3870_p1.read()) - sc_bigint<15>(p_Val2_11_4_1_fu_3930_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_2_fu_12578_p2() {
    p_Val2_12_4_2_fu_12578_p2 = (!x_V_1_4_1_fu_12510_p3.read().is_01() || !p_Val2_11_4_2_fu_12574_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_4_1_fu_12510_p3.read()) - sc_bigint<15>(p_Val2_11_4_2_fu_12574_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_3_fu_12656_p2() {
    p_Val2_12_4_3_fu_12656_p2 = (!x_V_1_4_2_fu_12590_p3.read().is_01() || !p_Val2_11_4_3_fu_12652_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_4_2_fu_12590_p3.read()) - sc_bigint<15>(p_Val2_11_4_3_fu_12652_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_4_fu_26124_p2() {
    p_Val2_12_4_4_fu_26124_p2 = (!x_V_1_4_3_reg_60595.read().is_01() || !p_Val2_11_4_4_fu_26121_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_4_3_reg_60595.read()) - sc_bigint<15>(p_Val2_11_4_4_fu_26121_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_5_fu_26200_p2() {
    p_Val2_12_4_5_fu_26200_p2 = (!x_V_1_4_4_fu_26134_p3.read().is_01() || !p_Val2_11_4_5_fu_26196_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_4_4_fu_26134_p3.read()) - sc_bigint<15>(p_Val2_11_4_5_fu_26196_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_4_6_fu_36699_p2() {
    p_Val2_12_4_6_fu_36699_p2 = (!x_V_1_4_5_reg_63009.read().is_01() || !p_Val2_11_4_6_fu_36696_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_4_5_reg_63009.read()) - sc_bigint<15>(p_Val2_11_4_6_fu_36696_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_1_fu_9362_p2() {
    p_Val2_12_50_1_fu_9362_p2 = (!p_Val2_4_50_cast_fu_9298_p1.read().is_01() || !p_Val2_11_50_1_fu_9358_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_50_cast_fu_9298_p1.read()) - sc_bigint<15>(p_Val2_11_50_1_fu_9358_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_2_fu_21502_p2() {
    p_Val2_12_50_2_fu_21502_p2 = (!x_V_1_50_1_fu_21434_p3.read().is_01() || !p_Val2_11_50_2_fu_21498_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_50_1_fu_21434_p3.read()) - sc_bigint<15>(p_Val2_11_50_2_fu_21498_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_3_fu_21580_p2() {
    p_Val2_12_50_3_fu_21580_p2 = (!x_V_1_50_2_fu_21514_p3.read().is_01() || !p_Val2_11_50_3_fu_21576_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_50_2_fu_21514_p3.read()) - sc_bigint<15>(p_Val2_11_50_3_fu_21576_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_4_fu_32932_p2() {
    p_Val2_12_50_4_fu_32932_p2 = (!x_V_1_50_3_reg_62159.read().is_01() || !p_Val2_11_50_4_fu_32929_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_50_3_reg_62159.read()) - sc_bigint<15>(p_Val2_11_50_4_fu_32929_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_5_fu_33008_p2() {
    p_Val2_12_50_5_fu_33008_p2 = (!x_V_1_50_4_fu_32942_p3.read().is_01() || !p_Val2_11_50_5_fu_33004_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_50_4_fu_32942_p3.read()) - sc_bigint<15>(p_Val2_11_50_5_fu_33004_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_50_6_fu_43737_p2() {
    p_Val2_12_50_6_fu_43737_p2 = (!x_V_1_50_5_reg_64573.read().is_01() || !p_Val2_11_50_6_fu_43734_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_50_5_reg_64573.read()) - sc_bigint<15>(p_Val2_11_50_6_fu_43734_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_1_fu_9480_p2() {
    p_Val2_12_51_1_fu_9480_p2 = (!p_Val2_4_51_cast_fu_9416_p1.read().is_01() || !p_Val2_11_51_1_fu_9476_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_51_cast_fu_9416_p1.read()) - sc_bigint<15>(p_Val2_11_51_1_fu_9476_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_2_fu_21696_p2() {
    p_Val2_12_51_2_fu_21696_p2 = (!x_V_1_51_1_fu_21628_p3.read().is_01() || !p_Val2_11_51_2_fu_21692_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_51_1_fu_21628_p3.read()) - sc_bigint<15>(p_Val2_11_51_2_fu_21692_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_3_fu_21774_p2() {
    p_Val2_12_51_3_fu_21774_p2 = (!x_V_1_51_2_fu_21708_p3.read().is_01() || !p_Val2_11_51_3_fu_21770_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_51_2_fu_21708_p3.read()) - sc_bigint<15>(p_Val2_11_51_3_fu_21770_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_4_fu_33080_p2() {
    p_Val2_12_51_4_fu_33080_p2 = (!x_V_1_51_3_reg_62193.read().is_01() || !p_Val2_11_51_4_fu_33077_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_51_3_reg_62193.read()) - sc_bigint<15>(p_Val2_11_51_4_fu_33077_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_5_fu_33156_p2() {
    p_Val2_12_51_5_fu_33156_p2 = (!x_V_1_51_4_fu_33090_p3.read().is_01() || !p_Val2_11_51_5_fu_33152_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_51_4_fu_33090_p3.read()) - sc_bigint<15>(p_Val2_11_51_5_fu_33152_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_51_6_fu_43890_p2() {
    p_Val2_12_51_6_fu_43890_p2 = (!x_V_1_51_5_reg_64607.read().is_01() || !p_Val2_11_51_6_fu_43887_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_51_5_reg_64607.read()) - sc_bigint<15>(p_Val2_11_51_6_fu_43887_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_1_fu_9598_p2() {
    p_Val2_12_52_1_fu_9598_p2 = (!p_Val2_4_52_cast_fu_9534_p1.read().is_01() || !p_Val2_11_52_1_fu_9594_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_52_cast_fu_9534_p1.read()) - sc_bigint<15>(p_Val2_11_52_1_fu_9594_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_2_fu_21890_p2() {
    p_Val2_12_52_2_fu_21890_p2 = (!x_V_1_52_1_fu_21822_p3.read().is_01() || !p_Val2_11_52_2_fu_21886_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_52_1_fu_21822_p3.read()) - sc_bigint<15>(p_Val2_11_52_2_fu_21886_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_3_fu_21968_p2() {
    p_Val2_12_52_3_fu_21968_p2 = (!x_V_1_52_2_fu_21902_p3.read().is_01() || !p_Val2_11_52_3_fu_21964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_52_2_fu_21902_p3.read()) - sc_bigint<15>(p_Val2_11_52_3_fu_21964_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_4_fu_33228_p2() {
    p_Val2_12_52_4_fu_33228_p2 = (!x_V_1_52_3_reg_62227.read().is_01() || !p_Val2_11_52_4_fu_33225_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_52_3_reg_62227.read()) - sc_bigint<15>(p_Val2_11_52_4_fu_33225_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_5_fu_33304_p2() {
    p_Val2_12_52_5_fu_33304_p2 = (!x_V_1_52_4_fu_33238_p3.read().is_01() || !p_Val2_11_52_5_fu_33300_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_52_4_fu_33238_p3.read()) - sc_bigint<15>(p_Val2_11_52_5_fu_33300_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_52_6_fu_44043_p2() {
    p_Val2_12_52_6_fu_44043_p2 = (!x_V_1_52_5_reg_64641.read().is_01() || !p_Val2_11_52_6_fu_44040_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_52_5_reg_64641.read()) - sc_bigint<15>(p_Val2_11_52_6_fu_44040_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_1_fu_9716_p2() {
    p_Val2_12_53_1_fu_9716_p2 = (!p_Val2_4_53_cast_fu_9652_p1.read().is_01() || !p_Val2_11_53_1_fu_9712_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_53_cast_fu_9652_p1.read()) - sc_bigint<15>(p_Val2_11_53_1_fu_9712_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_2_fu_22084_p2() {
    p_Val2_12_53_2_fu_22084_p2 = (!x_V_1_53_1_fu_22016_p3.read().is_01() || !p_Val2_11_53_2_fu_22080_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_53_1_fu_22016_p3.read()) - sc_bigint<15>(p_Val2_11_53_2_fu_22080_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_3_fu_22162_p2() {
    p_Val2_12_53_3_fu_22162_p2 = (!x_V_1_53_2_fu_22096_p3.read().is_01() || !p_Val2_11_53_3_fu_22158_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_53_2_fu_22096_p3.read()) - sc_bigint<15>(p_Val2_11_53_3_fu_22158_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_4_fu_33376_p2() {
    p_Val2_12_53_4_fu_33376_p2 = (!x_V_1_53_3_reg_62261.read().is_01() || !p_Val2_11_53_4_fu_33373_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_53_3_reg_62261.read()) - sc_bigint<15>(p_Val2_11_53_4_fu_33373_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_5_fu_33452_p2() {
    p_Val2_12_53_5_fu_33452_p2 = (!x_V_1_53_4_fu_33386_p3.read().is_01() || !p_Val2_11_53_5_fu_33448_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_53_4_fu_33386_p3.read()) - sc_bigint<15>(p_Val2_11_53_5_fu_33448_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_53_6_fu_44196_p2() {
    p_Val2_12_53_6_fu_44196_p2 = (!x_V_1_53_5_reg_64675.read().is_01() || !p_Val2_11_53_6_fu_44193_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_53_5_reg_64675.read()) - sc_bigint<15>(p_Val2_11_53_6_fu_44193_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_1_fu_9834_p2() {
    p_Val2_12_54_1_fu_9834_p2 = (!p_Val2_4_54_cast_fu_9770_p1.read().is_01() || !p_Val2_11_54_1_fu_9830_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_54_cast_fu_9770_p1.read()) - sc_bigint<15>(p_Val2_11_54_1_fu_9830_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_2_fu_22278_p2() {
    p_Val2_12_54_2_fu_22278_p2 = (!x_V_1_54_1_fu_22210_p3.read().is_01() || !p_Val2_11_54_2_fu_22274_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_54_1_fu_22210_p3.read()) - sc_bigint<15>(p_Val2_11_54_2_fu_22274_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_3_fu_22356_p2() {
    p_Val2_12_54_3_fu_22356_p2 = (!x_V_1_54_2_fu_22290_p3.read().is_01() || !p_Val2_11_54_3_fu_22352_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_54_2_fu_22290_p3.read()) - sc_bigint<15>(p_Val2_11_54_3_fu_22352_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_4_fu_33524_p2() {
    p_Val2_12_54_4_fu_33524_p2 = (!x_V_1_54_3_reg_62295.read().is_01() || !p_Val2_11_54_4_fu_33521_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_54_3_reg_62295.read()) - sc_bigint<15>(p_Val2_11_54_4_fu_33521_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_5_fu_33600_p2() {
    p_Val2_12_54_5_fu_33600_p2 = (!x_V_1_54_4_fu_33534_p3.read().is_01() || !p_Val2_11_54_5_fu_33596_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_54_4_fu_33534_p3.read()) - sc_bigint<15>(p_Val2_11_54_5_fu_33596_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_54_6_fu_44349_p2() {
    p_Val2_12_54_6_fu_44349_p2 = (!x_V_1_54_5_reg_64709.read().is_01() || !p_Val2_11_54_6_fu_44346_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_54_5_reg_64709.read()) - sc_bigint<15>(p_Val2_11_54_6_fu_44346_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_1_fu_9952_p2() {
    p_Val2_12_55_1_fu_9952_p2 = (!p_Val2_4_55_cast_fu_9888_p1.read().is_01() || !p_Val2_11_55_1_fu_9948_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_55_cast_fu_9888_p1.read()) - sc_bigint<15>(p_Val2_11_55_1_fu_9948_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_2_fu_22472_p2() {
    p_Val2_12_55_2_fu_22472_p2 = (!x_V_1_55_1_fu_22404_p3.read().is_01() || !p_Val2_11_55_2_fu_22468_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_55_1_fu_22404_p3.read()) - sc_bigint<15>(p_Val2_11_55_2_fu_22468_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_3_fu_22550_p2() {
    p_Val2_12_55_3_fu_22550_p2 = (!x_V_1_55_2_fu_22484_p3.read().is_01() || !p_Val2_11_55_3_fu_22546_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_55_2_fu_22484_p3.read()) - sc_bigint<15>(p_Val2_11_55_3_fu_22546_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_4_fu_33672_p2() {
    p_Val2_12_55_4_fu_33672_p2 = (!x_V_1_55_3_reg_62329.read().is_01() || !p_Val2_11_55_4_fu_33669_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_55_3_reg_62329.read()) - sc_bigint<15>(p_Val2_11_55_4_fu_33669_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_5_fu_33748_p2() {
    p_Val2_12_55_5_fu_33748_p2 = (!x_V_1_55_4_fu_33682_p3.read().is_01() || !p_Val2_11_55_5_fu_33744_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_55_4_fu_33682_p3.read()) - sc_bigint<15>(p_Val2_11_55_5_fu_33744_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_55_6_fu_44502_p2() {
    p_Val2_12_55_6_fu_44502_p2 = (!x_V_1_55_5_reg_64743.read().is_01() || !p_Val2_11_55_6_fu_44499_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_55_5_reg_64743.read()) - sc_bigint<15>(p_Val2_11_55_6_fu_44499_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_1_fu_10070_p2() {
    p_Val2_12_56_1_fu_10070_p2 = (!p_Val2_4_56_cast_fu_10006_p1.read().is_01() || !p_Val2_11_56_1_fu_10066_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_56_cast_fu_10006_p1.read()) - sc_bigint<15>(p_Val2_11_56_1_fu_10066_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_2_fu_22666_p2() {
    p_Val2_12_56_2_fu_22666_p2 = (!x_V_1_56_1_fu_22598_p3.read().is_01() || !p_Val2_11_56_2_fu_22662_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_56_1_fu_22598_p3.read()) - sc_bigint<15>(p_Val2_11_56_2_fu_22662_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_3_fu_22744_p2() {
    p_Val2_12_56_3_fu_22744_p2 = (!x_V_1_56_2_fu_22678_p3.read().is_01() || !p_Val2_11_56_3_fu_22740_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_56_2_fu_22678_p3.read()) - sc_bigint<15>(p_Val2_11_56_3_fu_22740_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_4_fu_33820_p2() {
    p_Val2_12_56_4_fu_33820_p2 = (!x_V_1_56_3_reg_62363.read().is_01() || !p_Val2_11_56_4_fu_33817_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_56_3_reg_62363.read()) - sc_bigint<15>(p_Val2_11_56_4_fu_33817_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_5_fu_33896_p2() {
    p_Val2_12_56_5_fu_33896_p2 = (!x_V_1_56_4_fu_33830_p3.read().is_01() || !p_Val2_11_56_5_fu_33892_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_56_4_fu_33830_p3.read()) - sc_bigint<15>(p_Val2_11_56_5_fu_33892_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_56_6_fu_44655_p2() {
    p_Val2_12_56_6_fu_44655_p2 = (!x_V_1_56_5_reg_64777.read().is_01() || !p_Val2_11_56_6_fu_44652_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_56_5_reg_64777.read()) - sc_bigint<15>(p_Val2_11_56_6_fu_44652_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_1_fu_10188_p2() {
    p_Val2_12_57_1_fu_10188_p2 = (!p_Val2_4_57_cast_fu_10124_p1.read().is_01() || !p_Val2_11_57_1_fu_10184_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_57_cast_fu_10124_p1.read()) - sc_bigint<15>(p_Val2_11_57_1_fu_10184_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_2_fu_22860_p2() {
    p_Val2_12_57_2_fu_22860_p2 = (!x_V_1_57_1_fu_22792_p3.read().is_01() || !p_Val2_11_57_2_fu_22856_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_57_1_fu_22792_p3.read()) - sc_bigint<15>(p_Val2_11_57_2_fu_22856_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_3_fu_22938_p2() {
    p_Val2_12_57_3_fu_22938_p2 = (!x_V_1_57_2_fu_22872_p3.read().is_01() || !p_Val2_11_57_3_fu_22934_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_57_2_fu_22872_p3.read()) - sc_bigint<15>(p_Val2_11_57_3_fu_22934_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_4_fu_33968_p2() {
    p_Val2_12_57_4_fu_33968_p2 = (!x_V_1_57_3_reg_62397.read().is_01() || !p_Val2_11_57_4_fu_33965_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_57_3_reg_62397.read()) - sc_bigint<15>(p_Val2_11_57_4_fu_33965_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_5_fu_34044_p2() {
    p_Val2_12_57_5_fu_34044_p2 = (!x_V_1_57_4_fu_33978_p3.read().is_01() || !p_Val2_11_57_5_fu_34040_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_57_4_fu_33978_p3.read()) - sc_bigint<15>(p_Val2_11_57_5_fu_34040_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_57_6_fu_44808_p2() {
    p_Val2_12_57_6_fu_44808_p2 = (!x_V_1_57_5_reg_64811.read().is_01() || !p_Val2_11_57_6_fu_44805_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_57_5_reg_64811.read()) - sc_bigint<15>(p_Val2_11_57_6_fu_44805_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_1_fu_10306_p2() {
    p_Val2_12_58_1_fu_10306_p2 = (!p_Val2_4_58_cast_fu_10242_p1.read().is_01() || !p_Val2_11_58_1_fu_10302_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_58_cast_fu_10242_p1.read()) - sc_bigint<15>(p_Val2_11_58_1_fu_10302_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_2_fu_23054_p2() {
    p_Val2_12_58_2_fu_23054_p2 = (!x_V_1_58_1_fu_22986_p3.read().is_01() || !p_Val2_11_58_2_fu_23050_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_58_1_fu_22986_p3.read()) - sc_bigint<15>(p_Val2_11_58_2_fu_23050_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_3_fu_23132_p2() {
    p_Val2_12_58_3_fu_23132_p2 = (!x_V_1_58_2_fu_23066_p3.read().is_01() || !p_Val2_11_58_3_fu_23128_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_58_2_fu_23066_p3.read()) - sc_bigint<15>(p_Val2_11_58_3_fu_23128_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_4_fu_34116_p2() {
    p_Val2_12_58_4_fu_34116_p2 = (!x_V_1_58_3_reg_62431.read().is_01() || !p_Val2_11_58_4_fu_34113_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_58_3_reg_62431.read()) - sc_bigint<15>(p_Val2_11_58_4_fu_34113_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_5_fu_34192_p2() {
    p_Val2_12_58_5_fu_34192_p2 = (!x_V_1_58_4_fu_34126_p3.read().is_01() || !p_Val2_11_58_5_fu_34188_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_58_4_fu_34126_p3.read()) - sc_bigint<15>(p_Val2_11_58_5_fu_34188_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_58_6_fu_44961_p2() {
    p_Val2_12_58_6_fu_44961_p2 = (!x_V_1_58_5_reg_64845.read().is_01() || !p_Val2_11_58_6_fu_44958_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_58_5_reg_64845.read()) - sc_bigint<15>(p_Val2_11_58_6_fu_44958_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_1_fu_10424_p2() {
    p_Val2_12_59_1_fu_10424_p2 = (!p_Val2_4_59_cast_fu_10360_p1.read().is_01() || !p_Val2_11_59_1_fu_10420_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_59_cast_fu_10360_p1.read()) - sc_bigint<15>(p_Val2_11_59_1_fu_10420_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_2_fu_23248_p2() {
    p_Val2_12_59_2_fu_23248_p2 = (!x_V_1_59_1_fu_23180_p3.read().is_01() || !p_Val2_11_59_2_fu_23244_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_59_1_fu_23180_p3.read()) - sc_bigint<15>(p_Val2_11_59_2_fu_23244_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_3_fu_23326_p2() {
    p_Val2_12_59_3_fu_23326_p2 = (!x_V_1_59_2_fu_23260_p3.read().is_01() || !p_Val2_11_59_3_fu_23322_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_59_2_fu_23260_p3.read()) - sc_bigint<15>(p_Val2_11_59_3_fu_23322_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_4_fu_34264_p2() {
    p_Val2_12_59_4_fu_34264_p2 = (!x_V_1_59_3_reg_62465.read().is_01() || !p_Val2_11_59_4_fu_34261_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_59_3_reg_62465.read()) - sc_bigint<15>(p_Val2_11_59_4_fu_34261_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_5_fu_34340_p2() {
    p_Val2_12_59_5_fu_34340_p2 = (!x_V_1_59_4_fu_34274_p3.read().is_01() || !p_Val2_11_59_5_fu_34336_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_59_4_fu_34274_p3.read()) - sc_bigint<15>(p_Val2_11_59_5_fu_34336_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_59_6_fu_45114_p2() {
    p_Val2_12_59_6_fu_45114_p2 = (!x_V_1_59_5_reg_64879.read().is_01() || !p_Val2_11_59_6_fu_45111_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_59_5_reg_64879.read()) - sc_bigint<15>(p_Val2_11_59_6_fu_45111_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_1_fu_4052_p2() {
    p_Val2_12_5_1_fu_4052_p2 = (!p_Val2_4_5_cast_fu_3988_p1.read().is_01() || !p_Val2_11_5_1_fu_4048_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_5_cast_fu_3988_p1.read()) - sc_bigint<15>(p_Val2_11_5_1_fu_4048_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_2_fu_12772_p2() {
    p_Val2_12_5_2_fu_12772_p2 = (!x_V_1_5_1_fu_12704_p3.read().is_01() || !p_Val2_11_5_2_fu_12768_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_5_1_fu_12704_p3.read()) - sc_bigint<15>(p_Val2_11_5_2_fu_12768_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_3_fu_12850_p2() {
    p_Val2_12_5_3_fu_12850_p2 = (!x_V_1_5_2_fu_12784_p3.read().is_01() || !p_Val2_11_5_3_fu_12846_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_5_2_fu_12784_p3.read()) - sc_bigint<15>(p_Val2_11_5_3_fu_12846_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_4_fu_26272_p2() {
    p_Val2_12_5_4_fu_26272_p2 = (!x_V_1_5_3_reg_60629.read().is_01() || !p_Val2_11_5_4_fu_26269_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_5_3_reg_60629.read()) - sc_bigint<15>(p_Val2_11_5_4_fu_26269_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_5_fu_26348_p2() {
    p_Val2_12_5_5_fu_26348_p2 = (!x_V_1_5_4_fu_26282_p3.read().is_01() || !p_Val2_11_5_5_fu_26344_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_5_4_fu_26282_p3.read()) - sc_bigint<15>(p_Val2_11_5_5_fu_26344_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_5_6_fu_36852_p2() {
    p_Val2_12_5_6_fu_36852_p2 = (!x_V_1_5_5_reg_63043.read().is_01() || !p_Val2_11_5_6_fu_36849_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_5_5_reg_63043.read()) - sc_bigint<15>(p_Val2_11_5_6_fu_36849_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_1_fu_10542_p2() {
    p_Val2_12_60_1_fu_10542_p2 = (!p_Val2_4_60_cast_fu_10478_p1.read().is_01() || !p_Val2_11_60_1_fu_10538_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_60_cast_fu_10478_p1.read()) - sc_bigint<15>(p_Val2_11_60_1_fu_10538_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_2_fu_23442_p2() {
    p_Val2_12_60_2_fu_23442_p2 = (!x_V_1_60_1_fu_23374_p3.read().is_01() || !p_Val2_11_60_2_fu_23438_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_60_1_fu_23374_p3.read()) - sc_bigint<15>(p_Val2_11_60_2_fu_23438_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_3_fu_23520_p2() {
    p_Val2_12_60_3_fu_23520_p2 = (!x_V_1_60_2_fu_23454_p3.read().is_01() || !p_Val2_11_60_3_fu_23516_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_60_2_fu_23454_p3.read()) - sc_bigint<15>(p_Val2_11_60_3_fu_23516_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_4_fu_34412_p2() {
    p_Val2_12_60_4_fu_34412_p2 = (!x_V_1_60_3_reg_62499.read().is_01() || !p_Val2_11_60_4_fu_34409_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_60_3_reg_62499.read()) - sc_bigint<15>(p_Val2_11_60_4_fu_34409_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_5_fu_34488_p2() {
    p_Val2_12_60_5_fu_34488_p2 = (!x_V_1_60_4_fu_34422_p3.read().is_01() || !p_Val2_11_60_5_fu_34484_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_60_4_fu_34422_p3.read()) - sc_bigint<15>(p_Val2_11_60_5_fu_34484_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_60_6_fu_45267_p2() {
    p_Val2_12_60_6_fu_45267_p2 = (!x_V_1_60_5_reg_64913.read().is_01() || !p_Val2_11_60_6_fu_45264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_60_5_reg_64913.read()) - sc_bigint<15>(p_Val2_11_60_6_fu_45264_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_1_fu_10660_p2() {
    p_Val2_12_61_1_fu_10660_p2 = (!p_Val2_4_61_cast_fu_10596_p1.read().is_01() || !p_Val2_11_61_1_fu_10656_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_Val2_4_61_cast_fu_10596_p1.read()) - sc_bigint<15>(p_Val2_11_61_1_fu_10656_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_2_fu_23636_p2() {
    p_Val2_12_61_2_fu_23636_p2 = (!x_V_1_61_1_fu_23568_p3.read().is_01() || !p_Val2_11_61_2_fu_23632_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_61_1_fu_23568_p3.read()) - sc_bigint<15>(p_Val2_11_61_2_fu_23632_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_3_fu_23714_p2() {
    p_Val2_12_61_3_fu_23714_p2 = (!x_V_1_61_2_fu_23648_p3.read().is_01() || !p_Val2_11_61_3_fu_23710_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_61_2_fu_23648_p3.read()) - sc_bigint<15>(p_Val2_11_61_3_fu_23710_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_4_fu_34560_p2() {
    p_Val2_12_61_4_fu_34560_p2 = (!x_V_1_61_3_reg_62533.read().is_01() || !p_Val2_11_61_4_fu_34557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_61_3_reg_62533.read()) - sc_bigint<15>(p_Val2_11_61_4_fu_34557_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_5_fu_34636_p2() {
    p_Val2_12_61_5_fu_34636_p2 = (!x_V_1_61_4_fu_34570_p3.read().is_01() || !p_Val2_11_61_5_fu_34632_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_61_4_fu_34570_p3.read()) - sc_bigint<15>(p_Val2_11_61_5_fu_34632_p1.read()));
}

void Sobel_phase_strm::thread_p_Val2_12_61_6_fu_45420_p2() {
    p_Val2_12_61_6_fu_45420_p2 = (!x_V_1_61_5_reg_64947.read().is_01() || !p_Val2_11_61_6_fu_45417_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(x_V_1_61_5_reg_64947.read()) - sc_bigint<15>(p_Val2_11_61_6_fu_45417_p1.read()));
}

}

