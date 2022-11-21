a = int(input())
MatriksA = []
print('Matriks A')
for i in range (a):
    k = list(map(int, input().split()))
    MatriksA.append(k)
MatriksB = []
print('Matriks B')
for i in range (a):
    k = list(map(int, input().split()))
    MatriksB.append(k)
MatriksAXB = []
print('Matriks AXB')
for i in range (a):
    MatriksAXB.append([])
    for j in range (a):
        y = 0
        for k in range (a):
            y = y + MatriksA[i][k] * MatriksB[k][j]
        MatriksAXB[i].append(y)
for baris in MatriksAXB:
    for k in baris:
        print(k, end=' ')
    print()