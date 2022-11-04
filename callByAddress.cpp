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