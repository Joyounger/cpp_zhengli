//9_2.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

struct Student               // 结构体Student
{
    int     id;             //学号
    float   gpa;            //平均分
};  

template <class T>  //类模板：实现对任意类型数据进行存取
class Store
{
    private:
        T item;          // item用于存放任意类型的数据
        int haveValue;    // haveValue标记item是否已被存入内容
		
    public:
        Store(void);      // 缺省形式（无形参）的构造函数
        
        T GetElem(void);  //提取数据函数
        void PutElem(T x);  //存入数据函数
};

//以下实现各成员函数。
//注意：模板类的成员函数，若在类外实现，则必须是模板函数
template <class T>          // 缺省形式构造函数的实现 
Store<T>::Store(void): haveValue(0)
{}

template <class T>                // 提取数据函数的实现
T Store<T>::GetElem(void)    
{
    if (haveValue == 0)         // 如果试图提取未初始化的数据，则终止程序
    {
        cout << "No item present!" << endl;
        exit(1);
    }
    return item;    // 返回item中存放的数据 
}

template <class T>             // 存入数据函数的实现 
void Store<T>::PutElem(T x)
{
    haveValue++;      // 将haveValue 置为 TRUE，表示item中已存入数值
    item = x;         // 将x值存入item
}

int main()
{
    Student g= {1000, 23};  //声明Student类型结构体变量的同时赋以初值
	 Store<int> S1, S2;   //声明两个Store<int>类对象，其中数据成员item为int类型
	 Store<Student> S3;//声明Store<Student>类对象S3，其中数据成员item为Student类型
	 Store<double> D;   //声明Store<double>类对象D，其中数据成员item为double类型
	 S1.PutElem(3);    //向对象S1中存入数据（初始化对象S1）
    S2.PutElem(-7);   //向对象S2中存入数据（初始化对象S2）
    cout<<S1.GetElem()<<"  "<<S2.GetElem()<<endl;  //输出对象S1和S2的数据成员
	 S3.PutElem(g); //向对象D中存入数据（初始化对象D）
    cout <<"The student id is "<<S3.GetElem().id << endl;	//输出对象S3的数据成员
    cout << "Retrieving object D  " ;
	    cout << D.GetElem() << endl;  //输出对象D的数据成员
	// 由于D未经初始化,在执行函数D.GetElement()过程中导致程序终止
}
