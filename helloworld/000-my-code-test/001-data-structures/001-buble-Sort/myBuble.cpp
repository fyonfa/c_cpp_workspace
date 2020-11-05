//myBuble: it is a sort program created by me, just for fun anc practice.
//time that i took to develop: 1 hour.(coffee included.)
#include <iostream>

using namespace std;

int main()
{

    cout << "Insert how many numbers will be inserted: " << endl;
    int arraySize = 0;
    cin >> arraySize;
    //declaring array of 10 ints and initialise it
    //declaring temporal value to store value and initialise it.
    int myArray[arraySize] = {0};
    int tempValue = 0;
    int count = 0;
    //returns the number of bytes that the array occupies, by default 1 int takes 4 bytes
    //char  : 1 byte
    //short : 2 bytes
    //int   : 4 bytes
    //long  : 4 bytes
    //float : 4 bytes
    //double: 8 bytes
    //so, if I divide the total number divided by one of them, I should get the len
    int len = (sizeof(myArray) / sizeof(myArray[0]));
    bool found = false;

    cout << "Insert" << arraySize << "numbers please: " << endl;
    int j = 0;
    while (count < arraySize)
    {

        cin >> myArray[j];
        j++;
        count++;
    }

    //repeat until the condition is false
    do
    {
        found = false;
        for (int i = 0; i < len - 1; i++)
        {

            if (myArray[i] > myArray[i + 1])
            {
                tempValue = myArray[i];
                myArray[i] = myArray[i + 1];
                myArray[i + 1] = tempValue;
                found = true;
            }
        }

    } while (found == true);

    //display array
    for (int i = 0; i < len; i++)
    {

        cout << myArray[i] << " ";
    }
}