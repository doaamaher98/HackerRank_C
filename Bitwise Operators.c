#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n,int k) {
  //Write your code here.
  // Intializing AND,OR,XOR values to = 0
  int AND=0,OR=0,XOR=0;
  
  // First Loop
  for (int i=1; i<=n; i++)
  {
      // Second loop
     for (int j= i+1; j<=n; j++)
     {
         if ((i&j)> AND && (i&j)< k)
         {
             AND = i&j; // Assign new AND
         }
         if ((i|j)> OR && (i|j) <k)
         {
             OR = i|j;  // Assign new OR
         }
         if ((i^j)> XOR && (i^j) <k)
         {
             XOR = i^j;  // Assign new XOR
         }

     }
}
printf("%d\n%d\n%d", AND,OR,XOR);
}

int main() {
    int n, k;
    // K is compared with the AND,OR and XOR operations :
    // if K>=operation : print zero
    // if K<operation  : print the max value among the 3 operations 
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n,k);
 
    return 0;
}
