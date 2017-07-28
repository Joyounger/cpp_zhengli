//3_7.cpp
//本题为“分析错误原因”，故本程序有编译错误
#include <iostream>
using namespace std;

float plus(float x,float y)
{	return x+y;}

float plus(float a,float b)
{	return a+a;}

int main()
{
	cout<<" plus(20.2+10.1) ="<<plus(20.2,10.1)<<endl;
	return 0;
}
