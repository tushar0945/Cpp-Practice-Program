#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    void display() { cout << name << " (" << roll << ")" << endl; }
};
int main() { Student s; s.name = "Tushar"; s.roll = 101; s.display(); return 0; }