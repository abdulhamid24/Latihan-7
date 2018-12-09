#include <stdio.h>
#include <conio.h>

int main()
{

 float c=89.88,m,E;
 printf("PROGRAM PERHITUNGAN MENGGUNAKAN RUMUS E=mc2 \n");
 printf("BY ABDUL HAMID NIM 311810167\n");
 printf("INSTITUT PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
 printf("Masukkan massa (Kg) : ");scanf("%f", &m);
 E=m*c*c;
 printf("E = %.2f * %.2f * %.2f  = %.2f J",m,c,c,E);
 getch();
}
