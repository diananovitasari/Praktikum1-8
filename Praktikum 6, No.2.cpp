/*	Nama  : Diana Novita Sari
	Prodi : D4 Manajemen Informatika
	Kelas : 2020B
	NIM   : 20051397012 */

#include <stdio.h>
#include <stdlib.h>
void urutan(int n);
int main()
{
 int n, x=0;
 printf("Input n : ");scanf("%d", &n);
 void urutan(int x, int n);
 return 0;
}
void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}
