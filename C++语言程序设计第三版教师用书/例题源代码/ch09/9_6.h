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
   //���ݳ�Ա��
     Node<T> *front, *rear;	// ��ͷ�ͱ�βָ��
     Node<T> *prevPtr, *currPtr;   //��¼��ǰ����λ�õ�ָ�룬�ɲ����ɾ����������
     int size;	// ���е�Ԫ�ظ���
     int position;	//��ǰԪ���ڱ��е�λ����š��ɺ���Resetʹ��

   //������Ա��
     // �����½�㣬������Ϊitem��ָ����ΪptrNext
     Node<T> *GetNode(const T& item,Node<T> *ptrNext=NULL);

     //�ͷŽ��
     void FreeNode(Node<T> *p);
     
     // ������L ��������ǰ�����赱ǰ��Ϊ�գ���
     // ���������캯����operator=����
     void CopyList(const LinkedList<T>& L);
     
   public:
     LinkedList(void);	// ���캯��
     LinkedList(const LinkedList<T>& L);  //�������캯��
     ~LinkedList(void);	// ��������
     LinkedList<T>& operator= (const LinkedList<T>& L); // ���ظ�ֵ�����

     int ListSize(void) const;	//����������Ԫ�ظ�����size��
     int ListEmpty(void) const;	//size����0ʱ����TRUE,���򷵻�FALSE
     
    void Reset(int pos = 0);//��ָ��currPtr�ƶ������Ϊpos�Ľ�㣬prevPtr��Ӧ�ƶ�
                            // position��¼��ǰ�������
     void Next(void);	//ʹprevPtr��currPtr�ƶ�����һ�����
     int EndOfList(void) const;	//currPtr����NULLʱ����TRUE,���򷵻�FALSE
     int CurrentPosition(void) const;	//�������ݳ�Աposition
     
     void InsertFront(const T& item);	//�ڱ�ͷ������
     void InsertRear(const T& item);	//�ڱ�β��ӽ��
     void InsertAt(const T& item);	//�ڵ�ǰ���֮ǰ������
     void InsertAfter(const T& item);	//�ڵ�ǰ���֮�������
     
     T DeleteFront(void);	//ɾ��ͷ���
     void DeleteAt(void);	//ɾ����ǰ���

     T& Data(void);   // ���ضԵ�ǰ����Աdata�����ã�ʹ��������Ա�ʹ�û��޸ģ�

     // ��������ͷ����н����ڴ�ռ䡣������������operator= ����
     void ClearList(void);
};

#endif  // LINKEDLIST_CLASS

