#include <iostream>
using namespace std;

int multiply(int a, int b) { return a * b; }
double multiply(double a, double b) { return a * b; }
int main() { cout << multiply(2, 3) << " " << multiply(2.5, 3.5) << endl; return 0; }