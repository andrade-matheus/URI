n = int(input())
for i in range(n):
    formula = input()
    pri = int(formula[0])
    seg = int(formula[4])

    if(formula[2] == '+'):
        res = pri + seg

    if(formula[2] == '-'):
        res = pri - seg

    if(formula[2] == 'x'):
        res = pri * seg

    res = int(formula[8:]) - res
    res = abs(res)

    print('E' + res*'r' + 'ou!')
