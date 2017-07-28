//5_6.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point�ඨ��
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	int GetX() {return X;}
	int GetY() {return Y;}
	friend float fDist(Point &a, Point &b);	//��Ԫ��������
private:	//˽�����ݳ�Ա
	int X,Y;
};
float fDist(Point &p1, Point &p2)	//��Ԫ����ʵ��
{	double x=double(p1.X-p2.X);	//ͨ���������˽�����ݳ�Ա
	double y=double(p1.Y-p2.Y);
	return float(sqrt(x*x+y*y));
}
int main()	//������
{
	Point myp1(1,1),myp2(4,5);	//����Point��Ķ���
	cout<<"The distance is:";
	cout<<fDist(myp1,myp2)<<endl;	//���������ľ���
}
