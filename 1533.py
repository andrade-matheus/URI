#1533

n = int(input())
while (n != 0):
    numeros = list(map(int, input().split()))

    maior_1 = 0
    maior_2 = 0

    for x in numeros:
        if(x > maior_2):
            if(x > maior_1):
                maior_2 = maior_1
                maior_1 = x
            else:
                maior_2 = x

    print(numeros.index(maior_2) + 1)
    n = int(input())
