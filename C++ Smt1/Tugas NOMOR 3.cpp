#include<conio.h>
#include<stdio.h>
#include<iostream>
#define awal {
#define akhir }
#define masuk cin
#define cetak cout
#define mulai() main()
#define ABSEN (0.1*absen)
#define TUGAS (0.2*tugas)
#define UTS (0.3*uts)
#define UAS (0.4*uas)
#define NA (absen+tugas+uts+uas)
#define hapus()
#define tahan() getch()
using namespace std;
mulai()
awal
     float absen,tugas,uts,uas,na;
     hapus();
     cetak<<" Masukkan Nilai Absensi : ";masuk>>absen;
     cetak<<" Masukkan Nilai Tugas   : ";masuk>>tugas;
     cetak<<" Masukkan Nilai UTS     : ";masuk>>uts;
     cetak<<" Masukkan Nilai UAS     : ";masuk>>uas;
     cetak<<endl;
     cetak<<"---------------------------------------"<<endl;
     cetak<<endl;
	 absen =ABSEN;
     tugas =TUGAS;
     uts =UTS;
     uas =UAS;
     na =absen+tugas+uts+uas;
	 cetak<<" Nilai Murni Absensi : "<<absen<<endl;
     cetak<<" Nilai Murni Tugas   : "<<tugas<<endl;
     cetak<<" Nilai Murni UTS     : "<<uts<<endl;
     cetak<<" Nilai Murni UAS     : "<<uas<<endl;
     cetak<<"-----------------------------------------"<<endl;
     cetak<<" Nilai Akhir yang diperoleh sebesar : "<<na;
     cetak<<endl;
     tahan();
akhir
