#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n,k;    // number & max height
    
    scanf("%d %d",&n,&k);
    
    int height[n];
    int i;
    int val =0;
    int s=0;
    
    for (i=0;i<n;i++)
    {
        scanf("%d",&height[i]);
    }
    
    
    for (i=0;i<n;i++)
    {
        if (height[i] > k)
        {
            val = abs(height[i] - k);
            k += val; 
            
            s += val;
        }
        
    }
    
    printf("%d",s);
    return 0;
}
