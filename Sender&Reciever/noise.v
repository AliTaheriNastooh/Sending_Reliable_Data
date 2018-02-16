`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:20:57 06/27/2016 
// Design Name: 
// Module Name:    noise 
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
module noise(data,out
    );
input [0:65] data;
output reg[0:65]out;
reg [0:4]counter;
parameter[0:4] r=5'd100011;
initial
begin
	counter=0;
end
always@(data)
begin
	if(counter==2|| counter==1)
	begin
		counter=counter+1;
		out[0:r-1]=data[0:r-1];
		if(data[r]==0)
		begin
			out[r]=1;
		end
		else
		begin
			out[r]=0;
		end
		out[r+1:65]=data[r+1:65];
	end
	else
	begin
		out=data;
		counter=counter+1;
	end

end

endmodule
