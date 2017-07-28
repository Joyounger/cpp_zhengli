//6_17.cpp
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
     Point *Ptr=new Point[2];    //创建对象数组
     Ptr[0].Move(5,10);     //通过指针访问数组元素的成员
     Ptr[1].Move(15,20);   //通过指针访问数组元素的成员
     cout<<"Deleting..."<<endl;
     delete[ ] Ptr;               //删除整个对象数组
}
