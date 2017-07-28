//5_7.cpp
#include<iostream>
using namespace std;
void display(const double& r);
int main()
{
	double d(9.5);
	display(d);
}
void display(const double& r)
//常引用做形参，在函数中不能更新r所引用的对象，因此对应的实参不会被破坏。
{	cout<<r<<endl;    }
