//lab3_3.cpp
#include <iostream>
using namespace std;

template<typename T>
T max1(T x, T y)
{
	return (x>y?x:y);
}

template<typename T>
T max1(T x, T y, T z)
{
	T temp1=max1(x,y);
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
