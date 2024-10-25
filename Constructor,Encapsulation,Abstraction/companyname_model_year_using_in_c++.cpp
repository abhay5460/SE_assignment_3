/* 3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
	Implement member functions to get and set these variables. */
	
#include<iostream>
using namespace std;

class Car
{
	private :
			 string company_name;
			 string model;
			 int year;
	public :
			 Car()
			 {
				cout<<"\n\n\t Enter the company name :";
				cin>>company_name;
				
				cout<<"\n\n\t Enter the model :";
				cin>>model;
				
				cout<<"\n\n\t Enter the year :";
				cin>>year;
			 }
			 void set()
			 {
			 	cout<<"\n\n\t Company name :"<<company_name;
			 	cout<<"\n\n\t Model :"<<model;
			 	cout<<"\n\n\t Year :"<<year;
			 }
};
int main()
{
	Car c;
	
	c.set();
}