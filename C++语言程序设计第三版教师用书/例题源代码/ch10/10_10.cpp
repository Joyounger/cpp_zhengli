//10_10.cpp
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

class even_by_two{             //类定义形式的函数对象
public:
	int operator()() const
	{return _x+=2;}
private:
	static int _x;
};
int even_by_two::_x=0;       //静态数据成员初始化

int main()
{
	int iarray[]={0,1,2,3,4,5,6,6,6,7,8};
	int iarray1[]={0,1,2,3,4,4,5,5,6,6,6,6,6,7,8};
	vector<int> ivector(iarray,iarray+sizeof(iarray)/sizeof(int));
	vector<int> ivector1(iarray+6,iarray+8);   
	vector<int> ivector2(iarray1,iarray1+sizeof(iarray1)/sizeof(int));
	ostream_iterator< int > output( cout, " " );  //定义流迭代器用于输出数据
	
	//迭代遍历ivector1区间，对每一个元素进行even_by_two操作
    generate(ivector1.begin(),ivector1.end(),even_by_two());
	copy(ivector1.begin(),ivector1.end(),output);
	cout<<endl; 

	//迭代遍历ivector的指定区间（起点和长度），对每一个元素进行even_by_two操作
    generate_n(ivector.begin(),3,even_by_two());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl;

	//删除元素6 
    remove(ivector.begin(),ivector.end(),6);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//删除(实际并未从原序列中删除）元素6，结果置于另一个区间
    vector<int> ivector3(12);
	remove_copy(ivector.begin(),ivector.end(),ivector3.begin(),6);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 

	//删除(实际并未从原序列中删除）小于6的元素
	remove_if(ivector.begin(),ivector.end(),bind2nd(less<int>(),6));
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//删除(实际并未从原序列中删除)小于7的元素，结果置于另一个区间，
	remove_copy_if(ivector.begin(),ivector.end(),ivector3.begin(),
bind2nd(less<int>(),7));
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//将所有的元素值6，改为元素值3
	replace(ivector.begin(),ivector.end(),6,3);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//将所有的元素值3，改为元素值5,结果放置到另一个区间
	replace_copy(ivector.begin(),ivector.end(),ivector3.begin(),3,5);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//将所有小于5的元素值，改为元素值2
	replace_if(ivector.begin(),ivector.end(),bind2nd(less<int>(),5),2);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//将所有的元素值8，改为元素值9,结果放置到另一个区间
	replace_copy_if(ivector.begin(),ivector.end(),ivector3.begin(),
bind2nd(equal_to<int>(),8),9);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//逆向重排每一个元素
	reverse(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//逆向重排每一个元素,结果置于另一个区间
	reverse_copy(ivector.begin(),ivector.end(),ivector3.begin());
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//旋转（互换元素）[first,middle), 和[middle,end)
	rotate(ivector.begin(),ivector.begin()+4,ivector.end());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//旋转（互换元素）[first,middle], 和[middle,end]，结果置于另一个区间，
	rotate_copy(ivector.begin(),ivector.begin()+5,ivector.end(),
ivector3.begin());
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
}