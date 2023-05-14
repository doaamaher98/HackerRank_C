#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main()
{ 
    int n,i;
    int count =1;
    
    cin >> n;
    
    vector<int> arr(n);

    if(n == 1) 
    {
        cout<<"1";
        return 0;    // Terminate
    }
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Sorting the Vector
    sort(arr.begin(), arr.end());
    
    // Initially printing the size
    cout<<n<<"\n";
    
    // Creating a temp variable to hold size as it'll be changed
    int temp = n;

    // Starting from the second element as the first is removed (minimum value)
    for(i = 1; i < n; i++)
    {
        if(arr[i] != arr[i-1]) 
        {
            temp = temp - count;
            cout<<temp<<"\n";
            // Initializing count to 1 
            count = 1;
        } 
        else // if there are 2 duplicated variables
        {
            count++;
        }
    }
    return 0;
}