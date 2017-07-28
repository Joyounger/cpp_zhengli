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
	char namestr[20];           //输入雇员姓名时首先临时存放在namestr中

	cout<<"请输下一个雇员的姓名:";
	cin>>namestr;
	m1.SetName(namestr);	//设置雇员m1姓名

	cout<<"请输下一个雇员的姓名:";
	cin>>namestr;
	t1.SetName(namestr);	//设置雇员t1姓名

	cout<<"请输下一个雇员的姓名:";
	cin>>namestr;
	sm1.SetName(namestr);	//设置雇员sm1姓名

	cout<<"请输下一个雇员的姓名:";
	cin>>namestr;
	s1.SetName(namestr);	//设置雇员s1姓名

	m1.promote(3);	//经理m1提升3级
	m1.pay();	//计算m1月薪

	cout<<"请输入兼职技术人员"<<t1.GetName()<<"本月的工作时数:";
	int ww;
	cin>>ww;  	//输入t1本月的工作时数
	t1.SetworkHours(ww);	//设置t1本月的工作时数
	t1.promote(2);	//t1提升2级
	t1.pay();	//计算t1月薪

	cout<<"请输入销售经理"<<sm1.GetName()<<"所管辖部门本月的销售总额:";
	float sl;
	cin>>sl; 	//输入s1所管辖部门本月的销售总额
	sm1.Setsales(sl);	//设置s1所管辖部门本月的销售总额
	sm1.pay();	//计算s1月薪
	sm1.promote(2);	//s1提升2级

	cout<<"请输入推销员"<<s1.GetName()<<"本月的销售额:";
	cin>>sl; 	//输入s1本月的销售额
	s1.Setsales(sl);	//设置s1本月的销售额
	s1.pay();	//计算s1月薪

	//显示m1信息
	cout<<m1.GetName()<<"编号"<<m1.GetindividualEmpNo()
	    <<"级别为"<<m1.Getgrade()<<"级，本月工资"<<m1.GetaccumPay()<<endl;

	//显示t1信息
	cout<<t1.GetName()<<"编号"<<t1.GetindividualEmpNo()
	        <<"级别为"<<t1.Getgrade()<<"级，本月工资"<<t1.GetaccumPay()<<endl;

	//显示sm1信息
	cout<<sm1.GetName()<<"编号"<<sm1.GetindividualEmpNo()
	    <<"级别为"<<sm1.Getgrade()<<"级，本月工资"<<sm1.GetaccumPay()<<endl;

	//显示s1信息
	cout<<s1.GetName()<<"编号"<<s1.GetindividualEmpNo()
	    <<"级别为"<<s1.Getgrade()<<"级，本月工资"<<s1.GetaccumPay()<<endl;
}
