//10_6.cpp
#include <iostream>   
#include <vector>   
#include <algorithm>  
using namespace std;

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  vector<int> col1(A,A+N);
  ostream_iterator< int > output( cout, " " );

  cout << "List col1 contains: ";
  copy( col1.begin(), col1.end(), output );  //输出初始向量容器col1中的元素

  vector<int>::iterator pos=col1.begin();    //定义指向初始元素的迭代器
  cout<<"\nThe fist element is: "<<*pos;     //输出第一个元素

  vector<int>::reverse_iterator rpos=col1.rbegin(); 
                                             //应用逆向迭代器指向最后一个元素
  cout<<"\nThe last element is: "<<*rpos<<endl;  //输出最后一个元素

  back_insert_iterator<vector<int> > iter(col1);  //声明后插迭代器
  *iter=66;                                  //应用后插迭代器插入元素66
  back_inserter(col1)=88;                    //应用函数后插元素88
  copy( col1.begin(), col1.end(), output );  
//输出后插操作后的向量容器col1中的元素
  cout<<endl;
}
