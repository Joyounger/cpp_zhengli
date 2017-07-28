//3_6.cpp
//本题为“分析错误原因”，故本程序有编译错误
#include <iostream>
using namespace std;

float minus(float x,float y)
{	return x-y;}

double minus(float x,float y)
{	return x-y;}

int main()
{
	cout<<" minus(20.2-10.1) ="<<minus(20.2,10.1)<<endl;
	return 0;
}
