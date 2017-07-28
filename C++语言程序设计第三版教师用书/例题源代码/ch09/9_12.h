//9_12.h
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

// 用选择法对数组A的n个元素进行排序
template <class T>
void SelectionSort(T A[], int n)
{
   int smallIndex;	//每以趟中选出的最小元素之下标
   int i, j;

   for (i = 0; i < n-1; i++) 
   {
      smallIndex = i;	//最小元素之下标初值设为i
      for (j = i+1; j < n; j++)	//在元素A[i+1]..A[n-1]中逐个比较显出最小值
         if (A[j] < A[smallIndex])	//smallIndex始终记录当前找到的最小值的下标
            smallIndex = j;
      Swap(A[i], A[smallIndex]);	// 将这一趟找到的最小元素与A[i]交换
   }
}
#endif
