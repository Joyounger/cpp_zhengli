//文件1，类的声明，point.h
#include <iostream>
using namespace std;
class Point	//类的定义
{
public:	//外部接口
	Point(int xx=0, int yy=0) {X=xx;Y=yy;countP++;}
	Point(Point &p);
	~Point(){  countP--; }
	int GetX() {return X;}
	int GetY() {return Y;}
	static void GetC() {cout<<" Object id="<<countP<<endl;}
		//静态函数成员
private:	//私有数据成员
	int X,Y;
	static int countP;	//静态数据成员
};
