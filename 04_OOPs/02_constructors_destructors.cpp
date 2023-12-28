#include <iostream>
using namespace std;

class Car {
public:
    string model;
    Car(string m) : model(m) { cout << "Created " << model << endl; }
    ~Car() { cout << "Destroyed " << model << endl; }
};
int main() { Car c("Porsche"); return 0; }