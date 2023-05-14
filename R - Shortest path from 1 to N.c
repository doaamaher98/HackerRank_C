// From 1 to n finding the shortest number or steps
// (x2) or (+1) only
#include <stdio.h>

int main() {
    int n;
    int steps=0;

    scanf("%d",&n);
    
    for (int i=0; i<=n; i++)
    {
       if (n%2 == 0)       // Even
        {
        n/=2;
        steps ++;
        }
        
        if (n % 2 != 0)      // Odd
        {
            n+=1;
            steps++;
        }
    } 
   printf("%d",steps-1);     // Starts from 1
        
    return 0;
}