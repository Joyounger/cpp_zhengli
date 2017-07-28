//11_11.cpp
#include<iostream>
#include<fstream>	//包含文件流头文件
#include"employee.h"
#include<vector>	//包含向量容器头文件
using namespace std;

int main()
{
	manager m1;
	technician t1;
	salesmanager sm1;
	salesman s1;
	char namestr[20];	//输入雇员姓名时首先临时存放在namestr中

	vector <employee *> vchar;	//声明用于保存成员对象的向量容器
	vchar.push_back(&m1);
	vchar.push_back(&t1);
	vchar.push_back(&sm1);
	vchar.push_back(&s1);

	int i;
	for(i=0;i<4;i++)
	{
	   cout<<"请输下一个雇员的姓名:";
	   cin>>namestr;
	   vchar[i]->SetName(namestr);	//设置姓名
	   vchar[i]->promote(i);	//升级
	}

	cout<<"请输入兼职技术人员"<<t1.GetName()<<"本月的工作时数:";
	int ww;
	cin>>ww;
	t1.SetworkHours(ww);	//设置工作时间

	cout<<"请输入销售经理"<<sm1.GetName()<<"所管辖部门本月的销售总额:";
	float sl;
	cin>>sl;
	sm1.Setsales(sl);	//设置本月的销售总额

	cout<<"请输入推销员"<<s1.GetName()<<"本月的销售额:";
	cin>>sl;
	s1.Setsales(sl);	//设置本月销售额

	ofstream ofile("employee.txt",ios_base::out);	//创建一个输出文件流对象
	for(i=0;i<4;i++)
	{  vchar[i]->pay();   	//计算月薪	
	   ofile<<vchar[i]->GetName()<<"编号"<<vchar[i]->GetindividualEmpNo()
	   <<"级别为"<<vchar[i]->Getgrade()<<"级，本月工资"<<vchar[i]->GetaccumPay()
	<<endl;
	}
	ofile.close();
	cout<<"人员信息已存入文件"<<endl;

	cout<<"从文件中读取信息并显示如下:"<<endl;
	char line[101];
	ifstream infile("employee.txt", ios_base::in);	//创建一个输入文件流对象
	for(i=0;i<4;i++)
	{
	   infile.getline(line,100);
	   cout<<line<<endl;
	}
	infile.close();
}
