//selection-sort: it is a sort program created by me, just for fun and practice.
//time that i took to develop: start time:9.45h - end time:11h(coffee included.)
#include <iostream>

using namespace std;

int main()
{
    cout << "Insert how many numbers will be inserted: " << endl;
    int arraySize = 0;
    cin >> arraySize;
    int myArray[arraySize] = {0};

    //declare an int variable to store the smallest number
    int smallest = myArray[0];
    int tempValue = 0;
    int index = 0;
    bool found = false;
    int count = 0;

    //declaring my array and getting the size of this.
    //int myArray[14] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7, 2564, 6665, 8798, 556};
    int len = (sizeof(myArray) / sizeof(myArray[0]));

    cout << "Insert" << arraySize << "numbers please: " << endl;
    int j = 0;
    while (count < arraySize)
    {

        cin >> myArray[j];
        j++;
        count++;
    }

    cout << "The numbers sorted are: " << endl;

    //nested loop to get the small size and putting the smallest varible to the beginning of the array.
    for (int i = 0; i < len; i++) //check if less eq len or just less len
    {
        smallest = myArray[i];
        found = false;

        for (int j = i; j < len - 1; j++)
        {
            if (myArray[j + 1] < smallest)
            {
                smallest = myArray[j + 1];
                index = j + 1;
                found = true;
            }
        }
        if (found == false)
        {
            continue;
        }
        tempValue = myArray[i];
        myArray[i] = smallest;
        myArray[index] = tempValue;
        index = 0;
    }

    //Displaying array
    for (int i = 0; i < len; i++)
    {
        cout << myArray[i] << " " << endl;
    }
}