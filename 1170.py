#1170

n = int(input())

for i in range(n):
	qntd = float(input())
	cont = 0
	while(qntd > 0):
		if(qntd <= 1):
			break
		qntd = qntd//2
		cont += 1
	print(str(cont) + ' dias')
