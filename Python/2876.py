N, M, L, R = map(int, input().split())
print(N, M, L, R)
cont = 0
cont += (M*(N-1)) + (N*(M-1))
print('Resultado  =', (M*(N-1)) + (N*(M-1)))
print('Contagem  =', cont)

if (R > 1):
    cont += (M-1) * (N*(N-1))
    print('Resultado  =', (M-1) * (N*(N-1)))
    print('Contagem  =', cont)

if(M > 2):
    cont += (N-1) * ((M*(M-3))+2)
    print('Resultado  =', (N-1) * ((M*(M-3))+2))
    print('Contagem  =', cont)
