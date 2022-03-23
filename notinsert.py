# a = [1, 2, 3, 4, 5]
# b = [0, 6, 4, 7]

print("enter 1st list giving single space\n>>",end = "")
a = list(map(int, input().split(" ")))
print("enter index and it's value giving single space\n>>",end = "")
b = list(map(int, input().split(" ")))

b_len = len(b)//2
count = 0

for i in range(b_len):
    a.append(None)

# print(a)
# print(len(a))
for i in range(0, len(b), 2):
    idx = b[i]

    la = len(a) - b_len - 1 + count

    # print('''--------------------------------\n''')

    while (la >= idx):
        #   print("la is",la)
        a[la+1] = a[la]
    #   print("index is ", idx)

        if la == idx:
            # print("------>",a)
            a[idx] = b[i+1]
    #   print("------>",a,"\n")

        la = la - 1

    # print(a)
    count += 1

print('''________________________________\n''')
print("ANSWER--->", a)
print('''________________________________\n''')
