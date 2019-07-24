#1514

def caso_1(m, matriz):
    for time in matriz:
        if(sum(time) == m):
            return False
    return True

def caso_2(soma_colunas):
    for valor in soma_colunas:
        if(valor == 0):
            return False
    return True

def caso_3(n, soma_colunas):
    for valor in soma_colunas:
        if(valor == n):
            return False
    return True

def caso_4(matriz):
    for times in matriz:
        if(sum(times) == 0):
            return False
    return True

n, m = map(int, input().split())


while((n != 0) and (m != 0)):

    exrc = []
    time = []
    cont = 0

    for i in range(n):
        time = list(map(int, input().split()))
        exrc.append(time)

    if(caso_1(m, exrc)):
        #print('CASO 1')
        cont += 1

    if(caso_2(list(map(sum, zip(*exrc))))):
        #print('CASO 2')
        cont += 1

    if(caso_3(n, list(map(sum, zip(*exrc))))):
        #print('CASO 3')
        cont += 1

    if(caso_4(exrc)):
        #print('CASO 4')
        cont += 1

    print(cont)
    n, m = map(int, input().split())
