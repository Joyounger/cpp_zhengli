//7_7.cpp
#include <iostream>
using namespace std;
class B1	//��������B1
{
public:	//�ⲿ�ӿ�
	int nV;
	void fun(){cout<<"Member of B1"<<endl;}
};
class B2	//��������B2
{
public:	//�ⲿ�ӿ�
	int nV;
	void fun(){cout<<"Member of B2"<<endl;}
};
class D1: public B1, public B2	//����������D1
{
public:
	int nV;	//ͬ�����ݳ�Ա
	void fun(){cout<<"Member of D1"<<endl;}	//ͬ��������Ա
};
int main()
{
	D1 d1;
	d1.nV=1;	//������.��Ա����ʶ
	d1.fun();	//����D1���Ա
	
	d1.B1::nV=2;	//������ֱ����ʶ
	d1.B1::fun();	//����B1�����Ա
	
	d1.B2::nV=3;	//������ֱ����ʶ
	d1.B2::fun();	//����B2�����Ա
}
