//6_16.cpp
#include<iostream>
using namespace std;
class Point
{ public:
       Point() 
      {   X=Y=0;     cout<<"Default Constructor called."<<endl;     }
       Point(int xx,int yy)
      {   X=xx;     Y=yy;     cout<< "Constructor called."<<endl;     }
       ~Point()
      {   cout<<"Destructor called."<<endl;    }
       int GetX() {return X;}
       int GetY() {return Y;}
	 void Move(int x,int y)
		{  X=x;  Y=y;   }
  private:
       int  X,Y;
};

int main()
{
     cout<<"Step One:"<<endl;
     Point *Ptr1=new Point;   //动态创建对象，没有给出初值，因此调用缺省构造函数
     delete  Ptr1;   //删除对象，自动调用析构函数
     cout<<"Step Two:"<<endl;
     Ptr1=new Point(1,2);   //动态创建对象，并给出初值，因此调用有形参的构造函数
     delete Ptr1;   //删除对象，自动调用析购函数
}
