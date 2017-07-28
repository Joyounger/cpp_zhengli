//Trapzint.h  文件一，类声明
#include <iostream>
#include <cmath>
using namespace std;
class F	//抽象类F的声明
{
public:
	virtual double operator ()(double x) const=0;	//纯虚函数重载运算符()
};
class Fun:public F	//公有派生类Fun声明
{
public:
	double operator()(double x) const	//虚函数的内联实现
	{
	      return log(1.0+x)/(1.0+x*x);	//被积函数
	}
};
class Integ	//抽象类Integ声明
{
public:
	virtual double operator ()(double a,double b,double eps) const=0;
};
class Trapz:public Integ	//公有派生类Trapz声明
{
public:
	Trapz(const F&pf):f(pf){}	//构造函数
	double operator ()(double a, double b,double eps) const;
private:
	const F &f;	//私有成员，F类对象的指针
};	
//End of file Trapzint.h
