#include <iostream>
using namespace std;

class base1
{
protected:
    int data1;

public:
    void desplay1()
    {
        cout << "data1 is " << data1 << endl;
    }
    ~base1()
    {
    }
};

class base2
{
protected:
    int data2;

public:
    void desplay2()
    {
        cout << "data2 is " << data2 << endl;
    }
    ~base2()
    {
    }
};

class derived:public base1,public base2
{
private:
    int prod;

public:
    void get (void)
    {
        cout<<"Enter data1 and data2 "<<endl;
        cin>>data1>>data2;
    }
    void desplay3(void)
    {
        desplay1();
        desplay2(); 
    }
    void pro(void)
    {
        prod=data1*data2;
        cout<<"The product of data1 and data2 is "<<prod<<endl;
    }
    ~derived()
    {
    }
};

int main()
{
    derived d1;
    d1.get();
    d1.desplay3();
    d1.pro();
    return 0;
}