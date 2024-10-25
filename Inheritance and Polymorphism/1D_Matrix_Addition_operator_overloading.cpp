//9. Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class Matrix 
{
	private :
	    	int arr[5];
	    
	public :
		    void input() 
			{
		        for (int &i : arr)cin >> i;
		    }
		    
		    Matrix operator+(const Matrix& m) 
			{
		        Matrix temp;
		        for (int i = 0; i < 5; i++) temp.arr[i] = arr[i] + m.arr[i];
		        return temp;
		    }
		    
		    void display() const 
			{
		        for (int i : arr) cout << "\n Answer is :" << i;
		        cout << endl;
		    }
};

int main()
{
    Matrix matrix1, matrix2, result;
    matrix1.input(); 
	matrix2.input();
    result = matrix1 + matrix2;
    result.display();
}
