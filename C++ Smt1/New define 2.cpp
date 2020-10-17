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
#define LS_KUBUS (sisi*sisi)
using namespace std;

mulai()
awal
     int sisi,ls_kubus;
     hapus();
     cetak<<"Program Penggunaan #define"<<endl;
     cetak<<"Masukkan Nilai Sisi Kubus = ";
     masuk>>sisi;
     ls_kubus = LS_KUBUS;
     cetak<<"Luas Kubus adalah :"<<ls_kubus;
     tahan();
akhir
