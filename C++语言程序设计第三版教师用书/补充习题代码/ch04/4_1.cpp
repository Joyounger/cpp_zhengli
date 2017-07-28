//4_1.cpp
#include <cmath>
#include <iostream>
using namespace std;

class Point
{ public:
    Point(float x=0, float y=0, float z=0): xx(x), yy(y), zz(z) 
	{}
    Point(const Point& p) : xx(p.xx), yy(p.yy), zz(p.zz)  
	{ }
    void negate() 
	{ xx *= -1; yy *= -1; zz *= -1; }
    double norm() 
	{ return sqrt(xx*xx + yy*yy + zz*zz); }
    void print()
    { cout << '(' << xx << "," << yy << "," << zz << ")";    }
  private:
    float xx, yy, zz;
};

int main()
{ Point p(10,-5,4);
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
  p.negate();
  cout << "p = ";
  p.print();
  cout << ", p.norm() = " << p.norm() << endl;
  return 0;
}
/*
程序运行结果为：
p = (10,-5,4), p.norm() = 11.8743
p = (-10,5,-4), p.norm() = 11.8743
*/