// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include <iostream>
using namespace std;

class Base 
{
	private:
	    	int privateData;
	
	protected:
	    	int protectedData;
	
	public:
		    int publicData;
		
		    Base() 
			{
		        privateData = 10;
		        protectedData = 20;
		        publicData = 30;
		    }
		
		    int getPrivateData() 
			{
		        return privateData;
		    }
};

class Derived : public Base 
{
	public:
		    void showData() 
			{
				cout << "1.) Private Data: " << getPrivateData() << endl;
		        cout<<"\n";
		        cout << "2.) Protected Data: " << protectedData << endl;
				cout<<"\n";
		        cout << "3.) Public Data: " << publicData << endl;
		        cout<<"\n";
		    }
};

int main() 
{
	    Derived obj;
	    
	    obj.showData();
	
	    // Direct access to public member
	    cout << "4.) Direct Access Public Data: " << obj.publicData << endl;
	
	    // The following lines would result in errors if uncommented
	    //cout << "Direct Protected Data: " << obj.protectedData << endl;
	    //cout << "Direct Private Data: " << obj.privateData << endl;	    
}


