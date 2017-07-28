//8_2.cpp
#include<iostream>
using namespace std;
class Clock	//时钟类声明
{
public:	//外部接口
	Clock(int NewH=0, int NewM=0, int NewS=0);
	void ShowTime();
	void operator ++();	//前置单目运算符重载
	void operator ++(int);	//后置单目运算符重载
private:	//私有数据成员
	int Hour,Minute,Second;
};
Clock::Clock(int NewH, int NewM, int NewS)	//构造函数
{
	if(0 <= NewH && NewH < 24 && 0 <= NewM && NewM < 60 && 0 <= NewS && NewS < 60)
	{    Hour=NewH;
	      Minute=NewM;
	      Second=NewS;
	}
	else
	     cout<<"Time error!"<<endl;
}
void Clock::ShowTime()	//显示时间函数
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
void Clock::operator ++()	//前置单目运算符重载函数
{
	Second++;
	if(Second>=60)
	{
	     Second=Second-60;
	     Minute++;
	     if(Minute>=60)
	     {
	          Minute=Minute-60;
	          Hour++;
	          Hour=Hour%24;
	     }
	}
	cout<<"++Clock: ";
}
void Clock::operator ++(int)	//后置单目运算符重载
{		//注意形参表中的整型参数
	Second++;
	if(Second>=60)
	{
	    Second=Second-60;
	    Minute++;
	    if(Minute>=60)
	    {
	        Minute=Minute-60;
	        Hour++;
	        Hour=Hour%24;
	    }
	}
	cout<<"Clock++: ";
}
int main()
{
	Clock myClock(23,59,59);
	cout<<"First time output:";
	myClock.ShowTime();
	myClock++;
	myClock.ShowTime();
	++myClock;
	myClock.ShowTime();
}
