#include<iostream>
using namespace std;

class Calculator {
    public:
        int n1,n2;
    void add () {
        n1 = 10;
        n2 = 20;
        int sum = n1 + n2;
        cout << "result is " << sum << endl;
        if (sum > 25) {
            cout << "big number" << endl;
        }
        else {
            cout << "small number" << endl;
        }
    }
};

int main () {
    Calculator c;
    c.add();
    return 0;
}
