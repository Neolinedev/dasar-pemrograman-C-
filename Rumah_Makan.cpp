#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;
garis()
{
	cout<<" ----------------------------------- "<<endl;
}
main()
{
	int i,atas,jml_data,kode;
	long tot_hrg,tot_byr,uang_kbl,uang_byr;
	char nama[15][30],nm_menu[30],a;
	int hrg[30];
	int porsi[30];
	cout<<"\n   SELAMAT DATANG DI RM ANTARIS  \n"<<endl;
	garis();
	{
		    cout<<"\n         DAFTAR MENU       "<<endl;
		    cout<<"----------------------------------------"<<endl;
		    cout<<"| Kode |      Nama Menu     |  Harga  |"<<endl;
		    cout<<"|------|--------------------|---------|"<<endl;
		    cout<<"|  1   | NASI GORENG        |Rp.20.000|"<<endl;
		    cout<<"|  2   | MIE GORENG         |Rp.19.000|"<<endl;
		    cout<<"|  3   | KWETIAU GORENG     |Rp.21.000|"<<endl;
		    cout<<"|  4   | AYAM BAKAR         |Rp.25.000|"<<endl;
		    cout<<"|  5   | BEBEK GORENG       |Rp.22.000|"<<endl;
		    cout<<"----------------------------------------"<<endl;
		    
			atas:
		    cout<<"Masukkan Nama Pembeli : ";cin>>nama[i];
		    cout<<"Masukkan Kode Menu : ";cin>>kode;
            cout<<endl;
	}
	switch(kode)
	{
		case 1:
			cout<<"NASI GORENG"<<endl;
			hrg[i]=20000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<endl;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			cout<<endl;
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=uang_byr - tot_hrg;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			cout<<endl;
			break;
		case 2:
			cout<<"MIE GORENG"<<endl;
			hrg[i]=19000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<endl;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			cout<<endl;
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=uang_byr - tot_hrg;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 3:
			cout<<"KWETIAU GORENG"<<endl;
			hrg[i]=21000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<endl;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			cout<<endl;
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=uang_byr - tot_hrg;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 4:
			cout<<"AYAM BAKAR"<<endl;
			hrg[i]=25000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<endl;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			cout<<endl;
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=uang_byr - tot_hrg;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 5:
			cout<<"BEBEK GORENG"<<endl;
			hrg[i]=22000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			cout<<endl;
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=uang_byr - tot_hrg;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		default:
			cout<<"KODE YANG ANDA MASUKKAN SALAH !!"<<endl;
			break;
	}
      cout<<endl;	
      cout<<"Apakah Anda Ingin Menginput Ulang ? [Y/T]";cin>>a;
	  if(a=='y'||a=='Y') goto atas;	
	  cout<<"\n         TERIMA KASIH ATAS KUNJUNGAN ANDA"<<endl;
	  return 0;
}
