#include <iostream>
#include <sstream>
using namespace std;
 
class Student {
    private :
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
    
    // Setters
    void set_age(int a)
    {
        age = a;
    }
    void set_fn(string fn)
    {
        first_name = fn;
    }
    void set_ln(string ln)
    {
        last_name = ln;
    }
    void set_std(int s)
    {
        standard = s;
    }
    
    
    // Getters
    int get_age()
    {
        return age;
    }
    string get_fn()
    {
        return first_name;
    }
    string get_ln()
    {
        return last_name ;
    }
    int get_std()
    {
        return standard;
    }
    
    string to_string()
    {
		cout << age <<  "," << first_name << "," << last_name << "," << standard << endl;
     
		return "\0";     
    }
};
 
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_std(standard);
    st.set_fn(first_name);
    st.set_ln(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_ln() << ", " << st.get_fn() << "\n";
    cout << st.get_std() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
 


