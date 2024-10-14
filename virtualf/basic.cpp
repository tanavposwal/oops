#include <bits/stdc++.h>
using namespace std;

class Shape {
    virtual void draw();
};

class Circle: public Shape {
public:
    int radius;
    Circle(int radius) {
        this->radius = radius;
    }

    void draw() {
        cout << "Drawing circle" << endl;
    }
};

int main(){
    Circle c1(4);
    c1.draw();
    return 0;
}
