#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int getOption();

int main() {
	
	fstream data;
	data.open("data.bin", ios::out | ios::in | ios::binary);
	
	// Check file
	if(data.is_open()) {
		cout<<"Data ada"<<endl;
	} else {
		cout<<"Data tidak ada"<<endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
	
	int pilihan = getOption();
	char is_continue;
	
	enum option{
		CREATE = 1,
		READ,
		UPDATE,
		DELETE,
		FINISH
	};
	
	cout<<READ<<endl;
	
	while(pilihan != FINISH) {
//		pilihan = getOption();
		
		switch(pilihan) {
			case CREATE:
				cout<<"Menambah Data"<<endl;
				break;
			case READ:
				cout<<"Tampilkan Data"<<endl;
				break;
			case UPDATE:
				cout<<"Ubah Data"<<endl;
				break;
			case DELETE:
				cout<<"Hapus Data"<<endl;
				break;
			default:
				cout<<"Pilihan tidak ditemukan !"<<endl;
				break;
		}
		
		label_continue:
		
		cout<<"Lanjutkan?(y/n) : ";
		cin>>is_continue;
		if((is_continue == 'y') || (is_continue == 'Y')) {
//			pilihan = getOption();
		} else if ((is_continue == 'n') || (is_continue == 'N')) {
			break;
		} else {
			goto label_continue;
		}
	}
	
	cout<<"Akhir dari program"<<endl;
	cin.get();
	return 0;
}










