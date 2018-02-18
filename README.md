# Sending_Reliable_Data
Sender and Receiver


at first you must search about and learn CRC algorithm. Project goal is to read some 50-bit data from a file and calculate CRC checksum 
for it and then add the checksum to read data, then send to receiver module. But for sending any chunk of data, at first, 
sender should send a request to send (RTS) for receiver. If receiver sent clear to send (CTS) to sender, it can send data, but if not, 
it should wait and retry. On the other hand, receiver should recalculate CRC for received data and compare it with received CRC. 
If they were equal, prints ok and sequence number (number of packet arrived), if not equal, prints ERROR and sequence number.
But it's not necessary to request for that packet again. For CRC algorithm, use CRC-16 which is used in USB data transmission 
protocol with its standard generator polynomial.
