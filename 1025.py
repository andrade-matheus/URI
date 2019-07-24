#1025
n = 1
q = 1
case = 1
marmores = []
n, q = map(int, input().split())

while((n != 0 ) and (q != 0)):
    print('CASE# ' + str(case) + ':')
    for i in range(n):
        marmores.append(int(input()))

    marmores.sort()

    for i in range(q):
        valor = int(input())
        try:
            pos = marmores.index(valor) + 1
            print(str(valor) + ' found at ' + str(pos))

        except ValueError:
            print(str(valor) + ' not found')

    case += 1
    n, q = map(int, input().split())
    marmores = []
