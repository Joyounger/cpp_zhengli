//8_1.cpp
#include<iostream>
using namespace std;
class complex	//����������
{
public:	//�ⲿ�ӿ�
	complex(double r=0.0,double i=0.0){real=r;imag=i;}	//���캯��
	complex operator + (complex c2);	//�����+���س�Ա����
	complex operator - (complex c2);	//�����-���س�Ա����
	void display();	//�������
private:	//˽�����ݳ�Ա
	double real;	//����ʵ��
	double imag;	//�����鲿
};	
complex complex::operator +(complex c2)	//�������������ʵ��
{
	return complex(real+c2.real, imag+c2.imag); //����һ����ʱ����������Ϊ����ֵ
}
complex complex::operator -(complex c2)	//�������������ʵ��
{
	return complex(real-c2.real, imag-c2.imag);  //����һ����ʱ����������Ϊ����ֵ
}
void complex::display()
{
	cout<<"("<<real<<","<<imag<<")"<<endl;
}
int main()	//������
{
	complex c1(5,4),c2(2,10),c3;	//����������Ķ���
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	c3=c1-c2;	//ʹ�������������ɸ�������
	cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;	//ʹ�������������ɸ����ӷ�
	cout<<"c3=c1+c2=";
	c3.display();
}
