#include <stdio.h>

int main() {
    
    
    int size;
    scanf("%d",&size);
    int arr[size];
    
    int result =0;
    int i,counter;
    
    // Scanning
    for (i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<size; i++)
    {
        result^=arr[i];
    }
    
    printf("%d",result);

    return 0;
}