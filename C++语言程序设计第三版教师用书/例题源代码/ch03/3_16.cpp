//3_16.cpp
#include<iostream>
using namespace std;
struct complex
{
	double real;
	double imaginary;
};

int main()
{
	int m, n;
	double x, y;
	complex c1, c2, c3;
	int add(int m, int n);
	double add(double x, double y);
	complex add(complex c1, complex c2);

	cout<<"Enter two integer: ";
	cin>>m>>n;
	cout<<"integer "<<m<<'+'<<n<<"="<<add(m,n)<<endl;

	cout<<"Enter two real number: ";
	cin>>x>>y;
	cout<<"real number "<<x<<'+'<<y<<"= "<<add(x,y)<<endl;

	cout<<"Enter the first complex number: ";
	cin>>c1.real>>c1.imaginary;
	cout<<"Enter the second complex number: ";
	cin>>c2.real>>c2.imaginary;
	c3=add(c1,c2);
	cout<<"complex number ("<<c1.real<<','<<c1.imaginary<<")+("
		<<c2.real<<','<<c2.imaginary<<")= ("<<c3.real<<','<<c3.imaginary<<")\n";
}

int add(int m, int n)
{  return m+n; }

double add(double x, double y)
{  return x+y; }

complex add(complex c1, complex c2)
{
    complex c;
	c.real=c1.real+c2.real;
	c.imaginary=c1.imaginary+c2.imaginary;
	return c;
}
