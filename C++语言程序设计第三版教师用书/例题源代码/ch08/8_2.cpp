//8_2.cpp
#include<iostream>
using namespace std;
class Clock	//ʱ��������
{
public:	//�ⲿ�ӿ�
	Clock(int NewH=0, int NewM=0, int NewS=0);
	void ShowTime();
	void operator ++();	//ǰ�õ�Ŀ���������
	void operator ++(int);	//���õ�Ŀ���������
private:	//˽�����ݳ�Ա
	int Hour,Minute,Second;
};
Clock::Clock(int NewH, int NewM, int NewS)	//���캯��
{
	if(0 <= NewH && NewH < 24 && 0 <= NewM && NewM < 60 && 0 <= NewS && NewS < 60)
	{    Hour=NewH;
	      Minute=NewM;
	      Second=NewS;
	}
	else
	     cout<<"Time error!"<<endl;
}
void Clock::ShowTime()	//��ʾʱ�亯��
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}
void Clock::operator ++()	//ǰ�õ�Ŀ��������غ���
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
void Clock::operator ++(int)	//���õ�Ŀ���������
{		//ע���βα��е����Ͳ���
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
