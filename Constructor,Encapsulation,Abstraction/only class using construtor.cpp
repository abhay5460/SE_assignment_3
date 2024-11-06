// Operation using one class and constructor .

#include<iostream>
using namespace std;

class Operation
{
	private :	
			void cube()
			{
				int Num;
				
				cout<<"\n\n\t Enter the number :";
				cin>>Num;
				
				cout<<"\n\n\t Cube :"<<Num*Num*Num<<endl;	
			}	
			
			void Fibonaaci()
			{
				int a=0 , b=1 , n , sum=0;
				
				cout<<"\n\n\t Enter the number :";
				cin>>n;
				
				cout<<"\n\n\t Fibonaaci Series : "<<a<<" "<<b;
				
				for(int i=1;i<=n;i++)
				{
					sum=a+b;
					cout<<" "<<sum;
					a=b;
					b=sum;
				}
			}
			
			void Factorial()
			{
				int num , temp=1;
				
				cout<<"\n\n\t Enter the number :";
				cin>>num;
				
				for(int i=1;i<=num;i++)
				{
					temp *= i;
				}
				cout<<"\n\n\t Factorial Print :"<<temp;
			}
			
			void sum()
			{
				int num , temp=0;
				
				cout<<"\n\n\t Enter the number :";
				cin>>num;
				
				for(int i=1;i<=num;i++)
				{
					temp += i;
				}
				cout<<"\n\n\t Sum of Number Print :"<<temp;
			}
			
			void sum_digit()
			{
				int num,sum=0;
				
				cout<<"\n\n\t Enter the number :";
				cin>>num;
				
				while(num != 0)
				{
					sum += num % 10;
					num /= 10;
					
				}
				cout<<"\n\n\t Sum of Digits is :"<<sum<<endl;
			}
			
	public :
			Operation(int choice)
			{
				switch(choice)
				{
					case 1 : cube();
							 break;
					
					case 2 : Fibonaaci();
							 break;
					
					case 3 : Factorial();
							 break;
					
					case 4 : sum();
							 break;
					
					case 5 : sum_digit();
							 break;
							 
					default : cout<<"\n\n\t No Choice :";
							 break;
				}
			}
};

int main()
{
	int choice;
	
	cout<<"\n\n\t 1. Cube Number :"
		<<"\n\n\t 2. Fibonaaci Series :"
		<<"\n\n\t 3. Factorial Number :"
		<<"\n\n\t 4. Sum of Number :"
		<<"\n\n\t 5. Sum of Digits :";
		
	cout<<"\n\n\t Enter the choice:";
	cin>>choice;
	
	Operation obj(choice);
}