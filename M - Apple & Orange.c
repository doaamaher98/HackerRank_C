#include "stdio.h"

int main ()
{
    
    int a,b,d,s,t;
    int m,n;
    
    int apple_count=0, orange_count=0;
    
    scanf("%d %d",&s, &t);      // House bounderies
    
    scanf("%d %d",&a,&b);       // Apple & Orange tree points
    
    scanf("%d %d",&m,&n);        // Number or Fallen Apples & Oranges
    
    int apple[m],orange[n];
    
    // Apples
    for (int i =0; i<m ; i++)
    {
        scanf("%d", &apple[i]);
    }
    // Oranges
    for (int i =0; i<n ; i++)
    {
        scanf("%d", &orange[i]);
    }  
    
    for (int i =0; i<m ; i++)
    {
        apple[i]+=a;
        
        if (apple[i]>= s && apple[i] <= t)
        {
            apple_count++;
        }
    }
    
    for (int i =0; i<n ; i++)
    {
        orange[i]+=b;
        
        if (orange[i] >= s && orange[i] <= t)
        {
            orange_count ++;
        }
    }  
    
    printf("%d\n%d",apple_count,orange_count);
    
    return 0;
}
