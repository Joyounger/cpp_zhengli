//3_14.cpp
#include<iostream>
using namespace std;
inline double CalArea(double radius)  //��������������Բ�����
{
	return 3.14*radius*radius;
}

int main()
{
	double r(3.0);  //r��Բ�İ뾶
	double area;
	area=CalArea(r);  
	//��������������Բ�����������ʱ�˴����滻ΪCalArea���������
	cout<<area<<endl;
}
