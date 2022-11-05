
/*
• Here the address of actual parameters are passed to formal
parameter and formal parameters must be pointers
• Any changes done inside function will modify the actual parameters

• One function cannot access value of another function directly but it
can access it indirectly through pointers
• Thus call by address is a suitable mechanism for modifying actual
parameters

*/

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int n1 = 10, n2 = 15;
    swap(&n1,&n2);

    cout<<n1<<endl<<n2;

    return 0;
}