#include <iostream>
using namespace std;

void swapByRef(int &x, int &y) {
    int temp = x; x = y; y = temp;
}

int main() {
    int a = 5, b = 10;
    swapByRef(a, b);
    cout << a << " " << b << endl;
    return 0;
}