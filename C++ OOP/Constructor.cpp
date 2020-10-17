#include<string>
#include<iostream>

using namespace std;

//class Mahasiswa {
//	public:
//		Mahasiswa() {
//			cout<<"Ini adalah constructor dengan class Mahasiswa";
//		}
//};
//
//int main() {
//	Mahasiswa dataMahasiswa;	// Membuat object dari class Mahasiswa dan memanggil constructornya
//	return 0;
//}

// Constructor dengan parameter
//class Mahasiswa {
//	public:
//		int nim;
//		string nama;
//		string jurusan;
//		Mahasiswa(int x, string y, string z) { // Constructor
//			nim = x;
//			nama = y;
//			jurusan = z;
//		}
//};
//
//void helloFunction() {
//	cout<<"Hello World";
//}
//
//int main() {
//	Mahasiswa dataMahasiswa1(10190130, "Muhammad Saddam Pradana", "Rekayasa Perangkat Lunak");
//	Mahasiswa dataMahasiswa2(12493281, "Neoline", "Teknik Elektro");
//	
//	cout << dataMahasiswa1.nim << " " << dataMahasiswa1.nama << " " << dataMahasiswa1.jurusan << "\n";
//	cout << dataMahasiswa2.nim << " " << dataMahasiswa2.nama << " " << dataMahasiswa2.jurusan << "\n";
//	
//	helloFunction();
//	
//	return 0;
//}


class Mahasiswa {
	public:
		int nim;
		string nama;
		string jurusan;
		Mahasiswa(int x, string y, string z); // Deklarasi Constructor
};

// Outside Constructor Definition
Mahasiswa::Mahasiswa(int x, string y, string z) {
	nim = x;
	nama = y;
	jurusan = z;
}

int main() {
	Mahasiswa dataMahasiswa1(10190130, "Muhammad Saddam Pradana", "Rekayasa Perangkat Lunak");
	Mahasiswa dataMahasiswa2(12493281, "Neoline", "Teknik Elektro");
	
	cout << dataMahasiswa1.nim << " " << dataMahasiswa1.nama << " " << dataMahasiswa1.jurusan << "\n";
	cout << dataMahasiswa2.nim << " " << dataMahasiswa2.nama << " " << dataMahasiswa2.jurusan << "\n";
	
	return 0;
}
