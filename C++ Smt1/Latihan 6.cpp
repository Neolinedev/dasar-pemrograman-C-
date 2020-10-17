#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int potong(int pembelian_barang,double diskon);
main()
{
	int pembelian_barang;
	double persenan;
	{
		cout<<"Program Hitung Potongan \n";
		cout<<"Besar Pembelian Barang Rp. ";cin>>pembelian_barang;
		
		if(pembelian_barang < 1000000)
		{
			persenan=0;
		}
		else if(pembelian_barang >= 1000000&&pembelian_barang <= 5000000)
		{
			persenan=0.2;
		}
		else
		{
			persenan=0.35;
		}
		cout<<"Besar Diskon Yang Diberikan Rp. "<<potong(pembelian_barang,persenan)
		<<endl;
		cout<<"Besar Harga Yang Harus Dibayarkan Rp. "<<pembelian_barang-potong(pembelian_barang,persenan);
	}
	getch();
}
		int potong(int pembelian_barang,double persenan)
{
	     double diskon;
		diskon=pembelian_barang*persenan;
		
		return diskon;
}
