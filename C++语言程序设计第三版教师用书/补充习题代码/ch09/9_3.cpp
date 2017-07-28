//9_3.cpp
#include <iostream>
using namespace std;
template<class T>
T Min(T x, T y)
{
  return ( x < y ? x : y);
}
template<class T>
T Max(T x, T y)
{
  return ( x > y ? x : y);
}

int main()
{
	int a1=1,a2=6;
	cout<<"The min value is:"<<Min(a1,a2)<<endl;
	cout<<"The max value is:"<<Max(a1,a2)<<endl;
	return 0;
}

/*运行结果：
The min value is:1
The max value is:6
*/