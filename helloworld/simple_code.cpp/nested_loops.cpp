#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int n; //given dimension
    char symbol;

    cout << "Insert the dimension of the array: ";
    cin >> n;
    cout << "Insert the symbol to print in the pattern: ";
    cin >> symbol;
    /*
    cout << "Insert the typf of the pattern that you want:"<<endl;
    cout << "1. For square"<<endl;
    cout << "2. For triangle"<<endl;
    cout << "3. For rectangle"<<endl;
    */

    for (int i = 1; i <= 5; i++)
    {
        {
            for (int j = 1; j <= 5; j++)
            {
                /*normal array
               cout<<"("<<i<<","<<j<<") ";
               */
                /*Patter1
               cout<< count <<" "; 
               count ++; 
               */
                /*Patter2
               if (i>=j)
                    cout<<"*";
               */
                /*Pattern3
                if (i>=j)
                    cout<<" ";
                else//pattern3
                
                    cout<<"*";//patter3
                */
                /*
               //Pattern4

               if (i+j>=6-1)
                    cout<<"*";
                else
                
                    cout<<" ";
                */
            }
        }
        cout << endl;
    }

    //system("pause");
    return 0;
}