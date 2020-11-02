#include <bits/stdc++.h>

using namespace std;

void printArr(vector<vector<int>> arr) //Print the array Inputed from the user
{

    int len = arr.size();
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> getArray() //Input from User
{

    vector<vector<int>> arr(6); //it defines a dimension of 6 here
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6); //it gives it another dimension here

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return arr;
}

vector<vector<int>> pattern()
{
    vector<vector<int>> arr{{1, 1, 1}, {0, 1, 0}, {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr;
}

//get 16 types of hourglases in the input 6x6

void getHourglasses(vector<vector<int>> userArray)
{
    //lets see if we can get the first 3x3 array pattern
    //m*n is the size of the matrix
    int m = 3, n = 3; //by default the pattern is 3x3
    int len = userArray.size();
    vector<vector<int>> hourglass(3);

    //this is to give the dimension to the array
    hourglass.resize(m);
    for (int i = 0; i < m; i++)
    {
        hourglass[i].resize(n);
    }

    //initialising the array just in case;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            hourglass[i][j] = 0;
        }
    }

    int i_start = 0, j_start = 0, count_i = 0, count_j=0;
    int i_end = 0, j_end = 0;

  

    while (i_start < len)
    {
        i_start = count_i;
     
        for (int i = 0; i < m; i++, i_start++)
        {
            for (int j = 0; j < n; j++, j_start++)
            {
                hourglass[i][j] = userArray[i_start][j_start];
            }
            j_start=0;
        }
        

        printArr(hourglass);
        count_i ++;
                
    }
    
   int loop = 0;
    i_start = 0;
    count_j = 1;
    count_i = 0;

    while ( count_i <4)
    {
        j_start = count_j;
        i_start = count_i;
           
        for (int i = 0; i < m; i++, i_start++)
        {
            for (int j = 0; j < n; j++, j_start++)
            {
                hourglass[i][j] = userArray[i_start][j_start];
            }
            j_start=1;
        }
        count_i++; 

        printArr(hourglass);
        count_j=1;
    }


           

}


    


int main()
{
    //getHourglasses(getArray());
    getHourglasses(getArray());
    //printArr(getArray());

    return 0;
}
