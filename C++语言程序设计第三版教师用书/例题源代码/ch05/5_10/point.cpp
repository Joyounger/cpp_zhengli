//�ļ�2�����ʵ�֣�point.cpp
#include "point.h"
int Point::countP=0;	//ʹ��������ʼ����̬���ݳ�Ա
Point::Point(Point &p)	//�������캯����
{
	X=p.X;
	Y=p.Y;
	countP++;
}
