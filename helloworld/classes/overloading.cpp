#include <iostream>
using namespace std;
/* Operator overloading
class Complex //name, roll, marks
{
    private:
        //Declaring private variables
        int real;
        int img;
    public:
        //declaring constructor, default, it will assign 0 to all the arguments.
        Complex(int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }

    Complex operator+(Complex x) //this way I can add + in the main function
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }

};

int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
     
    //c3=c2.add(c1);
    //c3=c1.add(c2);
    //c3=c1operator+(c2);
    c3=c1+c2;

}*/

/*//Friend Operator overloading
class Complex //name, roll, marks
{
private:
        //Declaring private variables
        int real;
        int img;
    public:
        //declaring constructor, default, it will assign 0 to all the arguments.
        Complex(int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }

        void display()
        {
            cout<<real<<"+i"<<img;
        }

        friend Complex operator+(Complex c1, Complex c2);
        

};

Complex operator+(Complex c1, Complex c2) //this way I can add + in the main function
        {
            Complex temp;
            temp.real=c1.real+c1.real;
            temp.img=c1.img+c2.img;
            return temp;
        }

int main()
{
    Complex c1(5,3);
    Complex c2(10,5);
    Complex c3;
     
    //c3=c2.add(c1);
    //c3=c1.add(c2);
    //c3=c1operator+(c2);
    c3=c1+c2;
    c3.display();
}*/

//Insertion Operator Overloading

class Complex //name, roll, marks
{
private:
    //Declaring private variables
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend ostream &operator<<(ostream &out, Complex &c1);
};

ostream &operator<<(ostream &out, Complex &c1)
{
    out << c1.real << "+i" << c1.img;
    return out;
}

int main()
{

    Complex c(10, 5);
    cout << c;
}