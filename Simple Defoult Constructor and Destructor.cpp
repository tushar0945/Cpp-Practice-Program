#include <iostream>
using namespace std;
int count = 0;

class demo
{
public:
    demo()
    {
        count++;
        cout << "object " << count << " created " << endl;
    }
    ~demo()
    {
        count--;
        cout << "object " << count+1 << " deleted " << endl;
    }
};
int main()
{
    demo dm1, dm2, dm3;

    return 0;
}