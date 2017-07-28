//9-5.h
#ifndef NODE_CLASS
#define NODE_CLASS

//类定义部分
template <class T>
class Node
{
    private:
        Node<T> *next;  //指向后继节点的指针
    public:
        T data;  //数据域
    
	    // 构造函数
        Node (const T& item, Node<T>* ptrnext = NULL);
        
        // 在本节点之后插入一个同类节点p
        void InsertAfter(Node<T> *p);
        // 删除本节点的后继节点，并返回其地址
        Node<T> *DeleteAfter(void);
        
        // 获取后继节点的地址
        Node<T> *NextNode(void) const;
};

// 类的实现部分
// 构造函数，初始化数据和指针成员
template <class T>
Node<T>::Node(const T& item, Node<T>* ptrnext) : 
		 data(item), next(ptrnext)
{}
  
// 返回私有的指针成员
template <class T>
Node<T> *Node<T>::NextNode(void) const
{
    return next;
} 

// 在当前节点之后插入一个节点p 
template <class T>
void Node<T>::InsertAfter(Node<T> *p)
{
    p->next = next;     //p节点指针域指向当前节点的后继节点
    next = p;           //当前节点的指针域指向p 
}

// 删除当前节点的后继节点，并返回其地址
template <class T>
Node<T> *Node<T>::DeleteAfter(void)
{
Node<T> *tempPtr = next;  //将欲删除的节点地址存储到tempPtr中

    if (next == NULL)  //如果当前节点没有后继节点，则返回NULL
        return NULL;
        
    next = tempPtr->next;  //使当前节点的指针域指向tempPtr的后继节点
    return tempPtr;   //返回被删除的节点的地址
}

#endif  // NODE_CLASS
