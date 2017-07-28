//5_9.cpp
#include <iostream>
using namespace std;
static int x=10;
void fun1()
{
	x+=2;
	cout<<x<<",";
}
void fun2()
{
	auto int x=11;
	cout<<x<<",";
}
int main()
{
	auto int x=5;
	cout<<x<<",";
	fun1();
	fun2();
	cout<<x<<endl;
	return 0;
}
/*
程序运行结果为：
5,12,11,5
*/