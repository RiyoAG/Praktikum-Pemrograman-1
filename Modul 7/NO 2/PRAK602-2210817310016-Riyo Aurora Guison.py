kolom=int(input())
isi=[]
z=list(map(int,input().split()))
for i in range(kolom):
    print((i+1)*z[i],end=' ')