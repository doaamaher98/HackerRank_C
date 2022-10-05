#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=2;
    scanf("%d", &n);
    
    int length = 2*n -1;
  	// Complete the code to print the pattern.
  	// ROWS
    for(int i=0; i<length; i++)
    {
        // COLUMNS
        for(int j=0; j<length; j++)
        {
            // Getting the min value
            int min = i < j ? i : j;
            
            min = min < length-i ? min : length-i-1;
            
            min = min < length-j-1 ? min : length-j-1;
            
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
