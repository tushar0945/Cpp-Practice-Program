#include <iostream>
using namespace std;

int main() {
    int num = 10, den = 0;
    try {
        if (den == 0) throw "Division by zero error!";
        cout << num / den << endl;
    } catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}