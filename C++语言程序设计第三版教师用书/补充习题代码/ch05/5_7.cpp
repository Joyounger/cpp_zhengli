//5_7.cpp
#include <iostream>
using namespace std;
class Exam
{
	int n;
public:
	Exam(int i)	{n=i;}
	void Disp()	{cout<<"The first n="<<n<<endl;}
	void Disp() const {cout<<"The Second n="<<n<<endl;}
};

int main()
{
	Exam a(10);
	const Exam b(20);
	a.Disp();
	b.Disp();
	return 0;
}
/*
程序运行结果为：
The first n=10
The Second n=20
*/
