// array1.h
#ifndef ARRAY1_CLASS
#define ARRAY1_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef NULL
const int NULL = 0;
#endif  // NULL

enum ErrorType
  {invalidArraySize, memoryAllocationError, indexOutOfRange};

char *errorMsg[] =
{
    "Invalid array size", "Memory allocation error",
    "Invalid index: "
};

template <class T> 
class Array
{
    private:
        T*  alist;
        int size;

        // 错误处理函数
        void Error(ErrorType error,int badIndex=0) const;

    public:
        // 构造函数和析构函数
        Array(int sz = 50);                         
        Array(const Array<T>& A);   
        ~Array(void);

        // 赋值, 下标和指针转换函数
        Array<T>& operator= (const Array<T>& rhs);
        T& operator[](int i);
        operator T* (void) const;

        int ListSize(void) const;   // 取数组大小
        void Resize(int sz);        // 修改数组大小
		
        //直接插入排序
		void InsertionSort();
		//直接选择排序
		void SelectionSort();
		//冒泡排序
        void BubbleSort();
		//顺序查找
        int SeqSearch(T key);

};

template <class T>
void Array<T>::Error(ErrorType error, int badIndex) const
{
    cerr << errorMsg[error];
    if (error == indexOutOfRange)
        cerr << badIndex;
    cerr << endl;
    exit(1);
}

template <class T>
Array<T>::Array(int sz)
{
    if (sz <= 0) 
        Error(invalidArraySize);
    size = sz;
    alist = new T[size];    
    if (alist == NULL)
        Error(memoryAllocationError);
}

template <class T>
Array<T>::~Array(void)
{ 
    delete [] alist;
}

template <class T>
Array<T>::Array(const Array<T>& X)
{
    int n = X.size;

    size = n;

    alist = new T[n];
    if (alist == NULL)
        Error(memoryAllocationError);
    T* srcptr = X.alist;
    T* destptr = alist;
    while (n--)
        *destptr++ = *srcptr++;
}


template <class T>
Array<T>& Array<T>::operator= (const Array<T>& rhs)
{
    int n = rhs.size;

    if (size != n)
    {
        delete [] alist;  
        alist = new T[n]; 
        if (alist == NULL)
            Error(memoryAllocationError);
        size = n;
    }
 
   T* destptr = alist;
   T* srcptr = rhs.alist;
    while (n--) 
        *destptr++ = *srcptr++;

    return *this;
}

template <class T>
T& Array<T>::operator[] (int n)
{
   if (n < 0 || n > size-1)
      Error(indexOutOfRange,n);

   return alist[n];
}

template <class T>
Array<T>::operator T* (void) const
{
    return alist;
}

template <class T>
int Array<T>::ListSize(void) const
{
    return size;
}

template <class T>
void Array<T>::Resize(int sz)
{
    if (sz <= 0) 
        Error(invalidArraySize);
    if (sz == size)
        return;

    T* newlist = new T[sz];
    if (newlist == NULL)
        Error(memoryAllocationError);

    int n = (sz <= size) ? sz : size;

    T* srcptr = alist;    
    T* destptr = newlist; 
    while (n--)           
        *destptr++ = *srcptr++;
    
    delete[] alist;

    alist = newlist;
    size = sz;
}

template <class T>
void Array<T>::InsertionSort()
{
	int i, j;
	T   temp;
	for (i = 1; i < size; i++) 
	{
		j = i;
		temp = alist[i];
		while (j > 0 && temp < alist[j-1]) 
		{ 	
			alist[j] = alist[j-1];
			j--;
		}
		alist[j] = temp;
	}
}

template <class T>
void Array<T>::SelectionSort()
{
	int smallIndex; 
	int i, j;
	for (i = 0; i < size-1; i++) 
	{
		smallIndex = i;

		for (j = i+1; j < size; j++) 
			if (alist[j] < alist[smallIndex])
				smallIndex = j;
			Swap(alist[i], alist[smallIndex]);
	}
}

template <class T>
void Swap (T &x, T &y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template <class T>
void Array<T>::BubbleSort()
{
	int i,j;             
	int lastExchangeIndex;
	 
	i = size-1;
	while (i > 0)
	{
		lastExchangeIndex = 0;
		for (j = 0; j < i; j++)
			if (alist[j+1] < alist[j])
			{ 
				Swap(alist[j],alist[j+1]);
				lastExchangeIndex = j;
			}
			
			i = lastExchangeIndex;
	}
}

template <class T>
int Array<T>::SeqSearch(T key)
{
	for(int i=0;i < size;i++)
		if (alist[i] == key)
			return i;            
	return -1;                 
}

#endif  // ARRAY1_CLASS

