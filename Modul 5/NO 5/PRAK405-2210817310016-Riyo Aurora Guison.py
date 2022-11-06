a, b = input().split()
a=int(a)
b=int(b)
n1=0
n2=0
n3=0
i=0
while i < a:
    i+=1
    j=i
    if i == 0:
        break
    while j > 0:
        j-=1
        print("(%d*%d)"%(j+1,b),end='')
        if j > 0:
            print(" +", end=" ")
    n1=i * b
    n2+= n1
    print(" = %d"%(n2))
    n3+= n2
print("%d"%(n3))