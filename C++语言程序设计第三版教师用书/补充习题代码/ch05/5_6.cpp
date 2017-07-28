//5_6.cpp
//本题为“判断错误原因”，故程序有编译错误
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
