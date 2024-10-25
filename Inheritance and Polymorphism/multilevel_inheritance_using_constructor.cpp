// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.
#include<iostream>
using namespace std;

class A
{
	protected :	
				int n=5;
	public :
			A()
			{
				cout<<"\n\n\t Class A Value is : "<<n;
			}	
};

class B : public A
{
	protected :	
				int n1=10;
	public :
			B()
			{
				cout<<"\n\n\t Class B Value is : "<<n1;
			}
};

class C : public B
{
	private :
				int n2=15;
	public :		
			C()
			{
				cout<<"\n\n\t Class C Value is : "<<n2;	
			}	
};

int main()
{
	C g;
}