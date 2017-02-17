import sys

collection = []

def main():
	collection.append(1)
	collection.append(2)
	collection.append(5)
	collection.append(13)

	for x in range(4,1001):
		collection.append(collection[x-1]+collection[x-2]+collection[x-3]+collection[x-1])

	for n in sys.stdin:
		try:
			print(collection[int(float(n))])
		except Exception:
			print(0)
		
	


if __name__ == "__main__":
	main()



