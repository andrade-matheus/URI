#1973

n = int(input())
i = 0
cont = 0

for i in range(n):
    estrelas = list(map(int, input.split()))


while(i < n):
    if(estrelas[i] > 0):
        if(estrelas[i] % 2 == 0):
            i += 1
        else:
            i -= 1
        cont += 1

soma = sum(estrelas)
