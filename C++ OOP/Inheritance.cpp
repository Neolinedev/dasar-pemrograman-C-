#include<iostream>

using namespace std;

//// Base class (Class utama)
//class Vehicle {
//  public:
//    string brand = "Ford";
//    void honk() {
//      cout << "Tuut, tuut! \n" ;
//    }
//};
//
//// Derived class (Class yang diwariskan dari Class Kendaraan)
//class Car: public Vehicle {
//  public:
//    string model = "Mustang";
//};
//
//int main() {
//  Car myCar;
//  myCar.honk();
//  cout << myCar.brand + " " + myCar.model;
//  return 0;
//}

// Multilevel Inheritance

//// Base class
//class Mahasiswa {
//	public:
//		void myFunction() {
//			cout<<"Pewarisan dari class utama Mahasiswa";
//		}
//};
//
//// Derived Class (Class yang diwarisi)
//class Absensi: public Mahasiswa {
//	
//};
//
//class Nilai: public Absensi {
//	
//};
//
//int main() {
//	Nilai nilaiMahasiswa;
//	nilaiMahasiswa.myFunction();
//	
//	return 0;
//}

// Multiple Inheritance (Pewarisan didalam Pewarisan)

//// Base Class
//class Mahasiswa {
//	public:
//		void nilaiFunction() {
//			cout<<"Pewarisan didalam Pewarisan Antar Class \n";
//		}
//};
//
//class Dosen {
//	public:
//		void dosenFunction() {
//			cout<<"Pewarisan class ke 2";
//		}
//};
//
//// Derived Class
//class mataKuliah: public Mahasiswa, public Dosen {	
//};
//
//int main() {
//	mataKuliah kodeMatkul;
//	kodeMatkul.nilaiFunction();
//	kodeMatkul.dosenFunction();
//	
//	return 0;
//}

// Inheritance Access
class Karyawan {
	protected:
		int gaji;
};

// Derived Class
class Programmer: public Karyawan {
	public:
		int bonus;
		void setGaji(int g) {
			gaji = g;
		}
		int getGaji() {
			return gaji;
		}
};

int main() {
	Programmer frontEnd;
	frontEnd.setGaji(10000000);
	frontEnd.bonus = 2000000;
	cout<<"Gaji : "<<frontEnd.getGaji()<<"\n";
	cout<<"Bonus : "<<frontEnd.bonus<<"\n";
	
	return 0;
}
