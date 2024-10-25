/* 11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area
Topics Covered
Inheritance Polymorphism. */

#include <iostream>
using namespace std;

class AreaCalculator 
{
	public:
		    double area(double length, double breadth)
			{
		        return length * breadth;
		    }
		
		    double area(double base, double height, char type) 
			{
		        return 0.5 * base * height;
		    }
		
		    double area(double radius) 
			{
		        const double PI = 3.14;
		        return PI * radius * radius;
		    }
};

int main() 
{
    AreaCalculator calc;

    double length = 10.0, breadth = 5.0;
    cout << " 1) Area of Rectangle: " << calc.area(length, breadth) << endl;

    double base = 8.0, height = 6.0;
    cout << " 2) Area of Triangle: " << calc.area(base, height, 't') << endl;

    double radius = 7.0;
    cout << " 3) Area of Circle: " << calc.area(radius) << endl;
}

