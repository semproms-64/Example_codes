file = open('/home/semproms/myFile.dat', 'r+')
str = file.read(50)
print 'I have read:\n ', str
file.close()