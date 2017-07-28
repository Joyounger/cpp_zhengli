//8_5.cpp
#include <iostream>
using namespace std;

class Base
{
public:
	~Base(){ cout<< "Base destructor\n";}
};

class Derived: public Base
{
public:
	Derived();
	~Derived();
private:
	int *i_pointer;
};

Derived::Derived()
{	i_pointer=new int(0); }

Derived::~Derived()
{ 
	cout<< "Derived destructor\n";
	delete i_pointer;
}

void fun(Base* b)
{ delete b; }

int main()
{
	Base *b=new Derived();
	fun(b);
}
