//10_4.cpp
#include <iostream>
#include <stack>	//包含stack适配器头文件
using namespace std;

template< class T >
void popElements( T &s );

int main()
{
   stack< int > intDequeStack;	//默认情况下以deque容器作为基础数据结构
   for ( int i = 0; i < 10; ++i ) {
      intDequeStack.push( i );	//用push函数将整数添加到deque容器stack顶部
   }
   cout << "Popping from intDequeStack: ";
   popElements( intDequeStack );	//将stack中的元素弹出并输出
   cout << endl;
}

template< class T >
void popElements( T &s )	//定义模板函数
{
   while ( !s.empty() ) {
      cout << s.top() << ' ';	//用函数top读取stack顶上的元素并输出
      s.pop();	//用函数pop删除顶上的元素
   }
}
