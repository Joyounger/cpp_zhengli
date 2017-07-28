//文件2，类的实现，point.cpp
#include "point.h"
int Point::countP=0;	//使用类名初始化静态数据成员
Point::Point(Point &p)	//拷贝构造函数体
{
	X=p.X;
	Y=p.Y;
	countP++;
}
