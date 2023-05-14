// Plus-Minus 

#include <stdio.h>

int main() {
    int n;   
    scanf("%d",&n);
    
    float arr[n];
    float neg_ratio, pos_ratio, zero_ratio;
    float pos_count=0.0, neg_count=0.0, zero_count=0.0;
    int i,j;
    
    // Scanning size
    for (i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    
    for (i=0; i<n; i++)
    {
        if (arr[i] > 0)       // +ve
        {
            pos_count++;;
        }
        else if (arr[i] < 0)  // -ve
        {
            neg_count++;
        }
        else                   // 0
        {
            zero_count++;
        }
    }
    // Finding Ratios
    pos_ratio = pos_count/n;
    neg_ratio = neg_count/n;
    zero_ratio = zero_count/n;
    
    printf("%.6f\n%.6f\n%.6f",pos_ratio, neg_ratio, zero_ratio);
    
    return 0;
}