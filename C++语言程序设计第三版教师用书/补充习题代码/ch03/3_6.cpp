//3_6.cpp
//����Ϊ����������ԭ�򡱣��ʱ������б������
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
