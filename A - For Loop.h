#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a,b;
    
    string num[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    cin>>a;
    cin>>b;
    
    for(int n = a; n <= b ;n++)
    {
        if(n >= 1 and n <= 9 )
        {
            cout<<num[n-1]<<endl;
        }
        else
        {
            if(n % 2 == 0)
            {
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
        
    }
    
    return 0;
}
    