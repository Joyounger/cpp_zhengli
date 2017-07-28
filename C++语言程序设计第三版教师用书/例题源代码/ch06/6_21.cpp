//6_21.cpp
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
class ArrayOfPoints
{   public:
     ArrayOfPoints(ArrayOfPoints& pointsArray);
     ArrayOfPoints(int n)
     {   numberOfPoints=n;  points=new Point[n];  }
     ~ArrayOfPoints()
     {   cout<<"Deleting..."<<endl;
         numberOfPoints=0;  delete[] points;     
       }
     Point& Element(int n)
     {  return points[n];  }
   private:
     Point *points;
     int numberOfPoints;
};
ArrayOfPoints ::ArrayOfPoints(ArrayOfPoints& pointsArray)
{   numberOfPoints=pointsArray.numberOfPoints;
    points=new Point[numberOfPoints];
    for (int i=0; i<numberOfPoints; i++)
      points[i].Move(pointsArray.Element(i).GetX(),pointsArray.Element(i).GetY());
}
int main()
{
	int number;
	cout<<"Please enter the number of points:";
	cin>>number;
     ArrayOfPoints pointsArray1(number);    //创建对象数组
     pointsArray1.Element(0).Move(5,10);     //通过指针访问数组元素的成员
     pointsArray1.Element(1).Move(15,20);   //通过指针访问数组元素的成员
     ArrayOfPoints pointsArray2(pointsArray1); //创建对象数组副本
     cout<<"Copy of pointsArray1:"<<endl;
     cout<<"Point_0 of array2: "
         <<pointsArray2.Element(0).GetX()
         <<", "<<pointsArray2.Element(0).GetY()<<endl;
     cout<<"Point_1 of array2: "
         <<pointsArray2.Element(1).GetX()
         <<", "<<pointsArray2.Element(1).GetY()<<endl;
     pointsArray1.Element(0).Move(25,30);     //通过指针访问数组元素的成员
     pointsArray1.Element(1).Move(35,40);   //通过指针访问数组元素的成员
     cout<<"After the moving of pointsArray1:"<<endl;
     cout<<"Point_0 of array2: "
         <<pointsArray2.Element(0).GetX()
         <<", "<<pointsArray2.Element(0).GetY()<<endl;
     cout<<"Point_1 of array2: "
         <<pointsArray2.Element(1).GetX()
         <<", "<<pointsArray2.Element(1).GetY()<<endl;
}
