#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
    
        //Constructors
        Rectangle(); //default //non parameretized
        Rectangle(int l, int b); //parameretized
        Rectangle(Rectangle &r); //Copy constructor

        //Mutators
        void setlength(int l);
        void setbreadth(int b);

        //Accessors
        int getlength(){return length;}
        int getbreadth(){return breadth;}

        //Facilitators
        int area();
        int perimeter();

        //Expector function//enquiry
        bool isSquare(); //bool

        //Distructor function
        ~Rectangle();

};

   

int main()
{
    
    
    
    //system("pause");
    return 0;  
}
 //Scope and resolution
 Rectangle :: Rectangle()
 {
     length = 1;
     breadth = 1;
 }

 Rectangle :: Rectangle(int length, int breatdh)
 {
     this->length = length;//pointer to avoid name ambiguity

     this->breadth = breadth;

 }

 Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
/*{
    .
    .
    .
    .
}*/