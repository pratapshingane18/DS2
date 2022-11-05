#include<iostream>
using namespace std;


struct rect{
    int l;
    int b;
};

void initializer(struct rect *r, int length, int breath){
    r->l =length;
    r->b =breath;

    
}
int area(struct rect r){
    return r.l*r.b;
}

int peri(struct rect r){
    return 2*(r.l+r.b);
}

int main(){
    rect r={0,0};
    int l,b;
    cin>>l>>b;

    initializer(&r, l , b);

    cout<<area(r)<<endl;
    cout<<peri(r)<<endl;
    
    return 0;

}