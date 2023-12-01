#include <iostream>
using namespace std;

int main() {
    char op = '+';
    int a = 20, b = 10;
    switch(op) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        default: cout << "Invalid" << endl;
    }
    return 0;
}