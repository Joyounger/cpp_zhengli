//6_8.cpp
#include <iostream>
using namespace std;
int main()
{
	int line1[]={1,0,0};	//�������飬����ĵ�һ��
	int line2[]={0,1,0};	//�������飬����ĵڶ���
	int line3[]={0,0,1};	//�������飬����ĵ�����
	
	int *p_line[3];	//��������ָ������
	p_line[0]=line1;	//��ʼ��ָ������Ԫ��
	p_line[1]=line2;
	p_line[2]=line3;
	
	cout<<"Matrix test:"<<endl;	//�����λ����
	for(int i=0;i<3;i++)	//��ָ������Ԫ��ѭ��
	{
	    for(int j=0;j<3;j++)	//�Ծ���ÿһ��ѭ��
	    {   cout<<p_line[i][j]<<" ";   }
	    cout<<endl;
	}
}
