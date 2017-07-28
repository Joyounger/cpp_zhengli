//4_3.cpp
#include <iostream>
using namespace std;
const double PI=3.14159265359;

class Circle
{ public:
    Circle( ) : xx(0.0) , yy(0.0), rad(1.0) 	{}
    Circle( float x, float y, float radius ) : xx( x ) , yy( y ),  rad( radius) 
	{}
    Circle( const Circle & C )
      { xx = C.xx ;  yy = C.yy ; rad = C.rad; }
    float diameter() const 
	{ return 2.0 * rad ; }
    float area() const 
	{ return PI * rad * rad; }
    float circum() const 
	{ return PI*diameter(); }
    void  print() const 
     { cout << "Center is at (" << xx << ", " << yy
            << ") and " << "Radius = " << rad ; }
  private:
    float xx;
    float yy;
    float rad;
};

int main()
{ Circle c(2,3,5);
  c.print();
  cout<<"\nDiameter is:"<<c.diameter()<<"; Area is:"<<c.area()<<"; Circum is:"<<c.circum()<<endl;
  return 0;
}
/*
程序运行结果为：
Center is at (2, 3) and Radius = 5
Diameter is:10; Area is:78.5398; Circum is:31.4159
*/