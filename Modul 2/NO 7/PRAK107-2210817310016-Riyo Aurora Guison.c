#include <stdio.h>
int main()
{
int a,b,c,hasil1,harga,biaya;
a = 4; 
b = 5; 
c = 7;
harga = 85000;
hasil1 = a + b + c;
biaya = hasil1 * harga;
printf("Diketahui :\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);
printf("Keliling Tanah Pak Dengklek adalah %d\n",hasil1);
printf("Harga tanah Per Meter adalah %d\n\n",harga);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",biaya);
}