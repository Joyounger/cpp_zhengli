//queue.h
#ifndef QUEUE_CLASS
#define QUEUE_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

#include "link.h"

template <class T>
class Queue
{
    private:
    	// 用于存放队列的链表对象
        LinkedList<T> queueList;
        
    public:
    	// 构造函数
        Queue(void);
        
        // 队列存取方法 
        void QInsert(const T& elt);
        T QDelete(void);
        
        // 队列访问
        T QFront(void);
        
        // 队列监测方法
        int QLength(void) const;
        int QEmpty(void) const;
        void QClear(void);
};

// 构造函数
template <class T>
Queue<T>::Queue(void)
{}

// 链表类成员函数ListSize返回链表长度
template <class T>
int Queue<T>::QLength(void) const
{
    return queueList.ListSize();
}

// 链表类成员函数ListEmpty测试队列空否
template <class T>
int Queue<T>::QEmpty(void) const
{
    return queueList.ListEmpty();
}

// 链表类成员函数ClearList 清空队列
template <class T>
void Queue<T>::QClear(void)
{
    queueList.ClearList();
}

// 链表类成员函数InsertRear在队尾插入一项
template <class T>
void Queue<T>::QInsert(const T& elt)
{
    queueList.InsertRear(elt);
}

// 链表类成员函数DeleteFront从队首删除一项
template <class T>
T Queue<T>::QDelete(void)
{
	// 测试队列空否,若空则中止
    if (queueList.ListEmpty())
    {
        cerr << "Calling QDelete for an empty queue!" << endl;
        exit(1);
    }
    return queueList.DeleteFront();
}

// 返回队首元素的数值
template <class T>
T Queue<T>::QFront(void)
{
	// 测试队列空否,若空则中止
    if (queueList.ListEmpty())
    {
        cerr << "Calling QFront for an empty queue!" << endl;
        exit(1);
    }
    
    // 重新设置队头并返回其值
    queueList.Reset();
    return queueList.Data();
}

#endif  // QUEUE_CLASS

