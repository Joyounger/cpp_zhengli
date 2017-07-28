//9_2.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

struct Student               // �ṹ��Student
{
    int     id;             //ѧ��
    float   gpa;            //ƽ����
};  

template <class T>  //��ģ�壺ʵ�ֶ������������ݽ��д�ȡ
class Store
{
    private:
        T item;          // item���ڴ���������͵�����
        int haveValue;    // haveValue���item�Ƿ��ѱ���������
		
    public:
        Store(void);      // ȱʡ��ʽ�����βΣ��Ĺ��캯��
        
        T GetElem(void);  //��ȡ���ݺ���
        void PutElem(T x);  //�������ݺ���
};

//����ʵ�ָ���Ա������
//ע�⣺ģ����ĳ�Ա��������������ʵ�֣��������ģ�庯��
template <class T>          // ȱʡ��ʽ���캯����ʵ�� 
Store<T>::Store(void): haveValue(0)
{}

template <class T>                // ��ȡ���ݺ�����ʵ��
T Store<T>::GetElem(void)    
{
    if (haveValue == 0)         // �����ͼ��ȡδ��ʼ�������ݣ�����ֹ����
    {
        cout << "No item present!" << endl;
        exit(1);
    }
    return item;    // ����item�д�ŵ����� 
}

template <class T>             // �������ݺ�����ʵ�� 
void Store<T>::PutElem(T x)
{
    haveValue++;      // ��haveValue ��Ϊ TRUE����ʾitem���Ѵ�����ֵ
    item = x;         // ��xֵ����item
}

int main()
{
    Student g= {1000, 23};  //����Student���ͽṹ�������ͬʱ���Գ�ֵ
	 Store<int> S1, S2;   //��������Store<int>������������ݳ�ԱitemΪint����
	 Store<Student> S3;//����Store<Student>�����S3���������ݳ�ԱitemΪStudent����
	 Store<double> D;   //����Store<double>�����D���������ݳ�ԱitemΪdouble����
	 S1.PutElem(3);    //�����S1�д������ݣ���ʼ������S1��
    S2.PutElem(-7);   //�����S2�д������ݣ���ʼ������S2��
    cout<<S1.GetElem()<<"  "<<S2.GetElem()<<endl;  //�������S1��S2�����ݳ�Ա
	 S3.PutElem(g); //�����D�д������ݣ���ʼ������D��
    cout <<"The student id is "<<S3.GetElem().id << endl;	//�������S3�����ݳ�Ա
    cout << "Retrieving object D  " ;
	    cout << D.GetElem() << endl;  //�������D�����ݳ�Ա
	// ����Dδ����ʼ��,��ִ�к���D.GetElement()�����е��³�����ֹ
}
