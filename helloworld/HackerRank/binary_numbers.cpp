#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count = 0, len = 0, numberInput = 0, maxCount = 0, numberCounted = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    numberInput = n;

    int a[1000] = {0};

    if (n > 0)
    {

        for (i = 0; n > 0; i++)
        {

            a[i] = n % 2;
            n = n / 2;
        }
        len = i;

        for (i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }
    }
    else
    {
        cout << 0;
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            count += 1;
            if ((i == 0) && (count > maxCount))
            {
                maxCount = count;
            }

            else if ((numberCounted == 0 && i == 0))
            {
                maxCount = count;
            }
            continue;
        }

        if ((maxCount == 0) && (count == 0))
        {
            maxCount = 0;
        }
        else if (count > maxCount)
        {
            maxCount = count;
        }

        numberCounted += 1;

        count = 0;
    }

    cout << endl;

    cout << maxCount;

    return 0;
}
