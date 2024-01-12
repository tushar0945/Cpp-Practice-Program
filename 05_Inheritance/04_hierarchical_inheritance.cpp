#include <iostream>
using namespace std;

class Shape { public: void draw() { cout << "Draw Shape" << endl; } };
class Circle : public Shape {};
class Rectangle : public Shape {};
int main() { Circle c; Rectangle r; c.draw(); r.draw(); return 0; }