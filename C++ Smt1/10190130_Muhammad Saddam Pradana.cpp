#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
main()
{
   int i, jml_data;
   char kd_ka[5][10], nm_ka[5][30], jurusan[5][30], jenis_tiket[5][30], kbr[5][15], kdt[5][15], nip[5][10], nama[5][30];
   int harga[5], jml_beli[5];
   long total_harga[5], uang_bayar, uang_kembali, total_bayar=0;
   
   cout<<"\n                                       PT. Kereta Api Indonesia "<<endl;
   cout<<"\n ------------------------------------------------------------------------------------------------------------"<<endl;
   cout<<"\n Masukan Jumlah Data : ";cin>>jml_data;
   for(i=1;i<=jml_data;i++)
   	{
      	 cout<<"\n Data Ke - "<<i<<endl;
         cout<<"\n Masukan NIP         : ";cin>>nip[i];
         cout<<"\n Masukan Nama        : ";cin>>nama[i];
         cout<<"\n Masukan Kode KA     : ";cin>>kd_ka[i];
         cout<<"\n Masukan Jenis Tiket : ";cin>>jenis_tiket[i];
         cout<<"\n Masukan Jumlah Beli : ";cin>>jml_beli[i];

         if(strcmp(kd_ka[i],"KA1134")==0 || strcmp(kd_ka[i],"ka1134")==0)
         	{
            		strcpy(nm_ka[i], "Argo Parahyangan");
               		strcpy(jurusan[i], "Gambir - Bandung");
               		if(strcmp(jenis_tiket[i], "Eksekutif")==0 || strcmp(jenis_tiket[i],"eksekutif")==0)
               		{
                  		strcpy(kbr[i], "06:15");
                     		strcpy(kdt[i], "09:54");
                     		harga[i] = 150000;
                  	}
               		else if(strcmp(jenis_tiket[i], "Ekonomi")==0 || strcmp(jenis_tiket[i],"ekonomi")==0)
               		{
                  		strcpy(kbr[i], "05:25");
                     		strcpy(kdt[i], "08:52");
                     		harga[i] = 110000;
                  	}
            }
         else if(strcmp(kd_ka[i],"KA1252")==0 || strcmp(kd_ka[i],"ka1252")==0)
         	{
            		strcpy(nm_ka[i], "Argo Dwipangga");
               		strcpy(jurusan[i], "Gambir - Yogyakarta");
               		if(strcmp(jenis_tiket[i], "Eksekutif")==0 || strcmp(jenis_tiket[i],"eksekutif")==0)
               		{
                  		strcpy(kbr[i], "08:00");
                     		strcpy(kdt[i], "15:39");
                     		harga[i] = 400000;
                  	}
               		else if(strcmp(jenis_tiket[i], "Ekonomi")==0 || strcmp(jenis_tiket[i],"ekonomi")==0)
               		{
                  		strcpy(kbr[i], "06:15");
                     		strcpy(kdt[i], "14:35");
                     		harga[i] = 255000;
                  	}
            }
         else if(strcmp(kd_ka[i],"KA1982")==0 || strcmp(kd_ka[i],"ka1982")==0)
         	{
            		strcpy(nm_ka[i], "Bima");
                	strcpy(jurusan[i], "Gambir - Malang");
               		if(strcmp(jenis_tiket[i], "Eksekutif")==0 || strcmp(jenis_tiket[i],"eksekutif")==0)
               		{
                  		strcpy(kbr[i], "16:30");
                     		strcpy(kdt[i], "08:15");
                     		harga[i] = 520000;
                  	}
               		else if(strcmp(jenis_tiket[i], "Ekonomi")==0 || strcmp(jenis_tiket[i],"ekonomi")==0)
               		{
                  		strcpy(kbr[i], "13:00");
                     		strcpy(kdt[i], "03:15");
                     		harga[i] = 300000;
                  	}
            }
         else if(strcmp(kd_ka[i],"KA1366")==0 || strcmp(kd_ka[i],"ka1366")==0)
         	{
            		strcpy(nm_ka[i], "Bangunkarta");
               		strcpy(jurusan[i], "Gambir - Surabaya");
               		if(strcmp(jenis_tiket[i], "Eksekutif")==0 || strcmp(jenis_tiket[i],"eksekutif")==0)
               		{
                  		strcpy(kbr[i], "15:00");
                     		strcpy(kdt[i], "03:30");
                     		harga[i] = 490000;
                  	}
               		else if(strcmp(jenis_tiket[i], "Ekonomi")==0 || strcmp(jenis_tiket[i],"ekonomi")==0)
               		{
                  		strcpy(kbr[i], "13:00");
                     		strcpy(kdt[i], "01:35");
                     		harga[i] = 270000;
                  	}
            	}
   	}
      cout<<"\n                                       PT. Kereta Api Indonesia                                              "<<endl;
      cout<<"\n ------------------------------------------------------------------------------------------------------------"<<endl;
      cout<<"\n No   NIP       Nama         Jurusan                      Keberangkatan     Kedatangan     Jenis        Total"<<endl;
      cout<<"\n                                                                                           Tiket        Harga"<<endl;
      cout<<"\n ------------------------------------------------------------------------------------------------------------"<<endl;
      for(i=1;i<=jml_data;i++)
      	{
            cout<<setiosflags(ios::left)<<setw(5)<<i;
            cout<<setiosflags(ios::left)<<setw(10)<<nip[i];
            cout<<setiosflags(ios::left)<<setw(13)<<nama[i];
            cout<<setiosflags(ios::left)<<setw(29)<<jurusan[i];
            cout<<setiosflags(ios::left)<<setw(18)<<kbr[i];
            cout<<setiosflags(ios::left)<<setw(15)<<kdt[i];
            cout<<setiosflags(ios::left)<<setw(13)<<jenis_tiket[i];

            total_harga[i] = jml_beli[i] * harga[i];
            cout<<setiosflags(ios::left)<<setw(5)<<total_harga[i]<<endl;

            total_bayar = total_bayar + total_harga[i];
         }

      cout<<"\n ------------------------------------------------------------------------------------------------------------"<<endl;
      cout<<"\n                                                                           Total Bayar   Rp. "<<total_bayar<<endl;
      cout<<"\n                                                                           Uang  Bayar   Rp. ";cin>>uang_bayar;

      uang_kembali = uang_bayar - total_bayar;
      cout<<"\n                                                                           Uang  Kembali Rp. "<<uang_kembali<<endl;

      getch();
}
