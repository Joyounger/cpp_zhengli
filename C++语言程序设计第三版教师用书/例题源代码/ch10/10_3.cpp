//10_3.cpp
#include <iostream>
#include <list>
using namespace std ;

int main()
{
    list<int> Link;	//����һ���б����ڴ����������
    int i, key, item;    
    for (i=0;i < 10;i++)	// ����10�������������ͷ����
	{
      cin>>item;
      Link.push_front(item);
	}
    cout << "List: ";	// �������
list<int>::iterator p=Link.begin();  //������P���ڱ�������
    while(p!=Link.end())	// ������ڵ����ݣ�ֱ������β
    {
        cout <<*p << "  ";
        p++;	// ʹPָ����һ���ڵ�
    }
    cout << endl;
    
    cout << "������һ����Ҫɾ��������: ";		// ������Ҫɾ��������
    cin >> key;
    Link.remove(key);   
    cout << "List: ";	// �������
    p=Link.begin();	//ʹP����ָ���ͷ
    while(p!=Link.end())	// ������ڵ����ݣ�ֱ������β
    {
        cout <<*p << "  ";
        p++;	// ʹPָ����һ���ڵ�
    }
    cout << endl;
}
