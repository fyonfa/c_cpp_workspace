#include <iostream>
#include <fstream>
using namespace std;

//Serialization: process of storing and retrieven state of an object

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;
    return ifs;
}

int main()
{

    Student s1;
    s1.name = "Leo";
    s1.roll = 10;
    s1.branch = "CS";

    ofstream ofs("Student.txt", ios::trunc);
    /*
    ofs << s1.name << endl;
    ofs << s1.roll << endl;
    ofs << s1.branch << endl;
*/
    //storing all object by overloading instead of doing above code

    ofs << s1;
    /*******************RETRIEVING************************/

    ifstream ifs("Student.txt");
    ifs >> s1;
    cout << "Name " << s1.name << endl;
    cout << "Roll " << s1.roll << endl;
    cout << "Branch " << s1.branch << endl;

    ofs.close();

    //system("pause");
    return 0;
}