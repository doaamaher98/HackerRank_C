#include <stdio.h>

int main() {

    int n,t;
    scanf("%d",&n);     // No. of Widths
    scanf("%d",&t);     // Test cases no.

    int arr[n];         // Widths

    int i,j;

    int start=0, end=0;
    int min=0;

    // Scanning Widths
    for (i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }


    for (i=0; i<t; i++)
    {

        scanf("%d %d",&start, &end);

        min = arr[start];

        for (j=start; j<=end ; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
            }
        }

        printf("%d\n",min);
    }

    return 0;
}
