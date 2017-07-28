//3_13.cpp
#include <iostream>
#include <iomanip>
using namespace std;
void fiddle(int in1, int &in2);
int main()
{ 
	int count = 7, index = 12;
	cout << "The values are ";
	cout<<setw(5)<<count;
	cout<<setw(5)<<index<<endl;
	fiddle(count, index);
	cout << "The values are ";
	cout<<setw(5)<<count;
	cout<<setw(5)<<index<<endl;
}

void fiddle(int in1, int &in2)
{
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "The values are ";
	cout<<setw(5)<<in1;
	cout<<setw(5)<<in2<<endl;
}
