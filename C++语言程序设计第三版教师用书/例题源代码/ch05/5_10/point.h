//�ļ�1�����������point.h
#include <iostream>
using namespace std;
class Point	//��Ķ���
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;countP++;}
	Point(Point &p);
	~Point(){  countP--; }
	int GetX() {return X;}
	int GetY() {return Y;}
	static void GetC() {cout<<" Object id="<<countP<<endl;}
		//��̬������Ա
private:	//˽�����ݳ�Ա
	int X,Y;
	static int countP;	//��̬���ݳ�Ա
};
