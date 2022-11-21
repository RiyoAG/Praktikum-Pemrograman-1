baris,kolom=map(int,input().split())
angka=[]
a=0
isi=(list(map(int,input().split())))
for i in range (baris):
    angka.append(isi[a:a+kolom])
    a+=kolom
for baris in angka:
    for isi in baris:
        print(isi, end=' ')
    print()
