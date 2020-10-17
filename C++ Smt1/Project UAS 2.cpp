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
	int i,jml_data,tot_hrg;
	long tot_byr=0,uang_kbl,uang_byr;
	char nama[15][30],kode[30],nm_menu[30];
	int hrg[30];
	int porsi[30];
	cout<<"\n   SELAMAT DATANG DI RM ANTARIS  \n"<<endl;
	garis();
	cout<<"\n Masukkan Jumlah Data : ";cin>>jml_data;
	for(i=1;i<=jml_data;i++)
	{
		    cout<<"\n         DAFTAR MENU       "<<endl;
		    cout<<"----------------------------------------"<<endl;
		    cout<<"| Kode |      Nama Menu     |  Harga  |"<<endl;
		    cout<<"|------|--------------------|---------|"<<endl;
		    cout<<"|  N   | NASI GORENG        |Rp.20.000|"<<endl;
		    cout<<"|  M   | MIE GORENG         |Rp.19.000|"<<endl;
		    cout<<"|  K   | KWETIAU GORENG     |Rp.21.000|"<<endl;
		    cout<<"|  A   | AYAM BAKAR         |Rp.25.000|"<<endl;
		    cout<<"|  B   | BEBEK GORENG       |Rp.22.000|"<<endl;
		    cout<<"----------------------------------------"<<endl;
		    cout<<"Data Ke - "<<i<<endl;
		    cout<<"Masukkan Nama Pembeli : ";cin>>nama[i];
		    cout<<"Masukkan Kode Menu : ";cin>>kode[i];
            cout<<endl;
	}
	switch(kode[i])
	{
		case 1:
			cout<<"NASI GORENG"<<endl;
			hrg[i]=20000;
			cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=tot_hrg - uang_byr;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			cout<<endl;
			break;
		case 2:
			cout<<"MIE GORENG"<<endl;
			hrg[i]=19000;
						cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=tot_hrg - uang_byr;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 3:
			cout<<"KWETIAU GORENG"<<endl;
			hrg[i]=21000;
						cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=tot_hrg - uang_byr;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 4:
			cout<<"AYAM BAKAR"<<endl;
			hrg[i]=25000;
						cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=tot_hrg - uang_byr;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
		case 5:
			cout<<"BEBEK GORENG"<<endl;
			hrg[i]=22000;
						cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
			cout<<"Total Harga :Rp. "<<tot_hrg;
			tot_hrg=hrg[i]*porsi[i];
			cout<<"Jumlah Bayar :Rp. ";cin>>uang_byr;
			uang_kbl=tot_hrg - uang_byr;
			cout<<"Uang Kembali :Rp. "<<uang_kbl;
			break;
	}
	  cout<<"\n                                 TERIMA KASIH ATAS KUNJUNGAN ANDA"<<endl;
	  return 0;
}
