//12_3.cpp
#include <iostream>
using namespace std;

int main()
{
	cout<<"��ʼ\n";
	try
	{
		cout<<"����try��\n";
		throw 999;
		cout<<"����䲻Ӧִ��";
	}
	catch(int i)
	{
		cout<<"��׽���쳣Ϊ��";
		cout<<i<<endl;
	}
	cout<<"����";
	return 0;
}
/*
���н����
��ʼ
����try��
��׽���쳣Ϊ��999
����
*/