//4_3.cpp
#include <iostream>
using namespace std;
const float PI = (float)3.14159;	//����p��ֵ
const float FencePrice = 35.;	//դ���ĵ���
const float ConcretePrice = 20.;	//����ˮ�൥��
class Circle	//������Circle �������ݺͷ���
{
public:	//�ⲿ�ӿ�
    Circle(float r);	//���캯��
    float Circumference();	//����Բ�ܳ�
    float Area();	//����Բ���
private:	//˽�����ݳ�Ա
    float   radius;
};
// ���ʵ��
Circle::Circle(float r) { radius=r; }	// ���캯����ʼ�����ݳ�Աradius
float Circle::Circumference()	// ����Բ���ܳ�
{
    return 2 * PI * radius;
}
float Circle::Area()	// ����Բ����� 
{
    return PI * radius * radius;
}
//������ʵ��
void main ()
{
	float radius;
	float FenceCost, ConcreteCost; 
	cout << "Enter the radius of the pool: ";	 // ��ʾ�û�����뾶
	cin >> radius;
	Circle Pool(radius);  	// ����Circle ����
	Circle PoolRim(radius + 3);
    // ����դ����۲����
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "Fencing Cost is ��" << FenceCost << endl;
    //  ���������۲����
    ConcreteCost = (PoolRim.Area() - Pool.Area())*ConcretePrice;
    cout << "Concrete Cost is ��" << ConcreteCost << endl;
}
