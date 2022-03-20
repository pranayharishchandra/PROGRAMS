
#KICKSTART  
# - https://youtu.be/eJcBH0xvG98?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&t=961 
# - longest consiquestive subarray
#17 march 7pm
a = []
count = 1
t = int(input("enter number of elements in the array : "))
for i in range(t):
    b = int(input("enter number : "))
    a.append(b)

# now i am storing differnce between 2 consiquetive numvbers... 
# and then i will compare if the difference of the diff is zero means the numbers(differneces) were same and the numbers whose diff the were are in AP 
for i in range(1,t):
    diff = abs(a[i-1] - a[i])
    a.append(diff)
#total length of a would be = ( len(a)*2 - 1 )
for i in range(t):
    a.pop(0)

print("differences = " ,a)

#a lenth will now become = len(a) - 1
s = []
b = 0#least possble non negative number

for i in range(1,t-1):#this loop is to check the differences.... are the differences sames
    if a[i-1] - a[i] == 0:
        count = count + 1
    # else: 
    #     if count > b: #biggest number you keep
    #         b = count
    # if i == t-2:
    #     if count > b: #biggest number you keep
    #         b = count

    #i have combined above 2 condiitons into 1 like this.... 

    if  a[i-1] - a[i] != 0 or i == t-2:
        s.append(count + 1)
        if count > b: #biggest number you keep
            b = count
            
        count = 1     #keep this out because you want to reset count to 1 whenever diff is not consiquetive

print("possible subarray lengths = ",end = "") #the last element of this is has some problem for some cases... sometimes 2 is not printed some times printed... but this program gives correct answer ignore the last element
print(s)
print("max length of subarray possible = ",b+1)



# ONE MORE PROGRAM BY ME TO SOLVE THIS - 20 march 11pm
t = int(input("enter number of test cases"))
arr = []
for i in range(t):
    ele = int(input("enter elements = "))
    arr.append(ele)

lenn = 2
count = 2
diff = arr[0] - arr[1]
for i in range(2,t):
    diff = abs(arr[i-2] - arr[i-1])
    diff2 = abs(arr[i] - arr[i-1])
    if diff2 == diff:
        count += 1
    else :
        if lenn < count:
            lenn = count
    if i == t-1:
        if lenn < count:
            lenn = count

print(lenn)

