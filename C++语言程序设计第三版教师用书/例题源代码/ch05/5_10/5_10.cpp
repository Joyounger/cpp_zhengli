//�ļ�3����������5_10.cpp
#include "point.h"
int main()
{
	Point A(4,5);
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	A.GetC();	//ʹ�ö��������þ�̬������Ա
	Point B(A);
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	Point::GetC();	//ʹ���������þ�̬������Ա
}
