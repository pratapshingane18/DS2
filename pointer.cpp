#include<iostream>


using namespace std;

int main(){
    int a = 10;
    cout<<a<<endl;

    // int *p;
    // p = &a;
    // a = 15;
    // cout<<p<<endl; //print address
    // cout<<*p<<endl; //print value at address.

    //pointer to array:

    int A[5] = {1,2,3,4,5};
    int *p;
    p =A;
    for(int i =0; i <5; i++){
        cout<<p[i]<<endl;
        // cout<<A[i]<<endl;  // Same thing
    }
   
    cout<<p[0]<<endl;
    int *pt = &A[0];
    cout<<*pt<<endl;

    return 0;
}
