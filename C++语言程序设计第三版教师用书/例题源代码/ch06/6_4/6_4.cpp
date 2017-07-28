//6_4.cpp
#include<iostream>
#include<cmath>
#include "point.h"
using namespace std;
float linefit(Point l_point[], int n_point)	//��Ԫ������
{
	float av_x,av_y;	//��������
	float L_xx,L_yy,L_xy;
	//������ʼ��
	av_x=0;	//X��ƽ��ֵ
	av_y=0;	//Y��ƽ��ֵ
	L_xx=0;	//Lxx
	L_yy=0;	//Lyy
	L_xy=0;	//Lxy
	for(int i=0;i<n_point;i++)	//����X��Y��ƽ��ֵ
	{
	    av_x+=l_point[i].X/n_point;
	    av_y+=l_point[i].Y/n_point;
	}
	for(i=0;i<n_point;i++)	//����Lxx��Lyy��Lxy
	{
	    L_xx+=(l_point[i].X-av_x)*(l_point[i].X-av_x);
	    L_yy+=(l_point[i].Y-av_y)*(l_point[i].Y-av_y);
	    L_xy+=(l_point[i].X-av_x)*(l_point[i].Y-av_y);
	}
	cout<<"This line can be fitted by y=ax+b."<<endl;
	cout<<"a="<<L_xy/L_xx;	//����ع�ϵ��a
	cout<<" b="<<av_y-L_xy*av_x/L_xx<<endl;	//����ع�ϵ��b
	return float(L_xy/sqrt(L_xx*L_yy));	//�������ϵ��r
}

int main()
{
	Point l_p[10]={Point(6,10),Point(14,20),Point(26,30),
	Point(33,40),Point(46,50),Point(54,60),Point(67,70),
	Point(75,80),Point(84,90),Point(100,100)};	//��ʼ�����ݵ�
	float r=linefit(l_p,10);	//�������Իع����
	cout<<"Line coefficient r="<<r<<endl;	//������ϵ��
}
