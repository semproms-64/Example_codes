import threading

def worker():
	print 'Probando_worker_1'
	return

def worker_2():
	print 'Probando_worker_2'
	return

threads = list() #A list of threads

for i in range(3):
	t = threading.Thread(target=worker)
	p = threading.Thread(target=worker_2)
	threads.append(p)
	threads.append(t)
	t.start()
	p.start()
