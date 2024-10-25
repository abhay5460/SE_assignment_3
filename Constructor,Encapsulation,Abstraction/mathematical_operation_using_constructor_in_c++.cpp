// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Operation
{
	int a , b;
	
	public :
			Operation()
			{
				a=6;
				b=2;
			}
			void print()
			{
				cout<<"\n\n\t Addition is :"<< a+b;
				cout<<"\n\n\t Substraction is :"<< a-b;
				cout<<"\n\n\t Multiplication is :"<< a*b;
				cout<<"\n\n\t Division is :"<< a/b;
			}
			
};
int main()
{
	Operation E;

	E.print();
}