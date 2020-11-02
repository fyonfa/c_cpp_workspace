#include <iostream>
#include <map>
using namespace std;

int main()
{                       //key value pair
    map<int, string> m; //object m, key value is integer and value is string
    m.insert(pair<int, string>(1, "john"));
    m.insert(pair<int, string>(2, "Ravi"));
    m.insert(pair<int, string>(3, "Khan"));

    map<int, string>::iterator itr;

    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout << "value found is: " << endl;
    cout << itr1->first << " " << itr1->second << endl;

    //system("pause");
    return 0;
}