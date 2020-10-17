#include<string>
#include<iostream>

using namespace std;

class Mahasiswa {
	public:
		int nim;
		string nama;
		string jurusan;
};

int main() {
	Mahasiswa dataMahasiswa1;
	
	dataMahasiswa1.nim = 10190130;
	dataMahasiswa1.nama = "Muhammad Saddam Pradana";
	dataMahasiswa1.jurusan = "Rekayasa Perangkat Lunak";
	
	
	Mahasiswa dataMahasiswa2;
	
	dataMahasiswa2.nim = 12492184;
	dataMahasiswa2.nama = "Neoline";
	dataMahasiswa2.jurusan = "Teknik Elektro";
	
	cout << dataMahasiswa1.nim << " " << dataMahasiswa1.nama << " " << dataMahasiswa1.jurusan << "\n";
	cout << dataMahasiswa2.nim << " " << dataMahasiswa2.nama << " " << dataMahasiswa2.jurusan << "\n";
	
	return 0;

}
