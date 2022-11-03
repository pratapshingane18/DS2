#include<iostream>
using namespace std;


int add(int a, int b){
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    num1 = 12;
    num2 = 23;

    int res = add(num1, num2);
    cout<<res<<endl;

    return 0;
}