//3_7.cpp
//����Ϊ����������ԭ�򡱣��ʱ������б������
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
