//5_1.cpp
#include <iostream>
using namespace std;
int i;	//ȫ�ֱ������ļ�������
int main()
{
	i=5;	//�ļ��������i����ֵ
	{	//�ӿ�1
	     int i;	//�ֲ���������������
	     i=7;
	     cout<<"i="<<i<<endl;	//���7
	}
	cout<<"i="<<i<<endl;	//���5
}
