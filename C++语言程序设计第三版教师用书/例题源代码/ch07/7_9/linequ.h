//linequ.h  文件一，类声明
#include <iostream>
#include <cmath>
using namespace std;
class Matrix	//基类Matrix声明
{
public:	//外部接口
	Matrix(int dims=2);	//构造函数
	~Matrix();	//析构函数
	void setMatrix(double* rmatr);	//矩阵赋初值
	void printM();	//显示矩阵
protected:	//保护数据成员
	int   index;	//矩阵的维数
	double* MatrixA;	//矩阵存放数组首地址
};
class Linequ: public Matrix	//公有派生类Linequ声明
{
public:	//外部接口
	Linequ(int dims=2);	//构造函数
	~Linequ();	//析构函数
	void setLinequ(double* a, double *b);	//方程赋值
	void printL();	//显示方程
	int Solve();	//全选主元高斯消去法求解方程
	void showX();	//显示方程的解
private:	//私有数据
	double *sums;	//方程右端项
	double *solu;	//方程的解
};
//End of file linequ.h
