//10_4.cpp
#include <iostream>
#include <stack>	//����stack������ͷ�ļ�
using namespace std;

template< class T >
void popElements( T &s );

int main()
{
   stack< int > intDequeStack;	//Ĭ���������deque������Ϊ�������ݽṹ
   for ( int i = 0; i < 10; ++i ) {
      intDequeStack.push( i );	//��push������������ӵ�deque����stack����
   }
   cout << "Popping from intDequeStack: ";
   popElements( intDequeStack );	//��stack�е�Ԫ�ص��������
   cout << endl;
}

template< class T >
void popElements( T &s )	//����ģ�庯��
{
   while ( !s.empty() ) {
      cout << s.top() << ' ';	//�ú���top��ȡstack���ϵ�Ԫ�ز����
      s.pop();	//�ú���popɾ�����ϵ�Ԫ��
   }
}
