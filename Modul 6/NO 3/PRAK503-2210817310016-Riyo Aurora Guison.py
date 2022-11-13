def maksimal(a,b):
    if a>b:
        return int(a)
    else:
        return int(b)
def minimal(a,b):
    if a<b:
        return int(a)
    else:
        return int(b)
for i in range(3):
    batas = 0
    maks = -100000
    minim=  100000
    bilangan = int(input())
    while batas<bilangan:
        nilai = map(int, input().split())
        for angka in nilai:
            maks = maksimal(maks, angka)
            minim = minimal(minim, angka)
            batas += 1
    print(f'{maks} {minim}\n')