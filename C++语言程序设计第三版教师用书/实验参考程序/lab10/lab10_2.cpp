// lab10_2.cpp
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
    int A[8] = { 5, 2, 7, 4, 4, 2, 6, 1 } ;
    int *location ;
    int i ;
    int value ;

    cout << "数组的值为：{ ";
    for(i = 0; i < 7; i++)
        cout << A[i] << ", " ;
    cout << A[7] << "}" << endl ;

    cout << "输入想查找的数：";
	cin >> value;
	
	location = find(A, A + 8, value) ;

    if (location != A + 8)
        cout << "最先等于" << value << "的是第"
             << (location-A)+1 << "个元素" << endl;
    else
		cout << "没有找到所查找的数。" << endl;
	cout<<"排序前的结果:"<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	cout<<endl; 
	sort(A,A+8);
	cout<<"升序排列后的结果:"<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	sort(A,A+8,greater<int>());
	cout<<endl; 
	cout<<"降序排列后的结果："<<endl;
	copy(A,A+8,ostream_iterator<int>(cout," "));
	cout<<endl; 

}