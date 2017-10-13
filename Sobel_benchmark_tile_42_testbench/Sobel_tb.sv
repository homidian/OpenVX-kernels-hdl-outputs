`timescale 1ns / 1ps
///////////////////////////////////////////////////////////////////////////////////
// This file is generated automatically by Trade-off finder Tool.
// Please DO NOT edit it.
// Copyright (C) 2017 Hossein Omidian, Guy Lemieux, University of British Columbia.
///////////////////////////////////////////////////////////////////////////////////


module Sobel_tb;

	reg [7:0] src_V_pixel_0_r_TDATA;
	reg src_V_pixel_0_r_TVALID;
	wire src_V_pixel_0_r_TREADY;
	reg [7:0] src_V_pixel_1_r_TDATA;
	reg src_V_pixel_1_r_TVALID;
	wire src_V_pixel_1_r_TREADY;
	reg [7:0] src_V_pixel_2_r_TDATA;
	reg src_V_pixel_2_r_TVALID;
	wire src_V_pixel_2_r_TREADY;
	reg [7:0] src_V_pixel_3_r_TDATA;
	reg src_V_pixel_3_r_TVALID;
	wire src_V_pixel_3_r_TREADY;
	reg [7:0] src_V_pixel_4_r_TDATA;
	reg src_V_pixel_4_r_TVALID;
	wire src_V_pixel_4_r_TREADY;
	reg [7:0] src_V_pixel_5_r_TDATA;
	reg src_V_pixel_5_r_TVALID;
	wire src_V_pixel_5_r_TREADY;
	reg [7:0] src_V_pixel_6_r_TDATA;
	reg src_V_pixel_6_r_TVALID;
	wire src_V_pixel_6_r_TREADY;
	reg [7:0] src_V_pixel_7_r_TDATA;
	reg src_V_pixel_7_r_TVALID;
	wire src_V_pixel_7_r_TREADY;
	reg [7:0] src_V_pixel_8_r_TDATA;
	reg src_V_pixel_8_r_TVALID;
	wire src_V_pixel_8_r_TREADY;
	reg [7:0] src_V_pixel_9_r_TDATA;
	reg src_V_pixel_9_r_TVALID;
	wire src_V_pixel_9_r_TREADY;
	reg [7:0] src_V_pixel_10_r_TDATA;
	reg src_V_pixel_10_r_TVALID;
	wire src_V_pixel_10_r_TREADY;
	reg [7:0] src_V_pixel_11_r_TDATA;
	reg src_V_pixel_11_r_TVALID;
	wire src_V_pixel_11_r_TREADY;
	reg [7:0] src_V_pixel_12_r_TDATA;
	reg src_V_pixel_12_r_TVALID;
	wire src_V_pixel_12_r_TREADY;
	reg [7:0] src_V_pixel_13_r_TDATA;
	reg src_V_pixel_13_r_TVALID;
	wire src_V_pixel_13_r_TREADY;
	reg [7:0] src_V_pixel_14_r_TDATA;
	reg src_V_pixel_14_r_TVALID;
	wire src_V_pixel_14_r_TREADY;
	reg [7:0] src_V_pixel_15_r_TDATA;
	reg src_V_pixel_15_r_TVALID;
	wire src_V_pixel_15_r_TREADY;
	reg [7:0] src_V_pixel_16_r_TDATA;
	reg src_V_pixel_16_r_TVALID;
	wire src_V_pixel_16_r_TREADY;
	reg [7:0] src_V_pixel_17_r_TDATA;
	reg src_V_pixel_17_r_TVALID;
	wire src_V_pixel_17_r_TREADY;
	reg [7:0] src_V_pixel_18_r_TDATA;
	reg src_V_pixel_18_r_TVALID;
	wire src_V_pixel_18_r_TREADY;
	reg [7:0] src_V_pixel_19_r_TDATA;
	reg src_V_pixel_19_r_TVALID;
	wire src_V_pixel_19_r_TREADY;
	reg [7:0] src_V_pixel_20_r_TDATA;
	reg src_V_pixel_20_r_TVALID;
	wire src_V_pixel_20_r_TREADY;
	reg [7:0] src_V_pixel_21_r_TDATA;
	reg src_V_pixel_21_r_TVALID;
	wire src_V_pixel_21_r_TREADY;
	reg [7:0] src_V_pixel_22_r_TDATA;
	reg src_V_pixel_22_r_TVALID;
	wire src_V_pixel_22_r_TREADY;
	reg [7:0] src_V_pixel_23_r_TDATA;
	reg src_V_pixel_23_r_TVALID;
	wire src_V_pixel_23_r_TREADY;
	reg [7:0] src_V_pixel_24_r_TDATA;
	reg src_V_pixel_24_r_TVALID;
	wire src_V_pixel_24_r_TREADY;
	reg [7:0] src_V_pixel_25_r_TDATA;
	reg src_V_pixel_25_r_TVALID;
	wire src_V_pixel_25_r_TREADY;
	reg [7:0] src_V_pixel_26_r_TDATA;
	reg src_V_pixel_26_r_TVALID;
	wire src_V_pixel_26_r_TREADY;
	reg [7:0] src_V_pixel_27_r_TDATA;
	reg src_V_pixel_27_r_TVALID;
	wire src_V_pixel_27_r_TREADY;
	reg [7:0] src_V_pixel_28_r_TDATA;
	reg src_V_pixel_28_r_TVALID;
	wire src_V_pixel_28_r_TREADY;
	reg [7:0] src_V_pixel_29_r_TDATA;
	reg src_V_pixel_29_r_TVALID;
	wire src_V_pixel_29_r_TREADY;
	reg [7:0] src_V_pixel_30_r_TDATA;
	reg src_V_pixel_30_r_TVALID;
	wire src_V_pixel_30_r_TREADY;
	reg [7:0] src_V_pixel_31_r_TDATA;
	reg src_V_pixel_31_r_TVALID;
	wire src_V_pixel_31_r_TREADY;
	reg [7:0] src_V_pixel_32_r_TDATA;
	reg src_V_pixel_32_r_TVALID;
	wire src_V_pixel_32_r_TREADY;
	reg [7:0] src_V_pixel_33_r_TDATA;
	reg src_V_pixel_33_r_TVALID;
	wire src_V_pixel_33_r_TREADY;
	reg [7:0] src_V_pixel_34_r_TDATA;
	reg src_V_pixel_34_r_TVALID;
	wire src_V_pixel_34_r_TREADY;
	reg [7:0] src_V_pixel_35_r_TDATA;
	reg src_V_pixel_35_r_TVALID;
	wire src_V_pixel_35_r_TREADY;
	reg [7:0] src_V_pixel_36_r_TDATA;
	reg src_V_pixel_36_r_TVALID;
	wire src_V_pixel_36_r_TREADY;
	reg [7:0] src_V_pixel_37_r_TDATA;
	reg src_V_pixel_37_r_TVALID;
	wire src_V_pixel_37_r_TREADY;
	reg [7:0] src_V_pixel_38_r_TDATA;
	reg src_V_pixel_38_r_TVALID;
	wire src_V_pixel_38_r_TREADY;
	reg [7:0] src_V_pixel_39_r_TDATA;
	reg src_V_pixel_39_r_TVALID;
	wire src_V_pixel_39_r_TREADY;
	reg [7:0] src_V_pixel_40_r_TDATA;
	reg src_V_pixel_40_r_TVALID;
	wire src_V_pixel_40_r_TREADY;
	reg [7:0] src_V_pixel_41_r_TDATA;
	reg src_V_pixel_41_r_TVALID;
	wire src_V_pixel_41_r_TREADY;
	reg [7:0] src_V_pixel_42_r_TDATA;
	reg src_V_pixel_42_r_TVALID;
	wire src_V_pixel_42_r_TREADY;
	reg [7:0] src_V_pixel_43_r_TDATA;
	reg src_V_pixel_43_r_TVALID;
	wire src_V_pixel_43_r_TREADY;
	reg [7:0] src_V_pixel_44_r_TDATA;
	reg src_V_pixel_44_r_TVALID;
	wire src_V_pixel_44_r_TREADY;
	reg [7:0] src_V_pixel_45_r_TDATA;
	reg src_V_pixel_45_r_TVALID;
	wire src_V_pixel_45_r_TREADY;
	reg [7:0] src_V_pixel_46_r_TDATA;
	reg src_V_pixel_46_r_TVALID;
	wire src_V_pixel_46_r_TREADY;
	reg [7:0] src_V_pixel_47_r_TDATA;
	reg src_V_pixel_47_r_TVALID;
	wire src_V_pixel_47_r_TREADY;
	reg [7:0] src_V_pixel_48_r_TDATA;
	reg src_V_pixel_48_r_TVALID;
	wire src_V_pixel_48_r_TREADY;
	reg [7:0] src_V_pixel_49_r_TDATA;
	reg src_V_pixel_49_r_TVALID;
	wire src_V_pixel_49_r_TREADY;
	reg [7:0] src_V_pixel_50_r_TDATA;
	reg src_V_pixel_50_r_TVALID;
	wire src_V_pixel_50_r_TREADY;
	reg [7:0] src_V_pixel_51_r_TDATA;
	reg src_V_pixel_51_r_TVALID;
	wire src_V_pixel_51_r_TREADY;
	reg [7:0] src_V_pixel_52_r_TDATA;
	reg src_V_pixel_52_r_TVALID;
	wire src_V_pixel_52_r_TREADY;
	reg [7:0] src_V_pixel_53_r_TDATA;
	reg src_V_pixel_53_r_TVALID;
	wire src_V_pixel_53_r_TREADY;
	reg [7:0] src_V_pixel_54_r_TDATA;
	reg src_V_pixel_54_r_TVALID;
	wire src_V_pixel_54_r_TREADY;
	reg [7:0] src_V_pixel_55_r_TDATA;
	reg src_V_pixel_55_r_TVALID;
	wire src_V_pixel_55_r_TREADY;
	reg [7:0] src_V_pixel_56_r_TDATA;
	reg src_V_pixel_56_r_TVALID;
	wire src_V_pixel_56_r_TREADY;
	reg [7:0] src_V_pixel_57_r_TDATA;
	reg src_V_pixel_57_r_TVALID;
	wire src_V_pixel_57_r_TREADY;
	reg [7:0] src_V_pixel_58_r_TDATA;
	reg src_V_pixel_58_r_TVALID;
	wire src_V_pixel_58_r_TREADY;
	reg [7:0] src_V_pixel_59_r_TDATA;
	reg src_V_pixel_59_r_TVALID;
	wire src_V_pixel_59_r_TREADY;
	reg [7:0] src_V_pixel_60_r_TDATA;
	reg src_V_pixel_60_r_TVALID;
	wire src_V_pixel_60_r_TREADY;
	reg [7:0] src_V_pixel_61_r_TDATA;
	reg src_V_pixel_61_r_TVALID;
	wire src_V_pixel_61_r_TREADY;
	reg [7:0] src_V_pixel_62_r_TDATA;
	reg src_V_pixel_62_r_TVALID;
	wire src_V_pixel_62_r_TREADY;
	reg [7:0] src_V_pixel_63_r_TDATA;
	reg src_V_pixel_63_r_TVALID;
	wire src_V_pixel_63_r_TREADY;
	reg [7:0] src_V_pixel_64_r_TDATA;
	reg src_V_pixel_64_r_TVALID;
	wire src_V_pixel_64_r_TREADY;
	reg [7:0] src_V_pixel_65_r_TDATA;
	reg src_V_pixel_65_r_TVALID;
	wire src_V_pixel_65_r_TREADY;
	reg [7:0] src_V_pixel_66_r_TDATA;
	reg src_V_pixel_66_r_TVALID;
	wire src_V_pixel_66_r_TREADY;
	reg [7:0] src_V_pixel_67_r_TDATA;
	reg src_V_pixel_67_r_TVALID;
	wire src_V_pixel_67_r_TREADY;
	reg [7:0] src_V_pixel_68_r_TDATA;
	reg src_V_pixel_68_r_TVALID;
	wire src_V_pixel_68_r_TREADY;
	reg [7:0] src_V_pixel_69_r_TDATA;
	reg src_V_pixel_69_r_TVALID;
	wire src_V_pixel_69_r_TREADY;
	reg [7:0] src_V_pixel_70_r_TDATA;
	reg src_V_pixel_70_r_TVALID;
	wire src_V_pixel_70_r_TREADY;
	reg [7:0] src_V_pixel_0_g_TDATA;
	reg src_V_pixel_0_g_TVALID;
	wire src_V_pixel_0_g_TREADY;
	reg [7:0] src_V_pixel_1_g_TDATA;
	reg src_V_pixel_1_g_TVALID;
	wire src_V_pixel_1_g_TREADY;
	reg [7:0] src_V_pixel_2_g_TDATA;
	reg src_V_pixel_2_g_TVALID;
	wire src_V_pixel_2_g_TREADY;
	reg [7:0] src_V_pixel_3_g_TDATA;
	reg src_V_pixel_3_g_TVALID;
	wire src_V_pixel_3_g_TREADY;
	reg [7:0] src_V_pixel_4_g_TDATA;
	reg src_V_pixel_4_g_TVALID;
	wire src_V_pixel_4_g_TREADY;
	reg [7:0] src_V_pixel_5_g_TDATA;
	reg src_V_pixel_5_g_TVALID;
	wire src_V_pixel_5_g_TREADY;
	reg [7:0] src_V_pixel_6_g_TDATA;
	reg src_V_pixel_6_g_TVALID;
	wire src_V_pixel_6_g_TREADY;
	reg [7:0] src_V_pixel_7_g_TDATA;
	reg src_V_pixel_7_g_TVALID;
	wire src_V_pixel_7_g_TREADY;
	reg [7:0] src_V_pixel_8_g_TDATA;
	reg src_V_pixel_8_g_TVALID;
	wire src_V_pixel_8_g_TREADY;
	reg [7:0] src_V_pixel_9_g_TDATA;
	reg src_V_pixel_9_g_TVALID;
	wire src_V_pixel_9_g_TREADY;
	reg [7:0] src_V_pixel_10_g_TDATA;
	reg src_V_pixel_10_g_TVALID;
	wire src_V_pixel_10_g_TREADY;
	reg [7:0] src_V_pixel_11_g_TDATA;
	reg src_V_pixel_11_g_TVALID;
	wire src_V_pixel_11_g_TREADY;
	reg [7:0] src_V_pixel_12_g_TDATA;
	reg src_V_pixel_12_g_TVALID;
	wire src_V_pixel_12_g_TREADY;
	reg [7:0] src_V_pixel_13_g_TDATA;
	reg src_V_pixel_13_g_TVALID;
	wire src_V_pixel_13_g_TREADY;
	reg [7:0] src_V_pixel_14_g_TDATA;
	reg src_V_pixel_14_g_TVALID;
	wire src_V_pixel_14_g_TREADY;
	reg [7:0] src_V_pixel_15_g_TDATA;
	reg src_V_pixel_15_g_TVALID;
	wire src_V_pixel_15_g_TREADY;
	reg [7:0] src_V_pixel_16_g_TDATA;
	reg src_V_pixel_16_g_TVALID;
	wire src_V_pixel_16_g_TREADY;
	reg [7:0] src_V_pixel_17_g_TDATA;
	reg src_V_pixel_17_g_TVALID;
	wire src_V_pixel_17_g_TREADY;
	reg [7:0] src_V_pixel_18_g_TDATA;
	reg src_V_pixel_18_g_TVALID;
	wire src_V_pixel_18_g_TREADY;
	reg [7:0] src_V_pixel_19_g_TDATA;
	reg src_V_pixel_19_g_TVALID;
	wire src_V_pixel_19_g_TREADY;
	reg [7:0] src_V_pixel_20_g_TDATA;
	reg src_V_pixel_20_g_TVALID;
	wire src_V_pixel_20_g_TREADY;
	reg [7:0] src_V_pixel_21_g_TDATA;
	reg src_V_pixel_21_g_TVALID;
	wire src_V_pixel_21_g_TREADY;
	reg [7:0] src_V_pixel_22_g_TDATA;
	reg src_V_pixel_22_g_TVALID;
	wire src_V_pixel_22_g_TREADY;
	reg [7:0] src_V_pixel_23_g_TDATA;
	reg src_V_pixel_23_g_TVALID;
	wire src_V_pixel_23_g_TREADY;
	reg [7:0] src_V_pixel_24_g_TDATA;
	reg src_V_pixel_24_g_TVALID;
	wire src_V_pixel_24_g_TREADY;
	reg [7:0] src_V_pixel_25_g_TDATA;
	reg src_V_pixel_25_g_TVALID;
	wire src_V_pixel_25_g_TREADY;
	reg [7:0] src_V_pixel_26_g_TDATA;
	reg src_V_pixel_26_g_TVALID;
	wire src_V_pixel_26_g_TREADY;
	reg [7:0] src_V_pixel_27_g_TDATA;
	reg src_V_pixel_27_g_TVALID;
	wire src_V_pixel_27_g_TREADY;
	reg [7:0] src_V_pixel_28_g_TDATA;
	reg src_V_pixel_28_g_TVALID;
	wire src_V_pixel_28_g_TREADY;
	reg [7:0] src_V_pixel_29_g_TDATA;
	reg src_V_pixel_29_g_TVALID;
	wire src_V_pixel_29_g_TREADY;
	reg [7:0] src_V_pixel_30_g_TDATA;
	reg src_V_pixel_30_g_TVALID;
	wire src_V_pixel_30_g_TREADY;
	reg [7:0] src_V_pixel_31_g_TDATA;
	reg src_V_pixel_31_g_TVALID;
	wire src_V_pixel_31_g_TREADY;
	reg [7:0] src_V_pixel_32_g_TDATA;
	reg src_V_pixel_32_g_TVALID;
	wire src_V_pixel_32_g_TREADY;
	reg [7:0] src_V_pixel_33_g_TDATA;
	reg src_V_pixel_33_g_TVALID;
	wire src_V_pixel_33_g_TREADY;
	reg [7:0] src_V_pixel_34_g_TDATA;
	reg src_V_pixel_34_g_TVALID;
	wire src_V_pixel_34_g_TREADY;
	reg [7:0] src_V_pixel_35_g_TDATA;
	reg src_V_pixel_35_g_TVALID;
	wire src_V_pixel_35_g_TREADY;
	reg [7:0] src_V_pixel_36_g_TDATA;
	reg src_V_pixel_36_g_TVALID;
	wire src_V_pixel_36_g_TREADY;
	reg [7:0] src_V_pixel_37_g_TDATA;
	reg src_V_pixel_37_g_TVALID;
	wire src_V_pixel_37_g_TREADY;
	reg [7:0] src_V_pixel_38_g_TDATA;
	reg src_V_pixel_38_g_TVALID;
	wire src_V_pixel_38_g_TREADY;
	reg [7:0] src_V_pixel_39_g_TDATA;
	reg src_V_pixel_39_g_TVALID;
	wire src_V_pixel_39_g_TREADY;
	reg [7:0] src_V_pixel_40_g_TDATA;
	reg src_V_pixel_40_g_TVALID;
	wire src_V_pixel_40_g_TREADY;
	reg [7:0] src_V_pixel_41_g_TDATA;
	reg src_V_pixel_41_g_TVALID;
	wire src_V_pixel_41_g_TREADY;
	reg [7:0] src_V_pixel_42_g_TDATA;
	reg src_V_pixel_42_g_TVALID;
	wire src_V_pixel_42_g_TREADY;
	reg [7:0] src_V_pixel_43_g_TDATA;
	reg src_V_pixel_43_g_TVALID;
	wire src_V_pixel_43_g_TREADY;
	reg [7:0] src_V_pixel_44_g_TDATA;
	reg src_V_pixel_44_g_TVALID;
	wire src_V_pixel_44_g_TREADY;
	reg [7:0] src_V_pixel_45_g_TDATA;
	reg src_V_pixel_45_g_TVALID;
	wire src_V_pixel_45_g_TREADY;
	reg [7:0] src_V_pixel_46_g_TDATA;
	reg src_V_pixel_46_g_TVALID;
	wire src_V_pixel_46_g_TREADY;
	reg [7:0] src_V_pixel_47_g_TDATA;
	reg src_V_pixel_47_g_TVALID;
	wire src_V_pixel_47_g_TREADY;
	reg [7:0] src_V_pixel_48_g_TDATA;
	reg src_V_pixel_48_g_TVALID;
	wire src_V_pixel_48_g_TREADY;
	reg [7:0] src_V_pixel_49_g_TDATA;
	reg src_V_pixel_49_g_TVALID;
	wire src_V_pixel_49_g_TREADY;
	reg [7:0] src_V_pixel_50_g_TDATA;
	reg src_V_pixel_50_g_TVALID;
	wire src_V_pixel_50_g_TREADY;
	reg [7:0] src_V_pixel_51_g_TDATA;
	reg src_V_pixel_51_g_TVALID;
	wire src_V_pixel_51_g_TREADY;
	reg [7:0] src_V_pixel_52_g_TDATA;
	reg src_V_pixel_52_g_TVALID;
	wire src_V_pixel_52_g_TREADY;
	reg [7:0] src_V_pixel_53_g_TDATA;
	reg src_V_pixel_53_g_TVALID;
	wire src_V_pixel_53_g_TREADY;
	reg [7:0] src_V_pixel_54_g_TDATA;
	reg src_V_pixel_54_g_TVALID;
	wire src_V_pixel_54_g_TREADY;
	reg [7:0] src_V_pixel_55_g_TDATA;
	reg src_V_pixel_55_g_TVALID;
	wire src_V_pixel_55_g_TREADY;
	reg [7:0] src_V_pixel_56_g_TDATA;
	reg src_V_pixel_56_g_TVALID;
	wire src_V_pixel_56_g_TREADY;
	reg [7:0] src_V_pixel_57_g_TDATA;
	reg src_V_pixel_57_g_TVALID;
	wire src_V_pixel_57_g_TREADY;
	reg [7:0] src_V_pixel_58_g_TDATA;
	reg src_V_pixel_58_g_TVALID;
	wire src_V_pixel_58_g_TREADY;
	reg [7:0] src_V_pixel_59_g_TDATA;
	reg src_V_pixel_59_g_TVALID;
	wire src_V_pixel_59_g_TREADY;
	reg [7:0] src_V_pixel_60_g_TDATA;
	reg src_V_pixel_60_g_TVALID;
	wire src_V_pixel_60_g_TREADY;
	reg [7:0] src_V_pixel_61_g_TDATA;
	reg src_V_pixel_61_g_TVALID;
	wire src_V_pixel_61_g_TREADY;
	reg [7:0] src_V_pixel_62_g_TDATA;
	reg src_V_pixel_62_g_TVALID;
	wire src_V_pixel_62_g_TREADY;
	reg [7:0] src_V_pixel_63_g_TDATA;
	reg src_V_pixel_63_g_TVALID;
	wire src_V_pixel_63_g_TREADY;
	reg [7:0] src_V_pixel_64_g_TDATA;
	reg src_V_pixel_64_g_TVALID;
	wire src_V_pixel_64_g_TREADY;
	reg [7:0] src_V_pixel_65_g_TDATA;
	reg src_V_pixel_65_g_TVALID;
	wire src_V_pixel_65_g_TREADY;
	reg [7:0] src_V_pixel_66_g_TDATA;
	reg src_V_pixel_66_g_TVALID;
	wire src_V_pixel_66_g_TREADY;
	reg [7:0] src_V_pixel_67_g_TDATA;
	reg src_V_pixel_67_g_TVALID;
	wire src_V_pixel_67_g_TREADY;
	reg [7:0] src_V_pixel_68_g_TDATA;
	reg src_V_pixel_68_g_TVALID;
	wire src_V_pixel_68_g_TREADY;
	reg [7:0] src_V_pixel_69_g_TDATA;
	reg src_V_pixel_69_g_TVALID;
	wire src_V_pixel_69_g_TREADY;
	reg [7:0] src_V_pixel_70_g_TDATA;
	reg src_V_pixel_70_g_TVALID;
	wire src_V_pixel_70_g_TREADY;
	reg [7:0] src_V_pixel_0_b_TDATA;
	reg src_V_pixel_0_b_TVALID;
	wire src_V_pixel_0_b_TREADY;
	reg [7:0] src_V_pixel_1_b_TDATA;
	reg src_V_pixel_1_b_TVALID;
	wire src_V_pixel_1_b_TREADY;
	reg [7:0] src_V_pixel_2_b_TDATA;
	reg src_V_pixel_2_b_TVALID;
	wire src_V_pixel_2_b_TREADY;
	reg [7:0] src_V_pixel_3_b_TDATA;
	reg src_V_pixel_3_b_TVALID;
	wire src_V_pixel_3_b_TREADY;
	reg [7:0] src_V_pixel_4_b_TDATA;
	reg src_V_pixel_4_b_TVALID;
	wire src_V_pixel_4_b_TREADY;
	reg [7:0] src_V_pixel_5_b_TDATA;
	reg src_V_pixel_5_b_TVALID;
	wire src_V_pixel_5_b_TREADY;
	reg [7:0] src_V_pixel_6_b_TDATA;
	reg src_V_pixel_6_b_TVALID;
	wire src_V_pixel_6_b_TREADY;
	reg [7:0] src_V_pixel_7_b_TDATA;
	reg src_V_pixel_7_b_TVALID;
	wire src_V_pixel_7_b_TREADY;
	reg [7:0] src_V_pixel_8_b_TDATA;
	reg src_V_pixel_8_b_TVALID;
	wire src_V_pixel_8_b_TREADY;
	reg [7:0] src_V_pixel_9_b_TDATA;
	reg src_V_pixel_9_b_TVALID;
	wire src_V_pixel_9_b_TREADY;
	reg [7:0] src_V_pixel_10_b_TDATA;
	reg src_V_pixel_10_b_TVALID;
	wire src_V_pixel_10_b_TREADY;
	reg [7:0] src_V_pixel_11_b_TDATA;
	reg src_V_pixel_11_b_TVALID;
	wire src_V_pixel_11_b_TREADY;
	reg [7:0] src_V_pixel_12_b_TDATA;
	reg src_V_pixel_12_b_TVALID;
	wire src_V_pixel_12_b_TREADY;
	reg [7:0] src_V_pixel_13_b_TDATA;
	reg src_V_pixel_13_b_TVALID;
	wire src_V_pixel_13_b_TREADY;
	reg [7:0] src_V_pixel_14_b_TDATA;
	reg src_V_pixel_14_b_TVALID;
	wire src_V_pixel_14_b_TREADY;
	reg [7:0] src_V_pixel_15_b_TDATA;
	reg src_V_pixel_15_b_TVALID;
	wire src_V_pixel_15_b_TREADY;
	reg [7:0] src_V_pixel_16_b_TDATA;
	reg src_V_pixel_16_b_TVALID;
	wire src_V_pixel_16_b_TREADY;
	reg [7:0] src_V_pixel_17_b_TDATA;
	reg src_V_pixel_17_b_TVALID;
	wire src_V_pixel_17_b_TREADY;
	reg [7:0] src_V_pixel_18_b_TDATA;
	reg src_V_pixel_18_b_TVALID;
	wire src_V_pixel_18_b_TREADY;
	reg [7:0] src_V_pixel_19_b_TDATA;
	reg src_V_pixel_19_b_TVALID;
	wire src_V_pixel_19_b_TREADY;
	reg [7:0] src_V_pixel_20_b_TDATA;
	reg src_V_pixel_20_b_TVALID;
	wire src_V_pixel_20_b_TREADY;
	reg [7:0] src_V_pixel_21_b_TDATA;
	reg src_V_pixel_21_b_TVALID;
	wire src_V_pixel_21_b_TREADY;
	reg [7:0] src_V_pixel_22_b_TDATA;
	reg src_V_pixel_22_b_TVALID;
	wire src_V_pixel_22_b_TREADY;
	reg [7:0] src_V_pixel_23_b_TDATA;
	reg src_V_pixel_23_b_TVALID;
	wire src_V_pixel_23_b_TREADY;
	reg [7:0] src_V_pixel_24_b_TDATA;
	reg src_V_pixel_24_b_TVALID;
	wire src_V_pixel_24_b_TREADY;
	reg [7:0] src_V_pixel_25_b_TDATA;
	reg src_V_pixel_25_b_TVALID;
	wire src_V_pixel_25_b_TREADY;
	reg [7:0] src_V_pixel_26_b_TDATA;
	reg src_V_pixel_26_b_TVALID;
	wire src_V_pixel_26_b_TREADY;
	reg [7:0] src_V_pixel_27_b_TDATA;
	reg src_V_pixel_27_b_TVALID;
	wire src_V_pixel_27_b_TREADY;
	reg [7:0] src_V_pixel_28_b_TDATA;
	reg src_V_pixel_28_b_TVALID;
	wire src_V_pixel_28_b_TREADY;
	reg [7:0] src_V_pixel_29_b_TDATA;
	reg src_V_pixel_29_b_TVALID;
	wire src_V_pixel_29_b_TREADY;
	reg [7:0] src_V_pixel_30_b_TDATA;
	reg src_V_pixel_30_b_TVALID;
	wire src_V_pixel_30_b_TREADY;
	reg [7:0] src_V_pixel_31_b_TDATA;
	reg src_V_pixel_31_b_TVALID;
	wire src_V_pixel_31_b_TREADY;
	reg [7:0] src_V_pixel_32_b_TDATA;
	reg src_V_pixel_32_b_TVALID;
	wire src_V_pixel_32_b_TREADY;
	reg [7:0] src_V_pixel_33_b_TDATA;
	reg src_V_pixel_33_b_TVALID;
	wire src_V_pixel_33_b_TREADY;
	reg [7:0] src_V_pixel_34_b_TDATA;
	reg src_V_pixel_34_b_TVALID;
	wire src_V_pixel_34_b_TREADY;
	reg [7:0] src_V_pixel_35_b_TDATA;
	reg src_V_pixel_35_b_TVALID;
	wire src_V_pixel_35_b_TREADY;
	reg [7:0] src_V_pixel_36_b_TDATA;
	reg src_V_pixel_36_b_TVALID;
	wire src_V_pixel_36_b_TREADY;
	reg [7:0] src_V_pixel_37_b_TDATA;
	reg src_V_pixel_37_b_TVALID;
	wire src_V_pixel_37_b_TREADY;
	reg [7:0] src_V_pixel_38_b_TDATA;
	reg src_V_pixel_38_b_TVALID;
	wire src_V_pixel_38_b_TREADY;
	reg [7:0] src_V_pixel_39_b_TDATA;
	reg src_V_pixel_39_b_TVALID;
	wire src_V_pixel_39_b_TREADY;
	reg [7:0] src_V_pixel_40_b_TDATA;
	reg src_V_pixel_40_b_TVALID;
	wire src_V_pixel_40_b_TREADY;
	reg [7:0] src_V_pixel_41_b_TDATA;
	reg src_V_pixel_41_b_TVALID;
	wire src_V_pixel_41_b_TREADY;
	reg [7:0] src_V_pixel_42_b_TDATA;
	reg src_V_pixel_42_b_TVALID;
	wire src_V_pixel_42_b_TREADY;
	reg [7:0] src_V_pixel_43_b_TDATA;
	reg src_V_pixel_43_b_TVALID;
	wire src_V_pixel_43_b_TREADY;
	reg [7:0] src_V_pixel_44_b_TDATA;
	reg src_V_pixel_44_b_TVALID;
	wire src_V_pixel_44_b_TREADY;
	reg [7:0] src_V_pixel_45_b_TDATA;
	reg src_V_pixel_45_b_TVALID;
	wire src_V_pixel_45_b_TREADY;
	reg [7:0] src_V_pixel_46_b_TDATA;
	reg src_V_pixel_46_b_TVALID;
	wire src_V_pixel_46_b_TREADY;
	reg [7:0] src_V_pixel_47_b_TDATA;
	reg src_V_pixel_47_b_TVALID;
	wire src_V_pixel_47_b_TREADY;
	reg [7:0] src_V_pixel_48_b_TDATA;
	reg src_V_pixel_48_b_TVALID;
	wire src_V_pixel_48_b_TREADY;
	reg [7:0] src_V_pixel_49_b_TDATA;
	reg src_V_pixel_49_b_TVALID;
	wire src_V_pixel_49_b_TREADY;
	reg [7:0] src_V_pixel_50_b_TDATA;
	reg src_V_pixel_50_b_TVALID;
	wire src_V_pixel_50_b_TREADY;
	reg [7:0] src_V_pixel_51_b_TDATA;
	reg src_V_pixel_51_b_TVALID;
	wire src_V_pixel_51_b_TREADY;
	reg [7:0] src_V_pixel_52_b_TDATA;
	reg src_V_pixel_52_b_TVALID;
	wire src_V_pixel_52_b_TREADY;
	reg [7:0] src_V_pixel_53_b_TDATA;
	reg src_V_pixel_53_b_TVALID;
	wire src_V_pixel_53_b_TREADY;
	reg [7:0] src_V_pixel_54_b_TDATA;
	reg src_V_pixel_54_b_TVALID;
	wire src_V_pixel_54_b_TREADY;
	reg [7:0] src_V_pixel_55_b_TDATA;
	reg src_V_pixel_55_b_TVALID;
	wire src_V_pixel_55_b_TREADY;
	reg [7:0] src_V_pixel_56_b_TDATA;
	reg src_V_pixel_56_b_TVALID;
	wire src_V_pixel_56_b_TREADY;
	reg [7:0] src_V_pixel_57_b_TDATA;
	reg src_V_pixel_57_b_TVALID;
	wire src_V_pixel_57_b_TREADY;
	reg [7:0] src_V_pixel_58_b_TDATA;
	reg src_V_pixel_58_b_TVALID;
	wire src_V_pixel_58_b_TREADY;
	reg [7:0] src_V_pixel_59_b_TDATA;
	reg src_V_pixel_59_b_TVALID;
	wire src_V_pixel_59_b_TREADY;
	reg [7:0] src_V_pixel_60_b_TDATA;
	reg src_V_pixel_60_b_TVALID;
	wire src_V_pixel_60_b_TREADY;
	reg [7:0] src_V_pixel_61_b_TDATA;
	reg src_V_pixel_61_b_TVALID;
	wire src_V_pixel_61_b_TREADY;
	reg [7:0] src_V_pixel_62_b_TDATA;
	reg src_V_pixel_62_b_TVALID;
	wire src_V_pixel_62_b_TREADY;
	reg [7:0] src_V_pixel_63_b_TDATA;
	reg src_V_pixel_63_b_TVALID;
	wire src_V_pixel_63_b_TREADY;
	reg [7:0] src_V_pixel_64_b_TDATA;
	reg src_V_pixel_64_b_TVALID;
	wire src_V_pixel_64_b_TREADY;
	reg [7:0] src_V_pixel_65_b_TDATA;
	reg src_V_pixel_65_b_TVALID;
	wire src_V_pixel_65_b_TREADY;
	reg [7:0] src_V_pixel_66_b_TDATA;
	reg src_V_pixel_66_b_TVALID;
	wire src_V_pixel_66_b_TREADY;
	reg [7:0] src_V_pixel_67_b_TDATA;
	reg src_V_pixel_67_b_TVALID;
	wire src_V_pixel_67_b_TREADY;
	reg [7:0] src_V_pixel_68_b_TDATA;
	reg src_V_pixel_68_b_TVALID;
	wire src_V_pixel_68_b_TREADY;
	reg [7:0] src_V_pixel_69_b_TDATA;
	reg src_V_pixel_69_b_TVALID;
	wire src_V_pixel_69_b_TREADY;
	reg [7:0] src_V_pixel_70_b_TDATA;
	reg src_V_pixel_70_b_TVALID;
	wire src_V_pixel_70_b_TREADY;
	wire [7:0] mag_V_pixel_0_TDATA;
	wire mag_V_pixel_0_TVALID;
	reg mag_V_pixel_0_TREADY;
	wire [7:0] mag_V_pixel_1_TDATA;
	wire mag_V_pixel_1_TVALID;
	reg mag_V_pixel_1_TREADY;
	wire [7:0] mag_V_pixel_2_TDATA;
	wire mag_V_pixel_2_TVALID;
	reg mag_V_pixel_2_TREADY;
	wire [7:0] mag_V_pixel_3_TDATA;
	wire mag_V_pixel_3_TVALID;
	reg mag_V_pixel_3_TREADY;
	wire [7:0] mag_V_pixel_4_TDATA;
	wire mag_V_pixel_4_TVALID;
	reg mag_V_pixel_4_TREADY;
	wire [7:0] mag_V_pixel_5_TDATA;
	wire mag_V_pixel_5_TVALID;
	reg mag_V_pixel_5_TREADY;
	wire [7:0] mag_V_pixel_6_TDATA;
	wire mag_V_pixel_6_TVALID;
	reg mag_V_pixel_6_TREADY;
	wire [7:0] mag_V_pixel_7_TDATA;
	wire mag_V_pixel_7_TVALID;
	reg mag_V_pixel_7_TREADY;
	wire [7:0] mag_V_pixel_8_TDATA;
	wire mag_V_pixel_8_TVALID;
	reg mag_V_pixel_8_TREADY;
	wire [7:0] mag_V_pixel_9_TDATA;
	wire mag_V_pixel_9_TVALID;
	reg mag_V_pixel_9_TREADY;
	wire [7:0] mag_V_pixel_10_TDATA;
	wire mag_V_pixel_10_TVALID;
	reg mag_V_pixel_10_TREADY;
	wire [7:0] mag_V_pixel_11_TDATA;
	wire mag_V_pixel_11_TVALID;
	reg mag_V_pixel_11_TREADY;
	wire [7:0] mag_V_pixel_12_TDATA;
	wire mag_V_pixel_12_TVALID;
	reg mag_V_pixel_12_TREADY;
	wire [7:0] mag_V_pixel_13_TDATA;
	wire mag_V_pixel_13_TVALID;
	reg mag_V_pixel_13_TREADY;
	wire [7:0] mag_V_pixel_14_TDATA;
	wire mag_V_pixel_14_TVALID;
	reg mag_V_pixel_14_TREADY;
	wire [7:0] mag_V_pixel_15_TDATA;
	wire mag_V_pixel_15_TVALID;
	reg mag_V_pixel_15_TREADY;
	wire [7:0] mag_V_pixel_16_TDATA;
	wire mag_V_pixel_16_TVALID;
	reg mag_V_pixel_16_TREADY;
	wire [7:0] mag_V_pixel_17_TDATA;
	wire mag_V_pixel_17_TVALID;
	reg mag_V_pixel_17_TREADY;
	wire [7:0] mag_V_pixel_18_TDATA;
	wire mag_V_pixel_18_TVALID;
	reg mag_V_pixel_18_TREADY;
	wire [7:0] mag_V_pixel_19_TDATA;
	wire mag_V_pixel_19_TVALID;
	reg mag_V_pixel_19_TREADY;
	wire [7:0] mag_V_pixel_20_TDATA;
	wire mag_V_pixel_20_TVALID;
	reg mag_V_pixel_20_TREADY;
	wire [7:0] mag_V_pixel_21_TDATA;
	wire mag_V_pixel_21_TVALID;
	reg mag_V_pixel_21_TREADY;
	wire [7:0] mag_V_pixel_22_TDATA;
	wire mag_V_pixel_22_TVALID;
	reg mag_V_pixel_22_TREADY;
	wire [7:0] mag_V_pixel_23_TDATA;
	wire mag_V_pixel_23_TVALID;
	reg mag_V_pixel_23_TREADY;
	wire [7:0] mag_V_pixel_24_TDATA;
	wire mag_V_pixel_24_TVALID;
	reg mag_V_pixel_24_TREADY;
	wire [7:0] mag_V_pixel_25_TDATA;
	wire mag_V_pixel_25_TVALID;
	reg mag_V_pixel_25_TREADY;
	wire [7:0] mag_V_pixel_26_TDATA;
	wire mag_V_pixel_26_TVALID;
	reg mag_V_pixel_26_TREADY;
	wire [7:0] mag_V_pixel_27_TDATA;
	wire mag_V_pixel_27_TVALID;
	reg mag_V_pixel_27_TREADY;
	wire [7:0] mag_V_pixel_28_TDATA;
	wire mag_V_pixel_28_TVALID;
	reg mag_V_pixel_28_TREADY;
	wire [7:0] mag_V_pixel_29_TDATA;
	wire mag_V_pixel_29_TVALID;
	reg mag_V_pixel_29_TREADY;
	wire [7:0] mag_V_pixel_30_TDATA;
	wire mag_V_pixel_30_TVALID;
	reg mag_V_pixel_30_TREADY;
	wire [7:0] mag_V_pixel_31_TDATA;
	wire mag_V_pixel_31_TVALID;
	reg mag_V_pixel_31_TREADY;
	wire [7:0] mag_V_pixel_32_TDATA;
	wire mag_V_pixel_32_TVALID;
	reg mag_V_pixel_32_TREADY;
	wire [7:0] mag_V_pixel_33_TDATA;
	wire mag_V_pixel_33_TVALID;
	reg mag_V_pixel_33_TREADY;
	wire [7:0] mag_V_pixel_34_TDATA;
	wire mag_V_pixel_34_TVALID;
	reg mag_V_pixel_34_TREADY;
	wire [7:0] mag_V_pixel_35_TDATA;
	wire mag_V_pixel_35_TVALID;
	reg mag_V_pixel_35_TREADY;
	wire [7:0] mag_V_pixel_36_TDATA;
	wire mag_V_pixel_36_TVALID;
	reg mag_V_pixel_36_TREADY;
	wire [7:0] mag_V_pixel_37_TDATA;
	wire mag_V_pixel_37_TVALID;
	reg mag_V_pixel_37_TREADY;
	wire [7:0] mag_V_pixel_38_TDATA;
	wire mag_V_pixel_38_TVALID;
	reg mag_V_pixel_38_TREADY;
	wire [7:0] mag_V_pixel_39_TDATA;
	wire mag_V_pixel_39_TVALID;
	reg mag_V_pixel_39_TREADY;
	wire [7:0] mag_V_pixel_40_TDATA;
	wire mag_V_pixel_40_TVALID;
	reg mag_V_pixel_40_TREADY;
	wire [7:0] mag_V_pixel_41_TDATA;
	wire mag_V_pixel_41_TVALID;
	reg mag_V_pixel_41_TREADY;
	wire [7:0] mag_V_pixel_42_TDATA;
	wire mag_V_pixel_42_TVALID;
	reg mag_V_pixel_42_TREADY;
	wire [7:0] mag_V_pixel_43_TDATA;
	wire mag_V_pixel_43_TVALID;
	reg mag_V_pixel_43_TREADY;
	wire [7:0] mag_V_pixel_44_TDATA;
	wire mag_V_pixel_44_TVALID;
	reg mag_V_pixel_44_TREADY;
	wire [7:0] mag_V_pixel_45_TDATA;
	wire mag_V_pixel_45_TVALID;
	reg mag_V_pixel_45_TREADY;
	wire [7:0] mag_V_pixel_46_TDATA;
	wire mag_V_pixel_46_TVALID;
	reg mag_V_pixel_46_TREADY;
	wire [7:0] mag_V_pixel_47_TDATA;
	wire mag_V_pixel_47_TVALID;
	reg mag_V_pixel_47_TREADY;
	wire [7:0] mag_V_pixel_48_TDATA;
	wire mag_V_pixel_48_TVALID;
	reg mag_V_pixel_48_TREADY;
	wire [7:0] mag_V_pixel_49_TDATA;
	wire mag_V_pixel_49_TVALID;
	reg mag_V_pixel_49_TREADY;
	wire [7:0] mag_V_pixel_50_TDATA;
	wire mag_V_pixel_50_TVALID;
	reg mag_V_pixel_50_TREADY;
	wire [7:0] mag_V_pixel_51_TDATA;
	wire mag_V_pixel_51_TVALID;
	reg mag_V_pixel_51_TREADY;
	wire [7:0] mag_V_pixel_52_TDATA;
	wire mag_V_pixel_52_TVALID;
	reg mag_V_pixel_52_TREADY;
	wire [7:0] mag_V_pixel_53_TDATA;
	wire mag_V_pixel_53_TVALID;
	reg mag_V_pixel_53_TREADY;
	wire [7:0] mag_V_pixel_54_TDATA;
	wire mag_V_pixel_54_TVALID;
	reg mag_V_pixel_54_TREADY;
	wire [7:0] mag_V_pixel_55_TDATA;
	wire mag_V_pixel_55_TVALID;
	reg mag_V_pixel_55_TREADY;
	wire [7:0] mag_V_pixel_56_TDATA;
	wire mag_V_pixel_56_TVALID;
	reg mag_V_pixel_56_TREADY;
	wire [7:0] mag_V_pixel_57_TDATA;
	wire mag_V_pixel_57_TVALID;
	reg mag_V_pixel_57_TREADY;
	wire [7:0] mag_V_pixel_58_TDATA;
	wire mag_V_pixel_58_TVALID;
	reg mag_V_pixel_58_TREADY;
	wire [7:0] mag_V_pixel_59_TDATA;
	wire mag_V_pixel_59_TVALID;
	reg mag_V_pixel_59_TREADY;
	wire [7:0] mag_V_pixel_60_TDATA;
	wire mag_V_pixel_60_TVALID;
	reg mag_V_pixel_60_TREADY;
	wire [7:0] mag_V_pixel_61_TDATA;
	wire mag_V_pixel_61_TVALID;
	reg mag_V_pixel_61_TREADY;
	wire [7:0] mag_V_pixel_62_TDATA;
	wire mag_V_pixel_62_TVALID;
	reg mag_V_pixel_62_TREADY;
	wire [7:0] mag_V_pixel_63_TDATA;
	wire mag_V_pixel_63_TVALID;
	reg mag_V_pixel_63_TREADY;
	wire [7:0] mag_V_pixel_64_TDATA;
	wire mag_V_pixel_64_TVALID;
	reg mag_V_pixel_64_TREADY;
	wire [7:0] mag_V_pixel_65_TDATA;
	wire mag_V_pixel_65_TVALID;
	reg mag_V_pixel_65_TREADY;
	wire [7:0] mag_V_pixel_66_TDATA;
	wire mag_V_pixel_66_TVALID;
	reg mag_V_pixel_66_TREADY;
	wire [7:0] mag_V_pixel_67_TDATA;
	wire mag_V_pixel_67_TVALID;
	reg mag_V_pixel_67_TREADY;
	wire [7:0] mag_V_pixel_68_TDATA;
	wire mag_V_pixel_68_TVALID;
	reg mag_V_pixel_68_TREADY;
	wire [7:0] mag_V_pixel_69_TDATA;
	wire mag_V_pixel_69_TVALID;
	reg mag_V_pixel_69_TREADY;
	wire [7:0] mag_V_pixel_70_TDATA;
	wire mag_V_pixel_70_TVALID;
	reg mag_V_pixel_70_TREADY;
	wire [7:0] pha_V_pixel_0_TDATA;
	wire pha_V_pixel_0_TVALID;
	reg pha_V_pixel_0_TREADY;
	wire [7:0] pha_V_pixel_1_TDATA;
	wire pha_V_pixel_1_TVALID;
	reg pha_V_pixel_1_TREADY;
	wire [7:0] pha_V_pixel_2_TDATA;
	wire pha_V_pixel_2_TVALID;
	reg pha_V_pixel_2_TREADY;
	wire [7:0] pha_V_pixel_3_TDATA;
	wire pha_V_pixel_3_TVALID;
	reg pha_V_pixel_3_TREADY;
	wire [7:0] pha_V_pixel_4_TDATA;
	wire pha_V_pixel_4_TVALID;
	reg pha_V_pixel_4_TREADY;
	wire [7:0] pha_V_pixel_5_TDATA;
	wire pha_V_pixel_5_TVALID;
	reg pha_V_pixel_5_TREADY;
	wire [7:0] pha_V_pixel_6_TDATA;
	wire pha_V_pixel_6_TVALID;
	reg pha_V_pixel_6_TREADY;
	wire [7:0] pha_V_pixel_7_TDATA;
	wire pha_V_pixel_7_TVALID;
	reg pha_V_pixel_7_TREADY;
	wire [7:0] pha_V_pixel_8_TDATA;
	wire pha_V_pixel_8_TVALID;
	reg pha_V_pixel_8_TREADY;
	wire [7:0] pha_V_pixel_9_TDATA;
	wire pha_V_pixel_9_TVALID;
	reg pha_V_pixel_9_TREADY;
	wire [7:0] pha_V_pixel_10_TDATA;
	wire pha_V_pixel_10_TVALID;
	reg pha_V_pixel_10_TREADY;
	wire [7:0] pha_V_pixel_11_TDATA;
	wire pha_V_pixel_11_TVALID;
	reg pha_V_pixel_11_TREADY;
	wire [7:0] pha_V_pixel_12_TDATA;
	wire pha_V_pixel_12_TVALID;
	reg pha_V_pixel_12_TREADY;
	wire [7:0] pha_V_pixel_13_TDATA;
	wire pha_V_pixel_13_TVALID;
	reg pha_V_pixel_13_TREADY;
	wire [7:0] pha_V_pixel_14_TDATA;
	wire pha_V_pixel_14_TVALID;
	reg pha_V_pixel_14_TREADY;
	wire [7:0] pha_V_pixel_15_TDATA;
	wire pha_V_pixel_15_TVALID;
	reg pha_V_pixel_15_TREADY;
	wire [7:0] pha_V_pixel_16_TDATA;
	wire pha_V_pixel_16_TVALID;
	reg pha_V_pixel_16_TREADY;
	wire [7:0] pha_V_pixel_17_TDATA;
	wire pha_V_pixel_17_TVALID;
	reg pha_V_pixel_17_TREADY;
	wire [7:0] pha_V_pixel_18_TDATA;
	wire pha_V_pixel_18_TVALID;
	reg pha_V_pixel_18_TREADY;
	wire [7:0] pha_V_pixel_19_TDATA;
	wire pha_V_pixel_19_TVALID;
	reg pha_V_pixel_19_TREADY;
	wire [7:0] pha_V_pixel_20_TDATA;
	wire pha_V_pixel_20_TVALID;
	reg pha_V_pixel_20_TREADY;
	wire [7:0] pha_V_pixel_21_TDATA;
	wire pha_V_pixel_21_TVALID;
	reg pha_V_pixel_21_TREADY;
	wire [7:0] pha_V_pixel_22_TDATA;
	wire pha_V_pixel_22_TVALID;
	reg pha_V_pixel_22_TREADY;
	wire [7:0] pha_V_pixel_23_TDATA;
	wire pha_V_pixel_23_TVALID;
	reg pha_V_pixel_23_TREADY;
	wire [7:0] pha_V_pixel_24_TDATA;
	wire pha_V_pixel_24_TVALID;
	reg pha_V_pixel_24_TREADY;
	wire [7:0] pha_V_pixel_25_TDATA;
	wire pha_V_pixel_25_TVALID;
	reg pha_V_pixel_25_TREADY;
	wire [7:0] pha_V_pixel_26_TDATA;
	wire pha_V_pixel_26_TVALID;
	reg pha_V_pixel_26_TREADY;
	wire [7:0] pha_V_pixel_27_TDATA;
	wire pha_V_pixel_27_TVALID;
	reg pha_V_pixel_27_TREADY;
	wire [7:0] pha_V_pixel_28_TDATA;
	wire pha_V_pixel_28_TVALID;
	reg pha_V_pixel_28_TREADY;
	wire [7:0] pha_V_pixel_29_TDATA;
	wire pha_V_pixel_29_TVALID;
	reg pha_V_pixel_29_TREADY;
	wire [7:0] pha_V_pixel_30_TDATA;
	wire pha_V_pixel_30_TVALID;
	reg pha_V_pixel_30_TREADY;
	wire [7:0] pha_V_pixel_31_TDATA;
	wire pha_V_pixel_31_TVALID;
	reg pha_V_pixel_31_TREADY;
	wire [7:0] pha_V_pixel_32_TDATA;
	wire pha_V_pixel_32_TVALID;
	reg pha_V_pixel_32_TREADY;
	wire [7:0] pha_V_pixel_33_TDATA;
	wire pha_V_pixel_33_TVALID;
	reg pha_V_pixel_33_TREADY;
	wire [7:0] pha_V_pixel_34_TDATA;
	wire pha_V_pixel_34_TVALID;
	reg pha_V_pixel_34_TREADY;
	wire [7:0] pha_V_pixel_35_TDATA;
	wire pha_V_pixel_35_TVALID;
	reg pha_V_pixel_35_TREADY;
	wire [7:0] pha_V_pixel_36_TDATA;
	wire pha_V_pixel_36_TVALID;
	reg pha_V_pixel_36_TREADY;
	wire [7:0] pha_V_pixel_37_TDATA;
	wire pha_V_pixel_37_TVALID;
	reg pha_V_pixel_37_TREADY;
	wire [7:0] pha_V_pixel_38_TDATA;
	wire pha_V_pixel_38_TVALID;
	reg pha_V_pixel_38_TREADY;
	wire [7:0] pha_V_pixel_39_TDATA;
	wire pha_V_pixel_39_TVALID;
	reg pha_V_pixel_39_TREADY;
	wire [7:0] pha_V_pixel_40_TDATA;
	wire pha_V_pixel_40_TVALID;
	reg pha_V_pixel_40_TREADY;
	wire [7:0] pha_V_pixel_41_TDATA;
	wire pha_V_pixel_41_TVALID;
	reg pha_V_pixel_41_TREADY;
	wire [7:0] pha_V_pixel_42_TDATA;
	wire pha_V_pixel_42_TVALID;
	reg pha_V_pixel_42_TREADY;
	wire [7:0] pha_V_pixel_43_TDATA;
	wire pha_V_pixel_43_TVALID;
	reg pha_V_pixel_43_TREADY;
	wire [7:0] pha_V_pixel_44_TDATA;
	wire pha_V_pixel_44_TVALID;
	reg pha_V_pixel_44_TREADY;
	wire [7:0] pha_V_pixel_45_TDATA;
	wire pha_V_pixel_45_TVALID;
	reg pha_V_pixel_45_TREADY;
	wire [7:0] pha_V_pixel_46_TDATA;
	wire pha_V_pixel_46_TVALID;
	reg pha_V_pixel_46_TREADY;
	wire [7:0] pha_V_pixel_47_TDATA;
	wire pha_V_pixel_47_TVALID;
	reg pha_V_pixel_47_TREADY;
	wire [7:0] pha_V_pixel_48_TDATA;
	wire pha_V_pixel_48_TVALID;
	reg pha_V_pixel_48_TREADY;
	wire [7:0] pha_V_pixel_49_TDATA;
	wire pha_V_pixel_49_TVALID;
	reg pha_V_pixel_49_TREADY;
	wire [7:0] pha_V_pixel_50_TDATA;
	wire pha_V_pixel_50_TVALID;
	reg pha_V_pixel_50_TREADY;
	wire [7:0] pha_V_pixel_51_TDATA;
	wire pha_V_pixel_51_TVALID;
	reg pha_V_pixel_51_TREADY;
	wire [7:0] pha_V_pixel_52_TDATA;
	wire pha_V_pixel_52_TVALID;
	reg pha_V_pixel_52_TREADY;
	wire [7:0] pha_V_pixel_53_TDATA;
	wire pha_V_pixel_53_TVALID;
	reg pha_V_pixel_53_TREADY;
	wire [7:0] pha_V_pixel_54_TDATA;
	wire pha_V_pixel_54_TVALID;
	reg pha_V_pixel_54_TREADY;
	wire [7:0] pha_V_pixel_55_TDATA;
	wire pha_V_pixel_55_TVALID;
	reg pha_V_pixel_55_TREADY;
	wire [7:0] pha_V_pixel_56_TDATA;
	wire pha_V_pixel_56_TVALID;
	reg pha_V_pixel_56_TREADY;
	wire [7:0] pha_V_pixel_57_TDATA;
	wire pha_V_pixel_57_TVALID;
	reg pha_V_pixel_57_TREADY;
	wire [7:0] pha_V_pixel_58_TDATA;
	wire pha_V_pixel_58_TVALID;
	reg pha_V_pixel_58_TREADY;
	wire [7:0] pha_V_pixel_59_TDATA;
	wire pha_V_pixel_59_TVALID;
	reg pha_V_pixel_59_TREADY;
	wire [7:0] pha_V_pixel_60_TDATA;
	wire pha_V_pixel_60_TVALID;
	reg pha_V_pixel_60_TREADY;
	wire [7:0] pha_V_pixel_61_TDATA;
	wire pha_V_pixel_61_TVALID;
	reg pha_V_pixel_61_TREADY;
	wire [7:0] pha_V_pixel_62_TDATA;
	wire pha_V_pixel_62_TVALID;
	reg pha_V_pixel_62_TREADY;
	wire [7:0] pha_V_pixel_63_TDATA;
	wire pha_V_pixel_63_TVALID;
	reg pha_V_pixel_63_TREADY;
	wire [7:0] pha_V_pixel_64_TDATA;
	wire pha_V_pixel_64_TVALID;
	reg pha_V_pixel_64_TREADY;
	wire [7:0] pha_V_pixel_65_TDATA;
	wire pha_V_pixel_65_TVALID;
	reg pha_V_pixel_65_TREADY;
	wire [7:0] pha_V_pixel_66_TDATA;
	wire pha_V_pixel_66_TVALID;
	reg pha_V_pixel_66_TREADY;
	wire [7:0] pha_V_pixel_67_TDATA;
	wire pha_V_pixel_67_TVALID;
	reg pha_V_pixel_67_TREADY;
	wire [7:0] pha_V_pixel_68_TDATA;
	wire pha_V_pixel_68_TVALID;
	reg pha_V_pixel_68_TREADY;
	wire [7:0] pha_V_pixel_69_TDATA;
	wire pha_V_pixel_69_TVALID;
	reg pha_V_pixel_69_TREADY;
	wire [7:0] pha_V_pixel_70_TDATA;
	wire pha_V_pixel_70_TVALID;
	reg pha_V_pixel_70_TREADY;
	reg ap_clk;
	reg ap_rst_n;
	wire ap_done;
	reg ap_start;
	wire ap_ready;
	wire ap_idle;

	Sobel dut (
		.src_V_pixel_0_r_TDATA(src_V_pixel_0_r_TDATA),
		.src_V_pixel_0_r_TVALID(src_V_pixel_0_r_TVALID),
		.src_V_pixel_0_r_TREADY(src_V_pixel_0_r_TREADY),
		.src_V_pixel_1_r_TDATA(src_V_pixel_1_r_TDATA),
		.src_V_pixel_1_r_TVALID(src_V_pixel_1_r_TVALID),
		.src_V_pixel_1_r_TREADY(src_V_pixel_1_r_TREADY),
		.src_V_pixel_2_r_TDATA(src_V_pixel_2_r_TDATA),
		.src_V_pixel_2_r_TVALID(src_V_pixel_2_r_TVALID),
		.src_V_pixel_2_r_TREADY(src_V_pixel_2_r_TREADY),
		.src_V_pixel_3_r_TDATA(src_V_pixel_3_r_TDATA),
		.src_V_pixel_3_r_TVALID(src_V_pixel_3_r_TVALID),
		.src_V_pixel_3_r_TREADY(src_V_pixel_3_r_TREADY),
		.src_V_pixel_4_r_TDATA(src_V_pixel_4_r_TDATA),
		.src_V_pixel_4_r_TVALID(src_V_pixel_4_r_TVALID),
		.src_V_pixel_4_r_TREADY(src_V_pixel_4_r_TREADY),
		.src_V_pixel_5_r_TDATA(src_V_pixel_5_r_TDATA),
		.src_V_pixel_5_r_TVALID(src_V_pixel_5_r_TVALID),
		.src_V_pixel_5_r_TREADY(src_V_pixel_5_r_TREADY),
		.src_V_pixel_6_r_TDATA(src_V_pixel_6_r_TDATA),
		.src_V_pixel_6_r_TVALID(src_V_pixel_6_r_TVALID),
		.src_V_pixel_6_r_TREADY(src_V_pixel_6_r_TREADY),
		.src_V_pixel_7_r_TDATA(src_V_pixel_7_r_TDATA),
		.src_V_pixel_7_r_TVALID(src_V_pixel_7_r_TVALID),
		.src_V_pixel_7_r_TREADY(src_V_pixel_7_r_TREADY),
		.src_V_pixel_8_r_TDATA(src_V_pixel_8_r_TDATA),
		.src_V_pixel_8_r_TVALID(src_V_pixel_8_r_TVALID),
		.src_V_pixel_8_r_TREADY(src_V_pixel_8_r_TREADY),
		.src_V_pixel_9_r_TDATA(src_V_pixel_9_r_TDATA),
		.src_V_pixel_9_r_TVALID(src_V_pixel_9_r_TVALID),
		.src_V_pixel_9_r_TREADY(src_V_pixel_9_r_TREADY),
		.src_V_pixel_10_r_TDATA(src_V_pixel_10_r_TDATA),
		.src_V_pixel_10_r_TVALID(src_V_pixel_10_r_TVALID),
		.src_V_pixel_10_r_TREADY(src_V_pixel_10_r_TREADY),
		.src_V_pixel_11_r_TDATA(src_V_pixel_11_r_TDATA),
		.src_V_pixel_11_r_TVALID(src_V_pixel_11_r_TVALID),
		.src_V_pixel_11_r_TREADY(src_V_pixel_11_r_TREADY),
		.src_V_pixel_12_r_TDATA(src_V_pixel_12_r_TDATA),
		.src_V_pixel_12_r_TVALID(src_V_pixel_12_r_TVALID),
		.src_V_pixel_12_r_TREADY(src_V_pixel_12_r_TREADY),
		.src_V_pixel_13_r_TDATA(src_V_pixel_13_r_TDATA),
		.src_V_pixel_13_r_TVALID(src_V_pixel_13_r_TVALID),
		.src_V_pixel_13_r_TREADY(src_V_pixel_13_r_TREADY),
		.src_V_pixel_14_r_TDATA(src_V_pixel_14_r_TDATA),
		.src_V_pixel_14_r_TVALID(src_V_pixel_14_r_TVALID),
		.src_V_pixel_14_r_TREADY(src_V_pixel_14_r_TREADY),
		.src_V_pixel_15_r_TDATA(src_V_pixel_15_r_TDATA),
		.src_V_pixel_15_r_TVALID(src_V_pixel_15_r_TVALID),
		.src_V_pixel_15_r_TREADY(src_V_pixel_15_r_TREADY),
		.src_V_pixel_16_r_TDATA(src_V_pixel_16_r_TDATA),
		.src_V_pixel_16_r_TVALID(src_V_pixel_16_r_TVALID),
		.src_V_pixel_16_r_TREADY(src_V_pixel_16_r_TREADY),
		.src_V_pixel_17_r_TDATA(src_V_pixel_17_r_TDATA),
		.src_V_pixel_17_r_TVALID(src_V_pixel_17_r_TVALID),
		.src_V_pixel_17_r_TREADY(src_V_pixel_17_r_TREADY),
		.src_V_pixel_18_r_TDATA(src_V_pixel_18_r_TDATA),
		.src_V_pixel_18_r_TVALID(src_V_pixel_18_r_TVALID),
		.src_V_pixel_18_r_TREADY(src_V_pixel_18_r_TREADY),
		.src_V_pixel_19_r_TDATA(src_V_pixel_19_r_TDATA),
		.src_V_pixel_19_r_TVALID(src_V_pixel_19_r_TVALID),
		.src_V_pixel_19_r_TREADY(src_V_pixel_19_r_TREADY),
		.src_V_pixel_20_r_TDATA(src_V_pixel_20_r_TDATA),
		.src_V_pixel_20_r_TVALID(src_V_pixel_20_r_TVALID),
		.src_V_pixel_20_r_TREADY(src_V_pixel_20_r_TREADY),
		.src_V_pixel_21_r_TDATA(src_V_pixel_21_r_TDATA),
		.src_V_pixel_21_r_TVALID(src_V_pixel_21_r_TVALID),
		.src_V_pixel_21_r_TREADY(src_V_pixel_21_r_TREADY),
		.src_V_pixel_22_r_TDATA(src_V_pixel_22_r_TDATA),
		.src_V_pixel_22_r_TVALID(src_V_pixel_22_r_TVALID),
		.src_V_pixel_22_r_TREADY(src_V_pixel_22_r_TREADY),
		.src_V_pixel_23_r_TDATA(src_V_pixel_23_r_TDATA),
		.src_V_pixel_23_r_TVALID(src_V_pixel_23_r_TVALID),
		.src_V_pixel_23_r_TREADY(src_V_pixel_23_r_TREADY),
		.src_V_pixel_24_r_TDATA(src_V_pixel_24_r_TDATA),
		.src_V_pixel_24_r_TVALID(src_V_pixel_24_r_TVALID),
		.src_V_pixel_24_r_TREADY(src_V_pixel_24_r_TREADY),
		.src_V_pixel_25_r_TDATA(src_V_pixel_25_r_TDATA),
		.src_V_pixel_25_r_TVALID(src_V_pixel_25_r_TVALID),
		.src_V_pixel_25_r_TREADY(src_V_pixel_25_r_TREADY),
		.src_V_pixel_26_r_TDATA(src_V_pixel_26_r_TDATA),
		.src_V_pixel_26_r_TVALID(src_V_pixel_26_r_TVALID),
		.src_V_pixel_26_r_TREADY(src_V_pixel_26_r_TREADY),
		.src_V_pixel_27_r_TDATA(src_V_pixel_27_r_TDATA),
		.src_V_pixel_27_r_TVALID(src_V_pixel_27_r_TVALID),
		.src_V_pixel_27_r_TREADY(src_V_pixel_27_r_TREADY),
		.src_V_pixel_28_r_TDATA(src_V_pixel_28_r_TDATA),
		.src_V_pixel_28_r_TVALID(src_V_pixel_28_r_TVALID),
		.src_V_pixel_28_r_TREADY(src_V_pixel_28_r_TREADY),
		.src_V_pixel_29_r_TDATA(src_V_pixel_29_r_TDATA),
		.src_V_pixel_29_r_TVALID(src_V_pixel_29_r_TVALID),
		.src_V_pixel_29_r_TREADY(src_V_pixel_29_r_TREADY),
		.src_V_pixel_30_r_TDATA(src_V_pixel_30_r_TDATA),
		.src_V_pixel_30_r_TVALID(src_V_pixel_30_r_TVALID),
		.src_V_pixel_30_r_TREADY(src_V_pixel_30_r_TREADY),
		.src_V_pixel_31_r_TDATA(src_V_pixel_31_r_TDATA),
		.src_V_pixel_31_r_TVALID(src_V_pixel_31_r_TVALID),
		.src_V_pixel_31_r_TREADY(src_V_pixel_31_r_TREADY),
		.src_V_pixel_32_r_TDATA(src_V_pixel_32_r_TDATA),
		.src_V_pixel_32_r_TVALID(src_V_pixel_32_r_TVALID),
		.src_V_pixel_32_r_TREADY(src_V_pixel_32_r_TREADY),
		.src_V_pixel_33_r_TDATA(src_V_pixel_33_r_TDATA),
		.src_V_pixel_33_r_TVALID(src_V_pixel_33_r_TVALID),
		.src_V_pixel_33_r_TREADY(src_V_pixel_33_r_TREADY),
		.src_V_pixel_34_r_TDATA(src_V_pixel_34_r_TDATA),
		.src_V_pixel_34_r_TVALID(src_V_pixel_34_r_TVALID),
		.src_V_pixel_34_r_TREADY(src_V_pixel_34_r_TREADY),
		.src_V_pixel_35_r_TDATA(src_V_pixel_35_r_TDATA),
		.src_V_pixel_35_r_TVALID(src_V_pixel_35_r_TVALID),
		.src_V_pixel_35_r_TREADY(src_V_pixel_35_r_TREADY),
		.src_V_pixel_36_r_TDATA(src_V_pixel_36_r_TDATA),
		.src_V_pixel_36_r_TVALID(src_V_pixel_36_r_TVALID),
		.src_V_pixel_36_r_TREADY(src_V_pixel_36_r_TREADY),
		.src_V_pixel_37_r_TDATA(src_V_pixel_37_r_TDATA),
		.src_V_pixel_37_r_TVALID(src_V_pixel_37_r_TVALID),
		.src_V_pixel_37_r_TREADY(src_V_pixel_37_r_TREADY),
		.src_V_pixel_38_r_TDATA(src_V_pixel_38_r_TDATA),
		.src_V_pixel_38_r_TVALID(src_V_pixel_38_r_TVALID),
		.src_V_pixel_38_r_TREADY(src_V_pixel_38_r_TREADY),
		.src_V_pixel_39_r_TDATA(src_V_pixel_39_r_TDATA),
		.src_V_pixel_39_r_TVALID(src_V_pixel_39_r_TVALID),
		.src_V_pixel_39_r_TREADY(src_V_pixel_39_r_TREADY),
		.src_V_pixel_40_r_TDATA(src_V_pixel_40_r_TDATA),
		.src_V_pixel_40_r_TVALID(src_V_pixel_40_r_TVALID),
		.src_V_pixel_40_r_TREADY(src_V_pixel_40_r_TREADY),
		.src_V_pixel_41_r_TDATA(src_V_pixel_41_r_TDATA),
		.src_V_pixel_41_r_TVALID(src_V_pixel_41_r_TVALID),
		.src_V_pixel_41_r_TREADY(src_V_pixel_41_r_TREADY),
		.src_V_pixel_42_r_TDATA(src_V_pixel_42_r_TDATA),
		.src_V_pixel_42_r_TVALID(src_V_pixel_42_r_TVALID),
		.src_V_pixel_42_r_TREADY(src_V_pixel_42_r_TREADY),
		.src_V_pixel_43_r_TDATA(src_V_pixel_43_r_TDATA),
		.src_V_pixel_43_r_TVALID(src_V_pixel_43_r_TVALID),
		.src_V_pixel_43_r_TREADY(src_V_pixel_43_r_TREADY),
		.src_V_pixel_44_r_TDATA(src_V_pixel_44_r_TDATA),
		.src_V_pixel_44_r_TVALID(src_V_pixel_44_r_TVALID),
		.src_V_pixel_44_r_TREADY(src_V_pixel_44_r_TREADY),
		.src_V_pixel_45_r_TDATA(src_V_pixel_45_r_TDATA),
		.src_V_pixel_45_r_TVALID(src_V_pixel_45_r_TVALID),
		.src_V_pixel_45_r_TREADY(src_V_pixel_45_r_TREADY),
		.src_V_pixel_46_r_TDATA(src_V_pixel_46_r_TDATA),
		.src_V_pixel_46_r_TVALID(src_V_pixel_46_r_TVALID),
		.src_V_pixel_46_r_TREADY(src_V_pixel_46_r_TREADY),
		.src_V_pixel_47_r_TDATA(src_V_pixel_47_r_TDATA),
		.src_V_pixel_47_r_TVALID(src_V_pixel_47_r_TVALID),
		.src_V_pixel_47_r_TREADY(src_V_pixel_47_r_TREADY),
		.src_V_pixel_48_r_TDATA(src_V_pixel_48_r_TDATA),
		.src_V_pixel_48_r_TVALID(src_V_pixel_48_r_TVALID),
		.src_V_pixel_48_r_TREADY(src_V_pixel_48_r_TREADY),
		.src_V_pixel_49_r_TDATA(src_V_pixel_49_r_TDATA),
		.src_V_pixel_49_r_TVALID(src_V_pixel_49_r_TVALID),
		.src_V_pixel_49_r_TREADY(src_V_pixel_49_r_TREADY),
		.src_V_pixel_50_r_TDATA(src_V_pixel_50_r_TDATA),
		.src_V_pixel_50_r_TVALID(src_V_pixel_50_r_TVALID),
		.src_V_pixel_50_r_TREADY(src_V_pixel_50_r_TREADY),
		.src_V_pixel_51_r_TDATA(src_V_pixel_51_r_TDATA),
		.src_V_pixel_51_r_TVALID(src_V_pixel_51_r_TVALID),
		.src_V_pixel_51_r_TREADY(src_V_pixel_51_r_TREADY),
		.src_V_pixel_52_r_TDATA(src_V_pixel_52_r_TDATA),
		.src_V_pixel_52_r_TVALID(src_V_pixel_52_r_TVALID),
		.src_V_pixel_52_r_TREADY(src_V_pixel_52_r_TREADY),
		.src_V_pixel_53_r_TDATA(src_V_pixel_53_r_TDATA),
		.src_V_pixel_53_r_TVALID(src_V_pixel_53_r_TVALID),
		.src_V_pixel_53_r_TREADY(src_V_pixel_53_r_TREADY),
		.src_V_pixel_54_r_TDATA(src_V_pixel_54_r_TDATA),
		.src_V_pixel_54_r_TVALID(src_V_pixel_54_r_TVALID),
		.src_V_pixel_54_r_TREADY(src_V_pixel_54_r_TREADY),
		.src_V_pixel_55_r_TDATA(src_V_pixel_55_r_TDATA),
		.src_V_pixel_55_r_TVALID(src_V_pixel_55_r_TVALID),
		.src_V_pixel_55_r_TREADY(src_V_pixel_55_r_TREADY),
		.src_V_pixel_56_r_TDATA(src_V_pixel_56_r_TDATA),
		.src_V_pixel_56_r_TVALID(src_V_pixel_56_r_TVALID),
		.src_V_pixel_56_r_TREADY(src_V_pixel_56_r_TREADY),
		.src_V_pixel_57_r_TDATA(src_V_pixel_57_r_TDATA),
		.src_V_pixel_57_r_TVALID(src_V_pixel_57_r_TVALID),
		.src_V_pixel_57_r_TREADY(src_V_pixel_57_r_TREADY),
		.src_V_pixel_58_r_TDATA(src_V_pixel_58_r_TDATA),
		.src_V_pixel_58_r_TVALID(src_V_pixel_58_r_TVALID),
		.src_V_pixel_58_r_TREADY(src_V_pixel_58_r_TREADY),
		.src_V_pixel_59_r_TDATA(src_V_pixel_59_r_TDATA),
		.src_V_pixel_59_r_TVALID(src_V_pixel_59_r_TVALID),
		.src_V_pixel_59_r_TREADY(src_V_pixel_59_r_TREADY),
		.src_V_pixel_60_r_TDATA(src_V_pixel_60_r_TDATA),
		.src_V_pixel_60_r_TVALID(src_V_pixel_60_r_TVALID),
		.src_V_pixel_60_r_TREADY(src_V_pixel_60_r_TREADY),
		.src_V_pixel_61_r_TDATA(src_V_pixel_61_r_TDATA),
		.src_V_pixel_61_r_TVALID(src_V_pixel_61_r_TVALID),
		.src_V_pixel_61_r_TREADY(src_V_pixel_61_r_TREADY),
		.src_V_pixel_62_r_TDATA(src_V_pixel_62_r_TDATA),
		.src_V_pixel_62_r_TVALID(src_V_pixel_62_r_TVALID),
		.src_V_pixel_62_r_TREADY(src_V_pixel_62_r_TREADY),
		.src_V_pixel_63_r_TDATA(src_V_pixel_63_r_TDATA),
		.src_V_pixel_63_r_TVALID(src_V_pixel_63_r_TVALID),
		.src_V_pixel_63_r_TREADY(src_V_pixel_63_r_TREADY),
		.src_V_pixel_64_r_TDATA(src_V_pixel_64_r_TDATA),
		.src_V_pixel_64_r_TVALID(src_V_pixel_64_r_TVALID),
		.src_V_pixel_64_r_TREADY(src_V_pixel_64_r_TREADY),
		.src_V_pixel_65_r_TDATA(src_V_pixel_65_r_TDATA),
		.src_V_pixel_65_r_TVALID(src_V_pixel_65_r_TVALID),
		.src_V_pixel_65_r_TREADY(src_V_pixel_65_r_TREADY),
		.src_V_pixel_66_r_TDATA(src_V_pixel_66_r_TDATA),
		.src_V_pixel_66_r_TVALID(src_V_pixel_66_r_TVALID),
		.src_V_pixel_66_r_TREADY(src_V_pixel_66_r_TREADY),
		.src_V_pixel_67_r_TDATA(src_V_pixel_67_r_TDATA),
		.src_V_pixel_67_r_TVALID(src_V_pixel_67_r_TVALID),
		.src_V_pixel_67_r_TREADY(src_V_pixel_67_r_TREADY),
		.src_V_pixel_68_r_TDATA(src_V_pixel_68_r_TDATA),
		.src_V_pixel_68_r_TVALID(src_V_pixel_68_r_TVALID),
		.src_V_pixel_68_r_TREADY(src_V_pixel_68_r_TREADY),
		.src_V_pixel_69_r_TDATA(src_V_pixel_69_r_TDATA),
		.src_V_pixel_69_r_TVALID(src_V_pixel_69_r_TVALID),
		.src_V_pixel_69_r_TREADY(src_V_pixel_69_r_TREADY),
		.src_V_pixel_70_r_TDATA(src_V_pixel_70_r_TDATA),
		.src_V_pixel_70_r_TVALID(src_V_pixel_70_r_TVALID),
		.src_V_pixel_70_r_TREADY(src_V_pixel_70_r_TREADY),
		.src_V_pixel_0_g_TDATA(src_V_pixel_0_g_TDATA),
		.src_V_pixel_0_g_TVALID(src_V_pixel_0_g_TVALID),
		.src_V_pixel_0_g_TREADY(src_V_pixel_0_g_TREADY),
		.src_V_pixel_1_g_TDATA(src_V_pixel_1_g_TDATA),
		.src_V_pixel_1_g_TVALID(src_V_pixel_1_g_TVALID),
		.src_V_pixel_1_g_TREADY(src_V_pixel_1_g_TREADY),
		.src_V_pixel_2_g_TDATA(src_V_pixel_2_g_TDATA),
		.src_V_pixel_2_g_TVALID(src_V_pixel_2_g_TVALID),
		.src_V_pixel_2_g_TREADY(src_V_pixel_2_g_TREADY),
		.src_V_pixel_3_g_TDATA(src_V_pixel_3_g_TDATA),
		.src_V_pixel_3_g_TVALID(src_V_pixel_3_g_TVALID),
		.src_V_pixel_3_g_TREADY(src_V_pixel_3_g_TREADY),
		.src_V_pixel_4_g_TDATA(src_V_pixel_4_g_TDATA),
		.src_V_pixel_4_g_TVALID(src_V_pixel_4_g_TVALID),
		.src_V_pixel_4_g_TREADY(src_V_pixel_4_g_TREADY),
		.src_V_pixel_5_g_TDATA(src_V_pixel_5_g_TDATA),
		.src_V_pixel_5_g_TVALID(src_V_pixel_5_g_TVALID),
		.src_V_pixel_5_g_TREADY(src_V_pixel_5_g_TREADY),
		.src_V_pixel_6_g_TDATA(src_V_pixel_6_g_TDATA),
		.src_V_pixel_6_g_TVALID(src_V_pixel_6_g_TVALID),
		.src_V_pixel_6_g_TREADY(src_V_pixel_6_g_TREADY),
		.src_V_pixel_7_g_TDATA(src_V_pixel_7_g_TDATA),
		.src_V_pixel_7_g_TVALID(src_V_pixel_7_g_TVALID),
		.src_V_pixel_7_g_TREADY(src_V_pixel_7_g_TREADY),
		.src_V_pixel_8_g_TDATA(src_V_pixel_8_g_TDATA),
		.src_V_pixel_8_g_TVALID(src_V_pixel_8_g_TVALID),
		.src_V_pixel_8_g_TREADY(src_V_pixel_8_g_TREADY),
		.src_V_pixel_9_g_TDATA(src_V_pixel_9_g_TDATA),
		.src_V_pixel_9_g_TVALID(src_V_pixel_9_g_TVALID),
		.src_V_pixel_9_g_TREADY(src_V_pixel_9_g_TREADY),
		.src_V_pixel_10_g_TDATA(src_V_pixel_10_g_TDATA),
		.src_V_pixel_10_g_TVALID(src_V_pixel_10_g_TVALID),
		.src_V_pixel_10_g_TREADY(src_V_pixel_10_g_TREADY),
		.src_V_pixel_11_g_TDATA(src_V_pixel_11_g_TDATA),
		.src_V_pixel_11_g_TVALID(src_V_pixel_11_g_TVALID),
		.src_V_pixel_11_g_TREADY(src_V_pixel_11_g_TREADY),
		.src_V_pixel_12_g_TDATA(src_V_pixel_12_g_TDATA),
		.src_V_pixel_12_g_TVALID(src_V_pixel_12_g_TVALID),
		.src_V_pixel_12_g_TREADY(src_V_pixel_12_g_TREADY),
		.src_V_pixel_13_g_TDATA(src_V_pixel_13_g_TDATA),
		.src_V_pixel_13_g_TVALID(src_V_pixel_13_g_TVALID),
		.src_V_pixel_13_g_TREADY(src_V_pixel_13_g_TREADY),
		.src_V_pixel_14_g_TDATA(src_V_pixel_14_g_TDATA),
		.src_V_pixel_14_g_TVALID(src_V_pixel_14_g_TVALID),
		.src_V_pixel_14_g_TREADY(src_V_pixel_14_g_TREADY),
		.src_V_pixel_15_g_TDATA(src_V_pixel_15_g_TDATA),
		.src_V_pixel_15_g_TVALID(src_V_pixel_15_g_TVALID),
		.src_V_pixel_15_g_TREADY(src_V_pixel_15_g_TREADY),
		.src_V_pixel_16_g_TDATA(src_V_pixel_16_g_TDATA),
		.src_V_pixel_16_g_TVALID(src_V_pixel_16_g_TVALID),
		.src_V_pixel_16_g_TREADY(src_V_pixel_16_g_TREADY),
		.src_V_pixel_17_g_TDATA(src_V_pixel_17_g_TDATA),
		.src_V_pixel_17_g_TVALID(src_V_pixel_17_g_TVALID),
		.src_V_pixel_17_g_TREADY(src_V_pixel_17_g_TREADY),
		.src_V_pixel_18_g_TDATA(src_V_pixel_18_g_TDATA),
		.src_V_pixel_18_g_TVALID(src_V_pixel_18_g_TVALID),
		.src_V_pixel_18_g_TREADY(src_V_pixel_18_g_TREADY),
		.src_V_pixel_19_g_TDATA(src_V_pixel_19_g_TDATA),
		.src_V_pixel_19_g_TVALID(src_V_pixel_19_g_TVALID),
		.src_V_pixel_19_g_TREADY(src_V_pixel_19_g_TREADY),
		.src_V_pixel_20_g_TDATA(src_V_pixel_20_g_TDATA),
		.src_V_pixel_20_g_TVALID(src_V_pixel_20_g_TVALID),
		.src_V_pixel_20_g_TREADY(src_V_pixel_20_g_TREADY),
		.src_V_pixel_21_g_TDATA(src_V_pixel_21_g_TDATA),
		.src_V_pixel_21_g_TVALID(src_V_pixel_21_g_TVALID),
		.src_V_pixel_21_g_TREADY(src_V_pixel_21_g_TREADY),
		.src_V_pixel_22_g_TDATA(src_V_pixel_22_g_TDATA),
		.src_V_pixel_22_g_TVALID(src_V_pixel_22_g_TVALID),
		.src_V_pixel_22_g_TREADY(src_V_pixel_22_g_TREADY),
		.src_V_pixel_23_g_TDATA(src_V_pixel_23_g_TDATA),
		.src_V_pixel_23_g_TVALID(src_V_pixel_23_g_TVALID),
		.src_V_pixel_23_g_TREADY(src_V_pixel_23_g_TREADY),
		.src_V_pixel_24_g_TDATA(src_V_pixel_24_g_TDATA),
		.src_V_pixel_24_g_TVALID(src_V_pixel_24_g_TVALID),
		.src_V_pixel_24_g_TREADY(src_V_pixel_24_g_TREADY),
		.src_V_pixel_25_g_TDATA(src_V_pixel_25_g_TDATA),
		.src_V_pixel_25_g_TVALID(src_V_pixel_25_g_TVALID),
		.src_V_pixel_25_g_TREADY(src_V_pixel_25_g_TREADY),
		.src_V_pixel_26_g_TDATA(src_V_pixel_26_g_TDATA),
		.src_V_pixel_26_g_TVALID(src_V_pixel_26_g_TVALID),
		.src_V_pixel_26_g_TREADY(src_V_pixel_26_g_TREADY),
		.src_V_pixel_27_g_TDATA(src_V_pixel_27_g_TDATA),
		.src_V_pixel_27_g_TVALID(src_V_pixel_27_g_TVALID),
		.src_V_pixel_27_g_TREADY(src_V_pixel_27_g_TREADY),
		.src_V_pixel_28_g_TDATA(src_V_pixel_28_g_TDATA),
		.src_V_pixel_28_g_TVALID(src_V_pixel_28_g_TVALID),
		.src_V_pixel_28_g_TREADY(src_V_pixel_28_g_TREADY),
		.src_V_pixel_29_g_TDATA(src_V_pixel_29_g_TDATA),
		.src_V_pixel_29_g_TVALID(src_V_pixel_29_g_TVALID),
		.src_V_pixel_29_g_TREADY(src_V_pixel_29_g_TREADY),
		.src_V_pixel_30_g_TDATA(src_V_pixel_30_g_TDATA),
		.src_V_pixel_30_g_TVALID(src_V_pixel_30_g_TVALID),
		.src_V_pixel_30_g_TREADY(src_V_pixel_30_g_TREADY),
		.src_V_pixel_31_g_TDATA(src_V_pixel_31_g_TDATA),
		.src_V_pixel_31_g_TVALID(src_V_pixel_31_g_TVALID),
		.src_V_pixel_31_g_TREADY(src_V_pixel_31_g_TREADY),
		.src_V_pixel_32_g_TDATA(src_V_pixel_32_g_TDATA),
		.src_V_pixel_32_g_TVALID(src_V_pixel_32_g_TVALID),
		.src_V_pixel_32_g_TREADY(src_V_pixel_32_g_TREADY),
		.src_V_pixel_33_g_TDATA(src_V_pixel_33_g_TDATA),
		.src_V_pixel_33_g_TVALID(src_V_pixel_33_g_TVALID),
		.src_V_pixel_33_g_TREADY(src_V_pixel_33_g_TREADY),
		.src_V_pixel_34_g_TDATA(src_V_pixel_34_g_TDATA),
		.src_V_pixel_34_g_TVALID(src_V_pixel_34_g_TVALID),
		.src_V_pixel_34_g_TREADY(src_V_pixel_34_g_TREADY),
		.src_V_pixel_35_g_TDATA(src_V_pixel_35_g_TDATA),
		.src_V_pixel_35_g_TVALID(src_V_pixel_35_g_TVALID),
		.src_V_pixel_35_g_TREADY(src_V_pixel_35_g_TREADY),
		.src_V_pixel_36_g_TDATA(src_V_pixel_36_g_TDATA),
		.src_V_pixel_36_g_TVALID(src_V_pixel_36_g_TVALID),
		.src_V_pixel_36_g_TREADY(src_V_pixel_36_g_TREADY),
		.src_V_pixel_37_g_TDATA(src_V_pixel_37_g_TDATA),
		.src_V_pixel_37_g_TVALID(src_V_pixel_37_g_TVALID),
		.src_V_pixel_37_g_TREADY(src_V_pixel_37_g_TREADY),
		.src_V_pixel_38_g_TDATA(src_V_pixel_38_g_TDATA),
		.src_V_pixel_38_g_TVALID(src_V_pixel_38_g_TVALID),
		.src_V_pixel_38_g_TREADY(src_V_pixel_38_g_TREADY),
		.src_V_pixel_39_g_TDATA(src_V_pixel_39_g_TDATA),
		.src_V_pixel_39_g_TVALID(src_V_pixel_39_g_TVALID),
		.src_V_pixel_39_g_TREADY(src_V_pixel_39_g_TREADY),
		.src_V_pixel_40_g_TDATA(src_V_pixel_40_g_TDATA),
		.src_V_pixel_40_g_TVALID(src_V_pixel_40_g_TVALID),
		.src_V_pixel_40_g_TREADY(src_V_pixel_40_g_TREADY),
		.src_V_pixel_41_g_TDATA(src_V_pixel_41_g_TDATA),
		.src_V_pixel_41_g_TVALID(src_V_pixel_41_g_TVALID),
		.src_V_pixel_41_g_TREADY(src_V_pixel_41_g_TREADY),
		.src_V_pixel_42_g_TDATA(src_V_pixel_42_g_TDATA),
		.src_V_pixel_42_g_TVALID(src_V_pixel_42_g_TVALID),
		.src_V_pixel_42_g_TREADY(src_V_pixel_42_g_TREADY),
		.src_V_pixel_43_g_TDATA(src_V_pixel_43_g_TDATA),
		.src_V_pixel_43_g_TVALID(src_V_pixel_43_g_TVALID),
		.src_V_pixel_43_g_TREADY(src_V_pixel_43_g_TREADY),
		.src_V_pixel_44_g_TDATA(src_V_pixel_44_g_TDATA),
		.src_V_pixel_44_g_TVALID(src_V_pixel_44_g_TVALID),
		.src_V_pixel_44_g_TREADY(src_V_pixel_44_g_TREADY),
		.src_V_pixel_45_g_TDATA(src_V_pixel_45_g_TDATA),
		.src_V_pixel_45_g_TVALID(src_V_pixel_45_g_TVALID),
		.src_V_pixel_45_g_TREADY(src_V_pixel_45_g_TREADY),
		.src_V_pixel_46_g_TDATA(src_V_pixel_46_g_TDATA),
		.src_V_pixel_46_g_TVALID(src_V_pixel_46_g_TVALID),
		.src_V_pixel_46_g_TREADY(src_V_pixel_46_g_TREADY),
		.src_V_pixel_47_g_TDATA(src_V_pixel_47_g_TDATA),
		.src_V_pixel_47_g_TVALID(src_V_pixel_47_g_TVALID),
		.src_V_pixel_47_g_TREADY(src_V_pixel_47_g_TREADY),
		.src_V_pixel_48_g_TDATA(src_V_pixel_48_g_TDATA),
		.src_V_pixel_48_g_TVALID(src_V_pixel_48_g_TVALID),
		.src_V_pixel_48_g_TREADY(src_V_pixel_48_g_TREADY),
		.src_V_pixel_49_g_TDATA(src_V_pixel_49_g_TDATA),
		.src_V_pixel_49_g_TVALID(src_V_pixel_49_g_TVALID),
		.src_V_pixel_49_g_TREADY(src_V_pixel_49_g_TREADY),
		.src_V_pixel_50_g_TDATA(src_V_pixel_50_g_TDATA),
		.src_V_pixel_50_g_TVALID(src_V_pixel_50_g_TVALID),
		.src_V_pixel_50_g_TREADY(src_V_pixel_50_g_TREADY),
		.src_V_pixel_51_g_TDATA(src_V_pixel_51_g_TDATA),
		.src_V_pixel_51_g_TVALID(src_V_pixel_51_g_TVALID),
		.src_V_pixel_51_g_TREADY(src_V_pixel_51_g_TREADY),
		.src_V_pixel_52_g_TDATA(src_V_pixel_52_g_TDATA),
		.src_V_pixel_52_g_TVALID(src_V_pixel_52_g_TVALID),
		.src_V_pixel_52_g_TREADY(src_V_pixel_52_g_TREADY),
		.src_V_pixel_53_g_TDATA(src_V_pixel_53_g_TDATA),
		.src_V_pixel_53_g_TVALID(src_V_pixel_53_g_TVALID),
		.src_V_pixel_53_g_TREADY(src_V_pixel_53_g_TREADY),
		.src_V_pixel_54_g_TDATA(src_V_pixel_54_g_TDATA),
		.src_V_pixel_54_g_TVALID(src_V_pixel_54_g_TVALID),
		.src_V_pixel_54_g_TREADY(src_V_pixel_54_g_TREADY),
		.src_V_pixel_55_g_TDATA(src_V_pixel_55_g_TDATA),
		.src_V_pixel_55_g_TVALID(src_V_pixel_55_g_TVALID),
		.src_V_pixel_55_g_TREADY(src_V_pixel_55_g_TREADY),
		.src_V_pixel_56_g_TDATA(src_V_pixel_56_g_TDATA),
		.src_V_pixel_56_g_TVALID(src_V_pixel_56_g_TVALID),
		.src_V_pixel_56_g_TREADY(src_V_pixel_56_g_TREADY),
		.src_V_pixel_57_g_TDATA(src_V_pixel_57_g_TDATA),
		.src_V_pixel_57_g_TVALID(src_V_pixel_57_g_TVALID),
		.src_V_pixel_57_g_TREADY(src_V_pixel_57_g_TREADY),
		.src_V_pixel_58_g_TDATA(src_V_pixel_58_g_TDATA),
		.src_V_pixel_58_g_TVALID(src_V_pixel_58_g_TVALID),
		.src_V_pixel_58_g_TREADY(src_V_pixel_58_g_TREADY),
		.src_V_pixel_59_g_TDATA(src_V_pixel_59_g_TDATA),
		.src_V_pixel_59_g_TVALID(src_V_pixel_59_g_TVALID),
		.src_V_pixel_59_g_TREADY(src_V_pixel_59_g_TREADY),
		.src_V_pixel_60_g_TDATA(src_V_pixel_60_g_TDATA),
		.src_V_pixel_60_g_TVALID(src_V_pixel_60_g_TVALID),
		.src_V_pixel_60_g_TREADY(src_V_pixel_60_g_TREADY),
		.src_V_pixel_61_g_TDATA(src_V_pixel_61_g_TDATA),
		.src_V_pixel_61_g_TVALID(src_V_pixel_61_g_TVALID),
		.src_V_pixel_61_g_TREADY(src_V_pixel_61_g_TREADY),
		.src_V_pixel_62_g_TDATA(src_V_pixel_62_g_TDATA),
		.src_V_pixel_62_g_TVALID(src_V_pixel_62_g_TVALID),
		.src_V_pixel_62_g_TREADY(src_V_pixel_62_g_TREADY),
		.src_V_pixel_63_g_TDATA(src_V_pixel_63_g_TDATA),
		.src_V_pixel_63_g_TVALID(src_V_pixel_63_g_TVALID),
		.src_V_pixel_63_g_TREADY(src_V_pixel_63_g_TREADY),
		.src_V_pixel_64_g_TDATA(src_V_pixel_64_g_TDATA),
		.src_V_pixel_64_g_TVALID(src_V_pixel_64_g_TVALID),
		.src_V_pixel_64_g_TREADY(src_V_pixel_64_g_TREADY),
		.src_V_pixel_65_g_TDATA(src_V_pixel_65_g_TDATA),
		.src_V_pixel_65_g_TVALID(src_V_pixel_65_g_TVALID),
		.src_V_pixel_65_g_TREADY(src_V_pixel_65_g_TREADY),
		.src_V_pixel_66_g_TDATA(src_V_pixel_66_g_TDATA),
		.src_V_pixel_66_g_TVALID(src_V_pixel_66_g_TVALID),
		.src_V_pixel_66_g_TREADY(src_V_pixel_66_g_TREADY),
		.src_V_pixel_67_g_TDATA(src_V_pixel_67_g_TDATA),
		.src_V_pixel_67_g_TVALID(src_V_pixel_67_g_TVALID),
		.src_V_pixel_67_g_TREADY(src_V_pixel_67_g_TREADY),
		.src_V_pixel_68_g_TDATA(src_V_pixel_68_g_TDATA),
		.src_V_pixel_68_g_TVALID(src_V_pixel_68_g_TVALID),
		.src_V_pixel_68_g_TREADY(src_V_pixel_68_g_TREADY),
		.src_V_pixel_69_g_TDATA(src_V_pixel_69_g_TDATA),
		.src_V_pixel_69_g_TVALID(src_V_pixel_69_g_TVALID),
		.src_V_pixel_69_g_TREADY(src_V_pixel_69_g_TREADY),
		.src_V_pixel_70_g_TDATA(src_V_pixel_70_g_TDATA),
		.src_V_pixel_70_g_TVALID(src_V_pixel_70_g_TVALID),
		.src_V_pixel_70_g_TREADY(src_V_pixel_70_g_TREADY),
		.src_V_pixel_0_b_TDATA(src_V_pixel_0_b_TDATA),
		.src_V_pixel_0_b_TVALID(src_V_pixel_0_b_TVALID),
		.src_V_pixel_0_b_TREADY(src_V_pixel_0_b_TREADY),
		.src_V_pixel_1_b_TDATA(src_V_pixel_1_b_TDATA),
		.src_V_pixel_1_b_TVALID(src_V_pixel_1_b_TVALID),
		.src_V_pixel_1_b_TREADY(src_V_pixel_1_b_TREADY),
		.src_V_pixel_2_b_TDATA(src_V_pixel_2_b_TDATA),
		.src_V_pixel_2_b_TVALID(src_V_pixel_2_b_TVALID),
		.src_V_pixel_2_b_TREADY(src_V_pixel_2_b_TREADY),
		.src_V_pixel_3_b_TDATA(src_V_pixel_3_b_TDATA),
		.src_V_pixel_3_b_TVALID(src_V_pixel_3_b_TVALID),
		.src_V_pixel_3_b_TREADY(src_V_pixel_3_b_TREADY),
		.src_V_pixel_4_b_TDATA(src_V_pixel_4_b_TDATA),
		.src_V_pixel_4_b_TVALID(src_V_pixel_4_b_TVALID),
		.src_V_pixel_4_b_TREADY(src_V_pixel_4_b_TREADY),
		.src_V_pixel_5_b_TDATA(src_V_pixel_5_b_TDATA),
		.src_V_pixel_5_b_TVALID(src_V_pixel_5_b_TVALID),
		.src_V_pixel_5_b_TREADY(src_V_pixel_5_b_TREADY),
		.src_V_pixel_6_b_TDATA(src_V_pixel_6_b_TDATA),
		.src_V_pixel_6_b_TVALID(src_V_pixel_6_b_TVALID),
		.src_V_pixel_6_b_TREADY(src_V_pixel_6_b_TREADY),
		.src_V_pixel_7_b_TDATA(src_V_pixel_7_b_TDATA),
		.src_V_pixel_7_b_TVALID(src_V_pixel_7_b_TVALID),
		.src_V_pixel_7_b_TREADY(src_V_pixel_7_b_TREADY),
		.src_V_pixel_8_b_TDATA(src_V_pixel_8_b_TDATA),
		.src_V_pixel_8_b_TVALID(src_V_pixel_8_b_TVALID),
		.src_V_pixel_8_b_TREADY(src_V_pixel_8_b_TREADY),
		.src_V_pixel_9_b_TDATA(src_V_pixel_9_b_TDATA),
		.src_V_pixel_9_b_TVALID(src_V_pixel_9_b_TVALID),
		.src_V_pixel_9_b_TREADY(src_V_pixel_9_b_TREADY),
		.src_V_pixel_10_b_TDATA(src_V_pixel_10_b_TDATA),
		.src_V_pixel_10_b_TVALID(src_V_pixel_10_b_TVALID),
		.src_V_pixel_10_b_TREADY(src_V_pixel_10_b_TREADY),
		.src_V_pixel_11_b_TDATA(src_V_pixel_11_b_TDATA),
		.src_V_pixel_11_b_TVALID(src_V_pixel_11_b_TVALID),
		.src_V_pixel_11_b_TREADY(src_V_pixel_11_b_TREADY),
		.src_V_pixel_12_b_TDATA(src_V_pixel_12_b_TDATA),
		.src_V_pixel_12_b_TVALID(src_V_pixel_12_b_TVALID),
		.src_V_pixel_12_b_TREADY(src_V_pixel_12_b_TREADY),
		.src_V_pixel_13_b_TDATA(src_V_pixel_13_b_TDATA),
		.src_V_pixel_13_b_TVALID(src_V_pixel_13_b_TVALID),
		.src_V_pixel_13_b_TREADY(src_V_pixel_13_b_TREADY),
		.src_V_pixel_14_b_TDATA(src_V_pixel_14_b_TDATA),
		.src_V_pixel_14_b_TVALID(src_V_pixel_14_b_TVALID),
		.src_V_pixel_14_b_TREADY(src_V_pixel_14_b_TREADY),
		.src_V_pixel_15_b_TDATA(src_V_pixel_15_b_TDATA),
		.src_V_pixel_15_b_TVALID(src_V_pixel_15_b_TVALID),
		.src_V_pixel_15_b_TREADY(src_V_pixel_15_b_TREADY),
		.src_V_pixel_16_b_TDATA(src_V_pixel_16_b_TDATA),
		.src_V_pixel_16_b_TVALID(src_V_pixel_16_b_TVALID),
		.src_V_pixel_16_b_TREADY(src_V_pixel_16_b_TREADY),
		.src_V_pixel_17_b_TDATA(src_V_pixel_17_b_TDATA),
		.src_V_pixel_17_b_TVALID(src_V_pixel_17_b_TVALID),
		.src_V_pixel_17_b_TREADY(src_V_pixel_17_b_TREADY),
		.src_V_pixel_18_b_TDATA(src_V_pixel_18_b_TDATA),
		.src_V_pixel_18_b_TVALID(src_V_pixel_18_b_TVALID),
		.src_V_pixel_18_b_TREADY(src_V_pixel_18_b_TREADY),
		.src_V_pixel_19_b_TDATA(src_V_pixel_19_b_TDATA),
		.src_V_pixel_19_b_TVALID(src_V_pixel_19_b_TVALID),
		.src_V_pixel_19_b_TREADY(src_V_pixel_19_b_TREADY),
		.src_V_pixel_20_b_TDATA(src_V_pixel_20_b_TDATA),
		.src_V_pixel_20_b_TVALID(src_V_pixel_20_b_TVALID),
		.src_V_pixel_20_b_TREADY(src_V_pixel_20_b_TREADY),
		.src_V_pixel_21_b_TDATA(src_V_pixel_21_b_TDATA),
		.src_V_pixel_21_b_TVALID(src_V_pixel_21_b_TVALID),
		.src_V_pixel_21_b_TREADY(src_V_pixel_21_b_TREADY),
		.src_V_pixel_22_b_TDATA(src_V_pixel_22_b_TDATA),
		.src_V_pixel_22_b_TVALID(src_V_pixel_22_b_TVALID),
		.src_V_pixel_22_b_TREADY(src_V_pixel_22_b_TREADY),
		.src_V_pixel_23_b_TDATA(src_V_pixel_23_b_TDATA),
		.src_V_pixel_23_b_TVALID(src_V_pixel_23_b_TVALID),
		.src_V_pixel_23_b_TREADY(src_V_pixel_23_b_TREADY),
		.src_V_pixel_24_b_TDATA(src_V_pixel_24_b_TDATA),
		.src_V_pixel_24_b_TVALID(src_V_pixel_24_b_TVALID),
		.src_V_pixel_24_b_TREADY(src_V_pixel_24_b_TREADY),
		.src_V_pixel_25_b_TDATA(src_V_pixel_25_b_TDATA),
		.src_V_pixel_25_b_TVALID(src_V_pixel_25_b_TVALID),
		.src_V_pixel_25_b_TREADY(src_V_pixel_25_b_TREADY),
		.src_V_pixel_26_b_TDATA(src_V_pixel_26_b_TDATA),
		.src_V_pixel_26_b_TVALID(src_V_pixel_26_b_TVALID),
		.src_V_pixel_26_b_TREADY(src_V_pixel_26_b_TREADY),
		.src_V_pixel_27_b_TDATA(src_V_pixel_27_b_TDATA),
		.src_V_pixel_27_b_TVALID(src_V_pixel_27_b_TVALID),
		.src_V_pixel_27_b_TREADY(src_V_pixel_27_b_TREADY),
		.src_V_pixel_28_b_TDATA(src_V_pixel_28_b_TDATA),
		.src_V_pixel_28_b_TVALID(src_V_pixel_28_b_TVALID),
		.src_V_pixel_28_b_TREADY(src_V_pixel_28_b_TREADY),
		.src_V_pixel_29_b_TDATA(src_V_pixel_29_b_TDATA),
		.src_V_pixel_29_b_TVALID(src_V_pixel_29_b_TVALID),
		.src_V_pixel_29_b_TREADY(src_V_pixel_29_b_TREADY),
		.src_V_pixel_30_b_TDATA(src_V_pixel_30_b_TDATA),
		.src_V_pixel_30_b_TVALID(src_V_pixel_30_b_TVALID),
		.src_V_pixel_30_b_TREADY(src_V_pixel_30_b_TREADY),
		.src_V_pixel_31_b_TDATA(src_V_pixel_31_b_TDATA),
		.src_V_pixel_31_b_TVALID(src_V_pixel_31_b_TVALID),
		.src_V_pixel_31_b_TREADY(src_V_pixel_31_b_TREADY),
		.src_V_pixel_32_b_TDATA(src_V_pixel_32_b_TDATA),
		.src_V_pixel_32_b_TVALID(src_V_pixel_32_b_TVALID),
		.src_V_pixel_32_b_TREADY(src_V_pixel_32_b_TREADY),
		.src_V_pixel_33_b_TDATA(src_V_pixel_33_b_TDATA),
		.src_V_pixel_33_b_TVALID(src_V_pixel_33_b_TVALID),
		.src_V_pixel_33_b_TREADY(src_V_pixel_33_b_TREADY),
		.src_V_pixel_34_b_TDATA(src_V_pixel_34_b_TDATA),
		.src_V_pixel_34_b_TVALID(src_V_pixel_34_b_TVALID),
		.src_V_pixel_34_b_TREADY(src_V_pixel_34_b_TREADY),
		.src_V_pixel_35_b_TDATA(src_V_pixel_35_b_TDATA),
		.src_V_pixel_35_b_TVALID(src_V_pixel_35_b_TVALID),
		.src_V_pixel_35_b_TREADY(src_V_pixel_35_b_TREADY),
		.src_V_pixel_36_b_TDATA(src_V_pixel_36_b_TDATA),
		.src_V_pixel_36_b_TVALID(src_V_pixel_36_b_TVALID),
		.src_V_pixel_36_b_TREADY(src_V_pixel_36_b_TREADY),
		.src_V_pixel_37_b_TDATA(src_V_pixel_37_b_TDATA),
		.src_V_pixel_37_b_TVALID(src_V_pixel_37_b_TVALID),
		.src_V_pixel_37_b_TREADY(src_V_pixel_37_b_TREADY),
		.src_V_pixel_38_b_TDATA(src_V_pixel_38_b_TDATA),
		.src_V_pixel_38_b_TVALID(src_V_pixel_38_b_TVALID),
		.src_V_pixel_38_b_TREADY(src_V_pixel_38_b_TREADY),
		.src_V_pixel_39_b_TDATA(src_V_pixel_39_b_TDATA),
		.src_V_pixel_39_b_TVALID(src_V_pixel_39_b_TVALID),
		.src_V_pixel_39_b_TREADY(src_V_pixel_39_b_TREADY),
		.src_V_pixel_40_b_TDATA(src_V_pixel_40_b_TDATA),
		.src_V_pixel_40_b_TVALID(src_V_pixel_40_b_TVALID),
		.src_V_pixel_40_b_TREADY(src_V_pixel_40_b_TREADY),
		.src_V_pixel_41_b_TDATA(src_V_pixel_41_b_TDATA),
		.src_V_pixel_41_b_TVALID(src_V_pixel_41_b_TVALID),
		.src_V_pixel_41_b_TREADY(src_V_pixel_41_b_TREADY),
		.src_V_pixel_42_b_TDATA(src_V_pixel_42_b_TDATA),
		.src_V_pixel_42_b_TVALID(src_V_pixel_42_b_TVALID),
		.src_V_pixel_42_b_TREADY(src_V_pixel_42_b_TREADY),
		.src_V_pixel_43_b_TDATA(src_V_pixel_43_b_TDATA),
		.src_V_pixel_43_b_TVALID(src_V_pixel_43_b_TVALID),
		.src_V_pixel_43_b_TREADY(src_V_pixel_43_b_TREADY),
		.src_V_pixel_44_b_TDATA(src_V_pixel_44_b_TDATA),
		.src_V_pixel_44_b_TVALID(src_V_pixel_44_b_TVALID),
		.src_V_pixel_44_b_TREADY(src_V_pixel_44_b_TREADY),
		.src_V_pixel_45_b_TDATA(src_V_pixel_45_b_TDATA),
		.src_V_pixel_45_b_TVALID(src_V_pixel_45_b_TVALID),
		.src_V_pixel_45_b_TREADY(src_V_pixel_45_b_TREADY),
		.src_V_pixel_46_b_TDATA(src_V_pixel_46_b_TDATA),
		.src_V_pixel_46_b_TVALID(src_V_pixel_46_b_TVALID),
		.src_V_pixel_46_b_TREADY(src_V_pixel_46_b_TREADY),
		.src_V_pixel_47_b_TDATA(src_V_pixel_47_b_TDATA),
		.src_V_pixel_47_b_TVALID(src_V_pixel_47_b_TVALID),
		.src_V_pixel_47_b_TREADY(src_V_pixel_47_b_TREADY),
		.src_V_pixel_48_b_TDATA(src_V_pixel_48_b_TDATA),
		.src_V_pixel_48_b_TVALID(src_V_pixel_48_b_TVALID),
		.src_V_pixel_48_b_TREADY(src_V_pixel_48_b_TREADY),
		.src_V_pixel_49_b_TDATA(src_V_pixel_49_b_TDATA),
		.src_V_pixel_49_b_TVALID(src_V_pixel_49_b_TVALID),
		.src_V_pixel_49_b_TREADY(src_V_pixel_49_b_TREADY),
		.src_V_pixel_50_b_TDATA(src_V_pixel_50_b_TDATA),
		.src_V_pixel_50_b_TVALID(src_V_pixel_50_b_TVALID),
		.src_V_pixel_50_b_TREADY(src_V_pixel_50_b_TREADY),
		.src_V_pixel_51_b_TDATA(src_V_pixel_51_b_TDATA),
		.src_V_pixel_51_b_TVALID(src_V_pixel_51_b_TVALID),
		.src_V_pixel_51_b_TREADY(src_V_pixel_51_b_TREADY),
		.src_V_pixel_52_b_TDATA(src_V_pixel_52_b_TDATA),
		.src_V_pixel_52_b_TVALID(src_V_pixel_52_b_TVALID),
		.src_V_pixel_52_b_TREADY(src_V_pixel_52_b_TREADY),
		.src_V_pixel_53_b_TDATA(src_V_pixel_53_b_TDATA),
		.src_V_pixel_53_b_TVALID(src_V_pixel_53_b_TVALID),
		.src_V_pixel_53_b_TREADY(src_V_pixel_53_b_TREADY),
		.src_V_pixel_54_b_TDATA(src_V_pixel_54_b_TDATA),
		.src_V_pixel_54_b_TVALID(src_V_pixel_54_b_TVALID),
		.src_V_pixel_54_b_TREADY(src_V_pixel_54_b_TREADY),
		.src_V_pixel_55_b_TDATA(src_V_pixel_55_b_TDATA),
		.src_V_pixel_55_b_TVALID(src_V_pixel_55_b_TVALID),
		.src_V_pixel_55_b_TREADY(src_V_pixel_55_b_TREADY),
		.src_V_pixel_56_b_TDATA(src_V_pixel_56_b_TDATA),
		.src_V_pixel_56_b_TVALID(src_V_pixel_56_b_TVALID),
		.src_V_pixel_56_b_TREADY(src_V_pixel_56_b_TREADY),
		.src_V_pixel_57_b_TDATA(src_V_pixel_57_b_TDATA),
		.src_V_pixel_57_b_TVALID(src_V_pixel_57_b_TVALID),
		.src_V_pixel_57_b_TREADY(src_V_pixel_57_b_TREADY),
		.src_V_pixel_58_b_TDATA(src_V_pixel_58_b_TDATA),
		.src_V_pixel_58_b_TVALID(src_V_pixel_58_b_TVALID),
		.src_V_pixel_58_b_TREADY(src_V_pixel_58_b_TREADY),
		.src_V_pixel_59_b_TDATA(src_V_pixel_59_b_TDATA),
		.src_V_pixel_59_b_TVALID(src_V_pixel_59_b_TVALID),
		.src_V_pixel_59_b_TREADY(src_V_pixel_59_b_TREADY),
		.src_V_pixel_60_b_TDATA(src_V_pixel_60_b_TDATA),
		.src_V_pixel_60_b_TVALID(src_V_pixel_60_b_TVALID),
		.src_V_pixel_60_b_TREADY(src_V_pixel_60_b_TREADY),
		.src_V_pixel_61_b_TDATA(src_V_pixel_61_b_TDATA),
		.src_V_pixel_61_b_TVALID(src_V_pixel_61_b_TVALID),
		.src_V_pixel_61_b_TREADY(src_V_pixel_61_b_TREADY),
		.src_V_pixel_62_b_TDATA(src_V_pixel_62_b_TDATA),
		.src_V_pixel_62_b_TVALID(src_V_pixel_62_b_TVALID),
		.src_V_pixel_62_b_TREADY(src_V_pixel_62_b_TREADY),
		.src_V_pixel_63_b_TDATA(src_V_pixel_63_b_TDATA),
		.src_V_pixel_63_b_TVALID(src_V_pixel_63_b_TVALID),
		.src_V_pixel_63_b_TREADY(src_V_pixel_63_b_TREADY),
		.src_V_pixel_64_b_TDATA(src_V_pixel_64_b_TDATA),
		.src_V_pixel_64_b_TVALID(src_V_pixel_64_b_TVALID),
		.src_V_pixel_64_b_TREADY(src_V_pixel_64_b_TREADY),
		.src_V_pixel_65_b_TDATA(src_V_pixel_65_b_TDATA),
		.src_V_pixel_65_b_TVALID(src_V_pixel_65_b_TVALID),
		.src_V_pixel_65_b_TREADY(src_V_pixel_65_b_TREADY),
		.src_V_pixel_66_b_TDATA(src_V_pixel_66_b_TDATA),
		.src_V_pixel_66_b_TVALID(src_V_pixel_66_b_TVALID),
		.src_V_pixel_66_b_TREADY(src_V_pixel_66_b_TREADY),
		.src_V_pixel_67_b_TDATA(src_V_pixel_67_b_TDATA),
		.src_V_pixel_67_b_TVALID(src_V_pixel_67_b_TVALID),
		.src_V_pixel_67_b_TREADY(src_V_pixel_67_b_TREADY),
		.src_V_pixel_68_b_TDATA(src_V_pixel_68_b_TDATA),
		.src_V_pixel_68_b_TVALID(src_V_pixel_68_b_TVALID),
		.src_V_pixel_68_b_TREADY(src_V_pixel_68_b_TREADY),
		.src_V_pixel_69_b_TDATA(src_V_pixel_69_b_TDATA),
		.src_V_pixel_69_b_TVALID(src_V_pixel_69_b_TVALID),
		.src_V_pixel_69_b_TREADY(src_V_pixel_69_b_TREADY),
		.src_V_pixel_70_b_TDATA(src_V_pixel_70_b_TDATA),
		.src_V_pixel_70_b_TVALID(src_V_pixel_70_b_TVALID),
		.src_V_pixel_70_b_TREADY(src_V_pixel_70_b_TREADY),
		.mag_V_pixel_0_TDATA(mag_V_pixel_0_TDATA),
		.mag_V_pixel_0_TVALID(mag_V_pixel_0_TVALID),
		.mag_V_pixel_0_TREADY(mag_V_pixel_0_TREADY),
		.mag_V_pixel_1_TDATA(mag_V_pixel_1_TDATA),
		.mag_V_pixel_1_TVALID(mag_V_pixel_1_TVALID),
		.mag_V_pixel_1_TREADY(mag_V_pixel_1_TREADY),
		.mag_V_pixel_2_TDATA(mag_V_pixel_2_TDATA),
		.mag_V_pixel_2_TVALID(mag_V_pixel_2_TVALID),
		.mag_V_pixel_2_TREADY(mag_V_pixel_2_TREADY),
		.mag_V_pixel_3_TDATA(mag_V_pixel_3_TDATA),
		.mag_V_pixel_3_TVALID(mag_V_pixel_3_TVALID),
		.mag_V_pixel_3_TREADY(mag_V_pixel_3_TREADY),
		.mag_V_pixel_4_TDATA(mag_V_pixel_4_TDATA),
		.mag_V_pixel_4_TVALID(mag_V_pixel_4_TVALID),
		.mag_V_pixel_4_TREADY(mag_V_pixel_4_TREADY),
		.mag_V_pixel_5_TDATA(mag_V_pixel_5_TDATA),
		.mag_V_pixel_5_TVALID(mag_V_pixel_5_TVALID),
		.mag_V_pixel_5_TREADY(mag_V_pixel_5_TREADY),
		.mag_V_pixel_6_TDATA(mag_V_pixel_6_TDATA),
		.mag_V_pixel_6_TVALID(mag_V_pixel_6_TVALID),
		.mag_V_pixel_6_TREADY(mag_V_pixel_6_TREADY),
		.mag_V_pixel_7_TDATA(mag_V_pixel_7_TDATA),
		.mag_V_pixel_7_TVALID(mag_V_pixel_7_TVALID),
		.mag_V_pixel_7_TREADY(mag_V_pixel_7_TREADY),
		.mag_V_pixel_8_TDATA(mag_V_pixel_8_TDATA),
		.mag_V_pixel_8_TVALID(mag_V_pixel_8_TVALID),
		.mag_V_pixel_8_TREADY(mag_V_pixel_8_TREADY),
		.mag_V_pixel_9_TDATA(mag_V_pixel_9_TDATA),
		.mag_V_pixel_9_TVALID(mag_V_pixel_9_TVALID),
		.mag_V_pixel_9_TREADY(mag_V_pixel_9_TREADY),
		.mag_V_pixel_10_TDATA(mag_V_pixel_10_TDATA),
		.mag_V_pixel_10_TVALID(mag_V_pixel_10_TVALID),
		.mag_V_pixel_10_TREADY(mag_V_pixel_10_TREADY),
		.mag_V_pixel_11_TDATA(mag_V_pixel_11_TDATA),
		.mag_V_pixel_11_TVALID(mag_V_pixel_11_TVALID),
		.mag_V_pixel_11_TREADY(mag_V_pixel_11_TREADY),
		.mag_V_pixel_12_TDATA(mag_V_pixel_12_TDATA),
		.mag_V_pixel_12_TVALID(mag_V_pixel_12_TVALID),
		.mag_V_pixel_12_TREADY(mag_V_pixel_12_TREADY),
		.mag_V_pixel_13_TDATA(mag_V_pixel_13_TDATA),
		.mag_V_pixel_13_TVALID(mag_V_pixel_13_TVALID),
		.mag_V_pixel_13_TREADY(mag_V_pixel_13_TREADY),
		.mag_V_pixel_14_TDATA(mag_V_pixel_14_TDATA),
		.mag_V_pixel_14_TVALID(mag_V_pixel_14_TVALID),
		.mag_V_pixel_14_TREADY(mag_V_pixel_14_TREADY),
		.mag_V_pixel_15_TDATA(mag_V_pixel_15_TDATA),
		.mag_V_pixel_15_TVALID(mag_V_pixel_15_TVALID),
		.mag_V_pixel_15_TREADY(mag_V_pixel_15_TREADY),
		.mag_V_pixel_16_TDATA(mag_V_pixel_16_TDATA),
		.mag_V_pixel_16_TVALID(mag_V_pixel_16_TVALID),
		.mag_V_pixel_16_TREADY(mag_V_pixel_16_TREADY),
		.mag_V_pixel_17_TDATA(mag_V_pixel_17_TDATA),
		.mag_V_pixel_17_TVALID(mag_V_pixel_17_TVALID),
		.mag_V_pixel_17_TREADY(mag_V_pixel_17_TREADY),
		.mag_V_pixel_18_TDATA(mag_V_pixel_18_TDATA),
		.mag_V_pixel_18_TVALID(mag_V_pixel_18_TVALID),
		.mag_V_pixel_18_TREADY(mag_V_pixel_18_TREADY),
		.mag_V_pixel_19_TDATA(mag_V_pixel_19_TDATA),
		.mag_V_pixel_19_TVALID(mag_V_pixel_19_TVALID),
		.mag_V_pixel_19_TREADY(mag_V_pixel_19_TREADY),
		.mag_V_pixel_20_TDATA(mag_V_pixel_20_TDATA),
		.mag_V_pixel_20_TVALID(mag_V_pixel_20_TVALID),
		.mag_V_pixel_20_TREADY(mag_V_pixel_20_TREADY),
		.mag_V_pixel_21_TDATA(mag_V_pixel_21_TDATA),
		.mag_V_pixel_21_TVALID(mag_V_pixel_21_TVALID),
		.mag_V_pixel_21_TREADY(mag_V_pixel_21_TREADY),
		.mag_V_pixel_22_TDATA(mag_V_pixel_22_TDATA),
		.mag_V_pixel_22_TVALID(mag_V_pixel_22_TVALID),
		.mag_V_pixel_22_TREADY(mag_V_pixel_22_TREADY),
		.mag_V_pixel_23_TDATA(mag_V_pixel_23_TDATA),
		.mag_V_pixel_23_TVALID(mag_V_pixel_23_TVALID),
		.mag_V_pixel_23_TREADY(mag_V_pixel_23_TREADY),
		.mag_V_pixel_24_TDATA(mag_V_pixel_24_TDATA),
		.mag_V_pixel_24_TVALID(mag_V_pixel_24_TVALID),
		.mag_V_pixel_24_TREADY(mag_V_pixel_24_TREADY),
		.mag_V_pixel_25_TDATA(mag_V_pixel_25_TDATA),
		.mag_V_pixel_25_TVALID(mag_V_pixel_25_TVALID),
		.mag_V_pixel_25_TREADY(mag_V_pixel_25_TREADY),
		.mag_V_pixel_26_TDATA(mag_V_pixel_26_TDATA),
		.mag_V_pixel_26_TVALID(mag_V_pixel_26_TVALID),
		.mag_V_pixel_26_TREADY(mag_V_pixel_26_TREADY),
		.mag_V_pixel_27_TDATA(mag_V_pixel_27_TDATA),
		.mag_V_pixel_27_TVALID(mag_V_pixel_27_TVALID),
		.mag_V_pixel_27_TREADY(mag_V_pixel_27_TREADY),
		.mag_V_pixel_28_TDATA(mag_V_pixel_28_TDATA),
		.mag_V_pixel_28_TVALID(mag_V_pixel_28_TVALID),
		.mag_V_pixel_28_TREADY(mag_V_pixel_28_TREADY),
		.mag_V_pixel_29_TDATA(mag_V_pixel_29_TDATA),
		.mag_V_pixel_29_TVALID(mag_V_pixel_29_TVALID),
		.mag_V_pixel_29_TREADY(mag_V_pixel_29_TREADY),
		.mag_V_pixel_30_TDATA(mag_V_pixel_30_TDATA),
		.mag_V_pixel_30_TVALID(mag_V_pixel_30_TVALID),
		.mag_V_pixel_30_TREADY(mag_V_pixel_30_TREADY),
		.mag_V_pixel_31_TDATA(mag_V_pixel_31_TDATA),
		.mag_V_pixel_31_TVALID(mag_V_pixel_31_TVALID),
		.mag_V_pixel_31_TREADY(mag_V_pixel_31_TREADY),
		.mag_V_pixel_32_TDATA(mag_V_pixel_32_TDATA),
		.mag_V_pixel_32_TVALID(mag_V_pixel_32_TVALID),
		.mag_V_pixel_32_TREADY(mag_V_pixel_32_TREADY),
		.mag_V_pixel_33_TDATA(mag_V_pixel_33_TDATA),
		.mag_V_pixel_33_TVALID(mag_V_pixel_33_TVALID),
		.mag_V_pixel_33_TREADY(mag_V_pixel_33_TREADY),
		.mag_V_pixel_34_TDATA(mag_V_pixel_34_TDATA),
		.mag_V_pixel_34_TVALID(mag_V_pixel_34_TVALID),
		.mag_V_pixel_34_TREADY(mag_V_pixel_34_TREADY),
		.mag_V_pixel_35_TDATA(mag_V_pixel_35_TDATA),
		.mag_V_pixel_35_TVALID(mag_V_pixel_35_TVALID),
		.mag_V_pixel_35_TREADY(mag_V_pixel_35_TREADY),
		.mag_V_pixel_36_TDATA(mag_V_pixel_36_TDATA),
		.mag_V_pixel_36_TVALID(mag_V_pixel_36_TVALID),
		.mag_V_pixel_36_TREADY(mag_V_pixel_36_TREADY),
		.mag_V_pixel_37_TDATA(mag_V_pixel_37_TDATA),
		.mag_V_pixel_37_TVALID(mag_V_pixel_37_TVALID),
		.mag_V_pixel_37_TREADY(mag_V_pixel_37_TREADY),
		.mag_V_pixel_38_TDATA(mag_V_pixel_38_TDATA),
		.mag_V_pixel_38_TVALID(mag_V_pixel_38_TVALID),
		.mag_V_pixel_38_TREADY(mag_V_pixel_38_TREADY),
		.mag_V_pixel_39_TDATA(mag_V_pixel_39_TDATA),
		.mag_V_pixel_39_TVALID(mag_V_pixel_39_TVALID),
		.mag_V_pixel_39_TREADY(mag_V_pixel_39_TREADY),
		.mag_V_pixel_40_TDATA(mag_V_pixel_40_TDATA),
		.mag_V_pixel_40_TVALID(mag_V_pixel_40_TVALID),
		.mag_V_pixel_40_TREADY(mag_V_pixel_40_TREADY),
		.mag_V_pixel_41_TDATA(mag_V_pixel_41_TDATA),
		.mag_V_pixel_41_TVALID(mag_V_pixel_41_TVALID),
		.mag_V_pixel_41_TREADY(mag_V_pixel_41_TREADY),
		.mag_V_pixel_42_TDATA(mag_V_pixel_42_TDATA),
		.mag_V_pixel_42_TVALID(mag_V_pixel_42_TVALID),
		.mag_V_pixel_42_TREADY(mag_V_pixel_42_TREADY),
		.mag_V_pixel_43_TDATA(mag_V_pixel_43_TDATA),
		.mag_V_pixel_43_TVALID(mag_V_pixel_43_TVALID),
		.mag_V_pixel_43_TREADY(mag_V_pixel_43_TREADY),
		.mag_V_pixel_44_TDATA(mag_V_pixel_44_TDATA),
		.mag_V_pixel_44_TVALID(mag_V_pixel_44_TVALID),
		.mag_V_pixel_44_TREADY(mag_V_pixel_44_TREADY),
		.mag_V_pixel_45_TDATA(mag_V_pixel_45_TDATA),
		.mag_V_pixel_45_TVALID(mag_V_pixel_45_TVALID),
		.mag_V_pixel_45_TREADY(mag_V_pixel_45_TREADY),
		.mag_V_pixel_46_TDATA(mag_V_pixel_46_TDATA),
		.mag_V_pixel_46_TVALID(mag_V_pixel_46_TVALID),
		.mag_V_pixel_46_TREADY(mag_V_pixel_46_TREADY),
		.mag_V_pixel_47_TDATA(mag_V_pixel_47_TDATA),
		.mag_V_pixel_47_TVALID(mag_V_pixel_47_TVALID),
		.mag_V_pixel_47_TREADY(mag_V_pixel_47_TREADY),
		.mag_V_pixel_48_TDATA(mag_V_pixel_48_TDATA),
		.mag_V_pixel_48_TVALID(mag_V_pixel_48_TVALID),
		.mag_V_pixel_48_TREADY(mag_V_pixel_48_TREADY),
		.mag_V_pixel_49_TDATA(mag_V_pixel_49_TDATA),
		.mag_V_pixel_49_TVALID(mag_V_pixel_49_TVALID),
		.mag_V_pixel_49_TREADY(mag_V_pixel_49_TREADY),
		.mag_V_pixel_50_TDATA(mag_V_pixel_50_TDATA),
		.mag_V_pixel_50_TVALID(mag_V_pixel_50_TVALID),
		.mag_V_pixel_50_TREADY(mag_V_pixel_50_TREADY),
		.mag_V_pixel_51_TDATA(mag_V_pixel_51_TDATA),
		.mag_V_pixel_51_TVALID(mag_V_pixel_51_TVALID),
		.mag_V_pixel_51_TREADY(mag_V_pixel_51_TREADY),
		.mag_V_pixel_52_TDATA(mag_V_pixel_52_TDATA),
		.mag_V_pixel_52_TVALID(mag_V_pixel_52_TVALID),
		.mag_V_pixel_52_TREADY(mag_V_pixel_52_TREADY),
		.mag_V_pixel_53_TDATA(mag_V_pixel_53_TDATA),
		.mag_V_pixel_53_TVALID(mag_V_pixel_53_TVALID),
		.mag_V_pixel_53_TREADY(mag_V_pixel_53_TREADY),
		.mag_V_pixel_54_TDATA(mag_V_pixel_54_TDATA),
		.mag_V_pixel_54_TVALID(mag_V_pixel_54_TVALID),
		.mag_V_pixel_54_TREADY(mag_V_pixel_54_TREADY),
		.mag_V_pixel_55_TDATA(mag_V_pixel_55_TDATA),
		.mag_V_pixel_55_TVALID(mag_V_pixel_55_TVALID),
		.mag_V_pixel_55_TREADY(mag_V_pixel_55_TREADY),
		.mag_V_pixel_56_TDATA(mag_V_pixel_56_TDATA),
		.mag_V_pixel_56_TVALID(mag_V_pixel_56_TVALID),
		.mag_V_pixel_56_TREADY(mag_V_pixel_56_TREADY),
		.mag_V_pixel_57_TDATA(mag_V_pixel_57_TDATA),
		.mag_V_pixel_57_TVALID(mag_V_pixel_57_TVALID),
		.mag_V_pixel_57_TREADY(mag_V_pixel_57_TREADY),
		.mag_V_pixel_58_TDATA(mag_V_pixel_58_TDATA),
		.mag_V_pixel_58_TVALID(mag_V_pixel_58_TVALID),
		.mag_V_pixel_58_TREADY(mag_V_pixel_58_TREADY),
		.mag_V_pixel_59_TDATA(mag_V_pixel_59_TDATA),
		.mag_V_pixel_59_TVALID(mag_V_pixel_59_TVALID),
		.mag_V_pixel_59_TREADY(mag_V_pixel_59_TREADY),
		.mag_V_pixel_60_TDATA(mag_V_pixel_60_TDATA),
		.mag_V_pixel_60_TVALID(mag_V_pixel_60_TVALID),
		.mag_V_pixel_60_TREADY(mag_V_pixel_60_TREADY),
		.mag_V_pixel_61_TDATA(mag_V_pixel_61_TDATA),
		.mag_V_pixel_61_TVALID(mag_V_pixel_61_TVALID),
		.mag_V_pixel_61_TREADY(mag_V_pixel_61_TREADY),
		.mag_V_pixel_62_TDATA(mag_V_pixel_62_TDATA),
		.mag_V_pixel_62_TVALID(mag_V_pixel_62_TVALID),
		.mag_V_pixel_62_TREADY(mag_V_pixel_62_TREADY),
		.mag_V_pixel_63_TDATA(mag_V_pixel_63_TDATA),
		.mag_V_pixel_63_TVALID(mag_V_pixel_63_TVALID),
		.mag_V_pixel_63_TREADY(mag_V_pixel_63_TREADY),
		.mag_V_pixel_64_TDATA(mag_V_pixel_64_TDATA),
		.mag_V_pixel_64_TVALID(mag_V_pixel_64_TVALID),
		.mag_V_pixel_64_TREADY(mag_V_pixel_64_TREADY),
		.mag_V_pixel_65_TDATA(mag_V_pixel_65_TDATA),
		.mag_V_pixel_65_TVALID(mag_V_pixel_65_TVALID),
		.mag_V_pixel_65_TREADY(mag_V_pixel_65_TREADY),
		.mag_V_pixel_66_TDATA(mag_V_pixel_66_TDATA),
		.mag_V_pixel_66_TVALID(mag_V_pixel_66_TVALID),
		.mag_V_pixel_66_TREADY(mag_V_pixel_66_TREADY),
		.mag_V_pixel_67_TDATA(mag_V_pixel_67_TDATA),
		.mag_V_pixel_67_TVALID(mag_V_pixel_67_TVALID),
		.mag_V_pixel_67_TREADY(mag_V_pixel_67_TREADY),
		.mag_V_pixel_68_TDATA(mag_V_pixel_68_TDATA),
		.mag_V_pixel_68_TVALID(mag_V_pixel_68_TVALID),
		.mag_V_pixel_68_TREADY(mag_V_pixel_68_TREADY),
		.mag_V_pixel_69_TDATA(mag_V_pixel_69_TDATA),
		.mag_V_pixel_69_TVALID(mag_V_pixel_69_TVALID),
		.mag_V_pixel_69_TREADY(mag_V_pixel_69_TREADY),
		.mag_V_pixel_70_TDATA(mag_V_pixel_70_TDATA),
		.mag_V_pixel_70_TVALID(mag_V_pixel_70_TVALID),
		.mag_V_pixel_70_TREADY(mag_V_pixel_70_TREADY),
		.pha_V_pixel_0_TDATA(pha_V_pixel_0_TDATA),
		.pha_V_pixel_0_TVALID(pha_V_pixel_0_TVALID),
		.pha_V_pixel_0_TREADY(pha_V_pixel_0_TREADY),
		.pha_V_pixel_1_TDATA(pha_V_pixel_1_TDATA),
		.pha_V_pixel_1_TVALID(pha_V_pixel_1_TVALID),
		.pha_V_pixel_1_TREADY(pha_V_pixel_1_TREADY),
		.pha_V_pixel_2_TDATA(pha_V_pixel_2_TDATA),
		.pha_V_pixel_2_TVALID(pha_V_pixel_2_TVALID),
		.pha_V_pixel_2_TREADY(pha_V_pixel_2_TREADY),
		.pha_V_pixel_3_TDATA(pha_V_pixel_3_TDATA),
		.pha_V_pixel_3_TVALID(pha_V_pixel_3_TVALID),
		.pha_V_pixel_3_TREADY(pha_V_pixel_3_TREADY),
		.pha_V_pixel_4_TDATA(pha_V_pixel_4_TDATA),
		.pha_V_pixel_4_TVALID(pha_V_pixel_4_TVALID),
		.pha_V_pixel_4_TREADY(pha_V_pixel_4_TREADY),
		.pha_V_pixel_5_TDATA(pha_V_pixel_5_TDATA),
		.pha_V_pixel_5_TVALID(pha_V_pixel_5_TVALID),
		.pha_V_pixel_5_TREADY(pha_V_pixel_5_TREADY),
		.pha_V_pixel_6_TDATA(pha_V_pixel_6_TDATA),
		.pha_V_pixel_6_TVALID(pha_V_pixel_6_TVALID),
		.pha_V_pixel_6_TREADY(pha_V_pixel_6_TREADY),
		.pha_V_pixel_7_TDATA(pha_V_pixel_7_TDATA),
		.pha_V_pixel_7_TVALID(pha_V_pixel_7_TVALID),
		.pha_V_pixel_7_TREADY(pha_V_pixel_7_TREADY),
		.pha_V_pixel_8_TDATA(pha_V_pixel_8_TDATA),
		.pha_V_pixel_8_TVALID(pha_V_pixel_8_TVALID),
		.pha_V_pixel_8_TREADY(pha_V_pixel_8_TREADY),
		.pha_V_pixel_9_TDATA(pha_V_pixel_9_TDATA),
		.pha_V_pixel_9_TVALID(pha_V_pixel_9_TVALID),
		.pha_V_pixel_9_TREADY(pha_V_pixel_9_TREADY),
		.pha_V_pixel_10_TDATA(pha_V_pixel_10_TDATA),
		.pha_V_pixel_10_TVALID(pha_V_pixel_10_TVALID),
		.pha_V_pixel_10_TREADY(pha_V_pixel_10_TREADY),
		.pha_V_pixel_11_TDATA(pha_V_pixel_11_TDATA),
		.pha_V_pixel_11_TVALID(pha_V_pixel_11_TVALID),
		.pha_V_pixel_11_TREADY(pha_V_pixel_11_TREADY),
		.pha_V_pixel_12_TDATA(pha_V_pixel_12_TDATA),
		.pha_V_pixel_12_TVALID(pha_V_pixel_12_TVALID),
		.pha_V_pixel_12_TREADY(pha_V_pixel_12_TREADY),
		.pha_V_pixel_13_TDATA(pha_V_pixel_13_TDATA),
		.pha_V_pixel_13_TVALID(pha_V_pixel_13_TVALID),
		.pha_V_pixel_13_TREADY(pha_V_pixel_13_TREADY),
		.pha_V_pixel_14_TDATA(pha_V_pixel_14_TDATA),
		.pha_V_pixel_14_TVALID(pha_V_pixel_14_TVALID),
		.pha_V_pixel_14_TREADY(pha_V_pixel_14_TREADY),
		.pha_V_pixel_15_TDATA(pha_V_pixel_15_TDATA),
		.pha_V_pixel_15_TVALID(pha_V_pixel_15_TVALID),
		.pha_V_pixel_15_TREADY(pha_V_pixel_15_TREADY),
		.pha_V_pixel_16_TDATA(pha_V_pixel_16_TDATA),
		.pha_V_pixel_16_TVALID(pha_V_pixel_16_TVALID),
		.pha_V_pixel_16_TREADY(pha_V_pixel_16_TREADY),
		.pha_V_pixel_17_TDATA(pha_V_pixel_17_TDATA),
		.pha_V_pixel_17_TVALID(pha_V_pixel_17_TVALID),
		.pha_V_pixel_17_TREADY(pha_V_pixel_17_TREADY),
		.pha_V_pixel_18_TDATA(pha_V_pixel_18_TDATA),
		.pha_V_pixel_18_TVALID(pha_V_pixel_18_TVALID),
		.pha_V_pixel_18_TREADY(pha_V_pixel_18_TREADY),
		.pha_V_pixel_19_TDATA(pha_V_pixel_19_TDATA),
		.pha_V_pixel_19_TVALID(pha_V_pixel_19_TVALID),
		.pha_V_pixel_19_TREADY(pha_V_pixel_19_TREADY),
		.pha_V_pixel_20_TDATA(pha_V_pixel_20_TDATA),
		.pha_V_pixel_20_TVALID(pha_V_pixel_20_TVALID),
		.pha_V_pixel_20_TREADY(pha_V_pixel_20_TREADY),
		.pha_V_pixel_21_TDATA(pha_V_pixel_21_TDATA),
		.pha_V_pixel_21_TVALID(pha_V_pixel_21_TVALID),
		.pha_V_pixel_21_TREADY(pha_V_pixel_21_TREADY),
		.pha_V_pixel_22_TDATA(pha_V_pixel_22_TDATA),
		.pha_V_pixel_22_TVALID(pha_V_pixel_22_TVALID),
		.pha_V_pixel_22_TREADY(pha_V_pixel_22_TREADY),
		.pha_V_pixel_23_TDATA(pha_V_pixel_23_TDATA),
		.pha_V_pixel_23_TVALID(pha_V_pixel_23_TVALID),
		.pha_V_pixel_23_TREADY(pha_V_pixel_23_TREADY),
		.pha_V_pixel_24_TDATA(pha_V_pixel_24_TDATA),
		.pha_V_pixel_24_TVALID(pha_V_pixel_24_TVALID),
		.pha_V_pixel_24_TREADY(pha_V_pixel_24_TREADY),
		.pha_V_pixel_25_TDATA(pha_V_pixel_25_TDATA),
		.pha_V_pixel_25_TVALID(pha_V_pixel_25_TVALID),
		.pha_V_pixel_25_TREADY(pha_V_pixel_25_TREADY),
		.pha_V_pixel_26_TDATA(pha_V_pixel_26_TDATA),
		.pha_V_pixel_26_TVALID(pha_V_pixel_26_TVALID),
		.pha_V_pixel_26_TREADY(pha_V_pixel_26_TREADY),
		.pha_V_pixel_27_TDATA(pha_V_pixel_27_TDATA),
		.pha_V_pixel_27_TVALID(pha_V_pixel_27_TVALID),
		.pha_V_pixel_27_TREADY(pha_V_pixel_27_TREADY),
		.pha_V_pixel_28_TDATA(pha_V_pixel_28_TDATA),
		.pha_V_pixel_28_TVALID(pha_V_pixel_28_TVALID),
		.pha_V_pixel_28_TREADY(pha_V_pixel_28_TREADY),
		.pha_V_pixel_29_TDATA(pha_V_pixel_29_TDATA),
		.pha_V_pixel_29_TVALID(pha_V_pixel_29_TVALID),
		.pha_V_pixel_29_TREADY(pha_V_pixel_29_TREADY),
		.pha_V_pixel_30_TDATA(pha_V_pixel_30_TDATA),
		.pha_V_pixel_30_TVALID(pha_V_pixel_30_TVALID),
		.pha_V_pixel_30_TREADY(pha_V_pixel_30_TREADY),
		.pha_V_pixel_31_TDATA(pha_V_pixel_31_TDATA),
		.pha_V_pixel_31_TVALID(pha_V_pixel_31_TVALID),
		.pha_V_pixel_31_TREADY(pha_V_pixel_31_TREADY),
		.pha_V_pixel_32_TDATA(pha_V_pixel_32_TDATA),
		.pha_V_pixel_32_TVALID(pha_V_pixel_32_TVALID),
		.pha_V_pixel_32_TREADY(pha_V_pixel_32_TREADY),
		.pha_V_pixel_33_TDATA(pha_V_pixel_33_TDATA),
		.pha_V_pixel_33_TVALID(pha_V_pixel_33_TVALID),
		.pha_V_pixel_33_TREADY(pha_V_pixel_33_TREADY),
		.pha_V_pixel_34_TDATA(pha_V_pixel_34_TDATA),
		.pha_V_pixel_34_TVALID(pha_V_pixel_34_TVALID),
		.pha_V_pixel_34_TREADY(pha_V_pixel_34_TREADY),
		.pha_V_pixel_35_TDATA(pha_V_pixel_35_TDATA),
		.pha_V_pixel_35_TVALID(pha_V_pixel_35_TVALID),
		.pha_V_pixel_35_TREADY(pha_V_pixel_35_TREADY),
		.pha_V_pixel_36_TDATA(pha_V_pixel_36_TDATA),
		.pha_V_pixel_36_TVALID(pha_V_pixel_36_TVALID),
		.pha_V_pixel_36_TREADY(pha_V_pixel_36_TREADY),
		.pha_V_pixel_37_TDATA(pha_V_pixel_37_TDATA),
		.pha_V_pixel_37_TVALID(pha_V_pixel_37_TVALID),
		.pha_V_pixel_37_TREADY(pha_V_pixel_37_TREADY),
		.pha_V_pixel_38_TDATA(pha_V_pixel_38_TDATA),
		.pha_V_pixel_38_TVALID(pha_V_pixel_38_TVALID),
		.pha_V_pixel_38_TREADY(pha_V_pixel_38_TREADY),
		.pha_V_pixel_39_TDATA(pha_V_pixel_39_TDATA),
		.pha_V_pixel_39_TVALID(pha_V_pixel_39_TVALID),
		.pha_V_pixel_39_TREADY(pha_V_pixel_39_TREADY),
		.pha_V_pixel_40_TDATA(pha_V_pixel_40_TDATA),
		.pha_V_pixel_40_TVALID(pha_V_pixel_40_TVALID),
		.pha_V_pixel_40_TREADY(pha_V_pixel_40_TREADY),
		.pha_V_pixel_41_TDATA(pha_V_pixel_41_TDATA),
		.pha_V_pixel_41_TVALID(pha_V_pixel_41_TVALID),
		.pha_V_pixel_41_TREADY(pha_V_pixel_41_TREADY),
		.pha_V_pixel_42_TDATA(pha_V_pixel_42_TDATA),
		.pha_V_pixel_42_TVALID(pha_V_pixel_42_TVALID),
		.pha_V_pixel_42_TREADY(pha_V_pixel_42_TREADY),
		.pha_V_pixel_43_TDATA(pha_V_pixel_43_TDATA),
		.pha_V_pixel_43_TVALID(pha_V_pixel_43_TVALID),
		.pha_V_pixel_43_TREADY(pha_V_pixel_43_TREADY),
		.pha_V_pixel_44_TDATA(pha_V_pixel_44_TDATA),
		.pha_V_pixel_44_TVALID(pha_V_pixel_44_TVALID),
		.pha_V_pixel_44_TREADY(pha_V_pixel_44_TREADY),
		.pha_V_pixel_45_TDATA(pha_V_pixel_45_TDATA),
		.pha_V_pixel_45_TVALID(pha_V_pixel_45_TVALID),
		.pha_V_pixel_45_TREADY(pha_V_pixel_45_TREADY),
		.pha_V_pixel_46_TDATA(pha_V_pixel_46_TDATA),
		.pha_V_pixel_46_TVALID(pha_V_pixel_46_TVALID),
		.pha_V_pixel_46_TREADY(pha_V_pixel_46_TREADY),
		.pha_V_pixel_47_TDATA(pha_V_pixel_47_TDATA),
		.pha_V_pixel_47_TVALID(pha_V_pixel_47_TVALID),
		.pha_V_pixel_47_TREADY(pha_V_pixel_47_TREADY),
		.pha_V_pixel_48_TDATA(pha_V_pixel_48_TDATA),
		.pha_V_pixel_48_TVALID(pha_V_pixel_48_TVALID),
		.pha_V_pixel_48_TREADY(pha_V_pixel_48_TREADY),
		.pha_V_pixel_49_TDATA(pha_V_pixel_49_TDATA),
		.pha_V_pixel_49_TVALID(pha_V_pixel_49_TVALID),
		.pha_V_pixel_49_TREADY(pha_V_pixel_49_TREADY),
		.pha_V_pixel_50_TDATA(pha_V_pixel_50_TDATA),
		.pha_V_pixel_50_TVALID(pha_V_pixel_50_TVALID),
		.pha_V_pixel_50_TREADY(pha_V_pixel_50_TREADY),
		.pha_V_pixel_51_TDATA(pha_V_pixel_51_TDATA),
		.pha_V_pixel_51_TVALID(pha_V_pixel_51_TVALID),
		.pha_V_pixel_51_TREADY(pha_V_pixel_51_TREADY),
		.pha_V_pixel_52_TDATA(pha_V_pixel_52_TDATA),
		.pha_V_pixel_52_TVALID(pha_V_pixel_52_TVALID),
		.pha_V_pixel_52_TREADY(pha_V_pixel_52_TREADY),
		.pha_V_pixel_53_TDATA(pha_V_pixel_53_TDATA),
		.pha_V_pixel_53_TVALID(pha_V_pixel_53_TVALID),
		.pha_V_pixel_53_TREADY(pha_V_pixel_53_TREADY),
		.pha_V_pixel_54_TDATA(pha_V_pixel_54_TDATA),
		.pha_V_pixel_54_TVALID(pha_V_pixel_54_TVALID),
		.pha_V_pixel_54_TREADY(pha_V_pixel_54_TREADY),
		.pha_V_pixel_55_TDATA(pha_V_pixel_55_TDATA),
		.pha_V_pixel_55_TVALID(pha_V_pixel_55_TVALID),
		.pha_V_pixel_55_TREADY(pha_V_pixel_55_TREADY),
		.pha_V_pixel_56_TDATA(pha_V_pixel_56_TDATA),
		.pha_V_pixel_56_TVALID(pha_V_pixel_56_TVALID),
		.pha_V_pixel_56_TREADY(pha_V_pixel_56_TREADY),
		.pha_V_pixel_57_TDATA(pha_V_pixel_57_TDATA),
		.pha_V_pixel_57_TVALID(pha_V_pixel_57_TVALID),
		.pha_V_pixel_57_TREADY(pha_V_pixel_57_TREADY),
		.pha_V_pixel_58_TDATA(pha_V_pixel_58_TDATA),
		.pha_V_pixel_58_TVALID(pha_V_pixel_58_TVALID),
		.pha_V_pixel_58_TREADY(pha_V_pixel_58_TREADY),
		.pha_V_pixel_59_TDATA(pha_V_pixel_59_TDATA),
		.pha_V_pixel_59_TVALID(pha_V_pixel_59_TVALID),
		.pha_V_pixel_59_TREADY(pha_V_pixel_59_TREADY),
		.pha_V_pixel_60_TDATA(pha_V_pixel_60_TDATA),
		.pha_V_pixel_60_TVALID(pha_V_pixel_60_TVALID),
		.pha_V_pixel_60_TREADY(pha_V_pixel_60_TREADY),
		.pha_V_pixel_61_TDATA(pha_V_pixel_61_TDATA),
		.pha_V_pixel_61_TVALID(pha_V_pixel_61_TVALID),
		.pha_V_pixel_61_TREADY(pha_V_pixel_61_TREADY),
		.pha_V_pixel_62_TDATA(pha_V_pixel_62_TDATA),
		.pha_V_pixel_62_TVALID(pha_V_pixel_62_TVALID),
		.pha_V_pixel_62_TREADY(pha_V_pixel_62_TREADY),
		.pha_V_pixel_63_TDATA(pha_V_pixel_63_TDATA),
		.pha_V_pixel_63_TVALID(pha_V_pixel_63_TVALID),
		.pha_V_pixel_63_TREADY(pha_V_pixel_63_TREADY),
		.pha_V_pixel_64_TDATA(pha_V_pixel_64_TDATA),
		.pha_V_pixel_64_TVALID(pha_V_pixel_64_TVALID),
		.pha_V_pixel_64_TREADY(pha_V_pixel_64_TREADY),
		.pha_V_pixel_65_TDATA(pha_V_pixel_65_TDATA),
		.pha_V_pixel_65_TVALID(pha_V_pixel_65_TVALID),
		.pha_V_pixel_65_TREADY(pha_V_pixel_65_TREADY),
		.pha_V_pixel_66_TDATA(pha_V_pixel_66_TDATA),
		.pha_V_pixel_66_TVALID(pha_V_pixel_66_TVALID),
		.pha_V_pixel_66_TREADY(pha_V_pixel_66_TREADY),
		.pha_V_pixel_67_TDATA(pha_V_pixel_67_TDATA),
		.pha_V_pixel_67_TVALID(pha_V_pixel_67_TVALID),
		.pha_V_pixel_67_TREADY(pha_V_pixel_67_TREADY),
		.pha_V_pixel_68_TDATA(pha_V_pixel_68_TDATA),
		.pha_V_pixel_68_TVALID(pha_V_pixel_68_TVALID),
		.pha_V_pixel_68_TREADY(pha_V_pixel_68_TREADY),
		.pha_V_pixel_69_TDATA(pha_V_pixel_69_TDATA),
		.pha_V_pixel_69_TVALID(pha_V_pixel_69_TVALID),
		.pha_V_pixel_69_TREADY(pha_V_pixel_69_TREADY),
		.pha_V_pixel_70_TDATA(pha_V_pixel_70_TDATA),
		.pha_V_pixel_70_TVALID(pha_V_pixel_70_TVALID),
		.pha_V_pixel_70_TREADY(pha_V_pixel_70_TREADY),
		.ap_clk(ap_clk),
		.ap_rst_n(ap_rst_n),
		.ap_done(ap_done),
		.ap_start(ap_start),
		.ap_ready(ap_ready),
		.ap_idle(ap_idle)
	);

	always #5 ap_clk = ~ap_clk;

	initial begin
		ap_start = 0;
		mag_V_pixel_0_TREADY = 1;
		mag_V_pixel_1_TREADY = 1;
		mag_V_pixel_2_TREADY = 1;
		mag_V_pixel_3_TREADY = 1;
		mag_V_pixel_4_TREADY = 1;
		mag_V_pixel_5_TREADY = 1;
		mag_V_pixel_6_TREADY = 1;
		mag_V_pixel_7_TREADY = 1;
		mag_V_pixel_8_TREADY = 1;
		mag_V_pixel_9_TREADY = 1;
		mag_V_pixel_10_TREADY = 1;
		mag_V_pixel_11_TREADY = 1;
		mag_V_pixel_12_TREADY = 1;
		mag_V_pixel_13_TREADY = 1;
		mag_V_pixel_14_TREADY = 1;
		mag_V_pixel_15_TREADY = 1;
		mag_V_pixel_16_TREADY = 1;
		mag_V_pixel_17_TREADY = 1;
		mag_V_pixel_18_TREADY = 1;
		mag_V_pixel_19_TREADY = 1;
		mag_V_pixel_20_TREADY = 1;
		mag_V_pixel_21_TREADY = 1;
		mag_V_pixel_22_TREADY = 1;
		mag_V_pixel_23_TREADY = 1;
		mag_V_pixel_24_TREADY = 1;
		mag_V_pixel_25_TREADY = 1;
		mag_V_pixel_26_TREADY = 1;
		mag_V_pixel_27_TREADY = 1;
		mag_V_pixel_28_TREADY = 1;
		mag_V_pixel_29_TREADY = 1;
		mag_V_pixel_30_TREADY = 1;
		mag_V_pixel_31_TREADY = 1;
		mag_V_pixel_32_TREADY = 1;
		mag_V_pixel_33_TREADY = 1;
		mag_V_pixel_34_TREADY = 1;
		mag_V_pixel_35_TREADY = 1;
		mag_V_pixel_36_TREADY = 1;
		mag_V_pixel_37_TREADY = 1;
		mag_V_pixel_38_TREADY = 1;
		mag_V_pixel_39_TREADY = 1;
		mag_V_pixel_40_TREADY = 1;
		mag_V_pixel_41_TREADY = 1;
		mag_V_pixel_42_TREADY = 1;
		mag_V_pixel_43_TREADY = 1;
		mag_V_pixel_44_TREADY = 1;
		mag_V_pixel_45_TREADY = 1;
		mag_V_pixel_46_TREADY = 1;
		mag_V_pixel_47_TREADY = 1;
		mag_V_pixel_48_TREADY = 1;
		mag_V_pixel_49_TREADY = 1;
		mag_V_pixel_50_TREADY = 1;
		mag_V_pixel_51_TREADY = 1;
		mag_V_pixel_52_TREADY = 1;
		mag_V_pixel_53_TREADY = 1;
		mag_V_pixel_54_TREADY = 1;
		mag_V_pixel_55_TREADY = 1;
		mag_V_pixel_56_TREADY = 1;
		mag_V_pixel_57_TREADY = 1;
		mag_V_pixel_58_TREADY = 1;
		mag_V_pixel_59_TREADY = 1;
		mag_V_pixel_60_TREADY = 1;
		mag_V_pixel_61_TREADY = 1;
		mag_V_pixel_62_TREADY = 1;
		mag_V_pixel_63_TREADY = 1;
		mag_V_pixel_64_TREADY = 1;
		mag_V_pixel_65_TREADY = 1;
		mag_V_pixel_66_TREADY = 1;
		mag_V_pixel_67_TREADY = 1;
		mag_V_pixel_68_TREADY = 1;
		mag_V_pixel_69_TREADY = 1;
		mag_V_pixel_70_TREADY = 1;
		pha_V_pixel_0_TREADY = 1;
		pha_V_pixel_1_TREADY = 1;
		pha_V_pixel_2_TREADY = 1;
		pha_V_pixel_3_TREADY = 1;
		pha_V_pixel_4_TREADY = 1;
		pha_V_pixel_5_TREADY = 1;
		pha_V_pixel_6_TREADY = 1;
		pha_V_pixel_7_TREADY = 1;
		pha_V_pixel_8_TREADY = 1;
		pha_V_pixel_9_TREADY = 1;
		pha_V_pixel_10_TREADY = 1;
		pha_V_pixel_11_TREADY = 1;
		pha_V_pixel_12_TREADY = 1;
		pha_V_pixel_13_TREADY = 1;
		pha_V_pixel_14_TREADY = 1;
		pha_V_pixel_15_TREADY = 1;
		pha_V_pixel_16_TREADY = 1;
		pha_V_pixel_17_TREADY = 1;
		pha_V_pixel_18_TREADY = 1;
		pha_V_pixel_19_TREADY = 1;
		pha_V_pixel_20_TREADY = 1;
		pha_V_pixel_21_TREADY = 1;
		pha_V_pixel_22_TREADY = 1;
		pha_V_pixel_23_TREADY = 1;
		pha_V_pixel_24_TREADY = 1;
		pha_V_pixel_25_TREADY = 1;
		pha_V_pixel_26_TREADY = 1;
		pha_V_pixel_27_TREADY = 1;
		pha_V_pixel_28_TREADY = 1;
		pha_V_pixel_29_TREADY = 1;
		pha_V_pixel_30_TREADY = 1;
		pha_V_pixel_31_TREADY = 1;
		pha_V_pixel_32_TREADY = 1;
		pha_V_pixel_33_TREADY = 1;
		pha_V_pixel_34_TREADY = 1;
		pha_V_pixel_35_TREADY = 1;
		pha_V_pixel_36_TREADY = 1;
		pha_V_pixel_37_TREADY = 1;
		pha_V_pixel_38_TREADY = 1;
		pha_V_pixel_39_TREADY = 1;
		pha_V_pixel_40_TREADY = 1;
		pha_V_pixel_41_TREADY = 1;
		pha_V_pixel_42_TREADY = 1;
		pha_V_pixel_43_TREADY = 1;
		pha_V_pixel_44_TREADY = 1;
		pha_V_pixel_45_TREADY = 1;
		pha_V_pixel_46_TREADY = 1;
		pha_V_pixel_47_TREADY = 1;
		pha_V_pixel_48_TREADY = 1;
		pha_V_pixel_49_TREADY = 1;
		pha_V_pixel_50_TREADY = 1;
		pha_V_pixel_51_TREADY = 1;
		pha_V_pixel_52_TREADY = 1;
		pha_V_pixel_53_TREADY = 1;
		pha_V_pixel_54_TREADY = 1;
		pha_V_pixel_55_TREADY = 1;
		pha_V_pixel_56_TREADY = 1;
		pha_V_pixel_57_TREADY = 1;
		pha_V_pixel_58_TREADY = 1;
		pha_V_pixel_59_TREADY = 1;
		pha_V_pixel_60_TREADY = 1;
		pha_V_pixel_61_TREADY = 1;
		pha_V_pixel_62_TREADY = 1;
		pha_V_pixel_63_TREADY = 1;
		pha_V_pixel_64_TREADY = 1;
		pha_V_pixel_65_TREADY = 1;
		pha_V_pixel_66_TREADY = 1;
		pha_V_pixel_67_TREADY = 1;
		pha_V_pixel_68_TREADY = 1;
		pha_V_pixel_69_TREADY = 1;
		pha_V_pixel_70_TREADY = 1;
		ap_clk = 0;
		ap_rst_n = 0;
		#23 ap_rst_n = 1;
		#5 ap_start = 1;
	end

	always @ (posedge ap_clk)
	begin
		if (ap_rst_n == 0)
		begin
			src_V_pixel_0_r_TDATA = 0;
			src_V_pixel_0_r_TVALID = 0;
			src_V_pixel_1_r_TDATA = 0;
			src_V_pixel_1_r_TVALID = 0;
			src_V_pixel_2_r_TDATA = 0;
			src_V_pixel_2_r_TVALID = 0;
			src_V_pixel_3_r_TDATA = 0;
			src_V_pixel_3_r_TVALID = 0;
			src_V_pixel_4_r_TDATA = 0;
			src_V_pixel_4_r_TVALID = 0;
			src_V_pixel_5_r_TDATA = 0;
			src_V_pixel_5_r_TVALID = 0;
			src_V_pixel_6_r_TDATA = 0;
			src_V_pixel_6_r_TVALID = 0;
			src_V_pixel_7_r_TDATA = 0;
			src_V_pixel_7_r_TVALID = 0;
			src_V_pixel_8_r_TDATA = 0;
			src_V_pixel_8_r_TVALID = 0;
			src_V_pixel_9_r_TDATA = 0;
			src_V_pixel_9_r_TVALID = 0;
			src_V_pixel_10_r_TDATA = 0;
			src_V_pixel_10_r_TVALID = 0;
			src_V_pixel_11_r_TDATA = 0;
			src_V_pixel_11_r_TVALID = 0;
			src_V_pixel_12_r_TDATA = 0;
			src_V_pixel_12_r_TVALID = 0;
			src_V_pixel_13_r_TDATA = 0;
			src_V_pixel_13_r_TVALID = 0;
			src_V_pixel_14_r_TDATA = 0;
			src_V_pixel_14_r_TVALID = 0;
			src_V_pixel_15_r_TDATA = 0;
			src_V_pixel_15_r_TVALID = 0;
			src_V_pixel_16_r_TDATA = 0;
			src_V_pixel_16_r_TVALID = 0;
			src_V_pixel_17_r_TDATA = 0;
			src_V_pixel_17_r_TVALID = 0;
			src_V_pixel_18_r_TDATA = 0;
			src_V_pixel_18_r_TVALID = 0;
			src_V_pixel_19_r_TDATA = 0;
			src_V_pixel_19_r_TVALID = 0;
			src_V_pixel_20_r_TDATA = 0;
			src_V_pixel_20_r_TVALID = 0;
			src_V_pixel_21_r_TDATA = 0;
			src_V_pixel_21_r_TVALID = 0;
			src_V_pixel_22_r_TDATA = 0;
			src_V_pixel_22_r_TVALID = 0;
			src_V_pixel_23_r_TDATA = 0;
			src_V_pixel_23_r_TVALID = 0;
			src_V_pixel_24_r_TDATA = 0;
			src_V_pixel_24_r_TVALID = 0;
			src_V_pixel_25_r_TDATA = 0;
			src_V_pixel_25_r_TVALID = 0;
			src_V_pixel_26_r_TDATA = 0;
			src_V_pixel_26_r_TVALID = 0;
			src_V_pixel_27_r_TDATA = 0;
			src_V_pixel_27_r_TVALID = 0;
			src_V_pixel_28_r_TDATA = 0;
			src_V_pixel_28_r_TVALID = 0;
			src_V_pixel_29_r_TDATA = 0;
			src_V_pixel_29_r_TVALID = 0;
			src_V_pixel_30_r_TDATA = 0;
			src_V_pixel_30_r_TVALID = 0;
			src_V_pixel_31_r_TDATA = 0;
			src_V_pixel_31_r_TVALID = 0;
			src_V_pixel_32_r_TDATA = 0;
			src_V_pixel_32_r_TVALID = 0;
			src_V_pixel_33_r_TDATA = 0;
			src_V_pixel_33_r_TVALID = 0;
			src_V_pixel_34_r_TDATA = 0;
			src_V_pixel_34_r_TVALID = 0;
			src_V_pixel_35_r_TDATA = 0;
			src_V_pixel_35_r_TVALID = 0;
			src_V_pixel_36_r_TDATA = 0;
			src_V_pixel_36_r_TVALID = 0;
			src_V_pixel_37_r_TDATA = 0;
			src_V_pixel_37_r_TVALID = 0;
			src_V_pixel_38_r_TDATA = 0;
			src_V_pixel_38_r_TVALID = 0;
			src_V_pixel_39_r_TDATA = 0;
			src_V_pixel_39_r_TVALID = 0;
			src_V_pixel_40_r_TDATA = 0;
			src_V_pixel_40_r_TVALID = 0;
			src_V_pixel_41_r_TDATA = 0;
			src_V_pixel_41_r_TVALID = 0;
			src_V_pixel_42_r_TDATA = 0;
			src_V_pixel_42_r_TVALID = 0;
			src_V_pixel_43_r_TDATA = 0;
			src_V_pixel_43_r_TVALID = 0;
			src_V_pixel_44_r_TDATA = 0;
			src_V_pixel_44_r_TVALID = 0;
			src_V_pixel_45_r_TDATA = 0;
			src_V_pixel_45_r_TVALID = 0;
			src_V_pixel_46_r_TDATA = 0;
			src_V_pixel_46_r_TVALID = 0;
			src_V_pixel_47_r_TDATA = 0;
			src_V_pixel_47_r_TVALID = 0;
			src_V_pixel_48_r_TDATA = 0;
			src_V_pixel_48_r_TVALID = 0;
			src_V_pixel_49_r_TDATA = 0;
			src_V_pixel_49_r_TVALID = 0;
			src_V_pixel_50_r_TDATA = 0;
			src_V_pixel_50_r_TVALID = 0;
			src_V_pixel_51_r_TDATA = 0;
			src_V_pixel_51_r_TVALID = 0;
			src_V_pixel_52_r_TDATA = 0;
			src_V_pixel_52_r_TVALID = 0;
			src_V_pixel_53_r_TDATA = 0;
			src_V_pixel_53_r_TVALID = 0;
			src_V_pixel_54_r_TDATA = 0;
			src_V_pixel_54_r_TVALID = 0;
			src_V_pixel_55_r_TDATA = 0;
			src_V_pixel_55_r_TVALID = 0;
			src_V_pixel_56_r_TDATA = 0;
			src_V_pixel_56_r_TVALID = 0;
			src_V_pixel_57_r_TDATA = 0;
			src_V_pixel_57_r_TVALID = 0;
			src_V_pixel_58_r_TDATA = 0;
			src_V_pixel_58_r_TVALID = 0;
			src_V_pixel_59_r_TDATA = 0;
			src_V_pixel_59_r_TVALID = 0;
			src_V_pixel_60_r_TDATA = 0;
			src_V_pixel_60_r_TVALID = 0;
			src_V_pixel_61_r_TDATA = 0;
			src_V_pixel_61_r_TVALID = 0;
			src_V_pixel_62_r_TDATA = 0;
			src_V_pixel_62_r_TVALID = 0;
			src_V_pixel_63_r_TDATA = 0;
			src_V_pixel_63_r_TVALID = 0;
			src_V_pixel_64_r_TDATA = 0;
			src_V_pixel_64_r_TVALID = 0;
			src_V_pixel_65_r_TDATA = 0;
			src_V_pixel_65_r_TVALID = 0;
			src_V_pixel_66_r_TDATA = 0;
			src_V_pixel_66_r_TVALID = 0;
			src_V_pixel_67_r_TDATA = 0;
			src_V_pixel_67_r_TVALID = 0;
			src_V_pixel_68_r_TDATA = 0;
			src_V_pixel_68_r_TVALID = 0;
			src_V_pixel_69_r_TDATA = 0;
			src_V_pixel_69_r_TVALID = 0;
			src_V_pixel_70_r_TDATA = 0;
			src_V_pixel_70_r_TVALID = 0;
			src_V_pixel_0_g_TDATA = 0;
			src_V_pixel_0_g_TVALID = 0;
			src_V_pixel_1_g_TDATA = 0;
			src_V_pixel_1_g_TVALID = 0;
			src_V_pixel_2_g_TDATA = 0;
			src_V_pixel_2_g_TVALID = 0;
			src_V_pixel_3_g_TDATA = 0;
			src_V_pixel_3_g_TVALID = 0;
			src_V_pixel_4_g_TDATA = 0;
			src_V_pixel_4_g_TVALID = 0;
			src_V_pixel_5_g_TDATA = 0;
			src_V_pixel_5_g_TVALID = 0;
			src_V_pixel_6_g_TDATA = 0;
			src_V_pixel_6_g_TVALID = 0;
			src_V_pixel_7_g_TDATA = 0;
			src_V_pixel_7_g_TVALID = 0;
			src_V_pixel_8_g_TDATA = 0;
			src_V_pixel_8_g_TVALID = 0;
			src_V_pixel_9_g_TDATA = 0;
			src_V_pixel_9_g_TVALID = 0;
			src_V_pixel_10_g_TDATA = 0;
			src_V_pixel_10_g_TVALID = 0;
			src_V_pixel_11_g_TDATA = 0;
			src_V_pixel_11_g_TVALID = 0;
			src_V_pixel_12_g_TDATA = 0;
			src_V_pixel_12_g_TVALID = 0;
			src_V_pixel_13_g_TDATA = 0;
			src_V_pixel_13_g_TVALID = 0;
			src_V_pixel_14_g_TDATA = 0;
			src_V_pixel_14_g_TVALID = 0;
			src_V_pixel_15_g_TDATA = 0;
			src_V_pixel_15_g_TVALID = 0;
			src_V_pixel_16_g_TDATA = 0;
			src_V_pixel_16_g_TVALID = 0;
			src_V_pixel_17_g_TDATA = 0;
			src_V_pixel_17_g_TVALID = 0;
			src_V_pixel_18_g_TDATA = 0;
			src_V_pixel_18_g_TVALID = 0;
			src_V_pixel_19_g_TDATA = 0;
			src_V_pixel_19_g_TVALID = 0;
			src_V_pixel_20_g_TDATA = 0;
			src_V_pixel_20_g_TVALID = 0;
			src_V_pixel_21_g_TDATA = 0;
			src_V_pixel_21_g_TVALID = 0;
			src_V_pixel_22_g_TDATA = 0;
			src_V_pixel_22_g_TVALID = 0;
			src_V_pixel_23_g_TDATA = 0;
			src_V_pixel_23_g_TVALID = 0;
			src_V_pixel_24_g_TDATA = 0;
			src_V_pixel_24_g_TVALID = 0;
			src_V_pixel_25_g_TDATA = 0;
			src_V_pixel_25_g_TVALID = 0;
			src_V_pixel_26_g_TDATA = 0;
			src_V_pixel_26_g_TVALID = 0;
			src_V_pixel_27_g_TDATA = 0;
			src_V_pixel_27_g_TVALID = 0;
			src_V_pixel_28_g_TDATA = 0;
			src_V_pixel_28_g_TVALID = 0;
			src_V_pixel_29_g_TDATA = 0;
			src_V_pixel_29_g_TVALID = 0;
			src_V_pixel_30_g_TDATA = 0;
			src_V_pixel_30_g_TVALID = 0;
			src_V_pixel_31_g_TDATA = 0;
			src_V_pixel_31_g_TVALID = 0;
			src_V_pixel_32_g_TDATA = 0;
			src_V_pixel_32_g_TVALID = 0;
			src_V_pixel_33_g_TDATA = 0;
			src_V_pixel_33_g_TVALID = 0;
			src_V_pixel_34_g_TDATA = 0;
			src_V_pixel_34_g_TVALID = 0;
			src_V_pixel_35_g_TDATA = 0;
			src_V_pixel_35_g_TVALID = 0;
			src_V_pixel_36_g_TDATA = 0;
			src_V_pixel_36_g_TVALID = 0;
			src_V_pixel_37_g_TDATA = 0;
			src_V_pixel_37_g_TVALID = 0;
			src_V_pixel_38_g_TDATA = 0;
			src_V_pixel_38_g_TVALID = 0;
			src_V_pixel_39_g_TDATA = 0;
			src_V_pixel_39_g_TVALID = 0;
			src_V_pixel_40_g_TDATA = 0;
			src_V_pixel_40_g_TVALID = 0;
			src_V_pixel_41_g_TDATA = 0;
			src_V_pixel_41_g_TVALID = 0;
			src_V_pixel_42_g_TDATA = 0;
			src_V_pixel_42_g_TVALID = 0;
			src_V_pixel_43_g_TDATA = 0;
			src_V_pixel_43_g_TVALID = 0;
			src_V_pixel_44_g_TDATA = 0;
			src_V_pixel_44_g_TVALID = 0;
			src_V_pixel_45_g_TDATA = 0;
			src_V_pixel_45_g_TVALID = 0;
			src_V_pixel_46_g_TDATA = 0;
			src_V_pixel_46_g_TVALID = 0;
			src_V_pixel_47_g_TDATA = 0;
			src_V_pixel_47_g_TVALID = 0;
			src_V_pixel_48_g_TDATA = 0;
			src_V_pixel_48_g_TVALID = 0;
			src_V_pixel_49_g_TDATA = 0;
			src_V_pixel_49_g_TVALID = 0;
			src_V_pixel_50_g_TDATA = 0;
			src_V_pixel_50_g_TVALID = 0;
			src_V_pixel_51_g_TDATA = 0;
			src_V_pixel_51_g_TVALID = 0;
			src_V_pixel_52_g_TDATA = 0;
			src_V_pixel_52_g_TVALID = 0;
			src_V_pixel_53_g_TDATA = 0;
			src_V_pixel_53_g_TVALID = 0;
			src_V_pixel_54_g_TDATA = 0;
			src_V_pixel_54_g_TVALID = 0;
			src_V_pixel_55_g_TDATA = 0;
			src_V_pixel_55_g_TVALID = 0;
			src_V_pixel_56_g_TDATA = 0;
			src_V_pixel_56_g_TVALID = 0;
			src_V_pixel_57_g_TDATA = 0;
			src_V_pixel_57_g_TVALID = 0;
			src_V_pixel_58_g_TDATA = 0;
			src_V_pixel_58_g_TVALID = 0;
			src_V_pixel_59_g_TDATA = 0;
			src_V_pixel_59_g_TVALID = 0;
			src_V_pixel_60_g_TDATA = 0;
			src_V_pixel_60_g_TVALID = 0;
			src_V_pixel_61_g_TDATA = 0;
			src_V_pixel_61_g_TVALID = 0;
			src_V_pixel_62_g_TDATA = 0;
			src_V_pixel_62_g_TVALID = 0;
			src_V_pixel_63_g_TDATA = 0;
			src_V_pixel_63_g_TVALID = 0;
			src_V_pixel_64_g_TDATA = 0;
			src_V_pixel_64_g_TVALID = 0;
			src_V_pixel_65_g_TDATA = 0;
			src_V_pixel_65_g_TVALID = 0;
			src_V_pixel_66_g_TDATA = 0;
			src_V_pixel_66_g_TVALID = 0;
			src_V_pixel_67_g_TDATA = 0;
			src_V_pixel_67_g_TVALID = 0;
			src_V_pixel_68_g_TDATA = 0;
			src_V_pixel_68_g_TVALID = 0;
			src_V_pixel_69_g_TDATA = 0;
			src_V_pixel_69_g_TVALID = 0;
			src_V_pixel_70_g_TDATA = 0;
			src_V_pixel_70_g_TVALID = 0;
			src_V_pixel_0_b_TDATA = 0;
			src_V_pixel_0_b_TVALID = 0;
			src_V_pixel_1_b_TDATA = 0;
			src_V_pixel_1_b_TVALID = 0;
			src_V_pixel_2_b_TDATA = 0;
			src_V_pixel_2_b_TVALID = 0;
			src_V_pixel_3_b_TDATA = 0;
			src_V_pixel_3_b_TVALID = 0;
			src_V_pixel_4_b_TDATA = 0;
			src_V_pixel_4_b_TVALID = 0;
			src_V_pixel_5_b_TDATA = 0;
			src_V_pixel_5_b_TVALID = 0;
			src_V_pixel_6_b_TDATA = 0;
			src_V_pixel_6_b_TVALID = 0;
			src_V_pixel_7_b_TDATA = 0;
			src_V_pixel_7_b_TVALID = 0;
			src_V_pixel_8_b_TDATA = 0;
			src_V_pixel_8_b_TVALID = 0;
			src_V_pixel_9_b_TDATA = 0;
			src_V_pixel_9_b_TVALID = 0;
			src_V_pixel_10_b_TDATA = 0;
			src_V_pixel_10_b_TVALID = 0;
			src_V_pixel_11_b_TDATA = 0;
			src_V_pixel_11_b_TVALID = 0;
			src_V_pixel_12_b_TDATA = 0;
			src_V_pixel_12_b_TVALID = 0;
			src_V_pixel_13_b_TDATA = 0;
			src_V_pixel_13_b_TVALID = 0;
			src_V_pixel_14_b_TDATA = 0;
			src_V_pixel_14_b_TVALID = 0;
			src_V_pixel_15_b_TDATA = 0;
			src_V_pixel_15_b_TVALID = 0;
			src_V_pixel_16_b_TDATA = 0;
			src_V_pixel_16_b_TVALID = 0;
			src_V_pixel_17_b_TDATA = 0;
			src_V_pixel_17_b_TVALID = 0;
			src_V_pixel_18_b_TDATA = 0;
			src_V_pixel_18_b_TVALID = 0;
			src_V_pixel_19_b_TDATA = 0;
			src_V_pixel_19_b_TVALID = 0;
			src_V_pixel_20_b_TDATA = 0;
			src_V_pixel_20_b_TVALID = 0;
			src_V_pixel_21_b_TDATA = 0;
			src_V_pixel_21_b_TVALID = 0;
			src_V_pixel_22_b_TDATA = 0;
			src_V_pixel_22_b_TVALID = 0;
			src_V_pixel_23_b_TDATA = 0;
			src_V_pixel_23_b_TVALID = 0;
			src_V_pixel_24_b_TDATA = 0;
			src_V_pixel_24_b_TVALID = 0;
			src_V_pixel_25_b_TDATA = 0;
			src_V_pixel_25_b_TVALID = 0;
			src_V_pixel_26_b_TDATA = 0;
			src_V_pixel_26_b_TVALID = 0;
			src_V_pixel_27_b_TDATA = 0;
			src_V_pixel_27_b_TVALID = 0;
			src_V_pixel_28_b_TDATA = 0;
			src_V_pixel_28_b_TVALID = 0;
			src_V_pixel_29_b_TDATA = 0;
			src_V_pixel_29_b_TVALID = 0;
			src_V_pixel_30_b_TDATA = 0;
			src_V_pixel_30_b_TVALID = 0;
			src_V_pixel_31_b_TDATA = 0;
			src_V_pixel_31_b_TVALID = 0;
			src_V_pixel_32_b_TDATA = 0;
			src_V_pixel_32_b_TVALID = 0;
			src_V_pixel_33_b_TDATA = 0;
			src_V_pixel_33_b_TVALID = 0;
			src_V_pixel_34_b_TDATA = 0;
			src_V_pixel_34_b_TVALID = 0;
			src_V_pixel_35_b_TDATA = 0;
			src_V_pixel_35_b_TVALID = 0;
			src_V_pixel_36_b_TDATA = 0;
			src_V_pixel_36_b_TVALID = 0;
			src_V_pixel_37_b_TDATA = 0;
			src_V_pixel_37_b_TVALID = 0;
			src_V_pixel_38_b_TDATA = 0;
			src_V_pixel_38_b_TVALID = 0;
			src_V_pixel_39_b_TDATA = 0;
			src_V_pixel_39_b_TVALID = 0;
			src_V_pixel_40_b_TDATA = 0;
			src_V_pixel_40_b_TVALID = 0;
			src_V_pixel_41_b_TDATA = 0;
			src_V_pixel_41_b_TVALID = 0;
			src_V_pixel_42_b_TDATA = 0;
			src_V_pixel_42_b_TVALID = 0;
			src_V_pixel_43_b_TDATA = 0;
			src_V_pixel_43_b_TVALID = 0;
			src_V_pixel_44_b_TDATA = 0;
			src_V_pixel_44_b_TVALID = 0;
			src_V_pixel_45_b_TDATA = 0;
			src_V_pixel_45_b_TVALID = 0;
			src_V_pixel_46_b_TDATA = 0;
			src_V_pixel_46_b_TVALID = 0;
			src_V_pixel_47_b_TDATA = 0;
			src_V_pixel_47_b_TVALID = 0;
			src_V_pixel_48_b_TDATA = 0;
			src_V_pixel_48_b_TVALID = 0;
			src_V_pixel_49_b_TDATA = 0;
			src_V_pixel_49_b_TVALID = 0;
			src_V_pixel_50_b_TDATA = 0;
			src_V_pixel_50_b_TVALID = 0;
			src_V_pixel_51_b_TDATA = 0;
			src_V_pixel_51_b_TVALID = 0;
			src_V_pixel_52_b_TDATA = 0;
			src_V_pixel_52_b_TVALID = 0;
			src_V_pixel_53_b_TDATA = 0;
			src_V_pixel_53_b_TVALID = 0;
			src_V_pixel_54_b_TDATA = 0;
			src_V_pixel_54_b_TVALID = 0;
			src_V_pixel_55_b_TDATA = 0;
			src_V_pixel_55_b_TVALID = 0;
			src_V_pixel_56_b_TDATA = 0;
			src_V_pixel_56_b_TVALID = 0;
			src_V_pixel_57_b_TDATA = 0;
			src_V_pixel_57_b_TVALID = 0;
			src_V_pixel_58_b_TDATA = 0;
			src_V_pixel_58_b_TVALID = 0;
			src_V_pixel_59_b_TDATA = 0;
			src_V_pixel_59_b_TVALID = 0;
			src_V_pixel_60_b_TDATA = 0;
			src_V_pixel_60_b_TVALID = 0;
			src_V_pixel_61_b_TDATA = 0;
			src_V_pixel_61_b_TVALID = 0;
			src_V_pixel_62_b_TDATA = 0;
			src_V_pixel_62_b_TVALID = 0;
			src_V_pixel_63_b_TDATA = 0;
			src_V_pixel_63_b_TVALID = 0;
			src_V_pixel_64_b_TDATA = 0;
			src_V_pixel_64_b_TVALID = 0;
			src_V_pixel_65_b_TDATA = 0;
			src_V_pixel_65_b_TVALID = 0;
			src_V_pixel_66_b_TDATA = 0;
			src_V_pixel_66_b_TVALID = 0;
			src_V_pixel_67_b_TDATA = 0;
			src_V_pixel_67_b_TVALID = 0;
			src_V_pixel_68_b_TDATA = 0;
			src_V_pixel_68_b_TVALID = 0;
			src_V_pixel_69_b_TDATA = 0;
			src_V_pixel_69_b_TVALID = 0;
			src_V_pixel_70_b_TDATA = 0;
			src_V_pixel_70_b_TVALID = 0;
		end
		else
		begin
			src_V_pixel_0_r_TVALID = 1;
			src_V_pixel_1_r_TVALID = 1;
			src_V_pixel_2_r_TVALID = 1;
			src_V_pixel_3_r_TVALID = 1;
			src_V_pixel_4_r_TVALID = 1;
			src_V_pixel_5_r_TVALID = 1;
			src_V_pixel_6_r_TVALID = 1;
			src_V_pixel_7_r_TVALID = 1;
			src_V_pixel_8_r_TVALID = 1;
			src_V_pixel_9_r_TVALID = 1;
			src_V_pixel_10_r_TVALID = 1;
			src_V_pixel_11_r_TVALID = 1;
			src_V_pixel_12_r_TVALID = 1;
			src_V_pixel_13_r_TVALID = 1;
			src_V_pixel_14_r_TVALID = 1;
			src_V_pixel_15_r_TVALID = 1;
			src_V_pixel_16_r_TVALID = 1;
			src_V_pixel_17_r_TVALID = 1;
			src_V_pixel_18_r_TVALID = 1;
			src_V_pixel_19_r_TVALID = 1;
			src_V_pixel_20_r_TVALID = 1;
			src_V_pixel_21_r_TVALID = 1;
			src_V_pixel_22_r_TVALID = 1;
			src_V_pixel_23_r_TVALID = 1;
			src_V_pixel_24_r_TVALID = 1;
			src_V_pixel_25_r_TVALID = 1;
			src_V_pixel_26_r_TVALID = 1;
			src_V_pixel_27_r_TVALID = 1;
			src_V_pixel_28_r_TVALID = 1;
			src_V_pixel_29_r_TVALID = 1;
			src_V_pixel_30_r_TVALID = 1;
			src_V_pixel_31_r_TVALID = 1;
			src_V_pixel_32_r_TVALID = 1;
			src_V_pixel_33_r_TVALID = 1;
			src_V_pixel_34_r_TVALID = 1;
			src_V_pixel_35_r_TVALID = 1;
			src_V_pixel_36_r_TVALID = 1;
			src_V_pixel_37_r_TVALID = 1;
			src_V_pixel_38_r_TVALID = 1;
			src_V_pixel_39_r_TVALID = 1;
			src_V_pixel_40_r_TVALID = 1;
			src_V_pixel_41_r_TVALID = 1;
			src_V_pixel_42_r_TVALID = 1;
			src_V_pixel_43_r_TVALID = 1;
			src_V_pixel_44_r_TVALID = 1;
			src_V_pixel_45_r_TVALID = 1;
			src_V_pixel_46_r_TVALID = 1;
			src_V_pixel_47_r_TVALID = 1;
			src_V_pixel_48_r_TVALID = 1;
			src_V_pixel_49_r_TVALID = 1;
			src_V_pixel_50_r_TVALID = 1;
			src_V_pixel_51_r_TVALID = 1;
			src_V_pixel_52_r_TVALID = 1;
			src_V_pixel_53_r_TVALID = 1;
			src_V_pixel_54_r_TVALID = 1;
			src_V_pixel_55_r_TVALID = 1;
			src_V_pixel_56_r_TVALID = 1;
			src_V_pixel_57_r_TVALID = 1;
			src_V_pixel_58_r_TVALID = 1;
			src_V_pixel_59_r_TVALID = 1;
			src_V_pixel_60_r_TVALID = 1;
			src_V_pixel_61_r_TVALID = 1;
			src_V_pixel_62_r_TVALID = 1;
			src_V_pixel_63_r_TVALID = 1;
			src_V_pixel_64_r_TVALID = 1;
			src_V_pixel_65_r_TVALID = 1;
			src_V_pixel_66_r_TVALID = 1;
			src_V_pixel_67_r_TVALID = 1;
			src_V_pixel_68_r_TVALID = 1;
			src_V_pixel_69_r_TVALID = 1;
			src_V_pixel_70_r_TVALID = 1;
			src_V_pixel_0_g_TVALID = 1;
			src_V_pixel_1_g_TVALID = 1;
			src_V_pixel_2_g_TVALID = 1;
			src_V_pixel_3_g_TVALID = 1;
			src_V_pixel_4_g_TVALID = 1;
			src_V_pixel_5_g_TVALID = 1;
			src_V_pixel_6_g_TVALID = 1;
			src_V_pixel_7_g_TVALID = 1;
			src_V_pixel_8_g_TVALID = 1;
			src_V_pixel_9_g_TVALID = 1;
			src_V_pixel_10_g_TVALID = 1;
			src_V_pixel_11_g_TVALID = 1;
			src_V_pixel_12_g_TVALID = 1;
			src_V_pixel_13_g_TVALID = 1;
			src_V_pixel_14_g_TVALID = 1;
			src_V_pixel_15_g_TVALID = 1;
			src_V_pixel_16_g_TVALID = 1;
			src_V_pixel_17_g_TVALID = 1;
			src_V_pixel_18_g_TVALID = 1;
			src_V_pixel_19_g_TVALID = 1;
			src_V_pixel_20_g_TVALID = 1;
			src_V_pixel_21_g_TVALID = 1;
			src_V_pixel_22_g_TVALID = 1;
			src_V_pixel_23_g_TVALID = 1;
			src_V_pixel_24_g_TVALID = 1;
			src_V_pixel_25_g_TVALID = 1;
			src_V_pixel_26_g_TVALID = 1;
			src_V_pixel_27_g_TVALID = 1;
			src_V_pixel_28_g_TVALID = 1;
			src_V_pixel_29_g_TVALID = 1;
			src_V_pixel_30_g_TVALID = 1;
			src_V_pixel_31_g_TVALID = 1;
			src_V_pixel_32_g_TVALID = 1;
			src_V_pixel_33_g_TVALID = 1;
			src_V_pixel_34_g_TVALID = 1;
			src_V_pixel_35_g_TVALID = 1;
			src_V_pixel_36_g_TVALID = 1;
			src_V_pixel_37_g_TVALID = 1;
			src_V_pixel_38_g_TVALID = 1;
			src_V_pixel_39_g_TVALID = 1;
			src_V_pixel_40_g_TVALID = 1;
			src_V_pixel_41_g_TVALID = 1;
			src_V_pixel_42_g_TVALID = 1;
			src_V_pixel_43_g_TVALID = 1;
			src_V_pixel_44_g_TVALID = 1;
			src_V_pixel_45_g_TVALID = 1;
			src_V_pixel_46_g_TVALID = 1;
			src_V_pixel_47_g_TVALID = 1;
			src_V_pixel_48_g_TVALID = 1;
			src_V_pixel_49_g_TVALID = 1;
			src_V_pixel_50_g_TVALID = 1;
			src_V_pixel_51_g_TVALID = 1;
			src_V_pixel_52_g_TVALID = 1;
			src_V_pixel_53_g_TVALID = 1;
			src_V_pixel_54_g_TVALID = 1;
			src_V_pixel_55_g_TVALID = 1;
			src_V_pixel_56_g_TVALID = 1;
			src_V_pixel_57_g_TVALID = 1;
			src_V_pixel_58_g_TVALID = 1;
			src_V_pixel_59_g_TVALID = 1;
			src_V_pixel_60_g_TVALID = 1;
			src_V_pixel_61_g_TVALID = 1;
			src_V_pixel_62_g_TVALID = 1;
			src_V_pixel_63_g_TVALID = 1;
			src_V_pixel_64_g_TVALID = 1;
			src_V_pixel_65_g_TVALID = 1;
			src_V_pixel_66_g_TVALID = 1;
			src_V_pixel_67_g_TVALID = 1;
			src_V_pixel_68_g_TVALID = 1;
			src_V_pixel_69_g_TVALID = 1;
			src_V_pixel_70_g_TVALID = 1;
			src_V_pixel_0_b_TVALID = 1;
			src_V_pixel_1_b_TVALID = 1;
			src_V_pixel_2_b_TVALID = 1;
			src_V_pixel_3_b_TVALID = 1;
			src_V_pixel_4_b_TVALID = 1;
			src_V_pixel_5_b_TVALID = 1;
			src_V_pixel_6_b_TVALID = 1;
			src_V_pixel_7_b_TVALID = 1;
			src_V_pixel_8_b_TVALID = 1;
			src_V_pixel_9_b_TVALID = 1;
			src_V_pixel_10_b_TVALID = 1;
			src_V_pixel_11_b_TVALID = 1;
			src_V_pixel_12_b_TVALID = 1;
			src_V_pixel_13_b_TVALID = 1;
			src_V_pixel_14_b_TVALID = 1;
			src_V_pixel_15_b_TVALID = 1;
			src_V_pixel_16_b_TVALID = 1;
			src_V_pixel_17_b_TVALID = 1;
			src_V_pixel_18_b_TVALID = 1;
			src_V_pixel_19_b_TVALID = 1;
			src_V_pixel_20_b_TVALID = 1;
			src_V_pixel_21_b_TVALID = 1;
			src_V_pixel_22_b_TVALID = 1;
			src_V_pixel_23_b_TVALID = 1;
			src_V_pixel_24_b_TVALID = 1;
			src_V_pixel_25_b_TVALID = 1;
			src_V_pixel_26_b_TVALID = 1;
			src_V_pixel_27_b_TVALID = 1;
			src_V_pixel_28_b_TVALID = 1;
			src_V_pixel_29_b_TVALID = 1;
			src_V_pixel_30_b_TVALID = 1;
			src_V_pixel_31_b_TVALID = 1;
			src_V_pixel_32_b_TVALID = 1;
			src_V_pixel_33_b_TVALID = 1;
			src_V_pixel_34_b_TVALID = 1;
			src_V_pixel_35_b_TVALID = 1;
			src_V_pixel_36_b_TVALID = 1;
			src_V_pixel_37_b_TVALID = 1;
			src_V_pixel_38_b_TVALID = 1;
			src_V_pixel_39_b_TVALID = 1;
			src_V_pixel_40_b_TVALID = 1;
			src_V_pixel_41_b_TVALID = 1;
			src_V_pixel_42_b_TVALID = 1;
			src_V_pixel_43_b_TVALID = 1;
			src_V_pixel_44_b_TVALID = 1;
			src_V_pixel_45_b_TVALID = 1;
			src_V_pixel_46_b_TVALID = 1;
			src_V_pixel_47_b_TVALID = 1;
			src_V_pixel_48_b_TVALID = 1;
			src_V_pixel_49_b_TVALID = 1;
			src_V_pixel_50_b_TVALID = 1;
			src_V_pixel_51_b_TVALID = 1;
			src_V_pixel_52_b_TVALID = 1;
			src_V_pixel_53_b_TVALID = 1;
			src_V_pixel_54_b_TVALID = 1;
			src_V_pixel_55_b_TVALID = 1;
			src_V_pixel_56_b_TVALID = 1;
			src_V_pixel_57_b_TVALID = 1;
			src_V_pixel_58_b_TVALID = 1;
			src_V_pixel_59_b_TVALID = 1;
			src_V_pixel_60_b_TVALID = 1;
			src_V_pixel_61_b_TVALID = 1;
			src_V_pixel_62_b_TVALID = 1;
			src_V_pixel_63_b_TVALID = 1;
			src_V_pixel_64_b_TVALID = 1;
			src_V_pixel_65_b_TVALID = 1;
			src_V_pixel_66_b_TVALID = 1;
			src_V_pixel_67_b_TVALID = 1;
			src_V_pixel_68_b_TVALID = 1;
			src_V_pixel_69_b_TVALID = 1;
			src_V_pixel_70_b_TVALID = 1;
			if ( src_V_pixel_0_r_TREADY == 1 )
			begin
				src_V_pixel_0_r_TDATA = $random;
				src_V_pixel_1_r_TDATA = $random;
				src_V_pixel_2_r_TDATA = $random;
				src_V_pixel_3_r_TDATA = $random;
				src_V_pixel_4_r_TDATA = $random;
				src_V_pixel_5_r_TDATA = $random;
				src_V_pixel_6_r_TDATA = $random;
				src_V_pixel_7_r_TDATA = $random;
				src_V_pixel_8_r_TDATA = $random;
				src_V_pixel_9_r_TDATA = $random;
				src_V_pixel_10_r_TDATA = $random;
				src_V_pixel_11_r_TDATA = $random;
				src_V_pixel_12_r_TDATA = $random;
				src_V_pixel_13_r_TDATA = $random;
				src_V_pixel_14_r_TDATA = $random;
				src_V_pixel_15_r_TDATA = $random;
				src_V_pixel_16_r_TDATA = $random;
				src_V_pixel_17_r_TDATA = $random;
				src_V_pixel_18_r_TDATA = $random;
				src_V_pixel_19_r_TDATA = $random;
				src_V_pixel_20_r_TDATA = $random;
				src_V_pixel_21_r_TDATA = $random;
				src_V_pixel_22_r_TDATA = $random;
				src_V_pixel_23_r_TDATA = $random;
				src_V_pixel_24_r_TDATA = $random;
				src_V_pixel_25_r_TDATA = $random;
				src_V_pixel_26_r_TDATA = $random;
				src_V_pixel_27_r_TDATA = $random;
				src_V_pixel_28_r_TDATA = $random;
				src_V_pixel_29_r_TDATA = $random;
				src_V_pixel_30_r_TDATA = $random;
				src_V_pixel_31_r_TDATA = $random;
				src_V_pixel_32_r_TDATA = $random;
				src_V_pixel_33_r_TDATA = $random;
				src_V_pixel_34_r_TDATA = $random;
				src_V_pixel_35_r_TDATA = $random;
				src_V_pixel_36_r_TDATA = $random;
				src_V_pixel_37_r_TDATA = $random;
				src_V_pixel_38_r_TDATA = $random;
				src_V_pixel_39_r_TDATA = $random;
				src_V_pixel_40_r_TDATA = $random;
				src_V_pixel_41_r_TDATA = $random;
				src_V_pixel_42_r_TDATA = $random;
				src_V_pixel_43_r_TDATA = $random;
				src_V_pixel_44_r_TDATA = $random;
				src_V_pixel_45_r_TDATA = $random;
				src_V_pixel_46_r_TDATA = $random;
				src_V_pixel_47_r_TDATA = $random;
				src_V_pixel_48_r_TDATA = $random;
				src_V_pixel_49_r_TDATA = $random;
				src_V_pixel_50_r_TDATA = $random;
				src_V_pixel_51_r_TDATA = $random;
				src_V_pixel_52_r_TDATA = $random;
				src_V_pixel_53_r_TDATA = $random;
				src_V_pixel_54_r_TDATA = $random;
				src_V_pixel_55_r_TDATA = $random;
				src_V_pixel_56_r_TDATA = $random;
				src_V_pixel_57_r_TDATA = $random;
				src_V_pixel_58_r_TDATA = $random;
				src_V_pixel_59_r_TDATA = $random;
				src_V_pixel_60_r_TDATA = $random;
				src_V_pixel_61_r_TDATA = $random;
				src_V_pixel_62_r_TDATA = $random;
				src_V_pixel_63_r_TDATA = $random;
				src_V_pixel_64_r_TDATA = $random;
				src_V_pixel_65_r_TDATA = $random;
				src_V_pixel_66_r_TDATA = $random;
				src_V_pixel_67_r_TDATA = $random;
				src_V_pixel_68_r_TDATA = $random;
				src_V_pixel_69_r_TDATA = $random;
				src_V_pixel_70_r_TDATA = $random;
				src_V_pixel_0_g_TDATA = $random;
				src_V_pixel_1_g_TDATA = $random;
				src_V_pixel_2_g_TDATA = $random;
				src_V_pixel_3_g_TDATA = $random;
				src_V_pixel_4_g_TDATA = $random;
				src_V_pixel_5_g_TDATA = $random;
				src_V_pixel_6_g_TDATA = $random;
				src_V_pixel_7_g_TDATA = $random;
				src_V_pixel_8_g_TDATA = $random;
				src_V_pixel_9_g_TDATA = $random;
				src_V_pixel_10_g_TDATA = $random;
				src_V_pixel_11_g_TDATA = $random;
				src_V_pixel_12_g_TDATA = $random;
				src_V_pixel_13_g_TDATA = $random;
				src_V_pixel_14_g_TDATA = $random;
				src_V_pixel_15_g_TDATA = $random;
				src_V_pixel_16_g_TDATA = $random;
				src_V_pixel_17_g_TDATA = $random;
				src_V_pixel_18_g_TDATA = $random;
				src_V_pixel_19_g_TDATA = $random;
				src_V_pixel_20_g_TDATA = $random;
				src_V_pixel_21_g_TDATA = $random;
				src_V_pixel_22_g_TDATA = $random;
				src_V_pixel_23_g_TDATA = $random;
				src_V_pixel_24_g_TDATA = $random;
				src_V_pixel_25_g_TDATA = $random;
				src_V_pixel_26_g_TDATA = $random;
				src_V_pixel_27_g_TDATA = $random;
				src_V_pixel_28_g_TDATA = $random;
				src_V_pixel_29_g_TDATA = $random;
				src_V_pixel_30_g_TDATA = $random;
				src_V_pixel_31_g_TDATA = $random;
				src_V_pixel_32_g_TDATA = $random;
				src_V_pixel_33_g_TDATA = $random;
				src_V_pixel_34_g_TDATA = $random;
				src_V_pixel_35_g_TDATA = $random;
				src_V_pixel_36_g_TDATA = $random;
				src_V_pixel_37_g_TDATA = $random;
				src_V_pixel_38_g_TDATA = $random;
				src_V_pixel_39_g_TDATA = $random;
				src_V_pixel_40_g_TDATA = $random;
				src_V_pixel_41_g_TDATA = $random;
				src_V_pixel_42_g_TDATA = $random;
				src_V_pixel_43_g_TDATA = $random;
				src_V_pixel_44_g_TDATA = $random;
				src_V_pixel_45_g_TDATA = $random;
				src_V_pixel_46_g_TDATA = $random;
				src_V_pixel_47_g_TDATA = $random;
				src_V_pixel_48_g_TDATA = $random;
				src_V_pixel_49_g_TDATA = $random;
				src_V_pixel_50_g_TDATA = $random;
				src_V_pixel_51_g_TDATA = $random;
				src_V_pixel_52_g_TDATA = $random;
				src_V_pixel_53_g_TDATA = $random;
				src_V_pixel_54_g_TDATA = $random;
				src_V_pixel_55_g_TDATA = $random;
				src_V_pixel_56_g_TDATA = $random;
				src_V_pixel_57_g_TDATA = $random;
				src_V_pixel_58_g_TDATA = $random;
				src_V_pixel_59_g_TDATA = $random;
				src_V_pixel_60_g_TDATA = $random;
				src_V_pixel_61_g_TDATA = $random;
				src_V_pixel_62_g_TDATA = $random;
				src_V_pixel_63_g_TDATA = $random;
				src_V_pixel_64_g_TDATA = $random;
				src_V_pixel_65_g_TDATA = $random;
				src_V_pixel_66_g_TDATA = $random;
				src_V_pixel_67_g_TDATA = $random;
				src_V_pixel_68_g_TDATA = $random;
				src_V_pixel_69_g_TDATA = $random;
				src_V_pixel_70_g_TDATA = $random;
				src_V_pixel_0_b_TDATA = $random;
				src_V_pixel_1_b_TDATA = $random;
				src_V_pixel_2_b_TDATA = $random;
				src_V_pixel_3_b_TDATA = $random;
				src_V_pixel_4_b_TDATA = $random;
				src_V_pixel_5_b_TDATA = $random;
				src_V_pixel_6_b_TDATA = $random;
				src_V_pixel_7_b_TDATA = $random;
				src_V_pixel_8_b_TDATA = $random;
				src_V_pixel_9_b_TDATA = $random;
				src_V_pixel_10_b_TDATA = $random;
				src_V_pixel_11_b_TDATA = $random;
				src_V_pixel_12_b_TDATA = $random;
				src_V_pixel_13_b_TDATA = $random;
				src_V_pixel_14_b_TDATA = $random;
				src_V_pixel_15_b_TDATA = $random;
				src_V_pixel_16_b_TDATA = $random;
				src_V_pixel_17_b_TDATA = $random;
				src_V_pixel_18_b_TDATA = $random;
				src_V_pixel_19_b_TDATA = $random;
				src_V_pixel_20_b_TDATA = $random;
				src_V_pixel_21_b_TDATA = $random;
				src_V_pixel_22_b_TDATA = $random;
				src_V_pixel_23_b_TDATA = $random;
				src_V_pixel_24_b_TDATA = $random;
				src_V_pixel_25_b_TDATA = $random;
				src_V_pixel_26_b_TDATA = $random;
				src_V_pixel_27_b_TDATA = $random;
				src_V_pixel_28_b_TDATA = $random;
				src_V_pixel_29_b_TDATA = $random;
				src_V_pixel_30_b_TDATA = $random;
				src_V_pixel_31_b_TDATA = $random;
				src_V_pixel_32_b_TDATA = $random;
				src_V_pixel_33_b_TDATA = $random;
				src_V_pixel_34_b_TDATA = $random;
				src_V_pixel_35_b_TDATA = $random;
				src_V_pixel_36_b_TDATA = $random;
				src_V_pixel_37_b_TDATA = $random;
				src_V_pixel_38_b_TDATA = $random;
				src_V_pixel_39_b_TDATA = $random;
				src_V_pixel_40_b_TDATA = $random;
				src_V_pixel_41_b_TDATA = $random;
				src_V_pixel_42_b_TDATA = $random;
				src_V_pixel_43_b_TDATA = $random;
				src_V_pixel_44_b_TDATA = $random;
				src_V_pixel_45_b_TDATA = $random;
				src_V_pixel_46_b_TDATA = $random;
				src_V_pixel_47_b_TDATA = $random;
				src_V_pixel_48_b_TDATA = $random;
				src_V_pixel_49_b_TDATA = $random;
				src_V_pixel_50_b_TDATA = $random;
				src_V_pixel_51_b_TDATA = $random;
				src_V_pixel_52_b_TDATA = $random;
				src_V_pixel_53_b_TDATA = $random;
				src_V_pixel_54_b_TDATA = $random;
				src_V_pixel_55_b_TDATA = $random;
				src_V_pixel_56_b_TDATA = $random;
				src_V_pixel_57_b_TDATA = $random;
				src_V_pixel_58_b_TDATA = $random;
				src_V_pixel_59_b_TDATA = $random;
				src_V_pixel_60_b_TDATA = $random;
				src_V_pixel_61_b_TDATA = $random;
				src_V_pixel_62_b_TDATA = $random;
				src_V_pixel_63_b_TDATA = $random;
				src_V_pixel_64_b_TDATA = $random;
				src_V_pixel_65_b_TDATA = $random;
				src_V_pixel_66_b_TDATA = $random;
				src_V_pixel_67_b_TDATA = $random;
				src_V_pixel_68_b_TDATA = $random;
				src_V_pixel_69_b_TDATA = $random;
				src_V_pixel_70_b_TDATA = $random;
			end
		end
	end

	reg [15:0] mag_V_pixel_0_TVALID_count_out;
	reg [31:0] clock_count_out;
	throughput_calculator_v2 tc(
		mag_V_pixel_0_TVALID,
		ap_start,
		ap_done,
		ap_clk,
		ap_rst_n,
		mag_V_pixel_0_TVALID_count_out,
		clock_count_out
	);

	integer throughput_analysis;
	initial begin
		throughput_analysis = $fopen( "throughput_analysis_report.txt","w");
	end
	always @*
	begin
		if ( !$isunknown(mag_V_pixel_0_TVALID_count_out ) )
		begin
			$display("Valid output count:%d", mag_V_pixel_0_TVALID_count_out);
			$fwrite(throughput_analysis, "Valid output count:%d\n", mag_V_pixel_0_TVALID_count_out);
			$display("Total clock count:%d", clock_count_out);
			$fwrite(throughput_analysis, "Total clock count:%d\n", clock_count_out);
			$finish;
		end
	end
endmodule

module throughput_calculator_v2#
(
    parameter integer C_SIGNAL_COUNT_DATA_WIDTH     = 16,
    parameter integer C_CLOCK_COUNT_DATA_WIDTH = 32
)(
    input signal_in,
    input ap_start,
    input ap_done,
    input clk,
    input rstn,
    output reg [C_SIGNAL_COUNT_DATA_WIDTH-1:0] signal_count_out,
    output reg [C_CLOCK_COUNT_DATA_WIDTH-1:0] clock_count_out
);
    reg [C_SIGNAL_COUNT_DATA_WIDTH-1:0] signal_count;
    reg [C_CLOCK_COUNT_DATA_WIDTH-1:0] clock_count;
    always @(posedge clk)
    begin
        if (rstn == 0)
        begin
            signal_count = 0;
            clock_count = 0;
        end
        else
        begin
            if (ap_start == 1)
            begin
                clock_count = clock_count + 1;
                if ( signal_in == 1 )
                    signal_count = signal_count + 1;
            end
            if ( ap_done == 1 )
            begin
                signal_count_out <= signal_count;
                clock_count_out <= clock_count;
                signal_count = 0;
                clock_count = 0;
            end
        end
    end
endmodule
