//9-5.h
#ifndef NODE_CLASS
#define NODE_CLASS

//�ඨ�岿��
template <class T>
class Node
{
    private:
        Node<T> *next;  //ָ���̽ڵ��ָ��
    public:
        T data;  //������
    
	    // ���캯��
        Node (const T& item, Node<T>* ptrnext = NULL);
        
        // �ڱ��ڵ�֮�����һ��ͬ��ڵ�p
        void InsertAfter(Node<T> *p);
        // ɾ�����ڵ�ĺ�̽ڵ㣬���������ַ
        Node<T> *DeleteAfter(void);
        
        // ��ȡ��̽ڵ�ĵ�ַ
        Node<T> *NextNode(void) const;
};

// ���ʵ�ֲ���
// ���캯������ʼ�����ݺ�ָ���Ա
template <class T>
Node<T>::Node(const T& item, Node<T>* ptrnext) : 
		 data(item), next(ptrnext)
{}
  
// ����˽�е�ָ���Ա
template <class T>
Node<T> *Node<T>::NextNode(void) const
{
    return next;
} 

// �ڵ�ǰ�ڵ�֮�����һ���ڵ�p 
template <class T>
void Node<T>::InsertAfter(Node<T> *p)
{
    p->next = next;     //p�ڵ�ָ����ָ��ǰ�ڵ�ĺ�̽ڵ�
    next = p;           //��ǰ�ڵ��ָ����ָ��p 
}

// ɾ����ǰ�ڵ�ĺ�̽ڵ㣬���������ַ
template <class T>
Node<T> *Node<T>::DeleteAfter(void)
{
Node<T> *tempPtr = next;  //����ɾ���Ľڵ��ַ�洢��tempPtr��

    if (next == NULL)  //�����ǰ�ڵ�û�к�̽ڵ㣬�򷵻�NULL
        return NULL;
        
    next = tempPtr->next;  //ʹ��ǰ�ڵ��ָ����ָ��tempPtr�ĺ�̽ڵ�
    return tempPtr;   //���ر�ɾ���Ľڵ�ĵ�ַ
}

#endif  // NODE_CLASS
