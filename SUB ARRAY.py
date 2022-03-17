
l = [1,2,3]
count = 0
sum = 0
for i in range(0,len(l)):
    for j in range(i,len(l)):
        for k in range(i,j+1):
            print(l[k],end = " ")
            sum += l[k]
        count +=1
        print(f"\nsum of array[{count}] = {sum}")
        sum = 0
    print("\n")

print("number of subarrays =" , count)