`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:16:44 06/27/2016 
// Design Name: 
// Module Name:    main 
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
module main(clk
    );
	 input clk;
	 wire temp1;
	 wire temp2;
	 wire[0:65]temp3;
	 wire[0:65]temp4;
sender1 sender (
    .RTS(temp1), 
    .CTS(temp2), 
    .clk(clk), 
    .out(temp3)
    );
noise noiser (
    .data(temp3), 
    .out(temp4)
    );
receiver1 reciver (
    .clk(clk), 
    .RTS(temp1), 
    .CTS(temp2), 
    .data(temp4)
    );

endmodule
