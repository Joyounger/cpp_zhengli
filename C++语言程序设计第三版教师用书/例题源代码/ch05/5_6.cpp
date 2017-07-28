//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point类定义
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	int GetX() {return X;}
	int GetY() {return Y;}
	friend float fDist(Point &a, Point &b);	//友元函数声明
private:	//私有数据成员
	int X,Y;
};
float fDist(Point &p1, Point &p2)	//友元函数实现
{	double x=double(p1.X-p2.X);	//通过对象访问私有数据成员
	double y=double(p1.Y-p2.Y);
	return float(sqrt(x*x+y*y));
}
int main()	//主函数
{
	Point myp1(1,1),myp2(4,5);	//定义Point类的对象
	cout<<"The distance is:";
	cout<<fDist(myp1,myp2)<<endl;	//计算两点间的距离
}
