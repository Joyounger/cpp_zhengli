//10_2.cpp
#include <iostream>
#include <deque>	//����˫�˶�������ͷ�ļ�
#include <algorithm>	//�����㷨ͷ�ļ�
using namespace std;

int main()
{ 
   deque< double > values;	//����һ��˫������deque��������
   ostream_iterator< double > output( cout, " " );
   values.push_front( 2.2 );	//Ӧ�ú���push_front��deque������ͷ����Ԫ��
   values.push_front( 3.5 );
   values.push_back( 1.1 );	//Ӧ�ú���push_back��deque������β����Ԫ��
   cout << "values contains: ";
   for ( int i = 0; i < values.size(); ++i )
      cout << values[ i ] << ' ';
   values.pop_front();	//Ӧ�ú���push_front��deque������ɾ����һ��Ԫ��
   cout << "\nAfter pop_front values contains: ";
   copy ( values.begin(), values.end(), output );
   values[ 1 ] = 5.4;	//Ӧ�ò�����[]�����¸�ֵ
   cout << "\nAfter values[ 1 ] = 5.4 values contains: ";
   copy ( values.begin(), values.end(), output );
   cout << endl;
}
