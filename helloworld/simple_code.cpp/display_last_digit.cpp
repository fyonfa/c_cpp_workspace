#include <iostream>

using namespace std;

int main()
{
    int n, r;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;
    
    while (n>0)
    {
        r=n%10;
        n=n/10; 
        cout << r <<endl;
    }
    

    system("pause");
    return 0;
    
    
}
