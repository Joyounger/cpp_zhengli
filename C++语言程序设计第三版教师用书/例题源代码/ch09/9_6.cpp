//9_6.cpp
#include <iostream>
#include <cstdlib>
#include "9_6.h"
using namespace std;
template <class T>
Node<T> *LinkedList<T>::GetNode(const T& item, Node<T>* ptrNext)	//�����½��
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
void LinkedList<T>::FreeNode(Node<T> *p) //�ͷŽ��
{
   delete p;
}

template <class T>
void LinkedList<T>::CopyList(const LinkedList<T>& L) //�����ƺ���
{
   Node<T> *p = L.front;	//P��������L 
   int pos;
   while (p != NULL)	//��L�е�ÿһ��Ԫ�ز��뵽��ǰ�������
   {
      InsertRear(p->data);
      p = p->NextNode();
   }
   if (position == -1)	//��������,����
      return;
   //������������������prevPtr��currPtr
   prevPtr = NULL;
   currPtr = front;
   for (pos = 0; pos != position; pos++)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
   }
}

template <class T>  //����һ�����������й�ָ������Ϊ�գ�sizeΪ0��positionΪ-1
LinkedList<T>::LinkedList(void): front(NULL), rear(NULL),
      prevPtr(NULL),currPtr(NULL), size(0), position(-1)
{}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)  //�������캯��
{
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
   CopyList(L);
}

template <class T>
void LinkedList<T>::ClearList(void)	//�������
{
   Node<T> *currPosition, *nextPosition;
   currPosition = front;
   while(currPosition != NULL)
   {
      nextPosition = currPosition->NextNode(); //ȡ����һ���ĵ�ַ
      FreeNode(currPosition);	//ɾ����ǰ���
      currPosition = nextPosition;	//��ǰָ���ƶ�����һ���
   }
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
}

template <class T>
LinkedList<T>::~LinkedList(void)	//��������
{   ClearList();  }

template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& L)//����"="
{
   if (this == &L)	// ���ܽ�����ֵ��������
      return *this;
   ClearList();
   CopyList(L);
   return *this;
}

template <class T>
int LinkedList<T>::ListSize(void) const	//���������С�ĺ���
{   return size;  }

template <class T>
int LinkedList<T>::ListEmpty(void) const	//�ж�����Ϊ�շ�
{   return size == 0;  }

template <class T>
void LinkedList<T>::Next(void)	//��prevPtr��currPtr��ǰ�ƶ�һ�����
{
   if (currPtr != NULL)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
      position++;
   }
}

template <class T>
int LinkedList<T>::EndOfList(void) const	// �ж��Ƿ��Ѵ��β
{   return currPtr == NULL;  }


template <class T>
int LinkedList<T>::CurrentPosition(void) const  // ���ص�ǰ����λ��
{   return position;  }


template <class T>
void LinkedList<T>::Reset(int pos)	//������ǰλ������Ϊpos 
{
   int startPos;
   if (front == NULL)	// �������Ϊ�գ�����
      return;
   if (pos < 0 || pos > size-1)	// ���ָ��λ�ò��Ϸ�����ֹ����
   {
      cerr << "Reset: Invalid list position: " << pos << endl;
      return;
   }
   // ��������������йصĳ�Ա
   if(pos == 0)	// ���posΪ0����ָ���������õ���ͷ
   {
      prevPtr = NULL;
      currPtr = front;
      position = 0;
   }
   else	// �������� currPtr, prevPtr, �� position 
   {
       currPtr = front->NextNode();
       prevPtr = front;
       startPos = 1;
	   for(position=startPos; position != pos; position++)
	   {
	       prevPtr = currPtr;
	       currPtr = currPtr->NextNode();
      }
   }
}

template <class T>
T& LinkedList<T>::Data(void)	//����һ����ǰ�����ֵ������
{
   if (size == 0 || currPtr == NULL)	// �������Ϊ�ջ��Ѿ���ɱ��������
   {
      cerr << "Data: invalid reference!" << endl;
      exit(1);
   }
   return currPtr->data;
}

template <class T>
void LinkedList<T>::InsertFront(const T& item)   // ��item�����ڱ�ͷ
{
   if (front != NULL)	// ��������������Reset 
      Reset();
   InsertAt(item);	// �ڱ�ͷ����
}


template <class T>
void LinkedList<T>::InsertRear(const T& item)   // �ڱ�β������
{
   Node<T> *newNode;
   prevPtr = rear;
   newNode = GetNode(item);	// �����½��
   if (rear == NULL)	// ������������ڱ�ͷ
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


template <class T>
void LinkedList<T>::InsertAt(const T& item)	// ��item����������ǰλ��
{
   Node<T> *newNode;
   if (prevPtr == NULL)	// ����������ͷ�������������뵽�ձ���
   {
      newNode = GetNode(item,front);
      front = newNode;
   }
   else	// ���뵽����֮��. ���������prevPtr֮��
   {
      newNode = GetNode(item);
      prevPtr->InsertAfter(newNode);
   }
   if (prevPtr == rear)	//������ձ��в��룬�����ǲ��뵽�ǿձ�ı�β
   {
      rear = newNode;	//����rear 
      position = size;	//����position 
   }
   currPtr = newNode;	//����currPtr
   size++;	//ʹsize��ֵ
}


template <class T>
void LinkedList<T>::InsertAfter(const T& item)  // ��item ���뵽����ǰλ��֮��
{
   Node<T> *p;
   p = GetNode(item);
   if (front == NULL)	 // ��ձ��в���
   {
      front = currPtr = rear = p;
      position = 0;
   }
   else	// ���뵽���һ�����֮��
   {
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
   size++;              // ʹ��������ֵ
}


template <class T>
T LinkedList<T>::DeleteFront(void)	// ɾ����ͷ���
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

     
template <class T>
void LinkedList<T>::DeleteAt(void)	// ɾ������ǰλ�õĽ��
{
   Node<T> *p;
   if (currPtr == NULL)	// �����ջ�ﵽ��β�����
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   if (prevPtr == NULL)	// ɾ���������ڱ�ͷ������֮��
   {
      p = front;	// ����ͷ����ַ
      front = front->NextNode();	//����������з���
   }
   else	//����prevPtr֮���һ���ڲ���㣬�������ַ
      p = prevPtr->DeleteAfter();

   if (p == rear)	// �����β��㱻ɾ��
   {
      rear = prevPtr;	//�µı�β��prevPtr 
      position--;	//position�Լ�
   }
   currPtr = p->NextNode();	// ʹcurrPtrԽ����ɾ���Ľ��
   FreeNode(p);	// �ͷŽ�㣬��
   size--;	//ʹ�������Լ�
}

