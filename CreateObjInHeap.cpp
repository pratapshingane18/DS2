#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breath;
};

int main(){
    struct Rect *p;

    //Allocating Dynamic memory in Heap Using C language
    // p = (struct Rect *)malloc(sizeof(struct Rect));

    // Using CPP

    p = new Rect;
    p->length = 10;
    p->breath = 5;

    cout<<p->length<<endl;
    cout<<p->breath<<endl;

    

    return 0;
}
