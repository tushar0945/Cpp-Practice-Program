#include <iostream>
using namespace std;

class base
{
protected:
    int data1, data2;

public:
    void get(void)
    {
        cout << endl
             << "Enter data1 and data2 " << endl;
        cin >> data1 >> data2;
    }
    void desplay(void)
    {
        cout << "Value of data1 " << data1 << " and data2 " << data2 << endl;
    }
    ~base()
    {
    }
};

class derived1 : public base
{
private:
    int sum;

public:
    void add(void)
    {
        sum = data1 + data2;
        cout << "The addition of data1 and data2 is " << sum << endl;
    }
    ~derived1()
    {
    }
};

class derived2 : public base
{
private:
    int prod;

public:
    void mul(void)
    {
        prod = data1 * data2;
        cout << "The product of data1 and data2 is " << prod << endl;
    }
    ~derived2()
    {
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    d1.get();
    d1.desplay();
    d1.add();

    d2.get();
    d2.desplay();
    d2.mul();

    return 0;
}