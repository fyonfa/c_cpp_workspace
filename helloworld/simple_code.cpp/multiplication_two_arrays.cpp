#include <iostream>
using namespace std;

int main()
{
    //declare arrays, max 10x10
    int a[10][10]; 
    int b[10][10]; 
    int mult[10][10];
    int r1, c1,c2, r2, i, j, k;

    cout << "Enter the raws and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the raws and columns for the second matrix: ";
    cin >> r2 >> c2;

///////////////////////////////////////////////////////////////////////////
    while(c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows ans columns for the first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter the raws and columns for the second matrix: ";
        cin >> r2 >> c2;
    }
///////////////////////////////////////////////////////////////////////////
    //storing elements of the first matrix:

    cout <<"Enter elements of matrix 1: "<<endl;
    for(i=0; i<r1 ;i++)
    {
        for(j=0; j<c1;j++)
        {
            cout << "Enter a element a"<<"("<<i+1<<","<<j+1<<"):";
            cin >> a[i][j];
        }
    }

    //storing elements of the second matrix:

    cout <<"Enter elements of matrix 2: "<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout << "Enter a element a"<<i+1<<j+1<<" : ";
            cin >> b[i][j];
        }
    }
///////////////////////////////////////////////////////////////////////
    //displaying elements of the matrix:
    cout <<"Yor matrix1 is: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    //displaying elements of the matrix:
    cout <<"Yor matrix2 is: "<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
///////////////////////////////////////////////////////////////////////
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
            mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if(j == c2-1)
        cout << endl;
        }
        
    
    //system("pause");
    return 0;  
}