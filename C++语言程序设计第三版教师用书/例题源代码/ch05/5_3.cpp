//5_3.cpp
#include<iostream>
using namespace std;
class Clock	//时钟类定义
{
public:	//外部接口
	Clock();
	void SetTime(int NewH, int NewM, int NewS);   //三个形参均具有函数原型作用域
	void ShowTime();
	~Clock(){}
private:	//私有数据成员
	int Hour,Minute,Second;
};
//时钟类成员函数实现
Clock::Clock()	//构造函数
{
	Hour=0;
	Minute=0;
	Second=0;
}
void Clock::SetTime(int NewH, int NewM, int NewS)
{
	Hour=NewH;
	Minute=NewM;
	Second=NewS;
}
void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
Clock globClock;  //声明对象globClock，具有静态生存期，文件作用域
// 由缺省构造函数初始化为0:0:0
int main()	//主函数
{
	cout<<"First time output:"<<endl;	
	//引用具有文件作用域的对象globClock：
	globClock.ShowTime();	//对象的成员函数具有类作用域
		//显示0:0:0
	globClock.SetTime(8,30,30);	//将时间设置为8:30:30
	Clock myClock(globClock);	//声明具有块作用域的对象myClock
		//调用拷贝构造函数，以globClock为初始值
	cout<<"Second time output:"<<endl;	
	myClock.ShowTime();	//引用具有块作用域的对象myClock
		//输出8:30:30
}
