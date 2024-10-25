/* 3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher 
having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;

class person 
{
	protected :
				string name;
				int age;
};

class student 
{
	protected :
				float percentage;
	public :
				void input_student()
				{	
					cout<<"\n\n\t Enter the percentage :";
					cin>>percentage;
				}
};

class teacher : public person , public student
{
	private :
				string teacher_name;
				int salary;	
	public :	
				void input()
				{
					cout<<"\n\n\t Enter the name :";
					cin>>name;
					
					cout<<"\n\n\t Enter the age :";
					cin>>age;
					
					input_student();
				
					cout<<"\n\n\t Enter the teacher name :";
					cin>>teacher_name;
					
					cout<<"\n\n\t Enter the salary :";
					cin>>salary;
				}
				
				void display()
				{
					cout<<"\n\n\t ------Student Result------- ";
					cout<<"\n\n\t The Student Name is :"<<name;
					cout<<"\n\n\t The Student Age is :"<<age;
					cout<<"\n\n\t The Percentage is :"<<percentage;
					cout<<"\n\n\t ------Teacher Details-------";
					cout<<"\n\n\t The Teacher Name is :"<<teacher_name;
					cout<<"\n\n\t The Salary is :"<<salary;
				}
};

int main()
{
	teacher t;
	
	t.input();
	t.display();
}