/* 1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer.Data member of batsman. Total runs, Average runs and best
   performance.Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;

class Cricketer
{
	protected :
			string batsman_name;
			int total_runs;
			int best_performance;
			int n;
			
	public :
			void input_data()
			{
				cout<<"\n\n\t Enter the name :";
				cin>>batsman_name;
				
				cout<<"\n\n\t Enter the total matches :";
				cin>>n;
				
				cout<<"\n\n\t Enter the total runs:";
				cin>>total_runs;
				
				cout<<"\n\n\t Enter the best performance :";
				cin>>best_performance;
		
			}
};

class batsman : public Cricketer
{
	private :
			float average;
	
	public :	
			void average_runs()
			{
				average = total_runs / n;
			}
			
			void display_data()
			{
				average_runs();
				
				cout<<"\n\n\t Batsman name is :"<<batsman_name;
				cout<<"\n\n\t Total runs :"<<total_runs;
				cout<<"\n\n\t average runs :"<<average;
				cout<<"\n\n\t best performance :"<<best_performance;
			}
};

int main()
{
		batsman b;
		
		b.input_data();
		b.display_data();
}