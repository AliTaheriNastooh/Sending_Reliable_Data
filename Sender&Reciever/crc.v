`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:07 06/28/2016 
// Design Name: 
// Module Name:    crc 
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
module crc(data,out,finish,clk,en
    );
input en;
input clk;
input [0:49]data;
output reg [15:0]out;
reg [15:0]temp;
output reg finish;
reg[0:6] i;
integer j;
reg s;
initial
	begin
	s=0;
	temp=0;
	i=0;
end
always@(posedge clk)
begin
	if(en==1)
	begin
		if(i==50)
		begin
			finish<=1;
			out<=temp[15:0];
			i<=0;
			temp<=0;
		end
	else
	begin
		finish<=0;
		s=temp[15]^data[i];
		temp[0]<=s;
		temp[1]<=temp[0];
		temp[2]<=temp[1]^s;
		temp[3]<=temp[2];
		temp[4]<=temp[3];
		temp[5]<=temp[4];
		temp[6]<=temp[5];
		temp[7]<=temp[6];
		temp[8]<=temp[7];
		temp[9]<=temp[8];
		temp[10]<=temp[9];
		temp[11]<=temp[10];
		temp[12]<=temp[11];
		temp[13]<=temp[12];
		temp[14]<=temp[13];
		temp[15]<=temp[14]^s;
		i<=i+1;
	end
	end
end
endmodule
