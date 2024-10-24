/* 3. Write a C++ program to implement a class called Circle that has private member variables for radius.
 Include member functions to calculate the circle's area and circumference. */
#include<iostream>
using namespace std;

class Circle 
{
	private :
			int radius;
			float pi=3.14;
	public :
			void get()
			{
				cout<<"\n\n\t Enter the number A :";
				cin>>radius;
			}
			
			float area()
			{	
				return pi * radius * radius;
			}
			
			float circumference()
			{
				return 2 * pi * radius;
			}
};

int main()
{
	Circle obj;
	
	obj.get();
	cout<<"\n\n\t Area of Circle :"<<obj.area();
	cout<<"\n\n\t Area of Circumference :"<<obj.circumference();
}