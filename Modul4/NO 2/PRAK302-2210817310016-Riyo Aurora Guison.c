#include <stdio.h>
int main()
{
int Nilai;
printf("");
scanf("%d",&Nilai);
     if(Nilai >=80) {
         printf("A");
    }
    else if (Nilai >=70 && Nilai <80) {
        printf("B");
    }
    else if( Nilai >=60 && Nilai <70) {
        printf("C");
    }
    else if (Nilai >=50 && Nilai <60) {
        printf("D");
    }
    else if (Nilai <50) {
        printf("E");
    }
}
    

