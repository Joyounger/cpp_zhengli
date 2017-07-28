//Node.h
#ifndef NODE_LIBRARY
#define NODE_LIBRARY

#include <iostream>
#include <cstdlib>
#include "9_5.h"
using namespace std;

// ���ɽ�㣺����һ����㣬���ݳ�ԱֵΪitem��ָ���̽���ָ��ֵΪnextPtr
template <class T>
Node<T> *GetNode(const T& item, Node<T> *nextPtr = NULL)
{
    Node<T>  *newNode;

    // Ϊ�½������ڴ�ռ䣬Ȼ��item��NextPtr���ݸ����캯��
    newNode = new Node<T>(item, nextPtr);
    if (newNode == NULL)  //��������ڴ�ʧ�ܣ�������ֹ
    {
        cerr << "Memory allocation failure!" << endl;
        exit(1);
    }
    return newNode;
}

enum AppendNewline {noNewline,addNewline};

// �������
template <class T>
void PrintList(Node<T> *head, AppendNewline addnl = noNewline)
{
    // currPtr��ʼָ���ͷ��㣬���ڱ�������
    Node<T> *currPtr = head;

    // ���������ݣ�ֱ���������
    while(currPtr != NULL)
    {
        // ������б�־addl == addNewline����������з�
        if(addnl == addNewline)
            cout << currPtr->data << endl;
        else
            cout << currPtr->data << "  ";
           
        // ʹcurrPtrָ����һ�����
        currPtr = currPtr->NextNode();
    }
}

//���ҽ��
//��ָ��head��ָ��������в������������item�Ľ��
//�ҵ��򷵻�TRUE����ǰ�����ĵ�ַ�����򷵻�FALSE
template <class T>
int Find(Node<T> *head, T& item, Node<T>* &prevPtr)
{
	Node<T> *currPtr = head;   //�ӵ�һ����㿪ʼ����

	prevPtr = NULL;
	
	// ͨ��ѭ����������ֱ����β
	while(currPtr != NULL)
	{
	      //��item�����������Ƚϣ������ȣ��򷵻أ��������������һ�����
	      if (currPtr->data == item)
	           return 1;
	      prevPtr = currPtr;   //��¼�µ�ǰ���ĵ�ַ
	      currPtr = currPtr->NextNode();
	}
	return 0;  //�Ҳ���ʱ
}

//�ڱ�ͷ������
template <class T>
void InsertFront(Node<T>* & head, T item)
{
    // �����½�㣬ʹ��ָ����ָ��ԭ����ͷ���head��Ȼ�����head
    head = GetNode(item,head);
}

//�ڱ�β��ӽ��
template <class T>
void InsertRear(Node<T>* & head, const T& item)
{
    Node<T>  *newNode, *currPtr = head;

	// �������Ϊ�գ�������ڱ�ͷ
    if (currPtr == NULL)
        InsertFront(head,item);
    else
    {
	// Ѱ��ָ����ΪNULL�Ľ��
      while(currPtr->NextNode() != NULL)
          currPtr = currPtr->NextNode();
   // �����½�㲢�����ڱ�β(��currPtr֮��)
      newNode = GetNode(item);
      currPtr->InsertAfter(newNode);
    }
}               

// ɾ������ĵ�һ�����
template <class T>
void DeleteFront(Node<T>* & head)
{
    Node<T> *p = head;   //ȡ�ý���ɾ���Ľ��ĵ�ַ

    if (head != NULL)    // ȷ��������
    {
        head = head->NextNode();    // ����ͷָ��head����ڶ������
        delete p;   //ɾ��ԭ��һ�����
    }
}

// ɾ�������е�һ�����������key�Ľ��
template <class T>
void Delete (Node<T>* & head, T key)
{
   // currPtr���ڱ�������prevPtr�������
   Node<T>  *currPtr = head, *prevPtr = NULL; 

   // �������Ϊ�գ��򷵻�
   if (currPtr == NULL)
      return;
      
   //ͨ��ѭ����������ֱ���ҵ�������Ϊkey�Ľ�㣬��ﵽ��β
   while (currPtr != NULL && currPtr->data != key)
   {
      // currPtrǰ�У�prevPtr�������
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
   }

   //�� currPtr != NULL����currPtrָ��Ľ��������Ϊkey
   if (currPtr != NULL)
   {
      if(prevPtr == NULL)  //�ҵ����������һ�����
         head = head->NextNode();
      else
         // ����ҵ����ǵڶ����Ժ�Ľ�㣬����ǰ�����ĳ�Ա����ɾ��֮
         prevPtr->DeleteAfter();

      delete currPtr;   //�ͷű�ɾ���Ľ����ռ���ڴ�ռ�
   }
}

// �����������в���һ�����
template <class T>
void InsertOrder(Node<T>* & head, T item)
{
    // currPtr���ڱ�������prevPtr�������
    Node<T> *currPtr, *prevPtr, *newNode;
    
    // prevPtr == NULL ��־��Ӧ�����ڱ�ͷ
    prevPtr = NULL;
    currPtr = head;
    
    // ͨ��ѭ����������Ѱ�Ҳ����
    while (currPtr != NULL)
    {
	// ���item < ��ǰ������ݣ�������Ӧ�ڵ�ǰ���֮ǰ
	if (item < currPtr->data)
	      break;
	
      // currPtrǰ�У�prevPtr�������
        prevPtr = currPtr;
        currPtr = currPtr->NextNode();
    }   

    // ��ɲ���
    if (prevPtr == NULL)  //���������ڱ�ͷ
        InsertFront(head,item);
    else
    {
	// ��prevPtrָ��Ľ��֮������½��
        newNode = GetNode(item);
        prevPtr->InsertAfter(newNode);
    }
}

//�������--ɾ�������е����н��
template <class T>
void ClearList(Node<T> * &head)
{
    Node<T> *currPtr, *nextPtr;

    // �߱�����ɾ�����
    currPtr = head;
    while(currPtr != NULL)
    {
	// ��¼��һ�����ĵ�ַ��ɾ����ǰ���
        nextPtr = currPtr->NextNode();
        delete currPtr;
        currPtr = nextPtr;  //ʹָ��currPtrָ����һ�����
    }

    head = NULL;   //��ͷ�����ΪNULL����־������Ϊ��
}

#endif  // NODE_LIBRARY
