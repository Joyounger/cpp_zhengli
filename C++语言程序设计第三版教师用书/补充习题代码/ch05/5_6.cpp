//5_6.cpp
//����Ϊ���жϴ���ԭ�򡱣��ʳ����б������
#include <iostream>
using namespace std;
class Exam
{
	int n;
public:
	Exam(int i) {n=i;}
	void SetValue(int i)
	{
		n=i;
	}
	void DispValue()
	{
		cout<<"n="<<n<<endl;
	}
};
int main()
{
	const Exam e(10);
	e.SetValue(8);
	e.DispValue();
	return 0;
}
