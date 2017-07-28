//9_1.cpp
#include <iostream>
using namespace std;
template< class T >	//声明函数模板
void outputArray( const T *P_array, const int count )	//定义函数体
{  
   for ( int i = 0; i < count; i++ )
      cout << P_array[ i ] << " ";
   cout << endl;
}

int main()	 //主函数
{
   const int aCount = 8, bCount =8, cCount = 20;
   int aArray[ aCount ] = { 1, 2, 3, 4, 5,6,7,8 };	//定义int数组
   double bArray [ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7,8.8 }; 
//定义double数组
   char cArray [ cCount ] = "Welcome to see you!";	//定义char数组
   cout << " a Array contains:" << endl;
   outputArray( aArray, aCount );	//调用函数模板
   cout << " b Array contains:" << endl;
   outputArray( bArray, bCount );	//调用函数模板
   cout << " c Array contains:" << endl;
   outputArray( cArray, cCount );	//调用函数模板
}
