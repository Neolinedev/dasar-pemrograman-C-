#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	char kode,nama[30];
	int a,nomor;
	
	cout<<"Masukkan Nomor Anggota : ";cin>>nomor;
	cout<<"Masukkan Kode Anggota : ";cin>>kode;
	cout<<endl;
	
    switch(nomor)
    {
        case 1:
            cout<<"Panji Anjasmara";
            break;
        case 2:
            cout<<"Ahmad Sanusi";
            break;
        case 3:
            cout<<"Jaja Suhendro";
            break;
        case 4:
        	cout<<"Komar Erawan";
        	break;
        case 5:
        	cout<<"Deni Siboras";
        	break;
        default:
        cout<<" \nNomor Anggota Yang Anda Masukkan Salah!!!";
        cout<<endl;
    }
}
