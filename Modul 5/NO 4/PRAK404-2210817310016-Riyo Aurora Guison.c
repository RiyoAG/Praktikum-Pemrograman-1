#include<stdio.h>
int main()
{
float a,b,c;
while(1){
printf("\nPilih Program\n");
printf("1.Penjumlahan\n");
printf("2.Pengurangan\n");
printf("3.Perkalian\n");
printf("4.Pembagian\n");
printf("5.Exit\n");
printf("Masukkan Pilihan :");
scanf("%f",&c);
if(c>5){
    printf("Input anda salah,silahkan coba lagi\n");
    continue;
}else if (c==5){
    printf("Terimakasih,telah menggunakan kalkulator Riyo Aurora Guison\n");
    break;
}
printf("Masukkan Nilai Pertama :");
scanf("%f",&a);
printf("Masukkan Nilai Kedua :");
scanf("%f",&b);
if(c==1){
    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n",a,b,a+b);
}else if(c==2){
    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n",a,b,a-b);
}else if(c==3){
    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n",a,b,a*b);
}else if(c==4){
    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n",a,b,a/b);
}
}
}
