#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string a,b;
    int s,t;
    char c;
    
    
   cin >> a >> b;
    
    
    s = a.length();
    t = b.length();
    
    cout<< s <<" "<< t<<endl;
    
    cout << a+b << endl;
    
    // a' and b'
    // a' = b[0]+a
    // b' = a[0]+b
    
    // Swapping first indicies
    c = b[0];       
    b[0] = a[0];       
    a[0] = c;
    
    cout << a << " " << b <<endl; 
    
  
    return 0;
}
 


