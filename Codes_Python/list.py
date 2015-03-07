l1 = [1,2,3,4,5] #A single list
print l1 #We print the list
l2 = ['caballeros','mesa','cuadrada'] #Another list (boring)
l3 = l1 + l2 #Join the two lists
print l3 #Print the result
print l3[5] #We print the 5 element of the list
print len(l1) #We print the length of l1
print len(l2) #We print the length of l2
print l1 #We print l1
del l1[1] #Deleting the 1 element of l1
print l1 #We print l1
l1.append(512) #We add an element
print l1 #Printing l1
del l1[:] #Empty 
print l1 #Printing l1