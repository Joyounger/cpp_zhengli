//6_9.cpp
#include <iostream>
using namespace std;
int main()
{
	int array2[2][3]={{11,12,13},{21,22,23}};	//声明二维int型数组
	for(int i=0;i<2;i++)
      {
	    cout<<*(array2+i)<<endl;	//输出二维数组第i行的首地址
	    for(int j=0;j<3;j++)
          {  cout<<*(*(array2+i)+j)<<" ";    }	//逐个输出二维数组第i行元素值
	    cout<<endl;
	}
}
