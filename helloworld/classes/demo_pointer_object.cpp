#include <iostream>
using namespace std;

class  Rectangle
{
    public:
        int lenght;
        int breadth;

        int area()
        {
            return lenght*breadth;
        }
        int perimeter()
        {
            return 2*(lenght+breadth);
        }

};

int main()
{
    Rectangle r1;

    r1.lenght = 10;
    Rectangle *ptr=new Rectangle;
    
    ptr -> lenght = 10;
    ptr->breadth = 5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    cout<<&ptr<<endl;


    delete ptr;


}