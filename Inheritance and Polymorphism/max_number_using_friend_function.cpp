// 13. Write a program to find the max number from given two numbers using friend function.
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
			
			friend int findMax(Number &n1,Number &n2);
			
			void display()
			{
				cout<<num<<endl;	
			}	
};

int findMax(Number &n1, Number &n2)
{
	if(n1.num > n2.num )
	{
		return n1.num;
	}
	else
	{
		return n2.num;
	}
}

int main()
{
	Number num1(10);
	Number num2(20);
	
	cout<<"Number 1 :";
	num1.display();
	cout<<"Number 2 :";
	num2.display();
	
	int max = findMax(num1 , num2);
	
	cout<<"The maximum number is :"<<max<<endl;
	
	return 0;
}