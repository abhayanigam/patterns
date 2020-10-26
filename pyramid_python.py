# Pyramid pattern in python
def pypart(n):
	for i in range(0, n): 
		for j in range(0, i+1): 
			print("* ")  
		print("\r") 

n = int(input("Enter the value of n :"))
pypart(n)