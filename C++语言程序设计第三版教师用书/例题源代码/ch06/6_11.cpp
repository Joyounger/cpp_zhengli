//6_11.cpp
#include <iostream>
using namespace std;
void print_stuff(float data_to_ignore);
void print_message(float list_this_data);
void print_float(float data_to_print);
void (*function_pointer)(float);	//void类型的函数指针

int main()	//主函数
{
	float pi = (float)3.14159;
	float two_pi = (float)2.0 * pi;
	print_stuff(pi);
	function_pointer = print_stuff;	//函数指针指向print_stuff
   	function_pointer(pi);	//函数指针调用
   	function_pointer = print_message;	//函数指针指向print_message
   	function_pointer(two_pi);	//函数指针调用
   	function_pointer(13.0);	//函数指针调用
   	function_pointer = print_float;	//函数指针指向print_float
   	function_pointer(pi);	//函数指针调用
   	print_float(pi);
}

void print_stuff(float data_to_ignore)
{	cout<<"This is the print stuff function.\n";    }

void print_message(float list_this_data)
{	cout<<"The data to be listed is "<<list_this_data<<endl;    }

void print_float(float data_to_print)
{	cout<<"The data to be printed is "<<data_to_print<<endl;    }
