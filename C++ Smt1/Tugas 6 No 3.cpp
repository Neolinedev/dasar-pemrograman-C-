#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int tarif_sewa(int tarif_buku,int banyak_pinjam);
main()
{
	char nama_penyewa[20],kode_buku,jenis_buku[20];
	int banyak_pinjam,tarif_buku;
	
	cout<<"Perpustakaan Kecil-Kecilan\n";
	cout<<"--------------------------\n";
	cout<<"Nama Penyewa Buku : ";cin>>nama_penyewa;
	cout<<"Kode Buku [C/K/N] : ";cin>>kode_buku;
	
	if(kode_buku =='c'||kode_buku =='C')
	{
		tarif_buku = 500;
		strcpy(jenis_buku,"CerPen(Kumpulan Cerita Pendek)");
	}
	else if(kode_buku =='k'||kode_buku =='K')
	{
		tarif_buku = 700;
		strcpy(jenis_buku,"Komik");
	}
	else if(kode_buku =='n'||kode_buku =='N')
	{
		tarif_buku = 1000;
		strcpy(jenis_buku,"Novel");
	}
	else
	    cout<<"Kode Salah";
    cout<<"Banyak Pinjam : ";cin>>banyak_pinjam;
	cout<<"Tarif Sewa Rp. "<<tarif_buku<<endl;
	cout<<"Jenis Buku : "<<jenis_buku<<endl;
	cout<<"Penyewa dengan Nama : "<<nama_penyewa<<endl;
	cout<<"Jumlah Bayar Penyewaan Sebesar Rp. "<<tarif_sewa(tarif_buku,banyak_pinjam)<<endl;
	
	getch();
}
int tarif_sewa(int tarif_buku,int banyak_pinjam)
{
	int tarif_sewa;
    tarif_sewa = tarif_buku*banyak_pinjam;
    
    return tarif_sewa;
}
