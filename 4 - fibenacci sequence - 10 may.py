# fibenacci series
from math import sqrt

print(">",end="")
n = int(input())
a = 0
b = 1
print(0 )

for i in range(n):
    temp = a+b
    a = b
    b = temp
    print(a)





