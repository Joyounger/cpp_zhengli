//8_8.cpp
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

	employee *emp[4]={&m1,&t1,&sm1,&s1};
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

