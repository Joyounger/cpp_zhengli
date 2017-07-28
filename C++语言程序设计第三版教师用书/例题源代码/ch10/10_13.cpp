//10_13.cpp
#include <iostream>   
#include <numeric>	//包含数值算法头文件
using namespace std;

int mult(int x, int y) { return x*y; };	//定义一个普通函数
int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  cout << "The result by multipling all elements in A is "
       << accumulate(A, A + N, 1, mult)	//将普通函数mult传递给通用算法
       << endl;
}
