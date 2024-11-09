#include <iostream>
using namespace std;

class Swap 
{
	private:
	    int a, b;
	
	public:
	    
	    Swap(int x, int y) 
		{
			a=x;
			b=y;
		}
	
	    friend void swapValues(Swap &obj);
	    
	    void display() 
		{
	        cout << "a = " << a << ", b = " << b << endl;
	    }
};

void swapValues(Swap &obj) 
{

    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}

int main() 
{
	    Swap obj(10, 20);
	    
	    cout << "Before swapping:" << endl;
	    obj.display();
	    
	    swapValues(obj);
	
	    cout << "After swapping:" << endl;
	    obj.display();
	    
}
