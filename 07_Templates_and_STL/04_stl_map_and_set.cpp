#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    set<int> s = {3, 1, 2, 2};
    map<string, int> m;
    m["apples"] = 5;
    cout << "Set size: " << s.size() << ", Apples: " << m["apples"] << endl;
    return 0;
}