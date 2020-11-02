#include <iostream>
using namespace std;

int getsum(int a[6][6], int m, int n)
{
    int s = 0;
    for(int i = m; i < m+3; i++)
        for(int j = n; j < n+3; j++)
            if(!(i == m+1 && j == n) && !(i == m+1 && j == n+2))
               s += a[i][j];
    return s;
}

int main()
{
    int n, a[6][6], s;
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            cin >> a[i][j];
    s = getsum(a, 0, 0);
    for(int i = 0; i < 4; i++)
       for(int j = 0; j < 4; j++)
           if(getsum(a, i, j) > s)
              s = getsum(a, i, j);
    cout << s;
}