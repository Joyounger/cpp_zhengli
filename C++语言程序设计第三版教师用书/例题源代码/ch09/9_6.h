//9_6.h
#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef NULL
const int NULL = 0;
#endif  // NULL

#include "9_5.h"

template <class T>
class LinkedList
{
   private:
   //数据成员：
     Node<T> *front, *rear;	// 表头和表尾指针
     Node<T> *prevPtr, *currPtr;   //记录表当前遍历位置的指针，由插入和删除操作更新
     int size;	// 表中的元素个数
     int position;	//当前元素在表中的位置序号。由函数Reset使用

   //函数成员：
     // 生成新结点，数据域为item，指针域为ptrNext
     Node<T> *GetNode(const T& item,Node<T> *ptrNext=NULL);

     //释放结点
     void FreeNode(Node<T> *p);
     
     // 将链表L 拷贝到当前表（假设当前表为空）。
     // 被拷贝构造函数、operator=调用
     void CopyList(const LinkedList<T>& L);
     
   public:
     LinkedList(void);	// 构造函数
     LinkedList(const LinkedList<T>& L);  //拷贝构造函数
     ~LinkedList(void);	// 析构函数
     LinkedList<T>& operator= (const LinkedList<T>& L); // 重载赋值运算符

     int ListSize(void) const;	//返回链表中元素个数（size）
     int ListEmpty(void) const;	//size等于0时返回TRUE,否则返回FALSE
     
    void Reset(int pos = 0);//将指针currPtr移动到序号为pos的结点，prevPtr相应移动
                            // position记录当前结点的序号
     void Next(void);	//使prevPtr和currPtr移动到下一个结点
     int EndOfList(void) const;	//currPtr等于NULL时返回TRUE,否则返回FALSE
     int CurrentPosition(void) const;	//返回数据成员position
     
     void InsertFront(const T& item);	//在表头插入结点
     void InsertRear(const T& item);	//在表尾添加结点
     void InsertAt(const T& item);	//在当前结点之前插入结点
     void InsertAfter(const T& item);	//在当前结点之后插入结点
     
     T DeleteFront(void);	//删除头结点
     void DeleteAt(void);	//删除当前结点

     T& Data(void);   // 返回对当前结点成员data的引用（使数据域可以被使用或修改）

     // 清空链表：释放所有结点的内存空间。被析构函数、operator= 调用
     void ClearList(void);
};

#endif  // LINKEDLIST_CLASS

