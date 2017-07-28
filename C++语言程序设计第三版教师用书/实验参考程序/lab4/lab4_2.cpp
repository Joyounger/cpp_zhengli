//lab4_2.cpp
#include <iostream>
using namespace std;

enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
    CPU (CPU_Rank r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "构造了一个CPU!" << endl;
	}
	CPU()
	{
		cout << "构造了一个CPU!" << endl;
	};
	~CPU ()
	{ 
		cout << "析构了一个CPU!" << endl;
	}

    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
	float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() {cout << "CPU开始运行!" << endl; }
	void Stop() {cout << "CPU停止运行!" << endl; }
};

class RAM
{
public:
    RAM ()
	{
		cout << "构造了一个RAM!" << endl; 
	}
	~RAM () 
	{
		cout << "析构了一个RAM!" << endl;
	}

    void Run() {cout << "RAM开始运行!" << endl; }
	void Stop() {cout << "RAM停止运行!" << endl; }
};

class CDROM
{
public:
    CDROM (){	cout << "构造了一个CDROM!" << endl; }
	~CDROM ()
	{ 
		cout << "析构了一个CDROM!" << endl; 
	}

    void Run() {cout << "CDROM开始运行!" << endl; }
	void Stop() {cout << "CDROM停止运行!" << endl; }
};

class COMPUTER
{
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	COMPUTER()
	{
		cout << "构造了一个COMPUTER!" << endl;
	}
	~COMPUTER ()
	{ 
		cout << "析构了一个COMPUTER!" << endl;

	}

    void Run() 
	{
		cout << "COMPUTER开始运行!" << endl;
		cpu.Run();
		ram.Run();
	}
	void Stop() 
	{
		ram.Stop();
		cpu.Stop();
		cout << "COMPUTER停止运行!" << endl; 
	}
};

int main()
{
	COMPUTER a;
	a.Run();
	a.Stop();
}
