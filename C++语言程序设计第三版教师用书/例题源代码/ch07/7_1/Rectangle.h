//Rectangle.h
class Point	//基类Point类的声明
{
public:	//公有函数成员
	void InitP(float xx=0, float yy=0) {X=xx;Y=yy;}
	void Move(float xOff, float yOff) {X+=xOff;Y+=yOff;}
	float GetX() {return X;}
	float GetY() {return Y;}
private:	//私有数据成员
	float X,Y;
};
class Rectangle: public Point	//派生类声明部分
{
public:	//新增公有函数成员
	void InitR(float x, float y, float w, float h)
	{InitP(x,y);W=w;H=h;}	//调用基类公有成员函数
	float GetH() {return H;}
	float GetW() {return W;}
private:	//新增私有数据成员
	float W,H;
};
//End of Rectangle.h
