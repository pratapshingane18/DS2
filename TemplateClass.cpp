#include<iostream>
using namespace std;

class Arithmetic{

private:
    
    int a;
    int b;

public:

    Arithmetic(int a, int b);
    int add();
    int sub();


};

    Arithmetic::Arithmetic(int a, int b){
    this->a = a;
    this->b = b;

}

int Arithmetic::add(){
    int c = a+b;
    return c;
}

int Arithmetic::sub(){
    int d = a-b;
    return d;

}

int main(){
    Arithmetic ar(10,5);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    return 0;
}