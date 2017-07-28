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
  copy( col1.begin(), col1.end(), output );	//�����ʼ�б�����col1�е�Ԫ��

  list<int>::iterator pos=col1.begin();	//����ָ���ʼԪ�صĵ�����
  cout<<"\nThe fist element is: "<<*pos;	//�����һ��Ԫ��
  advance(pos,3);	//ǰ������Ԫ�أ�ָ����ĸ�Ԫ��
  cout<<"\nThe 4th element is: "<<*pos;	//������ĸ�Ԫ��

  cout<<"\nThe advanced distance is: "<<distance(col1.begin(),pos);
		// �����ǰ������λ�����ʼλ�õľ���

  iter_swap(col1.begin(),--col1.end()); //�����б������е�һ��Ԫ�غ����һ��Ԫ��
  cout << "\nAfter exchange List col1 contains: ";
  copy( col1.begin(), col1.end(), output );//�������Ԫ�غ��б�����col1�е�Ԫ��
  cout<<endl;
}
