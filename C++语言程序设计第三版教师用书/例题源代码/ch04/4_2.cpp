//4_2.cpp
#include <iostream>
using namespace std;
class Point	//Point �������
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}	//���캯��
	Point(Point &p);	//�������캯��
	int GetX() {return X;}
	int GetY() {return Y;}
private:	//˽������
	int X,Y;
};
//��Ա������ʵ��
Point::Point(Point &p)
{
	X=p.X;
	Y=p.Y;
	cout<<"�������캯��������"<<endl;
}
//�β�ΪPoint�����ĺ���
void fun1(Point p)
{	cout<<p.GetX()<<endl;
}
//����ֵΪPoint�����ĺ���
Point fun2()
{
	Point A(1,2);
	return A;
}
//������
int main()
{
	Point A(4,5);	//��һ������A
	Point B(A);                  //���һ����A��ʼ��B����һ�ε��ÿ������캯��
	cout<<B.GetX()<<endl;
	fun1(B);  //�����������B��Ϊfun1��ʵ�Ρ��ڶ��ε��ÿ������캯��
	B=fun2();  //������������ķ���ֵ������󣬺�������ʱ�����ÿ������캯��
	cout<<B.GetX()<<endl;
}
