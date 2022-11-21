#include<stdio.h>
int main()
{
int baris,kolom,i,j,isi;
scanf("%d %d",&baris,&kolom);
int angka[baris][kolom];
for(i=0;i<baris;i++){
    for(j=0;j<kolom;j++){
        scanf("%d",&isi);
        angka[i][j] = isi ;
        }
}
    for(i=0;i<baris;i++){
      for(j=0;j<kolom;j++){
        printf("%d ",angka[i][j]);
    }
    printf("\n");
}
}

