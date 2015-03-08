import socket
#Let's create sockets
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind(('',8881))


#We need a loop here
try:
	while True:
		data, address = s.recvfrom(8192)
		print 'Datagram from', address
		s.sendto(data, address)
		print 'Data received: ', data
finally:
	s.close()
