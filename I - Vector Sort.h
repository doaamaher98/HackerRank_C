#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    int i;
    int values;
    
    cin >> n;  
    vector <int> v;
    
    for (i=0; i<n ; i++)
    {
        scanf("%d",&values);
        v.push_back(values);
    }
    
    sort(v.begin(), v.end());        // Will sort the Vector elements
    
    for (i=0; i<n ; i++)
    {
        cout << v[i] << ' ';
    }    
    
    return 0;
}
 


