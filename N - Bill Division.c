#include "stdio.h"

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i=0;
    
    int bill[n];
    
    int anna=0;

    for (i=0; i < n; i++)
    {
        scanf("%d",&bill[i]);
        anna += bill[i];
        
    }
    anna-=bill[k];
    anna/=2;
    //printf("%d\n",anna);
    
    int b=0;
    scanf("%d",&b);
    
    if (b > anna)
   {
        printf("%d",b-anna);
    }
    else {
        printf("Bon Appetit");
    }
    return 0;
}