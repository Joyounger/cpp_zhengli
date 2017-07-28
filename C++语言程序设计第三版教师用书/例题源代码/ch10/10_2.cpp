//10_2.cpp
#include <iostream>
#include <deque>	//包含双端队列容器头文件
#include <algorithm>	//包含算法头文件
using namespace std;

int main()
{ 
   deque< double > values;	//声明一个双精度型deque序列容器
   ostream_iterator< double > output( cout, " " );
   values.push_front( 2.2 );	//应用函数push_front在deque容器开头插入元素
   values.push_front( 3.5 );
   values.push_back( 1.1 );	//应用函数push_back在deque容器结尾插入元素
   cout << "values contains: ";
   for ( int i = 0; i < values.size(); ++i )
      cout << values[ i ] << ' ';
   values.pop_front();	//应用函数push_front从deque容器中删除第一个元素
   cout << "\nAfter pop_front values contains: ";
   copy ( values.begin(), values.end(), output );
   values[ 1 ] = 5.4;	//应用操作符[]来重新赋值
   cout << "\nAfter values[ 1 ] = 5.4 values contains: ";
   copy ( values.begin(), values.end(), output );
   cout << endl;
}
