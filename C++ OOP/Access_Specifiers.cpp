#include<string>
#include<iostream>

using namespace std;

class AccessClass {
	public:
		int x;
		int y;
};

int main() {
	AccessClass accessObject;
	accessObject.x = 500;
	accessObject.y = 1000;
	
	return 0;
}
