//8_3.cpp
#include<iostream>

class complex	//����������
{
public:	//�ⲿ�ӿ�
	complex(double r=0.0,double i=0.0){real=r;imag=i;}	//���캯��
	friend complex operator + (complex c1,complex c2);	//�����+������Ԫ����
	friend complex operator - (complex c1,complex c2);	//�����-������Ԫ����
	void display();	//��ʾ������ֵ
private:	//˽�����ݳ�Ա
	double real;
	double imag;
};			//��ʾ����ʵ��
void complex::display()
{	std::cout<<"("<<real<<","<<imag<<")"<<std::endl;}
complex operator +(complex c1,complex c2)	//�����������Ԫ����ʵ��
{	return complex(c2.real+c1.real,c2.imag+c1.imag);}
complex operator -(complex c1,complex c2)	//�����������Ԫ����ʵ��
{	return complex(c1.real-c2.real,c1.imag-c2.imag);}
int main()	//������
{
	complex c1(5,4),c2(2,10),c3;
	std::cout<<"c1=";c1.display();
	std::cout<<"c2=";c2.display();
	c3=c1-c2;	//ʹ�����������
	std::cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;	//ʹ�����������
	std::cout<<"c3=c1+c2=";
	c3.display();
}
