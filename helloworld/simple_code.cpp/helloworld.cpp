#include <iostream>
#include <cmath>
using namespace std; // we have to use this also with the iostream library header

//Hello world
/*int main()
{
    cout <<"Hello world"; // std :: cout << "hello world"
    return 0;


}
*/

//sum of two numbers
/*int main()
{
    int a, b, c;
    cout << "Print two numbers: \n";
    cin >> a >> b;
    c = a+b;
    cout << "Adittion is: "<< c;
    return 0;

}*/

//get line function to get whole line istead of a word
/*
int main()

{
    string name;
    cout << "may I know your name: ";
    getline(cin, name);
    cout << "Welcome Mrs/miss: "<<name;
    return 0;

}
*/

//suma de todos los numeros naturales hasta cierto numero dado
/*
int main()

{
    int n=0;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    sum = (n*(n+1))/2;

    cout <<"the result is: " << sum;

    return 0;
}
*/

//quadratic square
/*
int main()
{
    float a,b,c,r1,r2;
    cout << "Enter a, b, c: ";
    cin >>a >>b >>c;

    r1 = (-b+sqrt(b*b-4*a*c))/(2*a); 

    cout << "Roots are: " << r1<<" "<< r2;

    return 0;
}
*/

//Area circle
/*
int main()
{
    float r, area;
    cout << "Enter Radius: ";
    cin >> r;
    area = 3.1425f * r * r;
    cout << "Area is: "<<area << endl;
    return 0;
}
*/
//speed
/*
int main()
{
    int u,v,a;
    float speed;
    cout << "Enter 3 no (u,v,a): ";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout << "Speed is: "<<speed<< endl;

    return 0;
}
*/
//enum
/*
int main()
{
    
    enum day{mon, tue, wed, thu, sat, sun};

    day d;

    d=tue;

    cout << "day is: "<< d;

    return 0;

}
*/

/*
int main() {
    int houses,candyhouse=2;
    float result,percent;
    cin>>houses;
   

    //your code goes here
    //2/4=0.5 × 100 = 100 
    
    result =(float)candyhouse/houses ;
    percent =ceil(result*100);
    cout << percent ;
    
    return 0;
}
*/
//loops
/*
int main()
{
    int i = 0;
    while(i<10)
    {
        cout << "hello" << endl;
        i++;
    }

}
*/
//do while
/*
int main()
{
    int i = 0;
    do
    {
        cout << i<< " " << "hello" << endl;
        i++;
    } while (i<10);
    

}
*/
//for loop
/*
int main ()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i<< " " << "hello" << endl;
    }
    
}
*/
