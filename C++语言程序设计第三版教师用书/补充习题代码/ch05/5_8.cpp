//5_8.cpp
#include <iostream>
using namespace std;
class Exam
{
public:
	Exam()	{cout<<"Calling Constructor"<<endl;}
};
void fun(int i)
{
	static Exam e;
	cout<<"The i is :"<<i<<endl;
}

int main()
{ 
	fun(10);
	fun(20);
	fun(30);
	return 0;
}
/*
程序运行结果为：
Calling Constructor
The i is :10
The i is :20
The i is :30
*/