# pascal triangle

n = int(input(">"))
def factorial(n):
    if n == 0 or n == 1:
        return 1
    for i in range(2,n):
        n = n*i
    return n

for row in range(n):
    for col in range(row+1):
        e = factorial(row) / (factorial(row - col) * factorial(col))
        print(int(e),end=" ")
    print()







