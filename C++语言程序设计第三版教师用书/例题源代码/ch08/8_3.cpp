//8_3.cpp
#include<iostream>

class complex	//复数类声明
{
public:	//外部接口
	complex(double r=0.0,double i=0.0){real=r;imag=i;}	//构造函数
	friend complex operator + (complex c1,complex c2);	//运算符+重载友元函数
	friend complex operator - (complex c1,complex c2);	//运算符-重载友元函数
	void display();	//显示复数的值
private:	//私有数据成员
	double real;
	double imag;
};			//显示函数实现
void complex::display()
{	std::cout<<"("<<real<<","<<imag<<")"<<std::endl;}
complex operator +(complex c1,complex c2)	//运算符重载友元函数实现
{	return complex(c2.real+c1.real,c2.imag+c1.imag);}
complex operator -(complex c1,complex c2)	//运算符重载友元函数实现
{	return complex(c1.real-c2.real,c1.imag-c2.imag);}
int main()	//主函数
{
	complex c1(5,4),c2(2,10),c3;
	std::cout<<"c1=";c1.display();
	std::cout<<"c2=";c2.display();
	c3=c1-c2;	//使用重载运算符
	std::cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;	//使用重载运算符
	std::cout<<"c3=c1+c2=";
	c3.display();
}
