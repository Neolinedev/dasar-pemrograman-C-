#include<string>
#include<iostream>

using namespace std;

// Outside class
// class Mahasiswa {
//	public:
//		void mahasiswaMethod();
//};

//void Mahasiswa::mahasiswaMethod() {
//	cout<<"10190130 Muhammad Saddam Pradana Rekayasa Perangkat Lunak";
//}

//int main()
//{
//	Mahasiswa dataMahasiswa;
//	dataMahasiswa.mahasiswaMethod();
//	return 0;
//}

// Inside Class
class Students {
	public:
		void studentsMethod() {
			cout<<"10190130 Muhammad Saddam Pradana Rekayasa Perangkat Lunak";
		}
};

int main() {
	Students dataStudents;
	dataStudents.studentsMethod();
	return 0;
}
