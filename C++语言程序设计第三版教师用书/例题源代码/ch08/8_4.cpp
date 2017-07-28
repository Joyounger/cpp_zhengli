//8_4.cpp
#include <iostream>
using namespace std;
class B0	//基类B0声明
{
public:	//外部接口
	virtual void display(){cout<<"B0::display()"<<endl;}	//虚成员函数
};
class B1: public B0	//公有派生
{
public:
	void display(){cout<<"B1::display()"<<endl;}	//虚成员函数
};
class D1: public B1	//公有派生
{
public:
	void display(){cout<<"D1::display()"<<endl;}	//虚成员函数
};
void fun(B0 *ptr)	//普通函数
{
	ptr->display();
}
int main()	//主函数
{
	B0 b0,*p;	//声明基类对象和指针
	B1 b1;	//声明派生类对象
	D1 d1;	//声明派生类对象
	p=&b0;
	fun(p);	//调用基类B0函数成员
	p=&b1;
	fun(p);	//调用派生类B1函数成员
	p=&d1;
	fun(p);	//调用派生类D1函数成员
}
