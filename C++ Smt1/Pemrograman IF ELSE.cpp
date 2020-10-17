#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char kode,ukuran,merk[15];
	long harga=0;
	cout<<"Kode Baju:";cin>>kode;
	cout<<"Ukuran:";cin>>ukuran;
	
	if(kode=='1')
	{
		strcpy(merk,"H&R");
		if(ukuran=='S'||ukuran=='s')
		  harga=45000;
		  else if(ukuran=='M'||ukuran=='m')
		        harga=60000;
		  else
		        harga=0;
			       
	}
	else if(kode=='2')
	{
		strcpy(merk,"Adidas");
		if(ukuran=='S'||ukuran=='s')
	      harga=65000;
	      else if(ukuran=='M'||ukuran=='m')
	            harga=75000;
	      else
	            harga=0;
	            
				
	}
	else
	cout<<"Salah Kode Baju"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Merk Baju:"<<merk<<endl;
	cout<<"Harga Baju:"<<harga<<endl;
	getch();
	
}
