//lineequ.cpp  文件二，类实现
#include "linequ.h"	//包含类的声明头文件
//the function member of Class Matrix	//基类成员函数的实现
//Public Function member No.1: Set Matrix value
void Matrix::setMatrix(double* rmatr)	//设置矩阵
{
	for(int i=0;i<index*index;i++){
	    *(MatrixA+i)=rmatr[i];	//矩阵成员赋初值
	}
}
//Public Function member No.2 Construction function
Matrix::Matrix(int dims)	//矩阵Matrix类的构造函数
{
	index=dims;	//保护数据赋值
	MatrixA=new double[index*index];	//动态内存分配
}
//Public Function member No.3 Destruction function
Matrix::~Matrix()	//矩阵Matrix类的析构函数
{
	delete[] MatrixA;	//内存释放
}
//Public Function member No.4 Show Matrix function
void Matrix::printM()	//显示矩阵的元素
{
	cout<<"The Matrix is:"<<endl;
	for(int i=0;i<index;i++){
	    for(int j=0;j<index;j++)
	        cout<<*(MatrixA+i*index+j)<<" ";
	    cout<<endl;
	}
}
//the function member of Class Linequ	//派生类的成员函数的实现
//Public Function member No.1 Construction function
Linequ::Linequ(int dims):Matrix(dims)	//派生类Linequ的构造函数
{		//使用参数调用基类构造函数
	sums=new double[dims];	//动态内存分配
	solu=new double[dims];
}
//Public Function member No.2 Destruction function
Linequ::~Linequ()	//派生类Linequ的析构函数
{		//调用基类析构函数
	delete[] sums;	//释放内存
	delete[] solu;
}
//Public Function member No.3 Set Line Equation function
void Linequ::setLinequ(double *a,double *b)	//设置线性方程组
{
	setMatrix(a);	//调用基类函数
	for(int i=0;i<index;i++)
	    sums[i]=b[i];
}
//Public Function member No.4 Show Line Equation function
void Linequ::printL()	//显示线性方程组
{
	cout<<"The Line eqution is:"<<endl;
	for(int i=0;i<index;i++){
	    for(int j=0;j<index;j++)
	        cout<<*(MatrixA+i*index+j)<<" ";
	    cout<<"     "<<sums[i]<<endl;
	}
}
//Public Function member No.5 Show solution function
void Linequ::showX()	//输出方程的解
{
	cout<<"The Result is:"<<endl;
	for(int i=0;i<index;i++){
	    cout<<"X["<<i<<"]="<<solu[i]<<endl;
	}
}
//Public Function member No.6 Construction function
int Linequ::Solve()	//全选主元高斯消去法求解方程
{
	int *js,l,k,i,j,is,p,q;
	double d,t;
	js=new int[index];
	l=1;
	for (k=0;k<=index-2;k++)	//消去过程
	{
	    d=0.0;
	    for (i=k;i<=index-1;i++)
	        for (j=k;j<=index-1;j++)
	        { t=fabs(MatrixA[i*index+j]);
	           if (t>d) 
	           { d=t; js[k]=j; is=i;  }
	        }
	    if (d+1.0==1.0) l=0;
	    else
	    { if (js[k]!=k)
	           for (i=0;i<=index-1;i++)
	           { p=i*index+k; q=i*index+js[k];
	              t=MatrixA[p]; MatrixA[p]=MatrixA[q]; MatrixA[q]=t;
	           }
	          if (is!=k)
	          {    for (j=k;j<=index-1;j++)
	                { p=k*index+j; q=is*index+j;
	                   t=MatrixA[p]; MatrixA[p]=MatrixA[q]; MatrixA[q]=t;
	                }
	                t=sums[k]; sums[k]=sums[is]; sums[is]=t;
	          }
	    }
	    if (l==0)
	    { delete[] js; cout<<"fail"<<endl;
	       return(0);
	    }
	    d=MatrixA[k*index+k];
	    for (j=k+1;j<=index-1;j++)
	    { p=k*index+j; MatrixA[p]=MatrixA[p]/d;}
	    sums[k]=sums[k]/d;
	    for (i=k+1;i<=index-1;i++)
	    { for (j=k+1;j<=index-1;j++)
	        { p=i*index+j;
	           MatrixA[p]=MatrixA[p]-MatrixA[i*index+k]*MatrixA[k*index+j];
	         }
	        sums[i]=sums[i]-MatrixA[i*index+k]*sums[k];
	    }
	}
	d=MatrixA[(index-1)*index+index-1];
	if (fabs(d)+1.0==1.0)
	{  delete[] js; cout<<"fail"<<endl;
	    return(0);
	}
	solu[index-1]=sums[index-1]/d;	//回代过程
	for (i=index-2;i>=0;i--)
	{   t=0.0;
	     for (j=i+1;j<=index-1;j++)
	          t=t+MatrixA[i*index+j]*solu[j];
	     solu[i]=sums[i]-t;
	}
	js[index-1]=index-1;
	for (k=index-1;k>=0;k--)
	    if (js[k]!=k)
	    { t=solu[k]; solu[k]=solu[js[k]]; solu[js[k]]=t;}
	delete[] js;
	return(1);
}
//End of file linequ.cpp
