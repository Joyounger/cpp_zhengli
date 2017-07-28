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
      //���ݳ�Ա��
      // ��ͷ�ͱ�βָ��
      Node<T> *front, *rear;
      
      // ��¼��ǰ����λ�õ�ָ�룬�ɲ����ɾ����������
      Node<T> *prevPtr, *currPtr;
      
      // ���е�Ԫ�ظ���
      int size;
      
      // ��ǰԪ���ڱ��е�λ����š��ɺ���Resetʹ��
      int position;

      //������Ա��
      // �����½ڵ㣬������Ϊitem��ָ����ΪptrNext
      Node<T> *GetNode(const T& item,Node<T> *ptrNext=NULL);

      //�ͷŽڵ�
      void FreeNode(Node<T> *p);
      
      // ������L ��������ǰ�����赱ǰ��Ϊ�գ���
      // ���������캯����operator=����
      void CopyList(const LinkedList<T>& L);
      
   public:
      // ���캯��
      LinkedList(void);
      LinkedList(const LinkedList<T>& L);  //�������캯��
      
      // ��������
      ~LinkedList(void);
      
      // ���ظ�ֵ�����
      LinkedList<T>& operator= (const LinkedList<T>& L);
      
      // �����״̬
      int ListSize(void) const;   //����������Ԫ�ظ�����size��
      int ListEmpty(void) const;  //size����0ʱ����TRUE,���򷵻�FALSE
      
      // ������ĺ���
      void Reset(int pos = 0);
              //��ָ��currPtr�ƶ������Ϊpos�Ľڵ㣬prevPtr��Ӧ�ƶ�
              // position��¼��ǰ�ڵ�����
      void Next(void);  //ʹprevPtr��currPtr�ƶ�����һ���ڵ�
      int EndOfList(void) const;
                        // currPtr����NULLʱ����TRUE,���򷵻�FALSE 
      int CurrentPosition(void) const;  //�������ݳ�Աposition
      
      // ����ڵ�ĺ���������һ��������Ϊitem�Ľڵ�
      void InsertFront(const T& item);  //�ڱ�ͷ����
      void InsertRear(const T& item);  //�ڱ�β���
      void InsertAt(const T& item);  //�ڵ�ǰ�ڵ�֮ǰ����
      void InsertAfter(const T& item);  //�ڵ�ǰ�ڵ�֮�����
      
      // ɾ���ڵ㣬�ͷŽڵ�ռ䣬����prevPtr��currPtr��size
      T DeleteFront(void);  //ɾ��ͷ�ڵ�
      void DeleteAt(void);  //ɾ����ǰ�ڵ�

      // ���ضԵ�ǰ�ڵ��Աdata�����ã�ʹ��������Ա�ʹ�û��޸ģ�
      T& Data(void);
      
      // ��������ͷ����нڵ���ڴ�ռ䡣������������operator= ����
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

