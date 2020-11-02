#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n)
{
    int result = 1;

    if (n > 0)
    {

        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    cout << result << "\n";

    fout.close();

    return 0;
}
