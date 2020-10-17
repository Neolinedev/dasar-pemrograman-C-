#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <windows.h>
#define mulai() main()
#define tahan() getch()
#define cetak cout
#define baca cin

using namespace std;

//DEKLARASI FUNGSI BINTANG
bintang()
{
    cetak<<"**********************************************************"<<endl;
}

//DEKLARASI FUNGSI TAMBAH
tambah()
{
    cetak<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

//DEKLARASI FUNGSI KOP
kop()
{
    cetak<<"------------ SELAMAT DATANG DIGAME KUIS ------------------"<<endl;
    cetak<<"------------------- CERDAS CERMAT ------------------------"<<endl;
}

//DEKLARASI FUNGSI CLUE
clue()
{
    cetak<<"JAWABLAH 10 SOAL TENTANG PENGETAHUAN UMUM INI DENGAN BENAR"<<endl;
    cetak<<"1 SOAL PERTANYAAN MEMILIKI NILAI 10"<<endl;
    cetak<<"PERTANYAAN BISA DIULANG DARI AWAL JIKA INGIN BERMAIN LAGI"<<endl;
}

//DEKLARASI FUNGSI START
start()
{
    cetak<<"KLIK 'Y' JIKA INGIN MEMULAI PERMAINAN"<<endl;
    cetak<<"KLIK 'T' JIKA INGIN KELUAR PERMAINAN"<<endl;
}

//FUNGSI MULAI ADALAH FUNGSI UTAMA PADA PROGRAM
mulai()
{
    //DEKLARASI VARIABEL
    char jawaban,a;

//*system("color f3"); BERFUNGSI MENGUBAH WARNA BACKGROUND DAN TULISAN. f lambang
//warna light white dan 3 lambang warna aqua. Penulisan warna adalah simbol warna
//background dahulu baru penulisan simbol warna tulisan */
system("color f3");

//PERULANGAN DO WHILE
   do
   {
        //PEMANGGILAN FUNGSI BUATAN (BINTANG,TAMBAH,KOP,CLUE,START)
     bintang();
     tambah();
     kop();
     tambah();
     bintang();
     cetak<<endl;
     clue();
     cetak<<endl;
     a:
     start();
     baca>>jawaban;
     if(jawaban=='Y'||jawaban=='y'){
        cetak<<"1.Negara Manakah Yang Terluas Ke-4 Di Dunia?"<<endl;
        cetak<<endl;
        cetak<<" A. Rusia"<<endl;
        cetak<<" B. Indonesia"<<endl;
        cetak<<" C. Cina"<<endl;
        cetak<<" D. Amerika"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='D'||jawaban=='d')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
        else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 0";
   }
     {
        cetak<<"2.Ibu kota negara Ceko?"<<endl;
        cetak<<endl;
        cetak<<" A. Madrid"<<endl;
        cetak<<" B. Praha"<<endl;
        cetak<<" C. London"<<endl;
        cetak<<" D. Amsterdam"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='B'||jawaban=='b')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
         else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 10";
   }
     {
        cetak<<"3.Danau terluas di Indonesia?"<<endl;
        cetak<<endl;
        cetak<<" A. Danau Toba"<<endl;
        cetak<<" B. Danau Singkarak"<<endl;
        cetak<<" C. Danau Maninjau"<<endl;
        cetak<<" D. Danau Ranau"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='A'||jawaban=='a')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
         else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 20";
   }
     {
        cetak<<"4.Hewan apakah yang memiliki kemampuan lari tercepat di dunia?"<<endl;
        cetak<<endl;
        cetak<<" A. Harimau"<<endl;
        cetak<<" B. Singa"<<endl;
        cetak<<" C. Beruang"<<endl;
        cetak<<" D. Cetah"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='D'||jawaban=='d')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
         else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 30";
   }
     {
        cetak<<"5.Negara di Asia Tenggara yang tidak pernah di jajah?"<<endl;
        cetak<<endl;
        cetak<<" A. Vietnam"<<endl;
        cetak<<" B. Kamboja"<<endl;
        cetak<<" C. Thailand"<<endl;
        cetak<<" D. Singapore"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='C'||jawaban=='c')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
        else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 40";
   }
     {
        cetak<<"6.Sungai terpanjang di Indonesia?"<<endl;
        cetak<<endl;
        cetak<<" A. Sungai Musi"<<endl;
        cetak<<" B. Sungai Kapuas"<<endl;
        cetak<<" C. Sungai Bengawan"<<endl;
        cetak<<" D. Sungai Barito"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='B'||jawaban=='b')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
          else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 50";
   }
   {
        cetak<<"7.Gunung Tertinggi di Dunia?"<<endl;
        cetak<<endl;
        cetak<<" A. Gunung Everest"<<endl;
        cetak<<" B. Gunung Semeru"<<endl;
        cetak<<" C. Gunung Akonkagua"<<endl;
        cetak<<" D. Gunung Kerinci"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='A'||jawaban=='a')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
        else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 60";
   }
   {
        cetak<<"8.Dibawah ini orang-orang yang menemukan lampu, kecuali?"<<endl;
        cetak<<endl;
        cetak<<" A. Thomas Alva Edison"<<endl;
        cetak<<" B. Alexander Graham Bell"<<endl;
        cetak<<" C. Joseph Wilson Swan"<<endl;
        cetak<<" D. Hiram Maxim"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='B'||jawaban=='b')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
         else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 70";
   }
   {
        cetak<<"9.Belanda menjajah Indonesia selama?"<<endl;
        cetak<<endl;
        cetak<<" A. 3,5 Tahun"<<endl;
        cetak<<" B. 35 Tahun"<<endl;
        cetak<<" C. 135 Tahun"<<endl;
        cetak<<" D. 350 Tahun"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='D'||jawaban=='d')
        {
            cetak<<"Jawaban Anda Benar"<<endl;
        }
         else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 80";
   }
   {
        cetak<<"10.Siapakah tokok pahlawan asal Aceh?"<<endl;
        cetak<<endl;
        cetak<<" A. Thomas Matulessy (Pattimura)"<<endl;
        cetak<<" B. Pangeran Antasari"<<endl;
        cetak<<" C. Teuku Umar"<<endl;
        cetak<<" D. Bung Tomo"<<endl;
        cetak<<endl;
        cetak<<"Masukkan Jawaban : ";
        baca>>jawaban;
        if(jawaban=='C'||jawaban=='c')
   {
       bintang();
       cetak<<"              SELAMAT JAWABAN ANDA BENAR SEMUA!!!          "<<endl;
       cetak<<"                   ANDA MENDAPATKAN NILAI 100              "<<endl;
       bintang();
   }
   else
   {
       cetak<<"Jawaban anda salah!!"<<endl;
       cetak<<"Point anda 90";
   }
   }
   }
   }
   }
   }
     }
     }
     }
   }
   cetak<<endl;
   cetak<<"Ingin Bermain Lagi?(Y/T):";
   baca>>a;
   }
   else (jawaban=='T'||jawaban=='t');
   }
   while(a=='Y'||a=='y');
   goto a;
   tahan();


}

