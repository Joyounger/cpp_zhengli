//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point������
{
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
private:
	int X,Y;
};
Point::Point(Point &p)	//�������캯����ʵ��
{
	X=p.X;
	Y=p.Y;
	cout<<"Point�������캯��������"<<endl;
}
//������
class Line	//Line�������
{
public:	//�ⲿ�ӿ�
	Line (Point xp1, Point xp2);
	Line (Line &);
	double GetLen(){return len;}
private:	//˽�����ݳ�Ա
	Point p1,p2;	//Point��Ķ���p1,p2
	double len;	
};
//�����Ĺ��캯��
Line:: Line (Point xp1, Point xp2)
:p1(xp1),p2(xp2)
{
	cout<<"Line���캯��������"<<endl;
	double x=double(p1.GetX()-p2.GetX());
	double y=double(p1.GetY()-p2.GetY());
	len=sqrt(x*x+y*y);
}

//�����Ŀ������캯��
Line:: Line (Line &Seg): p1(Seg.p1), p2(Seg.p2)
{
	cout<<"Line�������캯��������"<<endl;
	len=Seg.len;
}

//������
int main()
{
	Point myp1(1,1),myp2(4,5);	//����Point��Ķ���
	Line line(myp1,myp2);	//����Line��Ķ���
	Line line2(line);	//���ÿ������캯������һ���¶���
	cout<<"The length of the line is:";
	cout<<line.GetLen()<<endl;
	cout<<"The length of the line2 is:";
	cout<<line2.GetLen()<<endl;
}
