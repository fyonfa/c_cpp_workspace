#include <iostream>
#include <string>
using namespace std;

int main()
{
 
    string str = "1racecar1";
    string rev;   
    int len = 0;
    bool PAL = 0;

    //find the lenght of the string, I wil use a for loop but I could have used the str.len() :)    
    for(int i = 0; str[i] != '\0'; i++ )
    {
        len++;
    }
    cout<<"lenght is: "<<len<<endl; //display lenght
    cout<<"using the ftc str.lengh() "<<str.length()<<endl;//just to compare

    ////rezise string rev, if not always is 0 and it wont work///
    rev.resize(len);

    //copy all the elements in the array str to the rev array
    for(int i = len-1, j=0; i>=0 ; i--, j++)
    {
        rev[j] = str[i];

    }
    cout<<rev<<endl;//displaying rev string

    ///checking if is palindrome or not by checkin elements by element and comparing

    for(int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i]!=rev[i])
        {
            PAL = 0;
            break;
        }           
        else
        {
            PAL = 1;
        }
        
    }
    cout<<"PALINDROME = "<<PAL<<endl;




    //system("pause");
    return 0;  
}