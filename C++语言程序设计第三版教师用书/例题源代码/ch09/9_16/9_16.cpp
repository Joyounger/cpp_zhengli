//9_16.cpp
#include<iostream>
#include<string>
#include"employee.h"
#include "9_3.h"  //����������ģ��ͷ�ļ�
using namespace std;

int main()
{
	manager m1;
	technician t1;
	salesman s1;
	salesmanager sm1;
	char namestr[20];	//�����Ա����ʱ������ʱ�����namestr��

	//�޸Ĳ���
	Array<employee*>  emp(4);
	emp[0]=&m1;
	emp[1]=&t1;
	emp[2]=&sm1;
	emp[3]=&s1;

	//���²�����8_8.cpp��ȫ��ͬ
	int i;
	for(i=0;i<4;i++)
	{
	cout<<"������һ����Ա������:";
	cin>>namestr;
	emp[i]->SetName(namestr);	//����ÿ����Ա������
	emp[i]->promote();	//������ͨ������ָ����ʸ������ຯ��
	}
	cout<<"�������ְ������Ա"<<t1.GetName()<<"���µĹ���ʱ��:";
	int ww;
	cin>>ww;
	t1.SetworkHours(ww);	//���ù���ʱ��

	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ű��µ������ܶ�:";
	float sl;
	cin>>sl;
	sm1.Setsales(sl);	//�������۶�

	cout<<"����������Ա"<<s1.GetName()<<"���µ����۶�:";
	cin>>sl;
	s1.Setsales(sl);	//�������۶�

	for(i=0;i<4;i++)
	{
	emp[i]->pay();	//������н��ͨ������ָ����ʸ������ຯ��
	cout<<emp[i]->GetName()<<"���"<<emp[i]->GetindividualEmpNo()
	    <<"����Ϊ"<<emp[i]->Getgrade()<<"�������¹���"<<emp[i]->GetaccumPay()<<endl;
	}
}

