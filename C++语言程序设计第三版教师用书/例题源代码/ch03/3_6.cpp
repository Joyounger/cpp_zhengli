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
  cin>>seed;//输入随机数种子
  srand(seed);//将种子传递给rand()
  sum=rolldice(); //第一轮投骰子、计算和数
  switch(sum)
  {
    case 7:   //如果和数为7或11则为胜,状态为1
    case 11:
           gamestatus=1;
            break;
    case 2:   //和数为2、3或12则为负,状态为1
    case 3: 
    case 12:
           gamestatus=2;
           break;
    default:   //其它情况,游戏尚无结果,状态为0,记下点数,为下一轮做准备
           gamestatus=0;
           mypoint=sum  ;
           cout<<"point is "<<mypoint<<endl;
    break;
  }
  while (gamestatus==0)  //只要状态仍为0,就继续进行下一轮
  {
    sum=rolldice();
    if(sum==mypoint)    //某轮的和数等于点数则取胜,状态置为1
      gamestatus=1  ;
    else
      if (  sum==7  )    //出现和数为7则为负,状态置为2
        gamestatus=2;
  }
//当状态不为0时上面的循环结束,以下程序段输出游戏结果
  if(  gamestatus==1  )
    cout<<"player wins\n";
  else
    cout<<"player loses\n";
}
int rolldice(void)
{ //投骰子、计算和数、输出和数
  int die1,die2,worksum;
  die1=1+rand()%6;
  die2=1+rand()%6;
  worksum=die1+die2;
  cout<<"player rolled "<<die1<<'+'<<die2<<'='<<worksum<<endl;
  return worksum;
}
