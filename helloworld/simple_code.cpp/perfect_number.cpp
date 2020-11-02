#include <iostream>

using namespace std;

int main()
{
    int fact = 1, n, sum=0;
    
    cout << "Insert the 'n' number: "<< endl;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        {
            sum +=i;
            cout <<"for "<<i<<"sum is: "<< sum<<endl;
        }
    }
    cout <<"Sum of the factor of a number is: "<< sum<< endl;
    cout <<"2*"<<n<<"="<<2*n << endl;

    if (2*n==sum)
    {
        cout <<"The sum of the factors is equal to 2*the sum"<<endl;
        cout <<"It is a perfect number!!"<<endl;
    }
    else
    {
        cout <<"The sum of the factors is NOT equal to 2*the sum"<<endl;
        cout << "Not a Perfect number!!"<<endl;
    }
    
    

    system("pause");
    return 0;
    
    
}