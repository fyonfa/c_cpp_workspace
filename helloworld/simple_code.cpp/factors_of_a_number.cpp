#include <iostream>

using namespace std;

int main()
{
    int fact = 1, n;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        {
            cout <<i<<" "<<"Is a factor of "<<n<<endl;
        }
    }
    

    system("pause");
    return 0;
    
    
}