#include <stdio.h>
int main()
{
float nilai1,nilai2,penjumlahan;
printf("Masukkan Nilai Pertama :");
scanf("%f",&nilai1);
printf("Masukkan Nilai Kedua :");
scanf("%f",&nilai2);
penjumlahan = nilai1 + nilai2;
printf("Hasil dari penjumlahan nilai pertama" "\"%.2f\"" "dan nilai kedua" "\"%.2f\"" "adalah" "\"%.2f\"",nilai1,nilai2,penjumlahan);
}