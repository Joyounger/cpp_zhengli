//7_8.cpp
#include <iostream>
using namespace std;
class B0	//��������B0
{
public:	//�ⲿ�ӿ�
	int nV;
	void fun(){cout<<"Member of B0"<<endl;}
};
class B1: virtual public B0	//B0Ϊ����࣬����B1��
{
public:	//�����ⲿ�ӿ�
	int nV1;
};
class B2: virtual public B0	//B0Ϊ���������B2��
{
public:	//�����ⲿ�ӿ�
	int nV2;
};
class D1: public B1, public B2	//������D1����
{
public:	//�����ⲿ�ӿ�
	int nVd;
	void fund(){cout<<"Member of D1"<<endl;}
};
int main()	//����������
{
	D1 d1;	//����D1�����d1
	d1.nV=2;	//ʹ��ֱ�ӻ���
	d1.fun();
}
