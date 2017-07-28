//point.h
class Point	//Point类的声明
{
public:	//外部接口
	Point(float xx=0, float yy=0) {X=xx;Y=yy;}
	float GetX() {return X;}
	float GetY() {return Y;}
	friend float linefit(Point l_point[], int n_point);	//友元函数
	//int型变量为点数
private:	//私有数据成员
	float X,Y;
};
//End of point.h
