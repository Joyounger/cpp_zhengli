//9_13.h
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

// 辅助函数：交换x和y的值
template <class T>
void Swap (T &x, T &y)
{
   T temp;
   
   temp = x;
   x = y;
   y = temp;
}

// 用起泡法对数组A的n个元素进行排序
template <class T>
void BubbleSort(T A[], int n)
{
   int i,j;             
   int lastExchangeIndex;	//用于记录每趟被交换的最后一对元素中较小的下标
   i = n-1;	// i是下一趟需参与排序交换的元素之最大下标
   while (i > 0)        //持续排序过程，直到最后一趟排序没有交换发生，或已达n-1趟
   {
      lastExchangeIndex = 0;	//每一趟开始时，设置交换标志为0（未交换）
      for (j = 0; j < i; j++)	//每一趟对元素A[0]..A[i]进行比较和交换
         if (A[j+1] < A[j])	//如果元素A[j+1] < A[j]，交换之
         { 
            Swap(A[j],A[j+1]);
            lastExchangeIndex = j;	//记录被交换的一对元素中较小的下标
         }
      i = lastExchangeIndex;       // 将i设置为本趟被交换的最后一对元素中较小的下标
   }
}
#endif
