while True:
    print("\nPilih Program\n 1.Penjumlahan\n 2.Pengurangan\n 3.Perkalian\n 4.Pembagian\n 5 Exit")
    c=int(input("Masukkan Pilihan ="))
    if c > 5 :
        print("Input anda salah, silahkan coba lagi")
        continue
    elif c==5:
        print("Terima kasih, telah menggunakan kalkulator Riyo Aurora Guison")
        break
    else:
        a=float(input("Masukkan Nilai Pertama="))
        b=float(input("Masukkan Nilai Kedua="))
        if c==1:
            print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f"%(a,b,a+b))
        elif c==2:
            print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f"%(a,b,a-b))
        elif c==3:
            print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f"%(a,b,a*b))
        elif c==4:
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f"%(a,b,a/b))