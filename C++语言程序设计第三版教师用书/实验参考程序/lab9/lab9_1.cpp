//lab9_1.cpp
#include <iostream>
#include "9_5.h"
#include "node.h"
using namespace std;

int main()
{
    // 将表头指针置为 NULL
    Node<int> *head = NULL, *prevPtr, *delPtr;
    
    int i, key, item;

    // 输入10个整数依次向表头插入
    for (i=0;i < 10;i++)
	{
	    cin>>item;
           InsertFront(head, item);
	}
        
    // 输出链表
    cout << "List: ";
    PrintList(head,noNewline);
    cout << endl;
    
    // 输入需要删除的整数
    cout << "请输入一个需要删除的整数: ";
    cin >> key;
    
    // 查找并删除结点
    prevPtr = head;
    while (Find(head,key,prevPtr) != NULL)
	{
	  if(prevPtr == NULL)  //找到的是链表第一个结点
         head = head->NextNode();
      else
         // 如果找到的是第二个以后的结点，调用前趋结点的成员函数删除之
         delPtr=prevPtr->DeleteAfter();

      delete delPtr;  
	}
	
    // 输出链表
    cout << "List: ";
    PrintList(head,noNewline);
    cout << endl;

	//清空链表
    ClearList(head);
}
