#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
 
vector<int> parseInts(string str) {
    
    stringstream ss(str);
    vector<int> v;
    int input;
    char ch;   
    while(ss >> input){
        v.push_back(input);
        ss >> ch;
    }     
      return v;     
}
 
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
 


