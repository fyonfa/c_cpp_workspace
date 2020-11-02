#include <iostream>
using namespace std; 
//(n(n+1))/2, but we want to use a loop problem


int main ()
{
    int sum = 0, n;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;

    for (int i = 0; i <=n ; i++)
    {
        sum += i;
    }
    cout<< "your number is "<<n<< endl;
    cout << "The sum is: " << sum;
    return 0;
}