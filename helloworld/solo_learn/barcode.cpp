#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    int len = 0;
    int allnumbers = 0;

    getline(cin, str);
    len = str.size();

    for (int i = 0; i <= len - 1; i++)
    {
        if ((str[i] >= 48) && (str[i] <= 57))
        {

            allnumbers = 1;
        }

        else
        {

            allnumbers = 0;
            break;
        }
    }

    cout << allnumbers << endl;
    cout << len << endl;

    //system("pause");
    return 0;
}