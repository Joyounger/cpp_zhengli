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

	cout<<"请输下一个雇员的月薪:";
	float pa;
	cin>> pa;  
	m1.IncreaseEmpNo(0);	 //m1编号为当前编号
	m1.promote(3);	//m1提升3级
	m1.SetaccumPay (pa);	//设置m1月薪

	cout<<"请输下一个雇员的月薪:";
	cin>>pa;  	
	t1.IncreaseEmpNo(1);	//t1编号为当前编号加1
	t1.promote(2);	//t1提升2级
	t1.SetaccumPay (pa);	//设置t1月薪

	cout<<"请输下一个雇员的月薪:";
	cin>> pa;  	
	sm1.IncreaseEmpNo(2);	//sm1编号为当前编号加2
	sm1.promote(2);	//sm1提升2级
	sm1.SetaccumPay (pa);	//设置sm1级别

	cout<<"请输下一个雇员的月薪:";
	cin >>pa;  	
	s1.IncreaseEmpNo(3);	//s1编号为当前编号加3
	s1.SetaccumPay (pa);	//设置s1月薪

	//显示m1信息
	cout<<"编号"<<m1.GetindividualEmpNo()
	    <<"级别为"<<m1.Getgrade()<<"级，本月工资"<<m1.GetaccumPay()<<endl;

	//显示t1信息
	cout<<"编号"<<t1.GetindividualEmpNo()
	        <<"级别为"<<t1.Getgrade()<<"级，本月工资"<<t1.GetaccumPay()<<endl;

	//显示sm1信息
	cout<<"编号"<<sm1.GetindividualEmpNo()
	    <<"级别为"<<sm1.Getgrade()<<"级，本月工资"<<sm1.GetaccumPay()<<endl;

	//显示s1信息
	cout<<"编号"<<s1.GetindividualEmpNo()
	    <<"级别为"<<s1.Getgrade()<<"级，本月工资"<<s1.GetaccumPay()<<endl;
}
