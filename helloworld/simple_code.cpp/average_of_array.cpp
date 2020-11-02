#include <iostream>

using namespace std;

int main ()

{
    //variables initialization:
    int myarray [100] ={0}; //Array of 100 integers
    int sum = 0; 
    int n = 0; //numbers of elements in the array
    int result=0;

    //insert elements and get the array numbers
    cout << "Please insert the number of elements to be inserted: ";
    cin >> n;

    for (int i=1 ; i<=n; i++)
    {
        cout << "Please inset the "<<i<<" number: "<<endl;
        cin >> myarray[i];
        sum += myarray[i];
    }

    result = sum/n;

    //display the array filled on the screen
    cout<< "Your arrays is: ";
    for (int i=1 ; i<=n; i++)
    {
        cout << myarray[i]<<" ";
    }
    cout << "The average is: "<< result;



}