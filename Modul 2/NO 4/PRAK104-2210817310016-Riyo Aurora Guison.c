#include <stdio.h>
int main()
{
int a,b;
char simbol = '%';
float hasil1,hasil2;
a = 400000;
b = 350000;
hasil1 = a - (0.13*a);
hasil2 = b - (0.21*b);
printf("Harga sepatu A adalah %d\n",a);
printf("Harga sepatu B adalah %d\n",b);
printf("Sepatu A mendapat diskon 13 %c sehingga harganya menjadi %.f\n",simbol,hasil1);
printf("Sepatu B mendapat diskon 21 %c sehingga harganya menjadi %.f",simbol,hasil2);
}
