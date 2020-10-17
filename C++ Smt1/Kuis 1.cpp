#include <iostream> // standard library buat cout dan cin
#include <conio.h> //standard library buat tahan();
#include <windows.h> //standard library buat fungsi system()
#define mulai() main()
#define tahan() getch()
#define cetak cout
#define scan cin

using namespace std;

//DEKLARASI FUNGSI GARIS
garis()
{cetak<<"------------------------------------------------------------------------------------"<<endl;}

//DEKLARASI FUNGSI KOP
kop()
{
    cetak<<"************************** SELAMAT DATANG DI GAME KUIS *****************************\n";
    cetak<<"================================= DI BUAT OLEH =====================================\n";
    cetak<<"==================== Nama : M.SADDAM & LUTHFI FADHLURROHMAN ========================\n";
    cetak<<"======================== Kampus : BSI KRAMAT 98 10.1A.07 ===========================\n";
    cetak<<"****************************** SILAHKAN MENGERJAKAN ********************************\n";
}

mulai()
{
int x,n,tampil;
x=0;
char a[50],jawaban,pilih;

system("color 70");
garis();
kop();
garis();
cetak<<"\n";
atas:
cetak<<"\n Silahkan Masukkan Nama Anda : ";
scan>>a;
cetak<<"\n\n";
cetak<<"\n\n\t\t ************ Selamat Datang "<<a<<" ************\n";
cetak<<"\n\n\t\t              1) Mulai Game";
cetak<<"\n\n\t\t              2) Lihat Nilai";
cetak<<"\n\n\t\t              3) Keluar Game";
cetak<<"\n\n\t\t                Pilih : ";

scan>>n;
switch(n)
{
case 1:
    cetak<<"\n\n\n";
    cetak<<"1.Seniman Asli Betawi ?";
    cetak<<"\n\n A.Putut Wijaya \n\n B.Benyamin Syueb \n\n C.Parto  \n\n D.Sule";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='B'||jawaban=='b')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah B";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"2.Ibu kota negara Ceko ?";
    cetak<<"\n\n A.Praha \n\n B.Madrid \n\n C.London \n\n D.Amsterdam";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='A'||jawaban=='a')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah A";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"3.Danau terluas di Indonesia ?";
    cetak<<"\n\n A.Danau Singkarak \n\n B.Danau Maninjau \n\n C.Danau Toba \n\n D.Danau Ranau";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='C'||jawaban=='c')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah C";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"4.Hewan apakah yang memiliki kemampuan lari tercepat di dunia ?";
    cetak<<"\n\n A.Singa \n\n B.Beruang \n\n C.Harimau \n\n D.Cheetah";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='D'||jawaban=='d')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah D";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"5. Pelanet Manakah Yang Paling Dekat Dengan Matahari ?";
    cetak<<"\n\n A.Pluto \n\n B.Merkurius \n\n C.Venus \n\n D.Saturnus";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='B'||jawaban=='b')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah B";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"6.Negara di Asia Tenggara yang tidak pernah di jajah ?";
    cetak<<"\n\n A.Vietnam \n\n B.Kamboja \n\n C.Thailand \n\n D.Singapore";
    cetak<<"\n\n Jawaban Anda : ";
    scan>>jawaban;
if(jawaban=='C'||jawaban=='c')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah C";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"7.Gunung Tertinggi di Dunia ?";
    cetak<<"\n\n A.Gunung Semeru \n\n B.Gunung Akonkagua \n\n C.Gunung Everest \n\n D.Gunung Kerinci";
    cetak<<"\n\n Jawaban Anda: ";
    scan>>jawaban;
if(jawaban=='C'||jawaban=='c')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah C";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"8.Dibawah ini orang-orang yang menemukan lampu, kecuali ?";
    cetak<<"\n\n A.Thomas Alva Edison \n\n B.Alexander Graham Bell \n\n C.Joseph Wilson Swan \n\n D.Hiram Maxim";
    cetak<<"\n\n Jawaban Anda: ";
    scan>>jawaban;
if(jawaban=='B'||jawaban=='b')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah A";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"9.Belanda menjajah Indonesia selama ?";
    cetak<<"\n\n A.3,5 Tahun \n\n B.35 Tahun \n\n C.135 Tahun \n\n D.350 Tahun";
    cetak<<"\n\n Jawaban Anda: ";
    scan>>jawaban;
if(jawaban=='D'||jawaban=='d')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah D";
    tahan();
    cetak<<"\n\n\n";
    cetak<<"10.Siapakah tokoh pahlawan asal Aceh ?";
    cetak<<"\n\n A.Teuku Umar \n\n B.Thomas Matulessy (Pattimura) \n\n C.Pangeran Antasari \n\n D.Bung Tomo";
    cetak<<"\n\n Jawaban Anda: ";
    scan>>jawaban;
if(jawaban=='A'||jawaban=='a')
{
    x=x+10;
    cetak<<"\n\n Selamat Jawaban Anda Benar!!!";
}
else
    cetak<<"\n\n Maaf Jawaban Anda Salah!!! Jawabannya adalah A";
    cetak<<"\n\n\t\t 1) Lihat Nilai";
    cetak<<"\n\n\t\t 2) Keluar Game";
    cetak<<"\n\n\t\t  Pilih : ";
scan>>n;
case 2:
if(x==100)
    cetak<<"\n\n Selamat Jawaban Anda Benar Semua!!!";
else if(x<=100)
    cetak<<"\n =====================";
    cetak<<"\n Name Player :" <<a;
    cetak<<"\n Total Score :" <<x;
    cetak<<"\n =====================";
    cetak<<"\n\n\t\t 1) Mulai Game";
    cetak<<"\n\n\t\t 2) Keluar Game";
    cetak<<"\n\n\t\t  Pilih : ";
    scan>>pilih;
if(pilih=='1')
   {
    goto atas;
   }
else
   {
    goto out;
   }
}
tahan();

out:
;}
