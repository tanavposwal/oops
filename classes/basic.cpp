#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    
    Student() {
        this->name = "Unknown";
    }
    // contructor
    Student(string name) {
        this->name = name;
    }

    void introduce() {
        cout << "My name is " << name << "." << endl;
    }
};

int main(){
    Student st("Ayush");
    Student st2;
    st.introduce();
    st2.introduce();

    return 0;
}