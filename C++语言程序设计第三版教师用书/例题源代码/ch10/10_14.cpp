//10_14.cpp
#include <iostream>   
#include <numeric>	//������ֵ�㷨ͷ�ļ�
using namespace std;

class multclass	//����multclass��
{  
public:
	int operator()(int x, int y) const {return x*y;}	//���ز�����operator()
};

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  cout << "The result by multipling all elements in A is "
       << accumulate(A, A + N, 1, multclass())	//����multclass���ݸ�ͨ���㷨
       << endl;
}
