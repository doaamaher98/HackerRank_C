#include <stdio.h>

int main() {
    int size =5;
    int   arr[size],temp;
    int   max_sum=0,min_sum=0;
    int   i=0,j=0;
    int   Total=0;
    
    for (i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    // Sort them
    for (i=0; i<size; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if (arr[i] > arr[j])
            {// Swapping
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;}
            }
        }

    //////////////////////////////////////////////
    // Calculating
      for (i=0;i<size;i++)
      {
        Total+=arr[i];
           // printf("%d\n",arr[i]);
        }
    
        max_sum = Total -arr[0];
        min_sum = Total - arr[size-1];
    
   // Printing
    printf("%ld %ld",min_sum,max_sum);
    
    return 0;
}