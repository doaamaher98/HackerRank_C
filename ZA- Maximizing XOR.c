#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    
    int l,r;
    
    scanf("%d %d",&l,&r);
    
    int i,j;
    
    int max=0;
    
    for (i=l; i<=r ;i++)
    {
        for(j=i; j<=r ;j++)
        {
            max= MAX(max,i^j);
        }
    }
    printf("%d",max);

    return 0;
}
