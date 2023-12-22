#include <iostream>
#include <string>
using namespace std;

bool isPal(string s) {
    int l = 0, r = s.length() - 1;
    while(l < r) if(s[l++] != s[r--]) return false;
    return true;
}
int main() { cout << isPal("radar") << endl; return 0; }