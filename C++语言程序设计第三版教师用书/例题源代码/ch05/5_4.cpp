//5_4.cpp
#include <iostream>
using namespace std;
class Point	//Point类定义
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx; Y=yy; countP++; }	//构造函数
	Point(Point &p);	//拷贝构造函数
	~Point(){  countP--; }
	int GetX() {return X;}
	int GetY() {return Y;}
	void GetC() {cout<<" Object id="<<countP<<endl;}	//输出静态数据成员
private:	//私有数据成员
	int X,Y;
	static int countP;	//静态数据成员引用性说明，用于记录点的个数
};
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	countP++;            //在构造函数中对countP累加，所有对象共同维护同一个countP
}

int Point::countP=0;                //静态数据成员定义性说明和初始化，使用类名限定
int main()	//主函数
{
	Point A(4,5);	//定义对象A,其构造函数回使countP增1
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	A.GetC();	//输出对象个数
	Point B(A);	//定义对象B,其构造函数回使countP增1
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	B.GetC();	//输出对象个数
}
