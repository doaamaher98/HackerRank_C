#include<stdio.h>

int main()
{
    int i,j;
    int n=3;
    int a_count=0,b_count=0;
 
    int a[n] , b[n];

    // Scanning 
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    
    
    for (i=0; i<n; i++)
    {
        if (a[i] > b[i])
        {
            a_count ++;
        }
        else if(a[i] < b[i])
        {
            b_count++;
        }
        else {
        
        }
    }
   
   printf("%d %d",a_count,b_count);
    
    return 0;
}