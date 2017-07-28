//10_11.cpp
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main()
{
	int iarray[]={26,17,15,22,23,33,32,40};
	vector<int> ivector(iarray,iarray+sizeof(iarray)/sizeof(int));
	
	// 查找并输出最大、最小值元素
	cout<<*max_element(ivector.begin(),ivector.end())<<endl;
	cout<<*min_element(ivector.begin(),ivector.end())<<endl;

	//将ivector.begin()+4-ivector.begin()各元素排序，
	//放进[ivector.begin(),ivector.begin()+4]区间。剩余元素不保证维持原来相对次序
	partial_sort(ivector.begin(),ivector.begin()+3,ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//局部排序并复制到别处
	vector<int> ivector1(5);
	partial_sort_copy(ivector.begin(),ivector.end(),ivector1.begin(),
ivector1.end());
	copy(ivector1.begin(),ivector1.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//排序，缺省为递增。
	sort(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//将指定元素插入到区间内不影响区间原来排序的最低、最高位置
	cout<<*lower_bound(ivector.begin(),ivector.end(),24)<<endl;
	cout<<*upper_bound(ivector.begin(),ivector.end(),24)<<endl;

	//对于有序区间，可以用二分查找方法寻找某个元素
    cout<<binary_search(ivector.begin(),ivector.end(),33)<<endl;
    cout<<binary_search(ivector.begin(),ivector.end(),34)<<endl;

	//下一个排列组合
	next_permutation(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//上一个排列组合
	prev_permutation(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//合并两个序列ivector和ivector1，并将结果放到ivector2中
	vector<int> ivector2(13);
	merge(ivector.begin(),ivector.end(),ivector1.begin(),ivector1.end(),
ivector2.begin());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//将小于*(ivector.begin()+5)的元素放置在该元素之左
	//其余置于该元素之右。不保证维持原有的相对位置
	nth_element(ivector2.begin(),ivector2.begin()+5,ivector2.end());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//排序，并保持原来相对位置
	stable_sort(ivector2.begin(),ivector2.end());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//针对一个有序区间，找出其中一个子区间，其中每个元素都与某特定元素值相同
	pair<vector<int>::iterator,vector<int>::iterator> pairIte;
	pairIte=equal_range(ivector2.begin(),ivector2.end(),22);
	cout<<*(pairIte.first)<<endl; 
	cout<<*(pairIte.second)<<endl; 

	//合并两个有序序列，然后就地替换
	int iarray3[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	vector<int> ivector3(iarray3,iarray3+sizeof(iarray3)/sizeof(int));
	inplace_merge(ivector3.begin(), ivector3.begin()+ 4, ivector3.end());
	copy(ivector3.begin(),ivector3.end(), ostream_iterator<int>(cout, " "));  
	cout<<endl; 
	
	//以字典顺序比较序列ivector3和ivector4
	int iarray4[] = { 1, 3, 5, 7,1, 5, 9, 3 };
	vector<int> ivector4(iarray4,iarray4+sizeof(iarray4)/sizeof(int));
	cout<< lexicographical_compare(ivector3.begin(),ivector3.end(),
ivector4.begin(),ivector4.end()) << endl;
}
