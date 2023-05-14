#include <stdio.h>

int main() {

    int t;
    scanf("%d",&t);     // Test cases no.

    long long int n,n1;

    int i, count=0;
    int remainder;

    for (i=0; i<t; i++)
    {
        scanf("%lld",&n);

        n1=n;
        while(n != 0)
        {
            // Getting the last digit
            remainder = n % 10;

            if ((remainder != 0) && (n1 % remainder == 0))
            {
                count ++;

            }

            // Going back to the first digit to repeat the process
            n /= 10;
            }

        printf("%d\n",count);
        count =0;
    }

    return 0;
}
