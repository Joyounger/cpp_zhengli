//10_16.cpp
#include<iostream>
#include"employee.h"
#include<vector>
using namespace std;

int main()
{
	manager m1;
	technician t1;
	salesmanager sm1;
	salesman s1;
	char namestr[20];  //�����Ա����ʱ������ʱ�����namestr��

	vector <employee *> vchar;	//�������ڱ����Ա�������������
	vchar.push_back(&m1);
	vchar.push_back(&t1);
	vchar.push_back(&sm1);
	vchar.push_back(&s1);

	int i;
	for(i=0;i<4;i++)
	{
      cout<<"������һ����Ա������:";
      cin>>namestr;
      vchar[i]->SetName(namestr);	//����ÿ����Ա����
      vchar[i]->promote();	//����
	}
	cout<<"�������ְ������Ա"<<t1.GetName()<<"���µĹ���ʱ��:";
	int ww;
	cin>>ww;
	t1.SetworkHours(ww);	//���ù���ʱ��

	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ű��µ������ܶ�:";
	float sl;
	cin>>sl;
	sm1.Setsales(sl);	//���������ܶ�

	cout<<"����������Ա"<<s1.GetName()<<"���µ����۶�:";
	cin>>sl;
	s1.Setsales(sl);	//�������۶�

	for(i=0;i<4;i++)
	{
    vchar[i]->pay();	//������н
    cout<<vchar[i]->GetName()<<"���"<<vchar[i]->GetindividualEmpNo()<<"����Ϊ"
    <<vchar[i]->Getgrade()<<"�������¹���"<<vchar[i]->GetaccumPay()<<endl;
	}
}
