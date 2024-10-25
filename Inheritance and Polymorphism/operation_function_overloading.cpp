/* 8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters
	 and Function Overloading. */
#include<iostream>
using namespace std;

class Operation
{
	private :
		
	public :	
			int function(int a,int b)
			{
				return a*b;	
			}	
			float function(float a, float b)
			{
				return a-b;
			}
			double function(double a, double b)
			{
				return a/b;
			}
			int function(int a, int b,int c)
			{
				return a+b+c;
			}
};

int main()
{
	Operation op;
	cout << "Multiplication Is: " << op.function(22,4) << endl;
	cout << "Substraction Is: " << op.function(4.0,2.0)<< endl;
	cout << "Division Is: " << op.function(8.0,2.0)<< endl;
	cout << "Addition Is: " << op.function(4,2,8);
}