#include <iostream>
using namespace std;

class Shape
{

public:
    virtual float area() = 0; //pure virtual use
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float lenght;
    float breadth;

public:
    Rectangle(int l = 1, int b = 1) //Constructor
    {
        lenght = l;
        breadth = b;
    }

    float area()
    {
        return lenght * breadth;
    }
    float perimeter()
    {
        return 2 * (lenght + breadth);
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) //constructor
    {
        radius = r;
    }

    float area()
    {
        return 3.1425 * radius * radius;
    }
    float perimeter()
    {
        return 2 * 3.1425 * radius;
    }
};

int main()
{

    Rectangle s(10, 5);

    cout << s.area() << endl;
    cout << s.perimeter() << endl;

    Circle c(10);

    cout << c.area() << endl;
    cout << c.perimeter() << endl;

    /*
    Shape *s = new Rectangle(10, 5);
    cout << "Area of Rectangle: " << s->area() << endl;
    cout << "Perimeter of Rectangle: " << s->perimeter() << endl;

    s = new Circle(10);
    cout << "Area of Circle: " << s->area() << endl;
    cout << "Perimeter of Circle: " << s->perimeter() << endl;
    */
}
