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
    	// ���ڴ�Ŷ��е��������
        LinkedList<T> queueList;
        
    public:
    	// ���캯��
        Queue(void);
        
        // ���д�ȡ���� 
        void QInsert(const T& elt);
        T QDelete(void);
        
        // ���з���
        T QFront(void);
        
        // ���м�ⷽ��
        int QLength(void) const;
        int QEmpty(void) const;
        void QClear(void);
};

// ���캯��
template <class T>
Queue<T>::Queue(void)
{}

// �������Ա����ListSize����������
template <class T>
int Queue<T>::QLength(void) const
{
    return queueList.ListSize();
}

// �������Ա����ListEmpty���Զ��пշ�
template <class T>
int Queue<T>::QEmpty(void) const
{
    return queueList.ListEmpty();
}

// �������Ա����ClearList ��ն���
template <class T>
void Queue<T>::QClear(void)
{
    queueList.ClearList();
}

// �������Ա����InsertRear�ڶ�β����һ��
template <class T>
void Queue<T>::QInsert(const T& elt)
{
    queueList.InsertRear(elt);
}

// �������Ա����DeleteFront�Ӷ���ɾ��һ��
template <class T>
T Queue<T>::QDelete(void)
{
	// ���Զ��пշ�,��������ֹ
    if (queueList.ListEmpty())
    {
        cerr << "Calling QDelete for an empty queue!" << endl;
        exit(1);
    }
    return queueList.DeleteFront();
}

// ���ض���Ԫ�ص���ֵ
template <class T>
T Queue<T>::QFront(void)
{
	// ���Զ��пշ�,��������ֹ
    if (queueList.ListEmpty())
    {
        cerr << "Calling QFront for an empty queue!" << endl;
        exit(1);
    }
    
    // �������ö�ͷ��������ֵ
    queueList.Reset();
    return queueList.Data();
}

#endif  // QUEUE_CLASS

