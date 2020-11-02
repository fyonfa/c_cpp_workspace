#include <iostream>
#include <string>
using namespace std;

int main()
{
 
    //string :: iterator it;
    //string :: reverse_iterator it;
    string str = "welcomeee";
    int count = 0;
/*
    for(it = str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }
   //cout<<str;
    cout<<endl;
    */
   for(int i=0;str[i]!='\0';i++)
   {
       count ++;
   }
   cout<<count<<endl;




    //system("pause");
    return 0;  
}