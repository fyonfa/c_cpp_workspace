#include <iostream>
using namespace std;

int main()
{
    int A[7]={4,8,6,9,5,2,7}, max=A[0], n=7;

    for (int i = 1; i < 7; i++)
    {
        if (A[i]>max)
            max = A[i];
        
    }
    cout << max <<endl;

    
    
    
    //system("pause");
    return 0;  
}