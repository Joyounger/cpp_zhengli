//10_13.cpp
#include <iostream>   
#include <numeric>	//������ֵ�㷨ͷ�ļ�
using namespace std;

int mult(int x, int y) { return x*y; };	//����һ����ͨ����
int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  cout << "The result by multipling all elements in A is "
       << accumulate(A, A + N, 1, mult)	//����ͨ����mult���ݸ�ͨ���㷨
       << endl;
}
