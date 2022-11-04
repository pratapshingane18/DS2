#include<iostream>
using namespace std;
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