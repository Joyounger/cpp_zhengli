//11_11.cpp
#include<iostream>
#include<fstream>	//�����ļ���ͷ�ļ�
#include"employee.h"
#include<vector>	//������������ͷ�ļ�
using namespace std;

int main()
{
	manager m1;
	technician t1;
	salesmanager sm1;
	salesman s1;
	char namestr[20];	//�����Ա����ʱ������ʱ�����namestr��

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
	   vchar[i]->SetName(namestr);	//��������
	   vchar[i]->promote(i);	//����
	}

	cout<<"�������ְ������Ա"<<t1.GetName()<<"���µĹ���ʱ��:";
	int ww;
	cin>>ww;
	t1.SetworkHours(ww);	//���ù���ʱ��

	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ű��µ������ܶ�:";
	float sl;
	cin>>sl;
	sm1.Setsales(sl);	//���ñ��µ������ܶ�

	cout<<"����������Ա"<<s1.GetName()<<"���µ����۶�:";
	cin>>sl;
	s1.Setsales(sl);	//���ñ������۶�

	ofstream ofile("employee.txt",ios_base::out);	//����һ������ļ�������
	for(i=0;i<4;i++)
	{  vchar[i]->pay();   	//������н	
	   ofile<<vchar[i]->GetName()<<"���"<<vchar[i]->GetindividualEmpNo()
	   <<"����Ϊ"<<vchar[i]->Getgrade()<<"�������¹���"<<vchar[i]->GetaccumPay()
	<<endl;
	}
	ofile.close();
	cout<<"��Ա��Ϣ�Ѵ����ļ�"<<endl;

	cout<<"���ļ��ж�ȡ��Ϣ����ʾ����:"<<endl;
	char line[101];
	ifstream infile("employee.txt", ios_base::in);	//����һ�������ļ�������
	for(i=0;i<4;i++)
	{
	   infile.getline(line,100);
	   cout<<line<<endl;
	}
	infile.close();
}
