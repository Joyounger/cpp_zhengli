//lineequ.cpp  �ļ�������ʵ��
#include "linequ.h"	//�����������ͷ�ļ�
//the function member of Class Matrix	//�����Ա������ʵ��
//Public Function member No.1: Set Matrix value
void Matrix::setMatrix(double* rmatr)	//���þ���
{
	for(int i=0;i<index*index;i++){
	    *(MatrixA+i)=rmatr[i];	//�����Ա����ֵ
	}
}
//Public Function member No.2 Construction function
Matrix::Matrix(int dims)	//����Matrix��Ĺ��캯��
{
	index=dims;	//�������ݸ�ֵ
	MatrixA=new double[index*index];	//��̬�ڴ����
}
//Public Function member No.3 Destruction function
Matrix::~Matrix()	//����Matrix�����������
{
	delete[] MatrixA;	//�ڴ��ͷ�
}
//Public Function member No.4 Show Matrix function
void Matrix::printM()	//��ʾ�����Ԫ��
{
	cout<<"The Matrix is:"<<endl;
	for(int i=0;i<index;i++){
	    for(int j=0;j<index;j++)
	        cout<<*(MatrixA+i*index+j)<<" ";
	    cout<<endl;
	}
}
//the function member of Class Linequ	//������ĳ�Ա������ʵ��
//Public Function member No.1 Construction function
Linequ::Linequ(int dims):Matrix(dims)	//������Linequ�Ĺ��캯��
{		//ʹ�ò������û��๹�캯��
	sums=new double[dims];	//��̬�ڴ����
	solu=new double[dims];
}
//Public Function member No.2 Destruction function
Linequ::~Linequ()	//������Linequ����������
{		//���û�����������
	delete[] sums;	//�ͷ��ڴ�
	delete[] solu;
}
//Public Function member No.3 Set Line Equation function
void Linequ::setLinequ(double *a,double *b)	//�������Է�����
{
	setMatrix(a);	//���û��ຯ��
	for(int i=0;i<index;i++)
	    sums[i]=b[i];
}
//Public Function member No.4 Show Line Equation function
void Linequ::printL()	//��ʾ���Է�����
{
	cout<<"The Line eqution is:"<<endl;
	for(int i=0;i<index;i++){
	    for(int j=0;j<index;j++)
	        cout<<*(MatrixA+i*index+j)<<" ";
	    cout<<"     "<<sums[i]<<endl;
	}
}
//Public Function member No.5 Show solution function
void Linequ::showX()	//������̵Ľ�
{
	cout<<"The Result is:"<<endl;
	for(int i=0;i<index;i++){
	    cout<<"X["<<i<<"]="<<solu[i]<<endl;
	}
}
//Public Function member No.6 Construction function
int Linequ::Solve()	//ȫѡ��Ԫ��˹��ȥ����ⷽ��
{
	int *js,l,k,i,j,is,p,q;
	double d,t;
	js=new int[index];
	l=1;
	for (k=0;k<=index-2;k++)	//��ȥ����
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
	solu[index-1]=sums[index-1]/d;	//�ش�����
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
