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
		    cout<<"Masukkan Jumlah Porsi : ";cin>>porsi[i];
            cout<<endl;
	}
	switch(kode[i])
	{
		case 1:
			cout<<"NASI GORENG"<<endl;
			hrg[i]=20000;
			break;
		case 2:
			cout<<"MIE GORENG"<<endl;
			hrg[i]=19000;
			break;
		case 3:
			cout<<"KWETIAU GORENG"<<endl;
			hrg[i]=21000;
			break;
		case 4:
			cout<<"AYAM BAKAR"<<endl;
			hrg[i]=25000;
			break;
		case 5:
			cout<<"BEBEK GORENG"<<endl;
			hrg[i]=22000;
			break;
	}
	  
	  cout<<"\n                     RM ANTARIS                                   "<<endl;
      cout<<"\n ------------------------------------------------------ "<<endl;
      cout<<"\n No   Nama       Kode          Jumlah             Total"<<endl;
      cout<<"\n                 Menu          Porsi              Harga"<<endl;
      cout<<"\n ------------------------------------------------------ "<<endl;
      for(i=1;i<=jml_data;i++)
      	{
            cout<<setiosflags(ios::left)<<setw(5)<<i;
            cout<<setiosflags(ios::left)<<setw(10)<<nama[i];
            cout<<setiosflags(ios::left)<<setw(13)<<kode[i];
            cout<<setiosflags(ios::left)<<setw(16)<<porsi[i];
            
            tot_hrg = hrg[i] * porsi[i];
            cout<<setiosflags(ios::left)<<setw(22)<<hrg[i]<<endl;
			tot_byr = tot_hrg;
         }

      cout<<"\n ------------------------------------------------------------------------------------------------------------"<<endl;
      cout<<"\n                                                                           Total Bayar   Rp. "<<tot_byr<<endl;
      cout<<"\n                                                                           Uang  Bayar   Rp. ";cin>>uang_byr;

      uang_kbl = uang_byr - tot_byr;
      cout<<"\n                                                                           Uang  Kembali Rp. "<<uang_kbl<<endl;
	  cout<<endl;
	  cout<<"\n                                 TERIMA KASIH ATAS KUNJUNGAN ANDA"<<endl;
	  return 0;
}
