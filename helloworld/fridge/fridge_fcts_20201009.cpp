/*The idea is to create a full functional program to insert food in the fridge (database/array).
The program will be in charge of:
    - Count how many items of each we have in the fridge.
    - Organise the food into categories
    - If you require to display the items, it will display it with options of "All" or "Categories".
    - If the user requires to take food out from the fridge a message will be displayed with the numbers of items remaining.
        · If the user search the program will tell if the item exist or not "buy it".
    - With more advance database the program will be able to suggest recipies.
*/
/****First release, Declare variables, and basic structure****/
#include <iostream>
#include <string>
#include <list>
using namespace std;

/*****Insert elements in to the array*****/
list<string> fridge()
{
    string item;
    list<string> fridge;

    while (item != "end")
    {

        cout << "Insert item. Type 'end' to end inserting." << endl;
        cin >> item;
        fridge.push_back(item);
    }

    return fridge;
}

/*****display elements in the array*****/
void displayFridge(list<string> myfridge)
{
    int i = 1;
    list<string>::iterator itr;
    cout << "*****The items in your fridge are: *****" << endl;
    for (itr = myfridge.begin(); itr != myfridge.end(); itr++, i++)
    {
        cout << "Item: " << i << " " << *itr << " " << endl;
    }
}

/***** MAIN *****/
int main()
{
    int choice;
    list<string> myfridge;
    list<string>::iterator itr;

    cout << "***FRIDGE SYSTEM***" << endl;
    do
    {
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Insert items in the fridge";
        cout << "\n\t2 Display items on fridge";
        cout << "\n\t3 Remove items";
        cout << "\n\t7 Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:

            itr = myfridge.end();
            myfridge.splice(itr, fridge());
            break;
        case 2:
            displayFridge(myfridge);
            break;
        }

    } while (choice != 7);

    return 0;
}