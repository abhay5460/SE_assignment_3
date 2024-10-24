/* 5. Write a C++ program to create a class called Rectangle that has private member variables for length and width.
      Implement member functions to calculate the rectangle's area and perimeter. */
#include<iostream>
using namespace std;

class Rectangle
{
	private :
			 int length,width;
	
	public : 
			 void get()
			 {
			 	cout<<"\n\n\t Enter the Length :";
			 	cin>>length;
			 	
			 	cout<<"\n\n\t Enter the Width :";
				cin>>width;
			 }
			 
			 int area()
			 {
			 	return length * width;
			 }
			 
			 int perimeter()
			 {
			 	return 2 * (length + width);
			 }
};
int main()
{
	Rectangle obj;
	
	obj.get();
	cout<<"\n\n\t Rectangle of Area:"<<obj.area();
	cout<<"\n\n\t Rectangle of Perimeter:"<<obj.perimeter();
}