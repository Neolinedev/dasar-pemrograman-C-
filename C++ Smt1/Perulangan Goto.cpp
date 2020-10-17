#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main()
{
	int a,b;
	char lagi;
	atas://deklarasi label
	
	cout<<"Masukkan Bilangan =";cin>>a;
	b=a%2;
	printf("Nilai %d %%2 adalah = %d",a,b);
	printf("\n\nIngin Hitung Lagi[Y/T]:");
	lagi=getch();
	
	if(lagi=='Y'||lagi=='y')
	   goto atas;//penggunaan label
	   
	getch();
}
