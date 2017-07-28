//10_5.cpp
#include <iostream>
#include <queue>	//����Queue����������ͷ�ļ�
using namespace std;

template< class T >
void popElements( T &s );

int main()
{
   queue< int > intDequeQueue;	// Ĭ���������Queue������Ϊ�������ݽṹ
   for ( int i = 0; i < 10; ++i ) {
      intDequeQueue.push( i );	//��push������������ӵ�deque����Queue����
   }
   cout << "Popping from intDequeQueue: ";
   popElements( intDequeQueue );	//��Queue�е�Ԫ�ص��������
   cout << endl;
}

template< class T >
void popElements( T &s )	//����ģ�庯��
{
   while ( !s.empty() ) {
      cout << s.front() << ' ';	//�ú���front��ȡQueue���ϵ�Ԫ�ز����
      s.pop();	//�ú���popɾ�����ϵ�Ԫ��
   }
}
