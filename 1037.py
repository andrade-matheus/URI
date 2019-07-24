#1037
valor = float(input())

if(valor >= 0):
	if(valor > 25):
		if(valor > 50):
			if(valor > 75):
				if(valor > 100):
					print('Fora de intervalo')
				else:
					print('Intervalo (75,100]')
			else:
				print('Intervalo (50,75]')
		else:
			print('Intervalo (25,50]')
	else:
		print('Intervalo [0,25]')
else:
	print('Fora de intervalo')
