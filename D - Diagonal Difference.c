/* Diagonal Difference */

#include <stdio.h>

int main() {
    int s;   // rows & columns
    scanf("%d",&s);
    int arr[s][s]; // 2D array
    int i,j;    // rows & columns
    int left_dia=0, right_dia=0, abs_sub=0;
    
    // Scanning
    for (i=0; i<s; i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //////////////////////////////////////////
    // Left diagonal
    for (i=0; i<s; i++)
    {
        left_dia += arr[i][i];
    }
    // Right Diagonal
    for (i=0; i<s; i++)
    {
       for(j=s-1-i;j>=0;j--)
        {
            right_dia += arr[i][j];
            //printf("i=: %d j= %d\n",i,j);
            break;
        }
    }
    
    /// Printing both diagonals
    //printf("%d\n",left_dia);
   // printf("%d\n",right_dia);
    
    abs_sub = abs(left_dia - right_dia);
    printf("%d",abs_sub);

    return 0;
}