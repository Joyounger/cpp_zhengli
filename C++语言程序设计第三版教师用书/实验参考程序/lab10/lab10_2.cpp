// lab10_2.cpp
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
    int A[8] = { 5, 2, 7, 4, 4, 2, 6, 1 } ;
    int *location ;
    int i ;
    int value ;

    cout << "�����ֵΪ��{ ";
    for(i = 0; i < 7; i++)
        cout << A[i] << ", " ;
    cout << A[7] << "}" << endl ;

    cout << "��������ҵ�����";
	cin >> value;
	
	location = find(A, A + 8, value) ;

    if (location != A + 8)
        cout << "���ȵ���" << value << "���ǵ�"
             << (location-A)+1 << "��Ԫ��" << endl;
    else
		cout << "û���ҵ������ҵ�����" << endl;
	cout<<"����ǰ�Ľ��:"<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	cout<<endl; 
	sort(A,A+8);
	cout<<"�������к�Ľ��:"<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	sort(A,A+8,greater<int>());
	cout<<endl; 
	cout<<"�������к�Ľ����"<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	cout<<endl; 

}