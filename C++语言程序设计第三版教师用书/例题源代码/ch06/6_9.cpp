//6_9.cpp
#include <iostream>
using namespace std;
int main()
{
	int array2[2][3]={{11,12,13},{21,22,23}};	//������άint������
	for(int i=0;i<2;i++)
      {
	    cout<<*(array2+i)<<endl;	//�����ά�����i�е��׵�ַ
	    for(int j=0;j<3;j++)
          {  cout<<*(*(array2+i)+j)<<" ";    }	//��������ά�����i��Ԫ��ֵ
	    cout<<endl;
	}
}
