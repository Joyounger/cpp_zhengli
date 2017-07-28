//10_8.cpp
#include <iostream>   
#include <vector>   
#include <algorithm>  
#include <functional>
using namespace std;

int main()
{
  int A[] = {1, 4, 3, 2, 5};
  const int N = sizeof(A) / sizeof(int);
  vector<int> col1(A,A+N);
  ostream_iterator< int > output( cout, " " );

  cout << "Vector col1 contains: ";
  copy( col1.begin(), col1.end(), output ); //�����ʼ�б�����col1�е�Ԫ��
  sort(col1.begin(),col1.end()); //��һ�ֵ�����ʽ
  cout << "\nAfter sorted in ascending order col1 contains: ";
  copy( col1.begin(), col1.end(), output );//��������Ԫ�غ��б�����col1�е�Ԫ��
  sort(col1.begin(),col1.end(),greater<int>());//�ڶ��ֵ�����ʽʹ�ñ�׼��������
  cout << "\nAfter sorted in descending ordercol1 contains: ";
  copy( col1.begin(), col1.end(), output );//��������Ԫ�غ��б�����col1�е�Ԫ��
  cout<<endl;
}
