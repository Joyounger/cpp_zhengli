//9_12.h
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

// ��������������x��y��ֵ
template <class T>
void Swap (T &x, T &y)
{
   T temp;
   
   temp = x;
   x = y;
   y = temp;
}

// ��ѡ�񷨶�����A��n��Ԫ�ؽ�������
template <class T>
void SelectionSort(T A[], int n)
{
   int smallIndex;	//ÿ������ѡ������СԪ��֮�±�
   int i, j;

   for (i = 0; i < n-1; i++) 
   {
      smallIndex = i;	//��СԪ��֮�±��ֵ��Ϊi
      for (j = i+1; j < n; j++)	//��Ԫ��A[i+1]..A[n-1]������Ƚ��Գ���Сֵ
         if (A[j] < A[smallIndex])	//smallIndexʼ�ռ�¼��ǰ�ҵ�����Сֵ���±�
            smallIndex = j;
      Swap(A[i], A[smallIndex]);	// ����һ���ҵ�����СԪ����A[i]����
   }
}
#endif
