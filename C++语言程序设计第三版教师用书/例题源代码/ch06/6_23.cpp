//6_23.cpp
#include<iostream>
using namespace std;
int main()
{
	//��ά�ַ�����������ͳ�ʼ����δ����ʼ����Ԫ�س�ʼֵΪ0��
	static char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'}, {'*',' ',' ',' ','*'},
{' ','*',' ','*'}, {' ',' ','*'}};
	int i,j;
	for (i=0;i<5;i++)      //��������ά�ַ������Ԫ��
	{  
			for(j=0;j<5 && diamond[i][j]!=0;j++)
				cout<<diamond[i][j];  
			cout<<endl;
	}
}
