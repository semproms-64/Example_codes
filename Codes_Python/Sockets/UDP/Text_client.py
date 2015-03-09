import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

name = raw_input('Select a name: ')


try:
	while True:
		x = raw_input(name+': ')
		sock.sendto(x,('localhost',8881))
finally:
	sock.close()
