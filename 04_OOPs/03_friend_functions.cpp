#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(Box b);
};
void printWidth(Box b) { cout << "Width: " << b.width << endl; }
int main() { Box b(10); printWidth(b); return 0; }