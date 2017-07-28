//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point类声明
{
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
private:
	int X,Y;
};
Point::Point(Point &p)	//拷贝构造函数的实现
{
	X=p.X;
	Y=p.Y;
	cout<<"Point拷贝构造函数被调用"<<endl;
}
//类的组合
class Line	//Line类的声明
{
public:	//外部接口
	Line (Point xp1, Point xp2);
	Line (Line &);
	double GetLen(){return len;}
private:	//私有数据成员
	Point p1,p2;	//Point类的对象p1,p2
	double len;	
};
//组合类的构造函数
Line:: Line (Point xp1, Point xp2)
:p1(xp1),p2(xp2)
{
	cout<<"Line构造函数被调用"<<endl;
	double x=double(p1.GetX()-p2.GetX());
	double y=double(p1.GetY()-p2.GetY());
	len=sqrt(x*x+y*y);
}

//组合类的拷贝构造函数
Line:: Line (Line &Seg): p1(Seg.p1), p2(Seg.p2)
{
	cout<<"Line拷贝构造函数被调用"<<endl;
	len=Seg.len;
}

//主函数
int main()
{
	Point myp1(1,1),myp2(4,5);	//建立Point类的对象
	Line line(myp1,myp2);	//建立Line类的对象
	Line line2(line);	//利用拷贝构造函数建立一个新对象
	cout<<"The length of the line is:";
	cout<<line.GetLen()<<endl;
	cout<<"The length of the line2 is:";
	cout<<line2.GetLen()<<endl;
}
