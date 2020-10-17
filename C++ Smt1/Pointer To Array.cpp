#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int i;
	int nilai[6];
	int *ptnilai;
	ptnilai = nilai;
	for(i=1;i<=6;i++)
	{
		cout<<"Masukkan Nilai Pertama = ";
		cin>>nilai[i];
	}
	cout<<endl;
	cout<<"Hasil Pengaksesan Elemen Array Lewat";
	cout<<" Pointer";
	cout<<endl<<endl;
	for(i=1;i<=6;i++)
	{
		cout<<"Elemen"<<i<<",Nilai"<<nilai[i];
		cout<<",Menempati Alamat Memori = ";
		cout<<&ptnilai[i];
		cout<<endl;
	}
	getch();
}
