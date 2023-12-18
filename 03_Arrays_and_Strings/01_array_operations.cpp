#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int x : arr) sum += x;
    cout << "Array Sum: " << sum << endl;
    return 0;
}