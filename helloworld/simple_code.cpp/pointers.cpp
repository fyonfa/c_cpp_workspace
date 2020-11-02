#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p; //declaration
    p=&x; // initialization

    cout << x<< endl;
    cout << &x<< endl;
    cout << p<< endl;
    cout << &p<< endl;
    cout << *p<< endl; //dedeferencing

    
    //system("pause");
    return 0;  
}