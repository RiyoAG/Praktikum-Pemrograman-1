#include<stdio.h>
int main()
{
    int MatriksA[10][10],MatriksB[10][10],MatriksAXB[10][10];
    int a,b,c,d,hasil=0;
    scanf("%d",&d);
    printf("Matriks A\n");
    for(a=0;a<d;a ++){
        for(b=0;b<d;b++){
            scanf("%d",&MatriksA[a][b]);
        }
    }
    printf("Matriks B\n");
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            scanf("%d",&MatriksB[a][b]);
        }
    }
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            for(c=0;c<d;c++){
                hasil=hasil+MatriksA[a][c]*MatriksB[c][b];
            }
            MatriksAXB[a][b]=hasil;
            hasil=0;
        }
    }
    printf("Matriks AXB\n");
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            printf("%d ",MatriksAXB[a][b]);
        }
        printf("\n");
    }
}