//��L���Ƶ���ǰ����
template <class T>
void LinkedList<T>::CopyList(const LinkedList<T>& L)
{
    //P��������L
   Node<T> *p = L.front;
   int pos;

   //��L�е�ÿһ��Ԫ�ز��뵽��ǰ�������
   while (p != NULL)
   {
      InsertRear(p->data);
      p = p->NextNode();
   }
   
   //��������,����
   if (position == -1)
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

//����һ��������,��:���й�ָ������Ϊ��,sizeΪ0,positionΪ-1
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
	  //ȡ����һ���ĵ�ַ��ɾ����ǰ���
      nextPosition = currPosition->NextNode();
      FreeNode(currPosition);
      currPosition = nextPosition;  // �ƶ�����һ���
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
   if (this == &L)      // ���ܽ�����ֵ��������
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

//��prevPtr��currPtr��ǰ�ƶ�һ�����
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

// ����Ѿ������������򷵻�True
template <class T>
int LinkedList<T>::EndOfList(void) const
{
   return currPtr == NULL;
}

// ���ص�ǰ����λ��
template <class T>
int LinkedList<T>::CurrentPosition(void) const
{
   return position;
}

//������ǰλ������Ϊpos
template <class T>
void LinkedList<T>::Reset(int pos)
{
   int startPos;
   
   // �������Ϊ�գ�����
   if (front == NULL)
      return;
      
   // ���λ�ò��Ϸ�����ֹ����
   if (pos < 0 || pos > size-1)
   {
      cerr << "Reset: Invalid list position: " << pos 
           << endl;
      return;
   }
   
   // ��������������йصĳ�Ա
   if(pos == 0)
   {
      // ��ָ���������õ���ͷ
      prevPtr = NULL;
      currPtr = front;
      position = 0;
   }
   else
   // �������� currPtr, prevPtr, �� position
   {
       currPtr = front->NextNode();
       prevPtr = front;
       startPos = 1;
	   //�ƶ�ָ��ֱ�� position == pos 
	   for(position=startPos; position != pos; position++)
	   {
	       // ��ǰ�ƶ�����ָ��
	       prevPtr = currPtr;
	       currPtr = currPtr->NextNode();
      }
   }
}

//����һ����ǰ�����ֵ������
template <class T>
T& LinkedList<T>::Data(void)
{
   // �������Ϊ�ջ��Ѿ���ɱ��������
   if (size == 0 || currPtr == NULL)
   {
      cerr << "Data: invalid reference!" << endl;
      exit(1);
   }
   return currPtr->data;
}

// ��item�����ڱ�ͷ
template <class T>
void LinkedList<T>::InsertFront(const T& item)
{
   // ��������������Reset 
   if (front != NULL)
      Reset();
   InsertAt(item);        // �ڱ�ͷ����
}

// �ڱ�β����
template <class T>
void LinkedList<T>::InsertRear(const T& item)
{
   Node<T> *newNode;
   
   prevPtr = rear;
   newNode = GetNode(item);	// �����½��
   if (rear == NULL)				// ������������ڱ�ͷ
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

// ��item����������ǰλ��
template <class T>
void LinkedList<T>::InsertAt(const T& item)
{
   Node<T> *newNode;

   // �������: ����������ͷ������֮��
   if (prevPtr == NULL)
   {
      // ����������ͷ�������������뵽�ձ���
      newNode = GetNode(item,front);
      front = newNode;
   }
   else
   {
      // ���뵽����֮��. ���������prevPtr֮��
      newNode = GetNode(item);
      prevPtr->InsertAfter(newNode);
   }
   
   // ���prevPtr == rear, ˵��������ձ��в��룬 
   // �����ǲ��뵽�ǿձ�ı�β������rear �� position
   if (prevPtr == rear)
   {
      rear = newNode;
      position = size;
   }

   //����currPtr����ʹsize��ֵ 
   currPtr = newNode;
   size++;            
}

// ��item ���뵽����ǰλ��֮��
template <class T>
void LinkedList<T>::InsertAfter(const T& item)
{
   Node<T> *p;

   p = GetNode(item);
   if (front == NULL)       // ��ձ��в���
   {
      front = currPtr = rear = p;
      position = 0;
   }
   else
   {
      // ���뵽���һ�����֮��
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

// ɾ����ͷ���
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

// ɾ������ǰλ�õĽ��     
template <class T>
void LinkedList<T>::DeleteAt(void)
{
   Node<T> *p;

   // �����ջ�ﵽ��β�����
   if (currPtr == NULL)
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   
   // ɾ���������ڱ�ͷ������֮��
   if (prevPtr == NULL)
   {
      // ����ͷ����ַ������������з��롣
      p = front;
      front = front->NextNode();
   }
   else
      // ����prevPtr֮���һ���ڲ����. �������ַ
      p = prevPtr->DeleteAfter();
      
   // �����β��㱻ɾ��, ���µı�β��prevPtr ����position�Լ���
   // ����position����
   if (p == rear)
   {
      rear = prevPtr;
      position--;
   }
        
   // ʹcurrPtrԽ����ɾ���Ľ��
   currPtr = p->NextNode();
   
   // �ͷŽ�㣬��ʹ�������Լ�
   FreeNode(p);
   size--;
}

#endif  // LINKEDLIST_CLASS

