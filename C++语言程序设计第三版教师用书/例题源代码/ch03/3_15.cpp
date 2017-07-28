//3_15.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int get_volume(int length, int width = 2, int height = 3);
int main()
{
	int x = 10, y = 12, z = 15;
	cout << "Some box data is " ;
	cout << get_volume(x, y, z) << endl;
	cout << "Some box data is " ;
	cout << get_volume(x, y) << endl;
	cout << "Some box data is " ;
	cout << get_volume(x) << endl;
	cout << "Some box data is ";
	cout << get_volume(x, 7) << endl;
	cout << "Some box data is ";
	cout << get_volume(5, 5, 5) << endl;
}

int get_volume(int length, int width, int height)
{
	cout<<setw(5)<<length<<setw(5)<<width<<setw(5)<<height<<' ';
	return length * width * height;
}
