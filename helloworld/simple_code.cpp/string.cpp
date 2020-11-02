#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    char S[]="Hello";
    cout <<S<<endl;
    string s = "helooooooooooo";
    char st[20];
    cout <<s<<endl;
    ///////////////////////////
    //read string from keyboard:
    cout << "Enter your name";
    cin >>st;

    char st [50];
    cin.get(st,50);
    cin.getline(st,50);
    */
   string mystring;

   cout <<"enter your string"<< endl;
   getline(cin,mystring);
   cout <<"esto es lo que digo: "<<mystring<<endl;
   cout<<"lenght = "<<mystring.length()<<endl;
   cout<<"capacity = "<<mystring.capacity()<<endl;
   cout<<"maxsize of this compiler = "<<mystring.max_size()<<endl;
   //mystring.clear();
   cout<<"empty = "<<mystring.empty()<<endl;

    //system("pause");
    return 0;  
}