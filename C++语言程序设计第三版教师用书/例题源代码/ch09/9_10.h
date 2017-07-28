///9_10.h
#ifndef QUEUE_CLASS
#define QUEUE_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;

const int MaxQSize = 50;	//队列元素最大个数

//类的声明
template <class T>
class Queue
{
    private:
        int front, rear, count;	//队头指针、队尾指针、元素个数
        T qlist[MaxQSize];	//队列元素数组

    public:
        Queue (void);          //构造函数，初始化队头指针、队尾指针、元素个数
        void QInsert(const T& item);	//新元素入队
        T QDelete(void);	//元素出队
        void ClearQueue(void);	//清空队列
        
        T QFront(void) const;	//访问队首元素
        
        // 测试队列状态
        int QLength(void) const;	//求队列长度（元素个数）
        int QEmpty(void) const;	//判队队列空否
        int QFull(void) const;	//判断队列满否
};

// 构造函数，初始化队头指针、队尾指针、元素个数
template <class T>
Queue<T>::Queue (void) : front(0), rear(0), count(0)
{}

template <class T>
void Queue<T>::QInsert (const T& item)	//向队尾插入元素（入队）
{
    if (count == MaxQSize)	// 如果队满，中止程序
    {
        std::cerr << "Queue overflow!" << endl;
        exit(1);
    }
    count++;	//元素个数增1
    qlist[rear] = item;	//向队尾插入元素
    rear = (rear+1) % MaxQSize;	//队尾指针增1，用取余运算实现循环队列
}

template <class T>
T Queue<T>::QDelete(void)	//删除队首元素，并返回该元素的值（出队）
{
    T temp;
    if (count == 0)	// 如果队空，中止程序
    {
        std::cerr << "Deleting from an empty queue!" << endl;
        exit(1);
    }
    temp = qlist[front];	// 记录队首元素值
    count--;	// 元素个数自减
    front = (front+1) % MaxQSize;	//队首指针增1。取余以实现循环队列
    return temp;	//返回首元素值
}

template <class T>
T Queue<T>::QFront(void) const	// 访问队列首元素（返回其值）
{    return qlist[front];  }

template <class T>
int Queue<T>::QLength(void) const	// 返回队列元素个数
{    return count;  }

template <class T>
int Queue<T>::QEmpty(void) const	// 测试队空否
{    return count == 0;  }	//返回逻辑值 count == 0

template <class T>
int Queue<T>::QFull(void) const	// 测试队满否
{    return count == MaxQSize;  }	// 返回逻辑值 count == MaxQSize

template <class T>
void Queue<T>::ClearQueue(void)	// 清空队列
{
    count = 0;
    front = 0; 
    rear = 0; 
}
    
#endif  // QUEUE_CLASS
