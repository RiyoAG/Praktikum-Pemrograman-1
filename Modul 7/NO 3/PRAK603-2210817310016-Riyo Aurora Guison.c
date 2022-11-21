#include <stdio.h>
int main()
{
    int a,b,i,hasil;
    scanf("%d %d",&a,&b);
    if(a==b){
    int baris1[a];int baris2[b];
    for(i=0;i<a;i++){
        scanf("%d",&baris1[i]);
    }
    for(i=0;i<b;i++){
        scanf("%d",&baris2[i]);
    }
    for(i=0;i<a;i++){
        hasil=baris1[i]*baris2[i];
        printf("%d ",hasil);
    }
    }
    else{
        printf("Jumlah tidak sama");
    }
}









