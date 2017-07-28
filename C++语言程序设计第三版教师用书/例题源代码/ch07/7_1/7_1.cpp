//7_1.cpp
#include<iostream>
#include<cmath>
#include "rectangle.h"
using namespace std;
int main()
{
	Rectangle rect;	//声明Rectangle类的对象
	rect.InitR(2,3,20,10);	//设置矩形的数据
	rect.Move(3,2);	//移动矩形位置
	cout<<"The data of rect(X,Y,W,H):"<<endl;
	cout<<rect.GetX()<<","	//输出矩形的特征参数
	      <<rect.GetY()<<","
	      <<rect.GetW()<<","
	      <<rect.GetH()<<endl;
}
//End of 7_1.cpp
