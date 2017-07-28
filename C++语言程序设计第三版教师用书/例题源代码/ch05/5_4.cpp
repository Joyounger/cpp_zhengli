//5_4.cpp
#include <iostream>
using namespace std;
class Point	//Point�ඨ��
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx; Y=yy; countP++; }	//���캯��
	Point(Point &p);	//�������캯��
	~Point(){  countP--; }
	int GetX() {return X;}
	int GetY() {return Y;}
	void GetC() {cout<<" Object id="<<countP<<endl;}	//�����̬���ݳ�Ա
private:	//˽�����ݳ�Ա
	int X,Y;
	static int countP;	//��̬���ݳ�Ա������˵�������ڼ�¼��ĸ���
};
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	countP++;            //�ڹ��캯���ж�countP�ۼӣ����ж���ͬά��ͬһ��countP
}

int Point::countP=0;                //��̬���ݳ�Ա������˵���ͳ�ʼ����ʹ�������޶�
int main()	//������
{
	Point A(4,5);	//�������A,�乹�캯����ʹcountP��1
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	A.GetC();	//����������
	Point B(A);	//�������B,�乹�캯����ʹcountP��1
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	B.GetC();	//����������
}
