#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int max=a;
    if (max > b && max > c && max > d)
    {
        return max;
    }
    
    max=b;
    
    if (max > a && max > c && max > d)
    {
        return max;
    }
    max=c;
    if (max > b && max > a && max > d)
    {
        return max;
    }
    max=d;
    if (max > a && max > b && max > c)
    {
        return max;
    }
    
    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}