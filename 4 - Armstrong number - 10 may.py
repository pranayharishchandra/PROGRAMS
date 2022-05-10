#Armstrong number

a = int(input(">"))
n = a
r = 0
arm = 0
while (n != 0):
    # print(f"n is {n}")
    # print(f"r is {r} \n")
    r =  (n%10)
    arm = r**3 + arm
    n = n // 10
print(arm)
print(arm == a)
