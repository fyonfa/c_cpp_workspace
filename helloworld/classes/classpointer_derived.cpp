#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout << "fun of base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of derived" << endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d; //a pointer is of base class ptr and object derived class d
    ptr->fun1();
    //d.fun1();
    d.fun2();
    //system("pause");
    return 0;
}