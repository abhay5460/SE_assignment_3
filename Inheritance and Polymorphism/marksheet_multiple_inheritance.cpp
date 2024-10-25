// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance.
#include<iostream>
using namespace std;

class student
{
	protected :
				string name;
				int rollno;
				
	public :	
			void input_student()
			{
				cout<<"\n\n\t Enter the name :";
				cin>>name;
				
				cout<<"\n\n\t Enter the student rollno :";
				cin>>rollno;
			}
};

class percentage 
{
	protected :
				float percentage;
				int sub[5];
				double total ;
				int i;
				string subs[5];
	public :	
			void input_percentage()
			{
				for(i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter the subject name :";
					cin>>subs[i];
				}
				for(i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter " << subs[i] <<"the total marks:";
					cin>>sub[i];	
					total=total+sub[i];
				}
				
				percentage = total /5;	
				
			}	
};

class marksheet : public student , public percentage
{
	public :	
			void input()
			{
				input_student();
				input_percentage();
			}
			void display()
			{
				cout<<"\n\n\t -------Student Marksheet------- ";
				
				cout<<"\n\n\t Student name :"<<name;
				cout<<"\n\n\t Student roll no :"<<rollno;
				//cout<<"\n\n\t ---------- This is Subject Name ---------------";
				//for(i=0;i<5;i++)
				//{
			//		cout<<"\n\n\t your subject name : "<<subs[i];
				//}
				cout<<"\n\n\t ---------- This is Subject Marks ---------------";
				for(i=0;i<5;i++)
				{
					cout<<"\n\n\t subject " << i+1 << "  "<< subs[i] <<" marks : "<<sub[i];	
				}
				cout<<"\n\n\t Total Marks is :"<<total;
				cout<<"\n\n\t Student Percentage is :"<<percentage;
				
				if(total <=500)
				{
					if(percentage>=80)
					cout<<"\n\n\t Grade is : Distinction ";
					else if(percentage>=70)
						cout<<"\n\n\t Grade is : First ";
					else if(percentage>=60)
						cout<<"\n\n\t Grade is : Second ";
					else if(percentage>=50)
						cout<<"\n\n\t Grade is : Third ";
					else
						cout<<"\n\n\t Fail ";
				}					
				else
				{
					cout<<"\n\n\t TOTAL MARKS IS UP TO 500 NOT AVAILABLE .";
				}	
			}
};
int main()
{
	marksheet m;
	m.input();
	m.display();
}