#include <iostream>

using namespace std;

int main()

{
    /*
    int a=10;
    int *p=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    */
/*
   int *p=new int[5];
   p[0]=12;
   p[1]=13;

   cout<<p[1]<<endl;
   delete[]p;
   p=nullptr;

    */
   
   int size1= 5;
   int size2 = 30;
   /*
   /////////////////////
   int myarray[size1];

   for(int i=0;i<=size1;i++)
   {
       myarray[i]=i;
       cout<<"MY Array1: "<<myarray[i]<<" "<<endl;
   }
    size2 = 30;
    for(int i=0;i<=size2;i++)
   {
       myarray[i]=i;
       cout<<"MY Array2: "<<myarray[i]<<" "<<endl;
   }
    */


   //////////////////////
   int *p=new int[size1];
   for(int i=0;i<=size1;i++)
   {
       p[i]=i;
       cout<<"Array1: "<<p[i]<<" "<<endl;
   }
   
   cout<<"Lenght pointer 1: "<< sizeof p<<endl;
   delete[]p;
   p=nullptr;
   ////////////////////
   p=new int[size2];
   for(int i=0;i<=size2;i++)
   {
       p[i]=i;
       cout<<"Array 2: "<<p[i]<<" "<<endl;
   }
   
   cout<<"Lenght pointer 2: "<< sizeof p<<endl;
   delete[]p;
   p=nullptr;



    return 0;


}