#include <math.h>
#include <stdio.h>

int reverse(int x)
{
    int rev =0, rem;
    while(x!=0)
    {
        rem = x % 10;
        rev = (rev * 10) + rem;
        x = x/10;
    }
    return rev;
}

int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    
    int beautiful;
    int counter =0;
    int rev;
    int iterator;
    for (iterator =i;iterator<=j;iterator++)
    {
        rev = reverse(iterator);
        beautiful = abs(iterator - rev);
        
        if(beautiful % k == 0 )
        {
            counter++;
        }
    }
    
    printf("%d",counter);

    return 0;
}
