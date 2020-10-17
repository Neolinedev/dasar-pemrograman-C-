#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

main()
{
	char kode_buku,nama_buku[15];
	long harga=0,tot_harga;
	int jumbel;
	
	cout<<"kode buku :";cin>>kode_buku;
	cout<<"jumbel :";cin>>jumbel;
	
	if(kode_buku=='1')
	{
		strcpy(nama_buku,"web programming");
		 harga=50000;
	}
	else if(kode_buku=='2')
	{
	strcpy(nama_buku,"pemrograman visual 1");
		 harga=78000;	
	}
	else if(kode_buku=='3')
	{
		strcpy(nama_buku,"aplikasi basis data");
		harga=60000;
	}
	else {
		strcpy(nama_buku,"salah kode buku");
	}
	tot_harga=jumbel*harga;
	
	cout<<"--------------"<<endl;
	cout<<"kode_buku :"<<kode_buku<<endl;
	cout<<"nama_buku :"<<nama_buku<<endl;
	cout<<"harga :"<<harga<<endl;
	cout<<"jumbel :"<<jumbel<<endl;
	cout<<"tot_harga :"<<tot_harga<<endl;
	getch();
}
