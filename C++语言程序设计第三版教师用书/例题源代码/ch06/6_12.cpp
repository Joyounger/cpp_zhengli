//6_12.cpp
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
	Point A(4,5);	//��������ʼ������A
	Point *p1;	//��������ָ��
	
	p1=&A;	//��ʼ��ָ��
	cout<<p1->GetX()<<endl;	//����ָ����ʶ����Ա
	cout<<A.GetX()<<endl; 	//���ö��������ʶ����Ա
}
