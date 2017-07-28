//10_10.cpp
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

class even_by_two{             //�ඨ����ʽ�ĺ�������
public:
	int operator()() const
	{return _x+=2;}
private:
	static int _x;
};
int even_by_two::_x=0;       //��̬���ݳ�Ա��ʼ��

int main()
{
	int iarray[]={0,1,2,3,4,5,6,6,6,7,8};
	int iarray1[]={0,1,2,3,4,4,5,5,6,6,6,6,6,7,8};
	vector<int> ivector(iarray,iarray+sizeof(iarray)/sizeof(int));
	vector<int> ivector1(iarray+6,iarray+8);   
	vector<int> ivector2(iarray1,iarray1+sizeof(iarray1)/sizeof(int));
	ostream_iterator< int > output( cout, " " );  //�����������������������
	
	//��������ivector1���䣬��ÿһ��Ԫ�ؽ���even_by_two����
    generate(ivector1.begin(),ivector1.end(),even_by_two());
	copy(ivector1.begin(),ivector1.end(),output);
	cout<<endl; 

	//��������ivector��ָ�����䣨���ͳ��ȣ�����ÿһ��Ԫ�ؽ���even_by_two����
    generate_n(ivector.begin(),3,even_by_two());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl;

	//ɾ��Ԫ��6 
    remove(ivector.begin(),ivector.end(),6);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//ɾ��(ʵ�ʲ�δ��ԭ������ɾ����Ԫ��6�����������һ������
    vector<int> ivector3(12);
	remove_copy(ivector.begin(),ivector.end(),ivector3.begin(),6);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 

	//ɾ��(ʵ�ʲ�δ��ԭ������ɾ����С��6��Ԫ��
	remove_if(ivector.begin(),ivector.end(),bind2nd(less<int>(),6));
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//ɾ��(ʵ�ʲ�δ��ԭ������ɾ��)С��7��Ԫ�أ����������һ�����䣬
	remove_copy_if(ivector.begin(),ivector.end(),ivector3.begin(),
bind2nd(less<int>(),7));
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//�����е�Ԫ��ֵ6����ΪԪ��ֵ3
	replace(ivector.begin(),ivector.end(),6,3);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//�����е�Ԫ��ֵ3����ΪԪ��ֵ5,������õ���һ������
	replace_copy(ivector.begin(),ivector.end(),ivector3.begin(),3,5);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//������С��5��Ԫ��ֵ����ΪԪ��ֵ2
	replace_if(ivector.begin(),ivector.end(),bind2nd(less<int>(),5),2);
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//�����е�Ԫ��ֵ8����ΪԪ��ֵ9,������õ���һ������
	replace_copy_if(ivector.begin(),ivector.end(),ivector3.begin(),
bind2nd(equal_to<int>(),8),9);
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//��������ÿһ��Ԫ��
	reverse(ivector.begin(),ivector.end());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//��������ÿһ��Ԫ��,���������һ������
	reverse_copy(ivector.begin(),ivector.end(),ivector3.begin());
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
	
	//��ת������Ԫ�أ�[first,middle), ��[middle,end)
	rotate(ivector.begin(),ivector.begin()+4,ivector.end());
	copy(ivector.begin(),ivector.end(),output);
	cout<<endl; 
	
	//��ת������Ԫ�أ�[first,middle], ��[middle,end]�����������һ�����䣬
	rotate_copy(ivector.begin(),ivector.begin()+5,ivector.end(),
ivector3.begin());
	copy(ivector3.begin(),ivector3.end(),output);
	cout<<endl; 
}