#include<stdio.h>
#include<string.h>
int main()
{
char asli[100];
char palsu[100];
scanf("%[^\n]%*c",&asli);
scanf("%[^\n]%*c",&palsu);
int a,b,c,i=0,j=0;
a=strlen(asli);
b=strlen(palsu);
if(a!=b){
    printf("Panjang kalimat berbeda,pesan palsu");
}
else{
    for(c=0;c<a;c++){
        if(asli[c]==palsu[c]){
            printf("*");
            i++;
        }
        else{
            printf("#");
            j++;
        }
    }
    printf("\n* = %d",i);
    printf("\n# = %d",j);
    if(i>=j){
        printf("\nPesan Asli");
    }
    else if (i<j){
        printf("\nPesan Palsu");
    }
}
}
