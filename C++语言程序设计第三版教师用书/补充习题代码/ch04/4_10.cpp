//4_10.cpp
#include <iostream>
using namespace std;
class B;
class A{
	B *x;
public:
	void callB();
};

/* Error:
void A::callB()
	{
		x->funA();
	}
*/
class B{
	A *y;
public:
	void funA()
	{
		cout<<"This is calling B"<<endl;
	}
};

//OK
void A::callB()
	{
		x->funA();
	}

int main()
{
	A a;
	a.callB();
	return 0;
}

/*
运行结果：
This is calling B
*/

