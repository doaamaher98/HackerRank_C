#include<stdio.h>

int main()
{
    int i;
    int n;
    long int sum=0;
    scanf("%d",&n);

    long int arr[n];
    
    // Scanning 
    for(i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
    }
    
    for (i=0; i<n; i++)
    {
        sum+=arr[i];
    }
   
    printf("%ld",sum);
    return 0;
}