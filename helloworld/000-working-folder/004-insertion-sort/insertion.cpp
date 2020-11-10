//Insertion-sort: it is a sort program created by me, just for fun and practice.
//time that i took to develop: start time:16.40 - end time: 17.20(coffee included.)
#include <iostream>

using namespace std;

int main()
{

    cout << "Insert how many numbers will be inserted: " << endl;
    int arraySize = 0;
    cin >> arraySize;
    int myArray[arraySize] = {0};
    //int myArray[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp = 0;
    int index = 0;
    int count = 0;

    int len = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Insert" << arraySize << "numbers please: " << endl;
    int k = 0;

    while (count < arraySize)
    {

        cin >> myArray[k];
        k++;
        count++;
    }

    for (int i = 1; i < len; i++)
    {
        temp = myArray[i];
        int j = i - 1;

        while (myArray[j] > temp)
        {

            myArray[j + 1] = myArray[j];
            j--;
        }
        myArray[j + 1] = temp;
    }

    //display array
    for (int i = 0; i < len; i++)
    {

        cout << myArray[i] << " ";
    }
}