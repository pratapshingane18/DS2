#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breath;

};

// function will return a pointer of type Rect

struct Rect *fun(){
    struct Rect *p;
    p = new Rect;

    p->length =15;
    p->breath =24;

    return p;
}


// obj is not created by main fucntion it is created by fun fucntion and taken by main function
// Returning a pointer to a structure




int main(){

    struct Rect *ptr=fun();

    cout<<ptr->length<<endl<<ptr->breath<<endl;
   



    return 0;
}