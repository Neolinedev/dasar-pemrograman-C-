#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;

	printf("masukkan nilai a = "); scanf("%d",&a);
	printf("masukkan nilai b = "); scanf("%d",&b);
	c = a-b;
	printf("hasil pengurangan = %d",c);
	printf("\n Hitung Nilai");
	printf("\n -------------");
	printf("\n Nilai A : %d \n",a);
	printf("\n Nilai B : %d \n",b);
	printf("\n -------------");
	printf("\n Nilai C : %d \n",c);
	
	getch();
}
