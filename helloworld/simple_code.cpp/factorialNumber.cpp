#include <iostream>

using namespace std;

int main()
{
    int fact = 1, n;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    cout<< "your number is "<<n<< endl;
    cout << "The factorial is: " << fact<<endl;

    system("pause");
    return 0;
    
    
}
