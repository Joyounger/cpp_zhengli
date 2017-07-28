//10_14.cpp
#include <iostream>   
#include <numeric>	//包含数值算法头文件
using namespace std;

class multclass	//定义multclass类
{  
public:
	int operator()(int x, int y) const {return x*y;}	//重载操作符operator()
};

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  cout << "The result by multipling all elements in A is "
       << accumulate(A, A + N, 1, multclass())	//将类multclass传递给通用算法
       << endl;
}
