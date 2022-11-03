#include<iostream>
using namespace std;

int main()
{
   int a =10;
   int &r = a;

   // Above 2 lines means r is a 

   /*
   int a;  // variable
   int *a; // pointer;
   int &a; // reference
   
   */

  cout<<a<<endl;
  cout<<r<<endl;

  r++;

  cout<<a<<endl;
  cout<<r<<endl;

    a = 25;

    cout<<a<<endl;
    cout<<r<<endl;




    return 0;
}