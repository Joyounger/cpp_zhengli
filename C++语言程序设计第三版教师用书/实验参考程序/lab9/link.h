//link.h
#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef NULL
const int NULL = 0;
#endif  // NULL

#include "node.h"

template <class T>
class LinkedList
{
   private:
      //数据成员：
      // 表头和表尾指针
      Node<T> *front, *rear;
      
      // 记录表当前遍历位置的指针，由插入和删除操作更新
      Node<T> *prevPtr, *currPtr;
      
      // 表中的元素个数
      int size;
      
      // 当前元素在表中的位置序号。由函数Reset使用
      int position;

      //函数成员：
      // 生成新节点，数据域为item，指针域为ptrNext
      Node<T> *GetNode(const T& item,Node<T> *ptrNext=NULL);

      //释放节点
      void FreeNode(Node<T> *p);
      
      // 将链表L 拷贝到当前表（假设当前表为空）。
      // 被拷贝构造函数、operator=调用
      void CopyList(const LinkedList<T>& L);
      
   public:
      // 构造函数
      LinkedList(void);
      LinkedList(const LinkedList<T>& L);  //拷贝构造函数
      
      // 析构函数
      ~LinkedList(void);
      
      // 重载赋值运算符
      LinkedList<T>& operator= (const LinkedList<T>& L);
      
      // 检查表的状态
      int ListSize(void) const;   //返回链表中元素个数（size）
      int ListEmpty(void) const;  //size等于0时返回TRUE,否则返回FALSE
      
      // 遍历表的函数
      void Reset(int pos = 0);
              //将指针currPtr移动到序号为pos的节点，prevPtr相应移动
              // position记录当前节点的序号
      void Next(void);  //使prevPtr和currPtr移动到下一个节点
      int EndOfList(void) const;
                        // currPtr等于NULL时返回TRUE,否则返回FALSE 
      int CurrentPosition(void) const;  //返回数据成员position
      
      // 插入节点的函数：插入一个数据域为item的节点
      void InsertFront(const T& item);  //在表头插入
      void InsertRear(const T& item);  //在表尾添加
      void InsertAt(const T& item);  //在当前节点之前插入
      void InsertAfter(const T& item);  //在当前节点之后插入
      
      // 删除节点，释放节点空间，更新prevPtr、currPtr和size
      T DeleteFront(void);  //删除头节点
      void DeleteAt(void);  //删除当前节点

      // 返回对当前节点成员data的引用（使数据域可以被使用或修改）
      T& Data(void);
      
      // 清空链表：释放所有节点的内存空间。被析构函数、operator= 调用
      void ClearList(void);
};

template <class T>
Node<T> *LinkedList<T>::GetNode(const T& item, 
                      Node<T>* ptrNext)
{
   Node<T> *p;

   p = new Node<T>(item,ptrNext);
   if (p == NULL)
   {
      cout << "Memory allocation failure!\n";
      exit(1);
   }
   return p;
}

template <class T>
void LinkedList<T>::FreeNode(Node<T> *p)
{
   delete p;
}

//将L复制到当前链表
template <class T>
void LinkedList<T>::CopyList(const LinkedList<T>& L)
{
    //P用来遍历L
   Node<T> *p = L.front;
   int pos;

   //将L中的每一个元素插入到当前链表最后
   while (p != NULL)
   {
      InsertRear(p->data);
      p = p->NextNode();
   }
   
   //如果链表空,返回
   if (position == -1)
      return;

   //在新链表中重新设置prevPtr和currPtr
   prevPtr = NULL;
   currPtr = front;
   for (pos = 0; pos != position; pos++)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
   }
}

//建立一个新链表,即:将有关指针设置为空,size为0,position为-1
template <class T>
LinkedList<T>::LinkedList(void): front(NULL), rear(NULL),
      prevPtr(NULL),currPtr(NULL), size(0), position(-1)
{}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)
{
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
   CopyList(L);
}

template <class T>
void LinkedList<T>::ClearList(void)
{
   Node<T> *currPosition, *nextPosition;

   currPosition = front;
   while(currPosition != NULL)
   {
	  //取得下一结点的地址并删除当前结点
      nextPosition = currPosition->NextNode();
      FreeNode(currPosition);
      currPosition = nextPosition;  // 移动到下一结点
   }
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
}

template <class T>
LinkedList<T>::~LinkedList(void)
{
   ClearList();
}

template <class T>
LinkedList<T>& LinkedList<T>::operator= 
               (const LinkedList<T>& L)
{
   if (this == &L)      // 不能将链表赋值给它自身
      return *this;

   ClearList();
   CopyList(L);
   return *this;
}

template <class T>
int LinkedList<T>::ListSize(void) const
{
   return size;
}
                      
template <class T>
int LinkedList<T>::ListEmpty(void) const
{
   return size == 0;
}

//将prevPtr和currPtr向前移动一个结点
template <class T>
void LinkedList<T>::Next(void)
{
   if (currPtr != NULL)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
      position++;
   }
}

