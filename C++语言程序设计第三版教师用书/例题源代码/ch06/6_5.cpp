//6_5.cpp
#include<iostream>
using namespace std;
int main()
{
	int *i_pointer;	//����int��ָ��i_pointer
	int i;	//����int����i
	i_pointer=&i;	//ȡi�ĵ�ַ����i_pointer
	i=10;	//int��������ֵ
	cout<<"Output int i="<<i<<endl;	//���int������ֵ
	cout<<"Output int pointer i="<<*i_pointer<<endl;	//���int��ָ����ָ��ַ������
}
