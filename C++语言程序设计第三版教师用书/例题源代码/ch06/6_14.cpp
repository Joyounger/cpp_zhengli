//6_14.cpp
#include <iostream>
using namespace std;
class Point	//Point������
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;countP++;}	//���캯��
	Point(Point &p);	//�������캯��
	int GetX() {return X;}
	int GetY() {return Y;}

	static int countP;	//��̬���ݳ�Ա������˵��
private:	//˽�����ݳ�Ա
	int X,Y;
};
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	countP++;
}

int Point::countP=0;	//��̬���ݳ�Ա������˵��

int main()	//������ʵ��
{
	int *count=&Point::countP;              //����һ��int��ָ�룬ָ����ľ�̬��Ա
	Point A(4,5);	//��������A
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	cout<<" Object id="<<*count<<endl;	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
	Point B(A);	//��������B
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	cout<<" Object id="<<*count<<endl; 	//ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
}
