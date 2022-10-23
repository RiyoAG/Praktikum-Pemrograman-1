#include <stdio.h>
int main()
{
char Nama[50],NIM[50],Kelas_Paralel[50],TTL[50],Alamat[50],Hobby[10],No[20];
printf("Nama                 : ");
gets(Nama);
printf("NIM                  :");
gets(NIM);
printf("Kelas Paralel        : ");
gets(Kelas_Paralel);
printf("Tempat/Tanggal Lahir : ");
gets(TTL);
printf("Alamat               : ");
gets(Alamat);
printf("Hobby                :");
gets(Hobby);
printf("No.HP                :\n");
gets(No);
printf("Nama                 :%s\n",Nama);
printf("NIM                  :\n",NIM);
printf("Kelas Paralel        :\n");
printf("Tempat/Tanggal Lahir :%s\n",TTL);
printf("Alamat               :\n",Alamat);
printf("Hobby                :\n",Hobby);
printf("No.HP                :\n",No);
}