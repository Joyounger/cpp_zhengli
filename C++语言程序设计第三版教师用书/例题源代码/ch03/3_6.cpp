//3_6.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int rolldice(void);
int main()
{
  int gamestatus,sum,mypoint;
  unsigned seed; 
  cout<<"Please enter an unsigned integer:";
  cin>>seed;//�������������
  srand(seed);//�����Ӵ��ݸ�rand()
  sum=rolldice(); //��һ��Ͷ���ӡ��������
  switch(sum)
  {
    case 7:   //�������Ϊ7��11��Ϊʤ,״̬Ϊ1
    case 11:
           gamestatus=1;
            break;
    case 2:   //����Ϊ2��3��12��Ϊ��,״̬Ϊ1
    case 3: 
    case 12:
           gamestatus=2;
           break;
    default:   //�������,��Ϸ���޽��,״̬Ϊ0,���µ���,Ϊ��һ����׼��
           gamestatus=0;
           mypoint=sum  ;
           cout<<"point is "<<mypoint<<endl;
    break;
  }
  while (gamestatus==0)  //ֻҪ״̬��Ϊ0,�ͼ���������һ��
  {
    sum=rolldice();
    if(sum==mypoint)    //ĳ�ֵĺ������ڵ�����ȡʤ,״̬��Ϊ1
      gamestatus=1  ;
    else
      if (  sum==7  )    //���ֺ���Ϊ7��Ϊ��,״̬��Ϊ2
        gamestatus=2;
  }
//��״̬��Ϊ0ʱ�����ѭ������,���³���������Ϸ���
  if(  gamestatus==1  )
    cout<<"player wins\n";
  else
    cout<<"player loses\n";
}
int rolldice(void)
{ //Ͷ���ӡ�����������������
  int die1,die2,worksum;
  die1=1+rand()%6;
  die2=1+rand()%6;
  worksum=die1+die2;
  cout<<"player rolled "<<die1<<'+'<<die2<<'='<<worksum<<endl;
  return worksum;
}
