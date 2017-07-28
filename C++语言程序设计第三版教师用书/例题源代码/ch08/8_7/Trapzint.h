//Trapzint.h  �ļ�һ��������
#include <iostream>
#include <cmath>
using namespace std;
class F	//������F������
{
public:
	virtual double operator ()(double x) const=0;	//���麯�����������()
};
class Fun:public F	//����������Fun����
{
public:
	double operator()(double x) const	//�麯��������ʵ��
	{
	      return log(1.0+x)/(1.0+x*x);	//��������
	}
};
class Integ	//������Integ����
{
public:
	virtual double operator ()(double a,double b,double eps) const=0;
};
class Trapz:public Integ	//����������Trapz����
{
public:
	Trapz(const F&pf):f(pf){}	//���캯��
	double operator ()(double a, double b,double eps) const;
private:
	const F &f;	//˽�г�Ա��F������ָ��
};	
//End of file Trapzint.h
