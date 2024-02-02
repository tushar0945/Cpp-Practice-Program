#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) { return (a > b) ? a : b; }

int main() { cout << getMax(10, 20) << " " << getMax(3.5, 1.2) << endl; return 0; }