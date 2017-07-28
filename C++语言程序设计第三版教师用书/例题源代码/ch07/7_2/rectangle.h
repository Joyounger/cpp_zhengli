//rectangle.h
class Point	//基类声明
{
public:
	void InitP(float xx=0, float yy=0) {X=xx;Y=yy;}
	void Move(float xOff, float yOff) {X+=xOff;Y+=yOff;}
	float GetX() {return X;}
	float GetY() {return Y;}
private:
	float X,Y;
};
class Rectangle: private Point	//派生类声明
{
public:	//新增外部接口
	void InitR(float x, float y, float w, float h)
	{InitP(x,y);W=w;H=h;}	//派生类访问基类公有成员
	void Move(float xOff, float yOff) {Point::Move(xOff,yOff);}
	float GetX() {return Point::GetX();}
	float GetY() {return Point::GetY();}
	float GetH() {return H;}
	float GetW() {return W;}
private:	//新增私有数据
	float W,H;
};
//End of rectangle.h
