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
  copy( col1.begin(), col1.end(), output );  //�����ʼ��������col1�е�Ԫ��

  vector<int>::iterator pos=col1.begin();    //����ָ���ʼԪ�صĵ�����
  cout<<"\nThe fist element is: "<<*pos;     //�����һ��Ԫ��

  vector<int>::reverse_iterator rpos=col1.rbegin(); 
                                             //Ӧ�����������ָ�����һ��Ԫ��
  cout<<"\nThe last element is: "<<*rpos<<endl;  //������һ��Ԫ��

  back_insert_iterator<vector<int> > iter(col1);  //������������
  *iter=66;                                  //Ӧ�ú�����������Ԫ��66
  back_inserter(col1)=88;                    //Ӧ�ú������Ԫ��88
  copy( col1.begin(), col1.end(), output );  
//��������������������col1�е�Ԫ��
  cout<<endl;
}
