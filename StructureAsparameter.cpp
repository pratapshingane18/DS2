// passing by value in the following example

#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breath;


};

// Function taking struct as parameter 

void fun(struct Rect rt){
    rt.length =20; // values are not changes in main fucntion
    cout<<rt.length<<endl<<rt.breath<<endl;

}

int main(){
    struct Rect r={10,5};
    fun(r);
    cout<<r.length<<endl<<r.breath<<endl;

    return 0;
}