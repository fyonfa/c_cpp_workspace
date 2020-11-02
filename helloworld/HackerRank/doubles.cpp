#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int inputInt;
    float inputDouble;
    int resultInt;
    double resultDouble;
    string mystring;
    string concatenated;

    // Read and save an integer, double, and String to your variables.
    //cin >> inputInt >> inputDouble;
    getline(cin, mystring);

    resultInt = inputInt + i;
    resultDouble = float(inputDouble) + d;
    // Note: If you have trouble reading the entire string, please go back and review    the Tutorial closely.
    concatenated = s + mystring;

    // Print the sum of both integer variables on a new line.
    cout << resultInt << endl;
    // Print the sum of the double variables on a new line.
    cout << resultDouble << endl;
    // Concatenate and print the String variables on a new line
    cout << concatenated << endl;
    // The 's' variable above should be printed first.

    return 0;
}