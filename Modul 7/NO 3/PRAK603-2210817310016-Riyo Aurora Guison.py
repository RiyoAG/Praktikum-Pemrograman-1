a, b=map(int,input().split())
if(a==b):
    baris1=list(map(int,input().split()))
    baris2=list(map(int,input().split()))
    for i in range (a):
        print(baris1[i]*baris2[i],end=' ')
else:
    print("Jumlah tidak sama")