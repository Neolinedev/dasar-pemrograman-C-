#include<iostream>

using namespace std;

class Karyawan {
	private:
		int gaji;
		
	public:
		// Setter		
		void setGaji(int g) {
			gaji = g;
		}
		// Getter
		int getGaji() {
			return gaji;
		}
};

int main() {
	Karyawan dataKaryawan;
	dataKaryawan.setGaji(10000000);
	cout<<dataKaryawan.getGaji();
	
	return 0;
}
