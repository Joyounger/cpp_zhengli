//9_15.h
#ifndef SEARCH_METHODS
#define SEARCH_METHODS

// 用折半查找方法，在元素呈升序排列的数组list中查找值为key的元素
template <class T>
int BinSearch(T list[], int n, T key)
{
   int mid, low, high;
   T midvalue;

   low=0;
   high=n-1;
   while (low <= high)	// low <= high表示整个数组尚未查找完
   {
      mid = (low+high)/2;	// 求中间元素的下标
      midvalue = list[mid];	// 取出中间元素的值
      if (key == midvalue)    
         return mid;	// 若找到,返回下标
      else if (key < midvalue)
         high = mid-1;	// 若key < midvalue将查找范围缩小到数组的前一半
      else
         low = mid+1;	// 否则将查找范围缩小到数组的后一半
   }
   return -1;	// 没有找到返回-1
}

#endif	// SEARCH_METHODS

