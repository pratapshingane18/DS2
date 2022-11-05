#include<iostream>
using namespace std;

// In the program below values are passed by value 
// changes made in add function is not reflecting in main function
// Call by values is best used when the functon made just takes the value and return some result


int add(int a, int b){

    // int c = a + b;
    a++;
    cout<<a<<endl;
    return 0;
}
int main(){
    int n1, n2;
    n1 = 10;
    n2 = 15;

    int sum = add(n1,n2);
    cout<<n1<<endl;
    return 0;
}