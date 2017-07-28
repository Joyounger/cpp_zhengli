//9_4.cpp
#include <iostream>
#include <iomanip>
#include "9_3.h"
using namespace std;

int main()
{
    Array<int>  A(10);	// 用来存放质数的数组，初始状态有10个元素。
    int n;	//质数范围的上限，运行时输入
    int primecount = 0, i, j;
         
    cout << "Enter a value >= 2 as upper limit for prime numbers: ";
    cin >> n;
    
    A[primecount++] = 2;	// 2是一个质数
    for(i = 3; i < n; i++)
    {
        // 如果质数表满了，便再申请分配10个元素的空间
        if (primecount == A.ListSize())
            A.Resize(primecount + 10);
        //大于2的偶数不是质数，因此略过本次循环的后继部分，进入下一次循环
        if (i % 2 == 0)
            continue;
        // 检查3,5,7,...,i/2是否i的因子
        j = 3;
        while (j <= i/2 && i % j != 0)
            j += 2;
        // 若上述参数均不为i的因子,则i为质数
        if (j > i/2)
            A[primecount++] = i;
    }

    for (i = 0; i < primecount; i++)	//输出质数
    {
        cout << setw(5) << A[i];
        if ((i+1) % 10 == 0)	//每输出10个数换行一次
            cout << endl;
    } 
    cout << endl;
}
