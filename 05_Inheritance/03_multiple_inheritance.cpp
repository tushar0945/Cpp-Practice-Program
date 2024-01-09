#include <iostream>
using namespace std;

class Printable { public: void print() { cout << "Printing" << endl; } };
class Serializable { public: void serialize() { cout << "Serialized" << endl; } };
class Document : public Printable, public Serializable {};
int main() { Document d; d.print(); d.serialize(); return 0; }