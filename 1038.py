#1038
op, qntd = input().split()

op = int(op)
qntd = float(qntd)

if(op == 1):
	print('Total: R$ {0:.2f}'.format(qntd*4))
elif(op == 2):
	print('Total: R$ {0:.2f}'.format(qntd*4.5))
elif(op == 3):
	print('Total: R$ {0:.2f}'.format(qntd*5))
elif(op == 4):
	print('Total: R$ {0:.2f}'.format(qntd*2))
elif(op == 5):
	print('Total: R$ {0:.2f}'.format(qntd*1.5))
