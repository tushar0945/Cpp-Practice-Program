#include <iostream>
using namespace std;

int main() {
    int val = 100;
    int *ptr = &val;
    cout << "Address: " << ptr << ", Value: " << *ptr << endl;
    return 0;
}