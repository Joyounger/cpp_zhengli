//9_14.h
#ifndef SEARCH_METHODS
#define SEARCH_METHODS

//用顺序查找法在数组list中查找值为key的元素
//若找到，返回该元素下标，否则返回-1
template <class T>
int SeqSearch(T list[], int n, T key)
{
   for(int i=0;i < n;i++)
      if (list[i] == key)
         return i;            
   return -1;                 
}

#endif   // SEARCH_METHODS
