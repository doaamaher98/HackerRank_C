#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t ;
	
	int n,i;
	
    while(t--)
	{
        cin >> n;
        
		int height = 1;    // initial value
		
        for(i=0 ; i<n ; i++)
		{
            if(i%2==1) 
			{height++;}
            else height *= 2;
        }
        cout << height << endl;
    }
    return 0;
}


