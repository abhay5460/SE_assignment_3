// 2. Write a C++ Program to find Area of Rectangle using inheritance.
#include<iostream>
using namespace std;

class area
{
	public :	
			float pi;
			int radius;
			
			void a()
			{
				cout<<"\n\n\t Enter the pi value :";
				cin>>pi;
				
				cout<<"\n\n\t Enter the radius :";
				cin>>radius;
			}
};

class rectangle : public area
{
	float calculate;
	
	public :
			void input()
			{
				a();
			}
			
			void display()
			{
				calculate = 2*pi*radius;
				
				cout<<"\n\n\t Area of Rectangle is :"<<calculate;
			}
};

int main()
{
	rectangle r;
	
	r.input();
	r.display();
}