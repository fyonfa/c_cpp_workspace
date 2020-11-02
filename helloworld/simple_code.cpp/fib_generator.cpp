#include <iostream>
using namespace std;

int main()
{
    //0,1,1,2,3,5,8,13,21
    //0,1,2,3,4,5,6, 7, 8
    //always the first two numbers are 0 and 1
    //n1 = 0, n2 = 1, nextResult
    //after display the first two numbers,
    //nextResult = n1(0)+n2(1) = 1, next result = 1
    //n1 = n2; then n1 is 1
    //n2 = nextResult; then n2 is 1
    //next loop:
    //nextresult = n1(1) + n2(1) = 2
    //n1 = n2;
    //n2 = nextResult
    //and so on...

    int n1 = 0;
    int n2 = 1;
    int nextResult = 0;
    int n = 0;
    cout << "Please insert a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 0 << " ";
            continue;
        }
        else if (i == 2)
        {
            cout << 1 << " ";
            continue;
        }
        nextResult = n1 + n2;
        n1 = n2;
        n2 = nextResult;

        cout << nextResult << " ";
    }

    //system("pause");
    return 0;
}