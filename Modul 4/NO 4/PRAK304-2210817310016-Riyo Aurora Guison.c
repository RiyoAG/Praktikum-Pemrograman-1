#include<stdio.h>
int main()
{
int a;
printf("");
scanf("%d",&a);
     if(a>=100){
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    else if(a>=20){
        printf("Puluhan\n");
    }
    else if(a>10 && a<20){
        printf("Belasan\n");
    }
    else if(a>0 && a<10){
        printf("Satuan\n");
    }
    else if(a==0){
        printf("Nol\n");
    }
}

