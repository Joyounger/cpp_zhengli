//9_7.cpp
#include <iostream>
#include "9_6.h"
#include "9_6.cpp"
using namespace std;

int main()
{
    LinkedList<int> Link;
    int i, key, item;

    // ����10�������������ͷ����
    for (i=0;i < 10;i++)
    {
        cin>>item;
        Link.InsertFront(item);
	}
        
    // �������
    cout << "List: ";
    Link.Reset();
    // �����������ݣ�ֱ������β
    while(!Link.EndOfList())
    {
        cout <<Link.Data() << "  ";
        Link.Next();   // ʹcurrPtrָ����һ�����
    }
    cout << endl;
    
    // ������Ҫɾ��������
    cout << "������һ����Ҫɾ��������: ";
    cin >> key;
    
    // ���Ҳ�ɾ�����
    Link.Reset();
    while (!Link.EndOfList())
    {
	  if(Link.Data() == key)  
         Link.DeleteAt();
	  Link.Next();
	}
	
    // �������
    cout << "List: ";
    Link.Reset();
    // �����������ݣ�ֱ������β
    while(!Link.EndOfList())
    {
        cout <<Link.Data() << "  ";
        Link.Next();  // ʹcurrPtrָ����һ�����
    }
    cout << endl;
}

