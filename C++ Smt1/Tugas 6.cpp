#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
bayar(long &harga,long diskon,long jumhar)
{
return (jumhar = harga - diskon);
}

potong (long harga,long &diskon)
{
            if(harga > 5000000)
               {
            diskon = harga * 0.35;
            }
            else if(harga >= 1000000)
            {
               diskon = harga * 0.2;
            }
           else
             {
               diskon = 0;
            }
}

garis()
{
cout<<"\n========================================\n";
}

main()
{
long harga, diskon, jumhar;

cout<<"\tPROGRAM HITUNG POTONGAN\n";
garis();
cout<<"\nBesar Pembelian Barang            Rp. ";cin>>harga;
potong(harga, diskon);
cout<<"Besar Potongan yang diberikan     Rp. "<<diskon<<endl;
cout<<"Besar Harga yang Harus dibayarkan Rp. "<<bayar(harga, diskon, jumhar);
getch();
}
