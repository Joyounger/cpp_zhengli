//10_7.cpp
#include <iostream>   
#include <list>   
#include <algorithm>  
using namespace std;

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  const int N = sizeof(A) / sizeof(int);
  list<int> col1(A,A+N);
  ostream_iterator< int > output( cout, " " );

  cout << "List col1 contains: ";
  copy( col1.begin(), col1.end(), output );	//输出初始列表容器col1中的元素

  list<int>::iterator pos=col1.begin();	//定义指向初始元素的迭代器
  cout<<"\nThe fist element is: "<<*pos;	//输出第一个元素
  advance(pos,3);	//前进三个元素，指向第四个元素
  cout<<"\nThe 4th element is: "<<*pos;	//输出第四个元素

  cout<<"\nThe advanced distance is: "<<distance(col1.begin(),pos);
		// 输出当前迭代器位置与初始位置的距离

  iter_swap(col1.begin(),--col1.end()); //交换列表容器中第一个元素和最后一个元素
  cout << "\nAfter exchange List col1 contains: ";
  copy( col1.begin(), col1.end(), output );//输出交换元素后列表容器col1中的元素
  cout<<endl;
}
