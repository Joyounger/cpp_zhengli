//9_8.h
#ifndef STACK_CLASS
#define STACK_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

const int MaxStackSize = 50;  //栈的大小，即栈中元素的最大个数

//类的声明
template <class T>
class Stack
{
    private:
        T stacklist[MaxStackSize];	//数组，用于存放栈的元素
        int top;	//栈顶位置（数组下标）
    public:
        Stack (void);	// 构造函数，初始化栈
        void Push (const T& item);	//将元素item压入栈
        T Pop (void);	//将栈顶元素弹出栈
        void ClearStack(void);	//将栈清空
        T Peek (void) const;	// 访问栈顶元素
        
        int StackEmpty(void) const;	//测试是否栈满
        int StackFull(void) const;	//测试是否栈空
};

//类的实现
template <class T>
Stack<T>::Stack (void) : top(-1)	//构造函数，栈顶初始化为-1
{}

template <class T>
void Stack<T>::Push (const T& item)	// 将元素item压入栈
{
    if (top == MaxStackSize-1)	// 如果栈满，程序终止
    {
        std::cerr << "Stack overflow!" << endl;
        exit(1);
    }
    top++;    //栈顶指针增1
    stacklist[top] = item;    //将新元素压入栈顶
}

template <class T>
T Stack<T>::Pop (void)	// 将栈顶元素弹出栈
{
    T temp;

    if (top == -1)	// 如果栈空，程序终止
    {
        std::cerr << "Attempt to pop an empty stack!" << endl;
        exit(1);
    }
    temp = stacklist[top];	//取出栈顶元素
    top--;	//栈顶指针自减
    return temp;	//返回栈顶元素
}

template <class T>
T Stack<T>::Peek (void) const	// 访问栈顶元素
{
    if (top == -1)	// 如果栈空，程序终止
    {
        std::cerr << "Attempt to peek at an empty stack!" << endl;
        exit(1);
    }
    return stacklist[top];	//返回栈顶元素
}

template <class T>
int Stack<T>::StackEmpty(void) const	// 测试栈是否空
{     return top == -1;   }	//如果栈空则返回TRUE，否则返回FALSE

template <class T>
int Stack<T>::StackFull(void) const	// 测试是否栈满
{     return top == MaxStackSize-1;    }	//如果栈满则返回TRUE，否则返回FALSE 

template <class T>
void Stack<T>::ClearStack(void)	// 清空栈
{    top = -1;    }

#endif  // STACK_CLASS
