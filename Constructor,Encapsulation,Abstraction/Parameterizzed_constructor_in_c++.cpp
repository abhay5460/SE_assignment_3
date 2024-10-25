// parameterized constructor

#include<iostream>
using namespace std;

class Person
{
	private :
			int id;
			string name;
			
	public :
			Person(int id1,string name1)
			{
				id=id1;
				name=name1;
			}
			void print()
			{
				cout<<"\n\n\t ID :"<<id;
				cout<<"\n\n\t NAME :"<<name;
			}			
};
int main()
{
	Person p(1,"abhay");
	p.print();
	Person p1(2,"akela");
	p1.print();
}