//7_10.cpp
#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;
int main()
{
	manager m1;
	technician t1;
	salesmanager sm1;
	salesman s1;
	char namestr[20];           //�����Ա����ʱ������ʱ�����namestr��

	cout<<"������һ����Ա������:";
	cin>>namestr;
	m1.SetName(namestr);	//���ù�Աm1����

	cout<<"������һ����Ա������:";
	cin>>namestr;
	t1.SetName(namestr);	//���ù�Աt1����

	cout<<"������һ����Ա������:";
	cin>>namestr;
	sm1.SetName(namestr);	//���ù�Աsm1����

	cout<<"������һ����Ա������:";
	cin>>namestr;
	s1.SetName(namestr);	//���ù�Աs1����

	m1.promote(3);	//����m1����3��
	m1.pay();	//����m1��н

	cout<<"�������ְ������Ա"<<t1.GetName()<<"���µĹ���ʱ��:";
	int ww;
	cin>>ww;  	//����t1���µĹ���ʱ��
	t1.SetworkHours(ww);	//����t1���µĹ���ʱ��
	t1.promote(2);	//t1����2��
	t1.pay();	//����t1��н

	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ű��µ������ܶ�:";
	float sl;
	cin>>sl; 	//����s1����Ͻ���ű��µ������ܶ�
	sm1.Setsales(sl);	//����s1����Ͻ���ű��µ������ܶ�
	sm1.pay();	//����s1��н
	sm1.promote(2);	//s1����2��

	cout<<"����������Ա"<<s1.GetName()<<"���µ����۶�:";
	cin>>sl; 	//����s1���µ����۶�
	s1.Setsales(sl);	//����s1���µ����۶�
	s1.pay();	//����s1��н

	//��ʾm1��Ϣ
	cout<<m1.GetName()<<"���"<<m1.GetindividualEmpNo()
	    <<"����Ϊ"<<m1.Getgrade()<<"�������¹���"<<m1.GetaccumPay()<<endl;

	//��ʾt1��Ϣ
	cout<<t1.GetName()<<"���"<<t1.GetindividualEmpNo()
	        <<"����Ϊ"<<t1.Getgrade()<<"�������¹���"<<t1.GetaccumPay()<<endl;

	//��ʾsm1��Ϣ
	cout<<sm1.GetName()<<"���"<<sm1.GetindividualEmpNo()
	    <<"����Ϊ"<<sm1.Getgrade()<<"�������¹���"<<sm1.GetaccumPay()<<endl;

	//��ʾs1��Ϣ
	cout<<s1.GetName()<<"���"<<s1.GetindividualEmpNo()
	    <<"����Ϊ"<<s1.Getgrade()<<"�������¹���"<<s1.GetaccumPay()<<endl;
}
