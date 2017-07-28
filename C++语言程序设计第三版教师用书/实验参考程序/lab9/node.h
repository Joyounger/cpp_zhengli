//Node.h
#ifndef NODE_LIBRARY
#define NODE_LIBRARY

#include <iostream>
#include <cstdlib>
#include "9_5.h"
using namespace std;

// 生成结点：创建一个结点，数据成员值为item，指向后继结点的指针值为nextPtr
template <class T>
Node<T> *GetNode(const T& item, Node<T> *nextPtr = NULL)
{
    Node<T>  *newNode;

    // 为新结点分配内存空间，然后将item和NextPtr传递给构造函数
    newNode = new Node<T>(item, nextPtr);
    if (newNode == NULL)  //如果分配内存失败，程序中止
    {
        cerr << "Memory allocation failure!" << endl;
        exit(1);
    }
    return newNode;
}

enum AppendNewline {noNewline,addNewline};

// 输出链表
template <class T>
void PrintList(Node<T> *head, AppendNewline addnl = noNewline)
{
    // currPtr初始指向表头结点，用于遍历链表
    Node<T> *currPtr = head;

    // 输出结点数据，直到链表结束
    while(currPtr != NULL)
    {
        // 如果换行标志addl == addNewline，则输出换行符
        if(addnl == addNewline)
            cout << currPtr->data << endl;
        else
            cout << currPtr->data << "  ";
           
        // 使currPtr指向下一个结点
        currPtr = currPtr->NextNode();
    }
}

//查找结点
//在指针head所指向的链表中查找数据域等于item的结点
//找到则返回TRUE及其前趋结点的地址，否则返回FALSE
template <class T>
int Find(Node<T> *head, T& item, Node<T>* &prevPtr)
{
	Node<T> *currPtr = head;   //从第一个结点开始遍历

	prevPtr = NULL;
	
	// 通过循环遍历链表，直到表尾
	while(currPtr != NULL)
	{
	      //将item与结点的数据域比较，如果相等，则返回，否则继续处理下一个结点
	      if (currPtr->data == item)
	           return 1;
	      prevPtr = currPtr;   //记录下当前结点的地址
	      currPtr = currPtr->NextNode();
	}
	return 0;  //找不到时
}

//在表头插入结点
template <class T>
void InsertFront(Node<T>* & head, T item)
{
    // 建立新结点，使其指针域指向原链表头结点head，然后更新head
    head = GetNode(item,head);
}

//在表尾添加结点
template <class T>
void InsertRear(Node<T>* & head, const T& item)
{
    Node<T>  *newNode, *currPtr = head;

	// 如果链表为空，则插入在表头
    if (currPtr == NULL)
        InsertFront(head,item);
    else
    {
	// 寻找指针域为NULL的结点
      while(currPtr->NextNode() != NULL)
          currPtr = currPtr->NextNode();
   // 建立新结点并插入在表尾(在currPtr之后)
      newNode = GetNode(item);
      currPtr->InsertAfter(newNode);
    }
}               

// 删除链表的第一个结点
template <class T>
void DeleteFront(Node<T>* & head)
{
    Node<T> *p = head;   //取得将被删除的结点的地址

    if (head != NULL)    // 确认链表不空
    {
        head = head->NextNode();    // 将表头指针head移向第二个结点
        delete p;   //删除原第一个结点
    }
}

// 删除链表中第一个数据域等于key的结点
template <class T>
void Delete (Node<T>* & head, T key)
{
   // currPtr用于遍历链表，prevPtr跟随其后
   Node<T>  *currPtr = head, *prevPtr = NULL; 

   // 如果链表为空，则返回
   if (currPtr == NULL)
      return;
      
   //通过循环遍历链表，直到找到数据域为key的结点，或达到表尾
   while (currPtr != NULL && currPtr->data != key)
   {
      // currPtr前行，prevPtr跟随其后
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
   }

   //若 currPtr != NULL，则currPtr指向的结点数据域为key
   if (currPtr != NULL)
   {
      if(prevPtr == NULL)  //找到的是链表第一个结点
         head = head->NextNode();
      else
         // 如果找到的是第二个以后的结点，调用前趋结点的成员函数删除之
         prevPtr->DeleteAfter();

      delete currPtr;   //释放被删除的结点所占的内存空间
   }
}

// 在有序链表中插入一个结点
template <class T>
void InsertOrder(Node<T>* & head, T item)
{
    // currPtr用于遍历链表，prevPtr跟随其后
    Node<T> *currPtr, *prevPtr, *newNode;
    
    // prevPtr == NULL 标志着应插入在表头
    prevPtr = NULL;
    currPtr = head;
    
    // 通过循环遍历链表，寻找插入点
    while (currPtr != NULL)
    {
	// 如果item < 当前结点数据，则插入点应在当前结点之前
	if (item < currPtr->data)
	      break;
	
      // currPtr前行，prevPtr跟随其后
        prevPtr = currPtr;
        currPtr = currPtr->NextNode();
    }   

    // 完成插入
    if (prevPtr == NULL)  //如果插入点在表头
        InsertFront(head,item);
    else
    {
	// 在prevPtr指向的结点之后插入新结点
        newNode = GetNode(item);
        prevPtr->InsertAfter(newNode);
    }
}

//清空链表--删除链表中的所有结点
template <class T>
void ClearList(Node<T> * &head)
{
    Node<T> *currPtr, *nextPtr;

    // 边遍历边删除结点
    currPtr = head;
    while(currPtr != NULL)
    {
	// 记录下一个结点的地址，删除当前结点
        nextPtr = currPtr->NextNode();
        delete currPtr;
        currPtr = nextPtr;  //使指针currPtr指向下一个结点
    }

    head = NULL;   //将头结点置为NULL，标志着链表为空
}

#endif  // NODE_LIBRARY
