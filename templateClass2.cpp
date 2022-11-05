#include<iostream>
using namespace std;

template<class T>
class Arithmetic{

private:
    
    T a;
    T b;

public:

    Arithmetic(T a, T b);
    T add();
    T sub();


};
    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;

}

template<class T>

T Arithmetic<T>::add(){
    T c = a+b;
    return c;
}

template<class T>

T Arithmetic<T>::sub(){
    T d = a-b;
    return d;

}

int main(){
    Arithmetic<float> ar(34.65,23.12);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    return 0;

}