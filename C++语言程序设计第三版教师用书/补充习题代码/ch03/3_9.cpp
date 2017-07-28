//3_9.cpp
#include <iostream>
using namespace std;

void Transform(int n,int base)
{
	int num[20],i=0,j,m=n;
	do
	{
		i++;
		num[i]=m%base;
		m=m/base;
	}while (m!=0);
	cout<<"**"<<n<<"转换为"<<base<<"进制的结果为：";
	for (j=i;j>=1;j--)
		if (num[j]<10)
			cout<<num[j];
		else
			cout<<char(num[j]+'A'-10);
		cout<<endl;
}

int main()
{
	int n,choice;
	cout<<"输入一个整数：";
	cin>>n;
	do
	{
		cout<<"输入需要转换的进制：2，8，16，32（输入0退出）";
		cin>>choice;
		switch(choice)
		{
		case 2: Transform(n,2);break;
		case 8: Transform(n,8);break;
		case 16: Transform(n,16);break;
		case 32: Transform(n,32);break;
		case 0: break;
		default: cout<<"输入错误"<<endl;
		}
	}while(choice!=0);
	return 0;
}
/*
程序运行结果为：
输入一个整数：56
输入需要转换的进制：2，8，16，32（输入0退出）2
**56转换为2进制的结果为：111000
输入需要转换的进制：2，8，16，32（输入0退出）8
**56转换为8进制的结果为：70
输入需要转换的进制：2，8，16，32（输入0退出）16
**56转换为16进制的结果为：38
输入需要转换的进制：2，8，16，32（输入0退出）32
**56转换为32进制的结果为：1O
输入需要转换的进制：2，8，16，32（输入0退出）0
*/