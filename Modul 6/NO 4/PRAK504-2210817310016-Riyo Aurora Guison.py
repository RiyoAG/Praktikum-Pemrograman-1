def reverse(angka):
    i = 0
    while angka != 0:
        i = (i*10) + angka % 10
        angka //= 10
    return i
for i in range (3):
    A,B = input().split()
    A = reverse(int(A))
    B = reverse(int(B))
    C = A+B
    print(f'{reverse(C)}\n')