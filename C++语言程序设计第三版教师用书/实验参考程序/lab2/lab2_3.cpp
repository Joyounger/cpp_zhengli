#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	int iType;
	float radius, a, b, area;
	
	cout << "ͼ�ε�����Ϊ?(1-Բ�� 2-������ 3-������):";
	cin >> iType;
	switch(iType)
	{
	case 1:
		cout << "Բ�İ뾶Ϊ��";
		cin >> radius;
		area = PI * radius * radius;
		cout<<"���Ϊ��"<<area<<endl;
		break;
	case 2:
		cout << "���εĳ�Ϊ��";
		cin >> a;
		cout << "���εĿ�Ϊ��";
		cin >> b;
		area = a * b;
	    cout<<"���Ϊ��"<<area<<endl;
		break;
	case 3:
		cout << "�����εı߳�Ϊ��";
		cin >> a;
		area = a * a;
    	cout<<"���Ϊ��"<<area<<endl;
		break;
	default:
		cout << "���ǺϷ�������ֵ!"<<endl;
	}
}
