#include "stdio.h"

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int diff =0;
    
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
            
    for (int i=0; i<n; i++)
    {
        diff = arr[i];
        while (diff % 5 != 0)
            diff++;

            if (diff - arr[i] < 3 && arr[i] >=38)
            {
                arr[i] += diff - arr[i];
            }
        
       printf("%d\n",arr[i]);
    }
    
    return 0;
}