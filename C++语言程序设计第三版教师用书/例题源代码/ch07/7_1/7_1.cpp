//7_1.cpp
#include<iostream>
#include<cmath>
#include "rectangle.h"
using namespace std;
int main()
{
	Rectangle rect;	//����Rectangle��Ķ���
	rect.InitR(2,3,20,10);	//���þ��ε�����
	rect.Move(3,2);	//�ƶ�����λ��
	cout<<"The data of rect(X,Y,W,H):"<<endl;
	cout<<rect.GetX()<<","	//������ε���������
	      <<rect.GetY()<<","
	      <<rect.GetW()<<","
	      <<rect.GetH()<<endl;
}
//End of 7_1.cpp
