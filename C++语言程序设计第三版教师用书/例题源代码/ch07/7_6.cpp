//7_6.cpp
#include <iostream>
using namespace std;
class B1	//基类B1声明
{
public:
	B1(int i) {cout<<"constructing B1 "<<i<<endl;}	//B1的构造函数
	~B1() {cout<<"destructing B1 "<<endl;}	//B1的析构函数
};
class B2	//基类B2声明
{
public:
	B2(int j) {cout<<"constructing B2 "<<j<<endl;}	//B2的构造函数
	~B2() {cout<<"destructing B2 "<<endl;}	//B2的析构函数
};
class B3	//基类B3声明
{
public:
	B3(){cout<<"constructing B3 *"<<endl;}	//B3的构造函数
	~B3() {cout<<"destructing B3 "<<endl;}	//B3的析构函数
};
class C: public B2, public B1, public B3	//派生类C声明
{
public:
	C(int a, int b, int c, int d):B1(a),memberB2(d),memberB1(c),B2(b){}
	//派生类构造函数定义
private:
	B1 memberB1;
	B2 memberB2;
	B3 memberB3;
};
int main()
{	C obj(1,2,3,4);
}
