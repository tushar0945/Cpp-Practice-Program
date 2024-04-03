#include <iostream>
using namespace std;

class base
{
protected:
    int data1;

public:
    void desplay1(void)
    {
        cout << "Value of data 1 is " << data1 << endl;
    }
    ~base()
    {
    }
};

class deribed_base : public base
{
protected:
    int data2;

public:
    void desplay2(void)
    {
        cout << "Value of data 2 is " << data2 << endl;
    }
    ~deribed_base()
    {
    }
};

class pure_derived : public deribed_base
{
private:
    int data3;

public:
    void get(void)
    {
        cout << "Enter data1,data2,data3 " << endl;
        cin >> data1 >> data2 >> data3;
    }
    void desplay3(void)
    {
        cout << "Value of data 3 is " << data3 << endl;
    }
    void add(void)
    {
        desplay1();
        desplay2();
        desplay3();
        cout << "The addition of data1,data2,data3 is " << data1 + data2 + data3 << endl;
    }
    ~pure_derived()
    {
    }
};

int main()
{
    pure_derived d1;
    d1.get();
    d1.add();
    return 0;
}
