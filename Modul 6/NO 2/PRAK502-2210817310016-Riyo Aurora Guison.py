def hitung(nilai1,nilai2):
    return abs (int(nilai1)-int(nilai2))
def mutlak(angka):
    return abs(angka)
for i in range(3):
    a, b, c, d = input().split()
    hasil = hitung(a,c) + hitung(b,d)
    print(f'{mutlak(hasil)}\n')
