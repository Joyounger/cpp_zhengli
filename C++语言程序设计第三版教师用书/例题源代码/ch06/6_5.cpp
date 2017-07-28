//6_5.cpp
#include<iostream>
using namespace std;
int main()
{
	int *i_pointer;	//声明int型指针i_pointer
	int i;	//声明int型数i
	i_pointer=&i;	//取i的地址赋给i_pointer
	i=10;	//int型数赋初值
	cout<<"Output int i="<<i<<endl;	//输出int型数的值
	cout<<"Output int pointer i="<<*i_pointer<<endl;	//输出int型指针所指地址的内容
}
