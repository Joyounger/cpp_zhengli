//3_12.cpp
#include<iostream>
using namespace std;
void Swap(int& a, int& b);
int main()
{
	int x(5), y(10);
	cout<<"x="<<x<<"    y="<<y<<endl;
	Swap(x,y);
	cout<<"x="<<x<<"    y="<<y<<endl;
}

void Swap(int& a, int& b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
