//employee.cpp
#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;
int employee::employeeNo=1000;	//员工编号基数为1000

employee::employee()
{	individualEmpNo=employeeNo++;  	//新输入的员工编号为目前最大编号加1
	grade=1;	//级别初值为1
	accumPay=0.0;}	//月薪总额初值为0

employee::~employee()
{}

void employee::promote(int increment)
{	grade+=increment; }	//升级，提升的级数由increment指定

void employee::SetName(char* names)
{	strcpy(name,names); }	//设置姓名

char* employee::GetName()
{	return name;}	//提取成员姓名

int employee::GetindividualEmpNo()
{	return individualEmpNo;}	//提取成员编号

int employee::Getgrade()
{	return grade;}	//提取成员级别

float employee::GetaccumPay()
{	return accumPay;}	//提取月薪

technician::technician()
{	hourlyRate=100;}	//每小时酬金100元

void technician::SetworkHours(int wh)
{	workHours=wh;}	//设置工作时间

void technician::pay()
{	accumPay=hourlyRate*workHours;}	//计算月薪，按小时计酬

void technician::promote(int)
{	employee::promote(2);   }	//调用基类升级函数，升2级

salesman::salesman()
{	CommRate=0.04;}	//销售提成比例4%

void salesman::Setsales(float sl)
{	sales=sl;}	//设置销售额

void salesman::pay()
{	accumPay=sales*CommRate;}	//月薪=销售提成

void salesman::promote(int)
{	employee::promote(0); } 	//调用基类升级函数，升0级

manager::manager()
{	monthlyPay=8000;}	//固定月薪8000元

void manager::pay()
{	accumPay=monthlyPay;}	//月薪总额即固定月薪数

void manager::promote(int )
{	employee::promote(3);}	//调用基类升级函数，升3级

salesmanager::salesmanager()
{	monthlyPay=5000;
	CommRate=0.005;}

void salesmanager::pay()
{	accumPay=monthlyPay+CommRate*sales;  }	//月薪=固定月薪+销售提成

void salesmanager::promote(int)
{	employee::promote(2);}	//调用基类升级函数，升2级

