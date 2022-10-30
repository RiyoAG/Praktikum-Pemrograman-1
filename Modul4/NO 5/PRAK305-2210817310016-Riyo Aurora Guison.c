#include<stdio.h>
int main()
{
int d;
printf("");
scanf("%d",&d);
if(d < 60 && d >=0){
    printf("00:00:%.2d",d);
}
else if(d >= 60 && d < 3600){
    printf("00:%.2d:%.2d",(d/60),(d%60));
}
else if(d >= 3600 && d<86400){
    printf("%.2d:%.2d:%.2d",(d/3600),(d%3600)/60,(d%3600)%60);
}
else if(d >=86400){
    printf("%d hari %.2d:%.2d:%.2d",(d/86400),(d%86400)/3600,(d%3600)/60,(d%3600)%60);
}
}
