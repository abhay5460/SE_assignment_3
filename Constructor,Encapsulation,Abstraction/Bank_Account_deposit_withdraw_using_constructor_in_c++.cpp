/* 4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. 
	Include member functions to deposit and withdraw money from the account. */
#include<iostream>
using namespace std;

class Bank_Account
{
	private :
			 int account_number;
			 int balance;
			 
	public :
			int number,amount;
			
			 Bank_Account()
			 {
			 	cout<<"\n\n\t Enter the Account Number :";
			 	cin>>account_number;
			 	
			 	cout<<"\n\n\t Enter the Balance :";
			 	cin>>balance;
			 }
			 void deposit()
			 {
			 	int number,amount;
			 	
			 	cout<<"\n\n\t Enter the Account number :";
			 	cin>>number;
			 	
			 	if(account_number==number)
			 	{
			 		cout<<"\n\n\t Enter the Account amount :";
			 		cin>>amount;
			 		if(amount > 0)
			 		{
			 			balance += amount;
			 		
			 			cout<<"\n\n\t Current Balance is :"<<balance;
					}
					else
					{
						cout<<"\n\n\t No valid amount.";
					}
			 	
				}
				else
				{
					cout<<"\n\n\t Invalid Number .";
				}
			 }
			 void withdraw_money()
			 {
			 	cout<<"\n\n\t Enter the Account number :";
			 	cin>>number;
			 	
			 	if(account_number==number)
			 	{
			 		cout<<"\n\n\t Enter the amount :";
			 		cin>>amount;
					if(amount >  0 && amount <= balance)
					{
						balance -= amount;
			 		
			 			cout<<"\n\n\t Current Balance is :"<<balance;
					}
					else
					{
						cout<<"\n\n\t Invalid amount.";
					}
				}
				else
				{
					cout<<"\n\n\t Invalid Number .";
				}
			 }
			 void display()
			 {
			 	cout<<"\n\n\t print the account number :"<<account_number;
			 	cout<<"\n\n\t print the balance :"<<balance;
			 }
};
int main()
{
	Bank_Account B;
	
	int choice;
	char ch;
	
	do
	{
		cout<<"\n\n\t Welcome to Circus :";	
		cout<<"\n\n\t 1.Deposit Money :";
		cout<<"\n\n\t 2.Withdraw Money :";
		cout<<"\n\n\t 3.Display details :";
		cout<<"\n\n\t 4.Exit";
		
		cout<<"\n\n\t Enter the choice :";
		cin>>choice;
		
		switch(choice)
		{
			case 1: B.deposit();
					break;
			
			case 2: B.withdraw_money();
					break;
			
			case 3: B.display();
					break;
			
			case 4: exit(0);
			
			default : cout<<"No choice";
		}
		cout<<"\n\n\t Do you want to more operation :";
		cin>>ch;
		
	}while(ch=='y' ^ ch=='Y');
	

}