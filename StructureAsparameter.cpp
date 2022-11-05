#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breath;


};

// Function taking struct as parameter 

void fun(struct Rect r){
    r.length =20;
    cout<<r.length<<endl<<r.breath<<endl;

}

int main(){
    struct Rect r={10,5};
    fun(r);
    cout<<r.length<<endl<<r.breath<<endl;

    return 0;
}