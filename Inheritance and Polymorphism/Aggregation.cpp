//Aggregation : association - link between classes.

//*c=&a

#include<iostream>
using namespace std;

class Department
{
	public :
			int d_id;
			string dname;
			
			Department(int d_id, string dname)
			{
				this->d_id=d_id;
				this->dname=dname;
			}
	
};

class Employee
{
	Department *dept;
	
	public :
			int e_id;
			string ename;
			
			Employee(int e_id, string ename, Department *dept)
			{
				this->e_id=e_id;
				this->ename=ename;
				this->dept=dept;
			}
			
			void print()
			{
				cout<<"\n\n\t Employeee ID : "<<e_id;
				cout<<"\n\n\t Name of the employee : "<<ename;
				cout<<"\n\n\t Department Id : "<<dept->d_id;
				cout<<"\n\n\t Name of the department : "<<dept->dname;
			}
	
};

main()
{
	Department D(101, "Sales");
	
	Employee E(1000, "Abhay", &D); //addr=5000
	
	E.print();
}
