#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base class function\n";
    }
    void show()
    {
        cout << "Base class function\n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived class function\n";
    }
    void show()
    {
        cout << "Derived class function\n";
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print(); // Late binding (output: Derived class function)
    bptr->show();  // Early binding (output: Base class function)
    return 0;
}
