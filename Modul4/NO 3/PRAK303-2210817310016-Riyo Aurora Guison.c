#include<stdio.h>
int main()
{
int Nilai;
printf("");
scanf("%d",&Nilai);
    if(Nilai>0) {
        printf("positif");
    }
    else if (Nilai < 0) {
        printf("negatif");
    }
    else if (Nilai == 0) {
        printf("nol");
    }
}
