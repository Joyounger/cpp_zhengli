//10_5.cpp
#include <iostream>
#include <queue>	//声明Queue容器适配器头文件
using namespace std;

template< class T >
void popElements( T &s );

int main()
{
   queue< int > intDequeQueue;	// 默认情况下以Queue容器作为基础数据结构
   for ( int i = 0; i < 10; ++i ) {
      intDequeQueue.push( i );	//用push函数将整数添加到deque容器Queue顶部
   }
   cout << "Popping from intDequeQueue: ";
   popElements( intDequeQueue );	//将Queue中的元素弹出并输出
   cout << endl;
}

template< class T >
void popElements( T &s )	//定义模板函数
{
   while ( !s.empty() ) {
      cout << s.front() << ' ';	//用函数front读取Queue顶上的元素并输出
      s.pop();	//用函数pop删除顶上的元素
   }
}
