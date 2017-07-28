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
	char namestr[20];           //输入雇员姓名时首先临时存放在namestr中

	employee *emp[4]={&m1,&t1,&sm1,&s1};
	int i;
	for(i=0;i<4;i++)
	{
	cout<<"请输下一个雇员的姓名:";
	cin>>namestr;
	emp[i]->SetName(namestr);	//设置每个成员的姓名
	emp[i]->promote();	//升级，通过基类指针访问各派生类函数
	}
	cout<<"请输入兼职技术人员"<<t1.GetName()<<"本月的工作时数:";
	int ww;
	cin>>ww;
	t1.SetworkHours(ww);	//设置工作时间

	cout<<"请输入销售经理"<<sm1.GetName()<<"所管辖部门本月的销售总额:";
	float sl;
	cin>>sl;
	sm1.Setsales(sl);	//设置销售额

	cout<<"请输入推销员"<<s1.GetName()<<"本月的销售额:";
	cin>>sl;
	s1.Setsales(sl);	//设置销售额

	for(i=0;i<4;i++)
	{
	emp[i]->pay();	//计算月薪，通过基类指针访问各派生类函数
	cout<<emp[i]->GetName()<<"编号"<<emp[i]->GetindividualEmpNo()
	    <<"级别为"<<emp[i]->Getgrade()<<"级，本月工资"<<emp[i]->GetaccumPay()<<endl;
	}
}

