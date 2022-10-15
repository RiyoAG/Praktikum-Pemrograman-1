#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,A,B,C,hasil1,hasil2;
C = 5;
A = 12;
B = sqrt(5*5 + 12*12);
a=A;b=B;c=C;
hasil1 = A + B + C ;
hasil2 = A*C/2;
printf("Diketahui :\n");
printf("Alas = %d cm\n",C);
printf("Tinggi = %d cm\n\n",A);
printf("Jawab :\n");
printf("Sisi A = %d cm\n",a);
printf("Sisi B = %d cm\n",b);
printf("Sisi C = %d cm\n",c);
printf("Keliling = %d cm\n",hasil1);
printf("luas = %d cm",hasil2);
}