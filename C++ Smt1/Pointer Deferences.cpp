#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int ilham,amir,*raka;
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	cout<<"Nilai ILHAM = "<<ilham<<endl;
	cout<<"Nilai AMIR = "<<amir<<endl;
	cout<<"Nilai RAKA = "<<raka<<endl;
	getch();
}
