#include <stdio.h>
int main()
{
float a,b,phi,hasil1,jari;
a = 5;
b = 14;
phi = 3.14;
hasil1 = b/a;
jari = hasil1/(2*phi);
printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.f Putaran\n",a);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n",b);
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah  %.2f Kilometer ",jari);
}