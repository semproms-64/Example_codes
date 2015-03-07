file = open('/home/semproms/myFile.dat', 'w+')
file.write('I am just trying\n')
for i in xrange(1,10):
	file.write(str(i)+'\n')
file.close()
