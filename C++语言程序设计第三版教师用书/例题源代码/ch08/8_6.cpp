//8_6.cpp
#include <iostream>
using namespace std;
class B0	//�������B0����
{
public:	//�ⲿ�ӿ�
	virtual void display()=0;	//���麯����Ա
};
class B1: public B0	//��������
{
public:
	void display(){cout<<"B1::display()"<<endl;}	//���Ա����
};
class D1: public B1	//��������
{
public:
	void display(){cout<<"D1::display()"<<endl;}	//���Ա����
};
void fun(B0 *ptr)	//��ͨ����
{
	ptr->display();
}
int main()	//������
{
	B0 *p;	//�����������ָ��
	B1 b1;	//�������������
	D1 d1;	//�������������
	p=&b1;
	fun(p);	//����������B1������Ա
	p=&d1;
	fun(p);	//����������D1������Ա
}
