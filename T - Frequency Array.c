#include "stdio.h"

int main()
{
    int bird_id;
    scanf("%d",&bird_id);
    
    int arr[bird_id];
    
    int n =0;
    int i=0;
    int freq[bird_id];
    
    int repeated=0;
    for (i=0; i<bird_id; i++)
    {
        scanf("%d",&arr[i]);
        freq[i] =0;
    }
    
    // Creating Frequency Array
    for (i=0; i<bird_id; i++)
    {
        freq[arr[i]]++;
    }
    
    // Finding the max frequency
    repeated = freq[0];
    for (i=0; i<bird_id; i++)
    {
        
        if (repeated < freq[i])
        {
            repeated = freq[i];
        }
    }
    
   printf("%d",repeated);
}
