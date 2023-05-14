#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i,j;
    
    scanf("%d",&n); // rows & columns
    char grid [n][n+1]; // (n+1) : for the space of null character
    char result [n][n+1]; // A copy to the grid matrix
    
    int key=0; // The cell to compare
    
    for(i=0; i<n; i++)
    {
        scanf("%s",grid[i]);
    }
    
    memcpy(result,grid,sizeof(grid)); // Instead of for loop, using memccpy to copy matrix
    
    // Need to neglect the first row index[0] and first col index[0] and last col & rows of indicies [n-1]
    for (i=1; i<n-1; i++)
    {
        for (j=1; j<n-1; j++)
        {
            key = grid[i][j];
            // Comparing to the adjacent cells
            if (key > grid[i-1][j] && key > grid[i+1][j] && key > grid[i][j+1] && key > grid[i][j-1])
            {
                result[i][j] = 'X';
            }
        }
    }
    
    for (i=0; i<n; i++)
    {
        printf("%s\n",result[i]);
    }
    
    
    return 0;
}

