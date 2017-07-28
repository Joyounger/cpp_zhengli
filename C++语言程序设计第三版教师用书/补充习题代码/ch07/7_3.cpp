//7_3.cpp
#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(int i)	{cout<<"Base1 constructor called "<<i<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class Base3
{public:
	Base3(int i)	{cout<<"Base3 constructor called "<<i<<endl;	}
	~Base3(void)	{cout<<"Base3 destructor called"<<endl;	}
};
class Derived:public Base2,public Base1,public Base3
{	Base3 member3;	Base1 member1;	Base2 member2;
public:
	Derived(int i, int a,int b,int c,int d,int e,int f)
		:Base1(a),member2(e),member1(d),Base2(b),member3(f),Base3(c)
	{	cout<<"Derived constructor called "<<i<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
int main()
{	Derived objD(1,2,3,4,5,6,7);	return 0;} 
/*
运行结果：
Base2 constructor called 3
Base1 constructor called 2
Base3 constructor called 4
Base3 constructor called 7
Base1 constructor called 5
Base2 constructor called 6
Derived constructor called 1
Derived destructor called
Base2 destructor called
Base1 destructor called
Base3 destructor called
Base3 destructor called
Base1 destructor called
Base2 destructor called
*/