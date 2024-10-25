// 10.Write a program to concatenate the two strings using Operator Overloading.

#include <iostream>
#include <string>
using namespace std;

class MyString 
{
	private:
	    	string str;
	
	public:
		    // Constructor to initialize the string
		    MyString(const string& s = "")
			{
		        str = s;
		    }
		
		    MyString operator+(const MyString& s) 
			{
		        MyString temp;
		        temp.str = str + s.str;
		        return temp;
		    }
		
		    void display() 
			{
		        cout << str << endl;
		    }
};

int main() 
{
	    MyString string1("Hello ");
	    MyString string2("World!");
	
	    MyString result = string1 + string2;
	
	    cout << "Concatenated String: ";
		
		result.display();
}
