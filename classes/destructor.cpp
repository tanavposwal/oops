#include <bits/stdc++.h>
using namespace std;
int count = 0;
class Alpha {
public:
    Alpha() {
        ::count++;
        cout << "No of objects: " << ::count << endl;
    }
    ~Alpha() {
        ::count--;
        cout << "No of objects: " << ::count << endl;
    }
};

int main(){
    cout << "ENTER MAIN" << endl;
    Alpha A1, A2, A3, A4;
    {
        cout << "Enter Block 1" << endl;
        Alpha A5;
    }
    {
        cout << "Enter Block 2" << endl;
        Alpha A6;
    }
    cout << "RE-Enter main" << endl;
    return 0;
}