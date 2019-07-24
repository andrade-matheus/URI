#2720
#MUITO GRANDE MUITO PROBLEMA...

def add_presente(item, presentes):
    if(len(presentes) == k):
        if(presente[1] == menor):
            if(menor > volume):
                menor = volume
                presentes.append(item)
                break
    else:
        if(menor > volume):
            menor = volume
            presentes.append(item)

#Inicio Main
n = int(input())
n, k = map(int, input().split())

presentes = []
item = []
num, h, w, l = map(int, input().split())
volume = h*w*l
menor = volume
item.apend(num)
item.apend(volume)
presentes.append(item)

for i in range(n):
    item = []
    num, h, w, l = map(int, input().split())
    volume = h*w*l
    for presente in presentes:
        item.apend(num)
        item.apend(volume)
        presentes.append(item)

for presente in presentes:
    print(presente[0])