// 如果已经遍历完链表则返回True
template <class T>
int LinkedList<T>::EndOfList(void) const
{
   return currPtr == NULL;
}

// 返回当前结点的位置
template <class T>
int LinkedList<T>::CurrentPosition(void) const
{
   return position;
}

//将链表当前位置设置为pos
template <class T>
void LinkedList<T>::Reset(int pos)
{
   int startPos;
   
   // 如果链表为空，返回
   if (front == NULL)
      return;
      
   // 如果位置不合法，中止程序
   if (pos < 0 || pos > size-1)
   {
      cerr << "Reset: Invalid list position: " << pos 
           << endl;
      return;
   }
   
   // 设置与遍历链表有关的成员
   if(pos == 0)
   {
      // 将指针重新设置到表头
      prevPtr = NULL;
      currPtr = front;
      position = 0;
   }
   else
   // 重新设置 currPtr, prevPtr, 和 position
   {
       currPtr = front->NextNode();
       prevPtr = front;
       startPos = 1;
	   //移动指针直到 position == pos 
	   for(position=startPos; position != pos; position++)
	   {
	       // 向前移动遍历指针
	       prevPtr = currPtr;
	       currPtr = currPtr->NextNode();
      }
   }
}

//返回一个当前结点数值的引用
template <class T>
T& LinkedList<T>::Data(void)
{
   // 如果链表为空或已经完成遍历则出错
   if (size == 0 || currPtr == NULL)
   {
      cerr << "Data: invalid reference!" << endl;
      exit(1);
   }
   return currPtr->data;
}

// 将item插入在表头
template <class T>
void LinkedList<T>::InsertFront(const T& item)
{
   // 如果链表不空则调用Reset 
   if (front != NULL)
      Reset();
   InsertAt(item);        // 在表头插入
}

// 在表尾插入
template <class T>
void LinkedList<T>::InsertRear(const T& item)
{
   Node<T> *newNode;
   
   prevPtr = rear;
   newNode = GetNode(item);	// 创建新结点
   if (rear == NULL)				// 如果表空则插入在表头
      front = rear = newNode;
   else
   {
      rear->InsertAfter(newNode);
      rear = newNode;
   }
   currPtr = rear;
   position = size;
   size++;
}

// 将item插入在链表当前位置
template <class T>
void LinkedList<T>::InsertAt(const T& item)
{
   Node<T> *newNode;

   // 两种情况: 插入在链表头或链表之中
   if (prevPtr == NULL)
   {
      // 插入在链表头，包括将结点插入到空表中
      newNode = GetNode(item,front);
      front = newNode;
   }
   else
   {
      // 插入到链表之中. 将结点置于prevPtr之后
      newNode = GetNode(item);
      prevPtr->InsertAfter(newNode);
   }
   
   // 如果prevPtr == rear, 说明正在向空表中插入， 
   // 或者是插入到非空表的表尾；更新rear 和 position
   if (prevPtr == rear)
   {
      rear = newNode;
      position = size;
   }

   //更新currPtr并且使size增值 
   currPtr = newNode;
   size++;            
}

// 将item 插入到链表当前位置之后
template <class T>
void LinkedList<T>::InsertAfter(const T& item)
{
   Node<T> *p;

   p = GetNode(item);
   if (front == NULL)       // 向空表中插入
   {
      front = currPtr = rear = p;
      position = 0;
   }
   else
   {
      // 插入到最后一个结点之后
      if (currPtr == NULL)
        currPtr = prevPtr;
      currPtr->InsertAfter(p);
      if (currPtr == rear)
      {
        rear = p;
        position = size;
      }
      else
      	position++;
      prevPtr = currPtr;
      currPtr = p;
   }
   size++;              // 使链表长度增值
}

// 删除表头结点
template <class T>
T LinkedList<T>::DeleteFront(void)
{
   T item;

   Reset();
   if (front == NULL)
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   item = currPtr->data;
   DeleteAt();
   return item;
}

// 删除链表当前位置的结点     
template <class T>
void LinkedList<T>::DeleteAt(void)
{
   Node<T> *p;

   // 如果表空或达到表尾则出错
   if (currPtr == NULL)
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   
   // 删除将发生在表头或链表之中
   if (prevPtr == NULL)
   {
      // 保存头结点地址并将其从链表中分离。
      p = front;
      front = front->NextNode();
   }
   else
      // 分离prevPtr之后的一个内部结点. 保存其地址
      p = prevPtr->DeleteAfter();
      
   // 如果表尾结点被删除, 则新的表尾是prevPtr 并且position自减；
   // 否则position不变
   if (p == rear)
   {
      rear = prevPtr;
      position--;
   }
        
   // 使currPtr越过被删除的结点
   currPtr = p->NextNode();
   
   // 释放结点，并使链表长度自减
   FreeNode(p);
   size--;
}

#endif  // LINKEDLIST_CLASS

