#include<iostream>
using namespace std;

int area(int l, int b){
    return l*b;
}

int peri(int l, int b){
    return 2*(l+b);
}

int main(){
    int l =0, b = 0;
    cin>>l>>b;

    cout<<area(l,b)<<endl;
    cout<<peri(l,b)<<endl;
    
    return 0;

}