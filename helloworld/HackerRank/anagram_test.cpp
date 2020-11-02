#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> stringAnagram()
{
    vector<string> dictionary{"cba", "cbd", "zxc", "wxyz", "ab"};
    vector<string> query{"cba", "xyz", "zxs", "bc"};
    vector<int> myVector;

    /*Nested loop to compare each letter from the dictionary with the query*/
    for (int i = 0; i < dictionary.size(); i++)
    {
        if (dictionary[i].size() == query[i].size())
        {
            for (int j = 0; j < dictionary.size(); j++)
            {
                cout << dictionary[i][i];
                cout << query[i][j];
            }
            cout << endl;
        }
    }
    cout << dictionary[0].size() << endl;
    string str = "asalkjlsajksjkljljajslajklksjuiowuieuwoimd";
    string str2 = "hola";
    cout << (str == str2) << endl;
    sort(dictionary.begin(), dictionary.end());

    sort(str.begin(), str.end());
    cout << str;

    /*Main iteration
    vector<string>::iterator itr;
    for (itr = dictionary.begin(); itr != dictionary.end(); itr++)
    {
        //fout<<*itr<<endl;
        myVector.push_back(i);
    }
    cout << "size is : " << myVector.size() << endl;
    cout << dictionary[1][2] << endl;

    return myVector;

    */
    return myVector;
}

int main()
{
    vector<int> result = stringAnagram();

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]; //here it was fout before

        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }
}
