// method overrriding 

#include<iostream>
using namespace std;

class student_personal
{
	private :
			int rollno;
			string name;
			string city;
	public :
			void input()
			{
				cout<<"\n\n\t Enter the Roll no :";
				cin>>rollno;
				
				cout<<"\n\n\t Enter the name :";
				cin>>name;
				
				cout<<"\n\n\t Enter the city :";
				cin>>city;
			}
			void print()
			{
				cout<<"\n\n\t Roll No :"<<rollno;
				cout<<"\n\n\t Name is :"<<name;
				cout<<"\n\n\t City is :"<<city;
			}
};

class student_Education : public student_personal
{
	private :
			int marks[5],temp=0;
			float per;
			char grade;
	public :
			void input()
			{
				cout<<"\n\n\t --- Enter the marks ---";
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Marks in "<<i+1<<" Subject :";
					cin>>marks[i];
					temp += marks[i];
				}
				
				per = temp/5;
			}
				
			void print()
			{
				cout<<"\n\n\t Print the marks :";
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Marks in "<<i+1<<" Subject :"<<marks[i];
				}
				
				cout<<"\n\n\t Percentage is :"<<per;
				
				if(per>=75)
				{
					cout<<"\n\n\t grade A";
				}
				else if(per>=60)
				{
					cout<<"\n\n\t grade B";
				}
				else if(per>=40)
				{
					cout<<"\n\n\t grade C";
				}
				else 
				{
					cout<<"\n\n\t grade D";
				}
			}
};

int main()
{
	student_Education obj;
	
	obj.student_personal::input();
	obj.input();
	cout<<"\n\n\t-----------------Print The Details -----------";
	obj.student_personal::print();
	obj.print();	 
}