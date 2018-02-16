`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:17:32 06/27/2016 
// Design Name: 
// Module Name:    sender1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sender1(RTS,CTS,clk,out
    );

output reg RTS;
input CTS;
input clk;
output reg[0:65]out;
wire[15:0]temp1;
wire finish1;
reg [49:0]mem[0:8];
reg [3:0]counter;
initial
begin
$readmemb("crc.dat", mem, 0, 8);
/*
mem[0]=50'b00000000000011000000000000000000000000000011111111;
mem[1]=50'b10010110101101001011010111010101010111101011000000;
mem[2]=50'b10010110101101001011010111010101011111110001000011;
mem[3]=50'b10010110101101001011010111010101011111110001000111;
mem[4]=50'b10010110101101001011010111010101011111110001001111;
mem[5]=50'b10010110101101001011010111010101011111110001011111;
mem[6]=50'b10010110101101001011010111010101011111110001001011;
mem[7]=50'b10010110101101001011010111010101011111110001001101;
mem[8]=50'b10010110101101001011010111010101011111110001010011;
*/
counter=0;
end
crc checker1 (
    .data(mem[counter]), 
    .out(temp1), 
    .finish(finish1), 
    .clk(clk), 
    .en(CTS)
    );
always@(posedge clk)
begin
if(CTS==1)
begin
RTS<=1;
if(finish1==1)
begin
out[0:49]<=mem[counter];
out[50:65]<=temp1;
counter<=counter+1;
RTS<=0;
end
end
else
begin
RTS<=1;
end
end
endmodule
