//9_16.cpp
#include<iostream>
#include<string>
#include"employee.h"
#include "9_3.h"  //包含数组类模板头文件
using namespace std;

int main()
{
	manager m1;
	technician t1;
	salesman s1;
	salesmanager sm1;
	char namestr[20];	//输入雇员姓名时首先临时存放在namestr中

	//修改部分
	Array<employee*>  emp(4);
	emp[0]=&m1;
	emp[1]=&t1;
	emp[2]=&sm1;
	emp[3]=&s1;

	//以下部分与8_8.cpp完全相同
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

