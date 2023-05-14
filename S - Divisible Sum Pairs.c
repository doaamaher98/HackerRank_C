#include "stdio.h"

int main()
{
    
    int length, divisor;
    
    int pairs=0;
    
    scanf("%d %d",&length,&divisor);
    
    int arr[length];
    int calc=0;
    
    int i=0,j=0;
    
    for(i=0; i<length ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
     for(i=0; i<length ; i++)
     {
         for(j=i+1; j<length ; j++)
        {
            calc = arr[i] + arr[j];
            if (calc % divisor == 0)
            {
                 pairs++;
            }
        }
     }
    printf("%d",pairs);
    
}