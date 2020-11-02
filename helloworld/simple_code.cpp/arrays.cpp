#include <iostream>
using namespace std;

int main()
{
    float A[5] = {1,2,3.5};
    char B[] = {'c',66, 'c'};

    //we can use a normal for loop and also the way below:

    for (auto i:A)            //this was introduced to c++11, not in the older versions
    {
        cout<<i<<endl;
    }
       for (auto i:B)            //this was introduced to c++11, not in the older versions
    {
        cout<<i<<endl;
    } 
    
    //system("pause");
    return 0;  
}