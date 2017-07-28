//lab4_1.cpp
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
	~CPU () { cout << "������һ��CPU!" << endl; }

    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
	float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() {cout << "CPU��ʼ����!" << endl; }
	void Stop() {cout << "CPUֹͣ����!" << endl; }
};

int main()
{
	CPU a(P6,300,2.8);
	a.Run();
	a.Stop();
}
