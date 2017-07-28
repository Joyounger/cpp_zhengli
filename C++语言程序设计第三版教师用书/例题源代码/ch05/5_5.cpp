//5_5.cpp
#include <iostream>
using namespace std;
class Point	//Point类定义
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx;Y=yy;countP++;}	//构造函数
	Point(Point &p);	//拷贝构造函数
	~Point(){  countP--; }
	int GetX() {return X;}
	int GetY() {return Y;}
	static void GetC() {cout<<" Object id="<<countP<<endl;}	
	//静态函数成员
private:	//私有数据成员
	int X,Y;
	static int countP;	//静态数据成员引用性说明
};
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	countP++;
}

int Point::countP=0;	//静态数据成员定义性说明
//初始化，使用类名限定
int main()	//主函数实现
{
	Point A(4,5);	//定义对象A
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	A.GetC();	//输出对象号，对象名引用
	Point B(A);	//定义对象B
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	Point::GetC();	//输出对象号，类名引用
}
