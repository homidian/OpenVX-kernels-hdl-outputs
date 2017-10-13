// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Sobel_rgb2yuv_bt709 (
        ap_clk,
        ap_rst,
        r,
        g,
        b,
        ap_return,
        ap_ce
);

parameter    ap_const_lv8_0 = 8'b00000000;
parameter    ap_const_lv12_0 = 12'b000000000000;
parameter    ap_const_lv9_0 = 9'b000000000;
parameter    ap_const_lv32_10 = 32'b10000;
parameter    ap_const_lv32_17 = 32'b10111;
parameter    ap_const_lv24_B7 = 24'b10110111;
parameter    ap_const_lv23_36 = 23'b110110;

input   ap_clk;
input   ap_rst;
input  [7:0] r;
input  [7:0] g;
input  [7:0] b;
output  [7:0] ap_return;
input   ap_ce;

reg   [7:0] b_read_reg_132;
reg   [7:0] g_read_reg_138;
reg   [7:0] r_read_reg_143;
wire   [15:0] f_r_fu_48_p3;
wire   [15:0] f_g_fu_55_p3;
wire   [19:0] p_shl_fu_70_p3;
wire   [16:0] p_shl1_fu_81_p3;
wire   [20:0] p_shl1_cast_fu_88_p1;
wire   [20:0] p_shl_cast_fu_77_p1;
wire   [20:0] tmp_5_fu_92_p2;
wire   [22:0] grp_fu_123_p3;
wire   [23:0] grp_fu_114_p3;
wire   [15:0] grp_fu_114_p0;
wire   [8:0] grp_fu_114_p1;
wire   [22:0] grp_fu_114_p2;
wire   [15:0] grp_fu_123_p0;
wire   [6:0] grp_fu_123_p1;
wire   [20:0] grp_fu_123_p2;
wire   [23:0] grp_fu_114_p00;
wire   [23:0] grp_fu_114_p20;
wire   [22:0] grp_fu_123_p00;
wire   [22:0] grp_fu_123_p20;

Sobel_mac_muladd_16ns_9ns_23ns_24_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .din2_WIDTH( 23 ),
    .dout_WIDTH( 24 ))
Sobel_mac_muladd_16ns_9ns_23ns_24_1_U253(
    .din0(grp_fu_114_p0),
    .din1(grp_fu_114_p1),
    .din2(grp_fu_114_p2),
    .dout(grp_fu_114_p3)
);

Sobel_mac_muladd_16ns_7ns_21ns_23_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 7 ),
    .din2_WIDTH( 21 ),
    .dout_WIDTH( 23 ))
Sobel_mac_muladd_16ns_7ns_21ns_23_1_U254(
    .din0(grp_fu_123_p0),
    .din1(grp_fu_123_p1),
    .din2(grp_fu_123_p2),
    .dout(grp_fu_123_p3)
);

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        b_read_reg_132 <= b;
        g_read_reg_138 <= g;
        r_read_reg_143 <= r;
    end
end

assign ap_return = {{grp_fu_114_p3[ap_const_lv32_17 : ap_const_lv32_10]}};

assign f_g_fu_55_p3 = {{g_read_reg_138}, {ap_const_lv8_0}};

assign f_r_fu_48_p3 = {{r_read_reg_143}, {ap_const_lv8_0}};

assign grp_fu_114_p0 = grp_fu_114_p00;

assign grp_fu_114_p00 = f_g_fu_55_p3;

assign grp_fu_114_p1 = ap_const_lv24_B7;

assign grp_fu_114_p2 = grp_fu_114_p20;

assign grp_fu_114_p20 = grp_fu_123_p3;

assign grp_fu_123_p0 = grp_fu_123_p00;

assign grp_fu_123_p00 = f_r_fu_48_p3;

assign grp_fu_123_p1 = ap_const_lv23_36;

assign grp_fu_123_p2 = grp_fu_123_p20;

assign grp_fu_123_p20 = tmp_5_fu_92_p2;

assign p_shl1_cast_fu_88_p1 = p_shl1_fu_81_p3;

assign p_shl1_fu_81_p3 = {{b_read_reg_132}, {ap_const_lv9_0}};

assign p_shl_cast_fu_77_p1 = p_shl_fu_70_p3;

assign p_shl_fu_70_p3 = {{b_read_reg_132}, {ap_const_lv12_0}};

assign tmp_5_fu_92_p2 = (p_shl1_cast_fu_88_p1 + p_shl_cast_fu_77_p1);

endmodule //Sobel_rgb2yuv_bt709
