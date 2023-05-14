#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int i,j,k;
    int minimum=0;
    int flag = 0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i] == arr[j])
            {
                k = j-i;
                if (flag == 0)
                {
                    minimum = k;
                    flag =1;
                }
                if (minimum > k)
                {
                    minimum = k;
                }
                
            }
        }
    }
    if (minimum == 0)
    {
        printf("-1");
    }

    else
    {
        printf("%d",minimum);
    }
    return 0;
}
