//5_2.cpp
#include<iostream>
using namespace std;
int i=1;	// i Ϊȫ�ֱ��������о�̬�����ڡ�
int main()   
{ static int a;	// aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���
   int b=-10;	// b, cΪ�ֲ����������ж�̬�����ڡ�
  int c=0;
  void other(void);
  cout<<"---MAIN---\n";
  cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
  c=c+8;  other();
  cout<<"---MAIN---\n";
  cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
  i=i+10; other();  }
void other(void)
{
  static int a=2;
  static int b;
       // a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���ֻ��һ�ν��뺯��ʱ����ʼ����
  int c=10;   // CΪ�ֲ����������ж�̬�����ڣ�ÿ�ν��뺯��ʱ����ʼ����
  a=a+2; i=i+32; c=c+5;
  cout<<"---OTHER---\n";
  cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
  b=a;
}
