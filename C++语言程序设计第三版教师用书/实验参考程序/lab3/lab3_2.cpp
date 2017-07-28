//lab3_2.cpp
#include <iostream>
using namespace std;

int max1(int x, int y)
{
	return (x>y?x:y);
}

int max1(int x, int y, int z)
{
	int temp1=max1(x,y);
	return (y>z?y:z);
}

double max1(double x, double y)
{
	return (x>y?x:y);
}

double max1(double x, double y, double z)
{
	double temp1=max1(x,y);
	return (y>z?y:z);
}

int main()
{
	int x1, x2;
	double d1, d2;
	x1 = max1(5,6);
	x2 = max1(2,3,4);
	d1 = max1(2.1, 5.6);
	d2 = max1(12.3, 3.4, 7.8);

	cout << "x1=" <<x1 << endl;
	cout << "x2=" <<x2 << endl;
	cout << "d1=" <<d1 << endl;
	cout << "d2=" <<d2 << endl;
}
