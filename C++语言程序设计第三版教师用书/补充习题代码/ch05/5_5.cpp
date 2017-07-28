//5_5.cpp
#include <iostream>
using namespace std;
class Two
{
	int y;
public:
	friend class One;
};
class One
{
	int x;
public:
	One(int a,Two &r,int b)		{x=a;r.y=b;}
	void Display(Two & r)		{cout<<x<<" "<<r.y<<endl;}
};
int main()
{
	Two ob2;
	One ob1(22,ob2,30);
	ob1.Display(ob2);
	return 0;
}
/*
程序运行结果为：
22 30
*/