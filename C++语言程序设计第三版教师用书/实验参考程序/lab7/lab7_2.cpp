#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass() { cout << "构造基类对象!" << endl;}
	~BaseClass() { cout << "析构基类对象!" << endl;}
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass() {cout << "构造派生类对象!" << endl;}
	~DerivedClass() {cout << "析构派生类对象!" << endl;}
};


int main()
{
    DerivedClass d;
}
