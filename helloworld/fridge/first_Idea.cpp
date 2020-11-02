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

int main()
{
    /****declaring variables****/
    string item;
    list<string>::iterator itr;
    list<string> fridge = {"apple", "bannana", "pear"};
    int finishProgram = 0;
    int insertItems = 1;
    int itemValid = 0;

    while (finishProgram == 0)
    {

        while (insertItems == 1)
        {
            while (itemValid == 0)
            {

                /****Asking the user for item to insert****/
                cout << "Insert items: " << endl;
                cin >> item;

                if (item == "")
                {
                    itemValid = 0;
                    cout << "Please insert a valid Item" << endl;
                }
                else
                {
                    itemValid = 1;
                }
            }

            fridge.push_front(item);
            itemValid = 0; //initialised again
            item.clear();

            /*****Itreate trought the list displaying elements****/

            /****displaying size of the array*****/

            cout << "Do you want to Insert more Items?" << endl;
            cout << "Insert '1' for Yes and '0' for No" << endl;
            cin >> insertItems;
        }

        for (itr = fridge.begin(); itr != fridge.end(); itr++)
        {
            cout << *itr << " " << endl;
        }

        cout << "Elements in the fridge: " << fridge.size() << endl;
        finishProgram = 1;
    }

    return 0;
}