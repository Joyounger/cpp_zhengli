//3_5.cpp
#include <iostream>
using namespace std;
int minus(int x=0,int y=0)
{
	return x-y;
}
int main()
{
	cout<<" minus(20-10) ="<<minus(20-10)<<endl;
	cout<<" minus(10) ="<<minus(10)<<endl;
	cout<<" minus() ="<<minus()<<endl;
	return 0;
}
/*
运行结果：
minus(20-10) =10
minus(10) =10
minus() =0
*/