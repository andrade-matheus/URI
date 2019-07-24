#1020
total_dias = int(input())

anos = total_dias//365

total_dias -= anos*365

meses = total_dias//30

total_dias -= meses*30

dias = total_dias

print(str(anos) + ' ano(s)')
print(str(meses) + ' mes(es)')
print(str(dias) + ' dia(s)')
