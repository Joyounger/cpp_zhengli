//12_5.cpp
#include <iostream>
using namespace std;

class B {};
class D:public B{};

int main()
{
	D derived;
	try
	{	throw derived;  }
	catch (B b)
	{	cout<<"Catch a base class\n";  }
	catch (D d)
	{	cout<<"Catch a Derived class\n";  }
	return 0;
}
/*
运行结果：
Catch a base class
*/