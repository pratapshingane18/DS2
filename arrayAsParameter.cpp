/*
• References are part of c++ programming, its one of the useful and
powerful mechanism of this language
• To make a function as call by reference we just need to add & in the
parameters, these are the references 
*/

#include<iostream>
using namespace std;

// Can be passed only by address not value or reference
void func(int A[]){
    cout<<sizeof(A)/sizeof(int)<<endl; // it will print the size of integer Pointer and not the size of an array


}

int main(){

    int A[] = {2,4,6,8,10};
    int n =5;
    func(A);
    cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    cout<<x<<" ";

    return 0;
}