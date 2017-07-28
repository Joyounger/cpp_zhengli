//9_9.h
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

enum Boolean {False, True};
#include "9_8.h"	// 包含栈类模板定义文件
class Calculator	//计算器类
{
    private:
      Stack<int> S;	// 操作数栈
      void Enter(int num);	//将操作数num压入栈
      //连续将两个操作数弹出栈，放在opnd1和opnd2中
      Boolean GetTwoOperands(int& opnd1, int& opnd2);
      void Compute(char op);	//执行由操作符op指定的运算
    public:
      Calculator(void);	//构造函数
      void Run(void);   //运行计算器程序
      void Clear(void);	//清空操作数栈
};

void Calculator::Enter(int num)	// 将操作数num压入栈
{    S.Push(num);  }

// 连续将两个操作数弹出栈，放在opnd1和opnd2中
// 如果栈中没有两个操作数，则返回False 并输出相关信息
Boolean Calculator::GetTwoOperands(int& opnd1, int& opnd2)
{
    if (S.StackEmpty())	// 检查栈是否空
    {
        cerr << "Missing operand!" << endl;
        return False;
    }
    opnd1 = S.Pop();	// 将右操作数弹出栈
    if (S.StackEmpty())	// 检查栈是否空
    {
        cerr << "Missing operand!" << endl;
        return False;
    }
    opnd2 = S.Pop();	// 将左操作数弹出栈
    return True;
}

void Calculator::Compute(char op)	// 执行运算
{
    Boolean result;
    int operand1, operand2;

    result = GetTwoOperands(operand1, operand2);   // 将两个操作数弹出栈

    if (result == True)	// 如果成功，执行运算并将运算结果压入栈
	{
        switch(op)
        {
            case '+':   S.Push(operand2+operand1);
                        break;
            case '-':   S.Push(operand2-operand1);
                        break;
            case '*':   S.Push(operand2*operand1);
                        break;
            case '/':   if (operand1 == 0)	//检查除数是否为0
                        {
                            cerr << "Divide by 0!" << endl;
                            S.ClearStack();	//除数为0时清空栈
                        }
                        else
                            S.Push(operand2/operand1);
                        break;
            case '^':   S.Push(pow(operand2,operand1));
                        break;
        }
        cout<<'='<<S.Peek()<<' ';	//输出本次运算结果 
    }
    else
        S.ClearStack();	// 操作数不够，清空栈
}

Calculator::Calculator(void)	//构造函数
{}

void Calculator::Run(void)	// 读入并处理后缀表达式
{
    char c[20];
            
    while(cin >> c, *c != 'q')	// 读入表达式，遇'q'结束
        switch(*c)
        {
          case 'c':  S.ClearStack();	//遇'c'清空操作数栈
                     break;
          case '-':	//遇'-'需判断是减号还是负号
                     if (strlen(c)>1)	//若字符串长度>1，说明读到的是负数的负号
                       Enter(atoi(c));	//将字符串转换为整数，压入栈
                     else
                       Compute(*c);	//若是减号则执行计算
                       break;
          case '+':	// 遇到其它操作符时
          case '*':
          case '/':
          case '^':
                     Compute(*c);	//执行计算
                     break;
          default:	// 若读入的是操作数，转换为整型后压入栈
                     Enter(atoi(c));
                     break;
        }
}

void Calculator::Clear(void)	// 清空操作数栈
{    S.ClearStack();  }

