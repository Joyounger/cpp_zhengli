//12_2.cpp
#include <iostream>
using namespace std;

int main()
{
	double *ptr[ 10 ];
	for ( int i = 0; i < 10; i++ ) 
	{
		ptr[ i ] = new double[ 60000000 ];
		if ( ptr[ i ] == 0 ) 
		{ 
			cout << "内存分配失败！ ptr[ "  << i << " ]\n";
			break;
		}
		else
			cout << "分配了 60000000 double 类型数据 ptr[ " << i << " ]\n";    
	}
	return 0;
}
/*
注：本程序在不同环境中运行结果可能会不同。
  运行结果：

分配了 60000000 double 类型数据 ptr[ 0 ]
内存分配失败！ ptr[ 1 ]
或：
分配了 60000000 double 类型数据 ptr[ 0 ]
分配了 60000000 double 类型数据 ptr[ 1 ]
分配了 60000000 double 类型数据 ptr[ 2 ]
分配了 60000000 double 类型数据 ptr[ 3 ]
分配了 60000000 double 类型数据 ptr[ 4 ]
分配了 60000000 double 类型数据 ptr[ 5 ]
分配了 60000000 double 类型数据 ptr[ 6 ]
分配了 60000000 double 类型数据 ptr[ 7 ]
分配了 60000000 double 类型数据 ptr[ 8 ]
分配了 60000000 double 类型数据 ptr[ 9 ]
*/