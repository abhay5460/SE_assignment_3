/* 8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
	 Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each 
 	 student implement using of aggregation. */

#include<iostream>
#include<string>
using namespace std;

class address
{
	private :
			string address;
			
	public :
			
			void input()
			{	
				cout<<"\n\n\t Enter the address :";
				getline(cin,address);		
			}
			
			void displayaddress()
			{
				cout<<"\n\n\t Enter the address :"<<address;		
			}
};

class Student
{
	private:
			string name;
			char Class;
			int roll_number;
			int marks[5];
			
			address a;
			
			
	public:
			float per;
			char grade;
			int total=0;
			
			Student()
			{
				cout<<"\n\n\t Enter the Student Name :";
				cin>>name;
				
				cout<<"\n\n\t Enter the Student Class :";
				cin>>Class;
				
				cout<<"\n\n\t Enter the Roll number :";
				cin>>roll_number;
				
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter the Marks :";
					cin>>marks[i];
					
					total += marks[i];
				}
				per = total / 5;
			
				cin.ignore();	
				a.input();
				
				
			}
			
			void display()
			{
				cout<<"\n-------------This is Student Details--------------\n";
				cout<<"\n\n\t Student Name :"<<name;
				cout<<"\n\n\t Student Class :"<<Class;
				cout<<"\n\n\t Student Roll number :"<<roll_number;
			   
				a.displayaddress();
								   	
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Student Marks :"<<marks[i];
				}
				
				cout<<"\n\n\t Student Percentage :"<<per;
				
				if(per>=80)
				{
					grade='A';
					cout<<"\n\n\t Grade is :"<<grade;
				}
				else if(per>=65)
				{
					grade='B';
					cout<<"\n\n\t Grade is :"<<grade;
				}
				else if(per>=50)
				{
					grade='C';
					cout<<"\n\n\t Grade is :"<<grade;
				}
				else 
				{
					cout<<"\n\n\t Fail.";
				}
				
			}
};

int main()
{
	Student S;
	
	S.display();	
}