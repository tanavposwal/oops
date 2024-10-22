#include <bits/stdc++.h>
using namespace std;

void test(int x) {
    try {
        if (x == 1) throw x;
        else if (x == 0) throw 'x';
        else if (x == -1) throw 1.0;
        cout << "End of try-block" << endl;
    } catch (char c) {
        cout << "Caught a character" << endl;
    } catch (int m) {
        cout << "Caught a integer" << endl;
    } catch (double d) {
        cout << "Caught a double" << endl;
    }
    cout << "End of try-catch system" << endl;
}

int main(){
    cout << "Testing multiple catches" << endl;
    test(1);
    test(0);
    test(-1);
    test(2);

    return 0;
}