#include <iostream>
using namespace std;

class Base
{
    public:
    int a;
    void display()
    {
        cout<<"Display of Base "<<a<<endl;
    }

};
class Derived:public Base
{
    public:
        void show()
        {
            cout<<"show of derived"<<endl;
        }

};

int main()
{
    Derived d;
    d.a=100;
    d.show();
    d.display();

}