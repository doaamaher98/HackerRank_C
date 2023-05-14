#include <stdio.h>

int main() {
    int n;   
    int i,j,k;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        // Spaces
        for (j=i; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // New line loop
    for(int i=1; i<=n; i++)
        {
            // Spaces Loop
            for(j=n-i; j>=1; j--)
            {
                printf(" ");
            }
            // # Loop
            for(k=1; k<=i; k++)
            {
                printf("#");
            }
            printf("\n");
        }
}