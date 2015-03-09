import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind(('',8881))

try:
	while True:
		print 'Server ready...' 
		data, address = sock.recvfrom(8192)
		print 'Datagram received from ', address
		print 'Data received: ', data
finally:
	sock.close()
