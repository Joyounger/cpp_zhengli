//linequ.h  �ļ�һ��������
#include <iostream>
#include <cmath>
using namespace std;
class Matrix	//����Matrix����
{
public:	//�ⲿ�ӿ�
	Matrix(int dims=2);	//���캯��
	~Matrix();	//��������
	void setMatrix(double* rmatr);	//���󸳳�ֵ
	void printM();	//��ʾ����
protected:	//�������ݳ�Ա
	int   index;	//�����ά��
	double* MatrixA;	//�����������׵�ַ
};
class Linequ: public Matrix	//����������Linequ����
{
public:	//�ⲿ�ӿ�
	Linequ(int dims=2);	//���캯��
	~Linequ();	//��������
	void setLinequ(double* a, double *b);	//���̸�ֵ
	void printL();	//��ʾ����
	int Solve();	//ȫѡ��Ԫ��˹��ȥ����ⷽ��
	void showX();	//��ʾ���̵Ľ�
private:	//˽������
	double *sums;	//�����Ҷ���
	double *solu;	//���̵Ľ�
};
//End of file linequ.h
