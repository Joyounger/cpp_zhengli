//6_10.cpp
#include <iostream>
using namespace std;
void splitfloat(float x, int *intpart, float *fracpart)
                                  //�β�intpart��fracpart��ָ��
{
	*intpart=int(x);	//ȡx����������
	*fracpart=x-*intpart;	//ȡx��С������
}

int main()
{
	int i,n;
	float x,f;
	cout<<"Enter 3 float point numbers:"<<endl;
	for(i=0;i<3;i++)
	{
	    cin>>x;
	    splitfloat(x,&n,&f);	//������ַ��Ϊʵ��
	    cout<<"Integer Part="<<n<<" Fraction Part="<<f<<endl;
	}
}
