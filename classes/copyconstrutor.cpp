#include <bits/stdc++.h>
using namespace std;

class Code {
    int id;
public:
    Code() {}
    Code(int a) {
        id = a;
    }
    // copy constructor
    Code(Code &x) {
        id = x.id;
    }
    void display() {
        cout << id << endl;
    }
};

int main(){
    Code A(100);
    Code B(A);
    Code C = A;
    Code D;
    D = A;

    cout << "id of A: ";
    A.display(); 
    cout << "id of B: ";
    B.display(); 
    cout << "id of C: ";
    C.display(); 
    cout << "id of D: ";
    D.display(); 
 
    return 0;
}