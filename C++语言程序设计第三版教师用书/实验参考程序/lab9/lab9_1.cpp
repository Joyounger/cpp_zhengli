//lab9_1.cpp
#include <iostream>
#include "9_5.h"
#include "node.h"
using namespace std;

int main()
{
    // ����ͷָ����Ϊ NULL
    Node<int> *head = NULL, *prevPtr, *delPtr;
    
    int i, key, item;

    // ����10�������������ͷ����
    for (i=0;i < 10;i++)
	{
	    cin>>item;
           InsertFront(head, item);
	}
        
    // �������
    cout << "List: ";
    PrintList(head,noNewline);
    cout << endl;
    
    // ������Ҫɾ��������
    cout << "������һ����Ҫɾ��������: ";
    cin >> key;
    
    // ���Ҳ�ɾ�����
    prevPtr = head;
    while (Find(head,key,prevPtr) != NULL)
	{
	  if(prevPtr == NULL)  //�ҵ����������һ�����
         head = head->NextNode();
      else
         // ����ҵ����ǵڶ����Ժ�Ľ�㣬����ǰ�����ĳ�Ա����ɾ��֮
         delPtr=prevPtr->DeleteAfter();

      delete delPtr;  
	}
	
    // �������
    cout << "List: ";
    PrintList(head,noNewline);
    cout << endl;

	//�������
    ClearList(head);
}
