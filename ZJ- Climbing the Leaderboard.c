#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,m,i,j;
    
    scanf("%d",&n);
    int scores[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }
    
    scanf("%d",&m);
    int player[m];
    
    for(j=0;j<m;j++)
    {
        scanf("%d",&player[j]);
    }
    
    int ranks[n];
    
    ranks[0]=1;
    for(i=1; i<n; i++)
    {
        if(scores[i] == scores[i-1])
            ranks[i] = ranks[i-1];
        else
            ranks[i] = ranks[i-1]+1;
    }
    
    i=n-1, j=0;
    
    while(j < m)
    {
        while(scores[i] < player[j] && (i>0))
            i--;
            
        if(scores[i] == player[j])
        {
            printf("%d\n",ranks[i]);
        }
        
        else if(scores[i]>player[j])
        {
            printf("%d\n",ranks[i]+1);
        }
        
        else
        {
            if(ranks[i] == 1)
                printf("1\n");
            else
                printf("%d\n",ranks[i]-1);
                }  
        
        j++;
    }
    
    return  0;
}