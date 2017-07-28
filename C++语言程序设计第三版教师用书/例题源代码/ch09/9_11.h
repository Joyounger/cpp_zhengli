//9_11.h
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

//用直接插入排序法对数组A中的元素进行升序排列
template <class T>
void InsertionSort(T A[], int n)
{
   int i, j;
   T   temp;

   // 将下标为1～n-1的元素逐个插入到已排序序列中适当的位置
   for (i = 1; i < n; i++) 
   {
      //从A[i-1]开始向A[0]方向扫描各元素,寻找适当位置插入A[i]
      j = i;
      temp = A[i];
      while (j > 0 && temp < A[j-1]) 
      { //逐个比较，直到temp>=A[j-1]时，j便是应插入的位置。
        //若达到j==0，则0是应插入的位置。
         
         A[j] = A[j-1];    //将元素逐个后移，以便找到插入位置时可立即插入。
         j--;
      }
      // 插入位置已找到，立即插入。
      A[j] = temp;
   }
}
#endif
