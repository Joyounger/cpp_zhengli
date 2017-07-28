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
  copy( col1.begin(), col1.end(), output ); //输出初始列表容器col1中的元素
  sort(col1.begin(),col1.end()); //第一种调用形式
  cout << "\nAfter sorted in ascending order col1 contains: ";
  copy( col1.begin(), col1.end(), output );//升序排序元素后列表容器col1中的元素
  sort(col1.begin(),col1.end(),greater<int>());//第二种调用形式使用标准函数对象
  cout << "\nAfter sorted in descending ordercol1 contains: ";
  copy( col1.begin(), col1.end(), output );//降序排序元素后列表容器col1中的元素
  cout<<endl;
}
