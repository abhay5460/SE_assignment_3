// 1. Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

class Perform
{
	int n;
	
	public : 
			Perform()
			{
				cout<<"\n\n\t Enter the number :";
				cin>>n;
			}
			inline int multiplication()
			{
				return n*n;
			}
			inline int cubic()
			{
				return n*n*n;
			}
};
int main()
{
	Perform p;
	
	int m = p.multiplication();
	int c = p.cubic();
	
	cout<<"\n\n\t Print Multiplication is :"<<m;
	cout<<"\n\n\t Print Cubic Values is :"<<c;
}