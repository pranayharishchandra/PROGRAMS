print("WELCOME TO COUNTING A STRING IN A TEXT PROGRAM")
print('''
-----------------------------------------
             INPUT
-----------------------------------------\n''')

a = input("ENTER TEXT \n>>")
len_a = len(a)
t = int(input('''HOW MANY WORDS YOU WANT TO SEARCH\n>>'''))
s = []

for i in range(t):
    q = input("ENTER STRING YOU WANT TO SEARCH \n>>")
    s.append(q)

print('''
-----------------------------------------
          USING ITERATION
-----------------------------------------\n''')


for i in s:
    
    i_ = list(a.split(f"{i}"))                     #breaking the string through the string whose occurrence we want to 

    count = 0
    for kk in i_:
        count += len(kk)                           #counting the lenght of the sub-strings which formed due to spliting and counting their lenght

    occ_i_ = (len_a - count)/len(i)                #(total lenght) - (lenght after we removed all the stirng in text) = (total number of characters removed i.e. the stings we want to remove) / (lenght of string )
                                                   # since if 6 characters are removed ... if stirng was -> "and" means occurrence is -> 6/3 = 2 
                                                   # since if 6 characters are removed ... if stirng was -> "or" means occurrence is -> 6/2 = 3
    occ_i_ = int(occ_i_) 

    print(f"\nOCCURENCE OF '{i}' IS = {occ_i_} ")
    occ_i_ = 0                                       #reseting it's value for new itration

###############################################################
print('''
-----------------------------------------
           USING RECURSION
-----------------------------------------\n''')
def countt(tex,s,count):
    if len(tex) == 0:                                                 #condition 1
        return count
    if s not in tex :                                                 # #condition 2
        return count
                                                                      # giving these BASE CONDITIONS first 
    
    if s in tex:
        count += 1
        i = tex.index(s)
        return countt(tex[i+len(s):],s,count)                          #recucing the lenght(from the begnning) how much we have checked and passing the reduced length since 
                                                                       #since our find function only check for 1st index from the beginning

while True:
    # tex = input("ENTER TEXT : \n")
    tex = a
    # t = int(input('''HOW MANY WORDS YOU WANT TO SEARCH\n>>'''))
    for i in range(t):
        # p = input("WHAT STRING OCCURRENCE YOU WANT TO KNOW : \n")
        p = s[i]
        
        print(f"\nOCCURENCE OF '{p}' IS = {countt(tex,p,0)} ")
    a = input("WRITE 'exit' to end and any key to continue \n>>")
    if a == "exit":
        break
print("THANK YOU")