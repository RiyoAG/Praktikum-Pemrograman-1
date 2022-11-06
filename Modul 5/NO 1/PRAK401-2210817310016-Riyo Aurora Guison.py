a, k = input().split ()
a=int(a)
for i in range (1,51):
    if(i%a==0):
        print(k,end='')
    else:
        print(i,end='')