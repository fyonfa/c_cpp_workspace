#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("my.txt"); //flags: ios::in, ios::out //File must be existing
    if (!infile.is_open())
    {
        cout << "file cannot be opened";
    }
    string str;
    int x;
    infile >> str; //will read first str
    infile >> x;   //will read second int
    cout << str << " " << x << " " << x << endl;

    if (!infile.eof())
    {
        cout << "EOF reached" << endl;
        ;
    }

    infile.close();

    //system("pause");
    return 0;
}