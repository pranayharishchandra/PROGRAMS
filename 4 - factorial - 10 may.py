# factorial

def factorial(n):
    for i in range(2,n):
        n = n*i
    return n
while True:
    print(">",end="")
    n = int(input())
    print(factorial(n))





