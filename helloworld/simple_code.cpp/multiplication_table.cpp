#include <iostream>
using namespace std; 

int main()
{   
    int n;
    
    cout <<"This is the table of multiplication by10.\nPlease insert a number to get the multiplication table up to 10.\n";
    cout <<"Please insert a number here: ";
    cin >> n;
    for (int i = 1; i <=10; i++)
    {
        cout <<n<<"x"<< i <<"="<< i*n << endl;
    }
    system("pause");
    return 0;
    
}