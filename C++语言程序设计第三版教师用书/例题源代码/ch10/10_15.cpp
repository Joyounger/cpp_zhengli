//10_15.cpp
#include <iostream>   
#include <numeric>   //������ֵ�㷨ͷ�ļ�
#include <functional>  //������׼��������ͷ�ļ�
using namespace std;

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  cout << "The result by multipling all elements in A is "
   << accumulate(A, A + N, 1, multiplies<int>()) //����׼�������󴫵ݸ�ͨ���㷨
   << endl;
}
