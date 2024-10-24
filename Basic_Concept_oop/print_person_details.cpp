/* 5. Write a C++ program to create a class called Person that has private member variables for name, age and country.
	 Implement member functions to set and get the values of these variables. */
	 
#include<iostream>
using namespace std;

class Person
{
	private :
			 string name;
			 int age;
			 string country;
	
	public :
			 void get()
			 {
				cout<<"\n\n\t Enter Name :";
				cin>>name;
				
				cout<<"\n\n\t Enter Age :";
				cin>>age;
				
				cout<<"\n\n\t Enter Country :";
				cin>>country;
			 }
			 
			 void set()
			 {
			 	cout<<"\n\n\t Name :"<<name;
			 	cout<<"\n\n\t Age :"<<age;
			 	cout<<"\n\n\t Country :"<<country;
			 }
};

int main()
{
	Person obj;
	
	obj.get();
	obj.set();
}