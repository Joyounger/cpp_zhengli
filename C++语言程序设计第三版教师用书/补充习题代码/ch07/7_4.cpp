//7_4.cpp
#include <iostream>
using namespace std;

class Base
{public:
	void f() { cout << "executing Base::f() \n"; }
	int a;
};
class Derived : public Base
{public:
	void f() { cout << "executing Derived::f() \n"; } 
	int a; 
};

int main()
{
	Base x;
	x.a = 20;
	x.f();
	cout << "x.a = " << x.a << endl;
	Derived y;
	y.a = 40; 
	y.Base::a = 60; 
	y.f(); 
	y.Base::f(); 
	cout << "y.a = " << y.a << endl;
	cout << "y.Base::a = " <<  y.Base::a << endl;
	Base z = y;
	cout << "z.a = " << z.a << endl;
	return 0;
}
/*
运行结果：
executing Base::f()
x.a = 20
executing Derived::f()
executing Base::f()
y.a = 40
y.Base::a = 60
z.a = 60
*/