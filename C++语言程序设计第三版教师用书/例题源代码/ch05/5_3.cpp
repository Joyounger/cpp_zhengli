//5_3.cpp
#include<iostream>
using namespace std;
class Clock	//ʱ���ඨ��
{
public:	//�ⲿ�ӿ�
	Clock();
	void SetTime(int NewH, int NewM, int NewS);   //�����βξ����к���ԭ��������
	void ShowTime();
	~Clock(){}
private:	//˽�����ݳ�Ա
	int Hour,Minute,Second;
};
//ʱ�����Ա����ʵ��
Clock::Clock()	//���캯��
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
Clock globClock;  //��������globClock�����о�̬�����ڣ��ļ�������
// ��ȱʡ���캯����ʼ��Ϊ0:0:0
int main()	//������
{
	cout<<"First time output:"<<endl;	
	//���þ����ļ�������Ķ���globClock��
	globClock.ShowTime();	//����ĳ�Ա����������������
		//��ʾ0:0:0
	globClock.SetTime(8,30,30);	//��ʱ������Ϊ8:30:30
	Clock myClock(globClock);	//�������п�������Ķ���myClock
		//���ÿ������캯������globClockΪ��ʼֵ
	cout<<"Second time output:"<<endl;	
	myClock.ShowTime();	//���þ��п�������Ķ���myClock
		//���8:30:30
}
