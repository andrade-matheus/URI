import statistics as st

while True:
    try:
        H, M = map(int, input().split())
        X = list(map(float, input().split()))

        QT = len(X)
        media = st.median(X)
        precisao = 0.00

        for xi in X:
            precisao += ((xi - media)**2)/(QT-1)

        print(X)
        print(H, M, QT)
        print('{0:.4f}'.format(media))
        print('{0:.4f}'.format(precisao))
        print()

    except EOFError as e:
        break
