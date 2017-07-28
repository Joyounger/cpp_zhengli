//5_10.cpp
//本题为“分析错误原因”，故本程序有编译错误
#include<iostream >
using namespace std;
class A
{
   public:
	   A(){ count++; d=10;}
       void Disp();
	   static int count;
   private:
       double d;
};
int A::count=0;
void A::Disp(){ 	cout<<"The Value is:"<<d<<endl;  }

int main()
{
	if (A::count==0)
	{
		A a;
		A *pa=NULL;
		pa=&a;
	}
	pa->Disp();
	cout<<"A::Count:"<<A::count<<endl; 
	return 0;
}
