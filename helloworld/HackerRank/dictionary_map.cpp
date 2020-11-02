#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int i = 0;
    string name = "";
    int number = 0;
    string searchName = "";
    map<string, int> phoneBook;

    //cout << "Insert how many numbers will be inserted: ";
    cin >> n;

    //loop to catch all the inputs for the phone book
    do
    {
        //cout << "Insert name and phone number: ";
        cin >> name >> number;
        phoneBook.insert(pair<string, int>(name, number));
        i++;
    } while (i < n);
    /*
    //display phone book:
    map<string, int>::iterator itr;
    for (itr = phoneBook.begin(); itr != phoneBook.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    */

    //search phone numbers in the array:
    //this solution worked with hacker rank, a loop to alow them to ask how many queries
    while (cin >> searchName)
    {
        /*
        cout << "Insert names to search: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> searchName;
        */
        map<string, int>::iterator itr1;
        itr1 = phoneBook.find(searchName);

        if (itr1 != phoneBook.end())
        {
            cout << itr1->first << "=" << itr1->second << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }

    return 0;
}