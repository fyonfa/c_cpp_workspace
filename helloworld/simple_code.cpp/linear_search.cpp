#include <iostream>
using namespace std;

int main()
{
    int A[10]={6,11,25,8,15,7,12,20,9,14}, n=10;
    int key;

    cout << "Enter 10 numbers: ";

    for (int i=0; i < n; i++)
    {
        cin >> A[i]; 
        
    }
    
    cout << "Enter Key: ";

    cin >> key;

    for(int i=0;i<n;i++)
    {
        if(key == A[i])
        {
            cout << "found at: "<< i<<endl;
            system("pause");
            return 0;
        }
    }
    cout << "Not found!!"<< endl;

    
    
    
    system("pause");
    //return 0;  
}