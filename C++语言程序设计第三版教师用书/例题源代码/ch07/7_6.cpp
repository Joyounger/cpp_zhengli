//7_6.cpp
#include <iostream>
using namespace std;
class B1	//����B1����
{
public:
	B1(int i) {cout<<"constructing B1 "<<i<<endl;}	//B1�Ĺ��캯��
	~B1() {cout<<"destructing B1 "<<endl;}	//B1����������
};
class B2	//����B2����
{
public:
	B2(int j) {cout<<"constructing B2 "<<j<<endl;}	//B2�Ĺ��캯��
	~B2() {cout<<"destructing B2 "<<endl;}	//B2����������
};
class B3	//����B3����
{
public:
	B3(){cout<<"constructing B3 *"<<endl;}	//B3�Ĺ��캯��
	~B3() {cout<<"destructing B3 "<<endl;}	//B3����������
};
class C: public B2, public B1, public B3	//������C����
{
public:
	C(int a, int b, int c, int d):B1(a),memberB2(d),memberB1(c),B2(b){}
	//�����๹�캯������
private:
	B1 memberB1;
	B2 memberB2;
	B3 memberB3;
};
int main()
{	C obj(1,2,3,4);
}
