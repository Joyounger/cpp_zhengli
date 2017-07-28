//9-3.h
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef NULL
const int NULL = 0;
#endif  // NULL

//�������ͼ��ϣ������������͵Ĵ��������С�����ڴ���������±�Խ��
enum ErrorType  
  {invalidArraySize, memoryAllocationError, indexOutOfRange};

//������Ϣ
char *errorMsg[] =
{
    "Invalid array size", "Memory allocation error",
    "Invalid index: "
};

//������ģ������
template <class T> 
class Array
{
    private:
      T*  alist;  //T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
      int size;   //�����С��Ԫ�ظ�����
      void Error(ErrorType error,int badIndex=0) const;   // ��������
    public:
      Array(int sz = 50);	//���캯��
      Array(const Array<T>& A);	//�������캯��
      ~Array(void);	//��������
      Array<T>& operator= (const Array<T>& rhs); //����"="ʹ�������������帳ֵ
      T& operator[](int i);     //����"[]"��ʹArray���������C++��ͨ���������
      operator T* (void) const; //����T*��ʹArray���������C++��ͨ���������
      int ListSize(void) const;	// ȡ����Ĵ�С
      void Resize(int sz);	// �޸�����Ĵ�С
};

//����Ϊ���Ա�����Ķ���
//ģ�⺯��Errorʵ�����������Ϣ�Ĺ���
template <class T>
void Array<T>::Error(ErrorType error, int badIndex) const
{
	//����ͷ�ļ��п��ܱ��������Դ�����ļ���������˲��Խ�std�����ռ��е�ȫ��
    //��ʶ�����뵱ǰ�����ռ䣬Ҳ����˵����ʹ��"using namespace std;"��
    //Ϊ��ʹ��std�����ռ��еı�ʶ������cout������ʹ����"std::"

	std::cout << errorMsg[error];	//���ݴ������ͣ������Ӧ�Ĵ�����Ϣ
    if (error == indexOutOfRange)
        std::cout << badIndex;	//������±�Խ������������±�
    std::cout << endl;
    exit(1);
}

//���캯��
template <class T>
Array<T>::Array(int sz)
{
    if (sz <= 0)             //szΪ�����С��Ԫ�ظ���������С��0�������������Ϣ
        Error(invalidArraySize);
    size = sz;	// ��Ԫ�ظ�����ֵ������size
    alist = new T[size];	//��̬����size��T���͵�Ԫ�ؿռ�
    if (alist == NULL)	//��������ڴ治�ɹ������������Ϣ
        Error(memoryAllocationError);
}

// ��������
template <class T>
Array<T>::~Array(void)
{     delete [] alist;     }

// �������캯��
template <class T>
Array<T>::Array(const Array<T>& X)
{
    //�Ӷ���Xȡ�������С������ֵ����ǰ����ĳ�Ա
    int n = X.size; 
    size = n;
    //Ϊ���������ڴ沢���г�����
    alist = new T[n];	// ��̬����n��T���͵�Ԫ�ؿռ�
    if (alist == NULL)	//��������ڴ治�ɹ������������Ϣ
        Error(memoryAllocationError);
    // �Ӷ���X��������Ԫ�ص�������  
    T* srcptr = X.alist;	// X.alist�Ƕ���X�������׵�ַ
    T* destptr = alist;	// alist�Ǳ������е������׵�ַ
    while (n--)	// �����������Ԫ��
        *destptr++ = *srcptr++;
}

// ����"="�������������rhs��ֵ��������ʵ�ֶ���֮������帳ֵ
template <class T>
Array<T>& Array<T>::operator= (const Array<T>& rhs)
{
    int n = rhs.size;	// ȡrhs�������С
//����������������С��rhs��ͬ����ɾ������ԭ���ڴ棬Ȼ�����·���
    if (size != n)
    {
        delete [] alist;	// ɾ������ԭ���ڴ�
        alist = new T[n];	// ���·���n��Ԫ�ص��ڴ�
        if (alist == NULL)	//��������ڴ治�ɹ������������Ϣ
            Error(memoryAllocationError);
        size = n;	//��¼������������С
    }
   // ��rhs�򱾶�����Ԫ��
   T* destptr = alist;
   T* srcptr = rhs.alist;
    while (n--) 
        *destptr++ = *srcptr++;
    return *this;	// ���ص�ǰ���������
}

// �����±��������ʵ������ͨ����һ��ͨ���±����Ԫ�أ����Ҿ���Խ���鹦��
template <class T>
T& Array<T>::operator[] (int n)
{
   if (n < 0 || n > size-1)	// ����±��Ƿ�Խ��
      Error(indexOutOfRange,n);
   return alist[n];	// �����±�Ϊn������Ԫ��
}

//����ָ��ת�����������Array��Ķ�����ת��ΪT���͵�ָ�룬
//ָ��ǰ�����е�˽�����顣
//���������ʹ����ͨ�����׵�ַһ��ʹ��Array��Ķ�����
template <class T>
Array<T>::operator T* (void) const
{
    return alist;	// ���ص�ǰ������˽��������׵�ַ
}

//ȡ��ǰ����Ĵ�С
template <class T>
int Array<T>::ListSize(void) const
{
    return size;
}

// �������С�޸�Ϊsz
template <class T>
void Array<T>::Resize(int sz)
{
    if (sz <= 0)	// ����Ƿ�sz<= 0
        Error(invalidArraySize);
    if (sz == size)	// ���ָ���Ĵ�С��ԭ�д�Сһ����ʲôҲ����
        return;
    T* newlist = new T[sz];	// �����µ������ڴ�
    if (newlist == NULL)	// ���������ڴ��Ƿ�����ɹ�
        Error(memoryAllocationError);
    int n = (sz <= size) ? sz : size;	// ��sz��size�н�С��һ����ֵ��n
    // ��ԭ��������ǰn��Ԫ�ظ��Ƶ���������
    T* srcptr = alist;      // ԭ����alist���׵�ַ
    T* destptr = newlist;   // ������newlist���׵�ַ
    while (n--)             // ��������Ԫ��
        *destptr++ = *srcptr++;
    delete[] alist;	// ɾ��ԭ����
    alist = newlist;	// ʹalist ָ��������
    size = sz;	// ����size
}
#endif  // ARRAY_CLASS

