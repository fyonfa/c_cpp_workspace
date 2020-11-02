#include <iostream>
#include <string>   
using namespace std;
//Special characters: !=33,@=64, #=35, $=36, %=37, &=38, *=42
int main()
{   
    //Declaring vairables
    string mypass;
    bool has_symbol = 0;
    int count_symbol = 0;
    cout<<"Enter the password: "<<endl;
    getline(cin,mypass);

    //iterate trough each letter using string method instead of char[]

    //count special characters
    for(int i = 0;i<mypass.size();i++)
    {
        if((mypass[i] == '!') || (mypass[i] == '@') || (mypass[i] == '#') || (mypass[i] == '$') || (mypass[i] == '%') || (mypass[i] == '&') || (mypass[i] == '*'))
        {
            //has_symbol = 1;
            count_symbol ++;        
        }
        else
        {
            has_symbol = 0;
        }
        
        //cout<<mypass[i]<<endl;
    }

    cout<<"Mypass is: "<<mypass<<endl;
    cout<<"len is: "<<mypass.size()<<endl;
    cout<<"many symbols: "<<count_symbol<<endl;




 
    
    
    //system("pause");
    return 0;  
}