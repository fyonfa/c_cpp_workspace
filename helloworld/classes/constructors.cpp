#include <iostream>
using namespace std;
/*
1.default constructor
2.non-parameterized
3.parameterized
4.copy constructor
*/

class  Rectangle
{
    private:
        int length;
        int breadth;
    public:
        void setlength(int l)
        {
            length=l;
        }
        void setbreadth(int b)
        {
            breadth=b;
        }
        int getlength()
        {
            return length;
        }
        int getbreadth()
        {
            return breadth;
        }
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }

        //overloaded constructors, 3 times
        Rectangle()//same name as the class, valid values are asigned, initialised
        {
            length = 0;
            breadth = 0;
        }
        
        Rectangle(int l=0, int b=0) //if we put the zeros, we dont need the rectanle above//taking values from outside, parameritized
        {
            //this functions suposed to be done
            setlength(l);
            setbreadth(b);
        }
        Rectangle(Rectangle &r) //copy constructor
        {
            length = r.length;
            breadth = r.breadth;
        }
        

};