#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("my.txt", ios::trunc); //ios::app , ios::trunc, trunc is taken by default

    outfile << "John" << endl;
    outfile << 25 << endl;
    outfile << 26 << endl;
    outfile.close();

    //system("pause");
    return 0;
}