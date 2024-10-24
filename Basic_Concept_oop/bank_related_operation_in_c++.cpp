/* 2.) Define a class to represent a bank account. Include the following members:
	Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
	Member Functions
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance */
#include<iostream>
using namespace std;

class bank
{
	private : 
			 string depositorName;
		     int accountNumber;
		     string accountType;
		     float balance;
	
	public :
			void BankAccount() 
			{
				cout<<"\n\n\t Enter Depositor Name :";
				cin>>depositorName;
				
				cout<<"\n\n\t Enter Account Number :";
				cin>>accountNumber;
				
				cout<<"\n\n\t Enter Account Type :";
				cin>>accountType;
				
				cout<<"\n\n\t Enter Balance Amount :";
				cin>>balance;
		    }

    		void deposit() 
			{
				float amount;
				
				cout<<"\n\n\t Enter the Amount :";
				cin>>amount;
				
		        balance += amount;
		        cout << "\n\n\t Deposited: " << amount << "\n\n\t New balance: " << balance;
		  	}

			void withdraw()
			{
				float amount;
				
				cout<<"\n\n\t Enter the Amount :";
				cin>>amount;
				
			        balance -= amount;
			        cout << "\n\n\tWithdrawn " << amount << "\n\n\t New balance: " << balance;
			
			}
			
    		void display()
			{
        		cout << "\n\n\tDepositor: " << depositorName;
        		cout << "\n\n\tAccount number :" << accountNumber;
        		cout << "\n\n\tAccount Type :" << accountType;
        		cout << "\n\n\tBalance: " << balance;
        	}
    
};
int main()
{
	bank I;
	
	int choice;
	char ch;
	
	do
	{
		cout<<"\n\n\t 1.Input the Bank Details.";
		cout<<"\n\n\t 2.Deposit Amount.";
		cout<<"\n\n\t 3.Withdraw Amount.";
		cout<<"\n\n\t 4.Display Details";

		cout<<"\n\n\t Enter the choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1 :  I.BankAccount();
					 break;
					 
			case 2 : I.deposit();
					 break;
					  		 
			case 3 :  I.withdraw();
					 break;
					 
			case 4 :  I.display();
					 break;
					 		
			default :cout << "No Choice.";
					 break;
	  	 }
		
		cout<<"\n\n\t Do you want to continue :";
		cin>>ch;
		
	}while(ch=='y' || ch=='Y');
	
}
