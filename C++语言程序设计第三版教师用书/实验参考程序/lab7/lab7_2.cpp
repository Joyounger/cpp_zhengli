#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass() { cout << "����������!" << endl;}
	~BaseClass() { cout << "�����������!" << endl;}
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass() {cout << "�������������!" << endl;}
	~DerivedClass() {cout << "�������������!" << endl;}
};


int main()
{
    DerivedClass d;
}
