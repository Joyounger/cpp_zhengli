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
		cout << "������һ��CPU!" << endl;
	}
	CPU()
	{
		cout << "������һ��CPU!" << endl;
	};
	~CPU ()
	{ 
		cout << "������һ��CPU!" << endl;
	}

    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
	float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() {cout << "CPU��ʼ����!" << endl; }
	void Stop() {cout << "CPUֹͣ����!" << endl; }
};

class RAM
{
public:
    RAM ()
	{
		cout << "������һ��RAM!" << endl; 
	}
	~RAM () 
	{
		cout << "������һ��RAM!" << endl;
	}

    void Run() {cout << "RAM��ʼ����!" << endl; }
	void Stop() {cout << "RAMֹͣ����!" << endl; }
};

class CDROM
{
public:
    CDROM (){	cout << "������һ��CDROM!" << endl; }
	~CDROM ()
	{ 
		cout << "������һ��CDROM!" << endl; 
	}

    void Run() {cout << "CDROM��ʼ����!" << endl; }
	void Stop() {cout << "CDROMֹͣ����!" << endl; }
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
		cout << "������һ��COMPUTER!" << endl;
	}
	~COMPUTER ()
	{ 
		cout << "������һ��COMPUTER!" << endl;

	}

    void Run() 
	{
		cout << "COMPUTER��ʼ����!" << endl;
		cpu.Run();
		ram.Run();
	}
	void Stop() 
	{
		ram.Stop();
		cpu.Stop();
		cout << "COMPUTERֹͣ����!" << endl; 
	}
};

int main()
{
	COMPUTER a;
	a.Run();
	a.Stop();
}
