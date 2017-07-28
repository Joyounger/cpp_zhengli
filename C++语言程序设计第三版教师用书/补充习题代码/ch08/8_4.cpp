#include <iostream>  
#include<math.h>
class Point
{ public:
    Point(float x=0, float y=0, float z=0): xx(x), yy(y), zz(z) 	{}
    Point(const Point& p) : xx(p.xx), yy(p.yy), zz(p.zz)  	{ }
    void negate() 	{ xx *= -1; yy *= -1; zz *= -1; }
    double norm() 	{ return sqrt(xx*xx + yy*yy + zz*zz); }
    void print()    {  std::cout << '(' << xx << "," << yy << "," << zz << ")";    }
	Point& operator=(const Point& point);
    friend  std::ostream& operator<<( std::ostream& ostr, const Point& point);
    bool operator==(const Point& point) const;
    bool operator!=(const Point& point) const;
    friend Point operator+(const Point& p1, const Point& p2);
    friend Point operator-(const Point& p1, const Point& p2);

  private:
    float xx, yy, zz;
};

Point& Point::operator=(const Point& point)
{ xx = point.xx;  yy = point.yy;  zz = point.zz;  return *this;}

 std::ostream& operator<<( std::ostream& ostr, const Point& point)
{ return  ostr << "(" << point.xx << "," <<point.yy << "," << point.zz << ")";}

bool Point::operator==(const Point& point) const
{ return xx == point.xx && yy == point.yy && zz == point.zz;}

bool Point::operator!=(const Point& point) const
{ return xx != point.xx || yy != point.yy || zz != point.zz;}

Point operator+(const Point& p1, const Point& p2)
{ return Point(p1.xx+p2.xx,p1.yy+p2.yy,p1.zz+p2.zz);}

Point operator-(const Point& p1, const Point& p2)
{ return Point(p1.xx-p2.xx,p1.yy-p2.yy,p1.zz-p2.zz);}

int main()
{
    Point p1(10,20,30), p3;
	Point p2(p1);
    p2.negate();
	p3=p2;
	std::cout << p1-p2<<p3;
    return 0;
}

/*
(20,40,60)(-10,-20,-30)
*/