#include "stdio.h"

int main ()
{
    int game;
    scanf("%d",&game);
    
    int score[game];
    int i,j,min, max, min_count=0,max_count=0;
    
    for (i=0 ;i <game ; i++)
    {
        scanf("%d",&score[i]);
    }
    
    min = score[0];
    max = score[0];
    
    //printf("MAX IS : \n");
    for (i=1 ;i <game ; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            max_count++;
        }
        if (score[i] < min) {
            min = score[i];
            min_count++;
        }
    }
    
    printf("%d %d",max_count,min_count);
    
    return 0;
}