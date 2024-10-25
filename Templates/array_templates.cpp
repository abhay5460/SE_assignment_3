// 2. Write a program of to sort the array using templates.

#include <iostream>
using namespace std;

template <class T>

void sortArray(T arr[], int size) 
{
    T temp;
    
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\n\n\t After sorting:\n\n";
    
    for (int i = 0; i < size; i++) 
	{
        cout << "\t" << arr[i] << endl;
    }
}

int main() 
{
    int size=5 ;
    int arr[size];
	
    for (int i = 0; i < size; i++)
	{
        cout << "\n\n\t Enter The Number: ";
        cin >> arr[i];
    }

    sortArray(arr, size);
}
