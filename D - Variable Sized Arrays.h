#include <iostream>
using namespace std;

int main() 
{
    int length,query;
    cin >> length >> query;
    
	// Creating a 2D array of size : length
    int *arr[length];
    
    int i,j,k,size=0;
    
	// new size of array
	int elements;
    
	// Inner Array
    while (length--)
    {
		// Scanning the new size
        cin >> elements;
		
        // New Array of that size
        arr[size] = new int [elements];
        
		// Inserting the 2D array
        for (i=0; i<elements ; i++)
        {
            cin>> arr[size][i];
        }
		// Incrementing the new size by 1 until length is reached
        size++;
    }
    
    // Query Array [Outer Array]
    while(query--)
    {
		// Scanning Indicies of the wanted elements & printing them
        cin >> j >> k;
        cout<< arr[j][k]<<endl;
    }
    
    return 0;
}