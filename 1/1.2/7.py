n = int (input("Enter n: "))
for i in range(n):
	for k in range(0,i+2,2):
		print("*",end="")
	print()
