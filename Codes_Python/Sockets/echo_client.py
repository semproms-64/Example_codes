import socket

def fibo(num):
	if num <= 1:
		return num
	else:
		return fibo(num-1) + fibo(num-2)

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)


for i in xrange(0,8):
	sendData = str(fibo(i))
	sock.sendto(sendData,('localhost', 8881))
	response = sock.recv(8192)
	print 'Received:', response
sock.close()