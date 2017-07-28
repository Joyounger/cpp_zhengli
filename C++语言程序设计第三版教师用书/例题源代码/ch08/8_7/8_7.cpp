//8_7.cpp	文件三，主函数
#include "Trapzint.h"	//类声明头文件
#include <iomanip>
using namespace std;
int main()	//主函数
{
	Fun f;	//声明Fun类的对象
	Trapz trapz1(f);	//声明Trapz类的对象
	cout<<"TRAPZ Int:"<<setprecision(7)<<trapz1(0,2,1e-7)<<endl;	
//计算并输出积分结果
}
