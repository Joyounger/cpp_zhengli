//4_2.cpp
#include <iostream>
using namespace std;
class Point	//Point 类的声明
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}	//构造函数
	Point(Point &p);	//拷贝构造函数
	int GetX() {return X;}
	int GetY() {return Y;}
private:	//私有数据
	int X,Y;
};
//成员函数的实现
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	cout<<"拷贝构造函数被调用"<<endl;
}
//形参为Point类对象的函数
void fun1(Point p)
{	cout<<p.GetX()<<endl;
}
//返回值为Point类对象的函数
Point fun2()
{
	Point A(1,2);
	return A;
}
//主程序
int main()
{
	Point A(4,5);	//第一个对象A
	Point B(A);                  //情况一，用A初始化B。第一次调用拷贝构造函数
	cout<<B.GetX()<<endl;
	fun1(B);  //情况二，对象B作为fun1的实参。第二次调用拷贝构造函数
	B=fun2();  //情况三，函数的返回值是类对象，函数返回时，调用拷贝构造函数
	cout<<B.GetX()<<endl;
}
