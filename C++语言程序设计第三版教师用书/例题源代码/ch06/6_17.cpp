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
     Point *Ptr=new Point[2];    //������������
     Ptr[0].Move(5,10);     //ͨ��ָ���������Ԫ�صĳ�Ա
     Ptr[1].Move(15,20);   //ͨ��ָ���������Ԫ�صĳ�Ա
     cout<<"Deleting..."<<endl;
     delete[ ] Ptr;               //ɾ��������������
}
