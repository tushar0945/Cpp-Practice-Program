#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};
int main() { Complex c1(3, 4), c2(1, 2); Complex c3 = c1 + c2; cout << c3.real << "+" << c3.imag << "i" << endl; return 0; }