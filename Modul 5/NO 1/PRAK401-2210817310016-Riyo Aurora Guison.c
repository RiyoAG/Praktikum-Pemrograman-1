#include<stdio.h>
int main()
{
int i,a;
char k;
scanf("%d",&a);
scanf("%c",&k);
    for (i=1; i <=50; i++){
        if(i%a==0){
            printf("%c",k);
        }
        else{
            printf("%d",i);
        }
    }
}



