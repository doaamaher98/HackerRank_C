#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
struct Student{
    int age;
    string first_name;
    string last_name;
    int id;
    
    // Setter Function
    void set_data(int a,string fn,string ln,int i_d)
    {
        age = a;
        first_name = fn;
        last_name = ln;
        id = i_d;
    }
    
    // Getter Function
    void get_data()
    {
        cout << age << " " << first_name <<" "<<last_name <<" "<<id;    
    }
};
 
int main() {
    Student st; // Creating an object from the struct
    
    cin >> st.age >> st.first_name >> st.last_name >> st.id;
    
    st.set_data(st.age, st.first_name, st.last_name, st.id);
    st.get_data();   
    
    return 0;
}
 


