#1459

n = int(input())

inicio, fim_ant = map(int, input().split())

for i in range(n-1):
    inicio, fim = map(int, input().split())
    if(inicio >= fim_ant):
        
