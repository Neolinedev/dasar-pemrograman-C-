#include<string>
#include<iostream>

using namespace std;

int tambahFunction(int x, int y) {
	return x+y;
}

double tambahFunction(double x, double y) {
	return x+y;
}

int main() {
	int myNum = tambahFunction(5, 6);
	double myNum2 = tambahFunction(6.5, 3.4);
	
	cout<<"Int : "<<myNum<<"\n";
	cout<<"Double : "<<myNum2;
	
	return 0;
}
