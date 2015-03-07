def fibo(n):
	if n <= 1:
		return n
	else:
		return fibo(n-1)+fibo(n-2)

for i in xrange(0,25):
	print fibo(i)