#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
double fahrenheit_ke_celcius(double f);
float fahrenheit_ke_celcius(float f);
int fahrenheit_ke_celcius(int f);
main()
{
	double f_double = 100;
	float f_float = 100;
	int f_int = 100;
	
	cout<<"Pemanggilan dengan tipe data double\n";
	cout<<"Proses dengan tipe data double\n";
	cout<<(f_double)<<" sama dengan "<<fahrenheit_ke_celcius(f_double)<<endl;
	cout<<endl;
	cout<<"Pemanggilan dengan tipe data float\n";
	cout<<"Proses dengan tipe data float\n";
	cout<<(f_float)<<" sama dengan "<<fahrenheit_ke_celcius(f_float)<<endl;
	cout<<endl;
	cout<<"Pemanggilan dengan tipe data integer\n";
	cout<<"Proses dengan tipe data integer\n";
	cout<<(f_int)<<" sama dengan "<<fahrenheit_ke_celcius(f_int)<<endl;
	
	getch();
}
double fahrenheit_ke_celcius(double f)
{
	double c;
	c=(f-32.0)*5.0/9.0;
	return c;
}
float fahrenheit_ke_celcius(float f)
{
	float c;
	c=(f-32.0)*5.0/9.0;
	return c;
}
int fahrenheit_ke_celcius(int f)
{
	int c;
	c=(f-32)*5/9;
	return c;
}
