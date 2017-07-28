//4_3.cpp
#include <iostream>
using namespace std;
const float PI = (float)3.14159;	//给出p的值
const float FencePrice = 35.;	//栅栏的单价
const float ConcretePrice = 20.;	//过道水泥单价
class Circle	//声明类Circle 及其数据和方法
{
public:	//外部接口
    Circle(float r);	//构造函数
    float Circumference();	//计算圆周长
    float Area();	//计算圆面积
private:	//私有数据成员
    float   radius;
};
// 类的实现
Circle::Circle(float r) { radius=r; }	// 构造函数初始化数据成员radius
float Circle::Circumference()	// 计算圆的周长
{
    return 2 * PI * radius;
}
float Circle::Area()	// 计算圆的面积 
{
    return PI * radius * radius;
}
//主函数实现
void main ()
{
	float radius;
	float FenceCost, ConcreteCost; 
	cout << "Enter the radius of the pool: ";	 // 提示用户输入半径
	cin >> radius;
	Circle Pool(radius);  	// 声明Circle 对象
	Circle PoolRim(radius + 3);
    // 计算栅栏造价并输出
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "Fencing Cost is ￥" << FenceCost << endl;
    //  计算过道造价并输出
    ConcreteCost = (PoolRim.Area() - Pool.Area())*ConcretePrice;
    cout << "Concrete Cost is ￥" << ConcreteCost << endl;
}
