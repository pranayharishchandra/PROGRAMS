# prime numbers between two numbers
from math import sqrt

print(">",end="")
f,l = map(int,input().split())

def prime(n):
    flag = True
    l = int(sqrt(n))  

    for i in range(2,l + 1): # YOU HAVE TO MAKE LOOP RUN FOR "<= sqrt(n)" not "< sqrt(n)" this adding 1 to make sqrt(n) inclusive kind of
        if n%i == 0:
            # flag = False
            # break
            return False
    return flag


for i in range(f,l):
    if prime(i):
        print(i)




