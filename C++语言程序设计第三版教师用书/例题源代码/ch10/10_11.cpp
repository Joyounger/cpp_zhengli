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
	
	// ���Ҳ���������СֵԪ��
	cout<<*max_element(ivector.begin(),ivector.end())<<endl;
	cout<<*min_element(ivector.begin(),ivector.end())<<endl;

	//��ivector.begin()+4-ivector.begin()��Ԫ������
	//�Ž�[ivector.begin(),ivector.begin()+4]���䡣ʣ��Ԫ�ز���֤ά��ԭ����Դ���
	partial_sort(ivector.begin(),ivector.begin()+3,ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//�ֲ����򲢸��Ƶ���
	vector<int> ivector1(5);
	partial_sort_copy(ivector.begin(),ivector.end(),ivector1.begin(),
ivector1.end());
	copy(ivector1.begin(),ivector1.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//����ȱʡΪ������
	sort(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//��ָ��Ԫ�ز��뵽�����ڲ�Ӱ������ԭ���������͡����λ��
	cout<<*lower_bound(ivector.begin(),ivector.end(),24)<<endl;
	cout<<*upper_bound(ivector.begin(),ivector.end(),24)<<endl;

	//�����������䣬�����ö��ֲ��ҷ���Ѱ��ĳ��Ԫ��
    cout<<binary_search(ivector.begin(),ivector.end(),33)<<endl;
    cout<<binary_search(ivector.begin(),ivector.end(),34)<<endl;

	//��һ���������
	next_permutation(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//��һ���������
	prev_permutation(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//�ϲ���������ivector��ivector1����������ŵ�ivector2��
	vector<int> ivector2(13);
	merge(ivector.begin(),ivector.end(),ivector1.begin(),ivector1.end(),
ivector2.begin());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//��С��*(ivector.begin()+5)��Ԫ�ط����ڸ�Ԫ��֮��
	//�������ڸ�Ԫ��֮�ҡ�����֤ά��ԭ�е����λ��
	nth_element(ivector2.begin(),ivector2.begin()+5,ivector2.end());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//���򣬲�����ԭ�����λ��
	stable_sort(ivector2.begin(),ivector2.end());
	copy(ivector2.begin(),ivector2.end(),ostream_iterator<int>(cout," "));
	cout<<endl; 

	//���һ���������䣬�ҳ�����һ�������䣬����ÿ��Ԫ�ض���ĳ�ض�Ԫ��ֵ��ͬ
	pair<vector<int>::iterator,vector<int>::iterator> pairIte;
	pairIte=equal_range(ivector2.begin(),ivector2.end(),22);
	cout<<*(pairIte.first)<<endl; 
	cout<<*(pairIte.second)<<endl; 

	//�ϲ������������У�Ȼ��͵��滻
	int iarray3[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	vector<int> ivector3(iarray3,iarray3+sizeof(iarray3)/sizeof(int));
	inplace_merge(ivector3.begin(), ivector3.begin()+ 4, ivector3.end());
	copy(ivector3.begin(),ivector3.end(), ostream_iterator<int>(cout, " "));  
	cout<<endl; 
	
	//���ֵ�˳��Ƚ�����ivector3��ivector4
	int iarray4[] = { 1, 3, 5, 7,1, 5, 9, 3 };
	vector<int> ivector4(iarray4,iarray4+sizeof(iarray4)/sizeof(int));
	cout<< lexicographical_compare(ivector3.begin(),ivector3.end(),
ivector4.begin(),ivector4.end()) << endl;
}
