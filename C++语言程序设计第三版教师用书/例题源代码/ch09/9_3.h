//9-3.h
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef NULL
const int NULL = 0;
#endif  // NULL

//错误类型集合，共有三种类型的错误：数组大小错误、内存分配错误和下标越界
enum ErrorType  
  {invalidArraySize, memoryAllocationError, indexOutOfRange};

//错误信息
char *errorMsg[] =
{
    "Invalid array size", "Memory allocation error",
    "Invalid index: "
};

//数组类模板声明
template <class T> 
class Array
{
    private:
      T*  alist;  //T类型指针，用于存放动态分配的数组内存首地址
      int size;   //数组大小（元素个数）
      void Error(ErrorType error,int badIndex=0) const;   // 错误处理函数
    public:
      Array(int sz = 50);	//构造函数
      Array(const Array<T>& A);	//拷贝构造函数
      ~Array(void);	//析构函数
      Array<T>& operator= (const Array<T>& rhs); //重载"="使数组对象可以整体赋值
      T& operator[](int i);     //重载"[]"，使Array对象可以起到C++普通数组的作用
      operator T* (void) const; //重载T*，使Array对象可以起到C++普通数组的作用
      int ListSize(void) const;	// 取数组的大小
      void Resize(int sz);	// 修改数组的大小
};

//以下为类成员函数的定义
//模扳函数Error实现输出错误信息的功能
template <class T>
void Array<T>::Error(ErrorType error, int badIndex) const
{
	//由于头文件有可能被许多其它源程序文件包含，因此不以将std名名空间中的全部
    //标识符引入当前命名空间，也就是说不宜使用"using namespace std;"。
    //为了使用std命名空间中的标识符，如cout，这里使用了"std::"

	std::cout << errorMsg[error];	//根据错误类型，输出相应的错误信息
    if (error == indexOutOfRange)
        std::cout << badIndex;	//如果是下标越界错，输出错误的下标
    std::cout << endl;
    exit(1);
}

//构造函数
template <class T>
Array<T>::Array(int sz)
{
    if (sz <= 0)             //sz为数组大小（元素个数），若小于0，则输出错误信息
        Error(invalidArraySize);
    size = sz;	// 将元素个数赋值给变量size
    alist = new T[size];	//动态分配size个T类型的元素空间
    if (alist == NULL)	//如果分配内存不成功，输出错误信息
        Error(memoryAllocationError);
}

// 析构函数
template <class T>
Array<T>::~Array(void)
{     delete [] alist;     }

// 拷贝构造函数
template <class T>
Array<T>::Array(const Array<T>& X)
{
    //从对象X取得数组大小，并赋值给当前对象的成员
    int n = X.size; 
    size = n;
    //为对象申请内存并进行出错检查
    alist = new T[n];	// 动态分配n个T类型的元素空间
    if (alist == NULL)	//如果分配内存不成功，输出错误信息
        Error(memoryAllocationError);
    // 从对象X复制数组元素到本对象  
    T* srcptr = X.alist;	// X.alist是对象X的数组首地址
    T* destptr = alist;	// alist是本对象中的数组首地址
    while (n--)	// 逐个复制数组元素
        *destptr++ = *srcptr++;
}

// 重载"="运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值
template <class T>
Array<T>& Array<T>::operator= (const Array<T>& rhs)
{
    int n = rhs.size;	// 取rhs的数组大小
//如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
    if (size != n)
    {
        delete [] alist;	// 删除数组原有内存
        alist = new T[n];	// 重新分配n个元素的内存
        if (alist == NULL)	//如果分配内存不成功，输出错误信息
            Error(memoryAllocationError);
        size = n;	//记录本对象的数组大小
    }
   // 从rhs向本对象复制元素
   T* destptr = alist;
   T* srcptr = rhs.alist;
    while (n--) 
        *destptr++ = *srcptr++;
    return *this;	// 返回当前对象的引用
}

// 重载下标运算符，实现与普通数组一样通过下标访问元素，并且具有越界检查功能
template <class T>
T& Array<T>::operator[] (int n)
{
   if (n < 0 || n > size-1)	// 检查下标是否越界
      Error(indexOutOfRange,n);
   return alist[n];	// 返回下标为n的数组元素
}

//重载指针转换运算符，将Array类的对象名转换为T类型的指针，
//指向当前对象中的私有数组。
//因而可以象使用普通数组首地址一样使用Array类的对象名
template <class T>
Array<T>::operator T* (void) const
{
    return alist;	// 返回当前对象中私有数组的首地址
}

//取当前数组的大小
template <class T>
int Array<T>::ListSize(void) const
{
    return size;
}

// 将数组大小修改为sz
template <class T>
void Array<T>::Resize(int sz)
{
    if (sz <= 0)	// 检查是否sz<= 0
        Error(invalidArraySize);
    if (sz == size)	// 如果指定的大小与原有大小一样，什么也不做
        return;
    T* newlist = new T[sz];	// 申请新的数组内存
    if (newlist == NULL)	// 测试申请内存是否申请成功
        Error(memoryAllocationError);
    int n = (sz <= size) ? sz : size;	// 将sz与size中较小的一个赋值给n
    // 将原有数组中前n个元素复制到新数组中
    T* srcptr = alist;      // 原数组alist的首地址
    T* destptr = newlist;   // 新数组newlist的首地址
    while (n--)             // 复制数组元素
        *destptr++ = *srcptr++;
    delete[] alist;	// 删除原数组
    alist = newlist;	// 使alist 指向新数组
    size = sz;	// 更新size
}
#endif  // ARRAY_CLASS

