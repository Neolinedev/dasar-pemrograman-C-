#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char kode,tujuan[20],nama[30],pilihan[5],lama[30];
	long harga,jumlah,totalb,diskon,kembalian,totalh,uang;
	 
	cout<<"Nama konsumen	: ";cin>>nama;
	cout<<"Pilihan Paket	: ";cin>>pilihan;
	cout<<"Lama Liburan	: ";cin>>lama;
	cout<<"Jumlah Liburan	: ";cin>>jumlah;
	
	if (kode=='SIN')
	{
		strcpy (tujuan,"Singapore");
		harga=1500000;
	}
	
	else if (kode=='MLY')
	{
		strcpy (tujuan,"Malaysia");
		harga=1500000;
	}
	
	else if (kode=='HKG')
	{
		strcpy (tujuan,"Hongkong");
		harga=1600000;
	}
	
	else if (kode=='JPN');
	{
		strcpy (tujuan,"Jepang");
		harga=1800000;
	}
	

	
totalh=jumlah*harga;
	if (jumlah>=5)
	{
		diskon=0.1*totalh;
	}
	else {
		diskon=0;
	}
totalb=totalh-diskon;

	cout<<"_________________________"<<endl;
	cout<<"Nama konsumen : "<<nama<<endl;
	cout<<"Kode Paket : "<<kode<<endl;
	cout<<"Lama Liburan : "<<lama<<endl;
	cout<<"Jumlah Pesan : "<<jumlah<<endl;
	cout<<"Diskon : "<<diskon<<endl;
	cout<<"Total Harga : "<<totalh<<endl;
	cout<<"Total Yang Harus Dibayar :"<<totalb<<endl;
	cout<<"Uang bayar : ";cin>>uang;
	kembalian=uang-totalb;
	cout<<"kembalian : "<<kembalian<<endl;
	getch();
	
	
}

