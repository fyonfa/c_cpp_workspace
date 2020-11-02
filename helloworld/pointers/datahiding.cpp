#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLenght(int l)
    {
        if(l>0)
        {
            length = l;
        }
        else
        {
            cout<<"Length can not be negative."<<endl;
            length = 0;
        }
    }

    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth = b;
        }
        else
        {
            cout<<"Breadth can not be negative."<<endl;
            breadth = 0;
        }
    }
    
    int getlenght()
    {
        return length;
    }
    int getbreadth()
    {
            return breadth;
    }

};

int main()
{
    Rectangle r;
    r.setLenght(10);
    r.setBreadth(5);
    cout<<"Lenght is:" <<r.getlenght()<<endl;
    cout<<"breadth is:"<<r.getbreadth()<<endl;

    return 0;
}
