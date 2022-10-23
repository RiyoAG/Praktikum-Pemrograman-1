#include <stdio.h>
#include<math.h>
int main ()
{
int A,B,hasil1,hasil2,hasil3;
scanf("%d",&A);
scanf("%d",&B); 
hasil1 =sqrt(B*B - A*A);
printf("Alas  = %d cm\n",hasil1);
printf("Tinggi = %d cm\n",A);
hasil2 = A + B + hasil1;
printf("Keliling = %d cm\n",hasil2);
hasil3 = hasil1*A/2;
printf("Luas = %d cm^2\n",hasil3);
}