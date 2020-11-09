//Insertion-sort: it is a sort program created by me, just for fun and practice.
//time that i took to develop: start time:16.40 - end time: 17.20(coffee included.)
#include <iostream>

using namespace std;

int main()
{
    int myArray[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp = 0;
    int index = 0;

    int len = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 0; i < len; i++)
    {
        temp = myArray[i];

        for (int j = i - 1; j >= 0; j--)
        {

            if (temp < myArray[j])
            {
                index = j;
                myArray[j + 1] = myArray[j];
            }
        }
        myArray[index] = temp;
        index = 0;
    }

    //display array
    for (int i = 0; i < len; i++)
    {

        cout << myArray[i] << " ";
    }
}