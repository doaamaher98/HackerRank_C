#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int carry = 0;
    int digits = 0; //number of digits in factorial
    int fact[200];
    
    fact[0] = 1; //0! = 1. anyways, so start multiplication from there
    
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= digits; j++)
        { //multiply i with each digit
            fact[j] = (fact[j] * i) + carry;
            carry = fact[j] / 10;
            fact[j] %= 10;
        }
        /* write over remaining digits from carry
         * this increases digits in the factorial
         */
        while(carry > 0 && digits < 200)
        {
            digits++;
            fact[digits] = carry % 10;
            carry /= 10;
        }
    }
    
    //print factorial
    for(i = digits; i >= 0; i--)
    {
        printf("%d",fact[i]);
    }
        
    return 0;
}