#include <iostream>
#include <set>
using namespace std;

int main()
{
    //just display values
    set<int> v = {10, 20, 90, 70}; //by default, set of size 16
    v.insert(25);                  //inserted at the end
    v.insert(70);                  //will insert it at the end
    //v.pop_back();                 //last value will be removed

    /*
        //firt method
    for (int x : v) //simple for each loop introduced in c++11
        cout << x << " ";
        */

    set<int>::iterator itr; //= v.begin(); //begin available funct in all the containers, begin gives the start of the collections and end the las of the collection

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " "; //star because itr is like a pointer iside of the collection
    }

    //system("pause");
    return 0;
}