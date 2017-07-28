//3_14.cpp
#include<iostream>
using namespace std;
inline double CalArea(double radius)  //内联函数，计算圆的面积
{
	return 3.14*radius*radius;
}

int main()
{
	double r(3.0);  //r是圆的半径
	double area;
	area=CalArea(r);  
	//调用内联函数求圆的面积，编译时此处被替换为CalArea函数体语句
	cout<<area<<endl;
}
