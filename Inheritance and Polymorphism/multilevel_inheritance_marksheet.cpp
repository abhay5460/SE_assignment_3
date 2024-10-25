/* 5. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll 
	number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The 
	class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance). */
#include<iostream>
using namespace std;

class students
{
	protected :	
				int roll_number;
	public :	
			void input_roll()
			{
				cout<<"\n\n\t Enter the roll number :";
				cin>>roll_number;
			}
};

class test : public students
{
	protected :
				int marks[2];
				int total_marks;
	public :	
			void input_marks()
			{
				for(int i=0;i<2;i++)
				{
					cout<<"\n\n\t Enter the subject marks :";
					cin>>marks[i];
					total_marks += marks[i];
				}
			}
};

class result : public test
{

	public :
				void input()
				{
					input_roll();
					input_marks();	
				}
				void display()
				{
					cout<<"\n\n\t ------ Student Marksheet Result ----------- ";
					cout<<"\n\n\t  Roll number is :"<<roll_number;
					cout<<"\n\n\t Subject Marks :";
					for(int i=0;i<2;i++)
					{
						cout<<"\n\n\t  Subject"<< i+1 <<" Marks is :"<<marks[i];
					}
					cout<<"\n\n\t Total MARKS :"<<total_marks;
				}
};

int main()
{
	result r;
	
	r.input();
	r.display();
}