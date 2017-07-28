//7_8.cpp
#include <iostream>
using namespace std;
class B0	//声明基类B0
{
public:	//外部接口
	int nV;
	void fun(){cout<<"Member of B0"<<endl;}
};
class B1: virtual public B0	//B0为虚基类，派生B1类
{
public:	//新增外部接口
	int nV1;
};
class B2: virtual public B0	//B0为虚基类派生B2类
{
public:	//新增外部接口
	int nV2;
};
class D1: public B1, public B2	//派生类D1声明
{
public:	//新增外部接口
	int nVd;
	void fund(){cout<<"Member of D1"<<endl;}
};
int main()	//程序主函数
{
	D1 d1;	//声明D1类对象d1
	d1.nV=2;	//使用直接基类
	d1.fun();
}
