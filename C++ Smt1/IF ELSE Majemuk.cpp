#include<stdio.h>
#include<conio.h>
#define N 10
main()
{
	#if N>10
	printf("Lebih Besar Dari Sepuluh");
	#elif N==10
	printf("Sama Dengan Sepuluh");
	#else N<10
	printf("Lebih Kecil Dari Sepuluh");
	#endif
	
	getch();
}
