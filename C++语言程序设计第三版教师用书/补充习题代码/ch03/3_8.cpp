//3_8.cpp
//����Ϊ����������ԭ�򡱣��ʱ������б������
#include<iostream>
using namespace std;
void Swap(int a, int b);
void Swap(int& a, int& b);
void main()
{
	int x(5), y(10);
	cout<<"x="<<x<<"    y="<<y<<endl;
	Swap(x,y);
	cout<<"x="<<x<<"    y="<<y<<endl;
}

void Swap(int& a, int& b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void Swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
