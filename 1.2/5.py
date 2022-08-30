n = int(input("ENter n: "))
for i in range(n):
	for j in range(n-i,0,-1):
		print("*",end="")
	print()
