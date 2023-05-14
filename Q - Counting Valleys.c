#include "stdio.h"

int main()
{
    int steps;
    scanf("%d",&steps);
    
    
    char path[steps];
    int i;
    int valley=0;
    int level=0;
   
    
    for (i=0; i<steps; i++)
    {
        scanf("%c",&path[i]);
    }

    for (i=0; i<steps; i++)
    {
        
        if (path[i] == 'D' && level==0)
        {
            valley++;

        }
        if (path[i] == 'U')
        {
            level++;
			
        }
        if(path[i] == 'D')
        {
            level--;
        }
    }
    
    printf("%d",valley);
    
    
    return 0;
}
