//empfunc.cpp
#include<iostream>
#include"employee.h"
using namespace std;
int employee::employeeNo=1000;	//Ա����Ż���Ϊ1000

employee::employee()
{	individualEmpNo=employeeNo++;  	//�������Ա�����ΪĿǰ����ż�1
	grade=1;	//�����ֵΪ1
	accumPay=0.0; }	//��н�ܶ��ֵΪ0

employee::~employee() {}

void employee::promote(int increment)
{	grade+=increment;}	//�����������ļ�����incrementָ��

void employee::SetaccumPay (float pa)  	
{	accumPay=pa;}	//������н

int employee::GetindividualEmpNo()
{	return individualEmpNo;}	//��ȡ��Ա���

int employee::Getgrade()
{	return grade;}	//��ȡ����

float employee::GetaccumPay()
{	return accumPay;}	//��ȡ��н

