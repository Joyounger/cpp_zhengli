//9_14.h
#ifndef SEARCH_METHODS
#define SEARCH_METHODS

//��˳����ҷ�������list�в���ֵΪkey��Ԫ��
//���ҵ������ظ�Ԫ���±꣬���򷵻�-1
template <class T>
int SeqSearch(T list[], int n, T key)
{
   for(int i=0;i < n;i++)
      if (list[i] == key)
         return i;            
   return -1;                 
}

#endif   // SEARCH_METHODS
