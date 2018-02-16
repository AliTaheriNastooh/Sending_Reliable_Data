`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:18:30 06/27/2016 
// Design Name: 
// Module Name:    receiver1 
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
module receiver1(clk,RTS,CTS,data
    );
input clk;
input RTS;
output reg CTS;
input [0:65]data;
wire [15:0]temp;
wire finish1;
reg [0:3]counter;
reg en;
initial
begin
counter=0;
CTS<=1;
en<=0;
end
crc2 checker2 (
    .data(data), 
    .out(temp), 
    .finish(finish1), 
    .clk(clk),
    .en(en)
    );
always@(posedge clk)
begin
	if(RTS==0 || CTS==0)
	begin
		CTS<=0;
		en<=1;
		if (finish1==1)
		begin
			if(temp==0)
			begin
				$display("the packet %d succesfull arived",counter);
			end
			else
			begin
				$display("the packet %d not succesfull arived",counter);
			end
			counter=counter+1;
			en<=0;
			CTS<=1;
		end
		else
		begin
		end
	end
	else
	begin
		en<=0;
	end
end
endmodule
