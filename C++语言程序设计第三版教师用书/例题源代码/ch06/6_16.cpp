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
     Point *Ptr1=new Point;   //��̬��������û�и�����ֵ����˵���ȱʡ���캯��
     delete  Ptr1;   //ɾ�������Զ�������������
     cout<<"Step Two:"<<endl;
     Ptr1=new Point(1,2);   //��̬�������󣬲�������ֵ����˵������βεĹ��캯��
     delete Ptr1;   //ɾ�������Զ�������������
}
