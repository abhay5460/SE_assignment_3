/* 6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
	Include member functions to calculate and set salary based on employee performance. Using of constructor. */
#include<iostream>
using namespace std;

class Employee
{
	private :
			string ename;
			int eid;
			int salary;
	public :
			int final_salary,performance;
			
			Employee()
			{
				cout<<"\n\n\t Enter the employee name :";
				cin>>ename;
				
				cout<<"\n\n\t Enter the employee id :";
				cin>>eid;
				
				cout<<"\n\n\t Enter the employee salary :";
				cin>>salary;
			}
			void calculate()
			{	
				cout<<"\n\n\t 1. Hike Rating 1.20% Performance .";
				cout<<"\n\n\t 2. Hike Rating 1.10% Performance .";
				cout<<"\n\n\t 3. Hike Rating 1.05% Performance .";
				cout<<"\n\n\t 4. Hike Rating 1.02% Performance .";
				
				cout<<"\n\n\t Enter rating for the performance :";
				cin>>performance;
				
				if(performance==1)
				{
					final_salary = salary * 1.20;
				}
				else if(performance==2)
				{
					final_salary = salary * 1.10;
				}
				else if(performance==3)
				{
					final_salary = salary * 1.05;
				}
				else if(performance==4)
				{
					final_salary = salary * 1.02;
				}
				else
				{
					cout<<"\n\n\t No choice :";
				}
			}
			void display()
			{
				cout<<"\n\n\t Employee Name :"<<ename;
				cout<<"\n\n\t Employee id :"<<eid;
				cout<<"\n\n\t Employee Salary :"<<salary;
				cout<<"\n\n\t Increment the salary :"<<final_salary;
			}
};

int main()
{
	Employee E;
	E.calculate();
	E.display();
}
	