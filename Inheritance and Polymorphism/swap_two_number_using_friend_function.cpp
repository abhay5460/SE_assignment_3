// 12. Write a program to swap the two numbers using friend function without using third variable.
#include<iostream>
using namespace std;

class Number 
{
	private :
			int num;
			
	public :	
			Number(int n) : num(n)
			{
			}
			friend void swapNumbers(Number &n1 , Number &n2);
			
			void display()
			{
				cout<<"Number :"<<num<<endl;
			}
};

void swapNumbers(Number &n1, Number &n2)
{
	  n1.num = n1.num + n2.num;
	  n2.num = n1.num - n2.num;
	  n1.num = n1.num - n2.num;
}

int main()
{
	Number num1(10);
	Number num2(20);
	
	cout<<"Before Swapping :"<<endl;
	
	num1.display();
	num2.display();
	
	swapNumbers(num1,num2);
	
	cout<<"After swapping :"<<endl;
	num1.display();
	num2.display();
	
}