// copy constructor

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
			Person(const Person &obj)
			{
				id=obj.id;
				name=obj.name;
			}
			void print()
			{
				cout<<"\n\n\t ID :"<<id;
				cout<<"\n\n\t Name :"<<name;
			}
};
int main()
{
	Person p(3,"abhay");
	p.print();
	Person p1(4,"akela");
	p1.print();
}