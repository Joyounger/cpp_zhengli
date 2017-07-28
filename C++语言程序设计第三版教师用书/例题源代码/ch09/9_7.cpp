//9_7.cpp
#include <iostream>
#include "9_6.h"
#include "9_6.cpp"
using namespace std;

int main()
{
    LinkedList<int> Link;
    int i, key, item;

    // 输入10个整数依次向表头插入
    for (i=0;i < 10;i++)
    {
        cin>>item;
        Link.InsertFront(item);
	}
        
    // 输出链表
    cout << "List: ";
    Link.Reset();
    // 输出各结点数据，直到链表尾
    while(!Link.EndOfList())
    {
        cout <<Link.Data() << "  ";
        Link.Next();   // 使currPtr指向下一个结点
    }
    cout << endl;
    
    // 输入需要删除的整数
    cout << "请输入一个需要删除的整数: ";
    cin >> key;
    
    // 查找并删除结点
    Link.Reset();
    while (!Link.EndOfList())
    {
	  if(Link.Data() == key)  
         Link.DeleteAt();
	  Link.Next();
	}
	
    // 输出链表
    cout << "List: ";
    Link.Reset();
    // 输出各结点数据，直到链表尾
    while(!Link.EndOfList())
    {
        cout <<Link.Data() << "  ";
        Link.Next();  // 使currPtr指向下一个结点
    }
    cout << endl;
}

