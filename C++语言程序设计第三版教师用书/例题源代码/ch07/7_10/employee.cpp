//employee.cpp
#include<iostream>
#include<cstring>
#include"employee.h"
using namespace std;
int employee::employeeNo=1000;	//Ա����Ż���Ϊ1000

employee::employee()
{	individualEmpNo=employeeNo++;  	//�������Ա�����ΪĿǰ����ż�1
	grade=1;	//�����ֵΪ1
	accumPay=0.0; }	//��н�ܶ��ֵΪ0

employee::~employee()
{}

void employee::pay()	//������н���պ���
{}

void employee::promote(int increment)
{	grade+=increment;}	//�����������ļ�����incrementָ��

void employee::SetName(char* names)
{	strcpy(name,names);  }	//��������

char* employee::GetName()
{	return name;}	//��ȡ����

int employee::GetindividualEmpNo()
{	return individualEmpNo;}	//��ȡ��Ա���

int employee::Getgrade()
{	return grade;}	//��ȡ����

float employee::GetaccumPay()
{	return accumPay;}	//��ȡ��н

technician::technician()
{	hourlyRate=100;}	//ÿСʱ���100Ԫ

void technician::SetworkHours(int wh)
{	workHours=wh;}	//���ù���ʱ��

void technician::pay()
{	accumPay=hourlyRate*workHours;}	//������н����Сʱ�Ƴ�

salesman::salesman()
{	CommRate=0.04;}	//������ɱ���4%

void salesman::Setsales(float sl)
{	sales=sl;}	//�������۶�

void salesman::pay()
{	accumPay=sales*CommRate;}	//��н=�������

manager::manager()
{	monthlyPay=8000;}	//�̶���н8000Ԫ

void manager::pay()
{	accumPay=monthlyPay;}	//��н�ܶ�̶���н��

salesmanager::salesmanager()
{	monthlyPay=5000;
	CommRate=0.005;}

void salesmanager::pay()
{	accumPay=monthlyPay+CommRate*sales;  }	//��н=�̶���н+�������

