#include <iostream>
using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7}, sum = 0, n = 7;

    for (int i = 0; i < 7; i++)
    {
        sum += A[i];
    }
    cout << sum << endl;

    void fizzBuzz(int n)
    {

        for (int i = 1; i <= n; i++)
        {

            if (i % 3 == 0)
                &&(i % 5 == 0)
                {
                    cout << FizzBuzz << endl;
                }
        }
    }

    //system("pause");
    return 0;
}