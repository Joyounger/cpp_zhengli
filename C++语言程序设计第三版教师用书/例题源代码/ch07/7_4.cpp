//7_4.cpp
#include <iostream>
using namespace std;
class B0	//����B0����
{
public:
	void display(){cout<<"B0::display()"<<endl;}	//���г�Ա����
};
class B1: public B0	//����������B1����
{
public:
	void display(){cout<<"B1::display()"<<endl;}	//���г�Ա����
};
class D1: public B1	//����������D1����
{
public:
	void display(){cout<<"D1::display()"<<endl;}	//���г�Ա����
};
void fun(B0 *ptr)	//��ͨ����
{		//����Ϊָ���������ָ��
	ptr->display();	//"����ָ��->��Ա��"
}
int main()	//������
{
	B0 b0;	//����B0�����
	B1 b1;	//����B1�����
	D1 d1;	//����D1�����
	B0 *p;	//����B0��ָ��
	p=&b0;	//B0��ָ��ָ��B0�����
	fun(p);
	p=&b1;	//B0��ָ��ָ��B1�����
	fun(p);
	p=&d1;	//B0��ָ��ָ��D1�����
	fun(p);
}
