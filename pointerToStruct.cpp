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

    Rect *p = &r;
    cout<<p->length<<endl;
    cout<<p->breath<<endl;



    return 0;
}
