/* 5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
	Implement member functions to determine if the triangle is equilateral, isosceles, or scalene. */
	
#include<iostream>
using namespace std;

class triangle
{
	private :
			int Length1 , Length2 , Length3;
			
	public :
			triangle()
			{
				cout<<"\n\n\t Enter the Length 1 :";
				cin>>Length1;
				
				cout<<"\n\n\t Enter the Length 2 :";
				cin>>Length2;
				
				cout<<"\n\n\t Enter the Length 3 :";
				cin>>Length3;
			}
			void set()
			{
				if(Length1==Length2 && Length2==Length3)
				{
					cout<<"\n\n\t Triangle is equilateral.";
				}
				else if(Length1==Length2 || Length2==Length3 || Length1==Length3)
				{
					cout<<"\n\n\t Triangle is isosceles.";
				}
				else
				{
					cout<<"\n\n\t Triangle is scalene.";
				}
			}	
};

int main()
{
	triangle T;
	
	T.set();
}