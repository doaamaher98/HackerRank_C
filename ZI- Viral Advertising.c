#include  <stdio.h>

int main()
{
    int n,  shared=5, liked,  sum=0;
    int  i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        liked  =  shared/2;
        sum  += liked;
        shared  =  liked*3;
    }
    
    printf("%d",sum);
}

