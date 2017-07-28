//10_3.cpp
#include <iostream>
#include <list>
using namespace std ;

int main()
{
    list<int> Link;	//构造一个列表用于存放整数链表
    int i, key, item;    
    for (i=0;i < 10;i++)	// 输入10个整数依次向表头插入
	{
      cin>>item;
      Link.push_front(item);
	}
    cout << "List: ";	// 输出链表
list<int>::iterator p=Link.begin();  //迭代器P用于遍历链表
    while(p!=Link.end())	// 输出各节点数据，直到链表尾
    {
        cout <<*p << "  ";
        p++;	// 使P指向下一个节点
    }
    cout << endl;
    
    cout << "请输入一个需要删除的整数: ";		// 输入需要删除的整数
    cin >> key;
    Link.remove(key);   
    cout << "List: ";	// 输出链表
    p=Link.begin();	//使P重新指向表头
    while(p!=Link.end())	// 输出各节点数据，直到链表尾
    {
        cout <<*p << "  ";
        p++;	// 使P指向下一个节点
    }
    cout << endl;
}
