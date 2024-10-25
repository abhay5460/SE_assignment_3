/* 7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
	Include member functions to set and get these variables, as well as to validate if the date is valid. */

#include<iostream>
using namespace std;

class Date 
{
	private :
			int day , month , year;
			
	public :
			int day1,month1,year1;
			
			Date()
			{
				day=25;
				month=1;
				year=2024;
			}
			void get()
			{
				cout<<"\n\n\t Enter the Day :";
				cin>>day1;
				
				cout<<"\n\n\t Enter the Month :";
				cin>>month1;
				
				cout<<"\n\n\t Enter the Year :";
				cin>>year1;
			}
			void print()
			{
				if(day==day1 && month==month1 && year==year1)
				{
					cout<<"\n\n\t Validate this Date of Birth .";
				}
				else
				{
					cout<<"\n\n\t Not Validate this Date of Birth .";
				}
			}			
};
int main()
{
	Date D;
	
	D.get();
	D.print();
}