#include <iostream>

using namespace std;

int main()
{
    int n, r, sum=0, m;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;
    m=n;
    
    while (n>0)
    {
        r=n%10;
        n=n/10; 
        sum += r*r*r;
              
    }
    if (sum == m)
    {
        cout << "Amstrong" <<endl;
    }
    else
    {
        cout<<"No Amstrong"<<endl;
    }
    
    

    system("pause");
    return 0;
    
    
}