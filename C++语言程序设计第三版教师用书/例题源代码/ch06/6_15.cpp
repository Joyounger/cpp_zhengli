//6_15.cpp
#include <iostream>
using namespace std;
class Point	//Point������
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;countP++;}	//���캯��
	Point(Point &p);	//�������캯��
	int GetX() {return X;}
	int GetY() {return Y;}
	static void GetC() {cout<<" Object id="<<countP<<endl;}	//��̬������Ա
private:	//˽�����ݳ�Ա
	int X,Y;
	static int countP;	//��̬���ݳ�Ա������˵��
};
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	countP++;
}

int Point::countP=0;	//��̬���ݳ�Ա������˵��
//��ʼ����ʹ�������޶�

int main()	//������ʵ��
{
	void (*gc)()=Point::GetC;	//����һ��ָ������ָ�룬ָ����ľ�̬��Ա����
	Point A(4,5);	//��������A
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	gc();	//���������ţ�ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
	Point B(A);	//��������B
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	gc();	//���������ţ�ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
}
