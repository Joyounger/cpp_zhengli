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
	cout<<"**"<<n<<"ת��Ϊ"<<base<<"���ƵĽ��Ϊ��";
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
	cout<<"����һ��������";
	cin>>n;
	do
	{
		cout<<"������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���";
		cin>>choice;
		switch(choice)
		{
		case 2: Transform(n,2);break;
		case 8: Transform(n,8);break;
		case 16: Transform(n,16);break;
		case 32: Transform(n,32);break;
		case 0: break;
		default: cout<<"�������"<<endl;
		}
	}while(choice!=0);
	return 0;
}
/*
�������н��Ϊ��
����һ��������56
������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���2
**56ת��Ϊ2���ƵĽ��Ϊ��111000
������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���8
**56ת��Ϊ8���ƵĽ��Ϊ��70
������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���16
**56ת��Ϊ16���ƵĽ��Ϊ��38
������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���32
**56ת��Ϊ32���ƵĽ��Ϊ��1O
������Ҫת���Ľ��ƣ�2��8��16��32������0�˳���0
*/