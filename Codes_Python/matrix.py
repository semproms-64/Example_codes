Matrix = [[0 for x in range(5)] for x in range(5)]

# Here we define a list containing 5 lists all of them inicialized to 0

print Matrix

for d1 in range(5):
	for d2 in range(5):
		Matrix[d1][d2] = d1+d2
		
print Matrix
