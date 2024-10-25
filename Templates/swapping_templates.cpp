// 1. Write a program of to swap the two values using template.

#include<iostream>
using namespace std;

template <class T>
void swapping(T a,T b)
{
	T temp;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\n\t --- After Result --- ";
	cout<<"\n\n\t The First Number is :"<<a;
	cout<<"\n\n\t The Second Number is :"<<b;
};

int main()
{
	int x , y;
	
	cout<<"\n\n\t --- Before Result --- ";
	cout<<"\n\n\t Enter the First Number :";
	cin>>x;
	
	cout<<"\n\n\t Enter the Second Number :";
	cin>>y;
	
	swapping(x , y);
}