#include <iostream>
using namespace std;

template <class T>
class Pair {
public:
    T first, second;
    Pair(T a, T b) : first(a), second(b) {}
};
int main() { Pair<int> p(10, 20); cout << p.first << ", " << p.second << endl; return 0; }