//4_1.cpp
#include<iostream>	
using namespace std;
class Clock	//时钟类的声明
{
public:	//外部接口，公有成员函数
	void SetTime(int NewH=0, int NewM=0, int NewS=0);
	void ShowTime();
private:	//私有数据成员
	int Hour,Minute,Second;
};
//时钟类成员函数的具体实现
void Clock::SetTime(int NewH, int NewM, int NewS)
{
	Hour=NewH;
	Minute=NewM;
	Second=NewS;
}

inline void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
//主函数
int main()
{
	Clock myClock;	//定义对象myClock
	cout<<"First time set and output:"<<endl;
	myClock.SetTime();	//设置时间为默认值
	myClock.ShowTime();	//显示时间
	cout<<"Second time set and output:"<<endl;
	myClock.SetTime(8,30,30);	//设置时间为8：30：30
	myClock.ShowTime();	//显示时间
}
