//4_5.cpp
#include<iostream>
#include"employee.h"
using namespace std;
int main()
{
	employee m1;
	employee t1;
	employee sm1;
	employee s1;

	cout<<"������һ����Ա����н:";
	float pa;
	cin>> pa;  
	m1.IncreaseEmpNo(0);	 //m1���Ϊ��ǰ���
	m1.promote(3);	//m1����3��
	m1.SetaccumPay (pa);	//����m1��н

	cout<<"������һ����Ա����н:";
	cin>>pa;  	
	t1.IncreaseEmpNo(1);	//t1���Ϊ��ǰ��ż�1
	t1.promote(2);	//t1����2��
	t1.SetaccumPay (pa);	//����t1��н

	cout<<"������һ����Ա����н:";
	cin>> pa;  	
	sm1.IncreaseEmpNo(2);	//sm1���Ϊ��ǰ��ż�2
	sm1.promote(2);	//sm1����2��
	sm1.SetaccumPay (pa);	//����sm1����

	cout<<"������һ����Ա����н:";
	cin >>pa;  	
	s1.IncreaseEmpNo(3);	//s1���Ϊ��ǰ��ż�3
	s1.SetaccumPay (pa);	//����s1��н

	//��ʾm1��Ϣ
	cout<<"���"<<m1.GetindividualEmpNo()
	    <<"����Ϊ"<<m1.Getgrade()<<"�������¹���"<<m1.GetaccumPay()<<endl;

	//��ʾt1��Ϣ
	cout<<"���"<<t1.GetindividualEmpNo()
	        <<"����Ϊ"<<t1.Getgrade()<<"�������¹���"<<t1.GetaccumPay()<<endl;

	//��ʾsm1��Ϣ
	cout<<"���"<<sm1.GetindividualEmpNo()
	    <<"����Ϊ"<<sm1.Getgrade()<<"�������¹���"<<sm1.GetaccumPay()<<endl;

	//��ʾs1��Ϣ
	cout<<"���"<<s1.GetindividualEmpNo()
	    <<"����Ϊ"<<s1.Getgrade()<<"�������¹���"<<s1.GetaccumPay()<<endl;
}
