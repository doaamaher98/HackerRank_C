#include<stdio.h>

int main()
{
    int i;
    int c;
    int max=0;
    scanf("%d",&c);

    int arr[c];
    int count=0;
 
    // Scanning & 
    for(i=0; i<c; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<c; i++)
    {
        if(max<arr[i])
           { max=arr[i]; }
    }
   
    // Comparing max and other elements
    for(i=0; i<c; i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }
       
    printf("%d\n",count);
    return 0;
}