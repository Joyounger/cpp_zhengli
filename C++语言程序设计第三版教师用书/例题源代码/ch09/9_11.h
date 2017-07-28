//9_11.h
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

//��ֱ�Ӳ������򷨶�����A�е�Ԫ�ؽ�����������
template <class T>
void InsertionSort(T A[], int n)
{
   int i, j;
   T   temp;

   // ���±�Ϊ1��n-1��Ԫ��������뵽�������������ʵ���λ��
   for (i = 1; i < n; i++) 
   {
      //��A[i-1]��ʼ��A[0]����ɨ���Ԫ��,Ѱ���ʵ�λ�ò���A[i]
      j = i;
      temp = A[i];
      while (j > 0 && temp < A[j-1]) 
      { //����Ƚϣ�ֱ��temp>=A[j-1]ʱ��j����Ӧ�����λ�á�
        //���ﵽj==0����0��Ӧ�����λ�á�
         
         A[j] = A[j-1];    //��Ԫ��������ƣ��Ա��ҵ�����λ��ʱ���������롣
         j--;
      }
      // ����λ�����ҵ����������롣
      A[j] = temp;
   }
}
#endif
