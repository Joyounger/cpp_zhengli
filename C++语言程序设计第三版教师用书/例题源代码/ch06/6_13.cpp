//6_13.cpp
#include <iostream>
using namespace std;
class Point	//�������
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}	//���캯��
	int GetX() {return X;}	//��������������X
	int GetY() {return Y;}	//��������������Y
private:	//˽������
	int X,Y;
};

int main()	//������
{
	Point A(4,5);	//��������A
	Point *p1=&A;	//��������ָ�벢��ʼ��
	int (Point::*p_GetX)()=Point::GetX;	//������Ա����ָ�벢��ʼ��
	
	cout<<(A.*p_GetX)()<<endl;	//��1��ʹ�ó�Ա����ָ����ʳ�Ա����
	cout<<(p1->GetX)()<<endl;	//��2��ʹ�ö���ָ����ʳ�Ա����
	cout<<A.GetX()<<endl; 	//��3��ʹ�ö��������ʳ�Ա����
}
