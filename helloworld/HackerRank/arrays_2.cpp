#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    string inputString;
    //cout << "Insert number of Integers: " << endl;
    cin >> n;
    cin.ignore();
    //cout << "Insert the string of integers: " << endl;
    getline(cin, inputString);

    vector<string> myArray(n);
    vector<string> reversedArray(n);

    for (int i = 0, j = 0; inputString[i] != '\0'; i++)
    {
        if (inputString[i] != ' ')
        {
            myArray[j] = inputString[i];
            j++;
        }
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
    */

    for (int i = 0, j = n - 1; i < n; i++, j--) //j added
    {

        reversedArray[j] = myArray[i];
    }

    for (int i = 0; i < n; i++)
    {

        cout << reversedArray[i] << " ";
    }

    return 0;
}