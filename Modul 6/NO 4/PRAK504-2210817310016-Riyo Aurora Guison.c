#include<stdio.h>
int reverse(int angka){
    int a=0;
    while(angka != 0){
        a = a*10;
        a = a+angka%10;
        angka = angka/10;
    }
    return a;
}
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C=A+B;
    printf("%d",reverse(C));
}
