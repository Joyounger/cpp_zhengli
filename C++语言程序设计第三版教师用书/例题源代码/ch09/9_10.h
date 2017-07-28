///9_10.h
#ifndef QUEUE_CLASS
#define QUEUE_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;

const int MaxQSize = 50;	//����Ԫ��������

//�������
template <class T>
class Queue
{
    private:
        int front, rear, count;	//��ͷָ�롢��βָ�롢Ԫ�ظ���
        T qlist[MaxQSize];	//����Ԫ������

    public:
        Queue (void);          //���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
        void QInsert(const T& item);	//��Ԫ�����
        T QDelete(void);	//Ԫ�س���
        void ClearQueue(void);	//��ն���
        
        T QFront(void) const;	//���ʶ���Ԫ��
        
        // ���Զ���״̬
        int QLength(void) const;	//����г��ȣ�Ԫ�ظ�����
        int QEmpty(void) const;	//�жӶ��пշ�
        int QFull(void) const;	//�ж϶�������
};

// ���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
template <class T>
Queue<T>::Queue (void) : front(0), rear(0), count(0)
{}

template <class T>
void Queue<T>::QInsert (const T& item)	//���β����Ԫ�أ���ӣ�
{
    if (count == MaxQSize)	// �����������ֹ����
    {
        std::cerr << "Queue overflow!" << endl;
        exit(1);
    }
    count++;	//Ԫ�ظ�����1
    qlist[rear] = item;	//���β����Ԫ��
    rear = (rear+1) % MaxQSize;	//��βָ����1����ȡ������ʵ��ѭ������
}

template <class T>
T Queue<T>::QDelete(void)	//ɾ������Ԫ�أ������ظ�Ԫ�ص�ֵ�����ӣ�
{
    T temp;
    if (count == 0)	// ����ӿգ���ֹ����
    {
        std::cerr << "Deleting from an empty queue!" << endl;
        exit(1);
    }
    temp = qlist[front];	// ��¼����Ԫ��ֵ
    count--;	// Ԫ�ظ����Լ�
    front = (front+1) % MaxQSize;	//����ָ����1��ȡ����ʵ��ѭ������
    return temp;	//������Ԫ��ֵ
}

template <class T>
T Queue<T>::QFront(void) const	// ���ʶ�����Ԫ�أ�������ֵ��
{    return qlist[front];  }

template <class T>
int Queue<T>::QLength(void) const	// ���ض���Ԫ�ظ���
{    return count;  }

template <class T>
int Queue<T>::QEmpty(void) const	// ���Զӿշ�
{    return count == 0;  }	//�����߼�ֵ count == 0

template <class T>
int Queue<T>::QFull(void) const	// ���Զ�����
{    return count == MaxQSize;  }	// �����߼�ֵ count == MaxQSize

template <class T>
void Queue<T>::ClearQueue(void)	// ��ն���
{
    count = 0;
    front = 0; 
    rear = 0; 
}
    
#endif  // QUEUE_CLASS
