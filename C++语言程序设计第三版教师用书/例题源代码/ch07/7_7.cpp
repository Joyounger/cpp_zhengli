//7_7.cpp
#include <iostream>
using namespace std;
class B1	//声明基类B1
{
public:	//外部接口
	int nV;
	void fun(){cout<<"Member of B1"<<endl;}
};
class B2	//声明基类B2
{
public:	//外部接口
	int nV;
	void fun(){cout<<"Member of B2"<<endl;}
};
class D1: public B1, public B2	//声明派生类D1
{
public:
	int nV;	//同名数据成员
	void fun(){cout<<"Member of D1"<<endl;}	//同名函数成员
};
int main()
{
	D1 d1;
	d1.nV=1;	//对象名.成员名标识
	d1.fun();	//访问D1类成员
	
	d1.B1::nV=2;	//作用域分辨符标识
	d1.B1::fun();	//访问B1基类成员
	
	d1.B2::nV=3;	//作用域分辨符标识
	d1.B2::fun();	//访问B2基类成员
}
