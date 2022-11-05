#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breath;

};


int main(){
    struct Rect r  ={10,5};
    cout<<r.length<<endl;
    cout<<r.breath<<endl;

    // for normal variable use . operator 

    Rect *p = &r;
    cout<<p->length<<endl;
    cout<<p->breath<<endl;

    // for pointer use -> operator
    

    return 0;
}
