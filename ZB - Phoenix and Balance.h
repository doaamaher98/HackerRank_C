#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t,n;    // t: test cases, n:cumber of coins
    int a,b;// a: sum of weights of 1st pile, b: sum of weights of 2nd pile
    int i,j;    // Iterators
    int min;  // Difference in Weights
    
    cin>>t;
    while(t--)
    {
        a=0,b=0;
        cin>>n;
        
        for (i=1;i<=(n/2)-1;i++)
        {
            a += pow(2,i); 
        }

        a += pow(2,n);    
    
        for (j=i;j<n;j++)
        {
            b += pow(2,j);
        }

    min = abs(a - b);
   
    cout<<min<<endl;
    }
    
    return 0;
}
