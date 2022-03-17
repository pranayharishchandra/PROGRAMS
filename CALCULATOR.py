#CALCULATOR
def calc(a,b,c):
    if c == '+':
        res = a+b
        return res

    elif c == '-':
        res = a-b
        return res

    elif c == '*':
        res = a*b
        return res

    elif c == '/':
        res = a/b
        return res

print("WELCOME TO CALULATOR \nPRESS 'e e' TO EXIT \n>>",end = "")
a,c,b = map(str,input().split(" "))
a,b = int(a), int(b)

count = 0
e = "f"
while e != "e":
    if count == 0:
        res = calc(a,b,c)
        if res == res//1:
            res = int(res)
        print(res)
        count +=1
    else:
        print(f">>{res}",end = " ")
        c,b = map(str, input().split(" "))
        if b == c:
            break
        else:            
            b = int(b)
            res = calc(res,b,c)
            if res == res//1:
                res = int(res)
            print(res)
print("HAVE A NICE DAY")
    


p = map(str, input().split(" "))
q = map(str,'e')
print(p,q)
if p == q:
    print(True)
else:
    print(False)

