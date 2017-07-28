//Trapzint.cpp	//�ļ�������ʵ��
#include "Trapzint.h"	//�����������ͷ�ļ�
double Trapz::operator ()(double a,double b,double eps) const
{			//����������̣�����Ϊ�����()
	int done(0);	//��Trapz����麯����Ա
	int n;
	double h,Tn,T2n;
	n=1;
	h=b-a;
	Tn=h*(f(a)+f(b))/2.0;	//����n=1ʱ�Ļ���ֵ
	while(!done)
	{
		double temp(0.0);
		for(int k=0;k<n;k++)
		{
		      double x=a+(k+0.5)*h;
		      temp+=f(x);
		}
		T2n=(Tn+h*temp)/2.0;	//�䲽�����η�����
		if(fabs(T2n-Tn)<eps) done=1;	//�жϻ������
		else	//������һ������
		{
		      Tn=T2n;
		       n*=2;
		       h/=2;
		}
	}
	return T2n;
}
//End of file Trapzint.cpp
