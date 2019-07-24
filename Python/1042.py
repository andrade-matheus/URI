#1042

A, B, C = map(int, input().split())

if(A < B):
	if(A < C):
		print(A)
		if(B < C):
			print(B)
			print(C)
		else:
			print(C)
			print(B)
	else:
		print(C)
		print(A)
		print(B)
else:
	if(A < C):
		print(B)
		print(A)
		print(C)
	else:
		if(B < C):
			print(B)
			print(C)
		else:
			print(C)
			print(B)
		print(A)

print('')
print(A)
print(B)
print(C)
