// Point.cpp
#include<iostream>
#include "Point.h"
using namespace std;
Point::Point()
{   X=Y=0;
     cout<<"Default Constructor called."<<endl;
}
Point::Point(int xx,int yy)
{   X=xx;
     Y=yy;
     cout<< "Constructor called."<<endl;
}
Point::~Point()
{
       cout<<"Destructor called."<<endl;
}
void Point::Move(int x,int y)
{
        X=x;
        Y=y;
}
