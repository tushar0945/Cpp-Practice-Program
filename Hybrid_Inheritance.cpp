#include <iostream>
using namespace std;

class base1
{
protected:
    int base1_member;

public:
    void desplay1(void)
    {
        cout << "The value of data member in 1st base class is " << base1_member << endl;
    }
    ~base1()
    {
    }
};

class base2
{
protected:
    int base2_member;

public:
    void desplay2(void)
    {
        cout << "The value of data member in 1st base class is " << base2_member << endl;
    }
    ~base2()
    {
    }
};

class derived1 : public base1
{
protected:
    int derive1_member;

public:
    void desplay3(void)
    {
        cout << "The value of data member in 1st derived class is " << derive1_member << endl;
    }
    void add1(void)
    {
        cout << "The additon of " << base1_member << " and " << derive1_member << " is " << base1_member + derive1_member << endl;
    }
    ~derived1()
    {
    }
};

class derived2 : public derived1, public base2
{
private:
    int derive2_member;

public:
    void get(void)
    {
        cout << "Enter value of data member 1st base class " << endl;
        cin >> base1_member;
        cout << "Enter value of data member 2nd base class " << endl;
        cin >> base2_member;
        cout << "Enter value of data member in 1st derived class " << endl;
        cin >> derive1_member;
        cout << "Enter value of data member in 2nd derived class " << endl;
        cin >> derive2_member;
    }
    void desplay4(void)
    {
        desplay1();
        desplay2();
        desplay3();
        cout << "The value of data member in 1st derived class is " << derive2_member << endl;
    }
    void add2(void)
    {
        cout << "The additon of " << base2_member << " and " << derive2_member << " is " << base2_member + derive2_member << endl;
    }

    void add3(void)
    {
        cout << "The additon of " << base2_member << " , " << base2_member << " , " << derive1_member << " , " << derive2_member << " is " << base1_member + base2_member + derive1_member + derive2_member << endl;
    }
};

int main()
{
    derived2 d2;

    d2.get();
    d2.desplay4();
    d2.add1();
    d2.add2();
    d2.add3();
    return 0;
}