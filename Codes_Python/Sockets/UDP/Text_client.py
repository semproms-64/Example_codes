import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)


IP_direction = raw_input('IP: ')
name = raw_input('Select a name: ')

def main():
	try:
		while True:
			print name+': ',
			x = raw_input()
			if x.strip() == 'exit':
				sock.sendto(name+' has gone',(IP_direction,8881))
				break
			else:
				sock.sendto(x,(IP_direction,8881))
	finally:
		sock.close()

if __name__ == "__main__":
    main()


