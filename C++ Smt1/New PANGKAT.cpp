#include<stdio.h>
#include<conio.h>
#include<iostream>
#define awal {
#define akhir }
#define mulai() main()
#define cetak cout
#define masuk cin
#define hapus()
#define tahan() getch()
#define PANGKAT2 (bil*bil)
#define PANGKAT3 (bil*bil*bil)
using namespace std;

mulai()
awal
     int bil,pangkat;
     hapus();
      cetak<<endl;
      cetak<<" Program Menghitung Pangkat Dua dan Pangkat Tiga "<<endl;
      cetak<<" dari sebuah Bilangan Bulat dengan MAKRO "<<endl;
      cetak<<"------------------------------------------------- "<<endl;
      cetak<<" Masukkan Bilangan Bulat : ";masuk>>bil; //INPUT BILANGAN BULAT
      cetak<<endl;
      
    //PANGKAT 2
     pangkat=PANGKAT2;
      cetak<<"=================================================="<<endl;
      cetak<<" Pangkat Dua dari "<<bil<<" adalah "<<pangkat<<endl;
      cetak<<endl;
    //PANGKAT 3
     pangkat=PANGKAT3;
      cetak<<" Pangkat Tiga dari "<<bil<<" adalah "<<pangkat<<endl;
      cetak<<"==================================================="<<endl;
    
    tahan();
akhir
