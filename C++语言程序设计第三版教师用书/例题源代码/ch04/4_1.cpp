//4_1.cpp
#include<iostream>	
using namespace std;
class Clock	//ʱ���������
{
public:	//�ⲿ�ӿڣ����г�Ա����
	void SetTime(int NewH=0, int NewM=0, int NewS=0);
	void ShowTime();
private:	//˽�����ݳ�Ա
	int Hour,Minute,Second;
};
//ʱ�����Ա�����ľ���ʵ��
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
//������
int main()
{
	Clock myClock;	//�������myClock
	cout<<"First time set and output:"<<endl;
	myClock.SetTime();	//����ʱ��ΪĬ��ֵ
	myClock.ShowTime();	//��ʾʱ��
	cout<<"Second time set and output:"<<endl;
	myClock.SetTime(8,30,30);	//����ʱ��Ϊ8��30��30
	myClock.ShowTime();	//��ʾʱ��
}
