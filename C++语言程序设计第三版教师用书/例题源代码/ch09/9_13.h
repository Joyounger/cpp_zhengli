//9_13.h
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

// �����ݷ�������A��n��Ԫ�ؽ�������
template <class T>
void BubbleSort(T A[], int n)
{
   int i,j;             
   int lastExchangeIndex;	//���ڼ�¼ÿ�˱����������һ��Ԫ���н�С���±�
   i = n-1;	// i����һ����������򽻻���Ԫ��֮����±�
   while (i > 0)        //����������̣�ֱ�����һ������û�н������������Ѵ�n-1��
   {
      lastExchangeIndex = 0;	//ÿһ�˿�ʼʱ�����ý�����־Ϊ0��δ������
      for (j = 0; j < i; j++)	//ÿһ�˶�Ԫ��A[0]..A[i]���бȽϺͽ���
         if (A[j+1] < A[j])	//���Ԫ��A[j+1] < A[j]������֮
         { 
            Swap(A[j],A[j+1]);
            lastExchangeIndex = j;	//��¼��������һ��Ԫ���н�С���±�
         }
      i = lastExchangeIndex;       // ��i����Ϊ���˱����������һ��Ԫ���н�С���±�
   }
}
#endif
