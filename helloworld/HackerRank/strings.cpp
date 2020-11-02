#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*I have used here basice elements but it could have been done with string class or more libraries*/
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int reps = 0;
    char s[100000] = "";
    int count = 0;
    char str1[100000] = "";
    char str2[100000] = "";

    //printf("Enter number: ");
    scanf("%d", &n);

    do
    {
        //printf("Enter String: ");
        scanf("%s", s);

        for (int i = 0, j = 0, k = 0; s[i]; i++)
        {
            if (i % 2 == 0)
            {
                str1[j] = s[i];
                j++;
            }
            else
            {
                str2[k] = s[i];
                k++;
            }
        }
        printf("%s %s\n", str1, str2);

        for (int i = 0; s[i]; i++)
        {
            str1[i] = '\0';
            str2[i] = '\0';
        }

        reps++;

    } while (reps < n);

    return 0;
}
