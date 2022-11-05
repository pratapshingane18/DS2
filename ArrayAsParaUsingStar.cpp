/*
• References are part of c++ programming, its one of the useful and
powerful mechanism of this language
• To make a function as call by reference we just need to add & in the
parameters, these are the references 
*/

#include<iostream>
using namespace std;
// we cannot use for each loop upon pointer
void func(int *A, int n){
    /*
    
    for(int x:A){
        cout<<x<<endl;
    }

    The above line will through an error
    So use for loop instead
    */

   A[0] = 15;
   
    

}

int main(){

    int A[] = {2,4,6,8,10};
    int n =5;
    func(A,n);
     
    for(int x:A)
    cout<<x<<" ";

    return 0;
}