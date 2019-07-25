#1015
import math

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

x = (x2-x1)**2
y = (y2-y1)**2

print('{:0.4f}'.format(math.sqrt(x + y)))
