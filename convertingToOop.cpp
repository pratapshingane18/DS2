#include<iostream>
using namespace std;


class rect{

private:
    int l;
    int b;

public:

void initializer( int length, int breath){
    l =length;
    b =breath;

    
}
int area(){
    return l*b;
}

int peri(){
    return 2*(l+b);
}


};
int main(){
    rect r;
    int l,b;
    cin>>l>>b;

    r.initializer(l , b);

    cout<<r.area()<<endl;
    cout<<r.peri()<<endl;
    
    return 0;

}