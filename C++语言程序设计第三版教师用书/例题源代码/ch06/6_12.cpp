//6_12.cpp
#include <iostream>
using namespace std;
class Point	//类的声明
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}	//构造函数
	int GetX() {return X;}	//内联函数，返回X
	int GetY() {return Y;}	//内联函数，返回Y
private:	//私有数据
	int X,Y;
};

int main()	//主函数
{
	Point A(4,5);	//声明并初始化对象A
	Point *p1;	//声明对象指针
	
	p1=&A;	//初始化指针
	cout<<p1->GetX()<<endl;	//利用指针访问对象成员
	cout<<A.GetX()<<endl; 	//利用对象名访问对象成员
}
