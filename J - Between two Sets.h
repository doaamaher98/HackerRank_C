#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE ALGORITHM
/// WE GET COMMON 1- MULTIPLES IN 1ST ARR
///               2- FACTORS IN 2ND ARR

// LCM (LOWEST COMMON MULTIPLE FOR 1ST ARRAY)
// GCD (GREATEST COMMON DIVISOR FOR 2ND ARRAY)

// THEN, FINDING THE COMMON MUL OF LCD SAME AS DIVISIBLE BY GCD

int GCD (int a, int b)
{
    if(b == 0) 
        return a;
        
    return GCD(b, a%b);
}

int LCM (int a, int b)
{
    return (a * b / GCD(a,b));
}

int main() 
{
    int n, m;
    int e;
    
    int l = 1, g = 0;
    int result = 0;
    
    cin >> n >> m;
    
    // FIRST ARRAY
    for(int i = 0; i < n; i++)
    {
        cin >> e;
        l = LCM(l, e);
    }
    
    // SECOND ARRAY
    for(int i = 0; i < m; i++)
    {
        cin >> e;
        g = GCD(g, e);
    }
    
    for(int c = l; c <= g; c+=l)
    {    
        if(g % c == 0) 
            result ++;
    }    
        
    cout << result;
    
    return 0;
}