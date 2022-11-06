#include <stdio.h>
int main()
{
    int a,b,i,j,n1,n2,total;
    n1 = n1 = total = 0;

    scanf("%d %d", &a, &b);
    for(i=1;i<=a;i++){
        for(j=i;j>=1;j--){
            printf("(%d * %d) ",j,b);
            if (j>1){
                printf(" + ");
            }
        }
        n1 = (i*b);
        n2 += n1;
        printf (" = %d",n2);
        total+= n2;
        printf("\n");
    }
    printf("%d",total);
}

