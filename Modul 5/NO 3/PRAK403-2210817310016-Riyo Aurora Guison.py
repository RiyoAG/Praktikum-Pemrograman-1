a, b = input().split()
a=int(a)
b=int(b)
if a < b:
    for i in range(a,b):
        print(a,b,end=' - ')
        a+=1
        b-=1
        continue
    print(a,b,end='')
    a+=1
    b-=1
else:
    if a > b:
        a1=a
        b1=b
        for i in range (b,a):
            print(a,b,end=' - ')
            a-=1
            b+=1
            if a % b1 == 1:
                break
    if a < b:
        for i in range (a,b):
            print(a,b,end=' - ')
            a-=1
            b+=1
            break
        print(a,b,end='')
        a-=1
        b+=1
    