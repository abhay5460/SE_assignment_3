// 1. WAP to create simple calculator using class.
#include<iostream>
using namespace std;

class calculator
{
	private :
			int a , b;
	
	public :
			void get()
			{
				cout<<"\n\n\t Enter the a:";
				cin>>a;
				
				cout<<"\n\n\t Enter the b:";
				cin>>b;
			}
			int Addition()
			{
				return a+b;
			}
			
			int multiplication()
			{
				return a*b;
			}
			
			int substraction()
			{
				return a-b;
			}
			
			int division()
			{
				return a/b;
			}
			
			int modulo()
			{
				return a%b;
			}
};
int main()
{
	char ch;
	
	calculator c;
	do
	{
		c.get();
	
		int choice;
		
		cout<<"\n\n\t Enter the number :";
		cin>>choice;
		
		switch(choice)
		{
			case 1 : cout<<"\n\n\t Addition is : "<<c.Addition();
					 break;
					 
			case 2 : cout<<"\n\n\t Substraction is : "<<c.substraction();
					 break;
			
			case 3 : cout<<"\n\n\t Multiplication is : "<<c.multiplication();
					 break;
					 
			case 4 : cout<<"\n\n\t Division is : "<<c.division();
					 break;
					 
			case 5 : cout<<"\n\n\t Modulo is : "<<c.modulo();
					 break;
					
			default : cout<<"\n\n\t No choice";
					  break;
		}
		
		cout<<"\n\n\t Do you want to continue :";
		cin>>ch;
	}while(ch=='y' ^ ch=='Y');
}