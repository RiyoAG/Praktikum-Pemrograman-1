#include <stdio.h>
int main ()
{
float r,t,hasil1,hasil2,hasil3;
scanf("%f",&r);
scanf("%f",&t);
hasil1 = r*r*t*22/7;
printf("Volume   = %.2f\n",hasil1);
hasil2 = 2*r*(r+t)*22/7;
printf("Luas     =%.2f\n",hasil2);
hasil3 = 2*r*22/7;
printf("Keliling =%.2f",hasil3);
}