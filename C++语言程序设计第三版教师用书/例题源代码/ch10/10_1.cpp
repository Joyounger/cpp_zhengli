//10_1.cpp
#include <iostream>
#include <iomanip>
#include <vector>	//������������ͷ�ļ�
using namespace std ;
int main()
{    
    vector<int>  A(10);	// ���������������������ʼ״̬��10��Ԫ�ء�
    int n;	//������Χ�����ޣ�����ʱ����
    int primecount = 0, i, j;
    cout << "Enter a value >= 2 as upper limit for prime numbers: ";
    cin >> n;
    A[primecount++] = 2;	// 2��һ������
    for(i = 3; i < n; i++)
    {
        if (primecount == A.size())	// �����������������������10��Ԫ�صĿռ�
            A.resize(primecount + 10); 
        if (i % 2 == 0)	//����2��ż����������������Թ�����ѭ���ĺ�̲���
            continue;
        // ���3,5,7,...,i/2�Ƿ�i������
        j = 3;
        while (j <= i/2 && i % j != 0)
            j += 2;        

        if (j > i/2)	// ��������������Ϊi������,��iΪ����
            A[primecount++] = i;
    }
    for (i = 0; i < primecount; i++)	//�������
    {
        cout << setw(5) << A[i]; 
        if ((i+1) % 10 == 0)	//ÿ���10��������һ��
            cout << endl;
    } 
    cout << endl;
}
