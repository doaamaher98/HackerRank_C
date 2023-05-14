#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    scanf("%d",&q);
    
    int x[q],y[q],z[q];
    int i=0;
    
    for (i=0; i<q; i++)
    {
        scanf("%d %d %d",&x[i], &y[i], &z[i]);
    }
    
    for (i=0; i<q; i++)
    {
        if (abs (y[i] - z[i]) < abs (x[i] - z[i]))
        {
            printf("Cat B\n");
        }
        else if (abs (y[i] - z[i]) > abs (x[i] - z[i]))
        {
            printf("Cat A\n");
        }
        else if(abs (y[i] - z[i]) == abs (x[i] - z[i]))
        {
            printf("Mouse C\n");
        }
    }
    
    return 0;
}