//6_25.cpp
#include<iostream>
#include"employee.h"
using namespace std;
int main()
{
	employee emp[4];
	char namestr[20];           //�����Ա����ʱ������ʱ�����namestr��
	float pa;
	int grade, i;
	for (i=0; i<4; i++)
	{
	cout<<"������һ����Ա������:";
	cin>>namestr;
	emp[i].SetName(namestr);	//���ù�Աemp[i]������
	cout<<"�������Ա����н:";
	cin>> pa;
	emp[i]. SetaccumPay (pa);	//����emp[i]����н
	cout<<"�������Ա����������:";
	cin>>grade;
	emp[i].promote(grade);	// emp[i]����
	}

	//��ʾ��Ϣ
	for (i=0; i<4; i++)
	{
	cout<< emp[i].GetName()<<"���"<< emp[i].GetindividualEmpNo()
	    <<"����Ϊ"<< emp[i].Getgrade()<<"�������¹���"<< emp[i].GetaccumPay()<<endl;
	}
}
