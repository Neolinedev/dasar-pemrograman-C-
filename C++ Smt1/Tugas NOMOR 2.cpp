#include<conio.h>
#include<stdio.h>
#include<iostream>
#define PHI 3.14
#define awal {
#define akhir }
#define mulai() main()
#define cetak cout
#define masuk cin
#define hapus()
#define tahan() getch()
#define LS_LINGKARAN (PHI*r*r)
#define K_LINGKARAN (2*PHI*r)
using namespace std;
mulai()
awal
     float r,ls_lingkaran,k_lingkaran;
     hapus();
     cetak<<" Masukkan Nilai Jari-Jari : ";masuk>>r;
     ls_lingkaran=LS_LINGKARAN;
     k_lingkaran=K_LINGKARAN;
     cetak<<" ---------------------------"<<endl;
     cetak<<" Luas Lingkaran : "<<ls_lingkaran;
     cetak<<endl;
     cetak<<" Keliling Lingkaran : "<<k_lingkaran;
     tahan();
akhir
