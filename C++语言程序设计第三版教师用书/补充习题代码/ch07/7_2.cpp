//7_2.cpp
#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(void)	{cout<<"Base1 constructor called"<<endl;}
	~Base1(void) {cout<<"Base1 destructor called"<<endl;}
};
class Base2
{public:
	Base2(void)	{cout<<"Base2 constructor called"<<endl;}
	~Base2(void) {cout<<"Base2 destructor called"<<endl;}
};
class Derived:public Base1,public Base2
{public:
	Derived(void):Base1(),Base2()  {cout<<"Derived constructor called"<<endl;	}
	~Derived(void)  {cout<<"Derived destructor called"<<endl;	}
};
int main()
{	Derived objD;
	{									//��������1��ʼ
		Base1 objB1;
		{				//��������2��ʼ
			Base2 objB2;
		}				//��������2����
	}									//��������1����
	return 0;
}
/*
���н����
Base1 constructor called
Base2 constructor called
Derived constructor called
Base1 constructor called
Base2 constructor called
Base2 destructor called
Base1 destructor called
Derived destructor called
Base2 destructor called
Base1 destructor called
*/
